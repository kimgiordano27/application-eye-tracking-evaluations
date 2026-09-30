/*
FUNCTION_NAME: OVRPlugin$$SetControllerVibration
ENTRY_POINT: 02cb02ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerVibration(ulong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar6;
  Il2CppObject *pIVar7;
  String_t *pSVar8;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_TryLoadLayoutInternal__
            );
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_ToLayout__);
  GroupPresenceSample_UpdateDestinationsConsole_m131711E4FA4B5815AC8E907B2CC9EEC7AEE5389C::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x50);
  NullCheck(*(void **)(unaff_x29 + -0x28));
  uVar2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline
                    (*(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD **)(unaff_x29 + -0x28),
                     (MethodInfo *)*in_stack_00000008);
  *(undefined4 *)(unaff_x29 + -0x2c) = uVar2;
  if (*(int *)(unaff_x29 + -0x2c) == 0) {
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x48);
    NullCheck(*(void **)(unaff_x29 + -0x38));
    VirtualActionInvoker1<String_t*>::Invoke
              (0x4b,*(Il2CppObject **)(unaff_x29 + -0x38),
               *(String_t **)
                Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_ToLayout__);
  }
  *(undefined8 *)(unaff_x29 + -0x18) =
       *(undefined8 *)
        Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_TryLoadLayout__;
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  while( true ) {
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    pLVar6 = *(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD **)
              (*(long *)(unaff_x29 + -8) + 0x50);
    NullCheck(pLVar6);
    iVar3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline
                      (pLVar6,(MethodInfo *)*in_stack_00000008);
    if (iVar3 <= iVar1) break;
    *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x1c);
    *(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x60);
    if (*(int *)(unaff_x29 + -0x3c) == *(int *)(unaff_x29 + -0x40)) {
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x18);
      uVar4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)(unaff_x29 + -0x48),
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_TryLoadLayoutInternal__
                         ,0);
      *(undefined8 *)(unaff_x29 + -0x50) = uVar4;
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x50);
    }
    uVar5 = *(undefined8 *)(unaff_x29 + -0x18);
    pLVar6 = *(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD **)
              (*(long *)(unaff_x29 + -8) + 0x50);
    iVar1 = *(int *)(unaff_x29 + -0x1c);
    NullCheck(pLVar6);
    uVar4 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8
                      (pLVar6,iVar1,
                       *(MethodInfo **)
                        Method_System_Collections_Generic_List_Enumerator<IXmlNode>_MoveNext__);
    uVar4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B
                      (uVar5,uVar4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<OVRSpace,_int>__ctor__,0);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar4;
    uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x1c),1);
    *(undefined4 *)(unaff_x29 + -0x1c) = uVar2;
  }
  pIVar7 = *(Il2CppObject **)(*(long *)(unaff_x29 + -8) + 0x48);
  pSVar8 = *(String_t **)(unaff_x29 + -0x18);
  NullCheck(pIVar7);
  VirtualActionInvoker1<String_t*>::Invoke(0x4b,pIVar7,pSVar8);
  return;
}


