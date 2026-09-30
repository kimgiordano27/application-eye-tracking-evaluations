/*
FUNCTION_NAME: FUN_03a5ad08
ENTRY_POINT: 03a5ad08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03a5ad08(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined2 local_34 [2];
  
  puVar1 = StringLiteral_7567;
  if ((DAT_04838d22 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7567);
    thunk_FUN_01efb3a4(StringLiteral_7561);
    DAT_04838d22 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(StringLiteral_7616);
    FUN_034efd20(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01efb3a4(StringLiteral_7617);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar4);
  }
  iVar2 = FUN_03412f70(param_2,0x3a,0);
  puVar1 = StringLiteral_7561;
  if (iVar2 < 0) {
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_7618);
    uVar3 = FUN_033f1b08(uVar3,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(StringLiteral_7616);
    FUN_034efd98(uVar4,uVar3,uVar7,0);
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_7617);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  uVar3 = FUN_03410500(param_2,0,iVar2,0);
  uVar4 = FUN_0341265c(param_2,iVar2 + 1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  uVar3 = FUN_03a5a5c4(uVar3,0);
  FUN_03a5a9e4(param_1,uVar3);
  lVar5 = FUN_03a5a5c4(uVar4,1);
  if (((lVar5 != 0) && (*(short *)(param_1 + 0x80) == 6)) && (0xffff < *(int *)(lVar5 + 0x10))) {
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar3 = FUN_01f08890(uVar3,1);
    local_34[0] = 0xffff;
    uVar4 = thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    uVar4 = thunk_FUN_01f113fc(uVar4,local_34);
    FUN_01bc50c0(uVar3);
    FUN_01bc56ec(uVar3,uVar4);
    FUN_01bc5408(uVar3,0,uVar4);
    uVar4 = thunk_FUN_01efb3a4(StringLiteral_7614);
    uVar3 = FUN_033f1a90(uVar4,uVar3,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                              );
    FUN_034f48f0(uVar4,uVar7,lVar5,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(StringLiteral_7617);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
  FUN_03a5a124(param_1);
  FUN_03aae378(param_1,0);
  plVar6 = (long *)FUN_03a5a23c(param_1);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03a5ae5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x228))(plVar6,uVar3,lVar5,*(undefined8 *)(*plVar6 + 0x230));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


