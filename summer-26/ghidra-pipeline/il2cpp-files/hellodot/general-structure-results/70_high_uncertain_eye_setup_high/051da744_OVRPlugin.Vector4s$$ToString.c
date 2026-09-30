/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 051da744
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Vector4s__ToString
               (ulong param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d3e10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca370);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06609090);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066090d0);
    *(undefined1 *)(unaff_x26 + 0x59a) = 1;
  }
  uStack000000000000000c = param_3;
  uVar1 = thunk_FUN_02cea4e8(*unaff_x25,&stack0x0000000c);
  uVar1 = FUN_04db0cfc(*unaff_x24,uVar1,0);
  lVar2 = thunk_FUN_02cea894(*unaff_x23);
  FUN_05ef6494(lVar2,uVar1,0);
  if ((lVar2 != 0) && (lVar2 = FUN_034248f0(lVar2,*(undefined8 *)PTR_DAT_065d3e10), lVar2 != 0)) {
    FUN_05f509dc(0x3f800000,lVar2,0);
    FUN_05f50bb8(lVar2,1,0);
    FUN_05f50ab0(lVar2,0,0);
    FUN_05f50d38(lVar2,3,0);
    lVar3 = FUN_05ef2cb4(lVar2,0);
    if (lVar3 != 0) {
      FUN_05f02644(lVar3,param_4,0,0);
      uVar1 = FUN_05ef2cb4(lVar2,0);
      FUN_05157c90(uVar1,param_5,0,0);
      FUN_05f51a28(lVar2,0);
      lVar3 = FUN_05ef2cf0(lVar2,0);
      if (lVar3 != 0) {
        FUN_05ef60b0(lVar3,0,0);
        lVar3 = FUN_05ef2cf0(lVar2,0);
        if (lVar3 != 0) {
          FUN_05ef5fec(lVar3,*(undefined4 *)(param_2 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


