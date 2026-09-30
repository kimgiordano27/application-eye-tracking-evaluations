/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._AcknowledgeQuit_Exiting$$Invoke
ENTRY_POINT: 02d83118
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 162
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


undefined8 OVR_OpenVR_IVRSystem__AcknowledgeQuit_Exiting__Invoke(ulong *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A *pCVar7;
  Il2CppArray *this;
  Il2CppObject *pIVar8;
  WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93 *pWVar9;
  Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 *pCVar10;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *pOVar11;
  List_1_tD2FA3273746E404D72561E8324608D18B52B533E *pLVar12;
  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 *pCVar13;
  void *pvVar14;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  ulong *in_stack_00000038;
  ulong *in_stack_00000040;
  ulong *in_stack_00000048;
  ulong *in_stack_00000050;
  byte bStack00000000000000a7;
  int iStack0000000000000124;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Runtime_CompilerServices_TaskAwaiter<ProjectConfiguration>_GetResult__);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000038);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
            );
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000040);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_9__);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000048);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__97_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__6_0__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000050);
  OVRManager_FindMainCamera_mCCD7BE229B2DA34FFCB009A527BBE8F40F57EB49::s_Il2CppMethodInitialized = 1
  ;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined4 *)(unaff_x29 + -0x34) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(lVar4 + 0x1a8);
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(lVar4 + 0x1a8);
    NullCheck(*(void **)(unaff_x29 + -0x78));
    bVar1 = WeakReference_1_TryGetTarget_m554CBAC52CB26900F9D0E24648D3482A43AB67B6
                      (*(WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93 **)
                        (unaff_x29 + -0x78),
                       (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 **)(unaff_x29 + -0x18),
                       *(MethodInfo **)
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                      );
    *(byte *)(unaff_x29 + -0x79) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x79) & 1) != 0) {
      *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x18);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
      bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                        (*(undefined8 *)(unaff_x29 + -0x88),0);
      *(byte *)(unaff_x29 + -0x89) = bVar1 & 1;
      if ((*(byte *)(unaff_x29 + -0x89) & 1) != 0) {
        *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x18);
        NullCheck(*(void **)(unaff_x29 + -0x98));
        bVar1 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A
                          (*(undefined8 *)(unaff_x29 + -0x98),0);
        *(byte *)(unaff_x29 + -0x99) = bVar1 & 1;
        if ((*(byte *)(unaff_x29 + -0x99) & 1) != 0) {
          *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x18);
          NullCheck(*(void **)(unaff_x29 + -0xa8));
          bVar1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5
                            (*(undefined8 *)(unaff_x29 + -0xa8),*in_stack_00000050,0);
          *(byte *)(unaff_x29 + -0xa9) = bVar1 & 1;
          if ((*(byte *)(unaff_x29 + -0xa9) & 1) != 0) {
            *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(unaff_x29 + -0x18);
            *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0xb8);
            goto LAB_02d839c4;
          }
        }
      }
    }
  }
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  uVar5 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3
                    (*in_stack_00000050,0);
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar5;
  uVar5 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_System_Runtime_CompilerServices_TaskAwaiter<ProjectConfiguration>_GetResult__
                    );
  *(undefined8 *)(unaff_x29 + -200) = uVar5;
  List_1__ctor_m62FFCB8D441FA0A3D3002703967951B70D8475F1
            (*(List_1_tD2FA3273746E404D72561E8324608D18B52B533E **)(unaff_x29 + -200),4,
             *(MethodInfo **)
              Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_8__);
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -200);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0xc0);
  *(undefined4 *)(unaff_x29 + -0x34) = 0;
  while (iVar3 = *(int *)(unaff_x29 + -0x34), pvVar14 = *(void **)(unaff_x29 + -0x30),
        NullCheck(pvVar14), iVar3 < (int)*(undefined8 *)((long)pvVar14 + 0x18)) {
    *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0xd4) = *(undefined4 *)(unaff_x29 + -0x34);
    NullCheck(*(void **)(unaff_x29 + -0xd0));
    *(undefined4 *)(unaff_x29 + -0xd8) = *(undefined4 *)(unaff_x29 + -0xd4);
    uVar5 = GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF::GetAt
                      (*(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF **)
                        (unaff_x29 + -0xd0),(long)*(int *)(unaff_x29 + -0xd8));
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar5;
    NullCheck(*(void **)(unaff_x29 + -0xe0));
    uVar5 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6
                      (*(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)(unaff_x29 + -0xe0)
                       ,*(MethodInfo **)
                         Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Add__
                      );
    *(undefined8 *)(unaff_x29 + -0xe8) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0xe8);
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0x40);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602
                      (*(undefined8 *)(unaff_x29 + -0xf0),0);
    *(byte *)(unaff_x29 + -0xf1) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0xf1) & 1) != 0) {
      *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x40);
      NullCheck(*(void **)(unaff_x29 + -0x100));
      bVar1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1
                        (*(undefined8 *)(unaff_x29 + -0x100),0);
      if ((bVar1 & 1) != 0) {
        pCVar10 = *(Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3 **)(unaff_x29 + -0x40);
        NullCheck(pCVar10);
        uVar5 = Component_GetComponentInParent_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m132CAE22DC4B18ACA26D293EE1D3799068ADAA5D
                          (pCVar10,*(MethodInfo **)
                                    Method_System_Collections_Stack_StackEnumerator_Reset__);
        *(undefined8 *)(unaff_x29 + -0x48) = uVar5;
        uVar5 = *(undefined8 *)(unaff_x29 + -0x48);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
        bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
        if ((bVar1 & 1) != 0) {
          pOVar11 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)(unaff_x29 + -0x48);
          NullCheck(pOVar11);
          uVar5 = OVRCameraRig_get_trackingSpace_m76339871C7804C1BD14283FBF3D91268D4D87550_inline
                            (pOVar11,(MethodInfo *)0x0);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
          bVar1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
          if ((bVar1 & 1) != 0) {
            pLVar12 = *(List_1_tD2FA3273746E404D72561E8324608D18B52B533E **)(unaff_x29 + -0x28);
            pCVar13 = *(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 **)(unaff_x29 + -0x40);
            NullCheck(pLVar12);
            List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline
                      (pLVar12,pCVar13,
                       *(MethodInfo **)
                        Method_System_Nullable<InputControlLayout_ControlItem>__ctor__);
          }
        }
      }
    }
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x34),1);
    *(undefined4 *)(unaff_x29 + -0x34) = uVar2;
  }
  pLVar12 = *(List_1_tD2FA3273746E404D72561E8324608D18B52B533E **)(unaff_x29 + -0x28);
  NullCheck(pLVar12);
  iStack0000000000000124 =
       List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline
                 (pLVar12,(MethodInfo *)*in_stack_00000028);
  if (iStack0000000000000124 == 0) {
    uVar5 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(0);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar5;
  }
  else {
    pLVar12 = *(List_1_tD2FA3273746E404D72561E8324608D18B52B533E **)(unaff_x29 + -0x28);
    NullCheck(pLVar12);
    iVar3 = List_1_get_Count_mDCDDC4E9E15CD83C00D4CC32F79830261769F65C_inline
                      (pLVar12,(MethodInfo *)*in_stack_00000028);
    if (iVar3 == 1) {
      pLVar12 = *(List_1_tD2FA3273746E404D72561E8324608D18B52B533E **)(unaff_x29 + -0x28);
      NullCheck(pLVar12);
      uVar5 = List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6
                        (pLVar12,0,(MethodInfo *)*in_stack_00000030);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar5;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
      if ((*(byte *)(lVar4 + 0x1a0) & 1) == 0) {
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
        Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                  (*(undefined8 *)
                    Method_Unity_XR_CoreUtils_XROrigin_<RepeatInitializeCamera>d__48_System_Collections_IEnumerator_Reset__
                   ,0);
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
        *(undefined1 *)(lVar4 + 0x1a0) = 1;
      }
      uVar5 = *(undefined8 *)(unaff_x29 + -0x28);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
      if (*(long *)(lVar4 + 0x10) == 0) {
        *(undefined8 *)(unaff_x29 + -0x60) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = uVar5;
        il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000048);
        puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
        pIVar8 = (Il2CppObject *)*puVar6;
        pCVar7 = (Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A *)
                 il2cpp_codegen_object_new
                           (*(Il2CppClass **)
                             Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_6__
                           );
        Comparison_1__ctor_mA05E36D38BB75F9EF78F876803A19445EDF81CD5
                  (pCVar7,pIVar8,
                   *(long *)
                    Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_9__
                   ,(MethodInfo *)0x0);
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
        *(Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A **)(lVar4 + 0x10) = pCVar7;
        lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000048);
        Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x10),pCVar7);
        *(Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A **)(unaff_x29 + -0x50) = pCVar7;
        *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x68);
      }
      else {
        *(long *)(unaff_x29 + -0x50) = *(long *)(lVar4 + 0x10);
        *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
      }
      NullCheck(*(void **)(unaff_x29 + -0x58));
      List_1_Sort_mF0042CBA61BB32CBA4FFE1CD1286329131635B85
                (*(List_1_tD2FA3273746E404D72561E8324608D18B52B533E **)(unaff_x29 + -0x58),
                 *(Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A **)(unaff_x29 + -0x50),
                 *(MethodInfo **)
                  Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__227_7__
                );
      pLVar12 = *(List_1_tD2FA3273746E404D72561E8324608D18B52B533E **)(unaff_x29 + -0x28);
      NullCheck(pLVar12);
      uVar5 = List_1_get_Item_m7CEE3A6E144C8D86DE6490620206FAB13432ACF6
                        (pLVar12,0,(MethodInfo *)*in_stack_00000030);
      *(undefined8 *)(unaff_x29 + -0x20) = uVar5;
    }
  }
  uVar5 = *(undefined8 *)(unaff_x29 + -0x20);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
  bStack00000000000000a7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(uVar5,0);
  bStack00000000000000a7 = bStack00000000000000a7 & 1;
  if (bStack00000000000000a7 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
    if ((*(byte *)(lVar4 + 0x1a1) & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_<Render>b__6_0__,0)
      ;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
      lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
      *(undefined1 *)(lVar4 + 0x1a1) = 1;
    }
  }
  else {
    this = (Il2CppArray *)
           SZArrayNew(*(Il2CppClass **)
                       Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                      ,1);
    pvVar14 = *(void **)(unaff_x29 + -0x20);
    NullCheck(pvVar14);
    pvVar14 = (void *)Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(pvVar14);
    NullCheck(pvVar14);
    pIVar8 = (Il2CppObject *)Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(pvVar14,0);
    NullCheck(this);
    ArrayElementTypeCheck(this,pIVar8);
    ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918::SetAt
              ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918 *)this,0,pIVar8);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7
              (*(undefined8 *)
                Method_UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_System_Collections_IEnumerator_Reset__
               ,this,0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
    *(undefined1 *)(lVar4 + 0x1a1) = 0;
  }
  pCVar13 = *(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184 **)(unaff_x29 + -0x20);
  pWVar9 = (WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_<OnFindLayoutForDevice>b__0__
                     );
  WeakReference_1__ctor_m12E7503DDFC128E1736C08DF717D975A0B2BB6E7
            (pWVar9,pCVar13,
             *(MethodInfo **)
              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<UIUpdateCheckCoroutine>d__97_System_Collections_IEnumerator_Reset__
            );
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000038);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
  *(WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93 **)(lVar4 + 0x1a8) = pWVar9;
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000038);
  Il2CppCodeGenWriteBarrier((void **)(lVar4 + 0x1a8),pWVar9);
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x20);
LAB_02d839c4:
  return *(undefined8 *)(unaff_x29 + -8);
}


