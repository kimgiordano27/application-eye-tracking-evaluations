/*
FUNCTION_NAME: OVR.OpenVR.IVRApplications._GetCurrentSceneProcessId$$Invoke
ENTRY_POINT: 02d8aaac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_14;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_12
*/


void OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId__Invoke(void)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Il2CppClass *pIVar5;
  Il2CppClass *pIVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  long unaff_x29;
  uint uStack0000000000000044;
  uint uStack0000000000000064;
  long in_stack_00000380;
  long in_stack_00000390;
  ulong *in_stack_00000398;
  undefined8 *in_stack_000003a0;
  undefined8 *in_stack_000003a8;
  ulong *in_stack_000003b0;
  ulong *in_stack_000003b8;
  
  puVar4 = (undefined8 *)__cxa_begin_catch();
  pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000003b0);
  pIVar6 = (Il2CppClass *)il2cpp_codegen_object_class((Il2CppObject *)*puVar4);
  uStack0000000000000064 = il2cpp_codegen_class_is_assignable_from(pIVar5,pIVar6);
  if ((uStack0000000000000064 & 1) == 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&Il2CppExceptionWrapper::typeinfo,0);
  }
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::push
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xb8),(Il2CppObject *)*puVar4);
  *(undefined4 *)(in_stack_00000390 + 900) = 0x4a;
  __cxa_end_catch();
  uVar8 = il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::top
                    ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xb8));
  *(undefined8 *)(in_stack_00000380 + 0x308) = uVar8;
  if (*(long *)(in_stack_00000380 + 0x308) == 0) {
    *(undefined8 *)(in_stack_00000380 + 200) = 0;
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000003b8);
    *(undefined8 *)(in_stack_00000380 + 0xc0) = uVar8;
    *(undefined8 *)(in_stack_00000380 + 0xb8) = 0;
    *(undefined8 *)(in_stack_00000380 + 0xb0) = *(undefined8 *)(in_stack_00000380 + 0xc0);
  }
  else {
    *(long *)(in_stack_00000380 + 0xd8) = *(long *)(in_stack_00000380 + 0x308);
    uVar8 = il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_000003b8);
    *(undefined8 *)(in_stack_00000380 + 0xd0) = uVar8;
    NullCheck(*(void **)(in_stack_00000380 + 0xd8));
    uVar8 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(in_stack_00000380 + 0xd8));
    *(undefined8 *)(in_stack_00000380 + 0xb8) = uVar8;
    *(undefined8 *)(in_stack_00000380 + 0xb0) = *(undefined8 *)(in_stack_00000380 + 0xd0);
  }
  uVar8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                    (*(undefined8 *)(in_stack_00000380 + 0xb0),
                     *(undefined8 *)(in_stack_00000380 + 0xb8));
  pIVar5 = (Il2CppClass *)il2cpp_codegen_initialize_runtime_metadata_inline(in_stack_00000398);
  il2cpp_codegen_runtime_class_init_inline(pIVar5);
  Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar8,0);
  il2cpp::utils::ExceptionSupportStack<Il2CppObject*,1>::pop
            ((ExceptionSupportStack<Il2CppObject*,1> *)(unaff_x29 + -0xb8));
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  pvVar9 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar9);
  bVar2 = OVRTracker_get_isPositionTracked_mE9A6204989140E34AB187178E6A268C9A1F492C0(pvVar9,0);
  uStack0000000000000044 = (uint)(bVar2 & 1);
  lVar10 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000003a0);
  *(byte *)(lVar10 + 0x160) = (byte)uStack0000000000000044 & 1;
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
  uVar8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  uVar3 = OVRManager_get_trackingOriginType_m352B753617F98DC58AD3F8E4324E23C7CF3A47E0
                    (*(undefined8 *)(in_stack_00000380 + 0x3a0),0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000003a0);
  OVRManager_StaticUpdateMixedRealityCapture_m68D3A9F860CCE3910D11D4C80FE04E984D863810
            (*(undefined8 *)(in_stack_00000380 + 0x3a0),uVar8,uVar3,0);
  OVRManager_UpdateInsightPassthrough_mB261855F40DB798505F3B863C29E7ED598546A4F
            (*(byte *)(*(long *)(in_stack_00000380 + 0x3a0) + 0x101) & 1,0);
  return;
}


