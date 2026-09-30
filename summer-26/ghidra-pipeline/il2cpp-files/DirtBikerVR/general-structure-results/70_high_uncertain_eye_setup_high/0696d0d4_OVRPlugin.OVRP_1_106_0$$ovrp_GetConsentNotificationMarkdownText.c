/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetConsentNotificationMarkdownText
ENTRY_POINT: 0696d0d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetConsentNotificationMarkdownText(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  int unaff_w20;
  int iVar7;
  undefined8 unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  do {
                    /* catch() { ... } // from try @ 0696cf60 with catch @ 0696d0d4 */
    thunk_FUN_03ae8be4(param_1);
    do {
                    /* catch() { ... } // from try @ 0696ce10 with catch @ 0696d0d8 */
                    /* catch() { ... } // from try @ 0696cd7c with catch @ 0696d0dc */
                    /* catch() { ... } // from try @ 0696cd18 with catch @ 0696d0e0 */
      uVar3 = FUN_07ca21f0(unaff_x21,0);
                    /* catch() { ... } // from try @ 0696cf58 with catch @ 0696d0e4 */
      if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 0696ce58 with catch @ 0696d0e8 */
        if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0696d1cc;
        lVar4 = FUN_04de82e0(*(long *)(unaff_x19 + 0x78),unaff_w20,*unaff_x25);
                    /* try { // try from 0696d104 to 06a6d107 has its CatchHandler @ 0696d110 */
                    /* catch() { ... } // from try @ 0696d104 with catch @ 0696d110 */
                    /* try { // try from 0696d114 to 06a6d11b has its CatchHandler @ 0696d124 */
        if ((*(long *)(unaff_x19 + 0x80) == 0) ||
           (uVar5 = FUN_04de82e0(*(long *)(unaff_x19 + 0x80),unaff_w20,*unaff_x23), lVar4 == 0))
        goto LAB_0696d1cc;
                    /* try { // try from 0696d11c to 06a6d127 has its CatchHandler @ 0696cb70 */
                    /* catch() { ... } // from try @ 0696d114 with catch @ 0696d124 */
                    /* try { // try from 0696d128 to 06a6d347 has its CatchHandler @ 0696d128
                       catch() { ... } // from try @ 0696d128 with catch @ 0696d128
                       catch() { ... } // from try @ 0696d454 with catch @ 0696d128
                       catch() { ... } // from try @ 0696d52c with catch @ 0696d128
                       catch() { ... } // from try @ 0696d640 with catch @ 0696d128 */
        FUN_07c6df20(lVar4,uVar5,0);
      }
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w22 == unaff_w20) {
        if ((*(long *)(unaff_x19 + 0x90) == 0) ||
           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar4 == 0)) goto LAB_0696d1cc;
        FUN_069462dc(lVar4,0);
        puVar1 = PTR_DAT_084b5d60;
        lVar4 = *(long *)(unaff_x19 + 0x90);
        if (lVar4 == 0) goto LAB_0696d1cc;
        iVar7 = 0;
        goto LAB_0696d164;
      }
      if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0696d1cc;
      unaff_x21 = FUN_04de82e0(*(long *)(unaff_x19 + 0x80),unaff_w20,*unaff_x23);
      param_1 = *unaff_x24;
    } while (*(int *)(param_1 + 0xe4) != 0);
  } while( true );
LAB_0696d164:
  if (*(long *)(lVar4 + 0xe8) == 0) {
LAB_0696d1cc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar2 = FUN_06936294(*(long *)(lVar4 + 0xe8),0);
  if (iVar2 <= iVar7) {
    *(undefined4 *)(unaff_x19 + 0x98) = 0;
    return;
  }
  if ((((*(long *)(unaff_x19 + 0x90) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar4 == 0)) ||
      (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) ||
     ((lVar4 = FUN_04de82e0(lVar4,iVar7,*(undefined8 *)puVar1), lVar4 == 0 ||
      (plVar6 = *(long **)(lVar4 + 0x80), plVar6 == (long *)0x0)))) goto LAB_0696d1cc;
  (**(code **)(*plVar6 + 0x308))(0,plVar6,*(undefined8 *)(*plVar6 + 0x310));
  lVar4 = *(long *)(unaff_x19 + 0x90);
  iVar7 = iVar7 + 1;
  if (lVar4 == 0) goto LAB_0696d1cc;
  goto LAB_0696d164;
}


