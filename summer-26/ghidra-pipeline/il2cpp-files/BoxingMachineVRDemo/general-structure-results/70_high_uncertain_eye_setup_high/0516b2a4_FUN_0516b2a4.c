/*
FUNCTION_NAME: FUN_0516b2a4
ENTRY_POINT: 0516b2a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516bdf8) */
/* WARNING: Removing unreachable block (ram,0x0516bec8) */

void FUN_0516b2a4(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
                    /* try { // try from 0516b2a4 to 0526b2c7 has its CatchHandler @ 0516b3b8 */
  if ((DAT_06b79e80 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06782780);
    FUN_02d6084c(PTR_DAT_06782790);
    FUN_02d6084c(PTR_DAT_067827d8);
    FUN_02d6084c(PTR_DAT_06782798);
    FUN_02d6084c(PTR_DAT_067827a0);
    FUN_02d6084c(PTR_DAT_067827a8);
    FUN_02d6084c(PTR_DAT_067827e0);
    FUN_02d6084c(PTR_DAT_0675e1c0);
    FUN_02d6084c(PTR_DAT_06760758);
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(PTR_DAT_067657d0);
    FUN_02d6084c(PTR_DAT_0677d878);
    FUN_02d6084c(PTR_DAT_067616f8);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_067827b0);
    FUN_02d6084c(PTR_DAT_067827b8);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(PTR_DAT_067675e0);
    DAT_06b79e80 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (param_2 == (long *)0x0) goto LAB_0516beb0;
  uVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  puVar5 = PTR_DAT_067827d8;
  puVar4 = PTR_DAT_067657d0;
  puVar3 = PTR_DAT_067616f8;
  puVar2 = PTR_DAT_0675e258;
  switch(uVar6) {
  case 1:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827e0 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067827e0))
    goto LAB_0516beb4;
    plVar17 = *(long **)(param_1 + 0x10);
    lVar18 = param_2[4];
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    FUN_04f8a60c(lVar18,uVar10,0);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x228))(plVar17,*(undefined8 *)(*plVar17 + 0x230));
      return;
    }
    break;
  case 2:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827a8 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_067827a8))
    {
      plVar17 = (long *)param_2[4];
      uVar7 = *(undefined4 *)((long)param_2 + 0x2c);
      local_68 = 0;
      FUN_03dce070(&local_68,(int)param_2[3] + -4,*(undefined8 *)PTR_DAT_067675e0);
      uVar10 = local_68;
      if ((plVar17 == (long *)0x0) || (*plVar17 == *(long *)(PTR_DAT_0675e258 + 0x90))) {
LAB_0516b8cc:
        FUN_0516c1e8(param_1,plVar17,uVar7,uVar10);
        return;
      }
LAB_0516bfb0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar17);
    }
LAB_0516beb4:
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(param_2);
  case 3:
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782798 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782798))
    goto LAB_0516beb4;
    plVar17 = *(long **)(param_1 + 0x10);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 600))(plVar17,(int)param_2[3],*(undefined8 *)(*plVar17 + 0x260));
      plVar17 = (long *)FUN_0516c158(param_2);
      puVar4 = PTR_DAT_067827b8;
      puVar3 = PTR_DAT_0675f3d8;
      puVar2 = PTR_DAT_0675e258;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar18 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0516b998;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)puVar3,0);
LAB_0516b998:
        uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar17 == (long *)0x0) goto LAB_0516bdfc;
          lVar18 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 == 0) goto LAB_0516bcf0;
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto LAB_0516bcd8;
        }
        lVar18 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0516b9f4;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)puVar4,0);
LAB_0516b9f4:
        lVar18 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar9 = *(long **)(lVar18 + 0x18);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar19 = *(long **)(param_1 + 0x10);
        uVar14 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8(uVar14,uVar14 & 0xffffffff);
        }
        (**(code **)(*plVar19 + 0x1d8))
                  (plVar19,uVar14 & 0xffffffff,*(undefined8 *)(*plVar19 + 0x1e0));
        lVar13 = *(long *)(lVar18 + 0x10);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar9 = *(long **)(lVar13 + 0x20);
        if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)(puVar2 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar9,*(long *)(puVar2 + 0x90),*(undefined4 *)(lVar13 + 0x2c));
        }
        FUN_0516c1e8(param_1,plVar9,*(undefined4 *)(lVar13 + 0x2c),0);
        FUN_0516b2a4(param_1,*(undefined8 *)(lVar18 + 0x18));
      } while( true );
    }
    break;
  case 4:
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782780 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782780))
    goto LAB_0516beb4;
    plVar17 = *(long **)(param_1 + 0x10);
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 600))(plVar17,(int)param_2[3],*(undefined8 *)(*plVar17 + 0x260));
      local_48 = 0;
      plVar17 = (long *)FUN_0516c28c(param_2);
      puVar4 = PTR_DAT_067827b0;
      puVar3 = PTR_DAT_0675f3d8;
      puVar2 = PTR_DAT_0675eef8;
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar18 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0516bba8;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)puVar3,0);
LAB_0516bba8:
        uVar14 = (*(code *)*puVar8)(plVar17,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar17 == (long *)0x0) goto LAB_0516bdfc;
          lVar18 = *plVar17;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 == 0) goto LAB_0516bd44;
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          goto OVRPlugin_OVRP_1_55_0__ovrp_GetSkeleton2;
        }
        lVar18 = *plVar17;
        uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0516bc04;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)puVar4,0);
LAB_0516bc04:
        plVar9 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar19 = *(long **)(param_1 + 0x10);
        uVar14 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8(uVar14,uVar14 & 0xffffffff);
        }
        (**(code **)(*plVar19 + 0x1d8))
                  (plVar19,uVar14 & 0xffffffff,*(undefined8 *)(*plVar19 + 0x1e0));
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_04f8e414(0);
        uVar10 = FUN_050243e0(&local_48,uVar10,0);
        uVar7 = FUN_050ea8a4(local_48,0);
        FUN_0516c1e8(param_1,uVar10,uVar7,0);
        FUN_0516b2a4(param_1,plVar9);
        local_48 = local_48 + 1;
      } while( true );
    }
    break;
  case 5:
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782790 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782790))
    goto LAB_0516beb4;
    lVar13 = param_2[4];
    if (lVar13 == 0) break;
    uVar10 = *(undefined8 *)PTR_DAT_0675e1c0;
    lVar18 = thunk_FUN_02d9d438(lVar13,uVar10);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(lVar13,uVar10);
    }
    plVar17 = *(long **)(param_1 + 0x10);
    if (plVar17 == (long *)0x0) break;
    (**(code **)(*plVar17 + 600))
              (plVar17,*(undefined4 *)(lVar18 + 0x18),*(undefined8 *)(*plVar17 + 0x260));
    plVar17 = *(long **)(param_1 + 0x10);
    if (plVar17 == (long *)0x0) break;
    (**(code **)(*plVar17 + 0x1c8))
              (plVar17,*(undefined1 *)((long)param_2 + 0x29),*(undefined8 *)(*plVar17 + 0x1d0));
    plVar17 = *(long **)(param_1 + 0x10);
    if (plVar17 == (long *)0x0) break;
    lVar13 = *plVar17;
    goto LAB_0516bd64;
  case 6:
  case 10:
    return;
  case 7:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827e0 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067827e0))
    goto LAB_0516beb4;
    lVar13 = param_2[4];
    if (lVar13 == 0) {
      lVar18 = 0;
    }
    else {
      uVar10 = *(undefined8 *)PTR_DAT_0675e1c0;
      lVar18 = thunk_FUN_02d9d438(lVar13,uVar10);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(lVar13,uVar10);
      }
    }
    plVar17 = *(long **)(param_1 + 0x10);
    if (plVar17 == (long *)0x0) break;
    lVar13 = *plVar17;
LAB_0516bd64:
    pcVar15 = *(code **)(lVar13 + 0x1e8);
    uVar10 = *(undefined8 *)(lVar13 + 0x1f0);
LAB_0516be7c:
    (*pcVar15)(plVar17,lVar18,uVar10);
    return;
  case 8:
    plVar17 = *(long **)(param_1 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_067827d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x1b8))
                (plVar17,param_2 == *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8),
                 *(undefined8 *)(*plVar17 + 0x1c0));
      return;
    }
    break;
  case 9:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827e0 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067827e0))
    goto LAB_0516beb4;
    plVar17 = (long *)param_2[4];
    if (plVar17 == (long *)0x0) break;
    if (*plVar17 == *(long *)PTR_DAT_067616f8) {
      puVar8 = (undefined8 *)thunk_FUN_02d9d688();
      uVar10 = *puVar8;
      local_50 = uVar10;
      if (*(int *)(param_1 + 0x20) == 2) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_04fe98f4(&local_50,0);
      }
      else if (*(int *)(param_1 + 0x20) == 1) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar10 = FUN_04fe9e80(&local_50,0);
      }
      local_50 = uVar10;
      if (*(int *)(*(long *)PTR_DAT_0677d878 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar18 = FUN_050df328(uVar10,0,0);
    }
    else {
      if (*(long *)(*plVar17 + 0x40) != *(long *)(*(long *)PTR_DAT_067657d0 + 0x40))
      goto LAB_0516bfb0;
      puVar8 = (undefined8 *)thunk_FUN_02d9d688();
      uStack_58 = puVar8[1];
      local_60 = *puVar8;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar10 = FUN_04febb64(&local_60,0);
      uVar11 = FUN_04febcf4(&local_60,0);
      if (*(int *)(*(long *)PTR_DAT_0677d878 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d878);
      }
      lVar18 = FUN_050df1ec(uVar10,uVar11,0);
    }
    plVar17 = *(long **)(param_1 + 0x10);
    if (plVar17 == (long *)0x0) break;
    lVar13 = *plVar17;
    goto LAB_0516be74;
  case 0xb:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827a0 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067827a0))
    goto LAB_0516beb4;
    lVar18 = param_2[4];
    if (lVar18 != 0) {
      plVar17 = *(long **)(lVar18 + 0x20);
      uVar7 = *(undefined4 *)(lVar18 + 0x2c);
      if ((plVar17 == (long *)0x0) ||
         (lVar18 = *(long *)(PTR_DAT_0675e258 + 0x90), *plVar17 == lVar18)) {
        FUN_0516c1e8(param_1,plVar17,uVar7,0);
        lVar18 = param_2[5];
        if (lVar18 == 0) break;
        plVar17 = *(long **)(lVar18 + 0x20);
        uVar7 = *(undefined4 *)(lVar18 + 0x2c);
        if ((plVar17 == (long *)0x0) || (lVar18 = *(long *)(puVar2 + 0x90), *plVar17 == lVar18)) {
          uVar10 = 0;
          goto LAB_0516b8cc;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar17,lVar18,uVar7);
    }
    break;
  default:
    thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
    FUN_028f4b80();
    uVar10 = FUN_04f8e414(0);
    FUN_028f4e40(param_2);
    uVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    local_68 = CONCAT71(local_68._1_7_,uVar6);
    uVar11 = thunk_FUN_02dc61f4(PTR_DAT_067827c0);
    uVar11 = thunk_FUN_02d9d164(uVar11,&local_68);
    uVar12 = thunk_FUN_02dc61f4(PTR_DAT_067827c8);
    uVar10 = FUN_050f0ec0(uVar12,uVar10,uVar11,0);
    thunk_FUN_02dc61f4(PTR_DAT_06764080);
    uVar11 = thunk_FUN_02d9d534();
    uVar12 = thunk_FUN_02dc61f4(PTR_DAT_06769ac0);
    FUN_04f7a804(uVar11,uVar12,uVar10,0);
    uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067827e8);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar11,uVar10);
  case 0x10:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827e0 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067827e0))
    goto LAB_0516beb4;
    plVar17 = *(long **)(param_1 + 0x10);
    lVar18 = param_2[4];
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    uVar7 = FUN_04f88f00(lVar18,uVar10,0);
    if (plVar17 == (long *)0x0) break;
    pcVar15 = *(code **)(*plVar17 + 600);
    uVar10 = *(undefined8 *)(*plVar17 + 0x260);
    goto LAB_0516be10;
  case 0x12:
    bVar1 = *(byte *)(*(long *)PTR_DAT_067827e0 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_067827e0))
    goto LAB_0516beb4;
    plVar17 = *(long **)(param_1 + 0x10);
    lVar18 = param_2[4];
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar10 = FUN_04f8e414(0);
    if (*(int *)(*(long *)PTR_DAT_06760758 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06760758);
    }
    lVar18 = FUN_04f898a8(lVar18,uVar10,0);
    if (plVar17 == (long *)0x0) break;
    lVar13 = *plVar17;
LAB_0516be74:
    pcVar15 = *(code **)(lVar13 + 0x278);
    uVar10 = *(undefined8 *)(lVar13 + 0x280);
    goto LAB_0516be7c;
  }
  goto LAB_0516beb0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
OVRPlugin_OVRP_1_55_0__ovrp_GetSkeleton2:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0516bde0;
    }
  }
LAB_0516bd44:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)PTR_DAT_0675f3d0,0);
LAB_0516bde0:
  (*(code *)*puVar8)(plVar17,puVar8[1]);
  goto LAB_0516bdfc;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_0516bcd8:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0516bdb8;
    }
  }
LAB_0516bcf0:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar17,*(long *)PTR_DAT_0675f3d0,0);
LAB_0516bdb8:
  (*(code *)*puVar8)(plVar17,puVar8[1]);
LAB_0516bdfc:
  plVar17 = *(long **)(param_1 + 0x10);
  if (plVar17 != (long *)0x0) {
    uVar7 = 0;
    pcVar15 = *(code **)(*plVar17 + 0x1c8);
    uVar10 = *(undefined8 *)(*plVar17 + 0x1d0);
LAB_0516be10:
    (*pcVar15)(plVar17,uVar7,uVar10);
    return;
  }
LAB_0516beb0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


