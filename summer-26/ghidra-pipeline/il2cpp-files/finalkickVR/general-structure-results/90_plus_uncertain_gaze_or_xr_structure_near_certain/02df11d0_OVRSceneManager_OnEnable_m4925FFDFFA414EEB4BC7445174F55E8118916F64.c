/*
FUNCTION_NAME: OVRSceneManager_OnEnable_m4925FFDFFA414EEB4BC7445174F55E8118916F64
ENTRY_POINT: 02df11d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVRSceneManager_OnEnable_m4925FFDFFA414EEB4BC7445174F55E8118916F64(Il2CppObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *pAVar4;
  long lVar5;
  Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D *pAVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  puVar2 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  if ((OVRSceneManager_OnEnable_m4925FFDFFA414EEB4BC7445174F55E8118916F64::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_TerrainUtils_TerrainMap_<>c__DisplayClass3_0_<CreateFromPlacement>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRSceneManager_OnEnable_m4925FFDFFA414EEB4BC7445174F55E8118916F64::s_Il2CppMethodInitialized =
         1;
  }
  pAVar4 = (Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                     );
  Action_2__ctor_m3062ACB7D9EF8701E3766B021B1A6D4FE1B3F113
            (pAVar4,param_1,
             *(long *)
              Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
             ,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  OVRManager_add_SceneCaptureComplete_m26AE5F4B81DDEA72B3466AC811BE62C3E70ECEF4(pAVar4,0);
  lVar5 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline((MethodInfo *)0x0)
  ;
  if (lVar5 != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    pvVar7 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
    uVar8 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                      );
    Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
              (uVar8,0,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
              );
    NullCheck(pvVar7);
    OVRDisplay_add_RecenteredPose_mEF2DBE487262A53AB138AAE3D51F6D9D272AD542(pvVar7,uVar8,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pvVar7 = (void *)Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234
                               (*(MethodInfo **)
                                 Field_<PrivateImplementationDetails>_4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
                               );
    *(void **)(param_1 + 0x80) = pvVar7;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x80),pvVar7);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar8,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(param_1 + 0x80);
    pAVar6 = (Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_TerrainUtils_TerrainMap_<>c__DisplayClass3_0_<CreateFromPlacement>b__0__
                       );
    Action_1__ctor_mCF523C720DF70BEA3148133C85868568FA91276D
              (pAVar6,(Il2CppObject *)0x0,
               *(long *)
                Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
               ,(MethodInfo *)0x0);
    NullCheck(pvVar7);
    OVRCameraRig_add_TrackingSpaceChanged_mA8C5100131CA245983FC93B741C2B2CA72EDEA58(pvVar7,pAVar6,0)
    ;
  }
  return;
}


