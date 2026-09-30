/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$GetCurrentRoom
ENTRY_POINT: 04a735d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__GetCurrentRoom(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar5;
  undefined8 uVar6;
  
  do {
    lVar4 = unaff_x22 + (long)(int)in_w8 * 4;
    unaff_w23 = unaff_w23 + 1;
    *(int *)(unaff_x27 + 4) = *(int *)(lVar4 + 0x20) + -1;
    *(uint *)(lVar4 + 0x20) = unaff_w23;
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x26 = unaff_x26 + 0x10;
      if ((long)*(int *)(unaff_x19 + 0x24) <= (long)unaff_x24) {
        *(uint *)(unaff_x19 + 0x24) = unaff_w23;
        *(long *)(unaff_x19 + 0x18) = unaff_x21;
        thunk_FUN_02bb0e9c();
        *(long *)(unaff_x19 + 0x10) = unaff_x22;
        thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
        *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
        return;
      }
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) goto LAB_04a73684;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x24) goto LAB_04a73680;
    } while (*(int *)(lVar4 + unaff_x26) < 0);
    if (unaff_x21 == 0) {
LAB_04a73684:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) break;
    lVar5 = (long)(int)unaff_w23;
    uVar6 = *(undefined8 *)(lVar4 + unaff_x26);
    unaff_x27 = unaff_x25 + lVar5 * 0x10;
    lVar1 = unaff_x21 + lVar5 * 0x10;
    *(undefined8 *)(lVar1 + 0x28) = ((undefined8 *)(lVar4 + unaff_x26))[1];
    *(undefined8 *)(lVar1 + 0x20) = uVar6;
    thunk_FUN_02bb0e9c(unaff_x27 + 8,0);
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) break;
    if (unaff_x22 == 0) goto LAB_04a73684;
    iVar2 = *(int *)(unaff_x25 + lVar5 * 0x10);
    iVar3 = 0;
    if (unaff_w20 != 0) {
      iVar3 = iVar2 / unaff_w20;
    }
    in_w8 = iVar2 - iVar3 * unaff_w20;
  } while (in_w8 < *(uint *)(unaff_x22 + 0x18));
LAB_04a73680:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


