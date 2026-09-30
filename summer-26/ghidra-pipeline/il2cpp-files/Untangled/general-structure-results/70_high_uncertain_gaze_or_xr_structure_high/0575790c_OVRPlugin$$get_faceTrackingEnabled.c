/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingEnabled
ENTRY_POINT: 0575790c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_faceTrackingEnabled(long param_1,undefined8 param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  do {
    *(int *)(unaff_x20 + 0x18) = in_w9;
    *(undefined1 *)(param_1 + 0x20) = param_3;
LAB_0575792c:
    do {
      uVar3 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar3 & 1) == 0) {
        thunk_FUN_02f239f0(PTR_DAT_06d553b8);
        goto LAB_057579f4;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x238))();
    } while (iVar2 == 5);
    if (iVar2 != 7) {
      if (iVar2 != 0xe) {
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar5 = FUN_055b5920(0);
        FUN_02a551a0();
        in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x238))();
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
        uVar6 = thunk_FUN_02ef1438(uVar6,(long)&stack0x00000008 + 4);
        uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d596a8);
        FUN_056f1630(uVar4,uVar5,uVar6,0);
LAB_057579f4:
        uVar5 = FUN_05692378();
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d596b0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar5,uVar6);
      }
      if (unaff_x20 != 0) {
        FUN_03f38c3c();
        return;
      }
LAB_05757980:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x248))();
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x24);
    }
    uVar6 = FUN_055b5920(0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x25);
    }
    param_3 = FUN_05569a94(uVar5,uVar6,0);
    if (unaff_x20 == 0) goto LAB_05757980;
    param_1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_05757980;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar1) {
      FUN_03f37214();
      goto LAB_0575792c;
    }
    in_w9 = uVar1 + 1;
    param_1 = param_1 + (int)uVar1;
  } while( true );
}


