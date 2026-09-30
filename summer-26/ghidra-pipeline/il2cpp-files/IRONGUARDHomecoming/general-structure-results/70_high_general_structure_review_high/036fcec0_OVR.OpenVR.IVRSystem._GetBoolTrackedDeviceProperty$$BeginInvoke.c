/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetBoolTrackedDeviceProperty$$BeginInvoke
ENTRY_POINT: 036fcec0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty__BeginInvoke(void)

{
  long lVar1;
  undefined8 uVar2;
  uint in_w8;
  uint unaff_w19;
  undefined8 in_stack_00000018;
  
  uVar2 = in_stack_00000018;
  if ((in_w8 & 0xffff | 0x3e70000) < unaff_w19) {
    if (unaff_w19 < 0x4e5cf63) {
      if (unaff_w19 == 0x4b34ca3) {
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
  else if (unaff_w19 < 0x2d32f61) {
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


