/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromSharedRooms>d__73$$MoveNext
ENTRY_POINT: 04a88178
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


void Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromSharedRooms>d__73__MoveNext(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong in_x9;
  long lVar7;
  int in_w13;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = 0;
  lVar7 = 0x20;
  do {
    lVar8 = *(long *)(unaff_x19 + 0x18);
    if (lVar8 == 0) {
LAB_04a882a8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar8 + 0x18) <= in_x9) goto LAB_04a882a4;
    if (-1 < *(int *)(lVar8 + lVar7)) {
      if (unaff_x21 == 0) goto LAB_04a882a8;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar6) {
LAB_04a882a4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      puVar1 = (undefined8 *)(lVar8 + lVar7);
      uVar10 = puVar1[1];
      uVar9 = *puVar1;
      lVar8 = unaff_x21 + (long)(int)uVar6 * 0x18;
      *(undefined8 *)(lVar8 + 0x30) = puVar1[2];
      *(undefined8 *)(lVar8 + 0x28) = uVar10;
      *(undefined8 *)(lVar8 + 0x20) = uVar9;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_04a882a4;
      if (unaff_x22 == 0) goto LAB_04a882a8;
      iVar2 = *(int *)(unaff_x21 + 0x20 + (long)(int)uVar6 * 0x18);
      iVar4 = 0;
      if (unaff_w20 != 0) {
        iVar4 = iVar2 / unaff_w20;
      }
      uVar3 = iVar2 - iVar4 * unaff_w20;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar3) goto LAB_04a882a4;
      lVar8 = unaff_x22 + (long)(int)uVar3 * 4;
      lVar5 = (long)(int)uVar6;
      uVar6 = uVar6 + 1;
      *(int *)(unaff_x21 + 0x20 + lVar5 * 0x18 + 4) = *(int *)(lVar8 + 0x20) + -1;
      *(uint *)(lVar8 + 0x20) = uVar6;
      in_w13 = *(int *)(unaff_x19 + 0x24);
    }
    in_x9 = in_x9 + 1;
    lVar7 = lVar7 + 0x18;
    if ((long)in_w13 <= (long)in_x9) {
      *(uint *)(unaff_x19 + 0x24) = uVar6;
      *(long *)(unaff_x19 + 0x18) = unaff_x21;
      thunk_FUN_02bb0e9c();
      *(long *)(unaff_x19 + 0x10) = unaff_x22;
      thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x10));
      *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
      return;
    }
  } while( true );
}


