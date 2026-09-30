/*
FUNCTION_NAME: FUN_02767fb0
ENTRY_POINT: 02767fb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02767fb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = System_Xml_XmlUnspecifiedAttribute_TypeInfo;
  if ((DAT_03788579 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxq_u32__);
    thunk_FUN_00d48444(StringLiteral_1639);
    thunk_FUN_00d48444(System_Xml_XmlUnspecifiedAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SongItem_Metadata>_Find__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControl_GetChildControl<Vector3Control>__
                      );
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
    DAT_03788579 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar3 = StringLiteral_1639;
  puVar1 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__;
  if (lVar4 != 0) {
    FUN_027bc300(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar1;
    *(long *)(param_1 + 0x78) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxq_u32__;
    puVar1 = Method_System_Collections_Generic_List<SongItem_Metadata>_Find__;
    if (lVar4 != 0) {
      FUN_027bdeb4(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar1;
      FUN_00ae5e80(lVar4,1,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x80) = lVar4;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar1 = Method_UnityEngine_InputSystem_InputControl_GetChildControl<Vector3Control>__;
      if (lVar4 != 0) {
        FUN_027bdeb4(lVar4,0);
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar1;
        *(long *)(param_1 + 0x88) = lVar4;
        FUN_02760e40(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


