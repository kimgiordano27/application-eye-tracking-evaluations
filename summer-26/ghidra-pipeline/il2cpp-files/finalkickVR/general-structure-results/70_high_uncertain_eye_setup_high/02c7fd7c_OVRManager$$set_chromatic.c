/*
FUNCTION_NAME: OVRManager$$set_chromatic
ENTRY_POINT: 02c7fd7c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_chromatic(long param_1)

{
  long lVar1;
  long unaff_x29;
  void *pvStack0000000000000020;
  void *pvStack0000000000000028;
  
  if ((*(byte *)(param_1 + 0xce) & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_EnumField_<>c_<_ctor>b__22_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_0__
              );
    BoxGrabSurface_Reset_mCC52756FC2C1B8294EAAE5E002F887D2F8E58A4F::s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  lVar1 = Component_GetComponentInParent_TisIRelativeToRef_t9EA4EFB586B4A35C1EEC1AD273CDCCFFD5B86DEE_m7FF7AECA5AE0260E1DDBFC820FF02998FDF565A8
                    (*(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)(unaff_x29 + -8),
                     *(MethodInfo **)Method_UnityEngine_UIElements_EnumField_<>c_<_ctor>b__22_0__);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x29 + -0x28) = 0;
    pvStack0000000000000020 = *(void **)(unaff_x29 + -8);
    pvStack0000000000000028 = (void *)0x0;
  }
  else {
    *(long *)(unaff_x29 + -0x18) = lVar1;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -8);
    NullCheck(*(void **)(unaff_x29 + -0x18));
    pvStack0000000000000028 =
         (void *)InterfaceFuncInvoker0<Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*>::Invoke
                           (0,*(Il2CppClass **)
                               Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_0__
                            ,*(Il2CppObject **)(unaff_x29 + -0x18));
    pvStack0000000000000020 = *(void **)(unaff_x29 + -0x20);
  }
  NullCheck(pvStack0000000000000020);
  *(void **)((long)pvStack0000000000000020 + 0x28) = pvStack0000000000000028;
  Il2CppCodeGenWriteBarrier((void **)((long)pvStack0000000000000020 + 0x28),pvStack0000000000000028)
  ;
  return;
}


