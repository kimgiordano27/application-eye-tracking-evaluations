/*
FUNCTION_NAME: FUN_0371ae04
ENTRY_POINT: 0371ae04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_12;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0371ae04(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_04836152 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Json_WitResponseNode_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass15_0_<RequestDownload>b__0__
                      );
    DAT_04836152 = 1;
  }
  lVar5 = *param_2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  uVar3 = FUN_04073094(lVar5,0,0);
  puVar2 = Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass15_0_<RequestDownload>b__0__;
  if ((uVar3 & 1) != 0) {
    if (*param_2 != 0) {
      uVar4 = FUN_040766fc(*param_2,0);
      uVar4 = FUN_03405678(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,uVar4,0);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar5);
      }
      FUN_0403ea2c(uVar4,0);
      if (*param_2 != 0) {
        FUN_04035c94((int)param_2[1],*param_2,0);
        puVar1 = 
        Method_Meta_WitAi_Json_WitResponseNode_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
        ;
        lVar5 = *(long *)
                 Method_Meta_WitAi_Json_WitResponseNode_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
        ;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar1;
        }
        *(long *)(*(long *)(lVar5 + 0xb8) + 8) = *param_2;
        thunk_FUN_01f51358();
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = (int)param_2[1];
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0403ea2c(*(undefined8 *)puVar2,0);
  return;
}


