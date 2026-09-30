/*
FUNCTION_NAME: FUN_034e4330
ENTRY_POINT: 034e4330
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


undefined8 FUN_034e4330(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_04832dd2 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_04832dd2 = 1;
  }
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)
             Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
    ;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    iVar2 = FUN_03413064(param_1,**(undefined8 **)(lVar3 + 0xb8),0);
    if (iVar2 != -1) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<ushort>__
                                );
      FUN_034f6754(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeStack_GetComponent<MotionBlur>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar5);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar2 = FUN_034e382c(param_1);
    if (-1 < iVar2) {
      if (iVar2 < *(int *)(param_1 + 0x10) + -1) {
        uVar4 = FUN_0341265c(param_1,iVar2,0);
        return uVar4;
      }
    }
    uVar4 = **(undefined8 **)
              (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  }
  return uVar4;
}


