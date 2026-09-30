/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$ovrp_SetAppChromaticCorrection
ENTRY_POINT: 05bed690
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_7_0__ovrp_SetAppChromaticCorrection(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  int unaff_w19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (unaff_w19 == 0) {
    if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_069e53e4(&stack0x00000040,0);
    uVar6 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
    uVar7 = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    in_stack_00000020 = in_stack_00000040;
  }
  else {
    lVar1 = FUN_05bea010();
    if (lVar1 == 0) {
      in_stack_00000020 = *unaff_x21;
      uStack0000000000000028 = (undefined4)unaff_x21[1];
      uStack0000000000000034 = (undefined4)*(undefined8 *)((long)unaff_x21 + 0x14);
      uStack0000000000000038 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0x14) >> 0x20);
      uStack000000000000002c = (undefined4)*(undefined8 *)((long)unaff_x21 + 0xc);
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
    }
    else {
      plVar2 = (long *)FUN_05bea010();
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar1 = *plVar2;
      uVar6 = *unaff_x21;
      uStack0000000000000014 = *(undefined8 *)((long)unaff_x21 + 0x14);
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      uStack0000000000000008 = (undefined4)unaff_x21[1];
      uStack000000000000000c = (undefined4)*(undefined8 *)((long)unaff_x21 + 0xc);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112a48) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_05bed76c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)PTR_DAT_07112a48,1);
LAB_05bed76c:
      uStack0000000000000048 = uStack0000000000000008;
      uStack0000000000000054 = uStack0000000000000014;
      uStack000000000000004c = uStack000000000000000c;
      uStack0000000000000050 = uStack0000000000000010;
      in_stack_00000040 = uVar6;
      (*(code *)*puVar3)(&stack0x00000020,plVar2,&stack0x00000040,puVar3[1]);
    }
    uVar6 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    uStack0000000000000054 = CONCAT44(uStack0000000000000038,uStack0000000000000034);
    uVar7 = CONCAT44(uStack0000000000000030,uStack000000000000002c);
  }
  unaff_x20[1] = uVar6;
  *unaff_x20 = in_stack_00000020;
  *(undefined8 *)((long)unaff_x20 + 0x14) = uStack0000000000000054;
  *(undefined8 *)((long)unaff_x20 + 0xc) = uVar7;
  return unaff_w19 != 0;
}


