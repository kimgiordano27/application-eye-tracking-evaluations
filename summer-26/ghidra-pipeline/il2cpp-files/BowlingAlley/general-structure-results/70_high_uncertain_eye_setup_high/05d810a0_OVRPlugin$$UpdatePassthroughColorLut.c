/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 05d810a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__UpdatePassthroughColorLut
               (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  undefined8 *unaff_x23;
  float unaff_s8;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar3;
  float unaff_s15;
  float fVar4;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727c1a8);
    thunk_FUN_032e1da0(PTR_DAT_0727b958);
    *(undefined1 *)(unaff_x22 + 0x818) = 1;
  }
  lVar1 = thunk_FUN_032a56a0(*unaff_x23);
  FUN_06be9c64(lVar1,param_5,0);
  if ((lVar1 != 0) && (lVar1 = FUN_039efc38(lVar1,*(undefined8 *)PTR_DAT_0727c1a8), lVar1 != 0)) {
    FUN_06c4227c(lVar1,*(undefined1 *)(param_4 + 0x48),0);
    fVar4 = unaff_s15 - (float)param_2;
    fVar3 = unaff_s14 - (float)param_3;
    FUN_06bddffc(fVar4,0);
    if (DAT_076cd828 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279c00);
      DAT_076cd828 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    fVar3 = SQRT((unaff_s13 - unaff_s8) * (unaff_s13 - unaff_s8) + fVar4 * fVar4 + fVar3 * fVar3) -
            ABS(unaff_s11);
    FUN_06c42eb8(lVar1,0);
    FUN_06c42f40(unaff_s12 + unaff_s12 + fVar3,lVar1,0);
    FUN_06c42fc8(lVar1,2,0);
    if (DAT_076cd75f == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_072795b0);
      DAT_076cd75f = '\x01';
    }
    fVar3 = unaff_s11 + fVar3 * 0.5;
    lVar2 = *(long *)(*(long *)PTR_DAT_072795b0 + 0xb8);
    FUN_06c42de4(fVar3 * *(float *)(lVar2 + 0x48),fVar3 * *(float *)(lVar2 + 0x4c),
                 fVar3 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_06be6b04(lVar1,0);
    if (lVar2 != 0) {
      FUN_06bf5194(lVar2,param_6,0,0);
      FUN_06bf52dc(param_2,param_3,lVar2,0);
      lVar2 = FUN_06be6b40(lVar1,0);
      if (lVar2 != 0) {
        FUN_06be9a54(lVar2,*(undefined4 *)(param_4 + 0x4c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


