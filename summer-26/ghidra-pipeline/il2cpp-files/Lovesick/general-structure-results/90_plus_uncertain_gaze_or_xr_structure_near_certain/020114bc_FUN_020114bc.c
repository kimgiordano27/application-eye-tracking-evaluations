/*
FUNCTION_NAME: FUN_020114bc
ENTRY_POINT: 020114bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_020114bc(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_03780915 & 1) == 0) {
    thunk_FUN_00d48444(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileNewExpression__
                      );
    DAT_03780915 = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar4 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
    FUN_016ec5b8(uVar3,uVar4,0);
  }
  else {
    lVar6 = *param_2;
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo + 300);
    if ((((bVar1 <= *(byte *)(lVar6 + 300)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo)) &&
        (plVar2 = (long *)(**(code **)(lVar6 + 0x238))(param_2,*(undefined8 *)(lVar6 + 0x240)),
        plVar2 != (long *)0x0)) &&
       (*plVar2 ==
        *(long *)Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileNewExpression__)) {
      FUN_02011600(plVar2,param_2);
      return;
    }
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar4 = thunk_FUN_00d48444(StringLiteral_4155);
    uVar5 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
    FUN_016ec624(uVar3,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_00d48444(
                            Method_Oculus_Interaction_InteractableGroup_HandleInteractorViewRemoved__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar3,uVar4);
}


