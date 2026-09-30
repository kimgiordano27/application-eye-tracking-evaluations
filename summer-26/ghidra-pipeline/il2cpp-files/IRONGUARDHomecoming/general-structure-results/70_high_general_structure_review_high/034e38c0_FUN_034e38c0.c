/*
FUNCTION_NAME: FUN_034e38c0
ENTRY_POINT: 034e38c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


undefined8 FUN_034e38c0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_04832ddc & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_04832ddc = 1;
  }
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  lVar4 = *(long *)
           Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar2;
  }
  iVar3 = FUN_03413064(param_1,**(undefined8 **)(lVar4 + 0xb8),0);
  if (iVar3 == -1) {
    if (DAT_04832728 == '\0') {
      thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
      DAT_04832728 = '\x01';
    }
    uVar5 = FUN_0340ce04(param_1,0);
    lVar4 = *(long *)puVar2;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar4);
    }
    uVar5 = FUN_034e49c8(uVar5,uVar1);
    return uVar5;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar5 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<ushort>__
                            );
  FUN_034f6754(uVar5,uVar6,0);
  uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeStack_GetComponent<FilmGrain>__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
}


