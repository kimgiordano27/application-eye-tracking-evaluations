/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryGeometry2
ENTRY_POINT: 02cb128c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 137
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin__GetBoundaryGeometry2(void)

{
  byte bVar1;
  void *pvVar2;
  Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 *pRVar3;
  Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8 *pCVar4;
  long unaff_x29;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Vector4>_AddRange__);
  GroupPresenceSample_U3CSetPresenceU3Eb__9_0_m2658994E4EF5DA9088181148CB44552E79BC380E::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x20));
  bVar1 = Message_get_IsError_m969FA3045AEAD9BDC34AA96BB25DD7083E8790C4
                    (*(undefined8 *)(unaff_x29 + -0x20),0);
  *(byte *)(unaff_x29 + -0x21) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    pRVar3 = (Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 *)
             Users_Get_m1D73F64C0CD11B8B6A8066425893940D351493A0
                       (*(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58));
    pCVar4 = (Callback_t8CDD7D3925F3AD3B67E2295158D4299A831742F8 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_System_Collections_Generic_List<Vector4>__ctor__);
    Callback__ctor_mB705EE9E657BDB540DDF61815511B7604D8E3B4C
              (pCVar4,*(Il2CppObject **)(unaff_x29 + -8),
               *(long *)
                Method_UnityEngine_InputSystem_InputSystem_<>c_<get_onAnyButtonPress>b__79_1__,
               (MethodInfo *)0x0);
    NullCheck(pRVar3);
    Request_1_OnComplete_mCCFD1D1B76E7B35E1D34C2A82D5F36DA33CB707E
              (pRVar3,pCVar4,
               *(MethodInfo **)Method_System_Collections_Generic_List<Vector4>_AddRange__);
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x30));
    pvVar2 = (void *)VirtualFuncInvoker0<Error_t0A46640739F2057B84B1EE6489A55DDC224935A4*>::Invoke
                               (4,*(Il2CppObject **)(unaff_x29 + -0x30));
    NullCheck(pvVar2);
    GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
              (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)((long)pvVar2 + 0x18),0);
  }
  return;
}


