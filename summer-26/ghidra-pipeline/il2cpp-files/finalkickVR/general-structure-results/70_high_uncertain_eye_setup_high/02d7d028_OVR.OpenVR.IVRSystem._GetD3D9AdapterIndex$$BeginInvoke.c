/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetD3D9AdapterIndex$$BeginInvoke
ENTRY_POINT: 02d7d028
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRSystem__GetD3D9AdapterIndex__BeginInvoke(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar4;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar5;
  long unaff_x29;
  ulong *in_stack_00000000;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000000);
    OVRManager_add_InputFocusLost_mB75E6525CCFD54E827174479582C861448199E44::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
  do {
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x38);
    pIVar2 = (Il2CppObject *)
             Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00
                       (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -8),0);
    uVar3 = CastclassSealed(pIVar2,*(Il2CppClass **)
                                    Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                           );
    *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
    pAVar4 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(unaff_x29 + -0x28);
    pAVar5 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(unaff_x29 + -0x20);
    lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000000);
    pAVar4 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>
                       ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(lVar1 + 0x68),pAVar4,
                        pAVar5);
    *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 **)(unaff_x29 + -0x18) = pAVar4;
  } while (*(long *)(unaff_x29 + -0x18) != *(long *)(unaff_x29 + -0x20));
  return;
}


