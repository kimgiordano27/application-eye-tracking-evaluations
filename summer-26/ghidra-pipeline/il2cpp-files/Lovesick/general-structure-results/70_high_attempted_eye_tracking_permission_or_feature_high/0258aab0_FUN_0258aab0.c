/*
FUNCTION_NAME: FUN_0258aab0
ENTRY_POINT: 0258aab0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_20;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_0258aab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03782f04 & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_WitAi_WitService_ProcessForwardedWebSocketResponse__);
    thunk_FUN_00d48444(StringLiteral_10301);
    thunk_FUN_00d48444(System_Xml_Schema_QNameFacetsChecker_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<OVREyeGaze>__);
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JsonPath_FieldFilter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7024);
    thunk_FUN_00d48444(StringLiteral_13548);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass72_0_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_OVRNativeList<OVRLocatable>_Dispose__);
    thunk_FUN_00d48444(Oculus_Platform_Models_SdkAccount_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<JsonConverter>_TypeInfo);
    DAT_03782f04 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_02681b9c(uVar8,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0258af78;
    lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x78);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRNativeList<OVRLocatable>_Dispose__);
    if ((lVar7 == 0) ||
       (FUN_013df2bc(lVar7,param_1,*(undefined8 *)StringLiteral_10301,0), lVar9 == 0))
    goto LAB_0258af78;
    FUN_013df7e0(lVar9,lVar7,
                 *(undefined8 *)
                  UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_TypeInfo);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0258af78;
    lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x80);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)Oculus_Platform_Models_SdkAccount_TypeInfo);
    if ((lVar7 == 0) ||
       (FUN_013df2bc(lVar7,param_1,*(undefined8 *)System_Xml_Schema_QNameFacetsChecker_TypeInfo,0),
       lVar9 == 0)) goto LAB_0258af78;
    FUN_013df7e0(lVar9,lVar7,*(undefined8 *)System_Collections_Generic_List<JsonConverter>_TypeInfo)
    ;
  }
  puVar1 = StringLiteral_13548;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)StringLiteral_13548 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = StringLiteral_7024;
  puVar4 = Method_Meta_WitAi_WitService_ProcessForwardedWebSocketResponse__;
  puVar3 = Method_UnityEngine_Component_GetComponent<OVREyeGaze>__;
  puVar2 = DG_Tweening_ShortcutExtensions_<>c__DisplayClass72_0_TypeInfo;
  lVar7 = FUN_0258aa2c(uVar8);
  if (lVar7 != 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)Newtonsoft_Json_Linq_JsonPath_FieldFilter_TypeInfo,0);
    Unity_Mathematics_math__hash(lVar7,lVar9,0);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar3,0);
    Unity_Mathematics_math__hash(lVar7,lVar9,0);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar4,0);
    FUN_021164ec(lVar7,lVar9,0);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar5,0);
    FUN_021164ec(lVar7,lVar9,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_0258aa2c(uVar8);
  if (lVar7 != 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar4,0);
    Unity_Mathematics_math__hash(lVar7,lVar9,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_0258aa2c(uVar8);
  if (lVar7 != 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar3,0);
    Unity_Mathematics_math__int4(lVar7,lVar9,0);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar5,0);
    FUN_021164ec(lVar7,lVar9,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_0258aa2c(uVar8);
  if (lVar7 != 0) {
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar3,0);
    Unity_Mathematics_math__int4(lVar7,lVar9,0);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 == 0) goto LAB_0258af78;
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar5,0);
    FUN_021164ec(lVar7,lVar9,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar7 = FUN_0258aa2c(uVar8);
  if (lVar7 == 0) {
    return;
  }
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar9 != 0) {
    FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar3,0);
    Unity_Mathematics_math__int4(lVar7,lVar9,0);
    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar9 != 0) {
      FUN_011c181c(lVar9,param_1,*(undefined8 *)puVar5,0);
      FUN_021164ec(lVar7,lVar9,0);
      return;
    }
  }
LAB_0258af78:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


