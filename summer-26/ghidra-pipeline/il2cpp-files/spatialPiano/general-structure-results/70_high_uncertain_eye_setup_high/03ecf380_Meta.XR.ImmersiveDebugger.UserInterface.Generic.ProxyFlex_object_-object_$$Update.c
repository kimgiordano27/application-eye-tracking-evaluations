/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$Update
ENTRY_POINT: 03ecf380
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__Update(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar4 = FUN_02f41e9c();
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_04141e18();
  if (unaff_x20 == (long *)0x0) {
LAB_03ecfb04:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_0636f1e4();
  plVar5 = (long *)FUN_041411ac();
  if (plVar5 == (long *)0x0) goto LAB_03ecfb04;
  (**(code **)(*plVar5 + 0x248))(plVar5,0,*(undefined8 *)(*plVar5 + 0x250));
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0)
  {
    FUN_02f41e9c();
  }
  FUN_0624193c();
  lVar13 = unaff_x20[100];
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  if (lVar13 == 0) goto LAB_03ecfb04;
  FUN_0624193c(lVar13,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),0);
  lVar4 = FUN_041411ac();
  lVar13 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = FUN_02f41e9c(lVar13);
  }
  if (lVar4 == 0) goto LAB_03ecfb04;
  FUN_0624193c(lVar4,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10),0);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x6d) = 1;
  if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar4 = thunk_FUN_02f45270();
  FUN_03abf108(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  unaff_x20[0x6c] = lVar4;
  lVar13 = (**(code **)(*unaff_x20 + 0xae8))();
  lVar4 = lVar13;
  if (in_stack_00000020._4_4_ < 2) {
    bVar2 = false;
    iVar11 = 1;
  }
  else {
    if (lVar13 == 0) goto LAB_03ecfb04;
    iVar11 = 0;
    if (in_stack_00000020._4_4_ != 0) {
      iVar11 = *(int *)(lVar13 + 0x18) / in_stack_00000020._4_4_;
    }
    if (iVar11 < 2) {
      if (iVar11 != 1) goto LAB_03ecfac0;
      bVar2 = false;
    }
    else {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8) + 0x135) & 1) ==
          0) {
        FUN_02f41e9c();
      }
      lVar4 = FUN_0624193c();
      bVar2 = true;
    }
  }
  iVar17 = 0;
  iVar14 = 0;
  do {
    if (bVar2) {
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9cb8);
      FUN_0623f858(lVar6,0);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      if (lVar6 == 0) goto LAB_03ecfb04;
      lVar4 = FUN_0624193c(lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),0);
    }
    else {
      lVar6 = 0;
    }
    if (iVar14 * in_stack_00000020._4_4_ <
        iVar14 * in_stack_00000020._4_4_ + in_stack_00000020._4_4_) {
      iVar16 = 0;
      bVar3 = true;
      puVar12 = (undefined8 *)(lVar13 + 0x20 + (long)iVar17 * 0x20);
      do {
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50) + 0x135) &
            1) == 0) {
          FUN_02f41e9c();
        }
        lVar4 = thunk_FUN_02f45270();
        FUN_036bee54(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
        if ((lVar4 == 0) || (*(long **)(lVar4 + 0x38) = unaff_x20, lVar13 == 0)) goto LAB_03ecfb04;
        if (*(uint *)(lVar13 + 0x18) <= (uint)(iVar17 + iVar16)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar18 = *puVar12;
        uVar9 = puVar12[3];
        uVar8 = puVar12[2];
        *(undefined8 *)(lVar4 + 0x18) = puVar12[1];
        *(undefined8 *)(lVar4 + 0x10) = uVar18;
        *(undefined8 *)(lVar4 + 0x28) = uVar9;
        *(undefined8 *)(lVar4 + 0x20) = uVar8;
        lVar7 = FUN_0318d488(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
        if (lVar7 == 0) goto LAB_03ecfb04;
        FUN_0623f514(lVar7,*(undefined8 *)(lVar4 + 0x18),0);
        *(long *)(lVar4 + 0x30) = lVar7;
        FUN_0636f1e4(lVar7,1,0);
        lVar15 = *(long *)(lVar4 + 0x30);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        if (lVar15 == 0) goto LAB_03ecfb04;
        FUN_0624193c(lVar15,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30),0);
        if (bVar3) {
          lVar15 = *(long *)(lVar4 + 0x30);
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02f41e9c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02f41e9c();
          }
          if (lVar15 == 0) goto LAB_03ecfb04;
          FUN_0624193c(lVar15,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38),0);
        }
        if (*(long *)(lVar4 + 0x30) == 0) goto LAB_03ecfb04;
        FUN_03fdf1ec(*(long *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
        lVar7 = *(long *)(lVar4 + 0x30);
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90) + 0x135) &
            1) == 0) {
          FUN_02f41e9c();
        }
        uVar8 = thunk_FUN_02f45270();
        lVar15 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        FUN_04dff44c(uVar8,lVar4,*(undefined8 *)(lVar15 + 0x88),*(undefined8 *)(lVar15 + 0x98));
        if (lVar7 == 0) goto LAB_03ecfb04;
        FUN_03fdedec(lVar7,uVar8,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
        uVar8 = *(undefined8 *)(lVar4 + 0x30);
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0) + 0x135) &
            1) == 0) {
          FUN_02f41e9c();
        }
        uVar9 = thunk_FUN_02f45270();
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        FUN_04d8cf5c(uVar9,lVar4,*(undefined8 *)(lVar7 + 0xa8),*(undefined8 *)(lVar7 + 0xb8));
        FUN_034367bc(uVar8,uVar9,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
        lVar7 = unaff_x20[0x6c];
        if (lVar7 == 0) goto LAB_03ecfb04;
        uVar8 = *(undefined8 *)(lVar4 + 0x30);
        lVar15 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_03ecfb04;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          if (!bVar2) goto LAB_03ecf90c;
LAB_03ecf97c:
          if (lVar6 == 0) goto LAB_03ecfb04;
          lVar4 = FUN_06247510(lVar6,*(undefined8 *)(lVar4 + 0x30),0);
        }
        else {
          FUN_03abf904(lVar7,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          if (bVar2) goto LAB_03ecf97c;
LAB_03ecf90c:
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_02f41e9c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar7 = FUN_041411ac();
          if (lVar7 == 0) goto LAB_03ecfb04;
          in_stack_00000028 = *(undefined8 *)(lVar7 + 0x260);
          lVar4 = FUN_0624b7dc(&stack0x00000028,*(undefined8 *)(lVar4 + 0x30),0);
        }
        iVar16 = iVar16 + 1;
        bVar3 = false;
        puVar12 = puVar12 + 4;
      } while (in_stack_00000020._4_4_ != iVar16);
    }
    iVar16 = in_stack_00000020._4_4_ + -3;
    if (in_stack_00000020._4_4_ < 3 && 0 < 3 - in_stack_00000020._4_4_) {
      do {
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        if (bVar2) {
          uVar8 = FUN_03ecf238(lVar4,*(undefined8 *)(lVar7 + 0xd8));
          if (lVar6 == 0) goto LAB_03ecfb04;
          lVar4 = FUN_06247510(lVar6,uVar8,0);
        }
        else {
          lVar4 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar4 = FUN_041411ac();
          if (lVar4 == 0) goto LAB_03ecfb04;
          in_stack_00000028 = *(undefined8 *)(lVar4 + 0x260);
          uVar8 = FUN_03ecf238(lVar4,*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
          lVar4 = FUN_0624b7dc(&stack0x00000028,uVar8,0);
        }
        bVar3 = iVar16 != -1;
        iVar16 = iVar16 + 1;
      } while (bVar3);
    }
    if (bVar2) {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar4 = FUN_041411ac();
      if (lVar4 == 0) goto LAB_03ecfb04;
      in_stack_00000028 = *(undefined8 *)(lVar4 + 0x260);
      lVar4 = FUN_0624b7dc(&stack0x00000028,lVar6,0);
    }
    iVar14 = iVar14 + 1;
    iVar17 = iVar17 + in_stack_00000020._4_4_;
  } while (iVar14 != iVar11);
LAB_03ecfac0:
  FUN_03ecfb0c();
  return;
}


