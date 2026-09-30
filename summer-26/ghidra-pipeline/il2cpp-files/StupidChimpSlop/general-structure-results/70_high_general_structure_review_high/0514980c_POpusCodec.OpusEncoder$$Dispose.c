/*
FUNCTION_NAME: POpusCodec.OpusEncoder$$Dispose
ENTRY_POINT: 0514980c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


bool POpusCodec_OpusEncoder__Dispose(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  long lVar9;
  int iVar10;
  long unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  long lVar11;
  int unaff_w23;
  int unaff_w24;
  byte unaff_w25;
  ulong unaff_x26;
  uint unaff_w28;
  undefined1 auVar12 [16];
  undefined2 uStack000000000000000c;
  
  do {
    auVar12 = FUN_04e7a3d8(param_1,unaff_w24,0);
    uVar7 = auVar12._8_8_;
    uVar2 = auVar12._0_4_ & 0xffff;
    uStack000000000000000c = auVar12._0_2_;
    if (uVar2 < 0x2a) {
      if (uVar2 == 0x20) {
        if (*(long *)(unaff_x21 + 0x10) == 0) {
          uStack000000000000000c = 0x20;
          goto LAB_05149dc8;
        }
        bVar1 = *(int *)(unaff_x21 + 0x20) < *(int *)(*(long *)(unaff_x21 + 0x10) + 0x10);
      }
      else if (uVar2 == 0x28) {
LAB_0514985c:
        iVar10 = *(int *)(unaff_x21 + 0x20) - unaff_w23;
        if (iVar10 == 0 || *(int *)(unaff_x21 + 0x20) < unaff_w23) {
          uVar8 = FUN_05149e60();
          if (unaff_x19 == 0) goto LAB_05149dd0;
        }
        else {
          if (*(long *)(unaff_x21 + 0x10) == 0) goto LAB_05149dd0;
          uVar6 = FUN_04e8233c(*(long *)(unaff_x21 + 0x10),unaff_w23,iVar10,0);
          uVar7 = thunk_FUN_04e7e884(uVar6,*(undefined8 *)PTR_DAT_06655200,0);
                    /* try { // try from 05149898 to 05249c93 has its CatchHandler @ 05149898
                       catch() { ... } // from try @ 05149898 with catch @ 05149898
                       catch() { ... } // from try @ 05149d44 with catch @ 05149898
                       catch() { ... } // from try @ 05149f7c with catch @ 05149898
                       catch() { ... } // from try @ 0514a01c with catch @ 05149898
                       catch() { ... } // from try @ 0514a13c with catch @ 05149898
                       catch() { ... } // from try @ 0514a1ac with catch @ 05149898
                       catch() { ... } // from try @ 0514a1e4 with catch @ 05149898 */
          uVar8 = 0;
          if ((uVar7 & 1) == 0) {
            uVar8 = uVar6;
          }
          if (*(int *)(*(long *)System_Action<T1,_T2,_T3>_var + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar8 = FUN_05149dd8(uVar8,unaff_w28 & 1);
          if (unaff_x19 == 0) goto LAB_05149dd0;
          lVar5 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_05149dd0;
          uVar2 = *(uint *)(unaff_x19 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
            thunk_FUN_02dc1ef0();
          }
          else {
            FUN_036a5e08();
          }
          uVar8 = FUN_05149e60();
        }
        lVar5 = *(long *)(unaff_x19 + 0x10);
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05149dd0;
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
          thunk_FUN_02dc1ef0();
          uVar7 = extraout_x1;
        }
        else {
          FUN_036a5e08();
          uVar7 = extraout_x1_00;
        }
        bVar1 = false;
        unaff_w25 = 0;
        unaff_w28 = 0;
        unaff_x26 = 1;
        unaff_w23 = *(int *)(unaff_x21 + 0x20) + 1;
        *(int *)(unaff_x21 + 0x20) = unaff_w23;
      }
      else {
        if (uVar2 == 0x29) goto LAB_0514990c;
LAB_05149914:
        if ((unaff_w20 & 1) != 0) {
          uVar2 = auVar12._0_4_ & 0xffff;
          bVar1 = true;
          if (((uVar2 < 0x3f) && ((1L << (auVar12._0_8_ & 0x3f) & 0x7000004200000000U) != 0)) ||
             (uVar2 == 0x7c)) goto LAB_05149b54;
        }
        if ((unaff_x26 & 1) != 0) {
          FUN_0291cc84(*(undefined8 *)(PTR_DAT_066462a0 + 0x88));
          uVar8 = FUN_04f64700(&stack0x0000000c,0);
          uVar6 = thunk_FUN_02db45e8(PlayFab_MultiplayerModels_CancelServerBackfillTicketResult_var)
          ;
          uVar8 = FUN_04e723e0(uVar6,uVar8,0);
          thunk_FUN_02db45e8(PTR_DAT_0665d8f0);
          uVar6 = thunk_FUN_02d8a638();
          FUN_0508e50c(uVar6,uVar8,0);
          uVar8 = thunk_FUN_02db45e8(PlayFab_MultiplayerModels_CancelServerBackfillTicketRequest_var
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d4ddac(uVar6,uVar8);
        }
        bVar1 = false;
        unaff_x26 = 0;
        *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x21 + 0x20) + 1;
      }
    }
    else {
      if (uVar2 == 0x2e) {
        iVar10 = *(int *)(unaff_x21 + 0x20) - unaff_w23;
        if (iVar10 == 0 || *(int *)(unaff_x21 + 0x20) < unaff_w23) {
LAB_05149b00:
          lVar5 = *(long *)(unaff_x21 + 0x10);
          if (lVar5 != 0) {
            iVar10 = *(int *)(unaff_x21 + 0x20);
            uVar7 = (ulong)(iVar10 + 1U);
            if ((int)(iVar10 + 1U) < *(int *)(lVar5 + 0x10)) {
              sVar4 = FUN_04e7a3d8(lVar5,uVar7,0);
              iVar10 = *(int *)(unaff_x21 + 0x20);
              uVar7 = extraout_x1_01;
              if (sVar4 == 0x2e) {
                iVar10 = iVar10 + 1;
                unaff_w28 = 1;
                *(int *)(unaff_x21 + 0x20) = iVar10;
              }
            }
            unaff_w23 = iVar10 + 1;
            bVar1 = false;
            unaff_x26 = 0;
            *(int *)(unaff_x21 + 0x20) = unaff_w23;
            unaff_w25 = 1;
            goto LAB_05149b54;
          }
        }
        else if (*(long *)(unaff_x21 + 0x10) != 0) {
          uVar6 = FUN_04e8233c(*(long *)(unaff_x21 + 0x10),unaff_w23,iVar10,0);
          uVar7 = thunk_FUN_04e7e884(uVar6,*(undefined8 *)PTR_DAT_06655200,0);
          uVar8 = 0;
          if ((uVar7 & 1) == 0) {
            uVar8 = uVar6;
          }
          if (*(int *)(*(long *)System_Action<T1,_T2,_T3>_var + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar8 = FUN_05149dd8(uVar8,unaff_w28 & 1);
          if (unaff_x19 != 0) {
            lVar5 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar2 = *(uint *)(unaff_x19 + 0x18);
              if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                thunk_FUN_02dc1ef0();
              }
              else {
                FUN_036a5e08();
              }
              unaff_w28 = 0;
              goto LAB_05149b00;
            }
          }
        }
        uStack000000000000000c = 0x2e;
        goto LAB_05149dc8;
      }
      if (uVar2 != 0x5d) {
        if (uVar2 != 0x5b) goto LAB_05149914;
        goto LAB_0514985c;
      }
LAB_0514990c:
      bVar1 = true;
    }
LAB_05149b54:
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
LAB_05149dd0:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    unaff_w24 = *(int *)(unaff_x21 + 0x20);
    iVar10 = *(int *)(param_1 + 0x10);
    if (iVar10 <= unaff_w24) {
      bVar1 = true;
    }
  } while (!bVar1);
  iVar3 = unaff_w24 - unaff_w23;
  if (iVar3 == 0 || unaff_w24 < unaff_w23) {
    if ((unaff_w25 & (unaff_w24 == iVar10 | unaff_w20) & 1) != 0) {
      thunk_FUN_02db45e8(PTR_DAT_0665d8f0,uVar7,iVar3);
      uVar8 = thunk_FUN_02d8a638();
      uVar6 = thunk_FUN_02db45e8(PlayFab_MultiplayerModels_CancelMatchmakingTicketResult_var);
      FUN_0508e50c(uVar8,uVar6,0);
      uVar6 = thunk_FUN_02db45e8(PlayFab_MultiplayerModels_CancelServerBackfillTicketRequest_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar8,uVar6);
    }
LAB_05149d18:
    return unaff_w24 == iVar10;
  }
  lVar5 = FUN_04e8233c(param_1,unaff_w23,iVar3,0);
  lVar11 = *(long *)PTR_DAT_066508f8;
  lVar9 = *(long *)(lVar11 + 0x38);
  if (lVar9 == 0) {
    FUN_02d87268(lVar11);
    lVar9 = *(long *)(lVar11 + 0x38);
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02d8720c();
  }
  if (lVar5 != 0) {
    uVar6 = FUN_04e84d48(lVar5,**(undefined8 **)(lVar9 + 0xb8),0);
    uVar7 = thunk_FUN_04e7e884(uVar6,*(undefined8 *)PTR_DAT_06655200,0);
    uVar8 = 0;
    if ((uVar7 & 1) == 0) {
      uVar8 = uVar6;
    }
    if (*(int *)(*(long *)System_Action<T1,_T2,_T3>_var + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar8 = FUN_05149dd8(uVar8,unaff_w28 & 1);
    if (unaff_x19 != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
          thunk_FUN_02dc1ef0();
        }
        else {
          FUN_036a5e08();
        }
        goto LAB_05149d18;
      }
    }
  }
LAB_05149dc8:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


