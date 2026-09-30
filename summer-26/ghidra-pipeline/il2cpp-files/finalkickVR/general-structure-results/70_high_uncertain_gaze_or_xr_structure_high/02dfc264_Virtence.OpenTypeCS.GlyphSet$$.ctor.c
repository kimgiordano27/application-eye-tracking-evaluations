/*
FUNCTION_NAME: Virtence.OpenTypeCS.GlyphSet$$.ctor
ENTRY_POINT: 02dfc264
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void Virtence_OpenTypeCS_GlyphSet___ctor(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  OVRScenePlaneU5BU5D_t435D72AD87208ED0B79DAF1D05B4B60B4F0E5522 *pOVar5;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *pCVar6;
  List_1_t3E1EE7EFF1F9427FC5A0F7B04EDF79156A32DA2A *pLVar7;
  Comparison_1_tB95E149322766251E7DA0138F072023B17B9E746 *pCVar8;
  void *pvVar9;
  Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *pNVar10;
  long unaff_x29;
  undefined1 auVar11 [16];
  undefined4 uStack0000000000000034;
  undefined4 uStack000000000000004c;
  OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  byte bStack00000000000000a7;
  undefined2 uStack00000000000000bc;
  undefined2 uStack00000000000000be;
  int iStack00000000000000ec;
  byte bStack0000000000000127;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  void *in_stack_00000180;
  undefined8 in_stack_00000188;
  void *in_stack_00000190;
  undefined8 in_stack_00000198;
  void *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x2b0));
  OVRSceneRoom_OnLocalizationCompleted_m6DB605CB473EF5A06E879DF698039471DA69EA96::
  s_Il2CppMethodInitialized = 1;
  *(undefined1 *)(unaff_x29 + -0x19) = 0;
  *(undefined1 *)(unaff_x29 + -0x1a) = 0;
  *(undefined1 *)(unaff_x29 + -0x1b) = 0;
  *(undefined1 *)(unaff_x29 + -0x1c) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined2 *)(unaff_x29 + -0x32) = 0;
  *(undefined1 *)(unaff_x29 + -0x33) = 0;
  *(undefined1 *)(unaff_x29 + -0x34) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined4 *)(unaff_x29 + -0x4c) = 0;
  *(undefined4 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined4 *)(unaff_x29 + -0x6c) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70);
  uVar3 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0x6c),1);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x70) = uVar3;
  *(byte *)(unaff_x29 + -0x6d) = *(byte *)(unaff_x29 + -9) & 1;
  if ((*(byte *)(unaff_x29 + -0x6d) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58);
    NullCheck(*(void **)(unaff_x29 + -0x78));
    uVar4 = OVRSceneManager_get_Verbose_m7F89EAFB7FBB9989CFC1ACC5A6EF2789917B170E
                      (*(undefined8 *)(unaff_x29 + -0x78),0);
    *(undefined8 *)(unaff_x29 + -0x88) = uVar4;
    *(undefined2 *)(unaff_x29 + -0x7c) = *(undefined2 *)(unaff_x29 + -0x88);
    *(undefined2 *)(unaff_x29 + -0x7a) = *(undefined2 *)(unaff_x29 + -0x7c);
    *(undefined2 *)(unaff_x29 + -0x32) = *(undefined2 *)(unaff_x29 + -0x7a);
    *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x32;
    bVar1 = Nullable_1_get_HasValue_m708832CEE7BFE56B811529C190A1BAEB80E6EAA3_inline
                      (*(Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 **)(unaff_x29 + -0x90)
                       ,(MethodInfo *)*in_stack_00000070);
    *(byte *)(unaff_x29 + -0x91) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x91) & 1) == 0) {
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x90);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x90);
      uVar2 = Nullable_1_GetValueOrDefault_m9A9401B9AE0B1623F091FB8B68F2620261999226_inline
                        (*(Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 **)
                          (unaff_x29 + -0x40),(MethodInfo *)*in_stack_00000068);
      *(undefined1 *)(unaff_x29 + -0x93) = uVar2;
      *(undefined1 *)(unaff_x29 + -0x92) = *(undefined1 *)(unaff_x29 + -0x93);
      *(undefined1 *)(unaff_x29 + -0x33) = *(undefined1 *)(unaff_x29 + -0x92);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
      auVar11 = OVRAnchor_get_Uuid_mB4A38F13C1AA2C5F8DC98BFED64D55DE34F4059D_inline
                          (in_stack_00000060,(MethodInfo *)0x0);
      *(undefined1 (*) [16])(unaff_x29 + -0xc0) = auVar11;
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0xb8);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xc0);
      *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xa8);
      *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xb0);
      uVar4 = Box(*(Il2CppClass **)Method_System_Nullable<long>_ToString__,
                  (void *)(unaff_x29 + -0xd0));
      *(undefined8 *)(unaff_x29 + -0xd8) = uVar4;
      uVar4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987
                        (*(undefined8 *)StringLiteral_29,*(undefined8 *)StringLiteral_31,
                         *(undefined8 *)(unaff_x29 + -0xd8),0);
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar4;
      uVar4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                        (*(undefined8 *)(unaff_x29 + -8),0);
      *(undefined8 *)(unaff_x29 + -0xe8) = uVar4;
      LogForwarder_LogWarning_mA2D3E15055184DC0D55BDFD375ADBC0852F753B2
                (unaff_x29 + -0x33,*in_stack_00000088,*(undefined8 *)(unaff_x29 + -0xe0),
                 *(undefined8 *)(unaff_x29 + -0xe8),0);
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
    uVar4 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                      (in_stack_00000060,(MethodInfo *)0x0);
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar4;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    bVar1 = OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                      (*(undefined8 *)(unaff_x29 + -0xf0),3,unaff_x29 + -0x19,unaff_x29 + -0x34,0);
    uStack000000000000004c = 1;
    *(byte *)(unaff_x29 + -0xf1) = bVar1 & 1;
    uVar4 = OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                      (in_stack_00000060,(MethodInfo *)0x0);
    *(undefined8 *)(unaff_x29 + -0x100) = uVar4;
    in_stack_000001b8._7_1_ =
         OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                   (*(undefined8 *)(unaff_x29 + -0x100),4,unaff_x29 + -0x1a,unaff_x29 + -0x34,0);
    in_stack_000001b8._7_1_ = in_stack_000001b8._7_1_ & (byte)uStack000000000000004c;
    in_stack_000001b8._6_1_ = *(byte *)(unaff_x29 + -0x19) & 1;
    if (in_stack_000001b8._6_1_ == 0) {
      *(undefined4 *)(unaff_x29 + -0x4c) = 0;
    }
    else {
      in_stack_000001b8._5_1_ = *(byte *)(unaff_x29 + -0x1a) & 1;
      *(uint *)(unaff_x29 + -0x4c) = (uint)(in_stack_000001b8._5_1_ == 0);
    }
    uStack0000000000000034 = 1;
    *(bool *)(unaff_x29 + -0x1b) = *(int *)(unaff_x29 + -0x4c) != 0;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
    in_stack_000001b0 =
         OVRAnchor_get_Handle_m0AB024A709BAD2087D8F4C899ECDA9F6909B25CB_inline
                   (in_stack_00000060,(MethodInfo *)0x0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000080);
    in_stack_000001a8._7_1_ =
         OVRPlugin_GetSpaceComponentStatus_m696F271B0C19564580C6DAC3AEE92EFC6B24FD56
                   (in_stack_000001b0,0x3b9ee4c8,unaff_x29 + -0x1c,unaff_x29 + -0x34,0);
    in_stack_000001a8._7_1_ = in_stack_000001a8._7_1_ & (byte)uStack0000000000000034;
    in_stack_000001a8._6_1_ = *(byte *)(unaff_x29 + -0x19) & 1;
    if (in_stack_000001a8._6_1_ == 0) {
      *(undefined4 *)(unaff_x29 + -0x50) = 0;
    }
    else {
      in_stack_000001a8._5_1_ = *(byte *)(unaff_x29 + -0x1a) & 1;
      in_stack_000001a8._4_1_ = *(byte *)(unaff_x29 + -0x1c) & 1;
      *(uint *)(unaff_x29 + -0x50) =
           (uint)(in_stack_000001a8._5_1_ == 0 && in_stack_000001a8._4_1_ == 0);
    }
    *(bool *)(unaff_x29 + -0x1b) = *(int *)(unaff_x29 + -0x50) != 0;
    in_stack_000001a8._3_1_ = *(byte *)(unaff_x29 + -0x1b) & 1;
    if (in_stack_000001a8._3_1_ == 0) {
      in_stack_000001a8._2_1_ = *(byte *)(unaff_x29 + -0x1a) & 1;
      if (in_stack_000001a8._2_1_ == 0) {
        *(undefined8 *)(unaff_x29 + -0x58) = 0;
      }
      else {
        in_stack_000001a0 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
        NullCheck(in_stack_000001a0);
        in_stack_00000198 = *(undefined8 *)((long)in_stack_000001a0 + 0x28);
        *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000198;
      }
    }
    else {
      in_stack_00000190 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(in_stack_00000190);
      in_stack_00000188 = *(undefined8 *)((long)in_stack_00000190 + 0x20);
      *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000188;
    }
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x58);
    in_stack_00000180 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
    in_stack_00000168 = *(undefined8 *)(in_stack_00000060 + 8);
    in_stack_00000160 = *(undefined8 *)in_stack_00000060;
    in_stack_00000170 = *(undefined8 *)(in_stack_00000060 + 0x10);
    in_stack_00000158 = *(undefined8 *)(unaff_x29 + -0x28);
    NullCheck(in_stack_00000180);
    in_stack_00000138 = in_stack_00000168;
    in_stack_00000130 = in_stack_00000160;
    in_stack_00000140 = in_stack_00000170;
    in_stack_00000150 =
         OVRSceneManager_InstantiateSceneAnchor_m53D220EE668BF01E7581E75F2CC41FE98716C834
                   (in_stack_00000180,&stack0x00000130,in_stack_00000158);
    *(undefined8 *)(unaff_x29 + -0x30) = in_stack_00000150;
    uVar4 = *(undefined8 *)(unaff_x29 + -0x30);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    bStack0000000000000127 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar4,0)
    ;
    bStack0000000000000127 = bStack0000000000000127 & 1;
    if (bStack0000000000000127 != 0) {
      pvVar9 = *(void **)(unaff_x29 + -0x30);
      NullCheck(pvVar9);
      pvVar9 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar9);
      uVar4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371
                        (*(undefined8 *)(unaff_x29 + -8),0);
      NullCheck(pvVar9);
      Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(pvVar9,uVar4,0);
      if ((*(byte *)(unaff_x29 + -0x1b) & 1) != 0) {
        pCVar6 = *(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)(unaff_x29 + -0x30);
        NullCheck(pCVar6);
        uVar4 = Component_GetComponent_TisOVRScenePlane_tC2404DF0ACDE221C71E8FCBC331712860D4F403C_m395BF52A77F9D8D0C83FB8CEF6E722948FA70541
                          (pCVar6,*(MethodInfo **)StringLiteral_26);
        OVRSceneRoom_UpdateRoomInformation_mA9B47A86B3C831D4DA5CF00694258B4C124A27BF
                  (*(undefined8 *)(unaff_x29 + -8),uVar4,0);
      }
    }
    iStack00000000000000ec = *(int *)(*(long *)(unaff_x29 + -8) + 0x70);
    if (iStack00000000000000ec == 0) {
      pLVar7 = *(List_1_t3E1EE7EFF1F9427FC5A0F7B04EDF79156A32DA2A **)
                (*(long *)(unaff_x29 + -8) + 0x38);
      pCVar8 = *(Comparison_1_tB95E149322766251E7DA0138F072023B17B9E746 **)
                (*(long *)(unaff_x29 + -8) + 0x48);
      NullCheck(pLVar7);
      List_1_Sort_mD104AAF37DA945567AD068D84FE9A4593DA15EA5
                (pLVar7,pCVar8,*(MethodInfo **)StringLiteral_27);
      pLVar7 = *(List_1_t3E1EE7EFF1F9427FC5A0F7B04EDF79156A32DA2A **)
                (*(long *)(unaff_x29 + -8) + 0x38);
      NullCheck(pLVar7);
      pOVar5 = (OVRScenePlaneU5BU5D_t435D72AD87208ED0B79DAF1D05B4B60B4F0E5522 *)
               List_1_ToArray_mCE976FD74ED67F8AF38E70ADA00901709905D98F
                         (pLVar7,*(MethodInfo **)StringLiteral_28);
      OVRSceneRoom_set_Walls_m2B457E52E8E0A9D47E844D088D90BEC172AEE857_inline
                (*(OVRSceneRoom_t2496DF886AAF0D50F0B601D37DAFADC2E864FA1E **)(unaff_x29 + -8),pOVar5
                 ,(MethodInfo *)0x0);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar9);
      uStack00000000000000bc =
           OVRSceneManager_get_Verbose_m7F89EAFB7FBB9989CFC1ACC5A6EF2789917B170E(pvVar9,0);
      pNVar10 = (Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 *)(unaff_x29 + -0x32);
      *(undefined2 *)(unaff_x29 + -0x32) = uStack00000000000000bc;
      uStack00000000000000be = uStack00000000000000bc;
      bStack00000000000000a7 =
           Nullable_1_get_HasValue_m708832CEE7BFE56B811529C190A1BAEB80E6EAA3_inline
                     (pNVar10,(MethodInfo *)*in_stack_00000070);
      bStack00000000000000a7 = bStack00000000000000a7 & 1;
      if (bStack00000000000000a7 == 0) {
        *(Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 **)(unaff_x29 + -0x68) = pNVar10;
      }
      else {
        *(Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 **)(unaff_x29 + -0x60) = pNVar10;
        uVar2 = Nullable_1_GetValueOrDefault_m9A9401B9AE0B1623F091FB8B68F2620261999226_inline
                          (*(Nullable_1_t1138C6BF514CE515CF610B1AED96049B3DBBAF89 **)
                            (unaff_x29 + -0x60),(MethodInfo *)*in_stack_00000068);
        *(undefined1 *)(unaff_x29 + -0x33) = uVar2;
        uVar4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                          (*(undefined8 *)(unaff_x29 + -8));
        LogForwarder_Log_mEA2227D3CC8532C4FE53B12DF1CE6F98ED09B867
                  (unaff_x29 + -0x33,*in_stack_00000088,*(undefined8 *)StringLiteral_30,uVar4,0);
      }
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar9);
      OVRSceneManager_OnSceneRoomLoadCompleted_mFD2B33316B65D194A7469DB8F03E1C81224E3E4E(pvVar9,0);
    }
  }
  return;
}


