/*
FUNCTION_NAME: FUN_0345f3ec
ENTRY_POINT: 0345f3ec
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


void FUN_0345f3ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_04832944 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_RuntimePanel_Create__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    DAT_04832944 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_RuntimePanel_Create__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationNodeDataReader_ReadUInt32__
                              );
    FUN_034efd20(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationNodeDataReader_get_Stream__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar4);
  }
  FUN_01bc4c70(*(undefined8 *)Method_System_RuntimeType_InvokeMember__);
  FUN_01e2f304(param_1,*(undefined8 *)puVar1);
  plVar5 = (long *)FUN_0345e11c();
  puVar2 = Method_Sirenix_Serialization_SerializationNodeDataReader_set_Nodes__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04832945 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationNodeDataReader_set_Nodes__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832945 = 1;
  }
  uVar3 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_03579868(uVar3,0);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0345f528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x1e8))(plVar5,uVar3,0,*(undefined8 *)(*plVar5 + 0x1f0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


