/*
FUNCTION_NAME: OVRSceneManager_OnDisable_mD16A349A3176A2E9E1A22D8E4C4BCC9BD8658254
ENTRY_POINT: 02df1454
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRSceneManager_OnDisable_mD16A349A3176A2E9E1A22D8E4C4BCC9BD8658254(Il2CppObject *param_1)

{
  undefined *puVar1;
  byte bVar2;
  Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *pAVar3;
  long lVar4;
  Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D *pAVar5;
  undefined8 uVar6;
  void *pvVar7;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRSceneManager_OnDisable_mD16A349A3176A2E9E1A22D8E4C4BCC9BD8658254::
       s_Il2CppMethodInitialized & 1) == 0) {
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
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
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
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRSceneManager_OnDisable_mD16A349A3176A2E9E1A22D8E4C4BCC9BD8658254::s_Il2CppMethodInitialized =
         1;
  }
  pAVar3 = (Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                     );
  Action_2__ctor_m3062ACB7D9EF8701E3766B021B1A6D4FE1B3F113
            (pAVar3,param_1,
             *(long *)
              Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
             ,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  OVRManager_remove_SceneCaptureComplete_mB1C40810BBC411BE7B21C74704F120E7661BD58F(pAVar3,0);
  lVar4 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline((MethodInfo *)0x0)
  ;
  if (lVar4 != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pvVar7 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
    uVar6 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                      );
    Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
              (uVar6,0,*(undefined8 *)
                        Field_<PrivateImplementationDetails>_494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
              );
    NullCheck(pvVar7);
    OVRDisplay_remove_RecenteredPose_m682B48FDD95FF259F50CD28C8827EDD14F715904(pvVar7,uVar6,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar6,0);
  if ((bVar2 & 1) != 0) {
    pvVar7 = *(void **)(param_1 + 0x80);
    pAVar5 = (Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_TerrainUtils_TerrainMap_<>c__DisplayClass3_0_<CreateFromPlacement>b__0__
                       );
    Action_1__ctor_mCF523C720DF70BEA3148133C85868568FA91276D
              (pAVar5,(Il2CppObject *)0x0,
               *(long *)
                Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
               ,(MethodInfo *)0x0);
    NullCheck(pvVar7);
    OVRCameraRig_remove_TrackingSpaceChanged_mB979A4EC657E772AA268E0F57B0F683E072A2EBD
              (pvVar7,pAVar5,0);
  }
  return;
}


