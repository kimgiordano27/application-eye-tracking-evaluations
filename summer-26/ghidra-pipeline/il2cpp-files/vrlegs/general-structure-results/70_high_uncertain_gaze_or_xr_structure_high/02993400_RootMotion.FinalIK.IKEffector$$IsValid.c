/*
FUNCTION_NAME: RootMotion.FinalIK.IKEffector$$IsValid
ENTRY_POINT: 02993400
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x029934cc) */

void RootMotion_FinalIK_IKEffector__IsValid(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar3;
  int unaff_w22;
  char cStack000000000000000c;
  
  iVar1 = FUN_0299e92c(param_1,0);
  *(int *)(unaff_x19 + 0x48) = iVar1 + unaff_w22;
  *(int *)(unaff_x20 + 0x17c) = *(int *)(unaff_x20 + 0x17c) + 1;
  *(char *)(unaff_x19 + 0x40) = *(char *)(unaff_x19 + 0x40) + '\x01';
  iVar1 = *(int *)(unaff_x19 + 0x44) + *(int *)(unaff_x19 + 0x3c);
  if (iVar1 < *(int *)(unaff_x20 + 200)) {
    *(int *)(unaff_x20 + 200) = iVar1;
  }
  if ((unaff_x21 & 1) == 0) {
    lVar2 = FUN_0298d23c();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(int *)(lVar2 + 0x6c) = *(int *)(lVar2 + 0x6c) + 1;
    uVar3 = *(undefined8 *)(unaff_x20 + 0x128);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar3,&stack0x0000000c,0);
    if (*(long *)(unaff_x20 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c();
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
  }
  return;
}


