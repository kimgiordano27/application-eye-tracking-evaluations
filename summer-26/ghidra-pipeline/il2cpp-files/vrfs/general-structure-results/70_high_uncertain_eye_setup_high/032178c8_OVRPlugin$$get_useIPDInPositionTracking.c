/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 032178c8
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_useIPDInPositionTracking
               (ulong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long unaff_x22;
  ulong uVar11;
  ulong uVar12;
  short *psVar13;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar11 = (ulong)param_2;
                    /* try { // try from 032178d8 to 03317933 has its CatchHandler @ 032177d8 */
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e3f9a0);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    thunk_FUN_0159f088(PTR_DAT_06ddfe48);
    *(undefined1 *)(unaff_x22 + 0xe70) = 1;
  }
  lVar4 = *unaff_x27;
  *(undefined8 *)(unaff_x29 + -0x108) = 0;
  *(undefined8 *)(unaff_x29 + -0x110) = 0;
  *(undefined4 *)(unaff_x29 + -0xf4) = 0;
  *(undefined8 *)(unaff_x29 + -0x7e) = 0;
  *(undefined8 *)(unaff_x29 + -0x86) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x29 + -0xd8) = 0;
  *(undefined8 *)(unaff_x29 + -0xe0) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xe8) = 0;
  *(undefined8 *)(unaff_x29 + -0xf0) = 0;
                    /* try { // try from 03217934 to 03317943 has its CatchHandler @ 03217944 */
  *(undefined8 *)(unaff_x29 + -0x118) = 0;
  *(undefined8 *)(unaff_x29 + -0x120) = 0;
  if ((int)param_4 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    iVar8 = -1;
  }
  else {
    if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 032178c0 with catch @ 03217944
                       catch() { ... } // from try @ 03217934 with catch @ 03217944 */
      thunk_FUN_016466fc();
    }
                    /* try { // try from 03217948 to 0331794b has its CatchHandler @ 03217954 */
                    /* try { // try from 0321794c to 03317957 has its CatchHandler @ 032177d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03217948 with catch @ 03217954
                        */
    uVar3 = FUN_0321ef9c(param_3,param_4,unaff_x29 + -0xf4);
                    /* try { // try from 03217958 to 03317c67 has its CatchHandler @ 03217958
                       catch() { ... } // from try @ 03217958 with catch @ 03217958
                       catch() { ... } // from try @ 03217d48 with catch @ 03217958
                       catch() { ... } // from try @ 03217e0c with catch @ 03217958
                       catch() { ... } // from try @ 03217ea8 with catch @ 03217958 */
    uVar5 = FUN_040f75b4();
    iVar8 = *(int *)(unaff_x29 + -0xf4);
    if (((uVar3 & 0xffdf) != 0x44) && ((uVar3 & 0xffdf) != 0x47 || 0 < iVar8)) {
      if ((uVar3 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_032224ec(uVar11,uVar3 - 0x21,iVar8);
      }
      else {
        lVar4 = *unaff_x27;
        *(undefined8 *)(unaff_x29 + -0x7e) = 0;
        *(undefined8 *)(unaff_x29 + -0x86) = 0;
        *(undefined8 *)(unaff_x29 + -0x98) = 0;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        *(undefined8 *)(unaff_x29 + -0xb8) = 0;
        *(undefined8 *)(unaff_x29 + -0xc0) = 0;
        *(undefined8 *)(unaff_x29 + -0xa8) = 0;
        *(undefined8 *)(unaff_x29 + -0xb0) = 0;
        *(undefined8 *)(unaff_x29 + -0xd8) = 0;
        *(undefined8 *)(unaff_x29 + -0xe0) = 0;
        *(undefined8 *)(unaff_x29 + -200) = 0;
        *(undefined8 *)(unaff_x29 + -0xd0) = 0;
        *(undefined8 *)(unaff_x29 + -0xe8) = 0;
        *(undefined8 *)(unaff_x29 + -0xf0) = 0;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (cRam0000000007237eb2 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e3f9a0);
          cRam0000000007237eb2 = '\x01';
        }
        *(undefined4 *)(unaff_x29 + -0xf0) = 10;
        FUN_031c834c(unaff_x29 + -0xf0,0,0);
        lVar4 = FUN_031c8358(unaff_x29 + -0xf0,0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x27);
        }
        psVar7 = (short *)(lVar4 + 0x14);
        psVar13 = psVar7;
        if (param_2 != 0) {
          iVar9 = -2;
          do {
            do {
              uVar12 = uVar11 / 10;
              uVar10 = (uint)uVar11;
              psVar13 = psVar13 + -1;
              *psVar13 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
              iVar2 = iVar9 + -1;
              bVar1 = -1 < iVar9;
              uVar11 = uVar12;
              iVar9 = iVar2;
            } while (bVar1);
          } while (9 < uVar10);
        }
        uVar11 = (long)psVar7 - (long)psVar13;
        if ((long)uVar11 < 0) {
          uVar11 = uVar11 + 1;
        }
        uVar11 = uVar11 >> 1;
        *(int *)(unaff_x29 + -0xec) = (int)uVar11;
        psVar6 = (short *)FUN_031c8358(unaff_x29 + -0xf0,0);
        psVar7 = psVar6;
        if (-1 < (int)uVar11 + -1) {
          do {
            uVar10 = (int)uVar11 - 1;
            uVar11 = (ulong)uVar10;
            psVar6 = psVar7 + 1;
            *psVar7 = *psVar13;
            psVar7 = psVar6;
            psVar13 = psVar13 + 1;
          } while (0 < (int)uVar10);
        }
        *psVar6 = 0;
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        if (DAT_0722c535 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06dc26f0);
          DAT_0722c535 = '\x01';
        }
        FUN_025eb094(unaff_x29 + -0x120,&uStack_40,0x20,0);
        if ((uVar3 & 0xffff) == 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_0321f874(unaff_x29 + -0x120,unaff_x29 + -0xf0,param_3,param_4,uVar5);
        }
        else {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_0321f2f4(unaff_x29 + -0x120,unaff_x29 + -0xf0,uVar3,iVar8,uVar5,0);
        }
        FUN_025eb0d0(unaff_x29 + -0x120,0);
      }
      goto LAB_032179f8;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
  }
  FUN_032221b0(uVar11,iVar8);
LAB_032179f8:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x68)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


