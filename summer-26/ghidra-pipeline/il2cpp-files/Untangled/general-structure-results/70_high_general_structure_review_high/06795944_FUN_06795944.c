/*
FUNCTION_NAME: FUN_06795944
ENTRY_POINT: 06795944
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06795944(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  
  puVar1 = System_Linq_Expressions_UnaryExpression_TypeInfo;
  if ((DAT_071d60cc & 1) == 0) {
    FUN_02f07e70(System_Xml_Ucs4Encoding3412_TypeInfo);
    FUN_02f07e70(PlayFab_GroupsModels_UnblockEntityRequest_TypeInfo);
    FUN_02f07e70(ES3Internal_UnbufferedCryptoStream_TypeInfo);
    FUN_02f07e70(System_IO_UnexceptionalStreamReader_TypeInfo);
    FUN_02f07e70(System_Linq_Expressions_UnaryExpression_TypeInfo);
    FUN_02f07e70(System_IO_UnexceptionalStreamWriter_TypeInfo);
    DAT_071d60cc = 1;
  }
  lVar3 = *(long *)puVar1;
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
              (**(long **)(lVar3 + 0xb8),param_1,&local_28,
               *(undefined8 *)System_Xml_Ucs4Encoding3412_TypeInfo);
    puVar2 = ES3Internal_UnbufferedCryptoStream_TypeInfo;
    puVar1 = PlayFab_GroupsModels_UnblockEntityRequest_TypeInfo;
    if (local_28 != 0) {
      FUN_052421e8(&local_40,local_28,*(undefined8 *)System_IO_UnexceptionalStreamWriter_TypeInfo);
      while (uVar4 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                               (&local_40,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
        if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_0690c3e4(local_30,0);
      }
      FUN_04df65b0(&local_40,*(undefined8 *)puVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


