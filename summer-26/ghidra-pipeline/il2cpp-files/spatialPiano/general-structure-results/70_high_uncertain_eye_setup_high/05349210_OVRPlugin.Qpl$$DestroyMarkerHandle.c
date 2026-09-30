/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 05349210
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__DestroyMarkerHandle(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = UnityEngine_XR_Eyes_TypeInfo;
  if ((DAT_06bbb51d & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo);
    FUN_02f08768(Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Eyes_TypeInfo);
    DAT_06bbb51d = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar3 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
    FUN_05054f60(lVar5,uVar6,*(undefined8 *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo
                 ,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar5;
  }
  puVar2 = Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo;
  if (param_1 != 0) {
    iVar1 = *(int *)(*(long *)Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo + 0xe4);
    *(long *)(param_1 + 0x70) = lVar5;
    if (iVar1 == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0472d618(param_1,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


