/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetBoolTrackedDeviceProperty$$Invoke
ENTRY_POINT: 036fceac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty__Invoke(void)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar2 = in_stack_00000018;
  if (unaff_w19 < 0x5f1e154) {
    if (unaff_w19 < 0x3e76232) {
      if (unaff_w19 < 0x2d32f61) {
        if (unaff_w19 == 0xe38aef) {
          lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_Splines_SplineInstantiate_<>c_<CheckChildrenValidity>b__123_0__
                                    );
          FUN_036ff2c0(lVar1,uVar2);
          return lVar1;
        }
        if (unaff_w19 == 0x2d32f60) {
          lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_SortedList_ValueList_Clear__);
          OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(lVar1,uVar2);
          return lVar1;
        }
      }
      else {
        if (unaff_w19 == 0x3d3458d) {
          lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_SortedList_SortedListEnumerator_MoveNext__
                                    );
          FUN_036fe348(lVar1,uVar2);
          return lVar1;
        }
        if (unaff_w19 == 0x3e76231) {
          lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                    );
          FUN_036fe3f8(lVar1,uVar2);
          return lVar1;
        }
      }
    }
    else if (unaff_w19 < 0x4e5cf63) {
      if (unaff_w19 == 0x4b34ca3) {
LAB_036fdee4:
        lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_UnityEngine_TextCore_Text_SpriteAsset_<>c_<SortCharacterTable>b__38_0__
                                  );
        FUN_036ff318(lVar1,uVar2);
        return lVar1;
      }
      if (unaff_w19 == 0x4e5cf62) {
        lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_5__);
        FUN_036ff058(lVar1,uVar2);
        return lVar1;
      }
    }
    else {
      if (unaff_w19 == 0x4f8c0f2) {
LAB_036fe0c0:
        lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_System_Collections_SortedList_SortedListEnumerator_get_Value__
                                  );
        FUN_036fe500(lVar1,uVar2);
        return lVar1;
      }
      if (unaff_w19 == 0x5f1e153) {
        lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_System_Collections_SortedList_ValueList_set_Item__);
        OVR_OpenVR_IVRSystem__TriggerHapticPulse__Invoke(lVar1,uVar2);
        return lVar1;
      }
    }
  }
  else if (unaff_w19 < 0x8260ab2) {
    if (unaff_w19 < 0x73484cb) {
      if (unaff_w19 == 0x6a85abe) goto LAB_036fdee4;
      if (unaff_w19 == 0x73484ca) {
        lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_19__)
        ;
        FUN_036feea0(lVar1,uVar2);
        return lVar1;
      }
    }
    else {
      if (unaff_w19 == 0x80ad3c7) {
        lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_System_Collections_SortedList_ValueList_Insert__);
        FUN_036fe6b8(lVar1,uVar2);
        return lVar1;
      }
      if (unaff_w19 == 0x8260ab1) goto LAB_036fe0c0;
    }
  }
  else if (unaff_w19 < 0x904b599) {
    if (unaff_w19 == 0x8891a7f) {
      lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_OVR_SoundEmitter_<FadeSoundChannel>d__64_System_Collections_IEnumerator_Reset__
                                );
      FUN_036fe920(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0x904b598) {
      lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Meta_WitAi_Events_SpeechEvents_<>c_<SetEvents>b__85_11__);
      FUN_036febe0(lVar1,uVar2);
      return lVar1;
    }
  }
  else {
    if (unaff_w19 == 0xdcbd364) {
      lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_Splines_SplineContainer_<>c__DisplayClass18_0_<set_Splines>b__0__
                                );
      FUN_036ff268(lVar1,uVar2);
      return lVar1;
    }
    if (unaff_w19 == 0xeb4040d) {
      lVar1 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_OVR_SoundEmitter_<FadeSoundChannelTo>d__63_System_Collections_IEnumerator_Reset__
                                );
      FUN_036fe8c8(lVar1,uVar2);
      return lVar1;
    }
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


