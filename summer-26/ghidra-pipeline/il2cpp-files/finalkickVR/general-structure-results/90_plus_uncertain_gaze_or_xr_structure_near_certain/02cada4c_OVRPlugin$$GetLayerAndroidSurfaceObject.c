/*
FUNCTION_NAME: OVRPlugin$$GetLayerAndroidSurfaceObject
ENTRY_POINT: 02cada4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin__GetLayerAndroidSurfaceObject(void)

{
  Request_1_tDF5315C7EB8AA620C19730D55185214ADD908497 *pRVar1;
  Callback_t23D90B06AB34ABA229B0A7413AB4DDA251F5AF66 *pCVar2;
  long unaff_x29;
  MethodInfo *pMStack0000000000000000;
  
  pMStack0000000000000000 = (MethodInfo *)0x0;
  GroupPresenceSample_UpdateConsole_mF5F9568EED803314B44B9F337D5117DA7D205999
            (*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_Erase__);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Vector3>_get_Item__);
  pRVar1 = (Request_1_tDF5315C7EB8AA620C19730D55185214ADD908497 *)
           Core_AsyncInitialize_mCD96A6E035BDC998E2330E28546134407FA2FC80(pMStack0000000000000000);
  pCVar2 = (Callback_t23D90B06AB34ABA229B0A7413AB4DDA251F5AF66 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_WithMagnitudeHavingToBeGreaterThan__
                     );
  Callback__ctor_mF384D5ED43A1C5465F4E898B6784146F877C7F64
            (pCVar2,*(Il2CppObject **)(unaff_x29 + -8),
             *(long *)
              Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_WithTargetBinding__
             ,pMStack0000000000000000);
  NullCheck(pRVar1);
  Request_1_OnComplete_mAFB38E2045ED3FBC60FBE24E6787F9DB36AB4498
            (pRVar1,pCVar2,
             *(MethodInfo **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_<>c__DisplayClass5_0_<RemoveAction>b__0__
            );
  return;
}


