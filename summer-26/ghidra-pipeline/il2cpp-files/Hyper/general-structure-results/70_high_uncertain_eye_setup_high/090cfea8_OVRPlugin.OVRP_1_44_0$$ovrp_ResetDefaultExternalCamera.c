/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_ResetDefaultExternalCamera
ENTRY_POINT: 090cfea8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_44_0__ovrp_ResetDefaultExternalCamera
               (ulong param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar5;
  
  puVar3 = *(undefined8 **)(unaff_x23 + 0xb60);
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac796b8);
    FUN_04947ee4(PTR_DAT_0ac0ab60);
    *(undefined1 *)(unaff_x22 + 0x542) = 1;
  }
  lVar1 = thunk_FUN_04983f60(*puVar3);
  FUN_0a17c2c0(lVar1,param_5,0);
  if ((lVar1 != 0) && (lVar1 = FUN_05bde8d8(lVar1,*(undefined8 *)PTR_DAT_0ac796b8), lVar1 != 0)) {
    FUN_0a1edcd8(lVar1,*(undefined1 *)(param_4 + 0x48),0);
    fVar5 = unaff_s15 - param_2;
    FUN_0a16abe8(fVar5,0);
    if (DAT_0b32d33b == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0a830);
      DAT_0b32d33b = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    fVar5 = SQRT((unaff_s13 - unaff_s8) * (unaff_s13 - unaff_s8) +
                 fVar5 * fVar5 + (unaff_s14 - param_3) * (unaff_s14 - param_3)) - ABS(unaff_s11);
    FUN_0a1ece68(unaff_s12,lVar1,0);
    FUN_0a1ecff0(unaff_s12 + unaff_s12 + fVar5,lVar1,0);
    FUN_0a1ed178(lVar1,2,0);
    if (DAT_0b32d23b == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b32d23b = '\x01';
    }
    fVar4 = 0.0;
    if (0.0 <= unaff_s11) {
      fVar4 = unaff_s11;
    }
    lVar2 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
    fVar4 = fVar4 + fVar5 * 0.5;
    FUN_0a1ecce0(fVar4 * *(float *)(lVar2 + 0x48),fVar4 * *(float *)(lVar2 + 0x4c),
                 fVar4 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_0a17834c(lVar1,0);
    if (lVar2 != 0) {
      FUN_0a18ac70(lVar2,param_6,0,0);
      FUN_0a18aea0(param_2,param_3,lVar2,0);
      lVar2 = FUN_0a178414(lVar1,0);
      if (lVar2 != 0) {
        FUN_0a17b958(lVar2,*(undefined4 *)(param_4 + 0x4c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


