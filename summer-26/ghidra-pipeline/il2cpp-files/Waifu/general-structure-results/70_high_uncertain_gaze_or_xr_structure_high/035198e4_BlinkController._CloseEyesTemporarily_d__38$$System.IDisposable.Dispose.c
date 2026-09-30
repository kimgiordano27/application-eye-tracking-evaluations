/*
FUNCTION_NAME: BlinkController.<CloseEyesTemporarily>d__38$$System.IDisposable.Dispose
ENTRY_POINT: 035198e4
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: validity_gate;pose_vector;data_collection;keyword_support
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;eye_or_gaze_keyword_boost_only;functionality_possible_biometrics_hits_2
*/


void BlinkController_<CloseEyesTemporarily>d__38__System_IDisposable_Dispose(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x23;
  uint uVar4;
  long unaff_x24;
  long unaff_x25;
  undefined1 unaff_w26;
  
code_r0x035198e4:
  do {
    lVar3 = *(long *)(unaff_x19 + 0x58);
    unaff_x24 = unaff_x24 + 1;
    if (lVar3 == 0) {
LAB_035198f0:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar4 = (uint)unaff_x24;
    if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar4) {
      return;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_035198f4;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_035198f0;
    pcVar2 = *(code **)(unaff_x23 + 0x160);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)FUN_033d1b68();
      *(code **)(unaff_x23 + 0x160) = pcVar2;
    }
    uVar1 = (*pcVar2)(lVar3);
  } while ((uVar1 & 1) == 0);
  lVar3 = *(long *)(unaff_x19 + 0x58);
  if (lVar3 == 0) goto LAB_035198f0;
  if (uVar4 < *(uint *)(lVar3 + 0x18)) {
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_035198f0;
    pcVar2 = *(code **)(unaff_x25 + 0x168);
    if (pcVar2 == (code *)0x0) {
      pcVar2 = (code *)FUN_033d1b68();
      *(code **)(unaff_x25 + 0x168) = pcVar2;
    }
    (*pcVar2)(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0x78);
    if (lVar3 == 0) goto LAB_035198f0;
    if (uVar4 < *(uint *)(lVar3 + 0x18)) {
      *(undefined1 *)(lVar3 + unaff_x24 + 0x20) = unaff_w26;
      goto code_r0x035198e4;
    }
  }
LAB_035198f4:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


