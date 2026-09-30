/*
FUNCTION_NAME: FUN_03a5afd8
ENTRY_POINT: 03a5afd8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03a5afd8(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_34 [2];
  
  puVar1 = StringLiteral_7567;
  if ((DAT_04838d23 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7567);
    thunk_FUN_01efb3a4(StringLiteral_7561);
    DAT_04838d23 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    if (*(int *)(*(long *)StringLiteral_7561 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_03a5a5c4(param_2,0);
    FUN_03a5a9e4(param_1,uVar2);
    lVar3 = FUN_03a5a5c4(param_3,1);
    if (((lVar3 != 0) && (*(short *)(param_1 + 0x80) == 6)) && (0xffff < *(int *)(lVar3 + 0x10))) {
      uVar2 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                );
      uVar2 = FUN_01f08890(uVar2,1);
      local_34[0] = 0xffff;
      uVar5 = thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
      uVar5 = thunk_FUN_01f113fc(uVar5,local_34);
      FUN_01bc50c0(uVar2);
      FUN_01bc56ec(uVar2,uVar5);
      FUN_01bc5408(uVar2,0,uVar5);
      uVar5 = thunk_FUN_01efb3a4(StringLiteral_7614);
      uVar2 = FUN_033f1a90(uVar5,uVar2,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                                );
      FUN_034f48f0(uVar5,uVar6,lVar3,uVar2,0);
      uVar2 = thunk_FUN_01efb3a4(StringLiteral_7619);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar2);
    }
    FUN_03a5a124(param_1);
    FUN_03aae378(param_1,0);
    plVar4 = (long *)FUN_03a5a23c(param_1);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03a5b0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 600))(plVar4,uVar2,lVar3,*(undefined8 *)(*plVar4 + 0x260));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
  uVar2 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__);
  FUN_034efd20(uVar2,uVar5,0);
  uVar5 = thunk_FUN_01efb3a4(StringLiteral_7619);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar5);
}


