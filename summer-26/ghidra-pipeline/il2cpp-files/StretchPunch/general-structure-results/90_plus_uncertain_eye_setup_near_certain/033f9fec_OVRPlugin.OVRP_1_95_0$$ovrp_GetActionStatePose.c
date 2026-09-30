/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStatePose
ENTRY_POINT: 033f9fec
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_GetActionStatePose
               (undefined8 param_1,uint param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iStack000000000000000c;
  
  puVar5 = StringLiteral_9476;
  if ((DAT_044a6be5 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9477);
    FUN_01d7d918(StringLiteral_9476);
    DAT_044a6be5 = 1;
  }
  iStack000000000000000c = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_034003bc(param_1,0);
  if ((param_4 != 0) && (0x104 < *(int *)(param_4 + 0x10))) {
    uVar1 = thunk_FUN_01dd295c(StringLiteral_887);
    uVar1 = FUN_01d7d9bc(uVar1,1);
    FUN_01a94b18();
    FUN_01a952f4(uVar1,param_4);
    FUN_01a95328(uVar1,0,param_4);
    puVar5 = StringLiteral_9480;
LAB_033fa23c:
    uVar4 = thunk_FUN_01dd295c(puVar5);
    uVar4 = FUN_033d6e50(uVar4,uVar1,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar1 = thunk_FUN_01de27b8();
    FUN_0328dba4(uVar1,uVar4,0);
LAB_033fa270:
    uVar4 = thunk_FUN_01dd295c(StringLiteral_9481);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar1,uVar4);
  }
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 1) {
      uVar1 = thunk_FUN_01dd295c(StringLiteral_887);
      uVar1 = FUN_01d7d9bc(uVar1,1);
      FUN_01a94b18();
      FUN_01a952f4(uVar1,param_4);
      FUN_01a95328(uVar1,0,param_4);
      puVar5 = StringLiteral_6924;
      goto LAB_033fa23c;
    }
    uVar1 = 1;
  }
  uVar1 = FUN_03401924(uVar1,param_2 & 1,param_4,&stack0x0000000c,0);
  plVar2 = (long *)thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_9477);
  FUN_0327742c(plVar2,uVar1,1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
  if ((uVar3 & 1) != 0) {
    FUN_032fa0b0(plVar2,0);
    if (((param_4 != 0) && (*(int *)(param_4 + 0x10) != 0)) && (iStack000000000000000c == 6)) {
      uVar1 = thunk_FUN_01dd295c(StringLiteral_887);
      uVar1 = FUN_01d7d9bc(uVar1,1);
      FUN_01a94b18();
      FUN_01a952f4(uVar1,param_4);
      FUN_01a95328(uVar1,0,param_4);
      uVar4 = thunk_FUN_01dd295c(StringLiteral_9478);
      uVar4 = FUN_033d6e50(uVar4,uVar1,0);
      thunk_FUN_01dd295c(StringLiteral_9479);
      uVar1 = thunk_FUN_01de27b8();
      FUN_033f3590(uVar1,uVar4);
      goto LAB_033fa270;
    }
    FUN_0332a064(iStack000000000000000c,param_4,0);
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_03400608(param_1,plVar2,0);
  return;
}


