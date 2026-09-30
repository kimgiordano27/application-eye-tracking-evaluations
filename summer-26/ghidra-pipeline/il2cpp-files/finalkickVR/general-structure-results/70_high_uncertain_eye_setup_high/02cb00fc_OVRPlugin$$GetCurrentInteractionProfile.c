/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfile
ENTRY_POINT: 02cb00fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfile(void)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  String_t *pSVar4;
  Il2CppObject *pIVar5;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar6;
  long unaff_x29;
  long in_stack_00000018;
  undefined4 uStack0000000000000024;
  Il2CppObject *pIStack0000000000000070;
  
  do {
    pIStack0000000000000070 = *(Il2CppObject **)(in_stack_00000018 + 0x10);
    NullCheck(pIStack0000000000000070);
    uVar2 = InterfaceFuncInvoker0<Destination_tE541D5C08D84E0FA6451C8822F3771B141D528BE*>::Invoke
                      (0,*(Il2CppClass **)
                          Method_UnityEngine_InputSystem_Layouts_InputControlLayout_<>c_<FromType>b__52_0__
                       ,pIStack0000000000000070);
    *(undefined8 *)(in_stack_00000018 + 8) = uVar2;
    pLVar6 = *(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD **)
              (*(long *)(in_stack_00000018 + 0x28) + 0x50);
    pvVar3 = *(void **)(in_stack_00000018 + 8);
    NullCheck(pvVar3);
    pSVar4 = *(String_t **)((long)pvVar3 + 0x10);
    NullCheck(pLVar6);
    List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline
              (pLVar6,pSVar4,
               *(MethodInfo **)Method_System_Collections_Generic_Dictionary<string,_object>_Clear__)
    ;
    GroupPresenceSample_UpdateDestinationsConsole_m131711E4FA4B5815AC8E907B2CC9EEC7AEE5389C
              (*(undefined8 *)(in_stack_00000018 + 0x28),0);
    pIVar5 = *(Il2CppObject **)(in_stack_00000018 + 0x10);
    NullCheck(pIVar5);
    uVar1 = InterfaceFuncInvoker0<bool>::Invoke
                      (0,*(Il2CppClass **)
                          Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                       ,pIVar5);
  } while ((uVar1 & 1) != 0);
  uStack0000000000000024 = 5;
  il2cpp::utils::
  FinallyHelper<GroupPresenceSample_OnGetDestinations_m614DD0EDA717F84C15CC6C7B6F9A55E0AC477437::$_1,false>
  ::~FinallyHelper((FinallyHelper<GroupPresenceSample_OnGetDestinations_m614DD0EDA717F84C15CC6C7B6F9A55E0AC477437::__1,false>
                    *)(unaff_x29 + -0x60));
  return;
}


