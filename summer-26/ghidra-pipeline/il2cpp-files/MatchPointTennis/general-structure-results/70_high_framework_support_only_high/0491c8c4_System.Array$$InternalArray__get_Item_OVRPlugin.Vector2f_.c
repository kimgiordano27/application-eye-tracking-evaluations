/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector2f>
ENTRY_POINT: 0491c8c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__get_Item<OVRPlugin_Vector2f>
               (long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  void *unaff_x22;
  undefined8 in_stack_00000058;
  
  if (param_1 == 0) {
    FUN_04447ba8(PTR_DAT_09f1e5a0);
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      FUN_04482014();
    }
  }
  in_stack_00000058 = 0;
  uVar1 = FUN_07abdcec(0);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    uVar3 = FUN_066f39d4(param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
  }
  uVar3 = FUN_0795bd40(param_2,uVar3,&stack0x00000058,0);
  if (*param_2 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    uVar4 = FUN_066f39d4(param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
    memcpy(&stack0x00000000,unaff_x22,0x50);
    uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
    FUN_0795c108(param_2,uVar5,in_stack_00000058,uVar4,0);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e5a0 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_0795cb30(param_3,uVar3,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20));
  return;
}


