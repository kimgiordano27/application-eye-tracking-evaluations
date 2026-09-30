/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 05bc499c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000008;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05bc49e0;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bc49e0:
  uVar2 = (*(code *)*puVar1)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05bc4a3c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bc4a3c:
  auVar7 = (*(code *)*puVar1)();
  uVar3 = auVar7._8_8_;
  if (unaff_x22 != 0) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x180);
    *(int *)(unaff_x22 + 0x20) = auVar7._0_4_;
    *(undefined4 *)(unaff_x22 + 0x24) = in_stack_00000008._4_4_;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      FUN_05bc6df0(*(long *)(unaff_x22 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8(auVar7._0_8_,uVar3);
}


