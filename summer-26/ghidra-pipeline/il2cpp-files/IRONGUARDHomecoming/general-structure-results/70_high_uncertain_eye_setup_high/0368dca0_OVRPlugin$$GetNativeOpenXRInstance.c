/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 0368dca0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint OVRPlugin__GetNativeOpenXRInstance(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  long in_x10;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
      goto LAB_0368dcdc;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0368dcdc:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__653_45__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_0368d66c();
    if ((uVar3 & 1) != 0) {
      fVar7 = (float)in_stack_00000018;
      fVar9 = (float)((ulong)in_stack_00000018 >> 0x20);
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      uVar8 = *(undefined8 *)
               (*(float **)
                 (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8) +
               1);
      fVar6 = (in_stack_00000010._4_4_ + in_stack_00000010._4_4_) -
              **(float **)
                (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
      fVar7 = (fVar7 + fVar7) - (float)uVar8;
      fVar9 = (fVar9 + fVar9) - (float)((ulong)uVar8 >> 0x20);
      if (DAT_00c92314 <= fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7) {
        if ((*(long *)(unaff_x20 + 0x20) == 0) ||
           (lVar4 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0407e9e4(*unaff_x19,unaff_x19[1],unaff_x19[2],lVar4,0);
        uVar1 = FUN_04042a68(&stack0x00000008,0);
        goto LAB_0368ddd4;
      }
    }
  }
  uVar1 = 0;
LAB_0368ddd4:
  return uVar1 & 1;
}


