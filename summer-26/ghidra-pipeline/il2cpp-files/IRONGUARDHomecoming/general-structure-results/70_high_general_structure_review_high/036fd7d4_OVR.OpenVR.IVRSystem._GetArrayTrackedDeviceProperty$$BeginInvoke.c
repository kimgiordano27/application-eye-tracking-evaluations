/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetArrayTrackedDeviceProperty$$BeginInvoke
ENTRY_POINT: 036fd7d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


long OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty__BeginInvoke(void)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  undefined8 uVar2;
  int unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar2 = in_stack_00000018;
  if (in_CY && !in_ZR) {
    if (unaff_w19 == 0x7dd46e2f) {
      lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_0__);
      FUN_036ff5d8(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0x7e9acaf5) {
      lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_7__);
      FUN_036ff0b0(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0x7f4ca0c6) {
      lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_OVR_SoundEmitter_<FadeSoundChannel>d__64_System_Collections_IEnumerator_Reset__
                                );
      FUN_036fe920(lVar1,uVar2);
      return lVar1;
    }
  }
  else if ((unaff_w19 == 0x7c2afdcb) || (unaff_w19 == 0x7d201556)) {
    lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_OVR_SoundEmitter_<DelayedSyncTo>d__57_System_Collections_IEnumerator_Reset__
                              );
    FUN_036fe818(lVar1,uVar2);
    return lVar1;
  }
  lVar1 = FUN_036ff688(in_stack_00000018,unaff_w19);
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_System_Collections_SortedList_KeyList_set_Item__,
                               &stack0x0000000c);
    uVar2 = FUN_03406290(*(undefined8 *)Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__,uVar2,0)
    ;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
    }
    FUN_0403ed64(uVar2,0);
    lVar1 = 0;
  }
  return lVar1;
}


