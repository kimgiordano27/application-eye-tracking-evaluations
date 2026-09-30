/*
FUNCTION_NAME: FUN_034ead18
ENTRY_POINT: 034ead18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


undefined8 FUN_034ead18(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = Method_System_Threading_ExecutionContext_Run__;
  if ((DAT_04832e14 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_Run__);
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    DAT_04832e14 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = FUN_033f1168(param_1,0);
  puVar1 = Method_System_Net_WebConnectionStream_set_WriteTimeout__;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = System_Threading_OSSpecificSynchronizationContext__Post(param_1,lVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  lVar3 = FUN_034eaba8();
  if (lVar2 != 0) {
    uVar4 = FUN_0340e6c4(lVar2,lVar3,4,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (lVar3 != 0) {
      uVar5 = FUN_0341265c(lVar2,*(undefined4 *)(lVar3 + 0x10),0);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


