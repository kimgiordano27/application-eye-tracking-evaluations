/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 01d8fb34
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


long * OVRPlugin__StartEyeTracking(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  long *unaff_x27;
  long *unaff_x29;
  ulong in_stack_00000000;
  
  while( true ) {
    param_2 = (long *)(**(code **)(param_1 + 0x7f8))(param_2,*(undefined8 *)(param_1 + 0x800));
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar2 = FUN_01d611c4(param_2,0,0);
    if ((uVar2 & 1) == 0) break;
    lVar7 = *unaff_x27;
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      FUN_0103c2a0(lVar7);
      lVar6 = *(long *)(lVar7 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    if (param_2 == (long *)0x0) {
LAB_01d8fb90:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    plVar3 = (long *)FUN_01d6295c(param_2);
    uVar2 = FUN_01cc8674(plVar3,0,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = (**(code **)(*unaff_x22 + 0x3b8))();
      if (plVar3 == (long *)0x0) goto LAB_01d8fb90;
      uVar5 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
      uVar2 = FUN_01d8ed9c(uVar4,uVar5);
      if ((uVar2 & 1) != 0) goto LAB_01d8fb4c;
    }
    param_1 = *param_2;
  }
  plVar3 = (long *)0x0;
LAB_01d8fb4c:
  uVar2 = FUN_01cc86b0(plVar3,0,0);
  if (((uVar2 & 1) != 0) && ((in_stack_00000000 & 0x100000000) != 0)) {
    uVar4 = thunk_FUN_010303a8(PTR_DAT_02359808);
    thunk_FUN_010303a8(PTR_DAT_02359810);
    uVar4 = FUN_01c513d4(uVar4);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar5 = thunk_FUN_010400dc();
    FUN_01c65ad0(uVar5,uVar4,0);
    uVar4 = thunk_FUN_010303a8(PTR_DAT_02359800);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar5,uVar4);
  }
  plVar1 = (long *)0x0;
  if ((uVar2 & 1) == 0) {
    plVar1 = plVar3;
  }
  return plVar1;
}


