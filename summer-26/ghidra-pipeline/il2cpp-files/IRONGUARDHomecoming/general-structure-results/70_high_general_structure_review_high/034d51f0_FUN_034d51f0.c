/*
FUNCTION_NAME: FUN_034d51f0
ENTRY_POINT: 034d51f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


long FUN_034d51f0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_04832dd3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_04832dd3 = 1;
  }
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
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
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<uint>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar4,uVar5);
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    iVar2 = FUN_0341393c(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20),0);
    if (-1 < iVar2) {
      lVar3 = FUN_0341265c(param_1,iVar2 + 1,0);
      return lVar3;
    }
  }
  return param_1;
}


