/*
FUNCTION_NAME: OVRPlugin$$get_hmdPresent
ENTRY_POINT: 04f596a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hmdPresent(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_04f59804();
  FUN_04f5d3b4(&stack0x00000020 + 4);
  uVar3 = in_stack_00000038;
  uVar2 = uStack0000000000000030;
  puVar1 = 
  UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
  ;
  plVar10 = *(long **)(unaff_x19 + 0x180);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
           ) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_04f59724;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02b7654c(plVar10,*(long *)
                                   UnityEngine_XR_OpenXR_Features_Interactions_OculusTouchControllerProfile_OculusTouchController_var
                          ,3);
LAB_04f59724:
    uStack0000000000000048 = in_stack_00000020._12_4_;
    in_stack_00000040 = in_stack_00000020._4_8_;
    uStack0000000000000054 = uVar3;
    uStack000000000000004c = uVar2;
    uStack0000000000000050 = uStack0000000000000034;
    (*(code *)*puVar6)(plVar10,&stack0x00000040,puVar6[1]);
    plVar10 = *(long **)(unaff_x19 + 0x180);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_04f597a0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,5);
LAB_04f597a0:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
      uVar4 = FUN_04f5df80();
      uVar5 = FUN_04f5e1b0();
      uVar4 = (*(uint *)(unaff_x19 + 0x178) | uVar4) & (uVar5 ^ 0xffffffff);
      *(uint *)(unaff_x19 + 0x178) = uVar4;
      if ((uVar5 != 0) && (uVar4 == 0)) {
        *(undefined1 *)(unaff_x19 + 0x169) = 1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


