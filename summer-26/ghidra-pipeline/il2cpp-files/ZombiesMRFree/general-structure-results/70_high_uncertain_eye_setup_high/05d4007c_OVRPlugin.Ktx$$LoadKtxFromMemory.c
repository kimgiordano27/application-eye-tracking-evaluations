/*
FUNCTION_NAME: OVRPlugin.Ktx$$LoadKtxFromMemory
ENTRY_POINT: 05d4007c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__LoadKtxFromMemory(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  uint unaff_w21;
  long *unaff_x22;
  ulong uVar3;
  long unaff_x23;
  undefined4 *puVar4;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0xbf8));
  *(undefined1 *)(unaff_x23 + 0xae5) = 1;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar1 = *unaff_x22;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= unaff_w21) {
LAB_05d4013c:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar1 = *(long *)(lVar1 + (long)(int)unaff_w21 * 8 + 0x20);
    if (lVar1 != 0) {
      if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
        uVar3 = 0;
        uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        puVar4 = (undefined4 *)(unaff_x19 + 0x2c);
        do {
          if (uVar2 <= uVar3) goto LAB_05d4013c;
          if (unaff_x19 == 0) goto LAB_05d40140;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar3) goto LAB_05d4013c;
          FUN_05d40144(puVar4[-3],puVar4[-2],puVar4[-1],*puVar4);
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 4;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
      return;
    }
  }
LAB_05d40140:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


