/*
FUNCTION_NAME: OVR.OpenVR.CVRApplications$$GetApplicationsTransitionStateNameFromEnum
ENTRY_POINT: 0371acd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_12;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVR_OpenVR_CVRApplications__GetApplicationsTransitionStateNameFromEnum(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x370));
  thunk_FUN_01efb3a4(
                    Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                    );
  thunk_FUN_01efb3a4(
                    Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass15_0_<RequestDownload>b__0__
                    );
  *(undefined1 *)(unaff_x21 + 0x151) = 1;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  uVar3 = FUN_04073094(uVar5,0,0);
  puVar2 = Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass15_0_<RequestDownload>b__0__;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)puVar2,0);
    return;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar5 = FUN_040766fc(*(long *)(unaff_x19 + 0x20),0);
    uVar5 = FUN_03405678(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,uVar5,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar4);
    }
    FUN_0403ea2c(uVar5,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_04035c94(*(undefined4 *)(unaff_x19 + 0x28),*(long *)(unaff_x19 + 0x20),0);
      puVar1 = 
      Method_Meta_WitAi_Json_WitResponseNode_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
      ;
      lVar4 = *(long *)
               Method_Meta_WitAi_Json_WitResponseNode_<get_Childs>d__17_System_Collections_IEnumerator_Reset__
      ;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar1;
      }
      *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8) = *(undefined8 *)(unaff_x19 + 0x20);
      thunk_FUN_01f51358();
      *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = *(undefined4 *)(unaff_x19 + 0x28);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


