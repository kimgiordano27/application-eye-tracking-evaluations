/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$.cctor
ENTRY_POINT: 04f9268c
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


bool OVRPlugin_OVRP_1_66_0___cctor(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  if (unaff_w22 == 0) {
    if (*(int *)(*(long *)PTR_DAT_063185a8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c9a2f0(&stack0x00000040,0);
    uVar6 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    uVar7 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    in_stack_00000000._4_8_ = in_stack_00000040;
    in_stack_00000018 = uStack0000000000000054;
LAB_04f92778:
    unaff_x19[1] = uVar6;
    *unaff_x19 = in_stack_00000000._4_8_;
    *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
    *(undefined8 *)((long)unaff_x19 + 0xc) = uVar7;
    return unaff_w22 != 0;
  }
  lVar1 = FUN_04332268();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x38) != 0)) {
    in_stack_00000020 = *(undefined8 *)(unaff_x21 + 0x10);
    plVar5 = *(long **)(*(long *)(lVar1 + 0x38) + 0x10);
    uStack0000000000000034 = *(undefined8 *)(unaff_x21 + 0x24);
    uStack0000000000000028 = (undefined4)*(undefined8 *)(unaff_x21 + 0x18);
    uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x21 + 0x1c);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x21 + 0x1c) >> 0x20);
    if (plVar5 != (long *)0x0) {
      lVar1 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)UnityEngine_InputSystem_UI_PointerModel_var) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_04f92748;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02b7654c(plVar5,*(long *)UnityEngine_InputSystem_UI_PointerModel_var,1);
LAB_04f92748:
      uStack0000000000000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack0000000000000054 = uStack0000000000000034;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      (*(code *)*puVar2)(&stack0x00000000 + 4,plVar5,&stack0x00000040,puVar2[1]);
      uVar6 = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      uVar7 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      goto LAB_04f92778;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


