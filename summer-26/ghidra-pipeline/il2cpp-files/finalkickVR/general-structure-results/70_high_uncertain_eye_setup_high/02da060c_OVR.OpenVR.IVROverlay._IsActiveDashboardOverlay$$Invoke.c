/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._IsActiveDashboardOverlay$$Invoke
ENTRY_POINT: 02da060c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVROverlay__IsActiveDashboardOverlay__Invoke(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x29;
  undefined4 uStack000000000000001c;
  undefined8 *in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  byte bStack00000000000000ef;
  undefined8 in_stack_000000f0;
  undefined4 uStack000000000000014c;
  byte bStack000000000000015f;
  undefined4 uStack000000000000017c;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_1_<CreateVolumeTable>b__5__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_3_<CreateVolumeTable>b__10__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_Rendering_DebugUI_EnumField_<>c_<InitQuickSeparators>b__17_0__);
  OVRPassthroughLayer_CreateAndAddMesh_mFF1E239D262DB7D6EBA0DDE839410DEF0769680E::
  s_Il2CppMethodInitialized = 1;
  in_stack_00000090[0x53] = 0;
  in_stack_00000090[0x52] = 0;
  in_stack_00000090[0x51] = 0;
  memset((void *)(unaff_x29 + -0x90),0,0x40);
  in_stack_00000090[0x48] = in_stack_00000090[0x57];
  *(undefined8 *)in_stack_00000090[0x48] = 0;
  in_stack_00000090[0x47] = in_stack_00000090[0x56];
  *(undefined8 *)in_stack_00000090[0x47] = 0;
  in_stack_00000090[0x46] = in_stack_00000090[0x55];
  in_stack_00000090[0x45] = in_stack_00000090[0x58];
  NullCheck((void *)in_stack_00000090[0x45]);
  uVar2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                    (in_stack_00000090[0x45],0);
  in_stack_00000090[0x44] = uVar2;
  NullCheck((void *)in_stack_00000090[0x44]);
  Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D
            (in_stack_00000090[0x44],0);
  memcpy((void *)(unaff_x29 + -0xf8),&stack0x000002d8,0x40);
  memcpy((void *)in_stack_00000090[0x46],(void *)(unaff_x29 + -0xf8),0x40);
  in_stack_00000090[0x33] = in_stack_00000090[0x58];
  NullCheck((void *)in_stack_00000090[0x33]);
  uVar2 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8
                    ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)in_stack_00000090[0x33]
                     ,*(MethodInfo **)Method_System_Collections_Generic_List<OVRSceneAnchor>__ctor__
                    );
  in_stack_00000090[0x32] = uVar2;
  in_stack_00000090[0x53] = in_stack_00000090[0x32];
  in_stack_00000090[0x31] = in_stack_00000090[0x53];
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(in_stack_00000090[0x31],0);
  if ((bVar1 & 1) == 0) {
    in_stack_00000090[0x2f] = in_stack_00000090[0x53];
    NullCheck((void *)in_stack_00000090[0x2f]);
    uVar2 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C
                      (in_stack_00000090[0x2f]);
    in_stack_00000090[0x2e] = uVar2;
    in_stack_00000090[0x2d] = in_stack_00000090[0x2e];
    NullCheck((void *)in_stack_00000090[0x2d]);
    uVar2 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(in_stack_00000090[0x2d],0);
    in_stack_00000090[0x2c] = uVar2;
    in_stack_00000090[0x52] = in_stack_00000090[0x2c];
    NullCheck((void *)in_stack_00000090[0x2d]);
    uVar2 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(in_stack_00000090[0x2d],0);
    in_stack_00000090[0x2b] = uVar2;
    in_stack_00000090[0x51] = in_stack_00000090[0x2b];
    in_stack_00000090[0x2a] = in_stack_00000090[0x55];
    memcpy(&stack0x00000248,(void *)in_stack_00000090[0x2a],0x40);
    uVar2 = in_stack_00000090[0x59];
    memcpy(&stack0x00000188,&stack0x00000248,0x40);
    OVRPassthroughLayer_GetTransformMatrixForPassthroughSurfaceObject_m19420CFF1051FF409630C17DB9020A16D489A03B
              (uVar2,&stack0x00000188,0);
    memcpy(&stack0x00000208,&stack0x000001c8,0x40);
    memcpy((void *)(unaff_x29 + -0x90),&stack0x00000208,0x40);
    in_stack_00000090[9] = *(undefined8 *)(in_stack_00000090[0x59] + 0xd0);
    NullCheck((void *)in_stack_00000090[9]);
    uStack000000000000017c =
         OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                   ((OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)in_stack_00000090[9],
                    (MethodInfo *)0x0);
    in_stack_00000090[7] = in_stack_00000090[0x52];
    in_stack_00000090[6] = in_stack_00000090[0x51];
    in_stack_00000090[5] = in_stack_00000090[0x57];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a0);
    bStack000000000000015f =
         OVRPlugin_CreateInsightTriangleMesh_m180C5CE9209FC4295F5F8895FA6281F3F3AF8375
                   (uStack000000000000017c,in_stack_00000090[7],in_stack_00000090[6],
                    in_stack_00000090[5],0);
    bStack000000000000015f = bStack000000000000015f & 1;
    if (bStack000000000000015f == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000098);
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_3_<CreateVolumeTable>b__10__
                 ,0);
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      in_stack_00000090[3] = *(undefined8 *)(in_stack_00000090[0x59] + 0xd0);
      NullCheck((void *)in_stack_00000090[3]);
      uStack000000000000014c =
           OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                     ((OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *)in_stack_00000090[3],
                      (MethodInfo *)0x0);
      in_stack_00000090[1] = in_stack_00000090[0x57];
      *in_stack_00000090 = *(undefined8 *)in_stack_00000090[1];
      memcpy(&stack0x000000f8,(void *)(unaff_x29 + -0x90),0x40);
      in_stack_000000f0 = in_stack_00000090[0x56];
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000a0);
      uStack000000000000001c = uStack000000000000014c;
      uVar2 = *in_stack_00000090;
      memcpy(&stack0x000000ac,&stack0x000000f8,0x40);
      bStack00000000000000ef =
           OVRPlugin_AddInsightPassthroughSurfaceGeometry_m30C6149BFD3DE003AE132D31362DB09050F0AE03
                     (uStack000000000000001c,uVar2,&stack0x000000ac,in_stack_000000f0,0);
      bStack00000000000000ef = bStack00000000000000ef & 1;
      if (bStack00000000000000ef == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000098);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)
                    Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass3_1_<CreateVolumeTable>b__5__
                   ,0);
        *(undefined1 *)(unaff_x29 + -1) = 0;
      }
      else {
        *(undefined1 *)(unaff_x29 + -1) = 1;
      }
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000098);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_Rendering_DebugUI_EnumField_<>c_<InitQuickSeparators>b__17_0__,0)
    ;
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


