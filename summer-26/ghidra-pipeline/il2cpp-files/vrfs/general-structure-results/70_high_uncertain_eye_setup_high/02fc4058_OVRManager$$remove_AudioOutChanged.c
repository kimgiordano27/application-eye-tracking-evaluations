/*
FUNCTION_NAME: OVRManager$$remove_AudioOutChanged
ENTRY_POINT: 02fc4058
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_AudioOutChanged(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar9;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar10;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_0159f088();
  *(undefined1 *)(unaff_x21 + 0x1cb) = 1;
  lVar5 = FUN_0160edfc(*unaff_x22,unaff_w20);
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x160);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_015c2790(lVar7);
  }
  lVar7 = FUN_0160edfc(lVar7,unaff_w20);
  uVar1 = *(uint *)(unaff_x19 + 0x20);
  uVar9 = (ulong)uVar1;
  FUN_031dd848(*(undefined8 *)(unaff_x19 + 0x18),0,lVar7,0,uVar9,0);
  uStack000000000000000c = 0;
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0xa8);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_015c2790();
  }
  lVar6 = thunk_FUN_015d01b0(lVar6,&stack0x0000000c);
  if (((lVar6 == 0) && ((unaff_x26 & 1) != 0)) && (0 < (int)uVar1)) {
    if (lVar7 == 0) goto LAB_02fc420c;
    uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
    uVar10 = 0;
    lVar6 = lVar7 + 0x28;
    do {
      if (uVar8 <= uVar10) goto LAB_02fc4208;
      if (-1 < *(int *)(lVar6 + -8)) {
        uVar4 = FUN_031d7008(lVar6,*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x130));
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= uVar10) goto LAB_02fc4208;
        *(uint *)(lVar6 + -8) = uVar4 & 0x7fffffff;
      }
      uVar10 = uVar10 + 1;
      lVar6 = lVar6 + 0x38;
    } while (uVar9 != uVar10);
  }
  if (0 < (int)uVar1) {
    if (lVar7 == 0) {
LAB_02fc420c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    uVar10 = 0;
    do {
      if (uVar1 <= uVar10) {
LAB_02fc4208:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      iVar2 = *(int *)(lVar7 + uVar10 * 0x38 + 0x20);
      if (-1 < iVar2) {
        if (lVar5 == 0) goto LAB_02fc420c;
        iVar3 = 0;
        if (unaff_w20 != 0) {
          iVar3 = iVar2 / unaff_w20;
        }
        uVar4 = iVar2 - iVar3 * unaff_w20;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_02fc4208;
        lVar6 = lVar5 + (long)(int)uVar4 * 4;
        *(int *)(lVar7 + uVar10 * 0x38 + 0x24) = *(int *)(lVar6 + 0x20) + -1;
        *(int *)(lVar6 + 0x20) = (int)uVar10 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  *(long *)(unaff_x19 + 0x10) = lVar5;
  thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10),lVar5);
  *(long *)(unaff_x19 + 0x18) = lVar7;
  thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x18),lVar7);
  return;
}


