/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 027f0c10
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x027f0cac) */

void OVRPlugin__GetTrackingOriginType(void)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w21;
  long *plVar3;
  long lVar4;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  if ((unaff_w21 >> 0x13 & 1) == 0) {
    if (unaff_x23 == 0) {
LAB_027f0ce8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar3 = (long *)(unaff_x23 + 0x40);
    lVar4 = *plVar3;
    thunk_FUN_01a4b338();
    if (lVar4 == 0) {
      thunk_FUN_01a4b338();
      uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd598);
      FUN_0221f418(uVar2,*(undefined8 *)PTR_DAT_03cfd590);
      FUN_01aa50f0(plVar3,uVar2,0);
    }
    lVar4 = *plVar3;
    thunk_FUN_01a4b338();
    if (lVar4 != 0) {
      in_stack_00000008._4_1_ = '\0';
      FUN_027e0bd8(lVar4,(long)&stack0x00000008 + 4);
      FUN_0221fb48(lVar4);
      if (in_stack_00000008._4_1_ != '\0') {
        FUN_01a4adbc(lVar4);
      }
    }
  }
  else if (unaff_x23 == 0) goto LAB_027f0ce8;
  thunk_FUN_01a4b338();
  iVar1 = FUN_01aa5294(unaff_x23 + 0x3c);
  if (iVar1 == 0) {
    FUN_027f0334();
  }
  return;
}


