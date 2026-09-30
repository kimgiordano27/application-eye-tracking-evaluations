/*
FUNCTION_NAME: FUN_04855a9c
ENTRY_POINT: 04855a9c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_04855a9c(int *param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  code *pcVar16;
  long *plVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
                    /* try { // try from 04855ab4 to 04955b67 has its CatchHandler @ 04856178 */
  if ((DAT_06a4d472 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664e240);
    FUN_02d4dc40(PTR_DAT_066488c0);
    FUN_02d4dc40(PTR_DAT_066488c8);
    FUN_02d4dc40(PTR_DAT_06647b18);
    FUN_02d4dc40(PTR_DAT_0664c6b0);
    FUN_02d4dc40(PTR_DAT_066488d0);
    FUN_02d4dc40(PTR_DAT_06648868);
    DAT_06a4d472 = 1;
  }
  puVar5 = PTR_DAT_066488d0;
  puVar4 = PTR_DAT_066488c8;
  puVar3 = PTR_DAT_066488c0;
  local_70._8_8_ = 0;
  local_80._8_8_ = 0;
  local_70._0_8_ = 0;
  local_80._0_8_ = 0;
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
    goto LAB_04855de0;
  }
  if (*param_1 != 1) {
    plVar10 = *(long **)(param_1 + 8);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar11 = *(long *)(param_2 + 0x20);
    uVar15 = *(undefined8 *)(param_1 + 10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c(lVar11);
    }
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04855c84;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar10,lVar11,0);
LAB_04855c84:
    uVar15 = (*(code *)*puVar9)(plVar10,uVar15,puVar9[1]);
    *(undefined8 *)(param_1 + 0xe) = uVar15;
    thunk_FUN_02dc1ef0();
    piVar14 = param_1 + 0x10;
    piVar14[0] = 0;
    piVar14[1] = 0;
    thunk_FUN_02dc1ef0(piVar14,0);
    param_1[0x12] = 0;
    do {
      plVar10 = *(long **)(param_1 + 0xe);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar11 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02d8720c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x18);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02d8720c(lVar11);
      }
      lVar12 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_04855d8c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d87540(plVar10,lVar11,1);
LAB_04855d8c:
      auVar19 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      local_60._0_8_ = 0;
      local_60._8_8_ = 0;
      if ((*(byte *)(*(long *)(*(long *)puVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_02d8720c();
      }
      local_60 = auVar19;
      thunk_FUN_02dc1ef0(local_60,0);
      local_70 = local_60;
      uVar13 = FUN_02ee4294(local_70,*(undefined8 *)puVar4);
      if ((uVar13 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x14) = local_70;
        thunk_FUN_02dc1ef0(param_1 + 0x14,0);
        lVar12 = *(long *)(param_2 + 0x20);
        uVar2 = *(ushort *)(lVar12 + 0x135);
        lVar11 = lVar12;
        if ((uVar2 & 1) == 0) {
          lVar11 = FUN_02d8720c();
          lVar12 = *(long *)(param_2 + 0x20);
          uVar2 = *(ushort *)(lVar12 + 0x135);
        }
        pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x28);
        if ((uVar2 & 1) == 0) {
          lVar12 = FUN_02d8720c();
        }
        (*pcVar16)(param_1 + 2,local_70,param_1,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28));
        return;
      }
LAB_04855de0:
      uVar15 = local_70._0_8_;
      if ((long *)local_70._0_8_ == (long *)0x0) {
        if (local_70[8] == '\0') goto LAB_04855e8c;
      }
      else {
        uVar6 = local_70._10_2_;
        lVar11 = *(long *)(*(long *)puVar3 + 0x20);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02d8720c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_02d8720c(lVar11);
        }
        lVar12 = *(long *)uVar15;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04855e78;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_02d87540(uVar15,lVar11,0);
LAB_04855e78:
        uVar13 = (*(code *)*puVar9)(uVar15,uVar6,puVar9[1]);
        if ((uVar13 & 1) == 0) {
LAB_04855e8c:
          plVar10 = *(long **)(param_1 + 0xe);
          if (plVar10 == (long *)0x0) goto LAB_04855edc;
          lVar11 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto LAB_04855ecc;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_04855eb4;
        }
      }
      if (*(long *)(param_1 + 0xc) == 0x7fffffffffffffff) {
        uVar15 = FUN_02d4def8();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar15,param_2);
      }
      *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 1;
    } while( true );
  }
  local_80 = *(undefined1 (*) [16])(param_1 + 0x18);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = -1;
  local_70 = ZEXT816(0);
  goto LAB_04855b6c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_04855eb4:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0664c6b0) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_048560a0;
    }
  }
LAB_04855ecc:
  puVar9 = (undefined8 *)FUN_02d87540(plVar10,*(long *)PTR_DAT_0664c6b0,0);
LAB_048560a0:
  local_50 = (*(code *)*puVar9)(plVar10,puVar9[1]);
  puVar3 = PTR_DAT_06648868;
  if (*(int *)(*(long *)PTR_DAT_06648868 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  thunk_FUN_02dc1ef0(local_50,0);
  uVar7 = local_50._8_8_;
  uVar15 = local_50._0_8_;
  local_80 = local_50;
  if (DAT_06a4963a == '\0') {
    FUN_02d4dc40(PTR_DAT_06648868);
    DAT_06a4963a = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if (DAT_06a4963b == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963b = '\x01';
  }
  if ((long *)uVar15 != (long *)0x0) {
    lVar11 = *(long *)uVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06648890) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto System_Array_EmptyInternalEnumerator<SerializedCommand>__Dispose;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(uVar15,*(long *)PTR_DAT_06648890,0);
System_Array_EmptyInternalEnumerator<SerializedCommand>__Dispose:
    iVar8 = (*(code *)*puVar9)(uVar15,uVar7 & 0xffffffff,puVar9[1]);
    if (iVar8 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_80;
      thunk_FUN_02dc1ef0(param_1 + 0x18,0);
      lVar12 = *(long *)(param_2 + 0x20);
      uVar2 = *(ushort *)(lVar12 + 0x135);
      lVar11 = lVar12;
      if ((uVar2 & 1) == 0) {
        lVar11 = FUN_02d8720c();
        lVar12 = *(long *)(param_2 + 0x20);
        uVar2 = *(ushort *)(lVar12 + 0x135);
      }
      pcVar16 = (code *)**(undefined8 **)(*(long *)(lVar11 + 0xc0) + 0x38);
      if ((uVar2 & 1) == 0) {
        lVar12 = FUN_02d8720c();
      }
      (*pcVar16)(param_1 + 2,local_80,param_1,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x38));
      return;
    }
  }
LAB_04855b6c:
  if (DAT_06a4963c == '\0') {
    FUN_02d4dc40(PTR_DAT_06648890);
    DAT_06a4963c = '\x01';
  }
  uVar15 = local_80._0_8_;
  if ((long *)local_80._0_8_ != (long *)0x0) {
    lVar11 = *(long *)local_80._0_8_;
    uVar18 = local_80._8_8_ & 0xffff;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06648890) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_04855ccc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(local_80._0_8_,*(long *)PTR_DAT_06648890,2);
LAB_04855ccc:
    (*(code *)*puVar9)(uVar15,uVar18,puVar9[1]);
  }
LAB_04855edc:
  plVar17 = (long *)(param_1 + 0x10);
  plVar10 = (long *)*plVar17;
  if (plVar10 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06647b18 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06647b18))
    {
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(plVar10,param_2);
    }
    lVar11 = FUN_04f2e80c(plVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_04f2e8cc(lVar11,0);
  }
  *plVar17 = 0;
  thunk_FUN_02dc1ef0(plVar17,0);
  uVar15 = *(undefined8 *)(param_1 + 0xc);
  *param_1 = -2;
  piVar14 = param_1 + 0xe;
  piVar14[0] = 0;
  piVar14[1] = 0;
  thunk_FUN_02dc1ef0(piVar14,0);
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar15;
  }
  else {
    lVar11 = *(long *)(*(long *)PTR_DAT_0664e240 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02d8720c(lVar11);
    }
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_0485606c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar10,lVar11,2);
LAB_0485606c:
    (*(code *)*puVar9)(plVar10,uVar15,puVar9[1]);
  }
  return;
}


