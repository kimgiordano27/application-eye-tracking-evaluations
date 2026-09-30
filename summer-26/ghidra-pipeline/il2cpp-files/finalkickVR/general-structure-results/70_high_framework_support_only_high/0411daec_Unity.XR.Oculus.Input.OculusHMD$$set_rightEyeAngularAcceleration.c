/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_rightEyeAngularAcceleration
ENTRY_POINT: 0411daec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_rightEyeAngularAcceleration(void)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  __22 *extraout_x1;
  undefined8 in_x3;
  Il2CppObject *pIVar4;
  void *pvVar5;
  void **ppvVar6;
  Il2CppObject *pIVar7;
  long unaff_x29;
  undefined8 *in_stack_00000038;
  ulong *in_stack_00000040;
  undefined4 uStack000000000000005c;
  
  *(undefined8 *)(unaff_x29 + -0x20) = in_x3;
  if ((XRInteractionGroup_UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions_m902BA2CC0E6D81674E65A5A1CD8BD24D5ABC7CAB
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseRegistrationList_1_get_registeredSnapshot_m32D934AB6CB399AD1B52851CFF090FEB4DA8B6B8_RuntimeMethod_var_048d0b00
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Enumerator_Dispose_m884699DE3C95E7F2D28718C0F0321CE2A2DD67C4_RuntimeMethod_var_048d0b08
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Enumerator_MoveNext_m689F1E357EC41F1917E96496FAFEE3EEC63A8D05_RuntimeMethod_var_048d0b10
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Enumerator_get_Current_m1D06FEAFB44B99D3E3C5A839558E58C03F61B15C_RuntimeMethod_var_048d0b18
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000040);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IXRInteractionOverrideGroup_t74ED08DF74B7754223255E06E8B80D73AA7150BA_il2cpp_TypeInfo_var_048d0a78
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var_048cfe18
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_GetEnumerator_mC8C0548ED460E206C8F2A3C914747841D91B7F38_RuntimeMethod_var_048d0b20
              );
    XRInteractionGroup_UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions_m902BA2CC0E6D81674E65A5A1CD8BD24D5ABC7CAB
    ::s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined1 *)(unaff_x29 + -0x49) = 0;
  *(undefined1 *)(unaff_x29 + -0x4a) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined4 *)(unaff_x29 + -0x6c) = 0;
  bVar1 = InterfaceFuncInvoker1<bool,Il2CppObject**>::Invoke
                    (5,*(Il2CppClass **)
                        PTR_IXRInteractionOverrideGroup_t74ED08DF74B7754223255E06E8B80D73AA7150BA_il2cpp_TypeInfo_var_048d0a78
                     ,*(Il2CppObject **)(unaff_x29 + -8),(Il2CppObject **)(unaff_x29 + -0x28));
  *(byte *)(unaff_x29 + -0x6d) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x6d) & 1) != 0) {
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x28);
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x78);
  }
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x18);
  **(undefined8 **)(unaff_x29 + -0x80) = 0;
  Il2CppCodeGenWriteBarrier(*(void ***)(unaff_x29 + -0x80),(void *)0x0);
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x90) = 1;
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x80);
  NullCheck(*(void **)(unaff_x29 + -0x88));
  uVar3 = BaseRegistrationList_1_get_registeredSnapshot_m32D934AB6CB399AD1B52851CFF090FEB4DA8B6B8_inline
                    (*(BaseRegistrationList_1_t686D5C95942CEF756A4EE5900401EFC1B4DFF538 **)
                      (unaff_x29 + -0x88),
                     *(MethodInfo **)
                      PTR_BaseRegistrationList_1_get_registeredSnapshot_m32D934AB6CB399AD1B52851CFF090FEB4DA8B6B8_RuntimeMethod_var_048d0b00
                    );
  *(undefined8 *)(unaff_x29 + -0x90) = uVar3;
  NullCheck(*(void **)(unaff_x29 + -0x90));
  List_1_GetEnumerator_mC8C0548ED460E206C8F2A3C914747841D91B7F38
            (*(List_1_t9A9CF80BD335FBFBE45DC649EDCFC4325442B48F **)(unaff_x29 + -0x90),
             *(MethodInfo **)
              PTR_List_1_GetEnumerator_mC8C0548ED460E206C8F2A3C914747841D91B7F38_RuntimeMethod_var_048d0b20
            );
  uVar3 = *(undefined8 *)(unaff_x29 + -200);
  in_stack_00000038[1] = *(undefined8 *)(unaff_x29 + -0xc0);
  *in_stack_00000038 = uVar3;
  *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xb8);
  in_stack_00000038[0xf] = in_stack_00000038[1];
  in_stack_00000038[0xe] = *in_stack_00000038;
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0xa0);
  *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x40;
  il2cpp::utils::
  Finally<XRInteractionGroup_UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions_m902BA2CC0E6D81674E65A5A1CD8BD24D5ABC7CAB::__22>
            ((utils *)(unaff_x29 + -0xe0),extraout_x1);
  while (uVar2 = Enumerator_MoveNext_m689F1E357EC41F1917E96496FAFEE3EEC63A8D05
                           ((Enumerator_t64CC747FE057C1849E46C5C520A9C54904362DEF *)
                            (unaff_x29 + -0x40),
                            *(MethodInfo **)
                             PTR_Enumerator_MoveNext_m689F1E357EC41F1917E96496FAFEE3EEC63A8D05_RuntimeMethod_var_048d0b10
                           ), (uVar2 & 1) != 0) {
    uVar3 = Enumerator_get_Current_m1D06FEAFB44B99D3E3C5A839558E58C03F61B15C_inline
                      ((Enumerator_t64CC747FE057C1849E46C5C520A9C54904362DEF *)(unaff_x29 + -0x40),
                       *(MethodInfo **)
                        PTR_Enumerator_get_Current_m1D06FEAFB44B99D3E3C5A839558E58C03F61B15C_RuntimeMethod_var_048d0b18
                      );
    *(undefined8 *)(unaff_x29 + -0xe8) = uVar3;
    *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0xe8);
    *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x80);
    pIVar4 = *(Il2CppObject **)(unaff_x29 + -0x48);
    NullCheck(*(void **)(unaff_x29 + -0x100));
    uVar2 = VirtualFuncInvoker1<bool,Il2CppObject*>::Invoke
                      (5,*(Il2CppObject **)(unaff_x29 + -0x100),pIVar4);
    if ((uVar2 & 1) != 0) {
      uVar3 = IsInst(*(Il2CppObject **)(unaff_x29 + -0x48),
                     *(Il2CppClass **)
                      PTR_IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var_048cfe18
                    );
      *(undefined8 *)(unaff_x29 + -0x60) = uVar3;
      if (*(long *)(unaff_x29 + -0x60) == 0) {
        uVar3 = IsInst(*(Il2CppObject **)(unaff_x29 + -0x48),(Il2CppClass *)*in_stack_00000040);
        *(undefined8 *)(unaff_x29 + -0x68) = uVar3;
        if (*(long *)(unaff_x29 + -0x68) != 0) {
          pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
          uVar3 = *(undefined8 *)(unaff_x29 + -0x68);
          NullCheck(pvVar5);
          uVar2 = XRInteractionManager_IsRegistered_mBD37C5ED08F887E1FD9F09A0C30C211D6C84FF0D
                            (pvVar5,uVar3,0);
          if ((uVar2 & 1) != 0) {
            pIVar4 = *(Il2CppObject **)(unaff_x29 + -0x68);
            pIVar7 = *(Il2CppObject **)(unaff_x29 + -0x10);
            NullCheck(pIVar4);
            InterfaceActionInvoker2<Il2CppObject*,Il2CppObject**>::Invoke
                      (0x15,(Il2CppClass *)*in_stack_00000040,pIVar4,pIVar7,
                       (Il2CppObject **)(unaff_x29 + -0x58));
            if (*(long *)(unaff_x29 + -0x58) != 0) {
              ppvVar6 = *(void ***)(unaff_x29 + -0x18);
              pvVar5 = *(void **)(unaff_x29 + -0x58);
              *ppvVar6 = pvVar5;
              Il2CppCodeGenWriteBarrier(ppvVar6,pvVar5);
              *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x58);
            }
          }
        }
      }
      else {
        pvVar5 = *(void **)(*(long *)(unaff_x29 + -8) + 0x40);
        uVar3 = *(undefined8 *)(unaff_x29 + -0x60);
        NullCheck(pvVar5);
        uVar2 = XRInteractionManager_IsRegistered_mF4665ACA0886A1A9A487DFCC217910F4F9037D52
                          (pvVar5,uVar3,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x29 + -0x10) == 0) {
            *(undefined4 *)(unaff_x29 + -0x6c) = 0;
          }
          else {
            *(uint *)(unaff_x29 + -0x6c) =
                 (uint)(*(long *)(unaff_x29 + -0x60) != *(long *)(unaff_x29 + -0x10));
          }
          *(bool *)(unaff_x29 + -0x49) = *(int *)(unaff_x29 + -0x6c) != 0;
          XRInteractionGroup_UpdateInteractorInteractions_m93767D6C67E585674EFA0B9754AAAB3014C15115
                    (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x60),
                     *(byte *)(unaff_x29 + -0x49) & 1,unaff_x29 + -0x4a,0);
          if ((*(byte *)(unaff_x29 + -0x4a) & 1) != 0) {
            ppvVar6 = *(void ***)(unaff_x29 + -0x18);
            pvVar5 = *(void **)(unaff_x29 + -0x60);
            *ppvVar6 = pvVar5;
            Il2CppCodeGenWriteBarrier(ppvVar6,pvVar5);
            *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x60);
          }
        }
      }
    }
  }
  uStack000000000000005c = 9;
  il2cpp::utils::
  FinallyHelper<XRInteractionGroup_UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions_m902BA2CC0E6D81674E65A5A1CD8BD24D5ABC7CAB::$_22,false>
  ::~FinallyHelper((FinallyHelper<XRInteractionGroup_UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions_m902BA2CC0E6D81674E65A5A1CD8BD24D5ABC7CAB::__22,false>
                    *)(unaff_x29 + -0xd8));
  *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x90) = 0;
  XRInteractionGroup_set_activeInteractor_m2361FB490AC4A1DE23A9CDD9024854923911956B_inline
            (*(XRInteractionGroup_tEC6931CE543AB5A60188714198755B9B7AEBD92A **)(unaff_x29 + -8),
             (Il2CppObject *)**(undefined8 **)(unaff_x29 + -0x18),(MethodInfo *)0x0);
  return;
}


