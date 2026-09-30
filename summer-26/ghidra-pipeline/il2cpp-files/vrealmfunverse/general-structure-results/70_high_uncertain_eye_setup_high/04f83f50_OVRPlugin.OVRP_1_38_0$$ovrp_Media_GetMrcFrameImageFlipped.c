/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameImageFlipped
ENTRY_POINT: 04f83f50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameImageFlipped(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x78) != 0)) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x78) + 0x18);
    lVar1 = FUN_04332268();
    if ((lVar1 != 0) && (plVar6 != (long *)0x0)) {
      lVar3 = *plVar6;
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      uStack0000000000000014 = *(undefined8 *)(lVar1 + 0x44);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(lVar1 + 0x38);
      uStack000000000000000c = (undefined4)*(undefined8 *)(lVar1 + 0x3c);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x3c) >> 0x20);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)UnityEngine_InputSystem_UI_PointerModel_var) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_04f8400c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02b7654c(plVar6,*(long *)UnityEngine_InputSystem_UI_PointerModel_var,1);
LAB_04f8400c:
      in_stack_00000048 = uStack0000000000000008;
      uStack0000000000000054 = uStack0000000000000014;
      uStack000000000000004c = uStack000000000000000c;
      in_stack_00000050 = uStack0000000000000010;
      in_stack_00000040 = uVar7;
      (*(code *)*puVar2)(&stack0x00000020 + 4,plVar6,&stack0x00000040,puVar2[1]);
      unaff_x19[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
      *unaff_x19 = in_stack_00000020._4_8_;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000038;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
      return unaff_w20 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


