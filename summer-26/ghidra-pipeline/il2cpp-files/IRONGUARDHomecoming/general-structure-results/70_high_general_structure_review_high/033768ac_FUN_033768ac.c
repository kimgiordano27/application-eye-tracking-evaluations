/*
FUNCTION_NAME: FUN_033768ac
ENTRY_POINT: 033768ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void FUN_033768ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = Method_System_Net_FtpWebRequest_set_Method__;
  puVar3 = Method_System_Net_FtpWebRequest_set_Credentials__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_0483212b & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_set_Timeout__);
    thunk_FUN_01efb3a4(Method_System_GC_ReRegisterForFinalize__);
    thunk_FUN_01efb3a4(Method_System_GC_SuppressFinalize__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_set_Method__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_set_Credentials__);
    DAT_0483212b = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)puVar3;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  uVar6 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar4 = Method_System_GC_SuppressFinalize__;
  puVar3 = Method_System_GC_ReRegisterForFinalize__;
  puVar1 = Method_System_Net_FtpWebRequest_set_Timeout__;
  uVar6 = FUN_03579868(uVar6,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar6 = FUN_0359e654(uVar6,0);
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  uVar6 = thunk_FUN_01f116d0(uVar6,*(undefined8 *)puVar4);
  FUN_030bc950(uVar5,uVar6,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48),uVar5);
  thunk_FUN_0406f928(param_1,0);
  return;
}


