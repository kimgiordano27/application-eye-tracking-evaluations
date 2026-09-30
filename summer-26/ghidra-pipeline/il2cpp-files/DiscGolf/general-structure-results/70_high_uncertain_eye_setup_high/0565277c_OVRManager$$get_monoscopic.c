/*
FUNCTION_NAME: OVRManager$$get_monoscopic
ENTRY_POINT: 0565277c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_monoscopic(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x23;
  long *unaff_x24;
  long lVar5;
  long *unaff_x26;
  
  lVar5 = *unaff_x26;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_02dcfd74(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar4 + 0x38) == 0) {
    FUN_02dcfd74(lVar4);
  }
  puVar1 = System_Collections_Generic_HashSet<IXRGroupMember>_TypeInfo;
                    /* try { // try from 056527d4 to 057527db has its CatchHandler @ 056528ec */
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar4 = FUN_036eca5c(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x28)),
     lVar4 != 0)) {
    FUN_036ec994(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
                    /* try { // try from 056527ec to 057527f7 has its CatchHandler @ 056528dc */
  }
  lVar5 = *(long *)puVar1;
  lVar4 = *(long *)(lVar5 + 0x38);
                    /* try { // try from 056527fc to 05752807 has its CatchHandler @ 056528e0 */
  if (lVar4 == 0) {
    FUN_02dcfd74(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar4 + 0x38) == 0) {
    FUN_02dcfd74(lVar4);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar4 = FUN_036eca58(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x28)),
     lVar4 != 0)) {
    FUN_036ec990(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x18));
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<CommonTouch>_TypeInfo;
  FUN_055339fc();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar1);
  }
  uVar3 = FUN_056528d8();
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return;
}


