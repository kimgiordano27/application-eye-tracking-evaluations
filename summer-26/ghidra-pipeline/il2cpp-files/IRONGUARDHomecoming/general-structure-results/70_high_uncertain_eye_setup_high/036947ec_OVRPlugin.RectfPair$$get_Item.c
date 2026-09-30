/*
FUNCTION_NAME: OVRPlugin.RectfPair$$get_Item
ENTRY_POINT: 036947ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_RectfPair__get_Item(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float in_s4;
  float unaff_s11;
  float fVar5;
  float unaff_s12;
  float fVar6;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  undefined8 in_stack_00000068;
  
  fVar6 = unaff_s12 - unaff_s13;
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 03694800 to 03794837 has its CatchHandler @ 03694840 */
    thunk_FUN_01ee6d7c();
  }
  fVar1 = SQRT((unaff_s14 - unaff_s15) * (unaff_s14 - unaff_s15) +
               unaff_s11 * unaff_s11 + fVar6 * fVar6);
  if (fVar1 <= in_s4) {
                    /* catch() { ... } // from try @ 036946bc with catch @ 0369483c */
                    /* catch() { ... } // from try @ 03694800 with catch @ 03694840 */
                    /* catch() { ... } // from try @ 0369477c with catch @ 03694844 */
    if (DAT_0482ee12 == '\0') {
                    /* catch() { ... } // from try @ 036947e4 with catch @ 03694848 */
                    /* catch() { ... } // from try @ 03694760 with catch @ 0369484c */
                    /* catch() { ... } // from try @ 03694660 with catch @ 03694850 */
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
                    /* catch() { ... } // from try @ 03694648 with catch @ 03694854 */
                    /* catch() { ... } // from try @ 0369463c with catch @ 03694858 */
      DAT_0482ee12 = '\x01';
    }
                    /* catch() { ... } // from try @ 03694604 with catch @ 0369485c
                       catch() { ... } // from try @ 0369474c with catch @ 0369485c
                       catch() { ... } // from try @ 036947bc with catch @ 0369485c */
                    /* catch() { ... } // from try @ 036941d0 with catch @ 03694860 */
                    /* catch() { ... } // from try @ 0369452c with catch @ 03694864 */
                    /* catch() { ... } // from try @ 03694620 with catch @ 03694868 */
                    /* catch() { ... } // from try @ 03694190 with catch @ 0369486c
                       catch() { ... } // from try @ 03694624 with catch @ 0369486c */
    fVar5 = **(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fVar6 = (*(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8))[1];
                    /* catch() { ... } // from try @ 036945bc with catch @ 03694870
                       catch() { ... } // from try @ 03694718 with catch @ 03694870
                       catch() { ... } // from try @ 03694758 with catch @ 03694870 */
  }
  else {
    fVar5 = unaff_s11 / fVar1;
    fVar6 = fVar6 / fVar1;
                    /* catch() { ... } // from try @ 036946d0 with catch @ 03694838
                       try { // try from 03694838 to 037948b3 has its CatchHandler @ 0369402c */
  }
                    /* catch() { ... } // from try @ 03694618 with catch @ 03694874 */
  fStack0000000000000004 = fVar6;
                    /* catch() { ... } // from try @ 03694194 with catch @ 03694878 */
                    /* catch() { ... } // from try @ 036944dc with catch @ 0369487c */
                    /* catch() { ... } // from try @ 036941b0 with catch @ 03694880 */
                    /* catch() { ... } // from try @ 036945dc with catch @ 03694884 */
                    /* catch() { ... } // from try @ 03694508 with catch @ 03694888
                       catch() { ... } // from try @ 0369461c with catch @ 03694888 */
                    /* catch() { ... } // from try @ 03694128 with catch @ 0369488c */
                    /* catch() { ... } // from try @ 03694610 with catch @ 03694890 */
                    /* catch() { ... } // from try @ 03694438 with catch @ 03694894 */
  FUN_01fdd7a4(in_stack_00000068._4_4_,0);
                    /* catch() { ... } // from try @ 036945d8 with catch @ 03694898 */
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    FUN_040390ac(*(long *)(unaff_x20 + 0x40),0);
    FUN_040674b0(0);
    uVar4 = FUN_040677e4(0);
    if (fVar6 * fVar6 + (float)uVar4 * (float)uVar4 + fVar5 * fVar5 != 0.0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_0407bc20();
      uVar3 = FUN_04067568(uVar4,0);
      *(undefined4 *)(unaff_x19 + 0xc) = uVar3;
      *(float *)(unaff_x19 + 0x10) = fVar5;
      *(float *)(unaff_x19 + 0x14) = fVar6;
      *(undefined4 *)(unaff_x19 + 0x18) = uVar2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03694574 with catch @ 03694964
                       catch() { ... } // from try @ 03694588 with catch @ 03694964 */
  FUN_01f08a3c();
}


