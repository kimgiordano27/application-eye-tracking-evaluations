/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetRenderModelProperties2
ENTRY_POINT: 056a3888
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_74_0__ovrp_GetRenderModelProperties2(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  int iVar6;
  long lVar7;
  long unaff_x24;
  long *unaff_x25;
  uint uVar8;
  long unaff_x29;
  
                    /* catch() { ... } // from try @ 056a3884 with catch @ 056a3890 */
                    /* try { // try from 056a3894 to 057a389b has its CatchHandler @ 056a38a4 */
  FUN_056a97f8();
                    /* try { // try from 056a389c to 057a38a7 has its CatchHandler @ 056a347c */
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 056a383c with catch @ 056a38a4
                       catch() { ... } // from try @ 056a3894 with catch @ 056a38a4 */
    thunk_FUN_02df485c();
  }
  iVar3 = FUN_056a5bd8();
  puVar2 = System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TypeInfo;
  puVar1 = PTR_DAT_06a00db8;
  if (iVar3 == 0xc) {
    uVar8 = 0;
    iVar6 = 0x100;
    do {
      iVar6 = iVar6 << 1;
      System_Nullable<DateTime>__get_Value(unaff_x29 + -0x30,iVar6,2,1,*(undefined8 *)puVar1);
      lVar7 = *(long *)puVar2;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_02dcfd74(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 8);
      if (*(long *)(lVar5 + 0x38) == 0) {
        FUN_02dcfd74(lVar5);
      }
      if (((*(int *)(unaff_x29 + -0x28) < 1) || (*(long *)(unaff_x29 + -0x30) == 0)) ||
         (lVar5 = FUN_036ec9e8(*(long *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                               *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)), lVar5 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_036ec8f8(*(undefined8 *)(unaff_x29 + -0x30),*(undefined8 *)(unaff_x29 + -0x28),
                             *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x18));
      }
      FUN_056a97f8(unaff_x29 + -0x20,uVar4,iVar6,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar3 = FUN_056a5bd8();
    } while ((uVar8 < 3) && (uVar8 = uVar8 + 1, iVar3 == 0xc));
  }
  uVar4 = OVRPlugin_<>c__<_cctor>b__807_16(unaff_x29 + -0x20,0);
  *unaff_x19 = uVar4;
  LeanTween__value();
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 == 0);
}


