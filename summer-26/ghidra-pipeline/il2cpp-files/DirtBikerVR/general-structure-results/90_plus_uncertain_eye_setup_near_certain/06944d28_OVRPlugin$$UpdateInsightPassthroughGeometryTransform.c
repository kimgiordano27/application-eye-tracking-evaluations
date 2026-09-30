/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 06944d28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  code *in_x9;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  
  while( true ) {
    (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x620));
    unaff_w20 = unaff_w20 + 1;
    iVar2 = FUN_06936294();
    if (iVar2 <= unaff_w20) break;
    if (((*(long *)(unaff_x19 + 0x58) == 0) ||
        (lVar4 = FUN_04de82e0(*(long *)(unaff_x19 + 0x58),unaff_w20,*unaff_x21), lVar4 == 0)) ||
       (param_2 = *(long **)(lVar4 + 0x80), param_2 == (long *)0x0)) goto LAB_06944db4;
    param_1 = *param_2;
    in_x9 = *(code **)(param_1 + 0x618);
  }
                    /* try { // try from 06944d48 to 06a44d4b has its CatchHandler @ 0694533c */
  iVar2 = FUN_06944b30();
  puVar1 = PTR_DAT_084b63c8;
                    /* try { // try from 06944d4c to 06a44d57 has its CatchHandler @ 06945378 */
  if (0 < iVar2) {
    iVar2 = 0;
    do {
                    /* try { // try from 06944d68 to 06a44d6b has its CatchHandler @ 06945340 */
                    /* try { // try from 06944d6c to 06a44d83 has its CatchHandler @ 06945390 */
      if ((*(long *)(unaff_x19 + 0x50) == 0) ||
         (lVar4 = FUN_04de82e0(*(long *)(unaff_x19 + 0x50),iVar2,*(undefined8 *)puVar1), lVar4 == 0)
         ) goto LAB_06944db4;
      FUN_0694db04(lVar4,0);
      iVar2 = iVar2 + 1;
      iVar3 = FUN_06944b30();
    } while (iVar2 < iVar3);
  }
                    /* try { // try from 06944da0 to 06a44db7 has its CatchHandler @ 06945344 */
  if ((*(long *)(unaff_x19 + 0x10) != 0) && (*(long *)(unaff_x19 + 0x40) != 0)) {
    FUN_06943c38(*(undefined4 *)(*(long *)(unaff_x19 + 0x10) + 0x138));
    return;
  }
LAB_06944db4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


