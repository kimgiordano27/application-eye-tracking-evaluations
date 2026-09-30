/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 03217354
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_chromatic(long param_1,undefined1 param_2 [16],long param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  int unaff_w19;
  undefined8 uVar10;
  int iVar11;
  ulong unaff_x23;
  ulong uVar12;
  long unaff_x25;
  short *psVar13;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  undefined8 uVar14;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar14 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  *(undefined8 *)(unaff_x25 + 0x72) = uVar14;
  *(undefined8 *)(unaff_x25 + 0x6a) = uVar10;
  *(undefined8 *)(unaff_x29 + -0x98) = uVar14;
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar10;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar14;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar10;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar14;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar10;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar14;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
  *(undefined8 *)(unaff_x29 + -0xd8) = uVar14;
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
  *(undefined8 *)(unaff_x29 + -200) = uVar14;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar10;
  *(undefined8 *)(unaff_x29 + -0xe8) = uVar14;
  *(undefined8 *)(unaff_x29 + -0xf0) = uVar10;
  *(undefined8 *)(param_1 + -0xf8) = uVar14;
  *(undefined8 *)(param_1 + -0x100) = uVar10;
  iVar11 = (int)unaff_x23;
  if ((unaff_w19 == 0) && (-1 < iVar11)) {
    if (*(int *)(param_3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    iVar9 = -1;
  }
  else {
    if (*(int *)(param_3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar4 = FUN_0321ef9c();
    lVar5 = FUN_040f75b4();
    iVar9 = *(int *)(unaff_x29 + -0xf4);
    if (((uVar4 & 0xffdf) != 0x44) && ((uVar4 & 0xffdf) != 0x47 || 0 < iVar9)) {
      if ((uVar4 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_032224ec(unaff_x23 & 0xffffffff,uVar4 - 0x21,iVar9);
      }
      else {
        lVar6 = *unaff_x27;
        *(undefined8 *)(unaff_x25 + 0x72) = 0;
        *(undefined8 *)(unaff_x25 + 0x6a) = 0;
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
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        if (cRam0000000007237eb1 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e3f9a0);
          cRam0000000007237eb1 = '\x01';
        }
        *(undefined4 *)(unaff_x29 + -0xf0) = 10;
        if (iVar11 < 0) {
          FUN_031c834c(unaff_x29 + -0xf0,1,0);
          unaff_x23 = (ulong)(uint)-iVar11;
        }
        else {
          FUN_031c834c(unaff_x29 + -0xf0,0,0);
        }
        lVar6 = FUN_031c8358(unaff_x29 + -0xf0,0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x27);
        }
        psVar8 = (short *)(lVar6 + 0x14);
        psVar13 = psVar8;
        if ((int)unaff_x23 != 0) {
          iVar11 = -2;
          do {
            do {
              uVar3 = (uint)unaff_x23;
              uVar12 = (unaff_x23 & 0xffffffff) / 10;
              psVar13 = psVar13 + -1;
              *psVar13 = (short)unaff_x23 + (short)((unaff_x23 & 0xffffffff) / 10) * -10 + 0x30;
              iVar2 = iVar11 + -1;
              bVar1 = -1 < iVar11;
              unaff_x23 = uVar12;
              iVar11 = iVar2;
            } while (bVar1);
          } while (9 < uVar3);
        }
        uVar12 = (long)psVar8 - (long)psVar13;
        if ((long)uVar12 < 0) {
          uVar12 = uVar12 + 1;
        }
        uVar12 = uVar12 >> 1;
        *(int *)(unaff_x29 + -0xec) = (int)uVar12;
        psVar7 = (short *)FUN_031c8358(unaff_x29 + -0xf0,0);
        psVar8 = psVar7;
        if (-1 < (int)uVar12 + -1) {
          do {
            uVar3 = (int)uVar12 - 1;
            uVar12 = (ulong)uVar3;
            psVar7 = psVar8 + 1;
            *psVar8 = *psVar13;
            psVar8 = psVar7;
            psVar13 = psVar13 + 1;
          } while (0 < (int)uVar3);
        }
        *psVar7 = 0;
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
        if ((uVar4 & 0xffff) == 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_0321f874(unaff_x29 + -0x120,unaff_x29 + -0xf0);
        }
        else {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          FUN_0321f2f4(unaff_x29 + -0x120,unaff_x29 + -0xf0,uVar4,iVar9,lVar5,0);
        }
        FUN_025eb0d0(unaff_x29 + -0x120,0);
      }
      goto LAB_03217438;
    }
    if (iVar11 < 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar10 = *(undefined8 *)(lVar5 + 0x30);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_03222340(unaff_x23 & 0xffffffff,iVar9,uVar10);
      goto LAB_03217438;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
  }
  FUN_032221b0(unaff_x23 & 0xffffffff,iVar9);
LAB_03217438:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x68)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


