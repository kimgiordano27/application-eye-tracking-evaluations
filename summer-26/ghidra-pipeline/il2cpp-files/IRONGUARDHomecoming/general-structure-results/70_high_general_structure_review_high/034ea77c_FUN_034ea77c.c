/*
FUNCTION_NAME: FUN_034ea77c
ENTRY_POINT: 034ea77c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_034ea77c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = Method_System_Net_WebConnectionStream_set_WriteTimeout__;
  if ((DAT_04832e11 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    thunk_FUN_01efb3a4(Method_System_Net_WebProxy_IsBypassed__);
    thunk_FUN_01efb3a4(Method_System_Net_Configuration_WebProxyScriptElement__ctor__);
    DAT_04832e11 = 1;
  }
  *param_1 = 0;
  thunk_FUN_01f51358(param_1,0);
  *param_2 = 0;
  thunk_FUN_01f51358(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = FUN_034ea958();
  if (lVar3 == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_034ea9f0(*(undefined8 *)Method_System_Net_WebProxy_IsBypassed__,param_1,param_2);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_034eaba8();
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                        );
    }
    lVar3 = System_Threading_OSSpecificSynchronizationContext__Post
                      (uVar4,*(undefined8 *)
                              Method_System_Net_Configuration_WebProxyScriptElement__ctor__,0);
  }
  else {
    if (*(int *)(lVar3 + 0x10) == 0) {
      return 0;
    }
    sVar2 = FUN_03409f80(lVar3,0,0);
    if (sVar2 != 0x2f) {
      *param_2 = lVar3;
      thunk_FUN_01f51358(param_2,lVar3);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_034eaba8();
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                          );
      }
      lVar3 = System_Threading_OSSpecificSynchronizationContext__Post(uVar4,lVar3,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
  }
  uVar4 = FUN_034ea9f0(lVar3,param_1,param_2);
  return uVar4;
}


