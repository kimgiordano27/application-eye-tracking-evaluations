/*
FUNCTION_NAME: System.Xml.Schema.XmlValueGetter$$.ctor
ENTRY_POINT: 053db724
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Xml_Schema_XmlValueGetter___ctor(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int in_w8;
  long lVar5;
  
                    /* try { // try from 053db72c to 054db76b has its CatchHandler @ 053db814 */
  if (in_w8 == 0) {
                    /* try { // try from 053db790 to 054db7a3 has its CatchHandler @ 053db810 */
    uVar2 = FUN_053db9e4(param_1);
  }
  else {
    lVar5 = *(long *)(param_2 + 0x10);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) == 0)) {
      uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar3 = FUN_02b3c908(uVar2,1);
      uVar2 = FUN_053d6158(param_1);
                    /* try { // try from 053db804 to 054db807 has its CatchHandler @ 053db810 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053db778 with catch @ 053db808
                       try { // try from 053db808 to 054db82f has its CatchHandler @ 053db640 */
      FUN_0275e13c(uVar3);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053db76c with catch @ 053db80c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053db790 with catch @ 053db810
                       catch(type#1 @ 05fbf508) { ... } // from try @ 053db804 with catch @ 053db810
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053db72c with catch @ 053db814
                        */
      FUN_0275a400(uVar3,uVar2);
      FUN_0275a434(uVar3,0,uVar2);
      puVar4 = OVRPlugin_Quatf_TypeInfo;
      goto LAB_053db884;
    }
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 053db76c to 054db777 has its CatchHandler @ 053db80c */
      uVar1 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
      if ((uVar1 & 1) == 0) {
                    /* try { // try from 053db778 to 054db783 has its CatchHandler @ 053db808 */
        lVar5 = FUN_053db97c(lVar5,param_1);
      }
    }
    uVar2 = FUN_053d6258(lVar5);
  }
  if (*(char *)(param_2 + 0x21) == '\0') {
    lVar5 = FUN_053dc3cc(param_1);
  }
  else {
                    /* try { // try from 053db7a4 to 054db803 has its CatchHandler @ 053db640 */
    lVar5 = *(long *)(param_2 + 0x18);
    if (lVar5 == 0) {
      uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar3 = FUN_02b3c908(uVar2,1);
      uVar2 = FUN_053d6158(param_1);
      FUN_0275e13c(uVar3);
      FUN_0275a400(uVar3,uVar2);
      FUN_0275a434(uVar3,0,uVar2);
      puVar4 = OVRPlugin_Result_TypeInfo;
LAB_053db884:
      uVar2 = thunk_FUN_02ba3594(puVar4);
      uVar2 = FUN_0540ce80(uVar2,uVar3,0);
      thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar3 = thunk_FUN_02b79644();
      FUN_053f0c5c(uVar3,uVar2,0);
      uVar2 = FUN_0540c738(uVar3,0);
      uVar3 = thunk_FUN_02ba3594(OVRPlugin_Size3f_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2,uVar3);
    }
    FUN_053dc168(lVar5,param_1);
  }
  FUN_053d69b4(uVar2,lVar5);
  return;
}


