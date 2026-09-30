/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetTransitionState$$EndInvoke
ENTRY_POINT: 02d8a00c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_19;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_15
*/


void OVR_OpenVR_IVRApplications__GetTransitionState__EndInvoke(undefined8 param_1,ulong *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *pIVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar10;
  long in_x9;
  long unaff_x29;
  uint uStack0000000000000044;
  uint uStack000000000000011c;
  long in_stack_00000380;
  undefined8 *in_stack_00000390;
  ulong *in_stack_00000398;
  undefined8 *in_stack_000003a0;
  undefined8 *in_stack_000003a8;
  ulong *in_stack_000003b8;
  
  *(undefined8 *)(in_x9 + 0x110) = param_1;
  pIVar4 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(param_2);
  pIVar5 = (Il2CppClass *)il2cpp_codegen_object_class(*(Il2CppObject **)in_stack_00000390[0x22]);
  uStack000000000000011c = il2cpp_codegen_class_is_assignable_from(pIVar4,pIVar5);
  if ((uStack000000000000011c & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *(undefined8 *)in_stack_00000390[0x22];
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&Il2CppExceptionWrapper::typeinfo,0);
  }
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::push
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xb8),
             *(Il2CppObject **)in_stack_00000390[0x22]);
  *(undefined4 *)((long)in_stack_00000390 + 900) = 0x39;
  __cxa_end_catch();
  uVar7 = il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::top
                    ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xb8));
  in_stack_00000390[0x21] = uVar7;
  *(undefined8 *)(in_stack_00000380 + 800) = in_stack_00000390[0x21];
  in_stack_00000390[0x20] = *(undefined8 *)(in_stack_00000380 + 800);
  in_stack_00000390[0x1f] = in_stack_00000390[0x20];
  if (in_stack_00000390[0x1f] == 0) {
    *(undefined8 *)(in_stack_00000380 + 0x158) = in_stack_00000390[0x1f];
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000003b8);
    *(undefined8 *)(in_stack_00000380 + 0x150) = uVar7;
    *(undefined8 *)(in_stack_00000380 + 0x148) = 0;
    *(undefined8 *)(in_stack_00000380 + 0x140) = *(undefined8 *)(in_stack_00000380 + 0x150);
  }
  else {
    *(undefined8 *)(in_stack_00000380 + 0x168) = in_stack_00000390[0x1f];
    uVar7 = il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000003b8);
    *(undefined8 *)(in_stack_00000380 + 0x160) = uVar7;
    NullCheck(*(void **)(in_stack_00000380 + 0x168));
    uVar7 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(in_stack_00000380 + 0x168));
    in_stack_00000390[0x1e] = uVar7;
    *(undefined8 *)(in_stack_00000380 + 0x148) = in_stack_00000390[0x1e];
    *(undefined8 *)(in_stack_00000380 + 0x140) = *(undefined8 *)(in_stack_00000380 + 0x160);
  }
  uVar7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)(in_stack_00000380 + 0x140),
                     *(undefined8 *)(in_stack_00000380 + 0x148));
  in_stack_00000390[0x1d] = uVar7;
  pIVar4 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000398);
  il2cpp_codegen_runtime_class_init_inline(pIVar4);
  Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(in_stack_00000390[0x1d],0);
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xb8));
  in_stack_00000390[0x1c] = *(undefined8 *)(in_stack_00000380 + 0x388);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  uVar7 = in_stack_00000390[0x1c];
  lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(undefined8 *)(lVar8 + 0x150) = uVar7;
  lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  Il2CppCodeGenWriteBarrier((void **)(lVar8 + 0x150),(void *)in_stack_00000390[0x1c]);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a8);
  uVar7 = OVRPlugin_get_audioInId_m69899C3CA94D7DFD3E580D40DE456876775000DE(0);
  in_stack_00000390[0x1b] = uVar7;
  *(undefined8 *)(in_stack_00000380 + 0x380) = in_stack_00000390[0x1b];
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar8 + 0x148) & 1) == 0) {
    in_stack_00000390[0x19] = *(undefined8 *)(in_stack_00000380 + 0x380);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar7 = in_stack_00000390[0x19];
    lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined8 *)(lVar8 + 0x158) = uVar7;
    lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    Il2CppCodeGenWriteBarrier((void **)(lVar8 + 0x158),(void *)in_stack_00000390[0x19]);
    lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    *(undefined1 *)(lVar8 + 0x148) = 1;
  }
  else {
    in_stack_00000390[0x18] = *(undefined8 *)(in_stack_00000380 + 0x380);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
    in_stack_00000390[0x17] = *(undefined8 *)(lVar8 + 0x158);
    bVar2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                      (in_stack_00000390[0x18],in_stack_00000390[0x17],0);
    if ((bVar2 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000398);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__3__
                 ,0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[0x15] = *(undefined8 *)(lVar8 + 0x78);
      if (in_stack_00000390[0x15] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[0x14] = *(undefined8 *)(lVar8 + 0x78);
        NullCheck((void *)in_stack_00000390[0x14]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[0x14],
                   (MethodInfo *)0x0);
      }
      in_stack_00000390[0xd] = *(undefined8 *)(in_stack_00000380 + 0x380);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
      uVar7 = in_stack_00000390[0xd];
      lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      *(undefined8 *)(lVar8 + 0x158) = uVar7;
      lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      Il2CppCodeGenWriteBarrier((void **)(lVar8 + 0x158),(void *)in_stack_00000390[0xd]);
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar8 + 0x160) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar7 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                      ((MethodInfo *)0x0);
    in_stack_00000390[0xb] = uVar7;
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
      lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      in_stack_00000390[9] = *(undefined8 *)(lVar8 + 0x88);
      if (in_stack_00000390[9] != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        in_stack_00000390[8] = *(undefined8 *)(lVar8 + 0x88);
        NullCheck((void *)in_stack_00000390[8]);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline
                  ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)in_stack_00000390[8],
                   (MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  if ((*(byte *)(lVar8 + 0x160) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
    uVar7 = OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                      ((MethodInfo *)0x0);
    *in_stack_00000390 = uVar7;
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
      lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
      if (*(long *)(lVar8 + 0x80) != 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
        lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
        pAVar10 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar8 + 0x80);
        NullCheck(pAVar10);
        Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(pAVar10,(MethodInfo *)0x0);
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  pvVar9 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar9);
  bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar9,0);
  uStack0000000000000044 = (uint)(bVar2 & 1);
  lVar8 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar8 + 0x160) = (byte)uStack0000000000000044 & 1;
  pvVar9 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar9);
  OVRDisplay_Update_m2AAB1947DCA31B18778EC0B5DAD5F5D61C95EAC6(pvVar9,0);
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
  uVar7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar3 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),uVar7,uVar3,0);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            (*(byte *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x101) & 1,0);
  return;
}


