/*
FUNCTION_NAME: thunk_FUN_034d3474
ENTRY_POINT: 034d5580
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void thunk_FUN_034d3474(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_04832d5f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_DG_Tweening_TweenSettingsExtensions_SetAutoKill<Tween>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AsRef<FixedList128Bytes<byte>>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AsRef<FixedList32Bytes<byte>>__
                      );
    DAT_04832d5f = 1;
  }
  FUN_035aedf8(param_1,0);
  puVar3 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AsRef<FixedList128Bytes<byte>>__;
  puVar2 = Method_DG_Tweening_TweenSettingsExtensions_SetAutoKill<Tween>__;
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (param_2 != 0) {
    uVar4 = FUN_0348b9c8(param_2,*(undefined8 *)
                                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AsRef<FixedList32Bytes<byte>>__
                         ,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar4 = FUN_034d6cc4(uVar4);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
    thunk_FUN_01f51358();
    uVar4 = FUN_0348b9c8(param_2,*(undefined8 *)puVar3,0);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    thunk_FUN_01f51358();
    uVar4 = FUN_0348b9c8(param_2,*(undefined8 *)puVar2,0);
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0xa0),uVar4);
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar4 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(Method_System_Text_DecoderFallbackBuffer_InternalFallback__);
  FUN_034efd20(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AsRef<FixedList4096Bytes<byte>>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


