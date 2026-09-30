/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerAxisTypeNameFromEnum$$Invoke
ENTRY_POINT: 04318f2c
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerAxisTypeNameFromEnum__Invoke
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_x9;
  long *in_x10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (in_x9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *in_x10) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
        goto LAB_04318f74;
      }
      in_x9 = in_x9 + -1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20();
LAB_04318f74:
  iVar5 = (*(code *)*puVar6)();
  puVar4 = PTR_DAT_08f73948;
  puVar3 = PTR_DAT_08f73938;
  puVar2 = PTR_DAT_08f73918;
  puVar1 = PTR_DAT_08f73910;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_06ff01a8(&stack0x00000008,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f73908);
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000030;
    while (uVar7 = FUN_04fcfce0(&stack0x00000030,*(undefined8 *)puVar2), lVar8 = in_stack_00000048,
          (uVar7 & 1) != 0) {
      if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *(long *)(in_stack_00000040 + 0x30);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (iVar5 < *(int *)(lVar9 + 0x24)) {
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if (0 < (int)*(ulong *)(in_stack_00000048 + 0x18)) {
          uVar7 = 0;
          uVar10 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
          lVar9 = in_stack_00000048 + 0x20;
          do {
            if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_04031894();
            }
            FUN_042a550c(*(undefined8 *)(lVar9 + uVar7 * 8),0);
            uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
      }
    }
    FUN_04fcfdf4(&stack0x00000030,*(undefined8 *)puVar1);
    lVar8 = *(long *)puVar4;
    lVar9 = *(long *)(unaff_x19 + 0x28);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar8 = *(long *)puVar4;
    }
    puVar6 = *(undefined8 **)(lVar8 + 0xb8);
    lVar12 = puVar6[1];
    if (lVar12 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar6 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar13 = *puVar6;
      lVar12 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f73900);
      FUN_0532c238(lVar12,uVar13,*(undefined8 *)PTR_DAT_08f73940,0);
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar12;
    }
    if (lVar9 != 0) {
      FUN_057d5d8c(lVar9,lVar12,*(undefined8 *)puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


