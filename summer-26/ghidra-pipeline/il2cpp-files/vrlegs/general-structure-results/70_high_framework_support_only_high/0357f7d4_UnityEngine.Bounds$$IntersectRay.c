/*
FUNCTION_NAME: UnityEngine.Bounds$$IntersectRay
ENTRY_POINT: 0357f7d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_Bounds__IntersectRay(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
  if ((*(byte *)(unaff_x20 + 0x51) & 1) == 0) {
    FUN_01ab69ac(
                _Common_Gameplay_Support_Scripts_InviteCodes_PromoCodeManager_<>c__DisplayClass39_0_TypeInfo
                );
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x51) = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = 
  _Common_Gameplay_Support_Scripts_InviteCodes_PromoCodeManager_<>c__DisplayClass39_0_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x78);
  do {
    lVar5 = FUN_027b7178(lVar4,param_1,0);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar2;
      lVar6 = thunk_FUN_01a89d6c(lVar5,uVar7);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar5,uVar7);
      }
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = FUN_01aa50f0(*(long *)(lVar5 + 0xb8) + 0x78,lVar6,lVar4);
    bVar3 = lVar4 != lVar5;
    lVar4 = lVar5;
  } while (bVar3);
  return;
}


