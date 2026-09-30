/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 05758ff4
PROGRAM: Untangled-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(long param_1,undefined8 param_2,long param_3)

{
  bool in_CY;
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_x9;
  long *unaff_x19;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  
  if ((!in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  iVar1 = (**(code **)(*unaff_x19 + 0x238))();
  if (iVar1 == 4) {
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((plVar2 != (long *)0x0) && (*plVar2 != *(long *)PTR_DAT_06d02350)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar2);
    }
    FUN_05b5b04c();
    FUN_05698e6c();
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar1 == 0xb) {
      return;
    }
  }
  iVar1 = (**(code **)(*unaff_x19 + 0x238))();
  if (iVar1 == 2) {
    while( true ) {
      FUN_05698e6c();
      iVar1 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar1 == 0xe) break;
      FUN_057591a0();
    }
    return;
  }
  thunk_FUN_02f239f0(PTR_DAT_06d06338);
  FUN_02a55ad4();
  uVar3 = FUN_055b5920(0);
  FUN_02a551a0();
  uStack000000000000000c = (**(code **)(*unaff_x19 + 0x238))();
  uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
  uVar4 = thunk_FUN_02ef1438(uVar4,&stack0x0000000c);
  uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d59718);
  FUN_056f1630(uVar5,uVar3,uVar4,0);
  uVar3 = FUN_05692378();
  uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d59720);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar3,uVar4);
}


