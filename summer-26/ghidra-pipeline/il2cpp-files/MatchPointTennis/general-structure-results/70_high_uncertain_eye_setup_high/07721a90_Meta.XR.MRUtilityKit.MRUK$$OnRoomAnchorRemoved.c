/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnRoomAnchorRemoved
ENTRY_POINT: 07721a90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUK__OnRoomAnchorRemoved(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *plVar8;
  long unaff_x27;
  long lVar9;
  undefined8 uVar10;
  float unaff_s8;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  long in_stack_00000028;
  
code_r0x07721a90:
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
LAB_07721330:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (unaff_w22 == *(uint *)(plVar8 + 3)) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6b48(*(undefined8 *)PTR_DAT_09f31088,0);
    plVar8 = (long *)*in_stack_00000000;
    if (plVar8 == (long *)0x0) goto LAB_07721330;
  }
  if ((unaff_x27 != 0) &&
     (lVar4 = thunk_FUN_04485110(unaff_x27,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
    uVar10 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar10,0);
  }
  if (*(uint *)(plVar8 + 3) <= unaff_w22) goto LAB_07721f20;
  plVar8[(long)(int)unaff_w22 + 4] = unaff_x27;
  thunk_FUN_044bb4b4(plVar8 + (long)(int)unaff_w22 + 4,unaff_x27);
  lVar4 = *(long *)(unaff_x23 + 0x10);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar4 == 0) goto LAB_07721330;
  uVar1 = *(uint *)(unaff_x23 + 0x18);
  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
    plVar8 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    *plVar8 = unaff_x27;
    thunk_FUN_044bb4b4(plVar8,unaff_x27);
  }
  else {
    FUN_05bade44();
  }
  if (unaff_x27 == 0) goto LAB_07721330;
  *(undefined1 *)(unaff_x27 + 0x4c) = 1;
  if (0 < *(int *)(unaff_x23 + 0x18) + -1) {
    iVar3 = 0;
    do {
      uVar11 = *(undefined4 *)(unaff_x27 + 0x30);
      uVar12 = *(undefined4 *)(unaff_x27 + 0x34);
      uVar13 = *(undefined4 *)(unaff_x27 + 0x38);
      lVar4 = FUN_05badb74();
      if (lVar4 == 0) goto LAB_07721330;
      uVar10 = FUN_07720fc4(uVar11,uVar12,uVar13,*(undefined4 *)(lVar4 + 0x30),
                            *(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x38));
      if ((float)uVar10 < unaff_s8) {
        uVar5 = FUN_05badb74();
        uVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30fe8);
        FUN_0772260c(uVar6,unaff_x27,uVar5);
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        FUN_059011e8(uVar10,&stack0x00000010,uVar6,*(undefined8 *)PTR_DAT_09f31000);
        FUN_063093d4();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_x23 + 0x18) + -1);
  }
  if (*(char *)(unaff_x19 + 0x20) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    in_stack_00000028 = FUN_07a76eac(0,0);
    in_stack_00000028 = in_stack_00000028 / 1000000;
    if (unaff_x20 != 0) {
      lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
      if (lVar4 == 0) goto LAB_07721330;
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07721f20;
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_09f310b8;
      thunk_FUN_044bb4b4();
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
      iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      fStack0000000000000024 = ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) * 100.0) / (float)iVar3;
      uVar10 = FUN_07a5081c((long)&stack0x00000020 + 4,0);
      if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_07721f20;
      *(undefined8 *)(lVar4 + 0x28) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28),uVar10);
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_07721f20;
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x30));
      uStack0000000000000020 = *(undefined4 *)(unaff_x23 + 0x18);
      uVar10 = FUN_07a3b850(&stack0x00000020,0);
      if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_07721f20;
      *(undefined8 *)(lVar4 + 0x38) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x38),uVar10);
      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_07721f20;
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x40));
      uStack0000000000000020 = FUN_063095a0();
      uVar10 = FUN_07a3b850(&stack0x00000020,0);
      if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_07721f20;
      *(undefined8 *)(lVar4 + 0x48) = uVar10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x48),uVar10);
      if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_07721f20;
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x50));
      uVar10 = FUN_07a3c8f0(&stack0x00000028,0);
      if (*(uint *)(lVar4 + 0x18) < 8) goto LAB_07721f20;
      *(undefined8 *)(lVar4 + 0x58) = uVar10;
      thunk_FUN_044bb4b4();
      uVar10 = FUN_078b57fc(lVar4,0);
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
      iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
      bVar2 = (**(code **)(unaff_x20 + 0x18))
                        ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) / (float)iVar3,
                         *(undefined8 *)(unaff_x20 + 0x40),uVar10,*(undefined8 *)(unaff_x20 + 0x28))
      ;
      *(byte *)(unaff_x19 + 0x20) = bVar2 & 1;
    }
    unaff_w22 = unaff_w22 + 1;
    if (1 < *(int *)(unaff_x23 + 0x18)) {
      if (unaff_x24 == 0) goto LAB_07721330;
      iVar3 = FUN_063095a0();
      if (iVar3 == 0) {
        if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        in_stack_00000028 = FUN_07a76eac(0,0);
        in_stack_00000028 = in_stack_00000028 / 1000000;
        if (unaff_x20 != 0) {
          lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
          if (lVar4 == 0) goto LAB_07721330;
          if (*(int *)(lVar4 + 0x18) == 0) {
LAB_07721f20:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_09f310a0;
          thunk_FUN_044bb4b4();
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
          iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          fStack0000000000000024 =
               ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) * 100.0) / (float)iVar3;
          uVar10 = FUN_07a5081c((long)&stack0x00000020 + 4,0);
          if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_07721f20;
          *(undefined8 *)(lVar4 + 0x28) = uVar10;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28),uVar10);
          if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_07721f20;
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x30));
          uStack0000000000000020 = *(undefined4 *)(unaff_x23 + 0x18);
          uVar10 = FUN_07a3b850(&stack0x00000020,0);
          if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_07721f20;
          *(undefined8 *)(lVar4 + 0x38) = uVar10;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x38),uVar10);
          if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_07721f20;
          *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x40));
          uStack0000000000000020 = FUN_063095a0();
          uVar10 = FUN_07a3b850(&stack0x00000020,0);
          if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_07721f20;
          *(undefined8 *)(lVar4 + 0x48) = uVar10;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x48),uVar10);
          if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_07721f20;
          *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
          thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x50));
          uVar10 = FUN_07a3c8f0(&stack0x00000028,0);
          if (*(uint *)(lVar4 + 0x18) < 8) goto LAB_07721f20;
          *(undefined8 *)(lVar4 + 0x58) = uVar10;
          thunk_FUN_044bb4b4();
          uVar10 = FUN_078b57fc(lVar4,0);
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_07721330;
          iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
          bVar2 = (**(code **)(unaff_x20 + 0x18))
                            ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) / (float)iVar3,
                             *(undefined8 *)(unaff_x20 + 0x40),uVar10,
                             *(undefined8 *)(unaff_x20 + 0x28));
          *(byte *)(unaff_x19 + 0x20) = bVar2 & 1;
        }
        unaff_s8 = (float)FUN_07721ffc();
        iVar3 = FUN_063095a0();
        if (iVar3 == 0) goto LAB_07721eb8;
      }
      auVar14 = FUN_06308c30();
      if (auVar14._8_8_ != 0) {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
        do {
          lVar7 = auVar14._8_8_;
          lVar4 = *(long *)(lVar7 + 0x10);
          if (lVar4 == 0) break;
          if (*(char *)(lVar4 + 0x4c) != '\0') {
            lVar9 = *(long *)(lVar7 + 0x18);
            if (lVar9 == 0) break;
            if (*(char *)(lVar9 + 0x4c) != '\0') goto LAB_07721a08;
          }
          iVar3 = FUN_063095a0();
          if (iVar3 == 0) {
            if (*(int *)(*(long *)PTR_DAT_09f283d8 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            in_stack_00000028 = FUN_07a76eac(0,0);
            in_stack_00000028 = in_stack_00000028 / 1000000;
            if (unaff_x20 != 0) {
              lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
              if (lVar4 == 0) break;
              if (*(int *)(lVar4 + 0x18) == 0) goto LAB_07721f20;
              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_09f310b8;
              thunk_FUN_044bb4b4();
              if (*(long *)(unaff_x19 + 0x10) == 0) break;
              iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
              fStack0000000000000024 =
                   ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) * 100.0) / (float)iVar3;
              uVar10 = FUN_07a5081c((long)&stack0x00000020 + 4,0);
              if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_07721f20;
              *(undefined8 *)(lVar4 + 0x28) = uVar10;
              thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28),uVar10);
              if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_07721f20;
              *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_09f31098;
              thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x30));
              uStack0000000000000020 = *(undefined4 *)(unaff_x23 + 0x18);
              uVar10 = FUN_07a3b850(&stack0x00000020,0);
              if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_07721f20;
              *(undefined8 *)(lVar4 + 0x38) = uVar10;
              thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x38),uVar10);
              if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_07721f20;
              *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)PTR_DAT_09f310a8;
              thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x40));
              uStack0000000000000020 = FUN_063095a0();
              uVar10 = FUN_07a3b850(&stack0x00000020,0);
              if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_07721f20;
              *(undefined8 *)(lVar4 + 0x48) = uVar10;
              thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x48),uVar10);
              if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_07721f20;
              *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)PTR_DAT_09f310b0;
              thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x50));
              uVar10 = FUN_07a3c8f0(&stack0x00000028,0);
              if (*(uint *)(lVar4 + 0x18) < 8) goto LAB_07721f20;
              *(undefined8 *)(lVar4 + 0x58) = uVar10;
              thunk_FUN_044bb4b4();
              uVar10 = FUN_078b57fc(lVar4,0);
              if (*(long *)(unaff_x19 + 0x10) == 0) break;
              iVar3 = *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18);
              bVar2 = (**(code **)(unaff_x20 + 0x18))
                                ((float)(iVar3 - *(int *)(unaff_x23 + 0x18)) / (float)iVar3,
                                 *(undefined8 *)(unaff_x20 + 0x40),uVar10,
                                 *(undefined8 *)(unaff_x20 + 0x28));
              *(byte *)(unaff_x19 + 0x20) = bVar2 & 1;
            }
            unaff_s8 = (float)FUN_07721ffc();
            iVar3 = FUN_063095a0();
            if (iVar3 == 0) goto LAB_07721a04;
          }
          auVar14 = FUN_06308c30();
          if (auVar14._8_8_ == 0) break;
        } while( true );
      }
      goto LAB_07721330;
    }
  }
LAB_07721eb8:
  if (unaff_x20 == 0) {
    bVar2 = *(byte *)(unaff_x19 + 0x20);
  }
  else {
    bVar2 = (**(code **)(unaff_x20 + 0x18))
                      (0x42c80000,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)PTR_DAT_09f31090,
                       *(undefined8 *)(unaff_x20 + 0x28));
    bVar2 = bVar2 & 1;
    *(byte *)(unaff_x19 + 0x20) = bVar2;
  }
  return bVar2 == 0;
LAB_07721a04:
  lVar4 = *(long *)(lVar7 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x18);
LAB_07721a08:
  uVar10 = *in_stack_00000000;
  unaff_x27 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30ff8);
  FUN_07722420(auVar14._0_8_ & 0xffffffff,unaff_x27,lVar4,lVar9,unaff_w22,in_stack_00000008._4_4_,
               uVar10);
  FUN_05baf38c();
  FUN_05baf38c();
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_07721330;
  *(undefined1 *)(*(long *)(lVar7 + 0x10) + 0x4c) = 0;
  if (*(long *)(lVar7 + 0x18) == 0) goto LAB_07721330;
  *(undefined1 *)(*(long *)(lVar7 + 0x18) + 0x4c) = 0;
  param_1 = in_stack_00000000;
  goto code_r0x07721a90;
}


