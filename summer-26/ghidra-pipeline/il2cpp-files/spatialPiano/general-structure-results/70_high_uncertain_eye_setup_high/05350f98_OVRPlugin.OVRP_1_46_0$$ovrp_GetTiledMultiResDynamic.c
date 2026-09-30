/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$ovrp_GetTiledMultiResDynamic
ENTRY_POINT: 05350f98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_46_0__ovrp_GetTiledMultiResDynamic(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_06bbb572 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9c00);
    DAT_06bbb572 = 1;
  }
  puVar1 = PTR_DAT_067c9c00;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar2 = Newtonsoft_Json_Linq_JArray__FromObject(param_1,0);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = 0;
    do {
      uVar5 = FUN_050edca4(param_1,iVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar1);
      }
      iVar3 = FUN_05004da0(uVar5,0);
      iVar2 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
      iVar3 = Newtonsoft_Json_Linq_JArray__FromObject(param_1,0);
    } while (iVar4 < iVar3);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_050041b4(iVar2,0);
  iVar2 = Newtonsoft_Json_Linq_JArray__FromObject(param_1,0);
  if (0 < iVar2) {
    iVar2 = 0;
    uVar8 = uVar5;
    do {
      uVar6 = FUN_050edca4(param_1,iVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar1);
      }
      thunk_FUN_02f14b64(uVar6,uVar8,0,0);
      lVar7 = FUN_0511fb58(uVar8,0);
      uVar8 = FUN_050edca4(param_1,iVar2,0);
      iVar4 = FUN_05004da0(uVar8,0);
      uVar8 = FUN_0511fb4c(lVar7 + iVar4,0);
      iVar2 = iVar2 + 1;
      iVar4 = Newtonsoft_Json_Linq_JArray__FromObject(param_1,0);
    } while (iVar2 < iVar4);
  }
  return uVar5;
}


