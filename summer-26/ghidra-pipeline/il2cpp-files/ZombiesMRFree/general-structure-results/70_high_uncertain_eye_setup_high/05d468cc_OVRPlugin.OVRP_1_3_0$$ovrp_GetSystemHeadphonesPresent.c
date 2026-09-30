/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetSystemHeadphonesPresent
ENTRY_POINT: 05d468cc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_3_0__ovrp_GetSystemHeadphonesPresent
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float param_5
               ,float param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar7;
  
  fVar6 = param_5;
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f70f40);
    FUN_02fe925c(PTR_DAT_06f6de20);
    *(undefined1 *)(unaff_x22 + 0xb51) = 1;
  }
  lVar1 = thunk_FUN_0301080c(*unaff_x23);
  FUN_068f8d14(lVar1,param_8,0);
  if ((lVar1 != 0) && (lVar1 = FUN_03c732ac(lVar1,*(undefined8 *)PTR_DAT_06f70f40), lVar1 != 0)) {
    FUN_06975de4(lVar1,*(undefined1 *)(param_7 + 0x48),0);
    param_5 = param_5 - (float)param_2;
    param_6 = param_6 - (float)param_3;
    fVar7 = unaff_s13 - (float)param_4;
    fVar4 = param_6;
    fVar5 = fVar7;
    uVar3 = FUN_068ed124(param_5,0);
    if (DAT_0738e6c8 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e6c8 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    fVar7 = SQRT(fVar7 * fVar7 + param_5 * param_5 + param_6 * param_6) - ABS(unaff_s11);
    FUN_06976f40(lVar1,0);
    FUN_06976fc8(unaff_s12 + unaff_s12 + fVar7,lVar1,0);
    FUN_06977050(lVar1,2,0);
    if (DAT_0738e660 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e660 = '\x01';
    }
    fVar7 = unaff_s11 + fVar7 * 0.5;
    lVar2 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    FUN_06976e6c(fVar7 * *(float *)(lVar2 + 0x48),fVar7 * *(float *)(lVar2 + 0x4c),
                 fVar7 * *(float *)(lVar2 + 0x50),lVar1,0);
    lVar2 = FUN_068f5d7c(lVar1,0);
    if (lVar2 != 0) {
      FUN_06904d10(lVar2,param_9,0,0);
      FUN_06904e58(param_2,param_3,param_4,uVar3,fVar4,fVar5,fVar6,lVar2,0);
      lVar2 = FUN_068f5db8(lVar1,0);
      if (lVar2 != 0) {
        FUN_068f8b00(lVar2,*(undefined4 *)(param_7 + 0x4c),0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


