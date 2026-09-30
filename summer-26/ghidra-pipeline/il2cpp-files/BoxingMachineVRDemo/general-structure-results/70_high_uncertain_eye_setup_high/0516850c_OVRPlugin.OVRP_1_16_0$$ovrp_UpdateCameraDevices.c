/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 0516850c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar12;
  
  uVar5 = thunk_FUN_04e8bd3c(param_1,param_2,0);
  if ((uVar5 & 1) == 0) {
    if (unaff_x22 == 0) goto LAB_051688a0;
    FUN_04e9195c();
    if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d900);
    }
    FUN_05167dbc();
    if (unaff_x20 == (long *)0x0) goto LAB_051688a0;
    lVar12 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06782640) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_05168798;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05168798:
    (*(code *)*puVar8)();
    if (unaff_x19 == (long *)0x0) goto LAB_051688a0;
    lVar12 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067823f0) goto LAB_05168868;
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (unaff_x21 == (long *)0x0) {
LAB_051688a0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = (**(code **)(*unaff_x21 + 0x288))();
    puVar3 = PTR_DAT_06782588;
    puVar2 = PTR_DAT_06782560;
    puVar1 = PTR_DAT_0677d900;
    if ((uVar5 & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      do {
        iVar4 = (**(code **)(*unaff_x21 + 0x238))();
        if (iVar4 == 0xd) break;
        plVar6 = (long *)(**(code **)(*unaff_x21 + 0x248))();
        if (plVar6 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          if (plVar6 == (long *)0x0) goto LAB_051688a0;
          uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar5 = thunk_FUN_04e8bd3c(uVar7,*(undefined8 *)puVar2,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = thunk_FUN_04e8bd3c(uVar7,*(undefined8 *)puVar3,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = thunk_FUN_04e8bd3c(uVar7,*(undefined8 *)PTR_DAT_06782558,0);
            if ((uVar5 & 1) == 0) {
              plVar6 = (long *)(**(code **)(*unaff_x21 + 0x248))();
              uVar7 = thunk_FUN_02dc61f4(PTR_DAT_067826f8);
              if (plVar6 == (long *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              }
              FUN_04e83184(uVar7,uVar9,0);
              goto LAB_051688b0;
            }
            FUN_0509917c();
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05167dbc();
            lVar10 = *unaff_x21;
          }
          else {
            FUN_0509917c();
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05167dbc();
            lVar10 = *unaff_x21;
          }
        }
        else {
          FUN_0509917c();
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          lVar12 = FUN_05167dbc();
          lVar10 = *unaff_x21;
        }
        uVar5 = (**(code **)(lVar10 + 0x288))();
      } while ((uVar5 & 1) != 0);
    }
    if (lVar12 == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_067826e8);
LAB_051688b0:
      uVar7 = FUN_050924a8();
      uVar9 = thunk_FUN_02dc61f4(PTR_DAT_067826f0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar9);
    }
    if (unaff_x20 == (long *)0x0) goto LAB_051688a0;
    lVar12 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06782640) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_05168800;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05168800:
    (*(code *)*puVar8)();
    if (unaff_x19 == (long *)0x0) goto LAB_051688a0;
    lVar12 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067823f0) goto LAB_05168868;
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar8 = (undefined8 *)FUN_02d9a5d4();
  goto FUN_05168878;
LAB_05168868:
  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 7) * 0x10 + 0x138);
FUN_05168878:
                    /* WARNING: Could not recover jumptable at 0x0516889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)();
  return;
}


