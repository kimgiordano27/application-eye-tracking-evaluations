/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetStartingApplication$$BeginInvoke
ENTRY_POINT: 02d89d74
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_18;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_16
*/


void OVR_OpenVR_IVRApplications__GetStartingApplication__BeginInvoke(ulong *param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  long lVar6;
  void *pvVar7;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar8;
  long in_x9;
  long unaff_x29;
  uint uStack0000000000000044;
  undefined4 uStack0000000000000144;
  long in_stack_00000380;
  undefined8 *in_stack_00000390;
  ulong *in_stack_00000398;
  undefined8 *in_stack_000003a0;
  undefined8 *in_stack_000003a8;
  
  *(undefined8 *)(in_x9 + 0x188) = in_stack_00000390[0x2e];
  uVar4 = il2cpp_codegen_initialize_runtime_metadata_inline(param_1);
  *(undefined8 *)(in_stack_00000380 + 0x180) = uVar4;
  *(undefined8 *)(in_stack_00000380 + 0x178) = 0;
  *(undefined8 *)(in_stack_00000380 + 0x170) = *(undefined8 *)(in_stack_00000380 + 0x180);
  uVar4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)(in_stack_00000380 + 0x170),
                     *(undefined8 *)(in_stack_00000380 + 0x178));
  in_stack_00000390[0x2c] = uVar4;
  pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000398);
  il2cpp_codegen_runtime_class_init_inline(pIVar5);
  Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(in_stack_00000390[0x2c],0);
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xb8));
  bVar2 = *(byte *)(unaff_x29 + -0x11);
  uStack0000000000000144 = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar6 + 0xee) = bVar2 & 1 & (byte)uStack0000000000000144;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  uVar4 = OVRPlugin_get_audioOutId_m5D5085CAAC63B5F1C4FB8E2160278EBC7BC7CCDA(0);
  in_stack_00000390[0x2a] = uVar4;
  *(undefined8 *)(in_stack_00000380 + 0x388) = in_stack_00000390[0x2a];
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0x147) & (byte)uStack0000000000000144 & 1) == 0) {
    in_stack_00000390[0x28] = *(undefined8 *)(in_stack_00000380 + 0x388);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar4 = in_stack_00000390[0x28];
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined8 *)(lVar6 + 0x150) = uVar4;
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x150),(void *)in_stack_00000390[0x28]);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined1 *)(lVar6 + 0x147) = 1;
  }
  else {
    in_stack_00000390[0x27] = *(undefined8 *)(in_stack_00000380 + 0x388);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x26] = *(undefined8 *)(lVar6 + 0x150);
    bVar2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (in_stack_00000390[0x27],in_stack_00000390[0x26],0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__1__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x24] = *(undefined8 *)(lVar6 + 0x70);
      if (in_stack_00000390[0x24] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x23] = *(undefined8 *)(lVar6 + 0x70);
        NullCheck((void *)in_stack_00000390[0x23]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x23],
                   (MethodInfo *)0x0);
      }
      in_stack_00000390[0x1c] = *(undefined8 *)(in_stack_00000380 + 0x388);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      uVar4 = in_stack_00000390[0x1c];
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      *(undefined8 *)(lVar6 + 0x150) = uVar4;
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x150),(void *)in_stack_00000390[0x1c]);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  uVar4 = OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE(0);
  in_stack_00000390[0x1b] = uVar4;
  *(undefined8 *)(in_stack_00000380 + 0x380) = in_stack_00000390[0x1b];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0x148) & 1) == 0) {
    in_stack_00000390[0x19] = *(undefined8 *)(in_stack_00000380 + 0x380);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar4 = in_stack_00000390[0x19];
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined8 *)(lVar6 + 0x158) = uVar4;
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x158),(void *)in_stack_00000390[0x19]);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined1 *)(lVar6 + 0x148) = 1;
  }
  else {
    in_stack_00000390[0x18] = *(undefined8 *)(in_stack_00000380 + 0x380);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x17] = *(undefined8 *)(lVar6 + 0x158);
    bVar2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (in_stack_00000390[0x18],in_stack_00000390[0x17],0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__3__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x15] = *(undefined8 *)(lVar6 + 0x78);
      if (in_stack_00000390[0x15] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x14] = *(undefined8 *)(lVar6 + 0x78);
        NullCheck((void *)in_stack_00000390[0x14]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x14],
                   (MethodInfo *)0x0);
      }
      in_stack_00000390[0xd] = *(undefined8 *)(in_stack_00000380 + 0x380);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      uVar4 = in_stack_00000390[0xd];
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      *(undefined8 *)(lVar6 + 0x158) = uVar4;
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      Il2CppCodeGenWriteBarrier((void **)(lVar6 + 0x158),(void *)in_stack_00000390[0xd]);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0x160) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar4 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                      ((MethodInfo *)0x0);
    in_stack_00000390[0xb] = uVar4;
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
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[9] = *(undefined8 *)(lVar6 + 0x88);
      if (in_stack_00000390[9] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[8] = *(undefined8 *)(lVar6 + 0x88);
        NullCheck((void *)in_stack_00000390[8]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[8],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar6 + 0x160) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar4 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                      ((MethodInfo *)0x0);
    *in_stack_00000390 = uVar4;
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
      lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      if (*(long *)(lVar6 + 0x80) != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        pAVar8 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar6 + 0x80);
        NullCheck(pAVar8);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar8,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  pvVar7 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar7);
  bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar7,0);
  uStack0000000000000044 = (uint)(bVar2 & 1);
  lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar6 + 0x160) = (byte)uStack0000000000000044 & 1;
  pvVar7 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar7);
  OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6(pvVar7,0);
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
  uVar4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar3 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),uVar4,uVar3,0);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            (*(byte *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x101) & 1,0);
  return;
}


