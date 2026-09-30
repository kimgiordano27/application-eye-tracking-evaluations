/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$.ctor
ENTRY_POINT: 02d903a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 186
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


byte OVR_OpenVR_IVRCompositor__PostPresentHandoff___ctor
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int *piVar12;
  OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *pOVar13;
  Il2CppArray *this;
  long lVar14;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOVar15;
  long unaff_x29;
  undefined8 *in_stack_00000060;
  ulong *in_stack_00000068;
  ulong *in_stack_00000070;
  ulong *in_stack_00000078;
  ulong *in_stack_00000080;
  undefined4 uStack000000000000008c;
  byte bStack0000000000000093;
  undefined4 uStack0000000000000094;
  int iStack0000000000000114;
  Il2CppObject *in_stack_00000118;
  long in_stack_00000120;
  byte bStack00000000000001a7;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  
  *param_1 = param_7;
  *(undefined8 *)(unaff_x29 + -0x18) = param_2;
  *(undefined4 *)(unaff_x29 + -0x1c) = param_3;
  *(undefined4 *)(unaff_x29 + -0x20) = param_4;
  *(undefined4 *)(unaff_x29 + -0x24) = param_5;
  *(undefined4 *)(unaff_x29 + -0x28) = param_6;
  *(undefined4 *)(unaff_x29 + -0x2c) = param_8;
  *(undefined8 *)(unaff_x29 + -0x38) = param_9;
  if ((OVROverlay_CreateLayer_mC0E0B6F846A16A366032C5C66227138D3688693D::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000068);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000070);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000078);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000080);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
              );
    OVROverlay_CreateLayer_mC0E0B6F846A16A366032C5C66227138D3688693D::s_Il2CppMethodInitialized = 1;
  }
  memset((void *)(unaff_x29 + -0xb4),0,0x7c);
  *(undefined4 *)(unaff_x29 + -0xb8) = 0;
  *(undefined4 *)(unaff_x29 + -0xbc) = 0;
  *(long *)(unaff_x29 + -200) = *(long *)(unaff_x29 + -0x18) + 0x1b8;
  bVar6 = System_Globalization_CultureData__DateSeparator(*(undefined8 *)(unaff_x29 + -200),0);
  *(byte *)(unaff_x29 + -0xc9) = bVar6 & 1;
  if ((*(byte *)(unaff_x29 + -0xc9) & 1) == 0) {
LAB_02d9047c:
    uVar7 = OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                      (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18)
                       ,(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0xe0) = uVar7;
    *(undefined4 *)(unaff_x29 + -0xe4) = *(undefined4 *)(unaff_x29 + -0xe0);
    uVar10 = Box((Il2CppClass *)*in_stack_00000068,(void *)(unaff_x29 + -0xe4));
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar10;
    uVar10 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC
                       (*(undefined8 *)(unaff_x29 + -0xf0),3,0);
    *(undefined8 *)(unaff_x29 + -0x100) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0x100);
    *(undefined8 *)(*(long *)(unaff_x29 + -0x18) + 0x1b8) = *(undefined8 *)(unaff_x29 + -0xf8);
    uVar10 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6
                       (*(long *)(unaff_x29 + -0x18) + 0x1b8,0);
    *(undefined8 *)(*(long *)(unaff_x29 + -0x18) + 0x1c0) = uVar10;
  }
  else {
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(*(long *)(unaff_x29 + -0x18) + 0x1c0);
    bVar6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271
                      (*(undefined8 *)(unaff_x29 + -0xd8),0,0);
    *(byte *)(unaff_x29 + -0xd9) = bVar6 & 1;
    if ((*(byte *)(unaff_x29 + -0xd9) & 1) != 0) goto LAB_02d9047c;
  }
  if (*(int *)(*(long *)(unaff_x29 + -0x18) + 0x1b0) == -1) {
    *(undefined4 *)(unaff_x29 + -0xb8) = 0;
    while (*(int *)(unaff_x29 + -0xb8) < 0xf) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
      puVar11 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000070);
      pOVar13 = (OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)*puVar11;
      iVar1 = *(int *)(unaff_x29 + -0xb8);
      NullCheck(pOVar13);
      uVar10 = OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::GetAt
                         (pOVar13,(long)iVar1);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
      bVar6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar10,0);
      if ((bVar6 & 1) != 0) {
LAB_02d90614:
        *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0x1b0) = *(undefined4 *)(unaff_x29 + -0xb8);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
        puVar11 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000070);
        this = (Il2CppArray *)*puVar11;
        iVar1 = *(int *)(unaff_x29 + -0xb8);
        NullCheck(this);
        ArrayElementTypeCheck(this,*(void **)(unaff_x29 + -0x18));
        OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::SetAt
                  ((OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)this,(long)iVar1,
                   *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18));
        break;
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000070);
      puVar11 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000070);
      pOVar13 = (OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D *)*puVar11;
      iVar1 = *(int *)(unaff_x29 + -0xb8);
      NullCheck(pOVar13);
      uVar10 = OVROverlayU5BU5D_t0787D5D37FCAE59BD91C1125190EAF75B940B44D::GetAt
                         (pOVar13,(long)iVar1);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
      bVar6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                        (uVar10,*(undefined8 *)(unaff_x29 + -0x18),0);
      if ((bVar6 & 1) != 0) goto LAB_02d90614;
      uVar7 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xb8),1);
      *(undefined4 *)(unaff_x29 + -0xb8) = uVar7;
    }
  }
  if ((((((*(byte *)(*(long *)(unaff_x29 + -0x18) + 0x120) & 1) == 0) &&
        (*(int *)(*(long *)(unaff_x29 + -0x18) + 0x140) == *(int *)(unaff_x29 + -0x1c))) &&
       (*(int *)(*(long *)(unaff_x29 + -0x18) + 0x144) == *(int *)(unaff_x29 + -0x20))) &&
      ((*(int *)(*(long *)(unaff_x29 + -0x18) + 0x148) == *(int *)(unaff_x29 + -0x24) &&
       (iVar1 = *(int *)(*(long *)(unaff_x29 + -0x18) + 0x134),
       iVar8 = OVROverlay_get_layout_m4893928952320613F6AAD4E58DCEBDD373B621C8
                         (*(undefined8 *)(unaff_x29 + -0x18),0), iVar1 == iVar8)))) &&
     (*(int *)(*(long *)(unaff_x29 + -0x18) + 0x14c) == *(int *)(unaff_x29 + -0x28))) {
    lVar14 = *(long *)(unaff_x29 + -0x18);
    uVar10 = *in_stack_00000060;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass11_0_<CreatePixelValidationChannels>b__1__
              );
    bVar6 = Sizei_Equals_mCD498318CBD1F49F2CA7C33ACF59A2A5B70FCD17(lVar14 + 0x138,uVar10,0);
    if (((bVar6 & 1) != 0) &&
       (*(int *)(*(long *)(unaff_x29 + -0x18) + 0x130) == *(int *)(unaff_x29 + -0x2c))) {
      *(uint *)(unaff_x29 + -0xbc) =
           (uint)(*(int *)(*(long *)(unaff_x29 + -0x18) + 0xe0) !=
                 *(int *)(*(long *)(unaff_x29 + -0x18) + 0xdc));
      goto LAB_02d908ac;
    }
  }
  *(undefined4 *)(unaff_x29 + -0xbc) = 1;
LAB_02d908ac:
  if (*(int *)(unaff_x29 + -0xbc) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    uVar7 = *(undefined4 *)(unaff_x29 + -0x2c);
    uVar9 = OVROverlay_get_layout_m4893928952320613F6AAD4E58DCEBDD373B621C8
                      (*(undefined8 *)(unaff_x29 + -0x18));
    uVar10 = *in_stack_00000060;
    uVar2 = *(undefined4 *)(unaff_x29 + -0x1c);
    uVar3 = *(undefined4 *)(unaff_x29 + -0x20);
    uVar4 = *(undefined4 *)(unaff_x29 + -0x24);
    uVar5 = *(undefined4 *)(unaff_x29 + -0x28);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
    OVRPlugin_CalculateLayerDesc_m1C5C994D88D2EB1BC56103558F7DB7AFDFDF04C9
              (uVar7,uVar9,uVar10,uVar2,uVar3,uVar4,uVar5,0);
    memcpy(&stack0x000002b4,&stack0x00000238,0x7c);
    memcpy((void *)(unaff_x29 + -0xb4),&stack0x000002b4,0x7c);
    memcpy(&stack0x000001b4,(void *)(unaff_x29 + -0xb4),0x7c);
    in_stack_000001b0 = *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0xdc);
    in_stack_000001a8 = *(undefined8 *)(*(long *)(unaff_x29 + -0x18) + 0x1c0);
    memcpy(&stack0x00000128,&stack0x000001b4,0x7c);
    bStack00000000000001a7 =
         OVRPlugin_EnqueueSetupLayer_mA1D5C761EE406503F0AA37B6C55C0AC87D61023F
                   (&stack0x00000128,in_stack_000001b0,in_stack_000001a8,0);
    bStack00000000000001a7 = bStack00000000000001a7 & 1;
    in_stack_00000120 = *(long *)(unaff_x29 + -0x18) + 0x1b8;
    in_stack_00000118 =
         (Il2CppObject *)
         GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(in_stack_00000120,0);
    pOVar15 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18);
    piVar12 = (int *)UnBox(in_stack_00000118,(Il2CppClass *)*in_stack_00000068);
    OVROverlay_set_layerId_m28284412D866364354AF5355DD29ED5643F4BA46_inline
              (pOVar15,*piVar12,(MethodInfo *)0x0);
    iStack0000000000000114 =
         OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                   (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18),
                    (MethodInfo *)0x0);
    if (0 < iStack0000000000000114) {
      memcpy(&stack0x00000098,(void *)(unaff_x29 + -0xb4),0x7c);
      memcpy((void *)(*(long *)(unaff_x29 + -0x18) + 0x130),&stack0x00000098,0x7c);
      uStack0000000000000094 = *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0xdc);
      *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0xe0) = uStack0000000000000094;
      bStack0000000000000093 = *(byte *)(*(long *)(unaff_x29 + -0x18) + 0xd3) & 1;
      if (bStack0000000000000093 == 0) {
        uStack000000000000008c =
             OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                       (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)
                         (unaff_x29 + -0x18),(MethodInfo *)0x0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
        uVar7 = OVRPlugin_GetLayerTextureStageCount_m7ACFF1E9AA4708B227460BB30021AA34347ED874
                          (uStack000000000000008c,0);
        *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0x1ac) = uVar7;
      }
      else {
        *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0x1ac) = 1;
      }
    }
    *(undefined1 *)(*(long *)(unaff_x29 + -0x18) + 0x120) = 0;
    *(undefined1 *)(unaff_x29 + -1) = 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


