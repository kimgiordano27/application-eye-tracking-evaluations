/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 04c1b064
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long in_x9;
  long lVar8;
  int *piVar9;
  long lVar10;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar9 + -2) == param_3) {
      lVar3 = param_1 + (long)(*piVar9 + param_4) * 0x10 + 0x138;
      goto LAB_04c1b0a0;
    }
    in_x9 = in_x9 + -1;
    piVar9 = piVar9 + 4;
  } while (in_x9 != 0);
  lVar3 = FUN_02ce0a7c();
LAB_04c1b0a0:
  lVar3 = thunk_FUN_02d0bd98(*(undefined8 *)(lVar3 + 8));
  uVar4 = (**(code **)(lVar3 + 8))();
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar4;
  uVar4 = thunk_FUN_02cea894(*unaff_x25);
  Unity_Burst_Intrinsics_Arm_Neon__vmulq_n_f64(uVar4,*unaff_x24,0);
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 8) = uVar4;
  lVar3 = thunk_FUN_02cea894(*unaff_x23);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (lVar3,*unaff_x22);
  puVar1 = PTR_DAT_065c9448;
  if (lVar3 != 0) {
    lVar10 = *(long *)(lVar3 + 0x10);
    uVar4 = *(undefined8 *)PTR_DAT_065e14a8;
    lVar8 = *(long *)PTR_DAT_065c9448;
    iVar5 = *(int *)(lVar3 + 0x1c) + 1;
    *(int *)(lVar3 + 0x1c) = iVar5;
    puVar2 = PTR_DAT_065ce308;
    if (lVar10 != 0) {
      uVar6 = *(uint *)(lVar3 + 0x18);
      if (uVar6 < *(uint *)(lVar10 + 0x18)) {
        uVar7 = uVar6 + 1;
        *(uint *)(lVar3 + 0x18) = uVar7;
        *(undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20) = uVar4;
      }
      else {
        FUN_039683cc(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        uVar7 = *(uint *)(lVar3 + 0x18);
        iVar5 = *(int *)(lVar3 + 0x1c);
      }
      uVar4 = *(undefined8 *)puVar2;
      lVar8 = *(long *)(lVar3 + 0x10);
      lVar10 = *(long *)puVar1;
      iVar5 = iVar5 + 1;
      *(int *)(lVar3 + 0x1c) = iVar5;
      puVar2 = PTR_DAT_065e14b0;
      if (lVar8 != 0) {
        if (uVar7 < *(uint *)(lVar8 + 0x18)) {
          uVar6 = uVar7 + 1;
          *(uint *)(lVar3 + 0x18) = uVar6;
          *(undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20) = uVar4;
        }
        else {
          FUN_039683cc(lVar3,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          uVar6 = *(uint *)(lVar3 + 0x18);
          iVar5 = *(int *)(lVar3 + 0x1c);
        }
        uVar4 = *(undefined8 *)puVar2;
        lVar10 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar1;
        iVar5 = iVar5 + 1;
        *(int *)(lVar3 + 0x1c) = iVar5;
        puVar2 = PTR_DAT_065e14c0;
        if (lVar10 != 0) {
          if (uVar6 < *(uint *)(lVar10 + 0x18)) {
            uVar7 = uVar6 + 1;
            *(uint *)(lVar3 + 0x18) = uVar7;
            *(undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20) = uVar4;
          }
          else {
            FUN_039683cc(lVar3,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            uVar7 = *(uint *)(lVar3 + 0x18);
            iVar5 = *(int *)(lVar3 + 0x1c);
          }
          uVar4 = *(undefined8 *)puVar2;
          lVar8 = *(long *)(lVar3 + 0x10);
          lVar10 = *(long *)puVar1;
          iVar5 = iVar5 + 1;
          *(int *)(lVar3 + 0x1c) = iVar5;
          puVar2 = PTR_DAT_065e14b8;
          if (lVar8 != 0) {
            if (uVar7 < *(uint *)(lVar8 + 0x18)) {
              uVar6 = uVar7 + 1;
              *(uint *)(lVar3 + 0x18) = uVar6;
              *(undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20) = uVar4;
            }
            else {
              FUN_039683cc(lVar3,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              uVar6 = *(uint *)(lVar3 + 0x18);
              iVar5 = *(int *)(lVar3 + 0x1c);
            }
            uVar4 = *(undefined8 *)puVar2;
            lVar8 = *(long *)(lVar3 + 0x10);
            lVar10 = *(long *)puVar1;
            *(int *)(lVar3 + 0x1c) = iVar5 + 1;
            if (lVar8 != 0) {
              if (uVar6 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar6 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar6 * 8 + 0x20) = uVar4;
              }
              else {
                FUN_039683cc(lVar3,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10) = lVar3;
              FUN_04c19b84();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


