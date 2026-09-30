/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$RegisterTexture
ENTRY_POINT: 052e51a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture(long param_1)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  
  if (param_1 == 0) goto LAB_052e5294;
                    /* try { // try from 052e51bc to 053e51cb has its CatchHandler @ 052e5324 */
  FUN_066dbe20(param_1,0);
  lVar1 = *unaff_x20;
  if (lVar1 == 0) goto LAB_052e5294;
  if (*(char *)(lVar1 + 0xd9) == '\0') {
    if (*(char *)(lVar1 + 0xda) != '\0') {
                    /* try { // try from 052e51e4 to 053e52f3 has its CatchHandler @ 052e4e58 */
      lVar1 = *(long *)(unaff_x19 + 0x208);
      goto joined_r0x052e51e8;
    }
  }
  else {
    lVar1 = *(long *)(unaff_x19 + 0x200);
                    /* try { // try from 052e51d4 to 053e51e3 has its CatchHandler @ 052e5320 */
joined_r0x052e51e8:
    if (lVar1 == 0) goto LAB_052e5294;
    FUN_066dbe20(lVar1,0);
  }
  lVar1 = *unaff_x20;
  if (lVar1 == 0) goto LAB_052e5294;
  if (*(char *)(lVar1 + 0x171) == '\0') {
    if (*(char *)(lVar1 + 0x172) != '\0') {
      lVar1 = *(long *)(unaff_x19 + 0x218);
      goto joined_r0x052e521c;
    }
  }
  else {
    lVar1 = *(long *)(unaff_x19 + 0x210);
joined_r0x052e521c:
    if (lVar1 == 0) goto LAB_052e5294;
    FUN_066dbe20(lVar1,0);
  }
  lVar1 = *unaff_x20;
  if (lVar1 == 0) goto LAB_052e5294;
  if (*(char *)(lVar1 + 0xe1) == '\0') {
    if (*(char *)(lVar1 + 0xe2) != '\0') {
      lVar1 = *(long *)(unaff_x19 + 0x228);
      goto joined_r0x052e5250;
    }
  }
  else {
    lVar1 = *(long *)(unaff_x19 + 0x220);
joined_r0x052e5250:
    if (lVar1 == 0) goto LAB_052e5294;
    FUN_066dbe20(lVar1,0);
  }
  lVar1 = *unaff_x20;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x179) == '\0') {
      if (*(char *)(lVar1 + 0x17a) == '\0') {
        return;
      }
      lVar1 = *(long *)(unaff_x19 + 0x238);
    }
    else {
      lVar1 = *(long *)(unaff_x19 + 0x230);
    }
    if (lVar1 != 0) {
      FUN_066dbe20(lVar1,0);
      return;
    }
  }
LAB_052e5294:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


