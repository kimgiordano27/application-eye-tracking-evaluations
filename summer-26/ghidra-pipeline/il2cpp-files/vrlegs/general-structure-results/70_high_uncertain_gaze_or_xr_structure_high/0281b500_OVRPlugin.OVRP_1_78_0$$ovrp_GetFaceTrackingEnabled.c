/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 0281b500
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8
OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_03cfdb48;
  if ((DAT_0412539e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfdb48);
    DAT_0412539e = 1;
  }
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar2 = FUN_0281b75c(param_1,param_2,param_3,&stack0x00000008);
  if (iVar2 == 0) {
    return in_stack_00000008;
  }
  if (iVar2 == 3) {
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar3 = FUN_0271c480(0);
    FUN_018748a8(param_1);
    uVar4 = thunk_FUN_01a5dd74(param_1,0);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfe660);
    uVar4 = FUN_0282f9d0(uVar5,uVar3,uVar4,param_3,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
    uVar3 = thunk_FUN_01a89e68();
    FUN_0276a4a8(uVar3,uVar4,0);
  }
  else if (iVar2 == 2) {
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar3 = FUN_0271c480(0);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfe668);
    uVar4 = FUN_0282f8b0(uVar4,uVar3,param_3,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar3 = thunk_FUN_01a89e68();
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cf9fe8);
    FUN_026a7658(uVar3,uVar4,uVar5,0);
  }
  else {
    if (iVar2 != 1) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar3 = thunk_FUN_01a89e68();
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfe678);
      FUN_0276a4a8(uVar3,uVar4,0);
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfe670);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,uVar4);
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar3 = FUN_0271c480(0);
    FUN_018748a8(param_1);
    uVar4 = thunk_FUN_01a5dd74(param_1,0);
    uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfe658);
    uVar4 = FUN_0282f9d0(uVar5,uVar3,uVar4,param_3,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar3 = thunk_FUN_01a89e68();
    FUN_027a794c(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cfe670);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar3,uVar4);
}


