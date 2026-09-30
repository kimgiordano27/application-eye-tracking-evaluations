/*
FUNCTION_NAME: FUN_053dc488
ENTRY_POINT: 053dc488
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_9;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_053dc488(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined1 local_3c [4];
  undefined8 local_38;
  
  puVar6 = PTR_DAT_06322478;
  local_38 = param_2;
  if ((DAT_066d0a02 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_TextureRectMatrixf_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06322478);
    FUN_02b3c81c(OVRPlugin_OVRP_1_50_0_TypeInfo);
    DAT_066d0a02 = 1;
  }
  local_3c[0] = 0;
                    /* try { // try from 053dc4f4 to 054dc4ff has its CatchHandler @ 053dc644 */
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar2 = FUN_053dc84c();
                    /* try { // try from 053dc500 to 054dc55b has its CatchHandler @ 053dc0f8 */
  if (param_1 != (long *)0x0) {
    lVar3 = (**(code **)(*param_1 + 0x218))(param_1,uVar2,0,*(undefined8 *)(*param_1 + 0x220));
    puVar1 = OVRPlugin_TextureRectMatrixf_TypeInfo;
    puVar6 = OVRPlugin_OVRP_1_50_0_TypeInfo;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
                    /* try { // try from 053dc570 to 054dc57b has its CatchHandler @ 053dc668 */
                    /* try { // try from 053dc57c to 054dc587 has its CatchHandler @ 053dc664 */
      *param_4 = 0;
      thunk_FUN_02bb0e9c(param_4,0);
                    /* try { // try from 053dc588 to 054dc58b has its CatchHandler @ 053dc660 */
                    /* try { // try from 053dc58c to 054dc58f has its CatchHandler @ 053dc65c */
      uVar2 = FUN_053dc950(&local_38);
                    /* try { // try from 053dc590 to 054dc59b has its CatchHandler @ 053dc0f8 */
                    /* try { // try from 053dc59c to 054dc59f has its CatchHandler @ 053dc624 */
                    /* try { // try from 053dc5a0 to 054dc5ab has its CatchHandler @ 053dc638 */
      uVar2 = FUN_04bffdac(*(undefined8 *)puVar6,uVar2,0);
                    /* try { // try from 053dc5ac to 054dc5bb has its CatchHandler @ 053dc648 */
      lVar3 = FUN_053db3f8(local_38,param_3,local_3c);
                    /* try { // try from 053dc5bc to 054dc5c3 has its CatchHandler @ 053dc0f8 */
      if (lVar3 == 0) goto LAB_053dc6c0;
                    /* try { // try from 053dc5c4 to 054dc5c7 has its CatchHandler @ 053dc644 */
      uVar2 = FUN_04bffdac(uVar2,*(undefined8 *)(lVar3 + 0x10),0);
                    /* try { // try from 053dc5d4 to 054dc5d7 has its CatchHandler @ 053dc618 */
                    /* try { // try from 053dc5d8 to 054dc5fb has its CatchHandler @ 053dc614 */
      lVar3 = FUN_053dca14(*(undefined8 *)(lVar3 + 0x18));
    }
    else {
      if ((int)*(long *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar7 = *(long **)(lVar3 + 0x20);
      if (plVar7 == (long *)0x0) {
        *param_4 = 0;
      }
      else {
        lVar3 = *(long *)OVRPlugin_TextureRectMatrixf_TypeInfo;
        if (*plVar7 != lVar3) {
LAB_053dc564:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar7,lVar3);
        }
        *param_4 = (long)plVar7;
        lVar3 = *(long *)puVar1;
                    /* try { // try from 053dc55c to 054dc55f has its CatchHandler @ 053dc670 */
                    /* try { // try from 053dc560 to 054dc56f has its CatchHandler @ 053dc67c */
        if (*plVar7 != lVar3) goto LAB_053dc564;
      }
      thunk_FUN_02bb0e9c(param_4);
      lVar3 = *param_4;
                    /* try { // try from 053dc5fc to 054dc5ff has its CatchHandler @ 053dc620 */
      if (lVar3 == 0) goto LAB_053dc6c0;
                    /* try { // try from 053dc600 to 054dc603 has its CatchHandler @ 053dc61c */
                    /* try { // try from 053dc604 to 054dc607 has its CatchHandler @ 053dc610 */
      if (*(char *)(lVar3 + 0x39) == '\0') {
                    /* catch() { ... } // from try @ 053dc57c with catch @ 053dc664 */
        uVar2 = FUN_053db9e4(param_1);
      }
      else {
                    /* try { // try from 053dc608 to 054dc60b has its CatchHandler @ 053dc60c */
        lVar3 = *(long *)(lVar3 + 0x10);
                    /* catch() { ... } // from try @ 053dc608 with catch @ 053dc60c
                       try { // try from 053dc60c to 054dc69b has its CatchHandler @ 053dc0f8 */
                    /* catch() { ... } // from try @ 053dc604 with catch @ 053dc610 */
                    /* catch() { ... } // from try @ 053dc5d8 with catch @ 053dc614 */
        if ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) == 0)) {
          uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
          uVar5 = FUN_02b3c908(uVar2,1);
          uVar2 = FUN_053d6158(param_1);
          FUN_0275e13c(uVar5);
          FUN_0275a400(uVar5,uVar2);
          FUN_0275a434(uVar5,0,uVar2);
          puVar6 = OVRPlugin_TrackingConfidence_TypeInfo;
          goto LAB_053dc76c;
        }
                    /* catch() { ... } // from try @ 053dc5d4 with catch @ 053dc618 */
                    /* catch() { ... } // from try @ 053dc600 with catch @ 053dc61c */
                    /* catch() { ... } // from try @ 053dc5fc with catch @ 053dc620 */
                    /* catch() { ... } // from try @ 053dc59c with catch @ 053dc624 */
                    /* catch() { ... } // from try @ 053dc274 with catch @ 053dc628 */
        uVar4 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
                    /* catch() { ... } // from try @ 053dc244 with catch @ 053dc62c */
                    /* catch() { ... } // from try @ 053dc258 with catch @ 053dc630 */
                    /* catch() { ... } // from try @ 053dc1cc with catch @ 053dc634 */
                    /* catch() { ... } // from try @ 053dc5a0 with catch @ 053dc638 */
                    /* catch() { ... } // from try @ 053dc290 with catch @ 053dc63c */
                    /* catch() { ... } // from try @ 053dc234 with catch @ 053dc640 */
                    /* catch() { ... } // from try @ 053dc4f4 with catch @ 053dc644
                       catch() { ... } // from try @ 053dc5c4 with catch @ 053dc644 */
        if (((uVar4 & 1) != 0) &&
           (uVar4 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0)),
           (uVar4 & 1) == 0)) {
                    /* catch() { ... } // from try @ 053dc5ac with catch @ 053dc648 */
                    /* catch() { ... } // from try @ 053dc2a8 with catch @ 053dc64c */
                    /* catch() { ... } // from try @ 053dc3b4 with catch @ 053dc650 */
          lVar3 = FUN_053db97c(lVar3,param_1);
                    /* catch() { ... } // from try @ 053dc384 with catch @ 053dc654 */
        }
                    /* catch() { ... } // from try @ 053dc398 with catch @ 053dc658 */
                    /* catch() { ... } // from try @ 053dc58c with catch @ 053dc65c */
        uVar2 = FUN_053d6258(lVar3);
                    /* catch() { ... } // from try @ 053dc588 with catch @ 053dc660 */
      }
      lVar3 = *param_4;
      if (lVar3 == 0) goto LAB_053dc6c0;
      if (*(char *)(lVar3 + 0x3a) == '\0') {
        lVar3 = FUN_053dc3cc(param_1);
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x18);
        if (lVar3 == 0) {
          uVar2 = thunk_FUN_02ba3594(PTR_DAT_06313048);
          uVar5 = FUN_02b3c908(uVar2,1);
          uVar2 = FUN_053d6158(param_1);
          FUN_0275e13c(uVar5);
          FUN_0275a400(uVar5,uVar2);
          FUN_0275a434(uVar5,0,uVar2);
          puVar6 = OVRPlugin_UnityOpenXR_TypeInfo;
LAB_053dc76c:
          uVar2 = thunk_FUN_02ba3594(puVar6);
          uVar2 = FUN_0540ce80(uVar2,uVar5,0);
          thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
          uVar5 = thunk_FUN_02b79644();
          FUN_053f0c5c(uVar5,uVar2,0);
          uVar2 = FUN_0540c738(uVar5,0);
          uVar5 = thunk_FUN_02ba3594(OVRPlugin_Vector3f_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar2,uVar5);
        }
        FUN_053dc168(lVar3,param_1);
      }
    }
    FUN_053d69b4(uVar2,lVar3);
    return;
  }
LAB_053dc6c0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


