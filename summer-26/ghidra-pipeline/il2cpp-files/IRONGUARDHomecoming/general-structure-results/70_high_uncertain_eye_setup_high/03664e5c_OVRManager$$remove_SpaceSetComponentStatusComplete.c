/*
FUNCTION_NAME: OVRManager$$remove_SpaceSetComponentStatusComplete
ENTRY_POINT: 03664e5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceSetComponentStatusComplete(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 03664e60 to 03764e6f has its CatchHandler @ 03664e70 */
  *(undefined1 *)(unaff_x21 + 0xd16) = 1;
  if (unaff_x19 == 0) {
LAB_03665040:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 03664d78 with catch @ 03664e70
                       catch() { ... } // from try @ 03664dd0 with catch @ 03664e70
                       catch() { ... } // from try @ 03664e60 with catch @ 03664e70 */
  uVar3 = FUN_0428a0bc();
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
                    /* try { // try from 03664e74 to 03764e77 has its CatchHandler @ 03664e80 */
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 03664e78 to 03764e83 has its CatchHandler @ 03664d28 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03664e74 with catch @ 03664e80
                        */
    uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
                    /* try { // try from 03664e84 to 03764edb has its CatchHandler @ 03664e84
                       catch() { ... } // from try @ 03664e84 with catch @ 03664e84
                       catch() { ... } // from try @ 03664ef8 with catch @ 03664e84
                       catch() { ... } // from try @ 03664f8c with catch @ 03664e84
                       catch() { ... } // from try @ 03664fe0 with catch @ 03664e84
                       catch() { ... } // from try @ 03665070 with catch @ 03664e84 */
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(char *)(unaff_x19 + 0x145) == '\0') {
        if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_03665040;
                    /* try { // try from 03664edc to 03764ef7 has its CatchHandler @ 03664f5c */
                    /* try { // try from 03664ef8 to 03764f73 has its CatchHandler @ 03664e84 */
        if ((*(char *)(unaff_x19 + 0x144) != '\0') &&
           (fVar7 = *(float *)(unaff_x19 + 0x114) - *(float *)(unaff_x19 + 0x104),
           fVar8 = *(float *)(unaff_x19 + 0x118) - *(float *)(unaff_x19 + 0x108),
           fVar6 = (float)*(int *)(*(long *)(unaff_x20 + 0x38) + 0x3c),
           fVar7 * fVar7 + fVar8 * fVar8 < fVar6 * fVar6)) {
          return;
        }
        if (*(char *)(unaff_x20 + 0x68) != '\0') {
          *(float *)(unaff_x19 + 0x104) = *(float *)(unaff_x19 + 0x114);
          *(float *)(unaff_x19 + 0x108) = *(float *)(unaff_x19 + 0x118);
        }
        puVar2 = Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__;
        uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (DAT_04833e10 == '\0') {
          thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
          DAT_04833e10 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0230ff8c(uVar4);
        *(undefined1 *)(unaff_x19 + 0x145) = 1;
      }
      uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_04073094(uVar4,uVar5,0);
      if ((uVar3 & 1) != 0) {
        FUN_03662fac();
      }
      puVar1 = Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (DAT_04833e11 == '\0') {
        thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_Internal_ColumnMover_OnPointerCancel__);
        DAT_04833e11 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0230ff8c(uVar4);
      return;
    }
  }
  return;
}


