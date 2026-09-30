/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown$$Setup
ENTRY_POINT: 076e9e80
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__Setup(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  int iVar16;
  long unaff_x19;
  int iVar17;
  undefined8 unaff_x20;
  int iVar18;
  long unaff_x21;
  uint uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  int iStack000000000000000c;
  
  FUN_04447ba8(PTR_DAT_09f2f400);
  FUN_04447ba8(PTR_DAT_09f2ef60);
  FUN_04447ba8(PTR_DAT_09f1e988);
  FUN_04447ba8(PTR_DAT_09f2f408);
  FUN_04447ba8(PTR_DAT_09f1e990);
  FUN_04447ba8(PTR_DAT_09f2ef68);
  FUN_04447ba8(PTR_DAT_09f2f410);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f1e7d0);
  *(undefined1 *)(unaff_x21 + 0xea4) = 1;
  iStack000000000000000c = 0;
  if (*(char *)(unaff_x19 + 0x54) == '\0') {
    return;
  }
  puVar4 = PTR_DAT_09f2f408;
  if (*(long *)(unaff_x19 + 0x118) == 0) goto LAB_076ea468;
  uVar5 = FUN_0980c424(*(long *)(unaff_x19 + 0x118),0);
  *(undefined4 *)(unaff_x19 + 0x294) = uVar5;
  uVar6 = FUN_078b33f8();
  if ((uVar6 & 1) == 0) {
LAB_076e9fdc:
    uVar19 = 0;
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x280) = unaff_x20;
    thunk_FUN_044bb4b4(unaff_x19 + 0x280);
    lVar13 = *(long *)(unaff_x19 + 0x270);
    puVar4 = PTR_DAT_09f2f408;
    if (lVar13 == 0) goto LAB_076ea468;
    iVar7 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar7) {
      FUN_07a61000(*(undefined8 *)(lVar13 + 0x10),0,iVar7,0);
    }
    lVar13 = *(long *)(unaff_x19 + 0x278);
    puVar4 = PTR_DAT_09f2f408;
    if (lVar13 == 0) goto LAB_076ea468;
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar20 = *(undefined8 *)(unaff_x19 + 0x288);
    if (*(int *)(*(long *)PTR_DAT_09f259c8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_076e1e08();
    uVar9 = FUN_078b33f8(uVar20,*(undefined8 *)(unaff_x19 + 0x288),0);
    if (((uVar9 & 1) == 0) && (iStack000000000000000c == *(int *)(unaff_x19 + 0x290)))
    goto LAB_076e9fdc;
    uVar19 = 1;
    *(int *)(unaff_x19 + 0x290) = iStack000000000000000c;
  }
  puVar4 = PTR_DAT_09f2f408;
  if (*(long *)(unaff_x19 + 0x118) != 0) {
    iVar7 = FUN_0980c424(*(long *)(unaff_x19 + 0x118),0);
    puVar3 = PTR_DAT_09f1e990;
    lVar13 = *(long *)(unaff_x19 + 0x278);
    puVar4 = PTR_DAT_09f2f408;
    if (lVar13 != 0) {
      iVar17 = 0;
      do {
        if ((*(int *)(lVar13 + 0x18) <= iVar17) ||
           (iVar8 = FUN_05b0452c(lVar13,iVar17,*(undefined8 *)puVar3), iVar7 <= iVar8)) {
          if (*(int *)(unaff_x19 + 0x298) == iVar17) {
            if ((uVar6 & uVar19) != 1) {
              return;
            }
          }
          else {
            *(int *)(unaff_x19 + 0x298) = iVar17;
          }
          puVar4 = PTR_DAT_09f2f408;
          if (*(long *)(unaff_x19 + 0x270) == 0) break;
          if (*(int *)(*(long *)(unaff_x19 + 0x270) + 0x18) == 0) {
            FUN_076ebcd4();
            return;
          }
          if ((*(long *)(unaff_x19 + 0x110) == 0) ||
             (lVar13 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), puVar4 = PTR_DAT_09f2f408,
             lVar13 == 0)) break;
          uVar9 = FUN_0952a518(lVar13,0);
          if ((uVar9 & 1) == 0) {
            puVar4 = PTR_DAT_09f2f408;
            if ((*(long *)(unaff_x19 + 0x110) == 0) ||
               (lVar13 = FUN_095259a0(*(long *)(unaff_x19 + 0x110),0), puVar4 = PTR_DAT_09f2f408,
               lVar13 == 0)) break;
            FUN_0952a454(lVar13,1,0);
          }
          puVar3 = PTR_DAT_09f2ef68;
          puVar4 = PTR_DAT_09f2f408;
          if ((*(long *)(unaff_x19 + 0x260) != 0) && (*(long *)(unaff_x19 + 0x270) != 0)) {
            iVar7 = *(int *)(*(long *)(unaff_x19 + 0x270) + 0x18);
            iVar8 = *(int *)(unaff_x19 + 0x268);
            if (iVar7 < 1) goto joined_r0x076ea3f0;
            iVar2 = *(int *)(*(long *)(unaff_x19 + 0x260) + 0x18);
            iVar18 = 0;
            goto LAB_076ea0f0;
          }
          break;
        }
        lVar13 = *(long *)(unaff_x19 + 0x278);
        iVar17 = iVar17 + 1;
        puVar4 = PTR_DAT_09f2f408;
      } while (lVar13 != 0);
    }
  }
LAB_076ea468:
  PTR_DAT_09f2f408 = puVar4;
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_076ea0f0:
  do {
    if (iVar8 <= iVar18) {
      lVar13 = *(long *)(unaff_x19 + 0x260);
      if (iVar18 < iVar2) {
        puVar4 = PTR_DAT_09f2f408;
        if (((lVar13 == 0) ||
            (lVar13 = FUN_05badb74(lVar13,iVar18,*(undefined8 *)PTR_DAT_09f2f408),
            puVar4 = PTR_DAT_09f2f408, lVar13 == 0)) ||
           (lVar13 = FUN_095259a0(lVar13,0), puVar4 = PTR_DAT_09f2f408, lVar13 == 0))
        goto LAB_076ea468;
        FUN_0952a454(lVar13,1,0);
      }
      else {
        uVar20 = *(undefined8 *)(unaff_x19 + 0x70);
        uVar22 = *(undefined8 *)(unaff_x19 + 0x110);
        if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar20 = FUN_04eb2bcc(uVar20,uVar22,0,*(undefined8 *)PTR_DAT_09f2f410);
        puVar4 = PTR_DAT_09f2f408;
        if (lVar13 == 0) goto LAB_076ea468;
        lVar10 = *(long *)(lVar13 + 0x10);
        lVar23 = *(long *)PTR_DAT_09f2f3f8;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        puVar4 = PTR_DAT_09f2f408;
        if (lVar10 == 0) goto LAB_076ea468;
        uVar6 = *(uint *)(lVar13 + 0x18);
        if (uVar6 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20) = uVar20;
          thunk_FUN_044bb4b4();
        }
        else {
          FUN_05bade44(lVar13,uVar20,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
      *(int *)(unaff_x19 + 0x268) = *(int *)(unaff_x19 + 0x268) + 1;
    }
    puVar4 = PTR_DAT_09f2f408;
    if (*(long *)(unaff_x19 + 0x270) == 0) goto LAB_076ea468;
    lVar13 = FUN_05badb74(*(long *)(unaff_x19 + 0x270),iVar18,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_09f2f408;
    if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_076ea468;
    FUN_078c264c(*(long *)(unaff_x19 + 0x2d8),0,0);
    lVar10 = *(long *)(unaff_x19 + 0x2d8);
    puVar4 = PTR_DAT_09f2f408;
    if (iVar17 == 0) {
      if (lVar10 == 0) goto LAB_076ea468;
      lVar10 = FUN_078bb7b4(lVar10,*(undefined8 *)(unaff_x19 + 0xe8),0);
      puVar4 = PTR_DAT_09f2f408;
      if (((*(long *)(unaff_x19 + 0x270) == 0) ||
          (lVar23 = FUN_05badb74(*(long *)(unaff_x19 + 0x270),iVar18,*(undefined8 *)puVar3),
          puVar4 = PTR_DAT_09f2f408, lVar23 == 0)) ||
         ((lVar10 == 0 ||
          ((lVar10 = FUN_078bb7b4(lVar10,*(undefined8 *)(lVar23 + 0x28),0),
           puVar4 = PTR_DAT_09f2f408, lVar10 == 0 ||
           (FUN_078bb7b4(lVar10,*(undefined8 *)(unaff_x19 + 0xf0),0), puVar4 = PTR_DAT_09f2f408,
           lVar13 == 0)))))) goto LAB_076ea468;
    }
    else {
      if ((lVar13 == 0) || (lVar10 == 0)) goto LAB_076ea468;
      FUN_078bb7b4(lVar10,*(undefined8 *)(lVar13 + 0x28),0);
    }
    puVar4 = PTR_DAT_09f2f408;
    if (*(long *)(lVar13 + 0x38) == 0) goto LAB_076ea468;
    if (*(long *)(*(long *)(lVar13 + 0x38) + 0x18) != 0) {
      if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_076ea468;
      FUN_078bb7b4(*(long *)(unaff_x19 + 0x2d8),*(undefined8 *)PTR_DAT_09f1e7d0,0);
      lVar10 = *(long *)(lVar13 + 0x38);
      puVar4 = PTR_DAT_09f2f408;
      if (lVar10 == 0) goto LAB_076ea468;
      iVar16 = (int)*(ulong *)(lVar10 + 0x18);
      iVar8 = iVar16;
      if (iVar17 <= iVar16) {
        iVar8 = iVar17;
      }
      if (0 < iVar16) {
        uVar9 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        iVar1 = iVar17;
        if (iVar16 <= iVar17) {
          iVar1 = iVar16;
        }
        uVar21 = 0;
        lVar23 = 0x20;
        do {
          lVar11 = *(long *)(unaff_x19 + 0x2d8);
          puVar4 = PTR_DAT_09f2f408;
          if (iVar1 - 1 == uVar21) {
            if (lVar11 == 0) goto LAB_076ea468;
            lVar10 = FUN_078bb7b4(lVar11,*(undefined8 *)(unaff_x19 + 0xe8),0);
            lVar11 = *(long *)(lVar13 + 0x38);
            puVar4 = PTR_DAT_09f2f408;
            if (lVar11 == 0) goto LAB_076ea468;
            if ((ulong)*(uint *)(lVar11 + 0x18) <= (ulong)(iVar8 - 1)) {
LAB_076ea46c:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            if ((lVar10 == 0) ||
               (lVar11 = FUN_078bb7b4(lVar10,*(undefined8 *)(lVar11 + (ulong)(iVar8 - 1) * 8 + 0x20)
                                      ,0), puVar14 = (undefined8 *)(unaff_x19 + 0xf0),
               puVar4 = PTR_DAT_09f2f408, lVar11 == 0)) goto LAB_076ea468;
          }
          else {
            if (uVar9 <= uVar21) goto LAB_076ea46c;
            if (lVar11 == 0) goto LAB_076ea468;
            puVar14 = (undefined8 *)(lVar10 + lVar23);
          }
          FUN_078bb7b4(lVar11,*puVar14,0);
          lVar10 = *(long *)(lVar13 + 0x38);
          puVar4 = PTR_DAT_09f2f408;
          if (lVar10 == 0) goto LAB_076ea468;
          uVar9 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar21 = uVar21 + 1;
          lVar23 = lVar23 + 8;
        } while ((long)uVar21 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
    }
    puVar4 = PTR_DAT_09f2f408;
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_076ea468;
    plVar12 = (long *)FUN_05badb74(*(long *)(unaff_x19 + 0x260),iVar18,
                                   *(undefined8 *)PTR_DAT_09f2f408);
    plVar15 = *(long **)(unaff_x19 + 0x2d8);
    puVar4 = PTR_DAT_09f2f408;
    if ((plVar15 == (long *)0x0) ||
       (uVar20 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170)),
       puVar4 = PTR_DAT_09f2f408, plVar12 == (long *)0x0)) goto LAB_076ea468;
    (**(code **)(*plVar12 + 0x5e8))(plVar12,uVar20,*(undefined8 *)(*plVar12 + 0x5f0));
    iVar8 = *(int *)(unaff_x19 + 0x268);
    iVar18 = iVar18 + 1;
    puVar4 = PTR_DAT_09f2f408;
  } while (iVar18 != iVar7);
joined_r0x076ea3f0:
  while( true ) {
    puVar3 = PTR_DAT_09f2f408;
    iVar8 = iVar8 + -1;
    if (iVar8 < iVar7) {
      PTR_DAT_09f2f408 = puVar4;
      *(int *)(unaff_x19 + 0x268) = iVar7;
      return;
    }
    if (((*(long *)(unaff_x19 + 0x260) == 0) ||
        (uVar20 = *(undefined8 *)PTR_DAT_09f2f408, PTR_DAT_09f2f408 = puVar4,
        lVar13 = FUN_05badb74(*(long *)(unaff_x19 + 0x260),iVar8,uVar20), puVar4 = PTR_DAT_09f2f408,
        lVar13 == 0)) || (lVar13 = FUN_095259a0(lVar13,0), puVar4 = PTR_DAT_09f2f408, lVar13 == 0))
    break;
    FUN_0952a454(lVar13,0,0);
    puVar4 = PTR_DAT_09f2f408;
    PTR_DAT_09f2f408 = puVar3;
  }
  goto LAB_076ea468;
}


