/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 04f48550
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateDynamicResolutionVersion(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  long in_x11;
  long lVar7;
  long unaff_x19;
  uint *unaff_x20;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_02b7654c();
      goto LAB_04f4858c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_04f4858c:
  uVar5 = (*(code *)*puVar4)();
  if ((uVar5 & 1) == 0) {
    uVar1 = *unaff_x20;
                    /* try { // try from 04f485e8 to 050486a7 has its CatchHandler @ 04f485e8
                       catch() { ... } // from try @ 04f485e8 with catch @ 04f485e8
                       catch() { ... } // from try @ 04f488ac with catch @ 04f485e8
                       catch() { ... } // from try @ 04f48904 with catch @ 04f485e8
                       catch() { ... } // from try @ 04f489a0 with catch @ 04f485e8 */
    if ((-1 < (int)uVar1) && (*(char *)(unaff_x19 + 0xb0) == '\0')) {
      lVar6 = *(long *)(unaff_x19 + 0x38);
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 <= uVar1) goto LAB_04f48680;
        lVar7 = *(long *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
        if (lVar7 != 0) {
          if (*(float *)(lVar7 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
            if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar7 + 0x14)) {
              return;
            }
            uVar3 = uVar2 - 1;
            if ((int)(uVar1 + 1) <= (int)uVar3) {
              uVar3 = uVar1 + 1;
            }
            *unaff_x20 = uVar3;
            if (uVar2 <= uVar3) goto LAB_04f48680;
            uVar5 = (ulong)(int)uVar3;
          }
          else {
            if ((int)uVar1 < 2) {
              uVar1 = 1;
            }
            uVar1 = uVar1 - 1;
            *unaff_x20 = uVar1;
            if (uVar2 <= uVar1) {
LAB_04f48680:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            uVar5 = (ulong)uVar1;
          }
          if (*(long *)(lVar6 + uVar5 * 8 + 0x20) != 0) {
            FUN_04f47690();
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    FUN_04f47690();
    *(undefined1 *)(unaff_x19 + 0xb0) = 0;
    *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
  }
  return;
}


