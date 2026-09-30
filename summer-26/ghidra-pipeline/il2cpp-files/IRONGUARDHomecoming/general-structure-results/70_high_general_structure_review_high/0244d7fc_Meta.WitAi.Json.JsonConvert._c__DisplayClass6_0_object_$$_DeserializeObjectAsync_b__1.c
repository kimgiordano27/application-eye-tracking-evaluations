/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c__DisplayClass6_0<object>$$<DeserializeObjectAsync>b__1
ENTRY_POINT: 0244d7fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Meta_WitAi_Json_JsonConvert_<>c__DisplayClass6_0<object>__<DeserializeObjectAsync>b__1(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  int iStack000000000000000c;
  
  uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03579868(uVar5,0);
  if (*(int *)(*(long *)
                Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_Unity_Collections_NativeArray<DrawingData_ProcessedBuilderData_MeshBuffers>_Dispose__
                      );
  }
  iVar1 = thunk_FUN_01f40210(uVar5,0);
  lVar4 = *unaff_x21;
  iVar1 = iVar1 * *(int *)(unaff_x22 + 0x18);
  if (lVar4 == 0) {
    lVar4 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                         iVar1 + unaff_w20);
    *unaff_x21 = lVar4;
    thunk_FUN_01f51358();
  }
  else if (iVar1 < *(int *)(lVar4 + 0x18) + unaff_w20) {
    FUN_01bc50c0(lVar4);
    iStack000000000000000c = *(int *)(lVar4 + 0x18) + unaff_w20;
    uVar5 = FUN_035683d0(&stack0x0000000c,0);
    uVar2 = thunk_FUN_01efb3a4(Method_System_Security_Cryptography_CspParameters_set_Flags__);
    uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_Cubemap_Apply__);
    uVar5 = FUN_0340ebc0(uVar2,uVar5,uVar3,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar2,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2);
  }
  FUN_0396b570();
  return *unaff_x21;
}


