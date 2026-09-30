/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 05063ee4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__Dispose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 in_CY;
  long lVar7;
  int iVar8;
  long unaff_x19;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
  ushort *puVar11;
  ushort *unaff_x23;
  long unaff_x24;
  ushort *unaff_x25;
  uint uVar12;
  uint unaff_w26;
  ulong uVar13;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined1 auVar14 [16];
  
code_r0x05063ee4:
  if (!(bool)in_CY) {
    FUN_050f577c(0);
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar9 = *(long *)PTR_DAT_067dc028;
  if (unaff_w22 < (uint)unaff_x20) {
    FUN_050f577c(0);
  }
  lVar9 = *(long *)(lVar9 + 0x20);
  *(long *)(unaff_x29 + -0x58) = unaff_x20;
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar9 = *(long *)(unaff_x29 + -0x40);
  iVar8 = (int)*(long *)(unaff_x29 + -0x58);
  puVar11 = unaff_x25 + lVar9;
  uVar5 = unaff_w26 - (int)lVar9;
  uVar13 = (ulong)uVar5;
  unaff_w22 = unaff_w22 - iVar8;
  *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + *(long *)(unaff_x29 + -0x58);
  if (iVar8 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    if (uVar5 != 0) {
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x50);
      do {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_0505c878(puVar11,uVar13,*(undefined8 *)(unaff_x29 + -0x28),unaff_w22,
                              unaff_x29 + -0xc,unaff_x29 + -0x10);
        uVar5 = *(uint *)(unaff_x29 + -0x10);
        **(int **)(unaff_x29 + -0x30) = uVar5 + **(int **)(unaff_x29 + -0x30);
        if ((uVar10 & 1) != 0) break;
        uVar4 = *(uint *)(unaff_x29 + -0xc);
        unaff_x24 = (long)(int)uVar4;
        uVar12 = (uint)uVar13;
        lVar9 = *(long *)PTR_DAT_067dc020;
        if (uVar12 < uVar4) {
          FUN_050f577c(0);
        }
        if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
          FUN_02f41e9c();
        }
        lVar9 = *(long *)PTR_DAT_067dc028;
        if (unaff_w22 < uVar5) {
          FUN_050f577c(0);
        }
        lVar7 = *(long *)(lVar9 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        if (uVar12 == uVar4) {
LAB_0506402c:
          if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          goto LAB_05064044;
        }
        lVar7 = *unaff_x28;
        unaff_x25 = puVar11 + unaff_x24;
        uVar3 = *unaff_x25;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          lVar7 = thunk_FUN_02f6670c();
        }
        unaff_w26 = uVar12 - uVar4;
        unaff_w22 = unaff_w22 - uVar5;
        *(long *)(unaff_x29 + -0x28) = *(long *)(unaff_x29 + -0x28) + (long)(int)uVar5;
        if ((0x20 < uVar3) || ((unaff_x27 << ((ulong)uVar3 & 0x3f) & unaff_x21) == 0))
        goto LAB_05063dec;
        if (unaff_w26 != 1) {
          uVar4 = unaff_w26;
          if (unaff_w26 < 2) {
            uVar4 = 1;
          }
          uVar12 = 1;
          while (uVar4 != uVar12) {
            lVar7 = *unaff_x28;
            uVar3 = unaff_x25[(int)uVar12];
            if (*(int *)(lVar7 + 0xe4) == 0) {
              lVar7 = thunk_FUN_02f6670c();
            }
            if ((0x20 < uVar3) || ((unaff_x27 << ((ulong)uVar3 & 0x3f) & unaff_x21) == 0)) {
              lVar9 = *(long *)PTR_DAT_067dc020;
              if (unaff_w26 < uVar12) {
                FUN_050f577c(0);
              }
              goto LAB_05063d7c;
            }
            uVar12 = uVar12 + 1;
            if (unaff_w26 == uVar12) goto LAB_05063d6c;
          }
          goto LAB_0506402c;
        }
LAB_05063d6c:
        lVar9 = *(long *)PTR_DAT_067dc020;
        uVar12 = unaff_w26;
LAB_05063d7c:
        if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
          FUN_02f41e9c();
        }
        uVar4 = unaff_w26 - uVar12;
        uVar13 = (ulong)uVar4;
        if (0x55555554 < uVar5 * -0x55555555 + 0x2aaaaaaa) {
          if (uVar4 == 0) break;
          goto LAB_05063fe4;
        }
        puVar11 = unaff_x25 + (int)uVar12;
        if (uVar4 == 0) break;
      } while( true );
    }
  }
  else if (0 < (int)uVar5) {
    uVar10 = 0;
    goto LAB_05063fa4;
  }
  lVar7 = 1;
  goto LAB_05063ff8;
LAB_05063dec:
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = *(undefined8 *)(unaff_x29 + -0x48);
  uVar2 = *(undefined8 *)(unaff_x29 + -0x40);
  FUN_05064048(unaff_x25,unaff_w26,uVar1,uVar2,unaff_x29 + -0x14,unaff_x29 + -0x18);
  *(ulong *)(unaff_x29 + -0x50) = (ulong)*(uint *)(unaff_x29 + -0x18);
  if ((*(uint *)(unaff_x29 + -0x18) & 3) != 0) goto LAB_05063fe4;
  lVar9 = *(long *)PTR_DAT_067d5400;
  if ((uint)uVar2 < (uint)*(undefined8 *)(unaff_x29 + -0x50)) {
    FUN_050f577c(0);
  }
  if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  auVar14 = FUN_04255888(uVar1,*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)PTR_DAT_067d5408);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar13 = FUN_0505c878(auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(unaff_x29 + -0x28),unaff_w22,
                        unaff_x29 + -0x1c,unaff_x29 + -0x20);
  puVar6 = PTR_DAT_067dc020;
  if ((uVar13 & 1) == 0) goto LAB_05063fe4;
  unaff_x20 = (long)*(int *)(unaff_x29 + -0x20);
  iVar8 = **(int **)(unaff_x29 + -0x30);
  in_CY = *(uint *)(unaff_x29 + -0x14) <= unaff_w26;
  *(long *)(unaff_x29 + -0x40) = (long)(int)*(uint *)(unaff_x29 + -0x14);
  unaff_x19 = *(long *)puVar6;
  **(int **)(unaff_x29 + -0x30) = *(int *)(unaff_x29 + -0x20) + iVar8;
  unaff_x23 = puVar11;
  goto code_r0x05063ee4;
LAB_05063fe4:
  lVar7 = 0;
  **(undefined4 **)(unaff_x29 + -0x30) = 0;
  goto LAB_05063ff8;
  while( true ) {
    uVar10 = uVar10 + 1;
    lVar7 = 1;
    if (uVar13 <= uVar10) break;
LAB_05063fa4:
    uVar3 = unaff_x23[lVar9 + unaff_x24 + uVar10];
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if ((0x20 < uVar3) || ((1L << ((ulong)uVar3 & 0x3f) & 0x100002600U) == 0)) goto LAB_05063fe4;
  }
LAB_05063ff8:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05064044:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar7);
}


