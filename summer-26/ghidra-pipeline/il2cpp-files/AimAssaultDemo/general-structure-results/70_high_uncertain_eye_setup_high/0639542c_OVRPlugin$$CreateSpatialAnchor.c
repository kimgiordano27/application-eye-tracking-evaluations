/*
FUNCTION_NAME: OVRPlugin$$CreateSpatialAnchor
ENTRY_POINT: 0639542c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateSpatialAnchor(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  undefined2 uVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 06395408 with catch @ 0639542c */
  lVar5 = *(long *)(unaff_x19 + 0x10);
                    /* catch() { ... } // from try @ 06395404 with catch @ 06395430 */
  iVar9 = in_w8 + 1;
                    /* catch() { ... } // from try @ 06394f74 with catch @ 06395434 */
  *(int *)(unaff_x19 + 0x20) = iVar9;
                    /* catch() { ... } // from try @ 06394eb0 with catch @ 06395438 */
  if (lVar5 == 0) {
LAB_06395610:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* catch() { ... } // from try @ 0639521c with catch @ 0639543c */
                    /* catch() { ... } // from try @ 063952cc with catch @ 06395440 */
                    /* catch() { ... } // from try @ 06394fb4 with catch @ 06395444 */
  if (iVar9 < *(int *)(lVar5 + 0x10)) {
    do {
                    /* catch() { ... } // from try @ 06394ea0 with catch @ 06395448 */
                    /* catch() { ... } // from try @ 063951b8 with catch @ 0639544c */
      auVar12 = FUN_060bb390(lVar5,iVar9,0);
      uVar11 = auVar12._0_2_;
                    /* catch() { ... } // from try @ 06395168 with catch @ 06395450 */
      uVar1 = auVar12._0_4_ & 0xffff;
                    /* catch() { ... } // from try @ 06395138 with catch @ 06395454 */
                    /* catch() { ... } // from try @ 06395080 with catch @ 06395458 */
                    /* catch() { ... } // from try @ 06394fdc with catch @ 0639545c */
      if (uVar1 == 0x5c) {
                    /* catch() { ... } // from try @ 06395400 with catch @ 06395460 */
        lVar5 = *(long *)(unaff_x19 + 0x10);
        auVar12._8_8_ = auVar12._8_8_;
        auVar12._0_8_ = lVar5;
                    /* catch() { ... } // from try @ 06395200 with catch @ 06395464 */
        if (lVar5 == 0) goto LAB_06395604;
                    /* catch() { ... } // from try @ 063953fc with catch @ 06395468 */
                    /* catch() { ... } // from try @ 063953f8 with catch @ 0639546c */
        iVar2 = *(int *)(lVar5 + 0x10);
                    /* catch() { ... } // from try @ 063953f4 with catch @ 06395470 */
        iVar9 = *(int *)(unaff_x19 + 0x20) + 1;
        auVar12._8_4_ = iVar9;
        auVar12._12_4_ = 0;
                    /* catch() { ... } // from try @ 063953f0 with catch @ 06395474 */
                    /* catch() { ... } // from try @ 06395068 with catch @ 06395478 */
        *(int *)(unaff_x19 + 0x20) = iVar9;
                    /* catch() { ... } // from try @ 06394ffc with catch @ 0639547c */
        if (iVar2 <= iVar9) goto LAB_063954cc;
                    /* catch() { ... } // from try @ 06394f88 with catch @ 06395480 */
                    /* catch() { ... } // from try @ 06394f78 with catch @ 06395484 */
        uVar6 = FUN_060bb390(lVar5,iVar9,0);
        uVar4 = (uint)uVar6;
        uVar11 = (undefined2)uVar6;
                    /* catch() { ... } // from try @ 06394f50 with catch @ 06395488 */
        uVar1 = uVar4 & 0xffff;
                    /* catch() { ... } // from try @ 063953ec with catch @ 0639548c */
                    /* catch() { ... } // from try @ 063953e8 with catch @ 06395490 */
                    /* catch() { ... } // from try @ 063953e4 with catch @ 06395494 */
        if (uVar1 < 0x5d) {
                    /* catch() { ... } // from try @ 063953e0 with catch @ 06395498 */
                    /* catch() { ... } // from try @ 063953dc with catch @ 0639549c */
          if (uVar1 < 0x28) {
                    /* catch() { ... } // from try @ 063953d8 with catch @ 063954a0 */
                    /* catch() { ... } // from try @ 063953d4 with catch @ 063954a4 */
                    /* catch() { ... } // from try @ 06394e48 with catch @ 063954a8 */
            uVar10 = uVar6 & 0xffffffff;
                    /* catch() { ... } // from try @ 0639538c with catch @ 063954ac */
            if ((uVar4 & 0xffff) != 0x22) {
                    /* catch() { ... } // from try @ 06394e30 with catch @ 063954b0 */
              bVar3 = (uVar4 & 0xffff) == 0x27;
                    /* catch() { ... } // from try @ 0639501c with catch @ 063954b4 */
LAB_0639551c:
              uVar10 = uVar6 & 0xffffffff;
              if (!bVar3) {
LAB_06395614:
                in_stack_00000008._4_2_ = uVar11;
                FUN_031ae340(*(undefined8 *)(PTR_DAT_07d86548 + 0x88));
                uVar7 = FUN_0619e108((long)&stack0x00000008 + 4,0);
                uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6730);
                uVar7 = System_Convert__ToInt32(uVar8,uVar7,0);
                thunk_FUN_037a15ac(PTR_DAT_07d967c8);
                uVar8 = thunk_FUN_037788cc();
                FUN_062d6d20(uVar8,uVar7,0);
                uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6728);
                    /* WARNING: Subroutine does not return */
                FUN_0373b680(uVar8,uVar7);
              }
            }
          }
          else {
            uVar10 = uVar6 & 0xffffffff;
            if ((uVar4 & 0xffff) != 0x2f) {
              bVar3 = (uVar4 & 0xffff) == 0x5c;
              goto LAB_0639551c;
            }
          }
        }
        else {
                    /* catch() { ... } // from try @ 06394df8 with catch @ 063954e4 */
          if (uVar1 < 0x67) {
                    /* catch() { ... } // from try @ 063952a0 with catch @ 063954f0 */
                    /* catch() { ... } // from try @ 063950bc with catch @ 063954f4 */
            if ((uVar4 & 0xffff) == 0x62) {
              uVar10 = 8;
            }
            else {
              if ((uVar4 & 0xffff) != 0x66) goto LAB_06395614;
              uVar10 = 0xc;
            }
          }
          else {
            uVar4 = uVar4 & 0xffff;
            if (uVar4 == 0x6e) {
              uVar10 = 10;
            }
            else if (uVar4 == 0x72) {
              uVar10 = 0xd;
            }
            else {
              if (uVar4 != 0x74) goto LAB_06395614;
              uVar10 = 9;
            }
          }
        }
        auVar12._8_8_ = uVar10;
        auVar12._0_8_ = uVar6;
        if (unaff_x20 == (long *)0x0) goto LAB_06395604;
        FUN_060cef34();
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
      }
      else {
                    /* catch() { ... } // from try @ 063951d8 with catch @ 063954b8 */
                    /* catch() { ... } // from try @ 0639518c with catch @ 063954bc */
                    /* catch() { ... } // from try @ 06395110 with catch @ 063954c0 */
                    /* catch() { ... } // from try @ 063950ec with catch @ 063954c4 */
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
                    /* catch() { ... } // from try @ 06394f30 with catch @ 063954c8 */
        if (uVar1 == 0x27) {
          in_stack_00000008._4_2_ = uVar11;
          if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x06395600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x20 + 0x168))();
            return;
          }
          goto LAB_06395610;
        }
LAB_063954cc:
                    /* catch() { ... } // from try @ 06394f10 with catch @ 063954cc */
        if (unaff_x20 == (long *)0x0) {
LAB_06395604:
          in_stack_00000008._4_2_ = uVar11;
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4(auVar12._0_8_,auVar12._8_8_);
        }
                    /* catch() { ... } // from try @ 06394ef0 with catch @ 063954d0 */
                    /* catch() { ... } // from try @ 06394ed0 with catch @ 063954d4 */
                    /* catch() { ... } // from try @ 06394e7c with catch @ 063954d8 */
                    /* catch() { ... } // from try @ 06394e58 with catch @ 063954dc */
        FUN_060cef34();
                    /* catch() { ... } // from try @ 06394e2c with catch @ 063954e0
                       catch() { ... } // from try @ 06394e44 with catch @ 063954e0
                       catch() { ... } // from try @ 06395064 with catch @ 063954e0
                       catch() { ... } // from try @ 06395294 with catch @ 063954e0
                       catch() { ... } // from try @ 06395344 with catch @ 063954e0
                       catch() { ... } // from try @ 0639537c with catch @ 063954e0 */
      }
      lVar5 = *(long *)(unaff_x19 + 0x10);
      in_stack_00000008._4_2_ = uVar11;
      if (lVar5 == 0) goto LAB_06395610;
      iVar9 = *(int *)(unaff_x19 + 0x20);
    } while (iVar9 < *(int *)(lVar5 + 0x10));
  }
  thunk_FUN_037a15ac(PTR_DAT_07d967c8);
  uVar7 = thunk_FUN_037788cc();
  uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6720);
  FUN_062d6d20(uVar7,uVar8,0);
  uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6728);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar7,uVar8);
}


