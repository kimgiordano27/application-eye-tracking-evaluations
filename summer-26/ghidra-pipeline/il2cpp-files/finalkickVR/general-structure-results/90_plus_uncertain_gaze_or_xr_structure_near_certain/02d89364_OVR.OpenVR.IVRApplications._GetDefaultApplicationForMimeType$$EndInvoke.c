/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetDefaultApplicationForMimeType$$EndInvoke
ENTRY_POINT: 02d89364
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_21;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_17;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType__EndInvoke(void *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar7;
  long unaff_x29;
  uint uStack0000000000000044;
  undefined4 uStack0000000000000144;
  uint uStack00000000000001ac;
  undefined4 uStack00000000000001bc;
  long in_stack_00000380;
  undefined8 *in_stack_00000390;
  undefined8 *in_stack_00000398;
  undefined8 *in_stack_000003a0;
  undefined8 *in_stack_000003a8;
  
  NullCheck(param_1);
  Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
            ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x4d],
             (MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar4 + 0xed) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    bVar2 = OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90(0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_SettingsPanel_<>c__DisplayClass0_0_<_ctor>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x45] = *(undefined8 *)(lVar4 + 0x50);
      if (in_stack_00000390[0x45] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x44] = *(undefined8 *)(lVar4 + 0x50);
        NullCheck((void *)in_stack_00000390[0x44]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x44],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  bVar2 = OVRManager_get_hasVrFocus_mF029C34D16F6733BC210CAA447C39629FB107D90();
  uStack00000000000001bc = 1;
  uStack00000000000001ac = (uint)(bVar2 & 1);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar4 + 0xed) = (byte)uStack00000000000001ac & (byte)uStack00000000000001bc;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  bVar2 = OVRPlugin_get_hasInputFocus_m26E031618D6BF901538C11D3A4FF8F82208BEEDD(0);
  *(byte *)(unaff_x29 + -0x11) = bVar2 & (byte)uStack00000000000001bc & (byte)uStack00000000000001bc
  ;
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if (((*(byte *)(lVar4 + 0xee) & 1) != 0) && ((*(byte *)(unaff_x29 + -0x11) & 1) == 0)) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateAlbedoPreset>b__3_4__
               ,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x3c] = *(undefined8 *)(lVar4 + 0x68);
    if (in_stack_00000390[0x3c] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x3b] = *(undefined8 *)(lVar4 + 0x68);
      NullCheck((void *)in_stack_00000390[0x3b]);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x3b],
                 (MethodInfo *)0x0);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if (((*(byte *)(lVar4 + 0xee) & 1) == 0 & *(byte *)(unaff_x29 + -0x11) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c_<CreateMaterialValidationMode>b__2_4__
               ,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x33] = *(undefined8 *)(lVar4 + 0x60);
    if (in_stack_00000390[0x33] != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x32] = *(undefined8 *)(lVar4 + 0x60);
      NullCheck((void *)in_stack_00000390[0x32]);
      Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x32],
                 (MethodInfo *)0x0);
    }
  }
  bVar2 = *(byte *)(unaff_x29 + -0x11);
  uStack0000000000000144 = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar4 + 0xee) = bVar2 & 1 & (byte)uStack0000000000000144;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  uVar5 = OVRPlugin_get_audioOutId_m5D5085CAAC63B5F1C4FB8E2160278EBC7BC7CCDA(0);
  in_stack_00000390[0x2a] = uVar5;
  *(undefined8 *)(in_stack_00000380 + 0x388) = in_stack_00000390[0x2a];
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar4 + 0x147) & (byte)uStack0000000000000144 & 1) == 0) {
    in_stack_00000390[0x28] = *(undefined8 *)(in_stack_00000380 + 0x388);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar5 = in_stack_00000390[0x28];
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined8 *)(lVar4 + 0x150) = uVar5;
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x150),(void *)in_stack_00000390[0x28]);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined1 *)(lVar4 + 0x147) = 1;
  }
  else {
    in_stack_00000390[0x27] = *(undefined8 *)(in_stack_00000380 + 0x388);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x26] = *(undefined8 *)(lVar4 + 0x150);
    bVar2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (in_stack_00000390[0x27],in_stack_00000390[0x26],0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x24] = *(undefined8 *)(lVar4 + 0x70);
      if (in_stack_00000390[0x24] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x23] = *(undefined8 *)(lVar4 + 0x70);
        NullCheck((void *)in_stack_00000390[0x23]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x23],
                   (MethodInfo *)0x0);
      }
      in_stack_00000390[0x1c] = *(undefined8 *)(in_stack_00000380 + 0x388);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      uVar5 = in_stack_00000390[0x1c];
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      *(undefined8 *)(lVar4 + 0x150) = uVar5;
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x150),(void *)in_stack_00000390[0x1c]);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  uVar5 = OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE(0);
  in_stack_00000390[0x1b] = uVar5;
  *(undefined8 *)(in_stack_00000380 + 0x380) = in_stack_00000390[0x1b];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar4 + 0x148) & 1) == 0) {
    in_stack_00000390[0x19] = *(undefined8 *)(in_stack_00000380 + 0x380);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar5 = in_stack_00000390[0x19];
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined8 *)(lVar4 + 0x158) = uVar5;
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x158),(void *)in_stack_00000390[0x19]);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined1 *)(lVar4 + 0x148) = 1;
  }
  else {
    in_stack_00000390[0x18] = *(undefined8 *)(in_stack_00000380 + 0x380);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x17] = *(undefined8 *)(lVar4 + 0x158);
    bVar2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (in_stack_00000390[0x18],in_stack_00000390[0x17],0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__3__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x15] = *(undefined8 *)(lVar4 + 0x78);
      if (in_stack_00000390[0x15] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x14] = *(undefined8 *)(lVar4 + 0x78);
        NullCheck((void *)in_stack_00000390[0x14]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x14],
                   (MethodInfo *)0x0);
      }
      in_stack_00000390[0xd] = *(undefined8 *)(in_stack_00000380 + 0x380);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      uVar5 = in_stack_00000390[0xd];
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      *(undefined8 *)(lVar4 + 0x158) = uVar5;
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x158),(void *)in_stack_00000390[0xd]);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar4 + 0x160) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar5 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                      ((MethodInfo *)0x0);
    in_stack_00000390[0xb] = uVar5;
    NullCheck((void *)in_stack_00000390[0xb]);
    bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0
                      (in_stack_00000390[0xb],0);
    if ((bVar2 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[9] = *(undefined8 *)(lVar4 + 0x88);
      if (in_stack_00000390[9] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[8] = *(undefined8 *)(lVar4 + 0x88);
        NullCheck((void *)in_stack_00000390[8]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[8],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar4 + 0x160) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar5 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                      ((MethodInfo *)0x0);
    *in_stack_00000390 = uVar5;
    NullCheck((void *)*in_stack_00000390);
    bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0
                      (*in_stack_00000390,0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass2_0_<CreateHDRDebugMode>b__3__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      if (*(long *)(lVar4 + 0x80) != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        pAVar7 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar4 + 0x80);
        NullCheck(pAVar7);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar7,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  pvVar6 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar6);
  bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar6,0);
  uStack0000000000000044 = (uint)(bVar2 & 1);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar4 + 0x160) = (byte)uStack0000000000000044 & 1;
  pvVar6 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar6);
  OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6(pvVar6,0);
  if (*(int *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x114) !=
      *(int *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x118)) {
    *(undefined4 *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x114) =
         *(undefined4 *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x118);
    *(undefined4 *)(in_stack_00000380 + 0x304) =
         *(undefined4 *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x114);
    iVar1 = *(int *)(in_stack_00000380 + 0x304);
    if (iVar1 == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(0);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (0,0);
    }
    else if (iVar1 == 1) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (0,0);
    }
    else if (iVar1 == 2) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
      OVRPlugin_SetControllerDrivenHandPoses_m16C50D1707E9CBDDC53490612C1A20413506ED92(1);
      OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E
                (1,0);
    }
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076();
  OVRManager_UpdateHMDEvents_m2B05C0DAB70C5325A95E4B7AC01F9CE17CD647B4
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar3 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),uVar5,uVar3,0);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            (*(byte *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x101) & 1,0);
  return;
}


