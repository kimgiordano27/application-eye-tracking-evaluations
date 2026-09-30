/*
FUNCTION_NAME: FUN_060122c4
ENTRY_POINT: 060122c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_060122c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
  ;
  if ((DAT_06dc4a75 & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
                );
    FUN_02d965b8(PTR_DAT_069fe8c8);
    DAT_06dc4a75 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_06011a1c(param_1);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  uVar4 = FUN_055006dc(uVar3,0,0);
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
  ;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_069fe8c8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_0556fbfc(param_2,uVar3,0);
    uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_060119d8(uVar6,uVar5,uVar3);
    return uVar6;
  }
  thunk_FUN_02dfd288(
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
                    );
  FUN_0297e1b4();
  lVar7 = thunk_FUN_02dfd288(puVar2);
  uVar5 = **(undefined8 **)(lVar7 + 0xb8);
  FUN_02979e58(uVar5);
  uVar3 = thunk_FUN_02dfd288(
                            Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_0000091B_PostfixBurstDelegate>__
                            );
  uVar3 = thunk_FUN_04e932b8(uVar5,uVar3);
  uVar5 = thunk_FUN_02dfd288(UnityEngine_UIElements_EventBase<PointerDownEvent>_TypeInfo);
  uVar3 = thunk_FUN_03615f24(uVar3,uVar5);
  uVar5 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
  uVar3 = FUN_0536e598(uVar5,uVar3,0);
  uVar5 = thunk_FUN_02dfd288(
                            Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_FastComputeNewTrackedPose_0000091C_PostfixBurstDelegate>__
                            );
  uVar6 = thunk_FUN_02dfd288(
                            Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRSocketGrabTransformer_IsWithinRadius_0000091D_PostfixBurstDelegate>__
                            );
  uVar3 = FUN_0536dcdc(uVar5,param_1,uVar6,uVar3,0);
  thunk_FUN_02dfd288(
                    Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_TypeInfo
                    );
  uVar5 = thunk_FUN_02dd3144();
  FUN_05cd0d78(uVar5,uVar3,0);
  uVar3 = thunk_FUN_02dfd288(Method_CodeMonkey_Utils_Button_Sprite_<SetupHoverBehaviour>b__44_0__);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,uVar3);
}


