/*
FUNCTION_NAME: FUN_036c8b30
ENTRY_POINT: 036c8b30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


undefined1  [16] FUN_036c8b30(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  if ((DAT_048341db & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_SceneManagerHelper_<>c__DisplayClass11_0_<RequestSceneCapture>b__0__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_1__);
    DAT_048341db = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_1__;
  plVar3 = *(long **)(param_1 + 0x40);
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_SceneManagerHelper_<>c__DisplayClass11_0_<RequestSceneCapture>b__0__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_SceneManagerHelper_<>c__DisplayClass11_0_<RequestSceneCapture>b__0__)) {
      FUN_036c66bc(plVar3,param_2);
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_8_ = extraout_var_00;
      return auVar4;
    }
  }
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403f2cc(*(undefined8 *)puVar2,0);
  return ZEXT816(0xbf800000);
}


