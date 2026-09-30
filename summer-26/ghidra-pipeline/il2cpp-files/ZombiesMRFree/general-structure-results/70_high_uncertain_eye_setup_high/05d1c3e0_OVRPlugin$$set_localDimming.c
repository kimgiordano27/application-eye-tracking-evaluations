/*
FUNCTION_NAME: OVRPlugin$$set_localDimming
ENTRY_POINT: 05d1c3e0
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


void OVRPlugin__set_localDimming
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  undefined4 uVar3;
  
  while (**(long **)(param_5 + 0xb8) != 0) {
    if ((long)*(int *)(**(long **)(param_5 + 0xb8) + 0x18) <= (long)unaff_x21) {
      return;
    }
    lVar1 = FUN_05d1c304();
    if (lVar1 == 0) break;
    lVar1 = FUN_05d1c1b0(lVar1,unaff_x21 & 0xffffffff);
    if (lVar1 != 0) {
      if (*unaff_x19 == 0) break;
      lVar2 = FUN_05d18ce8();
      uVar3 = FUN_05d1bec4(lVar1);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar2 = lVar2 + unaff_x24;
      *(undefined4 *)(lVar2 + 0x20) = uVar3;
      *(undefined4 *)(lVar2 + 0x24) = param_2;
      *(undefined4 *)(lVar2 + 0x28) = param_3;
      *(undefined4 *)(lVar2 + 0x2c) = param_4;
    }
    unaff_x21 = unaff_x21 + 1;
    unaff_x24 = unaff_x24 + 0x10;
    param_5 = *unaff_x25;
    if (*(int *)(param_5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      param_5 = *unaff_x25;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


