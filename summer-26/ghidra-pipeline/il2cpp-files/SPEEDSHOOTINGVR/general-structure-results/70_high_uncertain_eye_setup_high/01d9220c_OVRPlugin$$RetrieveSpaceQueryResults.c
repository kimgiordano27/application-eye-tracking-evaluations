/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 01d9220c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__RetrieveSpaceQueryResults(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar10;
  undefined4 unaff_w24;
  long lVar11;
  
  lVar3 = thunk_FUN_010400dc();
  FUN_017d2874(lVar3,unaff_w24,*(undefined8 *)PTR_DAT_02359908);
  puVar2 = PTR_DAT_02352168;
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (0 < (int)uVar1) {
    lVar11 = 0;
    do {
      if (uVar1 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      lVar10 = *(long *)(unaff_x20 + 0x20 + lVar11 * 8);
      if (lVar10 == 0) {
        thunk_FUN_010303a8(PTR_DAT_02359920);
        uVar6 = thunk_FUN_010400dc();
        uVar7 = thunk_FUN_010303a8(PTR_DAT_02359928);
        FUN_01cc6734(uVar6,uVar7,0);
        uVar7 = thunk_FUN_010303a8(PTR_DAT_02359930);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar6,uVar7);
      }
      FUN_0105d828(lVar10);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x21);
      }
      uVar4 = FUN_01d611c4();
      if ((uVar4 & 1) == 0) {
LAB_01d922a8:
        if (lVar3 == 0) goto LAB_01d92128;
        lVar8 = *(long *)(lVar3 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_01d92128;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar10;
          thunk_FUN_0106e12c(plVar5,lVar10);
        }
        else {
          FUN_017d3030(lVar3,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (unaff_x19 == (long *)0x0) goto LAB_01d92128;
        uVar4 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar4 & 1) != 0) goto LAB_01d922a8;
      }
                    /* try { // try from 01d92308 to 01e924c3 has its CatchHandler @ 01d92308
                       catch() { ... } // from try @ 01d92308 with catch @ 01d92308
                       catch() { ... } // from try @ 01d925ac with catch @ 01d92308
                       catch() { ... } // from try @ 01d92660 with catch @ 01d92308
                       catch() { ... } // from try @ 01d92718 with catch @ 01d92308 */
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < (int)uVar1);
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar4 = FUN_01d603ec();
  if ((uVar4 & 1) == 0) {
    if (unaff_x19 == (long *)0x0) goto LAB_01d92128;
    uVar4 = FUN_01d6237c();
    if ((uVar4 & 1) == 0) {
      if (lVar3 == 0) goto LAB_01d92128;
      uVar6 = FUN_01d6df4c();
      uVar6 = thunk_FUN_0103ffe0(uVar6,*(undefined8 *)PTR_DAT_0234bd08);
      goto LAB_01d92490;
    }
  }
  if (lVar3 != 0) {
    uVar6 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02358ca0,*(undefined4 *)(lVar3 + 0x18));
LAB_01d92490:
    FUN_017d35e0(lVar3,uVar6,0,*(undefined8 *)PTR_DAT_02359900);
    return uVar6;
  }
LAB_01d92128:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


