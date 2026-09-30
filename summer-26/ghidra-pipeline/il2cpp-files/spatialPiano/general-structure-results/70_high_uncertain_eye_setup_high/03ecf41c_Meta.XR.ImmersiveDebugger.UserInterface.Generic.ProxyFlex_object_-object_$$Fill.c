/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$Fill
ENTRY_POINT: 03ecf41c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__Fill(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((*(ushort *)(*(long *)(param_1 + 8) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  FUN_0624193c();
  lVar12 = unaff_x20[100];
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  if (lVar12 == 0) {
LAB_03ecfb04:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_0624193c(lVar12,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),0);
  lVar4 = FUN_041411ac();
  lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_02f41e9c(lVar12);
  }
  if (lVar4 == 0) goto LAB_03ecfb04;
  FUN_0624193c(lVar4,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x6d) = 1;
  if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar4 = thunk_FUN_02f45270();
  FUN_03abf108(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  unaff_x20[0x6c] = lVar4;
  lVar12 = (**(code **)(*unaff_x20 + 0xae8))();
  lVar4 = lVar12;
  if (in_stack_00000020._4_4_ < 2) {
    bVar2 = false;
    iVar10 = 1;
  }
  else {
    if (lVar12 == 0) goto LAB_03ecfb04;
    iVar10 = 0;
    if (in_stack_00000020._4_4_ != 0) {
      iVar10 = *(int *)(lVar12 + 0x18) / in_stack_00000020._4_4_;
    }
    if (iVar10 < 2) {
      if (iVar10 != 1) goto LAB_03ecfac0;
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
  iVar16 = 0;
  iVar13 = 0;
  do {
    if (bVar2) {
      lVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9cb8);
      FUN_0623f858(lVar5,0);
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
      if (lVar5 == 0) goto LAB_03ecfb04;
      lVar4 = FUN_0624193c(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),0);
    }
    else {
      lVar5 = 0;
    }
    if (iVar13 * in_stack_00000020._4_4_ <
        iVar13 * in_stack_00000020._4_4_ + in_stack_00000020._4_4_) {
      iVar15 = 0;
      bVar3 = true;
      puVar11 = (undefined8 *)(lVar12 + 0x20 + (long)iVar16 * 0x20);
      do {
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50) + 0x135) &
            1) == 0) {
          FUN_02f41e9c();
        }
        lVar4 = thunk_FUN_02f45270();
        FUN_036bee54(lVar4,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
        if ((lVar4 == 0) || (*(long **)(lVar4 + 0x38) = unaff_x20, lVar12 == 0)) goto LAB_03ecfb04;
        if (*(uint *)(lVar12 + 0x18) <= (uint)(iVar16 + iVar15)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar17 = *puVar11;
        uVar8 = puVar11[3];
        uVar7 = puVar11[2];
        *(undefined8 *)(lVar4 + 0x18) = puVar11[1];
        *(undefined8 *)(lVar4 + 0x10) = uVar17;
        *(undefined8 *)(lVar4 + 0x28) = uVar8;
        *(undefined8 *)(lVar4 + 0x20) = uVar7;
        lVar6 = FUN_0318d488(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
        if (lVar6 == 0) goto LAB_03ecfb04;
        FUN_0623f514(lVar6,*(undefined8 *)(lVar4 + 0x18),0);
        *(long *)(lVar4 + 0x30) = lVar6;
        FUN_0636f1e4(lVar6,1,0);
        lVar14 = *(long *)(lVar4 + 0x30);
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c();
        }
        if (lVar14 == 0) goto LAB_03ecfb04;
        FUN_0624193c(lVar14,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30),0);
        if (bVar3) {
          lVar14 = *(long *)(lVar4 + 0x30);
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          if (lVar14 == 0) goto LAB_03ecfb04;
          FUN_0624193c(lVar14,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x38),0);
        }
        if (*(long *)(lVar4 + 0x30) == 0) goto LAB_03ecfb04;
        FUN_03fdf1ec(*(long *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
        lVar6 = *(long *)(lVar4 + 0x30);
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90) + 0x135) &
            1) == 0) {
          FUN_02f41e9c();
        }
        uVar7 = thunk_FUN_02f45270();
        lVar14 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        FUN_04dff44c(uVar7,lVar4,*(undefined8 *)(lVar14 + 0x88),*(undefined8 *)(lVar14 + 0x98));
        if (lVar6 == 0) goto LAB_03ecfb04;
        FUN_03fdedec(lVar6,uVar7,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
        uVar7 = *(undefined8 *)(lVar4 + 0x30);
        if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0) + 0x135) &
            1) == 0) {
          FUN_02f41e9c();
        }
        uVar8 = thunk_FUN_02f45270();
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        FUN_04d8cf5c(uVar8,lVar4,*(undefined8 *)(lVar6 + 0xa8),*(undefined8 *)(lVar6 + 0xb8));
        FUN_034367bc(uVar7,uVar8,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
        lVar6 = unaff_x20[0x6c];
        if (lVar6 == 0) goto LAB_03ecfb04;
        uVar7 = *(undefined8 *)(lVar4 + 0x30);
        lVar14 = *(long *)(lVar6 + 0x10);
        lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_03ecfb04;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          if (!bVar2) goto LAB_03ecf90c;
LAB_03ecf97c:
          if (lVar5 == 0) goto LAB_03ecfb04;
          lVar4 = FUN_06247510(lVar5,*(undefined8 *)(lVar4 + 0x30),0);
        }
        else {
          FUN_03abf904(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
          if (bVar2) goto LAB_03ecf97c;
LAB_03ecf90c:
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02f41e9c();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar6 = FUN_041411ac();
          if (lVar6 == 0) goto LAB_03ecfb04;
          in_stack_00000028 = *(undefined8 *)(lVar6 + 0x260);
          lVar4 = FUN_0624b7dc(&stack0x00000028,*(undefined8 *)(lVar4 + 0x30),0);
        }
        iVar15 = iVar15 + 1;
        bVar3 = false;
        puVar11 = puVar11 + 4;
      } while (in_stack_00000020._4_4_ != iVar15);
    }
    iVar15 = in_stack_00000020._4_4_ + -3;
    if (in_stack_00000020._4_4_ < 3 && 0 < 3 - in_stack_00000020._4_4_) {
      do {
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        if (bVar2) {
          uVar7 = FUN_03ecf238(lVar4,*(undefined8 *)(lVar6 + 0xd8));
          if (lVar5 == 0) goto LAB_03ecfb04;
          lVar4 = FUN_06247510(lVar5,uVar7,0);
        }
        else {
          lVar4 = *(long *)(lVar6 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02f41e9c();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar4 = FUN_041411ac();
          if (lVar4 == 0) goto LAB_03ecfb04;
          in_stack_00000028 = *(undefined8 *)(lVar4 + 0x260);
          uVar7 = FUN_03ecf238(lVar4,*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
          lVar4 = FUN_0624b7dc(&stack0x00000028,uVar7,0);
        }
        bVar3 = iVar15 != -1;
        iVar15 = iVar15 + 1;
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
      lVar4 = FUN_0624b7dc(&stack0x00000028,lVar5,0);
    }
    iVar13 = iVar13 + 1;
    iVar16 = iVar16 + in_stack_00000020._4_4_;
  } while (iVar13 != iVar10);
LAB_03ecfac0:
  FUN_03ecfb0c();
  return;
}


