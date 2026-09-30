/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton3Delegate$$BeginInvoke
ENTRY_POINT: 074052fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_GetBoneSkeleton3Delegate__BeginInvoke
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  
  FUN_04d60e5c(param_2,param_3,*param_1,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
  *puVar3 = param_2;
  thunk_FUN_03d233cc(puVar3,param_2);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *unaff_x22;
  }
  puVar2 = PTR_DAT_08eb6300;
  puVar1 = PTR_DAT_08eb62f8;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar4 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb62f0);
    FUN_04d75ad4(lVar6,uVar7,*(undefined8 *)PTR_DAT_08eb6310,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *plVar5 = lVar6;
    thunk_FUN_03d233cc(plVar5,lVar6);
  }
  uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_057f213c(uVar7,3,param_2,lVar6,*(undefined8 *)puVar1);
  return uVar7;
}


