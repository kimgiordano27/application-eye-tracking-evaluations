/*
FUNCTION_NAME: ProcessPort$$.ctor
ENTRY_POINT: 02d28d18
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void ProcessPort___ctor(undefined1 param_1 [16],float param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long unaff_x29;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 in_stack_000000f0;
  undefined8 *in_stack_000001e8;
  long in_stack_000001f0;
  undefined8 *in_stack_000001f8;
  ulong *in_stack_00000200;
  undefined8 *in_stack_00000208;
  undefined8 *in_stack_00000210;
  undefined8 *in_stack_00000218;
  undefined8 in_stack_00000454;
  undefined8 in_stack_0000045c;
  undefined8 in_stack_000005b4;
  undefined8 in_stack_000005bc;
  float in_stack_00000630;
  float in_stack_00000688;
  float in_stack_00000700;
  float in_stack_00000758;
  float in_stack_000007a0;
  undefined8 in_stack_00000994;
  undefined8 in_stack_0000099c;
  undefined4 in_stack_000009a4;
  undefined8 in_stack_000009a8;
  
  in_stack_000001e8[0x69] = in_stack_000001e8[0x186];
  NullCheck((void *)in_stack_000001e8[0x69]);
  uVar2 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                    (2,(Il2CppClass *)*in_stack_00000208,(Il2CppObject *)in_stack_000001e8[0x69]);
  uVar3 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(uVar2,in_stack_000000f0);
  in_stack_000001e8[0x66] = in_stack_000001e8[0x186];
  NullCheck((void *)in_stack_000001e8[0x66]);
  uVar2 = InterfaceFuncInvoker0<LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB>::Invoke
                    (4,(Il2CppClass *)*in_stack_00000208,(Il2CppObject *)in_stack_000001e8[0x66]);
  uVar4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(uVar2,in_stack_000000f0);
  NullCheck((void *)in_stack_000001e8[0x6c]);
  Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32
            (in_stack_000001e8[0x6c],param_4 & (uVar3 ^ 0xffffffff) | uVar4,in_stack_000000f0);
  in_stack_000001e8[99] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
  in_stack_000001e8[0x62] = in_stack_000001e8[0x187];
  NullCheck((void *)in_stack_000001e8[0x62]);
  uVar2 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013
                    (in_stack_000001e8[0x62]);
  NullCheck((void *)in_stack_000001e8[99]);
  Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(uVar2,in_stack_000001e8[99],0);
  in_stack_000001e8[0x60] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
  in_stack_000001e8[0x5f] = in_stack_000001e8[0x187];
  NullCheck((void *)in_stack_000001e8[0x5f]);
  uVar2 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD
                    (in_stack_000001e8[0x5f],0);
  NullCheck((void *)in_stack_000001e8[0x60]);
  Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(uVar2,in_stack_000001e8[0x60],0)
  ;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
  pbVar6 = (byte *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
  if ((*pbVar6 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000218);
    iVar5 = OVRPlugin_GetExternalCameraCount_mCF884D51AD3C5666FB5C4B9CDC8E7A6C0CF719F7(0);
    if (iVar5 != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000218);
      bVar1 = OVRPlugin_GetMixedRealityCameraInfo_m22A50602684F756CAF5CF17E526DFF0B8CB7E4C6
                        (0,&stack0x00001268,&stack0x00001238,0);
      if ((bVar1 & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                  );
        Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                  (*(undefined8 *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate_IsSame__
                   ,0);
        return;
      }
      memcpy(&stack0x000007b8,&stack0x00001238,0x30);
      in_stack_000001e8[0xb] = in_stack_000001e8[0x10];
      in_stack_000001e8[10] = in_stack_000001e8[0xf];
      fVar13 = atanf(in_stack_000007a0);
      fVar13 = (float)il2cpp_codegen_multiply<float,float>(fVar13,57.29578);
      uVar2 = il2cpp_codegen_multiply<float,float>(fVar13,2.0);
      memcpy(&stack0x00000768,&stack0x00001238,0x30);
      in_stack_000001e8[1] = in_stack_000001e8[6];
      *in_stack_000001e8 = in_stack_000001e8[5];
      memcpy(&stack0x00000718,&stack0x00001238,0x30);
      *(undefined8 *)(in_stack_000001f0 + 0xc0) = *(undefined8 *)(in_stack_000001f0 + 0xe8);
      *(undefined8 *)(in_stack_000001f0 + 0xb8) = *(undefined8 *)(in_stack_000001f0 + 0xe0);
      *(undefined8 *)(in_stack_000001f0 + 0xa8) = *(undefined8 *)(in_stack_000001e8[0x189] + 0x60);
      NullCheck(*(void **)(in_stack_000001f0 + 0xa8));
      Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777
                (uVar2,*(undefined8 *)(in_stack_000001f0 + 0xa8));
      *(undefined8 *)(in_stack_000001f0 + 0x98) = *(undefined8 *)(in_stack_000001e8[0x189] + 0x60);
      NullCheck(*(void **)(in_stack_000001f0 + 0x98));
      Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6
                (in_stack_00000758 / in_stack_00000700,*(undefined8 *)(in_stack_000001f0 + 0x98),0);
      *(undefined8 *)(in_stack_000001f0 + 0x88) = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
      NullCheck(*(void **)(in_stack_000001f0 + 0x88));
      Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777
                (uVar2,*(undefined8 *)(in_stack_000001f0 + 0x88),0);
      *(undefined8 *)(in_stack_000001f0 + 0x78) = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
      memcpy(&stack0x00000690,&stack0x00001238,0x30);
      *(undefined8 *)(in_stack_000001f0 + 0x40) = *(undefined8 *)(in_stack_000001f0 + 0x60);
      *(undefined8 *)(in_stack_000001f0 + 0x38) = *(undefined8 *)(in_stack_000001f0 + 0x58);
      memcpy(&stack0x00000648,&stack0x00001238,0x30);
      uVar8 = *(undefined8 *)(in_stack_000001f0 + 0x10);
      in_stack_000001f8[0x4f] = *(undefined8 *)(in_stack_000001f0 + 0x18);
      in_stack_000001f8[0x4e] = uVar8;
      NullCheck(*(void **)(in_stack_000001f0 + 0x78));
      Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6
                (in_stack_00000688 / in_stack_00000630,*(undefined8 *)(in_stack_000001f0 + 0x78),0);
      if ((*(byte *)(in_stack_000001e8[0x189] + 0x10) & 1) == 0) {
        memcpy(&stack0x00000498,&stack0x00001268,0x38);
        in_stack_000001f8[0x1a] = in_stack_000001e8[0x187];
        uVar8 = in_stack_000001e8[0x189];
        memcpy(&stack0x00000418,&stack0x00000498,0x38);
        OVRComposition_ComputeCameraWorldSpacePose_mE9631B0A264E85ECE66191E21B41F02FA54FCE73
                  (uVar8,&stack0x00000418,in_stack_000001f8[0x1a]);
        in_stack_000001f8[0x17] = in_stack_0000045c;
        in_stack_000001f8[0x16] = in_stack_00000454;
        uVar8 = in_stack_000001f8[0x16];
        in_stack_000001e8[0x155] = in_stack_000001f8[0x17];
        in_stack_000001e8[0x154] = uVar8;
        in_stack_000001f8[10] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x60);
        NullCheck((void *)in_stack_000001f8[10]);
        uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                          (in_stack_000001f8[10],0);
        in_stack_000001f8[9] = uVar8;
        uVar8 = in_stack_000001e8[0x154];
        in_stack_000001f8[5] = in_stack_000001e8[0x155];
        in_stack_000001f8[4] = uVar8;
        in_stack_000001f8[1] = in_stack_000001f8[5];
        *in_stack_000001f8 = in_stack_000001f8[4];
        OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
                  (in_stack_000001f8[9],&stack0x000003c0,0,0);
        in_stack_00000200[0x20] = *(ulong *)(in_stack_000001e8[0x189] + 0x50);
        NullCheck((void *)in_stack_00000200[0x20]);
        uVar9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                          (in_stack_00000200[0x20],0);
        in_stack_00000200[0x1f] = uVar9;
        uVar9 = in_stack_000001e8[0x154];
        in_stack_00000200[0x1c] = in_stack_000001e8[0x155];
        in_stack_00000200[0x1b] = uVar9;
        in_stack_00000200[0x18] = in_stack_00000200[0x1c];
        in_stack_00000200[0x17] = in_stack_00000200[0x1b];
        OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
                  (in_stack_00000200[0x1f],&stack0x00000370,0,0);
      }
      else {
        memcpy(&stack0x000005f0,&stack0x00001268,0x38);
        uVar8 = in_stack_000001e8[0x189];
        memcpy(&stack0x00000578,&stack0x000005f0,0x38);
        OVRComposition_ComputeCameraTrackingSpacePose_mC4A030F3A9682988B3BFB6125687349474E598A7
                  (uVar8,&stack0x00000578);
        in_stack_000001f8[0x43] = in_stack_000005bc;
        in_stack_000001f8[0x42] = in_stack_000005b4;
        uVar8 = in_stack_000001f8[0x42];
        in_stack_000001e8[0x159] = in_stack_000001f8[0x43];
        in_stack_000001e8[0x158] = uVar8;
        in_stack_000001f8[0x36] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x60);
        NullCheck((void *)in_stack_000001f8[0x36]);
        uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                          (in_stack_000001f8[0x36],0);
        in_stack_000001f8[0x35] = uVar8;
        uVar8 = in_stack_000001e8[0x158];
        in_stack_000001f8[0x31] = in_stack_000001e8[0x159];
        in_stack_000001f8[0x30] = uVar8;
        in_stack_000001f8[0x2d] = in_stack_000001f8[0x31];
        in_stack_000001f8[0x2c] = in_stack_000001f8[0x30];
        OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
                  (in_stack_000001f8[0x35],&stack0x00000520,1,0);
        in_stack_000001f8[0x2b] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
        NullCheck((void *)in_stack_000001f8[0x2b]);
        uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                          (in_stack_000001f8[0x2b],0);
        in_stack_000001f8[0x2a] = uVar8;
        uVar8 = in_stack_000001e8[0x158];
        in_stack_000001f8[0x27] = in_stack_000001e8[0x159];
        in_stack_000001f8[0x26] = uVar8;
        in_stack_000001f8[0x23] = in_stack_000001f8[0x27];
        in_stack_000001f8[0x22] = in_stack_000001f8[0x26];
        OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
                  (in_stack_000001f8[0x2a],&stack0x000004d0,1,0);
      }
      in_stack_00000200[0x16] = *(ulong *)(in_stack_000001e8[0x189] + 0xa0);
      iVar5 = *(int *)(unaff_x29 + -0xb4);
      memcpy(&stack0x00000328,&stack0x00001268,0x38);
      in_stack_00000200[0xd] = in_stack_00000200[0xf];
      NullCheck((void *)in_stack_00000200[0x16]);
      DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE::SetAt
                ((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE *)in_stack_00000200[0x16],
                 (long)iVar5,(double)in_stack_00000200[0xd]);
      goto LAB_02d29984;
    }
  }
  in_stack_00000630 = param_2;
  il2cpp_codegen_initobj((void *)(unaff_x29 + -0xe0),0x1c);
  il2cpp_codegen_initobj((void *)(unaff_x29 + -0x100),0x1c);
  if (*(int *)(unaff_x29 + -0x24) == 0) {
    in_stack_000001e8[0x153] = unaff_x29 + -0x100;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
    in_stack_000001e8[0x59] = *(undefined8 *)(lVar7 + 0x10);
    uVar2 = *(undefined4 *)(lVar7 + 0x18);
    in_stack_000001e8[0x150] = in_stack_000001e8[0x59];
    in_stack_000001e8[0x14f] = in_stack_000001e8[0x153];
  }
  else {
    in_stack_000001e8[0x152] = unaff_x29 + -0x100;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
    lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
    in_stack_000001e8[0x5b] = *(undefined8 *)(lVar7 + 4);
    uVar2 = *(undefined4 *)(lVar7 + 0xc);
    in_stack_000001e8[0x150] = in_stack_000001e8[0x5b];
    in_stack_000001e8[0x14f] = in_stack_000001e8[0x152];
  }
  puVar12 = (undefined8 *)in_stack_000001e8[0x14f];
  *puVar12 = in_stack_000001e8[0x150];
  *(undefined4 *)(puVar12 + 1) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000210);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
  uVar8 = *(undefined8 *)(lVar7 + 0x1c);
  in_stack_000001e8[0x57] = *(undefined8 *)(lVar7 + 0x24);
  in_stack_000001e8[0x56] = uVar8;
  uVar8 = in_stack_000001e8[0x56];
  *(undefined8 *)(unaff_x29 + -0xec) = in_stack_000001e8[0x57];
  *(undefined8 *)(unaff_x29 + -0xf4) = uVar8;
  in_stack_000001e8[0x53] = in_stack_000001e8[0x16b];
  in_stack_000001e8[0x52] = in_stack_000001e8[0x16a];
  in_stack_000001e8[0x51] = in_stack_000001e8[0x187];
  in_stack_000001e8[0x45] = in_stack_000001e8[0x53];
  in_stack_000001e8[0x44] = in_stack_000001e8[0x52];
  OVRExtensions_ToWorldSpacePose_mB00CD2AC97FB573C5FA5E4093A1F7441244CA097
            (&stack0x00000970,in_stack_000001e8[0x51]);
  in_stack_000001e8[0x4d] = in_stack_0000099c;
  in_stack_000001e8[0x4c] = in_stack_00000994;
  in_stack_000001e8[0x16f] = in_stack_000001e8[0x4d];
  in_stack_000001e8[0x16e] = in_stack_000001e8[0x4c];
  *(undefined8 *)(unaff_x29 + -0xcc) = in_stack_000009a8;
  *(ulong *)(unaff_x29 + -0xd4) =
       CONCAT44(in_stack_000009a4,(int)((ulong)in_stack_0000099c >> 0x20));
  in_stack_000001e8[0x43] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x60);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
  uVar2 = *(undefined4 *)(lVar7 + 0x2c);
  NullCheck((void *)in_stack_000001e8[0x43]);
  Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(uVar2,in_stack_000001e8[0x43],0);
  in_stack_000001e8[0x41] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x60);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
  uVar2 = *(undefined4 *)(lVar7 + 0x30);
  NullCheck((void *)in_stack_000001e8[0x41]);
  Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(uVar2,in_stack_000001e8[0x41],0);
  in_stack_000001e8[0x3f] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
  uVar2 = *(undefined4 *)(lVar7 + 0x2c);
  NullCheck((void *)in_stack_000001e8[0x3f]);
  Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(uVar2,in_stack_000001e8[0x3f],0);
  in_stack_000001e8[0x3d] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
  lVar7 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000210);
  uVar2 = *(undefined4 *)(lVar7 + 0x30);
  NullCheck((void *)in_stack_000001e8[0x3d]);
  Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(uVar2,in_stack_000001e8[0x3d],0);
  if ((*(byte *)(in_stack_000001e8[0x189] + 0x10) & 1) == 0) {
    in_stack_000001e8[0x27] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x60);
    NullCheck((void *)in_stack_000001e8[0x27]);
    uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                      (in_stack_000001e8[0x27]);
    in_stack_000001e8[0x26] = uVar8;
    in_stack_000001e8[0x23] = in_stack_000001e8[0x16f];
    in_stack_000001e8[0x22] = in_stack_000001e8[0x16e];
    in_stack_000001e8[0x1f] = in_stack_000001e8[0x23];
    in_stack_000001e8[0x1e] = in_stack_000001e8[0x22];
    OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
              (in_stack_000001e8[0x26],&stack0x00000840,0,0);
    in_stack_000001e8[0x1d] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
    NullCheck((void *)in_stack_000001e8[0x1d]);
    uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                      (in_stack_000001e8[0x1d],0);
    in_stack_000001e8[0x1c] = uVar8;
    in_stack_000001e8[0x19] = in_stack_000001e8[0x16f];
    in_stack_000001e8[0x18] = in_stack_000001e8[0x16e];
    in_stack_000001e8[0x15] = in_stack_000001e8[0x19];
    in_stack_000001e8[0x14] = in_stack_000001e8[0x18];
    OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
              (in_stack_000001e8[0x1c],&stack0x000007f0,0,0);
  }
  else {
    in_stack_000001e8[0x3b] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x60);
    NullCheck((void *)in_stack_000001e8[0x3b]);
    uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                      (in_stack_000001e8[0x3b]);
    in_stack_000001e8[0x3a] = uVar8;
    in_stack_000001e8[0x37] = in_stack_000001e8[0x16b];
    in_stack_000001e8[0x36] = in_stack_000001e8[0x16a];
    in_stack_000001e8[0x33] = in_stack_000001e8[0x37];
    in_stack_000001e8[0x32] = in_stack_000001e8[0x36];
    OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
              (in_stack_000001e8[0x3a],&stack0x000008e0,1,0);
    in_stack_000001e8[0x31] = *(undefined8 *)(in_stack_000001e8[0x189] + 0x50);
    NullCheck((void *)in_stack_000001e8[0x31]);
    uVar8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                      (in_stack_000001e8[0x31],0);
    in_stack_000001e8[0x30] = uVar8;
    in_stack_000001e8[0x2d] = in_stack_000001e8[0x16b];
    in_stack_000001e8[0x2c] = in_stack_000001e8[0x16a];
    in_stack_000001e8[0x29] = in_stack_000001e8[0x2d];
    in_stack_000001e8[0x28] = in_stack_000001e8[0x2c];
    OVRExtensions_FromOVRPose_m983A33FEB6E214D8C598A2DC90A7481D32962C27
              (in_stack_000001e8[0x30],&stack0x00000890,1,0);
  }
LAB_02d29984:
  in_stack_00000200[0xc] = in_stack_000001e8[0x187];
  NullCheck((void *)in_stack_00000200[0xc]);
  uVar9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(in_stack_00000200[0xc]);
  in_stack_00000200[0xb] = uVar9;
  NullCheck((void *)in_stack_00000200[0xb]);
  uVar2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(in_stack_00000200[0xb],0)
  ;
  in_stack_00000200[9] = CONCAT44(in_stack_00000630,uVar2);
  in_stack_00000200[6] = *(ulong *)(in_stack_000001e8[0x189] + 0x50);
  uVar2 = param_3;
  NullCheck((void *)in_stack_00000200[6]);
  uVar9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(in_stack_00000200[6],0);
  in_stack_00000200[5] = uVar9;
  NullCheck((void *)in_stack_00000200[5]);
  uVar14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(in_stack_00000200[5],0);
  in_stack_00000200[3] = CONCAT44(in_stack_00000630,uVar14);
  uVar16 = (undefined4)(in_stack_00000200[9] >> 0x20);
  uVar2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline
                    (in_stack_00000200[9] & 0xffffffff,uVar16,param_3,(int)in_stack_00000200[3],
                     (int)(in_stack_00000200[3] >> 0x20),uVar2,0);
  *in_stack_00000200 = CONCAT44(uVar16,uVar2);
  pvVar10 = *(void **)(in_stack_000001e8[0x189] + 0x50);
  uVar2 = param_3;
  NullCheck(pvVar10);
  pvVar10 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar10,0);
  NullCheck(pvVar10);
  uVar14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(pvVar10,0);
  uVar2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline
                    (*in_stack_00000200 & 0xffffffff,(int)(*in_stack_00000200 >> 0x20),param_3,
                     uVar14,uVar16,uVar2,0);
  *(undefined4 *)(unaff_x29 + -0xbc) = uVar2;
  pvVar11 = *(void **)(in_stack_000001e8[0x189] + 0x50);
  pvVar10 = *(void **)(in_stack_000001e8[0x189] + 0x50);
  NullCheck(pvVar10);
  fVar15 = (float)Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(pvVar10,0);
  fVar13 = *(float *)(unaff_x29 + -0xbc);
  fVar15 = (float)il2cpp_codegen_add<float,float>(fVar15,0.001);
  uVar2 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline
                    (fVar15,fVar13,(MethodInfo *)0x0);
  NullCheck(pvVar11);
  Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(uVar2,pvVar11,0);
  return;
}


