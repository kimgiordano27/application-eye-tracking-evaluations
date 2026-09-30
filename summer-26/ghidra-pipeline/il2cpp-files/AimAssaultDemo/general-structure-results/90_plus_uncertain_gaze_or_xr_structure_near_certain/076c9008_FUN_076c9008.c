/*
FUNCTION_NAME: FUN_076c9008
ENTRY_POINT: 076c9008
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_076c9008(ulong param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
    FUN_0373b518(PTR_DAT_07dbeea8);
    FUN_0373b518(Method_UnityEngine_Awaitable_Awaiter<Result<XRAnchor>>_get_IsCompleted__);
    FUN_0373b518(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__);
    FUN_0373b518(PTR_DAT_07d86398);
    *(undefined1 *)(unaff_x22 + 0x41d) = 1;
  }
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_075ac5e0(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (param_3 != (long *)0x0) {
    uVar3 = (**(code **)(*param_3 + 0x2b8))(param_3,*(undefined8 *)(*param_3 + 0x2c0));
    puVar1 = PTR_DAT_07dbeea8;
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_07dbeea8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar4 = FUN_076c8f3c();
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
      uVar3 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                        (*(long *)(lVar4 + 0x18),param_2,&stack0x00000008,
                         *(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if ((in_stack_00000008 != 0) &&
         (FUN_046339b4(in_stack_00000008,param_3,
                       *(undefined8 *)
                        Method_UnityEngine_Awaitable_Awaiter<Result<XRAnchor>>_get_IsCompleted__),
         in_stack_00000008 != 0)) {
        iVar2 = FUN_04633bb0(in_stack_00000008,
                             *(undefined8 *)
                              Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__
                            );
        if (iVar2 != 0) {
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar4 = FUN_076c8f3c();
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
          FUN_05b10be4(*(long *)(lVar4 + 0x18),param_2,
                       *(undefined8 *)
                        Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                      );
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


