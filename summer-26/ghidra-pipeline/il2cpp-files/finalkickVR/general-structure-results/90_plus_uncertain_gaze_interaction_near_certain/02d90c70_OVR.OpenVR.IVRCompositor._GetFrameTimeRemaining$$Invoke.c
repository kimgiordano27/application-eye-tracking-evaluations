/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetFrameTimeRemaining$$Invoke
ENTRY_POINT: 02d90c70
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 141
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3
*/


byte OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining__Invoke(undefined8 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long in_x9;
  long unaff_x29;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  
  *(undefined4 *)(in_x9 + 0x200) = param_2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  uVar2 = OVRPlugin_GetLayerAndroidSurfaceObject_m8DE03D3352A89AEC9F67BDEB8C3026140A264B97
                    (*(undefined4 *)(in_stack_00000030 + 0x200),in_stack_00000020);
  *(undefined8 *)(in_stack_00000030 + 0x1f8) = uVar2;
  *(undefined8 *)(*(long *)(in_stack_00000030 + 0x250) + 0x110) =
       *(undefined8 *)(in_stack_00000030 + 0x1f8);
  *(undefined8 *)(in_stack_00000030 + 0x1f0) =
       *(undefined8 *)(*(long *)(in_stack_00000030 + 0x250) + 0x110);
  bVar1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B
                    (*(undefined8 *)(in_stack_00000030 + 0x1f0),0,in_stack_00000020);
  *(byte *)(unaff_x29 + -0x79) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x79) & 1) != 0) {
    uVar2 = SZArrayNew(*(Il2CppClass **)
                        Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                       ,1);
    *(undefined8 *)(in_stack_00000030 + 0x1e0) = uVar2;
    *(undefined8 *)(in_stack_00000030 + 0x1d8) = *(undefined8 *)(in_stack_00000030 + 0x1e0);
    *(undefined8 *)(in_stack_00000030 + 0x1d0) =
         *(undefined8 *)(*(long *)(in_stack_00000030 + 0x250) + 0x110);
    *(undefined8 *)(in_stack_00000030 + 0x1c8) = *(undefined8 *)(in_stack_00000030 + 0x1d0);
    uVar2 = Box(*(Il2CppClass **)
                 Method_UnityEngine_UIElements_PointerCaptureEventBase<MouseCaptureOutEvent>_GetPooled__
                ,(void *)(unaff_x29 + -0xa0));
    *(undefined8 *)(in_stack_00000030 + 0x1c0) = uVar2;
    NullCheck(*(void **)(in_stack_00000030 + 0x1d8));
    ArrayElementTypeCheck
              (*(Il2CppArray **)(in_stack_00000030 + 0x1d8),*(void **)(in_stack_00000030 + 0x1c0));
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              (*(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 **)
                (in_stack_00000030 + 0x1d8),0,*(Il2CppObject **)(in_stack_00000030 + 0x1c0));
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__3__
               ,*(undefined8 *)(in_stack_00000030 + 0x1d8),0);
    *(undefined8 *)(in_stack_00000030 + 0x1b8) =
         *(undefined8 *)(*(long *)(in_stack_00000030 + 0x250) + 0x118);
    if (*(long *)(in_stack_00000030 + 0x1b8) != 0) {
      *(undefined8 *)(in_stack_00000030 + 0x1b0) =
           *(undefined8 *)(*(long *)(in_stack_00000030 + 0x250) + 0x118);
      NullCheck(*(void **)(in_stack_00000030 + 0x1b0));
      ExternalSurfaceObjectCreated_Invoke_m926D26868671FE881914F508F6A3B29907C0812C_inline
                (*(ExternalSurfaceObjectCreated_tBAE280613D86A040CC365995D817E30254FDEF1A **)
                  (in_stack_00000030 + 0x1b0),(MethodInfo *)0x0);
    }
  }
  *(undefined1 *)(unaff_x29 + -1) = 0;
  return *(byte *)(unaff_x29 + -1) & 1;
}


