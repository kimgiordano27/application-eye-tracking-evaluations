/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureHeight
ENTRY_POINT: 05d40550
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


void OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureHeight
               (ulong param_1,undefined4 param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *unaff_x21;
  long unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 uStack000000000000002c;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb5bf8);
    *(undefined1 *)(unaff_x22 + 0xae8) = 1;
  }
  uVar1 = *param_4;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar2 = FUN_05d40244(uVar1);
  lVar3 = *(long *)(param_3 + 0x140);
  if (lVar3 != 0) {
    if (uVar2 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
      *(undefined4 *)(lVar3 + 0x20) = param_2;
      *(undefined4 *)(lVar3 + 0x24) = unaff_s10;
      *(undefined4 *)(lVar3 + 0x28) = unaff_s9;
      *(undefined4 *)(lVar3 + 0x2c) = unaff_s8;
      lVar3 = *(long *)(param_3 + 0xd0);
      if (lVar3 == 0) goto LAB_05d40608;
      if (uVar2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined4 *)(lVar3 + (long)(int)uVar2 * 4 + 0x20) = 0x3f800000;
        uStack000000000000002c = 2;
        FUN_05d40610(param_3,uVar2,&stack0x0000002c,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
LAB_05d40608:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


