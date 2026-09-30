/*
FUNCTION_NAME: Oculus.Interaction.HandGrab.HandGrabUtils$$SaveHandGrabPoseData
ENTRY_POINT: 0190c408
PROGRAM: Lovesick-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Interaction_HandGrab_HandGrabUtils__SaveHandGrabPoseData(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  if (param_1 != 0) {
    FUN_01320e50(param_1,*(undefined8 *)System_Globalization_ThaiBuddhistCalendar_TypeInfo);
    *(long *)(unaff_x19 + 0x18) = param_1;
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13531);
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190c604();
      *(long *)(unaff_x19 + 0x20) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63_MoveNext__
                                );
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190c64c();
      *(long *)(unaff_x19 + 0x28) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Queue<LocomotionEvent>_get_Count__
                                );
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190c694();
      *(long *)(unaff_x19 + 0x30) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<Material,_int>_Clear__
                                );
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_01320e50(lVar1,*(undefined8 *)Method_UnityEngine_Resources_LoadAll<STMWaveData>__);
      *(long *)(unaff_x19 + 0x38) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<int,_List<Volume>>_TypeInfo)
      ;
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190c6dc();
      *(long *)(unaff_x19 + 0x40) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x48) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0980);
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_01320e50(lVar1,*(undefined8 *)Method_System_Collections_Generic_List<Contraction>_Add__);
      *(long *)(unaff_x19 + 0x48) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x50) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_short>_TryGetValue__
                                );
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190c724();
      *(long *)(unaff_x19 + 0x50) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x58) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<Transform,_int>_TypeInfo);
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190c76c();
      *(long *)(unaff_x19 + 0x58) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x60) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair,_object>_get_Keys__
                                );
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190c89c();
      *(long *)(unaff_x19 + 0x60) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x68) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<StyleVariable>_Clear__);
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190c9cc();
      *(long *)(unaff_x19 + 0x68) = lVar1;
    }
    if (*(long *)(unaff_x19 + 0x70) == 0) {
      lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_get_Joints__
                                );
      if (lVar1 == 0) goto LAB_0190c600;
      FUN_0190caa4();
      *(long *)(unaff_x19 + 0x70) = lVar1;
    }
    return;
  }
LAB_0190c600:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


