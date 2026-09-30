/*
FUNCTION_NAME: FUN_0203fda4
ENTRY_POINT: 0203fda4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 128
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0203fda4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = StringLiteral_702;
  if ((DAT_03780a8d & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f45a0);
    thunk_FUN_00d48444(StringLiteral_702);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_1__);
    thunk_FUN_00d48444(
                      Method_Polenter_Serialization_Core_SharpSerializerSettings<AdvancedSharpSerializerXmlSettings>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_5502);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_03780a8d = 1;
  }
  puVar1 = PTR_DAT_033f45a0;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  bVar3 = *(short *)(*(long *)(lVar4 + 0xb8) + 10) == 0x5c;
  *(bool *)*(undefined8 *)(*(long *)puVar1 + 0xb8) = bVar3;
  plVar9 = (long *)StringLiteral_5502;
  if (bVar3) {
    return;
  }
  lVar5 = thunk_FUN_017b8224(*(undefined8 *)
                              Method_Polenter_Serialization_Core_SharpSerializerSettings<AdvancedSharpSerializerXmlSettings>__ctor__
                             ,0);
  lVar8 = *plVar9;
  lVar4 = lVar8;
  if (lVar5 != 0) {
    lVar4 = lVar5;
  }
  if (lVar4 != 0) {
    uVar6 = FUN_015fe854(lVar4,lVar8,0);
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_1__;
    if (((uVar6 & 1) == 0) &&
       (uVar6 = FUN_015fe854(lVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_1__,0),
       plVar9 = (long *)puVar2, (uVar6 & 1) == 0)) {
      uVar7 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    }
    else {
      lVar5 = *plVar9;
      uVar7 = FUN_0203fee0(lVar4,lVar5);
      lVar4 = lVar5;
    }
    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    *(undefined8 *)(lVar5 + 8) = uVar7;
    *(long *)(lVar5 + 0x10) = lVar4;
    return;
  }
  return;
}


