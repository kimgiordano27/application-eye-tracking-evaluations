/*
FUNCTION_NAME: Amazon.S3.Model.CopyObjectRequest$$IsSetBucketKeyEnabled
ENTRY_POINT: 0417bd74
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_3;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x0417bdfc) */

undefined8 Amazon_S3_Model_CopyObjectRequest__IsSetBucketKeyEnabled(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long lVar3;
  long unaff_x21;
  long *plVar4;
  
  plVar4 = (long *)(unaff_x21 + 0x18);
  lVar3 = *plVar4;
  uVar1 = Amazon_S3_Model_CopyObjectRequest__set_ContentType
                    (lVar3,*(undefined8 *)(unaff_x21 + 0x20));
  if ((uVar1 & 1) != 0) {
    lVar3 = (**(code **)(*unaff_x19 + 0x1b8))();
    FUN_0417c1c0(lVar3,unaff_x19[4]);
    *plVar4 = lVar3;
    thunk_FUN_03d1023c(plVar4,lVar3);
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar4 = *(long **)(lVar3 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar2 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
  if (unaff_x19[6] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  FUN_071e417c(unaff_x19[6],0);
  return uVar2;
}


