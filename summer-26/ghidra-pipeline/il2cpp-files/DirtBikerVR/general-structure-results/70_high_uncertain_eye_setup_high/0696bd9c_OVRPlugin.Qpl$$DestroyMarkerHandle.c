/*
FUNCTION_NAME: OVRPlugin.Qpl$$DestroyMarkerHandle
ENTRY_POINT: 0696bd9c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__DestroyMarkerHandle(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  do {
    if ((param_1 & 0xffffffff) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (*(long *)(unaff_x19 + 0x78) == 0) goto LAB_0696bec0;
                    /* try { // try from 0696bdb0 to 06a6bdb7 has its CatchHandler @ 0696c44c */
    lVar8 = *(long *)(unaff_x20 + 0x20 + unaff_x23 * 8);
    uVar2 = FUN_04de894c(*(long *)(unaff_x19 + 0x78),lVar8,*unaff_x24);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x78);
      if (lVar3 == 0) {
LAB_0696bec0:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar5 = *(long *)(lVar3 + 0x10);
                    /* try { // try from 0696bdd4 to 06a6bddf has its CatchHandler @ 0696c4ec */
      lVar7 = *unaff_x25;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0696bec0;
      uVar1 = *(uint *)(lVar3 + 0x18);
                    /* try { // try from 0696bde8 to 06a6be0b has its CatchHandler @ 0696c4e8 */
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *plVar6 = lVar8;
        thunk_FUN_03afed3c(plVar6,lVar8);
      }
      else {
                    /* try { // try from 0696be1c to 06a6be27 has its CatchHandler @ 0696c500 */
        FUN_04de85b0(lVar3,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      if (lVar8 == 0) goto LAB_0696bec0;
      lVar3 = *(long *)(unaff_x19 + 0x80);
      uVar4 = FUN_07c6dc88(lVar8,0);
      if (lVar3 == 0) goto LAB_0696bec0;
                    /* try { // try from 0696be44 to 06a6be47 has its CatchHandler @ 0696c384 */
      lVar8 = *(long *)(lVar3 + 0x10);
                    /* try { // try from 0696be48 to 06a6be53 has its CatchHandler @ 0696c45c */
      lVar5 = *unaff_x26;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0696bec0;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_03afed3c();
      }
      else {
        FUN_04de85b0(lVar3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x23) {
      return;
    }
  } while( true );
}


