/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnPreRoomAnchorAdded
ENTRY_POINT: 04a7b21c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__OnPreRoomAnchorAdded(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint in_w8;
  long in_x9;
  ulong in_x10;
  long in_x11;
  int in_w12;
  int in_w13;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  do {
    if ((long)in_w13 <= (long)in_x10) {
      *(uint *)(unaff_x19 + 0x24) = in_w8;
      *(long *)(unaff_x19 + 0x18) = unaff_x21;
      thunk_FUN_02bb0e9c();
      *(long *)(unaff_x19 + 0x10) = unaff_x22;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
      *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
      return;
    }
    lVar5 = *(long *)(unaff_x19 + 0x18);
    if (lVar5 == 0) {
LAB_04a7b29c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar5 + 0x18) <= in_x10) goto LAB_04a7b298;
    if (-1 < *(int *)(lVar5 + in_x9 + 0x20)) {
      if (unaff_x21 == 0) goto LAB_04a7b29c;
      if (*(uint *)(unaff_x21 + 0x18) <= in_w8) {
LAB_04a7b298:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uVar7 = *(undefined8 *)(lVar5 + in_x9 + 0x20);
      uVar1 = *(undefined4 *)(lVar5 + in_x9 + 0x28);
      lVar5 = unaff_x21 + (long)(int)in_w8 * (long)in_w12;
      *(undefined8 *)(lVar5 + 0x20) = uVar7;
      *(undefined4 *)(lVar5 + 0x28) = uVar1;
      if (*(uint *)(unaff_x21 + 0x18) <= in_w8) goto LAB_04a7b298;
      if (unaff_x22 == 0) goto LAB_04a7b29c;
      iVar3 = 0;
      iVar6 = (int)uVar7;
      if (unaff_w20 != 0) {
        iVar3 = iVar6 / unaff_w20;
      }
      uVar2 = iVar6 - iVar3 * unaff_w20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar2) goto LAB_04a7b298;
      lVar5 = unaff_x22 + (long)(int)uVar2 * 4;
      lVar4 = (long)(int)in_w8;
      in_w8 = in_w8 + 1;
      *(int *)(in_x11 + lVar4 * in_w12 + 4) = *(int *)(lVar5 + 0x20) + -1;
      *(uint *)(lVar5 + 0x20) = in_w8;
      in_w13 = *(int *)(unaff_x19 + 0x24);
    }
    in_x10 = in_x10 + 1;
    in_x9 = in_x9 + 0xc;
  } while( true );
}


