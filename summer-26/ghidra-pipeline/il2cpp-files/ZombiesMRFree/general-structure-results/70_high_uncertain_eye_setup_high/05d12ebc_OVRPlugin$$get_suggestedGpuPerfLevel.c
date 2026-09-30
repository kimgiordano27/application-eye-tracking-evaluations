/*
FUNCTION_NAME: OVRPlugin$$get_suggestedGpuPerfLevel
ENTRY_POINT: 05d12ebc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__get_suggestedGpuPerfLevel(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000007c;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 1000));
  *(undefined1 *)(unaff_x21 + 0x8cb) = 1;
  lVar2 = *unaff_x23;
  in_stack_00000028 = 0;
  _uStack0000000000000020 = 0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *unaff_x23;
  }
  puVar4 = *(undefined4 **)(lVar2 + 0xb8);
  uStack000000000000007c = *puVar4;
  uVar9 = puVar4[1];
  uVar10 = puVar4[2];
  *unaff_x19 = unaff_s10;
  unaff_x19[1] = unaff_s9;
  unaff_x19[2] = unaff_s8;
  if (unaff_x20 == 0) {
LAB_05d13040:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar2 = *(long *)(unaff_x20 + (long)(int)uVar5 * 8 + 0x20);
      uVar1 = FUN_05c386c4(lVar2,0);
      if (lVar2 == 0) goto LAB_05d13040;
      if ((uVar1 & 1) == 0) {
        uVar8 = unaff_s8;
        uVar11 = unaff_s9;
        uVar6 = FUN_06975eb0(lVar2,0);
      }
      else {
        FUN_06975f6c(&stack0x00000008,lVar2,0);
        uVar8 = in_stack_00000010;
        uVar11 = uStack000000000000000c;
        uVar6 = uStack0000000000000008;
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_05d1c860(&stack0x00000020,uVar1 & 1);
      uVar3 = FUN_05d16c04(uStack000000000000007c,uVar9,uVar10,&stack0x00000020);
      if ((uVar3 & 1) != 0) {
        uVar7 = unaff_s10;
        uVar9 = unaff_s9;
        uVar10 = unaff_s8;
        if ((uVar1 & 1) == 0) {
          uVar7 = uVar6;
          uVar9 = uVar11;
          uVar10 = uVar8;
        }
        *unaff_x19 = uVar7;
        unaff_x19[1] = uVar9;
        unaff_x19[2] = uVar10;
        uStack000000000000007c = uStack0000000000000020;
        uVar9 = uStack0000000000000024;
        uVar10 = in_stack_00000028;
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar1);
  }
  return uStack000000000000007c;
}


