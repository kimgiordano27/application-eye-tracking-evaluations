/*
FUNCTION_NAME: Virtence.OpenTypeCS.Cff$$<ParseCFFCharstring>g__ParseStems|9_3
ENTRY_POINT: 02df1484
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Virtence_OpenTypeCS_Cff__<ParseCFFCharstring>g__ParseStems_9_3(long param_1)

{
  undefined8 uVar1;
  Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D *pAVar2;
  void *pvVar3;
  long unaff_x29;
  ulong *in_stack_00000018;
  byte bStack0000000000000037;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0xf48));
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
            );
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
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
  OVRSceneManager_OnDisable_mD16A349A3176A2E9E1A22D8E4C4BCC9BD8658254::s_Il2CppMethodInitialized = 1
  ;
  uVar1 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                    );
  *(undefined8 *)(unaff_x29 + -0x18) = uVar1;
  Action_2__ctor_m3062ACB7D9EF8701E3766B021B1A6D4FE1B3F113
            (*(Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 **)(unaff_x29 + -0x18),
             *(Il2CppObject **)(unaff_x29 + -8),
             *(long *)
              Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
             ,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  OVRManager_remove_SceneCaptureComplete_mB1C40810BBC411BE7B21C74704F120E7661BD58F
            (*(undefined8 *)(unaff_x29 + -0x18),0);
  uVar1 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline((MethodInfo *)0x0)
  ;
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  if (*(long *)(unaff_x29 + -0x20) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    uVar1 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                      ((MethodInfo *)0x0);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                      );
    *(undefined8 *)(unaff_x29 + -0x30) = uVar1;
    Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
              (*(undefined8 *)(unaff_x29 + -0x30),0,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
              );
    NullCheck(*(void **)(unaff_x29 + -0x28));
    OVRDisplay_remove_RecenteredPose_m682B48FDD95FF259F50CD28C8827EDD14F715904
              (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30),0);
  }
  uVar1 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x80);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bStack0000000000000037 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar1,0);
  bStack0000000000000037 = bStack0000000000000037 & 1;
  if (bStack0000000000000037 != 0) {
    pvVar3 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    pAVar2 = (Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_TerrainUtils_TerrainMap_<>c__DisplayClass3_0_<CreateFromPlacement>b__0__
                       );
    Action_1__ctor_mCF523C720DF70BEA3148133C85868568FA91276D
              (pAVar2,(Il2CppObject *)0x0,
               *(long *)
                Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
               ,(MethodInfo *)0x0);
    NullCheck(pvVar3);
    OVRCameraRig_remove_TrackingSpaceChanged_mB979A4EC657E772AA268E0F57B0F683E072A2EBD
              (pvVar3,pAVar2,0);
  }
  return;
}


