/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JValue$$System.IConvertible.ToDateTime
ENTRY_POINT: 017c2ba8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Linq_JValue__System_IConvertible_ToDateTime(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  long local_38;
  
  if ((DAT_03779071 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(System_Nullable<DateTime>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3580);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Utils_InstanceCache_RegisterClassTypes__);
    DAT_03779071 = 1;
  }
  puVar4 = StringLiteral_3580;
  puVar3 = Method_Meta_XR_ImmersiveDebugger_Utils_InstanceCache_RegisterClassTypes__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar1 = System_Nullable<DateTime>_TypeInfo;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(
                              DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                              );
    FUN_016ec5b8(uVar6,uVar5,0);
  }
  else {
    local_38 = *param_1;
    if (local_38 !=
        **(long **)(*(long *)
                     Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                   + 0xb8)) {
      uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)System_Nullable<DateTime>_TypeInfo,&local_38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      local_40 = Newtonsoft_Json_Serialization_KebabCaseNamingStrategy___ctor(uVar5,0);
      uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_40);
      uVar6 = FUN_01780344(*(undefined8 *)puVar4,0);
      FUN_01682ab8(param_2,*(undefined8 *)puVar3,uVar5,uVar6,0);
      return;
    }
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                      );
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(StringLiteral_2401);
    FUN_01679968(uVar6,uVar5,0);
  }
  uVar5 = thunk_FUN_00d48444(Unity_Mathematics_half3_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar5);
}


