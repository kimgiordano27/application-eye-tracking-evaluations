/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 05be7298
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x12) * 0x10 + 0x138);
      goto LAB_05be72d0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05be72d0:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_069e53e4(&stack0x00000000 + 4,0);
    uVar3 = 0;
    unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *unaff_x19 = in_stack_00000000._4_8_;
    *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  }
  else {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x78) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar6 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x18);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07112a48) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_05be738c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_07112a48,2);
LAB_05be738c:
      (*(code *)*puVar1)(&stack0x00000000 + 4,plVar6);
      unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      *unaff_x19 = in_stack_00000000._4_8_;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    }
    uVar3 = 1;
  }
  return uVar3;
}


