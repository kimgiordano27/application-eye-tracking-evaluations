/*
FUNCTION_NAME: Animancer.WeightedMaskLayers$$OnValidate
ENTRY_POINT: 0221c478
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0221c34c) */
/* WARNING: Removing unreachable block (ram,0x0221c598) */

void Animancer_WeightedMaskLayers__OnValidate(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  int unaff_w24;
  undefined8 in_stack_00000000;
  
  if (unaff_w24 != 1) {
    if (in_stack_00000000._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0();
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar5 = *plVar4;
  __cxa_end_catch();
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar5);
  }
  uVar1 = FUN_029e5e84();
  lVar5 = *(long *)(unaff_x20 + 0x78);
  uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cdbdb8);
  if (lVar5 == 0) {
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbfd80);
  }
  else {
    if ((*(long *)(unaff_x20 + 0x78) == 0) ||
       (plVar4 = (long *)thunk_FUN_01a5dd74(*(long *)(unaff_x20 + 0x78),0), plVar4 == (long *)0x0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  uVar1 = FUN_025bdc88(uVar1,uVar2,uVar3,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
  uVar2 = thunk_FUN_01a89e68();
  FUN_027a794c(uVar2,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar2);
}


