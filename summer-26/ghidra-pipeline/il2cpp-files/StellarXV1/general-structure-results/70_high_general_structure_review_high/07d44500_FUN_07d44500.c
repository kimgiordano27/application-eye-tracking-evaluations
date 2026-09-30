/*
FUNCTION_NAME: FUN_07d44500
ENTRY_POINT: 07d44500
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long * FUN_07d44500(long param_1,long param_2,long *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  uint uVar28;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  
  if ((DAT_09899c8b & 1) == 0) {
    FUN_04077588(PTR_DAT_0928de30);
    FUN_04077588(PTR_DAT_09301ad0);
    FUN_04077588(PTR_DAT_09301190);
    FUN_04077588(PTR_DAT_093005a0);
    FUN_04077588(PTR_DAT_092ff0d8);
    FUN_04077588(PTR_DAT_09285ee8);
    FUN_04077588(PTR_DAT_092ff0e0);
    FUN_04077588(PTR_DAT_092ff558);
    FUN_04077588(PTR_DAT_092aa098);
    FUN_04077588(PTR_DAT_09301848);
    FUN_04077588(PTR_DAT_093018b8);
    FUN_04077588(PTR_DAT_092e8aa8);
    FUN_04077588(PTR_DAT_092db308);
    FUN_04077588(PTR_DAT_092fff28);
    FUN_04077588(PTR_DAT_093013d8);
    FUN_04077588(PTR_DAT_09301458);
    FUN_04077588(PTR_DAT_09301850);
    FUN_04077588(PTR_DAT_09301ad8);
    FUN_04077588(PTR_DAT_09301858);
    FUN_04077588(PTR_DAT_092ff508);
    FUN_04077588(PTR_DAT_09301860);
    FUN_04077588(PTR_DAT_092fff20);
    FUN_04077588(PTR_DAT_092b7bf0);
    FUN_04077588(PTR_DAT_09301ae0);
    FUN_04077588(PTR_DAT_092d2388);
    FUN_04077588(PTR_DAT_09301460);
    FUN_04077588(PTR_DAT_09301ae8);
    FUN_04077588(PTR_DAT_09301af0);
    FUN_04077588(PTR_DAT_09301868);
    FUN_04077588(PTR_DAT_092b6e00);
    FUN_04077588(PTR_DAT_09301870);
    FUN_04077588(PTR_DAT_09301af8);
    FUN_04077588(PTR_DAT_092860a8);
    FUN_04077588(PTR_DAT_09301b00);
    FUN_04077588(PTR_DAT_09301a90);
    FUN_04077588(PTR_DAT_09301898);
    FUN_04077588(PTR_DAT_09301a98);
    FUN_04077588(PTR_DAT_09301878);
    FUN_04077588(PTR_DAT_092cf1e8);
    FUN_04077588(PTR_DAT_09301668);
    FUN_04077588(PTR_DAT_093017b0);
    FUN_04077588(PTR_DAT_092e4210);
    FUN_04077588(PTR_DAT_09301b08);
    FUN_04077588(PTR_DAT_09301400);
    FUN_04077588(PTR_DAT_092a6388);
    FUN_04077588(PTR_DAT_09301ac8);
    FUN_04077588(PTR_DAT_0928bfe0);
    FUN_04077588(PTR_DAT_09301b10);
    FUN_04077588(PTR_DAT_092fc418);
    FUN_04077588(PTR_DAT_09285978);
    FUN_04077588(PTR_DAT_092e1310);
    FUN_04077588(PTR_DAT_092bbd48);
    FUN_04077588(PTR_DAT_09301670);
    FUN_04077588(PTR_DAT_092a7a58);
    FUN_04077588(PTR_DAT_09301a70);
    FUN_04077588(PTR_DAT_092ab9f0);
    FUN_04077588(PTR_DAT_092ff6f0);
    FUN_04077588(PTR_DAT_09288ce0);
    DAT_09899c8b = 1;
  }
  local_64[0] = 0;
  local_68 = 0;
  if ((param_3 == (long *)0x0) ||
     (plVar9 = (long *)(**(code **)(*param_3 + 0x648))
                                 (param_3,*(undefined8 *)PTR_DAT_09301400,
                                  *(undefined8 *)PTR_DAT_092db308,*(undefined8 *)PTR_DAT_092bbd48,
                                  *(undefined8 *)(*param_3 + 0x650)),
     puVar26 = (undefined8 *)PTR_DAT_092ff508, param_2 == 0)) goto LAB_07d46de4;
  if (*(long *)(param_2 + 0x20) == 0) {
LAB_07d44884:
    if (*(int *)(param_1 + 0x5c) != 2) goto LAB_07d448d8;
    uVar10 = FUN_07cb02a0(param_2,0);
    if (plVar9 == (long *)0x0) goto LAB_07d46de4;
    (**(code **)(*plVar9 + 0x598))
              (plVar9,*(undefined8 *)PTR_DAT_093013d8,*puVar26,uVar10,
               *(undefined8 *)(*plVar9 + 0x5a0));
    uVar10 = FUN_07cb7f3c(param_2,0);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar10 = FUN_07cb02a0(param_2,0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_07d46de4;
      uVar11 = FUN_074e4b3c(uVar10,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),0);
      if ((uVar11 & 1) != 0) goto LAB_07d44884;
    }
LAB_07d448d8:
    uVar10 = FUN_07cb7f3c(param_2,0);
    if (plVar9 == (long *)0x0) goto LAB_07d46de4;
  }
  (**(code **)(*plVar9 + 0x558))
            (plVar9,*(undefined8 *)PTR_DAT_0928bfe0,uVar10,*(undefined8 *)(*plVar9 + 0x560));
  lVar12 = FUN_07cb02a0(param_2,0);
  if (lVar12 == 0) goto LAB_07d46de4;
  if (*(int *)(lVar12 + 0x10) == 0) {
    uVar10 = FUN_07cb02a0(param_2,0);
    uVar11 = FUN_074e5d94(uVar10,0);
    lVar12 = param_2;
    while ((uVar11 & 1) != 0) {
      lVar25 = *(long *)(lVar12 + 0x188);
      if (lVar25 == 0) goto LAB_07d46de4;
      uVar11 = *(ulong *)(lVar25 + 0x18);
      puVar26 = (undefined8 *)PTR_DAT_092ff508;
      if (uVar11 == 0) {
        puVar24 = (undefined8 *)PTR_DAT_09285978;
        if (*(long *)(param_1 + 0x30) != 0) {
          puVar24 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
        }
        uVar10 = *puVar24;
        break;
      }
      if ((int)uVar11 < 1) break;
      lVar27 = 0;
      while( true ) {
        if ((uint)uVar11 <= (uint)lVar27) goto LAB_07d46de8;
        plVar13 = *(long **)(lVar25 + 0x20 + lVar27 * 8);
        if (plVar13 == (long *)0x0) goto LAB_07d46de4;
        lVar14 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
        if (lVar14 != lVar12) break;
        uVar11 = (ulong)*(uint *)(lVar25 + 0x18);
        lVar27 = lVar27 + 1;
        puVar26 = (undefined8 *)PTR_DAT_092ff508;
        if ((int)*(uint *)(lVar25 + 0x18) <= (int)lVar27) goto LAB_07d44a14;
      }
      if (*(uint *)(lVar25 + 0x18) <= (uint)lVar27) {
LAB_07d46de8:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar13 = *(long **)(lVar25 + 0x20 + lVar27 * 8);
      if ((plVar13 == (long *)0x0) ||
         (lVar12 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0)),
         puVar26 = (undefined8 *)PTR_DAT_092ff508, lVar12 == 0)) goto LAB_07d46de4;
      uVar10 = FUN_07cb02a0(lVar12,0);
      uVar11 = FUN_074e5d94(uVar10,0);
    }
LAB_07d44a14:
    uVar15 = FUN_07cb02a0(param_2,0);
    uVar11 = FUN_074e4b3c(uVar15,uVar10,0);
    if ((uVar11 & 1) == 0) goto LAB_07d44a6c;
    (**(code **)(*plVar9 + 0x558))
              (plVar9,*(undefined8 *)PTR_DAT_09301b00,*(undefined8 *)PTR_DAT_09301b08,
               *(undefined8 *)(*plVar9 + 0x560));
    bVar2 = true;
  }
  else {
LAB_07d44a6c:
    bVar2 = false;
  }
  puVar3 = PTR_DAT_093018b8;
  if (*(char *)(param_2 + 0xe9) != '\0') {
    local_64[0] = *(undefined1 *)(param_2 + 0xe8);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x28) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar10 = FUN_075d79d8(local_64,0);
    (**(code **)(*plVar9 + 0x598))
              (plVar9,*(undefined8 *)puVar3,*puVar26,uVar10,*(undefined8 *)(*plVar9 + 0x5a0));
  }
  puVar3 = PTR_DAT_09301670;
  if (*(char *)(param_2 + 0xc0) != '\0') {
    plVar13 = *(long **)(param_2 + 0xb8);
    if (plVar13 == (long *)0x0) goto LAB_07d46de4;
    uVar10 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    (**(code **)(*plVar9 + 0x598))
              (plVar9,*(undefined8 *)puVar3,*puVar26,uVar10,*(undefined8 *)(*plVar9 + 0x5a0));
  }
  FUN_07d3c83c(param_1,param_2,plVar9,param_3);
  plVar13 = *(long **)(param_2 + 0x40);
  if (plVar13 == (long *)0x0) goto LAB_07d46de4;
  iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
  if (iVar4 - 1U < 2) {
    iVar7 = 0;
    iVar8 = 0;
    do {
      plVar16 = (long *)FUN_07cea494(plVar13,iVar8,0);
      if (plVar16 == (long *)0x0) goto LAB_07d46de4;
      iVar5 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
      if (iVar5 == 4) {
        plVar17 = (long *)FUN_07cb5f88(param_2,0);
        if (plVar17 == (long *)0x0) goto LAB_07d46de4;
        iVar5 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            plVar18 = (long *)(**(code **)(*plVar17 + 0x208))
                                        (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
            if (plVar18 == (long *)0x0) goto LAB_07d46de4;
            uVar11 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
            if ((uVar11 & 1) != 0) {
              lVar12 = (**(code **)(*plVar17 + 0x208))
                                 (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
              if ((lVar12 == 0) || (lVar12 = FUN_07cec148(lVar12,0), lVar12 == 0))
              goto LAB_07d46de4;
              if (*(int *)(lVar12 + 0x18) == 1) {
                lVar12 = (**(code **)(*plVar17 + 0x208))
                                   (plVar17,iVar5,*(undefined8 *)(*plVar17 + 0x210));
                if ((lVar12 == 0) || (lVar12 = FUN_07cec148(lVar12,0), lVar12 == 0))
                goto LAB_07d46de4;
                if (*(int *)(lVar12 + 0x18) == 0) goto LAB_07d46de8;
                if (*(long **)(lVar12 + 0x20) == plVar16) {
                  iVar7 = iVar7 + 1;
                }
              }
            }
            iVar5 = iVar5 + 1;
            iVar6 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
          } while (iVar5 < iVar6);
        }
      }
      iVar5 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
      iVar8 = iVar8 + 1;
      if (iVar5 == 1) {
        iVar7 = iVar7 + 1;
      }
    } while (iVar8 != iVar4);
    if ((*(char *)(param_2 + 0x128) != '\0') && (iVar7 == 1)) {
      if ((*(long *)(param_2 + 0x40) != 0) &&
         (lVar12 = FUN_07cea494(*(long *)(param_2 + 0x40),0,0), lVar12 != 0)) {
        lVar12 = FUN_07d3d280(*(undefined8 *)(lVar12 + 0x38));
        if ((lVar12 == 0) || (*(int *)(lVar12 + 0x10) == 0)) {
          lVar12 = *(long *)PTR_DAT_092e4210;
        }
        if (*(int *)(*(long *)PTR_DAT_092ff558 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar10 = FUN_07d252ec(lVar12,0);
        (**(code **)(*plVar9 + 0x558))
                  (plVar9,*(undefined8 *)PTR_DAT_092ab9f0,uVar10,*(undefined8 *)(*plVar9 + 0x560));
        return plVar9;
      }
      goto LAB_07d46de4;
    }
  }
  puVar26 = (undefined8 *)PTR_DAT_092bbd48;
  plVar16 = (long *)(**(code **)(*param_3 + 0x648))
                              (param_3,*(undefined8 *)PTR_DAT_09301400,
                               *(undefined8 *)PTR_DAT_09301ac8,*(undefined8 *)PTR_DAT_092bbd48,
                               *(undefined8 *)(*param_3 + 0x650));
  lVar12 = FUN_07cb2a78(param_2,0);
  if (lVar12 == 0) goto LAB_07d46de4;
  uVar11 = FUN_07f52f4c(lVar12,0);
  if (((uVar11 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
    lVar12 = FUN_07cb2a78(param_2,0);
    if (lVar12 == 0) goto LAB_07d46de4;
    plVar17 = (long *)FUN_07d47408(param_1,*(undefined8 *)(lVar12 + 0x18));
    lVar12 = FUN_07cb2a78(param_2,0);
    if (lVar12 == 0) goto LAB_07d46de4;
    uVar11 = FUN_074e5d94(*(undefined8 *)(lVar12 + 0x18),0);
    if ((uVar11 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) || (!bVar2)) {
        uVar10 = FUN_07cb02a0(param_2,0);
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
      }
      plVar17 = (long *)FUN_07d47408(param_1,uVar10);
    }
    lVar12 = FUN_07cb2a78(param_2,0);
    if (lVar12 == 0) goto LAB_07d46de4;
    lVar12 = FUN_07d48c80(lVar12,plVar17,*(undefined8 *)(lVar12 + 0x10));
    if (lVar12 == 0) {
      if (plVar17 == (long *)0x0) goto LAB_07d46de4;
      (**(code **)(*plVar17 + 0x2f8))(plVar17,plVar16,*(undefined8 *)(*plVar17 + 0x300));
    }
    lVar12 = FUN_07cb2a78(param_2,0);
    if ((lVar12 == 0) || (plVar16 == (long *)0x0)) goto LAB_07d46de4;
    (**(code **)(*plVar16 + 0x558))
              (plVar16,*(undefined8 *)PTR_DAT_0928bfe0,*(undefined8 *)(lVar12 + 0x10),
               *(undefined8 *)(*plVar16 + 0x560));
  }
  else {
    (**(code **)(*plVar9 + 0x2f8))(plVar9,plVar16,*(undefined8 *)(*plVar9 + 0x300));
  }
  lVar12 = FUN_07cb2a78(param_2,0);
  if (lVar12 == 0) goto LAB_07d46de4;
  uVar11 = FUN_07f52f4c(lVar12,0);
  if (((uVar11 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
    plVar17 = *(long **)(param_1 + 0x28);
    lVar12 = FUN_07cb2a78(param_2,0);
    if ((lVar12 == 0) || (plVar17 == (long *)0x0)) goto LAB_07d46de4;
    plVar17 = (long *)(**(code **)(*plVar17 + 0x308))
                                (plVar17,*(undefined8 *)(lVar12 + 0x18),
                                 *(undefined8 *)(*plVar17 + 0x310));
    lVar12 = FUN_07cb2a78(param_2,0);
    if (lVar12 == 0) goto LAB_07d46de4;
    if ((plVar17 != (long *)0x0) && (*plVar17 != *(long *)(PTR_DAT_09285980 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar17,*(long *)(PTR_DAT_09285980 + 0x90));
    }
    uVar10 = FUN_07d49544(plVar17,*(undefined8 *)(lVar12 + 0x10));
    (**(code **)(*plVar9 + 0x558))
              (plVar9,*(undefined8 *)PTR_DAT_092ab9f0,uVar10,*(undefined8 *)(*plVar9 + 0x560));
  }
  lVar12 = *(long *)(param_2 + 0xf8);
  puVar24 = (undefined8 *)PTR_DAT_09301400;
  if (lVar12 != 0) {
    plVar17 = (long *)(**(code **)(*param_3 + 0x648))
                                (param_3,*(undefined8 *)PTR_DAT_09301400,
                                 *(undefined8 *)PTR_DAT_09301ad8,*puVar26,
                                 *(undefined8 *)(*param_3 + 0x650));
    uVar10 = thunk_FUN_0408781c(lVar12,0);
    uVar15 = *(undefined8 *)PTR_DAT_09301ad0;
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
    }
    uVar15 = FUN_0768890c(uVar15,0);
    uVar11 = FUN_07692be0(uVar10,uVar15,0);
    puVar3 = PTR_DAT_092ff508;
    if ((uVar11 & 1) == 0) {
      FUN_07d47aec(param_1,lVar12,plVar17);
    }
    else {
      FUN_07d3c83c(param_1,lVar12,plVar17,param_3);
    }
    FUN_07d3c164(*(undefined8 *)(lVar12 + 0xa0),plVar17,0);
    if (*(char *)(lVar12 + 0x20) != '\0') {
      (**(code **)(*plVar9 + 0x598))
                (plVar9,*(undefined8 *)PTR_DAT_09301ae8,
                 **(undefined8 **)(*(long *)(PTR_DAT_09285980 + 0x90) + 0xb8),
                 *(undefined8 *)PTR_DAT_092a6388,*(undefined8 *)(*plVar9 + 0x5a0));
    }
    if (*(char *)(lVar12 + 0x95) == '\0') {
      FUN_07d3ecb8(*(undefined8 *)(lVar12 + 0x38));
      uVar10 = FUN_07cc97e4(lVar12,0);
      uVar10 = FUN_07cc9578(lVar12,uVar10,0);
      if (plVar17 == (long *)0x0) goto LAB_07d46de4;
      (**(code **)(*plVar17 + 0x598))
                (plVar17,*(undefined8 *)PTR_DAT_092fc418,*(undefined8 *)puVar3,uVar10,
                 *(undefined8 *)(*plVar17 + 0x5a0));
    }
    else if (plVar17 == (long *)0x0) goto LAB_07d46de4;
    (**(code **)(*plVar17 + 0x598))
              (plVar17,*(undefined8 *)PTR_DAT_092ff6f0,*(undefined8 *)puVar3,
               *(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(*plVar17 + 0x5a0));
    local_68 = *(undefined4 *)(lVar12 + 100);
    if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar10 = FUN_076060c0(0);
    uVar10 = FUN_07676d08(&local_68,uVar10,0);
    (**(code **)(*plVar17 + 0x598))
              (plVar17,*(undefined8 *)PTR_DAT_09301668,*(undefined8 *)puVar3,uVar10,
               *(undefined8 *)(*plVar17 + 0x5a0));
    if (plVar16 == (long *)0x0) goto LAB_07d46de4;
    (**(code **)(*plVar16 + 0x2f8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x300));
    puVar24 = (undefined8 *)PTR_DAT_09301400;
    puVar26 = (undefined8 *)PTR_DAT_092bbd48;
    plVar16 = (long *)(**(code **)(*param_3 + 0x648))
                                (param_3,*(undefined8 *)PTR_DAT_09301400,
                                 *(undefined8 *)PTR_DAT_092cf1e8,*(undefined8 *)PTR_DAT_092bbd48,
                                 *(undefined8 *)(*param_3 + 0x650));
    (**(code **)(*plVar17 + 0x2f8))(plVar17,plVar16,*(undefined8 *)(*plVar17 + 0x300));
    FUN_07d4769c(param_1,lVar12,param_3,plVar16);
  }
  plVar17 = (long *)(**(code **)(*param_3 + 0x648))
                              (param_3,*puVar24,*(undefined8 *)PTR_DAT_09301ae0,*puVar26,
                               *(undefined8 *)(*param_3 + 0x650));
  if (plVar16 == (long *)0x0) goto LAB_07d46de4;
  uVar10 = (**(code **)(*plVar16 + 0x2f8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x300));
  FUN_07d48f6c(uVar10,param_2);
  if (0 < iVar4) {
    iVar8 = 0;
    do {
      plVar18 = (long *)FUN_07cea494(plVar13,iVar8,0);
      if (plVar18 == (long *)0x0) goto LAB_07d46de4;
      iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
      if ((iVar7 != 3) &&
         ((((iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
            iVar7 == 2 ||
            (iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
            iVar7 == 1)) ||
           (iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
           iVar7 == 4)) && (uVar11 = FUN_07d49500(param_1,plVar18), (uVar11 & 1) == 0)))) {
        iVar7 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
        uVar10 = FUN_07d481e8(param_1,plVar18,param_3);
        plVar18 = plVar17;
        if (iVar7 != 1) {
          plVar18 = plVar16;
        }
        if (plVar18 == (long *)0x0) goto LAB_07d46de4;
        (**(code **)(*plVar18 + 0x2f8))(plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x300));
      }
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  puVar26 = (undefined8 *)PTR_DAT_09301400;
  if ((*(long *)(param_2 + 0xf8) == 0) && ((param_5 & 1) != 0)) {
    plVar13 = (long *)FUN_07cb5f88(param_2,0);
    if (plVar13 == (long *)0x0) goto LAB_07d46de4;
    iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        plVar18 = (long *)(**(code **)(*plVar13 + 0x208))
                                    (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
        if (plVar18 == (long *)0x0) goto LAB_07d46de4;
        uVar11 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
        if ((uVar11 & 1) != 0) {
          plVar18 = (long *)(**(code **)(*plVar13 + 0x208))
                                      (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
          if (plVar18 == (long *)0x0) goto LAB_07d46de4;
          lVar12 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
          if (lVar12 == param_2) {
            plVar18 = (long *)(**(code **)(*param_3 + 0x648))
                                        (param_3,*puVar26,*(undefined8 *)PTR_DAT_092db308,
                                         *(undefined8 *)PTR_DAT_092bbd48,
                                         *(undefined8 *)(*param_3 + 0x650));
            lVar25 = param_2;
LAB_07d45470:
            uVar10 = FUN_07cb7f3c(lVar25,0);
            if (plVar18 == (long *)0x0) goto LAB_07d46de4;
            (**(code **)(*plVar18 + 0x558))
                      (plVar18,*(undefined8 *)PTR_DAT_092d2388,uVar10,
                       *(undefined8 *)(*plVar18 + 0x560));
          }
          else {
            if (lVar12 == 0) goto LAB_07d46de4;
            iVar8 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar12,0);
            if (1 < iVar8) {
              plVar18 = (long *)(**(code **)(*param_3 + 0x648))
                                          (param_3,*puVar26,*(undefined8 *)PTR_DAT_092db308,
                                           *(undefined8 *)PTR_DAT_092bbd48,
                                           *(undefined8 *)(*param_3 + 0x650));
              lVar25 = lVar12;
              goto LAB_07d45470;
            }
            plVar18 = (long *)FUN_07d44500(param_1,lVar12,param_3,param_4,1);
          }
          uVar10 = FUN_07cb02a0(lVar12,0);
          uVar15 = FUN_07cb02a0(param_2,0);
          uVar11 = thunk_FUN_074e4840(uVar10,uVar15,0);
          if ((uVar11 & 1) != 0) {
            if (plVar18 == (long *)0x0) goto LAB_07d46de4;
            (**(code **)(*plVar18 + 0x558))
                      (plVar18,*(undefined8 *)PTR_DAT_09301458,*(undefined8 *)PTR_DAT_09288ce0,
                       *(undefined8 *)(*plVar18 + 0x560));
            (**(code **)(*plVar18 + 0x558))
                      (plVar18,*(undefined8 *)PTR_DAT_09301460,*(undefined8 *)PTR_DAT_09301a90,
                       *(undefined8 *)(*plVar18 + 0x560));
          }
          uVar10 = FUN_07cb02a0(lVar12,0);
          uVar15 = FUN_07cb02a0(param_2,0);
          uVar11 = thunk_FUN_074e4840(uVar10,uVar15,0);
          if ((uVar11 & 1) == 0) {
            lVar25 = FUN_07cb02a0(lVar12,0);
            if (lVar25 == 0) goto LAB_07d46de4;
            if ((*(int *)(lVar25 + 0x10) != 0) && (*(int *)(param_1 + 0x5c) != 2)) {
              iVar8 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar12,0);
              puVar3 = PTR_DAT_092bbd48;
              if (iVar8 < 2) {
                uVar10 = FUN_07cb02a0(lVar12,0);
                plVar19 = (long *)FUN_07d47408(param_1,uVar10);
                if (plVar19 == (long *)0x0) goto LAB_07d46de4;
                (**(code **)(*plVar19 + 0x2f8))(plVar19,plVar18,*(undefined8 *)(*plVar19 + 0x300));
              }
              plVar18 = (long *)(**(code **)(*param_3 + 0x648))
                                          (param_3,*puVar26,*(undefined8 *)PTR_DAT_092db308,
                                           *(undefined8 *)puVar3,*(undefined8 *)(*param_3 + 0x650));
              plVar19 = *(long **)(param_1 + 0x28);
              uVar10 = FUN_07cb02a0(lVar12,0);
              if (plVar19 == (long *)0x0) goto LAB_07d46de4;
              plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                          (plVar19,uVar10,*(undefined8 *)(*plVar19 + 0x310));
              uVar10 = FUN_07cb7f3c(lVar12,0);
              if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_09285980 + 0x90)))
              goto LAB_07d46e00;
              uVar10 = FUN_074e691c(plVar19,*(undefined8 *)PTR_DAT_092860a8,uVar10,0);
              if (plVar18 == (long *)0x0) goto LAB_07d46de4;
              (**(code **)(*plVar18 + 0x558))
                        (plVar18,*(undefined8 *)PTR_DAT_092d2388,uVar10,
                         *(undefined8 *)(*plVar18 + 0x560));
              puVar26 = (undefined8 *)PTR_DAT_09301400;
            }
          }
          if (plVar17 == (long *)0x0) goto LAB_07d46de4;
          (**(code **)(*plVar17 + 0x2f8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x300));
          plVar19 = (long *)(**(code **)(*plVar13 + 0x208))
                                      (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
          if (plVar19 == (long *)0x0) goto LAB_07d46de4;
          lVar12 = (**(code **)(*plVar19 + 0x208))(plVar19,*(undefined8 *)(*plVar19 + 0x210));
          if (lVar12 == 0) {
            plVar19 = *(long **)(param_1 + 0x48);
            if ((plVar19 == (long *)0x0) ||
               (plVar19 = (long *)(**(code **)(*plVar19 + 0x648))
                                            (plVar19,*puVar26,*(undefined8 *)PTR_DAT_092e1310,
                                             *(undefined8 *)PTR_DAT_092bbd48,
                                             *(undefined8 *)(*plVar19 + 0x650)),
               plVar18 == (long *)0x0)) goto LAB_07d46de4;
            (**(code **)(*plVar18 + 0x2e8))(plVar18,plVar19,*(undefined8 *)(*plVar18 + 0x2f0));
            plVar18 = *(long **)(param_1 + 0x48);
            if ((plVar18 == (long *)0x0) ||
               (plVar18 = (long *)(**(code **)(*plVar18 + 0x648))
                                            (plVar18,*puVar26,*(undefined8 *)PTR_DAT_09301a98,
                                             *(undefined8 *)PTR_DAT_092bbd48,
                                             *(undefined8 *)(*plVar18 + 0x650)),
               plVar19 == (long *)0x0)) goto LAB_07d46de4;
            (**(code **)(*plVar19 + 0x2f8))(plVar19,plVar18,*(undefined8 *)(*plVar19 + 0x300));
            uVar10 = (**(code **)(*plVar13 + 0x208))
                               (plVar13,iVar4,*(undefined8 *)(*plVar13 + 0x210));
            uVar10 = FUN_07d43a70(param_1,uVar10,param_3);
            if (plVar18 == (long *)0x0) goto LAB_07d46de4;
            (**(code **)(*plVar18 + 0x2f8))(plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x300));
          }
        }
        iVar4 = iVar4 + 1;
        iVar8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
      } while (iVar4 < iVar8);
    }
  }
  if ((plVar17 != (long *)0x0) &&
     (uVar11 = (**(code **)(*plVar17 + 0x348))(plVar17,*(undefined8 *)(*plVar17 + 0x350)),
     (uVar11 & 1) == 0)) {
    (**(code **)(*plVar16 + 0x2d8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x2e0));
  }
  plVar13 = *(long **)(param_2 + 0x48);
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_07d45850:
    puVar24 = *(undefined8 **)(*(long *)(PTR_DAT_09285980 + 0x90) + 0xb8);
  }
  else {
    lVar12 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
    if (lVar12 == 0) goto LAB_07d46de4;
    puVar24 = (undefined8 *)PTR_DAT_09301b10;
    if (*(int *)(lVar12 + 0x10) == 0) goto LAB_07d45850;
  }
  if (*(int *)(param_1 + 0x5c) == 2) {
LAB_07d45910:
    local_70 = *puVar24;
  }
  else {
    uVar10 = FUN_07cb02a0(param_2,0);
    FUN_07d47408(param_1,uVar10);
    lVar12 = FUN_07cb02a0(param_2,0);
    if (lVar12 == 0) goto LAB_07d46de4;
    if (*(int *)(lVar12 + 0x10) == 0) {
      puVar24 = *(undefined8 **)(*(long *)(PTR_DAT_09285980 + 0x90) + 0xb8);
      goto LAB_07d45910;
    }
    plVar16 = *(long **)(param_1 + 0x28);
    uVar10 = FUN_07cb02a0(param_2,0);
    if (plVar16 == (long *)0x0) goto LAB_07d46de4;
    plVar19 = (long *)(**(code **)(*plVar16 + 0x308))
                                (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x310));
    if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_09285980 + 0x90))) {
LAB_07d46e00:
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar19);
    }
    local_70 = FUN_074d875c(plVar19,*(undefined8 *)PTR_DAT_092860a8,0);
  }
  if (plVar13 != (long *)0x0) {
    iVar4 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (0 < iVar4) {
      iVar4 = 0;
      plVar16 = (long *)PTR_DAT_092ff0d8;
      plVar17 = (long *)PTR_DAT_092ff0e0;
      do {
        plVar18 = (long *)FUN_07ce6ab4(plVar13,iVar4,0);
        if (plVar18 == (long *)0x0) {
LAB_07d45988:
          plVar18 = (long *)FUN_07ce6ab4(plVar13,iVar4,0);
          if (plVar18 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar16 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar18 + 0x130)) &&
                (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) == *plVar16)) &&
               ((param_5 & 1) != 0)) {
              plVar18 = (long *)FUN_07ce6ab4(plVar13,iVar4,0);
              if (plVar18 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar16 + 0x130);
                if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *plVar16)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar18);
                }
              }
              plVar19 = *(long **)(param_1 + 0x38);
              if (plVar19 == (long *)0x0) goto LAB_07d46de4;
              iVar8 = (**(code **)(*plVar19 + 0x298))(plVar19,*(undefined8 *)(*plVar19 + 0x2a0));
              if (iVar8 < 1) {
                uVar11 = FUN_07d49500(param_1,plVar18);
                if ((uVar11 & 1) == 0) {
                  if (plVar18 == (long *)0x0) goto LAB_07d46de4;
LAB_07d46044:
                  plVar16 = (long *)FUN_07d133b8(plVar18,0);
                  lVar12 = FUN_07d12c38(plVar18,0);
                  lVar25 = (**(code **)(*plVar18 + 0x2c8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                  if (lVar25 == 0) goto LAB_07d46de4;
                  lVar25 = *(long *)(lVar25 + 0x48);
                  uVar10 = thunk_FUN_040b4efc(*plVar17);
                  FUN_07d1d374(uVar10,*(undefined8 *)PTR_DAT_09301a70,lVar12,0);
                  puVar26 = (undefined8 *)PTR_DAT_092bbd48;
                  if (lVar25 == 0) goto LAB_07d46de4;
                  plVar19 = (long *)FUN_07ce71bc(lVar25,uVar10,0);
                  if (plVar19 == (long *)0x0) {
                    plVar17 = (long *)(**(code **)(*param_3 + 0x648))
                                                (param_3,*(undefined8 *)PTR_DAT_09301400,
                                                 *(undefined8 *)PTR_DAT_092a7a58,*puVar26,
                                                 *(undefined8 *)(*param_3 + 0x650));
                    uVar10 = FUN_07ce66c0(plVar18,0);
                    if (*(int *)(*(long *)PTR_DAT_092aa098 + 0xe4) == 0) {
                      thunk_FUN_040d65a8(*(long *)PTR_DAT_092aa098);
                    }
                    uVar10 = FUN_07f47104(uVar10,0);
                    if (plVar17 == (long *)0x0) goto LAB_07d46de4;
                    (**(code **)(*plVar17 + 0x558))
                              (plVar17,*(undefined8 *)PTR_DAT_0928bfe0,uVar10,
                               *(undefined8 *)(*plVar17 + 0x560));
                    if (*(long *)(param_1 + 0x30) == 0) {
LAB_07d461d4:
                      uVar10 = FUN_07cb02a0(param_2,0);
                      (**(code **)(*plVar17 + 0x598))
                                (plVar17,*(undefined8 *)PTR_DAT_09301868,
                                 *(undefined8 *)PTR_DAT_092ff508,uVar10,
                                 *(undefined8 *)(*plVar17 + 0x5a0));
                    }
                    else {
                      lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                      if (lVar25 == 0) goto LAB_07d46de4;
                      iVar8 = FUN_07cf9064(lVar25,*(undefined8 *)(param_2 + 0x90),0);
                      if (iVar8 == -3) goto LAB_07d461d4;
                    }
                    plVar21 = (long *)(**(code **)(*param_3 + 0x648))
                                                (param_3,*(undefined8 *)PTR_DAT_09301400,
                                                 *(undefined8 *)PTR_DAT_092b7bf0,*puVar26,
                                                 *(undefined8 *)(*param_3 + 0x650));
                    lVar25 = (**(code **)(*plVar18 + 0x2c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                    if (lVar25 == 0) goto LAB_07d46de4;
                    uVar10 = FUN_07cb7f3c(lVar25,0);
                    uVar10 = FUN_074e691c(*(undefined8 *)PTR_DAT_09301af8,local_70,uVar10,0);
                    if (plVar21 == (long *)0x0) goto LAB_07d46de4;
                    (**(code **)(*plVar21 + 0x558))
                              (plVar21,*(undefined8 *)PTR_DAT_092e8aa8,uVar10,
                               *(undefined8 *)(*plVar21 + 0x560));
                    (**(code **)(*plVar17 + 0x2f8))
                              (plVar17,plVar21,*(undefined8 *)(*plVar17 + 0x300));
                    if (lVar12 == 0) goto LAB_07d46de4;
                    if (*(long *)(lVar12 + 0x18) != 0) {
                      plVar21 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
                      FUN_074f484c(plVar21,0);
                      if (0 < *(int *)(lVar12 + 0x18)) {
                        if (plVar21 == (long *)0x0) goto LAB_07d46de4;
                        lVar27 = 0;
                        lVar25 = lVar12 + 0x20;
                        do {
                          FUN_074f585c(plVar21,0,0);
                          uVar28 = (uint)lVar27;
                          if (*(int *)(param_1 + 0x5c) == 2) {
                            plVar20 = (long *)FUN_074ee2d4(plVar21,local_70,0);
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if ((lVar14 == 0) ||
                               (uVar10 = FUN_07cc9260(lVar14,0), plVar20 == (long *)0x0))
                            goto LAB_07d46de4;
                          }
                          else {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_07d46de4;
                            uVar10 = FUN_07ccae88(lVar14,0);
                            FUN_07d47408(param_1,uVar10);
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_07d46de4;
                            uVar10 = FUN_07ccae88(lVar14,0);
                            uVar11 = FUN_074e5d94(uVar10,0);
                            if ((uVar11 & 1) == 0) {
                              if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                              lVar14 = *(long *)(lVar25 + lVar27 * 8);
                              if (lVar14 == 0) goto LAB_07d46de4;
                              plVar20 = *(long **)(param_1 + 0x28);
                              uVar10 = FUN_07ccae88(lVar14,0);
                              if (plVar20 == (long *)0x0) goto LAB_07d46de4;
                              uVar10 = (**(code **)(*plVar20 + 0x308))
                                                 (plVar20,uVar10,*(undefined8 *)(*plVar20 + 0x310));
                              lVar14 = FUN_074f6b10(plVar21,uVar10,0);
                              if (lVar14 == 0) goto LAB_07d46de4;
                              FUN_074ee284(lVar14,0x3a,0);
                            }
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_07d46de4;
                            uVar10 = FUN_07cc9260(lVar14,0);
                            plVar20 = plVar21;
                          }
                          FUN_074ee2d4(plVar20,uVar10,0);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                          plVar20 = *(long **)(lVar25 + lVar27 * 8);
                          if (plVar20 == (long *)0x0) goto LAB_07d46de4;
                          iVar8 = (**(code **)(*plVar20 + 0x1d8))
                                            (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                          if (iVar8 == 2) {
LAB_07d46488:
                            FUN_074f6d78(plVar21,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                            plVar20 = *(long **)(lVar25 + lVar27 * 8);
                            if (plVar20 == (long *)0x0) goto LAB_07d46de4;
                            iVar8 = (**(code **)(*plVar20 + 0x1d8))
                                              (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                            if (iVar8 == 4) goto LAB_07d46488;
                          }
                          plVar20 = (long *)(**(code **)(*param_3 + 0x648))
                                                      (param_3,*(undefined8 *)PTR_DAT_09301400,
                                                       *(undefined8 *)PTR_DAT_092b6e00,
                                                       *(undefined8 *)PTR_DAT_092bbd48,
                                                       *(undefined8 *)(*param_3 + 0x650));
                          uVar10 = (**(code **)(*plVar21 + 0x168))
                                             (plVar21,*(undefined8 *)(*plVar21 + 0x170));
                          if (plVar20 == (long *)0x0) goto LAB_07d46de4;
                          (**(code **)(*plVar20 + 0x558))
                                    (plVar20,*(undefined8 *)PTR_DAT_092e8aa8,uVar10,
                                     *(undefined8 *)(*plVar20 + 0x560));
                          (**(code **)(*plVar17 + 0x2f8))
                                    (plVar17,plVar20,*(undefined8 *)(*plVar17 + 0x300));
                          lVar27 = lVar27 + 1;
                        } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
                      }
                    }
                    plVar21 = *(long **)(param_1 + 0x78);
                    if (plVar21 == (long *)0x0) goto LAB_07d46de4;
                    (**(code **)(*plVar21 + 0x2a8))
                              (plVar21,plVar17,*(undefined8 *)(param_1 + 0x80),
                               *(undefined8 *)(*plVar21 + 0x2b0));
                    puVar26 = (undefined8 *)PTR_DAT_092bbd48;
                    plVar17 = (long *)PTR_DAT_092ff0e0;
                  }
                  else {
                    bVar1 = *(byte *)(*plVar17 + 0x130);
                    if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17)) {
LAB_07d46dec:
                    /* WARNING: Subroutine does not return */
                      FUN_04077bb0(plVar19);
                    }
                  }
                  plVar21 = (long *)(**(code **)(*param_3 + 0x648))
                                              (param_3,*(undefined8 *)PTR_DAT_09301400,
                                               *(undefined8 *)PTR_DAT_092fff28,*puVar26,
                                               *(undefined8 *)(*param_3 + 0x650));
                  uVar10 = FUN_07ce66c0(plVar18,0);
                  if (*(int *)(*(long *)PTR_DAT_092aa098 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(*(long *)PTR_DAT_092aa098);
                  }
                  uVar10 = FUN_07f47104(uVar10,0);
                  if (plVar21 == (long *)0x0) goto LAB_07d46de4;
                  (**(code **)(*plVar21 + 0x558))
                            (plVar21,*(undefined8 *)PTR_DAT_0928bfe0,uVar10,
                             *(undefined8 *)(*plVar21 + 0x560));
                  if (*(long *)(param_1 + 0x30) == 0) {
LAB_07d46640:
                    lVar12 = (**(code **)(*plVar18 + 0x1b8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                    if (lVar12 == 0) goto LAB_07d46de4;
                    uVar10 = FUN_07cb02a0(lVar12,0);
                    (**(code **)(*plVar21 + 0x598))
                              (plVar21,*(undefined8 *)PTR_DAT_09301868,
                               *(undefined8 *)PTR_DAT_092ff508,uVar10,
                               *(undefined8 *)(*plVar21 + 0x5a0));
                  }
                  else {
                    lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                    lVar12 = (**(code **)(*plVar18 + 0x2c8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                    if ((lVar12 == 0) || (lVar25 == 0)) goto LAB_07d46de4;
                    iVar8 = FUN_07cf9064(lVar25,*(undefined8 *)(lVar12 + 0x90),0);
                    if (iVar8 == -3) goto LAB_07d46640;
                  }
                  plVar20 = plVar18;
                  if (plVar19 != (long *)0x0) {
                    plVar20 = plVar19;
                  }
                  uVar10 = FUN_07ce66c0(plVar20,0);
                  if (*(int *)(*(long *)PTR_DAT_092aa098 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(*(long *)PTR_DAT_092aa098);
                  }
                  uVar10 = FUN_07f47104(uVar10,0);
                  (**(code **)(*plVar21 + 0x558))
                            (plVar21,*(undefined8 *)PTR_DAT_092fff20,uVar10,
                             *(undefined8 *)(*plVar21 + 0x560));
                  lVar12 = plVar18[6];
                  uVar10 = *(undefined8 *)PTR_DAT_093005a0;
                  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar10 = FUN_0768890c(uVar10,0);
                  FUN_07d3c164(lVar12,plVar21,uVar10);
                  uVar10 = (**(code **)(*plVar18 + 0x178))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                  uVar15 = FUN_07ce66c0(plVar18,0);
                  uVar11 = FUN_074e4b3c(uVar10,uVar15,0);
                  if ((uVar11 & 1) != 0) {
                    uVar10 = (**(code **)(*plVar18 + 0x178))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                    (**(code **)(*plVar21 + 0x598))
                              (plVar21,*(undefined8 *)PTR_DAT_09301850,
                               *(undefined8 *)PTR_DAT_092ff508,uVar10,
                               *(undefined8 *)(*plVar21 + 0x5a0));
                  }
                  if (plVar16 == (long *)0x0) {
                    lVar12 = *plVar21;
                    uVar15 = *(undefined8 *)PTR_DAT_09301858;
                    uVar22 = *(undefined8 *)PTR_DAT_092ff508;
                    uVar23 = *(undefined8 *)(lVar12 + 0x5a0);
                    uVar10 = *(undefined8 *)PTR_DAT_092a6388;
LAB_07d4690c:
                    (**(code **)(lVar12 + 0x598))(plVar21,uVar15,uVar22,uVar10,uVar23);
                  }
                  else {
                    uVar11 = (**(code **)(*plVar16 + 0x1d8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                    if ((uVar11 & 1) != 0) {
                      (**(code **)(*plVar21 + 0x598))
                                (plVar21,*(undefined8 *)PTR_DAT_093017b0,
                                 *(undefined8 *)PTR_DAT_092ff508,*(undefined8 *)PTR_DAT_092a6388,
                                 *(undefined8 *)(*plVar21 + 0x5a0));
                    }
                    lVar12 = plVar16[3];
                    uVar10 = *(undefined8 *)PTR_DAT_09301190;
                    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_040d65a8();
                    }
                    uVar10 = FUN_0768890c(uVar10,0);
                    FUN_07d3c164(lVar12,plVar21,uVar10);
                    uVar10 = (**(code **)(*plVar18 + 0x178))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x180));
                    uVar15 = (**(code **)(*plVar16 + 0x1c8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
                    uVar11 = FUN_074e4b3c(uVar10,uVar15,0);
                    if ((uVar11 & 1) != 0) {
                      uVar10 = (**(code **)(*plVar16 + 0x1c8))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
                      if (*(int *)(*(long *)PTR_DAT_092aa098 + 0xe4) == 0) {
                        thunk_FUN_040d65a8(*(long *)PTR_DAT_092aa098);
                      }
                      uVar10 = FUN_07f47104(uVar10,0);
                      lVar12 = *plVar21;
                      uVar15 = *(undefined8 *)PTR_DAT_09301848;
                      uVar23 = *(undefined8 *)(lVar12 + 0x5a0);
                      uVar22 = *(undefined8 *)PTR_DAT_092ff508;
                      goto LAB_07d4690c;
                    }
                  }
                  plVar16 = (long *)(**(code **)(*param_3 + 0x648))
                                              (param_3,*(undefined8 *)PTR_DAT_09301400,
                                               *(undefined8 *)PTR_DAT_092b7bf0,*puVar26,
                                               *(undefined8 *)(*param_3 + 0x650));
                  uVar10 = FUN_07cb7f3c(param_2,0);
                  uVar10 = FUN_074e691c(*(undefined8 *)PTR_DAT_09301af8,local_70,uVar10,0);
                  if (plVar16 == (long *)0x0) goto LAB_07d46de4;
                  (**(code **)(*plVar16 + 0x558))
                            (plVar16,*(undefined8 *)PTR_DAT_092e8aa8,uVar10,
                             *(undefined8 *)(*plVar16 + 0x560));
                  (**(code **)(*plVar21 + 0x2f8))(plVar21,plVar16,*(undefined8 *)(*plVar21 + 0x300))
                  ;
                  iVar8 = (**(code **)(*plVar18 + 0x278))(plVar18,*(undefined8 *)(*plVar18 + 0x280))
                  ;
                  puVar3 = PTR_DAT_092ff508;
                  if (iVar8 != 0) {
                    (**(code **)(*plVar18 + 0x278))(plVar18,*(undefined8 *)(*plVar18 + 0x280));
                    uVar10 = FUN_07d48e48();
                    (**(code **)(*plVar21 + 0x598))
                              (plVar21,*(undefined8 *)PTR_DAT_09301878,*(undefined8 *)puVar3,uVar10,
                               *(undefined8 *)(*plVar21 + 0x5a0));
                  }
                  iVar8 = (**(code **)(*plVar18 + 0x2d8))(plVar18,*(undefined8 *)(*plVar18 + 0x2e0))
                  ;
                  if (iVar8 != 1) {
                    (**(code **)(*plVar18 + 0x2d8))(plVar18,*(undefined8 *)(*plVar18 + 0x2e0));
                    uVar10 = FUN_07d48eb8();
                    (**(code **)(*plVar21 + 0x598))
                              (plVar21,*(undefined8 *)PTR_DAT_09301860,*(undefined8 *)puVar3,uVar10,
                               *(undefined8 *)(*plVar21 + 0x5a0));
                  }
                  iVar8 = (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0))
                  ;
                  if (iVar8 != 1) {
                    (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
                    uVar10 = FUN_07d48eb8();
                    (**(code **)(*plVar21 + 0x598))
                              (plVar21,*(undefined8 *)PTR_DAT_09301870,*(undefined8 *)puVar3,uVar10,
                               *(undefined8 *)(*plVar21 + 0x5a0));
                  }
                  lVar12 = (**(code **)(*plVar18 + 0x268))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x270));
                  if (lVar12 == 0) goto LAB_07d46de4;
                  if (*(long *)(lVar12 + 0x18) != 0) {
                    plVar16 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
                    FUN_074f484c(plVar16,0);
                    if (0 < *(int *)(lVar12 + 0x18)) {
                      if (plVar16 == (long *)0x0) goto LAB_07d46de4;
                      lVar27 = 0;
                      lVar25 = lVar12 + 0x20;
                      do {
                        FUN_074f585c(plVar16,0,0);
                        uVar28 = (uint)lVar27;
                        if (*(int *)(param_1 + 0x5c) == 2) {
                          plVar18 = (long *)FUN_074ee2d4(plVar16,local_70,0);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if ((lVar14 == 0) ||
                             (uVar10 = FUN_07cc9260(lVar14,0), plVar18 == (long *)0x0))
                          goto LAB_07d46de4;
                        }
                        else {
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_07d46de4;
                          uVar10 = FUN_07ccae88(lVar14,0);
                          FUN_07d47408(param_1,uVar10);
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_07d46de4;
                          uVar10 = FUN_07ccae88(lVar14,0);
                          uVar11 = FUN_074e5d94(uVar10,0);
                          if ((uVar11 & 1) == 0) {
                            if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                            lVar14 = *(long *)(lVar25 + lVar27 * 8);
                            if (lVar14 == 0) goto LAB_07d46de4;
                            plVar18 = *(long **)(param_1 + 0x28);
                            uVar10 = FUN_07ccae88(lVar14,0);
                            if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                            uVar10 = (**(code **)(*plVar18 + 0x308))
                                               (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
                            lVar14 = FUN_074f6b10(plVar16,uVar10,0);
                            if (lVar14 == 0) goto LAB_07d46de4;
                            FUN_074ee284(lVar14,0x3a,0);
                          }
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                          lVar14 = *(long *)(lVar25 + lVar27 * 8);
                          if (lVar14 == 0) goto LAB_07d46de4;
                          uVar10 = FUN_07cc9260(lVar14,0);
                          plVar18 = plVar16;
                        }
                        FUN_074ee2d4(plVar18,uVar10,0);
                        if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                        plVar18 = *(long **)(lVar25 + lVar27 * 8);
                        if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                        iVar8 = (**(code **)(*plVar18 + 0x1d8))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
                        if (iVar8 == 2) {
LAB_07d46cac:
                          FUN_074f6d78(plVar16,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                          plVar18 = *(long **)(lVar25 + lVar27 * 8);
                          if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                          iVar8 = (**(code **)(*plVar18 + 0x1d8))
                                            (plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
                          if (iVar8 == 4) goto LAB_07d46cac;
                        }
                        plVar18 = (long *)(**(code **)(*param_3 + 0x648))
                                                    (param_3,*(undefined8 *)PTR_DAT_09301400,
                                                     *(undefined8 *)PTR_DAT_092b6e00,
                                                     *(undefined8 *)PTR_DAT_092bbd48,
                                                     *(undefined8 *)(*param_3 + 0x650));
                        uVar10 = (**(code **)(*plVar16 + 0x168))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                        if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                        (**(code **)(*plVar18 + 0x558))
                                  (plVar18,*(undefined8 *)PTR_DAT_092e8aa8,uVar10,
                                   *(undefined8 *)(*plVar18 + 0x560));
                        (**(code **)(*plVar21 + 0x2f8))
                                  (plVar21,plVar18,*(undefined8 *)(*plVar21 + 0x300));
                        lVar27 = lVar27 + 1;
                      } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
                    }
                  }
                  plVar16 = *(long **)(param_1 + 0x78);
                  if (plVar16 == (long *)0x0) goto LAB_07d46de4;
                  (**(code **)(*plVar16 + 0x2b8))
                            (plVar16,plVar21,*(undefined8 *)(param_1 + 0x80),
                             *(undefined8 *)(*plVar16 + 0x2c0));
                  plVar16 = (long *)PTR_DAT_092ff0d8;
                  puVar26 = (undefined8 *)PTR_DAT_09301400;
                }
              }
              else {
                if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                plVar16 = *(long **)(param_1 + 0x38);
                uVar10 = (**(code **)(*plVar18 + 0x2c8))(plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
                if (plVar16 == (long *)0x0) goto LAB_07d46de4;
                uVar11 = (**(code **)(*plVar16 + 0x348))
                                   (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x350));
                plVar16 = (long *)PTR_DAT_092ff0d8;
                if ((uVar11 & 1) != 0) {
                  plVar16 = *(long **)(param_1 + 0x38);
                  uVar10 = (**(code **)(*plVar18 + 0x1b8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
                  if (plVar16 == (long *)0x0) goto LAB_07d46de4;
                  uVar11 = (**(code **)(*plVar16 + 0x348))
                                     (plVar16,uVar10,*(undefined8 *)(*plVar16 + 0x350));
                  plVar16 = (long *)PTR_DAT_092ff0d8;
                  if (((uVar11 & 1) != 0) &&
                     (uVar11 = FUN_07d49500(param_1,plVar18), (uVar11 & 1) == 0)) goto LAB_07d46044;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar17 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
          goto LAB_07d45988;
          plVar19 = (long *)FUN_07ce6ab4(plVar13,iVar4,0);
          if (plVar19 == (long *)0x0) {
            uVar11 = FUN_07d49500(param_1,0);
            if ((uVar11 & 1) == 0) goto LAB_07d46de4;
          }
          else {
            bVar1 = *(byte *)(*plVar17 + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
            goto LAB_07d46dec;
            uVar11 = FUN_07d49500(param_1,plVar19);
            if ((uVar11 & 1) != 0) goto LAB_07d46d90;
            lVar12 = plVar19[7];
            plVar16 = (long *)(**(code **)(*param_3 + 0x648))
                                        (param_3,*puVar26,*(undefined8 *)PTR_DAT_09301af0,
                                         *(undefined8 *)PTR_DAT_092bbd48,
                                         *(undefined8 *)(*param_3 + 0x650));
            if (*(long *)(param_1 + 0x30) == 0) {
LAB_07d45b78:
              uVar10 = FUN_07cb02a0(param_2,0);
              if (plVar16 == (long *)0x0) goto LAB_07d46de4;
              (**(code **)(*plVar16 + 0x598))
                        (plVar16,*(undefined8 *)PTR_DAT_09301868,*(undefined8 *)PTR_DAT_092ff508,
                         uVar10,*(undefined8 *)(*plVar16 + 0x5a0));
            }
            else {
              lVar25 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
              if (lVar25 == 0) goto LAB_07d46de4;
              iVar8 = FUN_07cf9064(lVar25,*(undefined8 *)(param_2 + 0x90),0);
              if (iVar8 == -3) goto LAB_07d45b78;
            }
            uVar10 = FUN_07ce66c0(plVar19,0);
            if (*(int *)(*(long *)PTR_DAT_092aa098 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_092aa098);
            }
            uVar10 = FUN_07f47104(uVar10,0);
            if (plVar16 == (long *)0x0) goto LAB_07d46de4;
            (**(code **)(*plVar16 + 0x558))
                      (plVar16,*(undefined8 *)PTR_DAT_0928bfe0,uVar10,
                       *(undefined8 *)(*plVar16 + 0x560));
            uVar10 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
            uVar15 = FUN_07ce66c0(plVar19,0);
            uVar11 = FUN_074e4b3c(uVar10,uVar15,0);
            if ((uVar11 & 1) != 0) {
              uVar10 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
              (**(code **)(*plVar16 + 0x598))
                        (plVar16,*(undefined8 *)PTR_DAT_09301850,*(undefined8 *)PTR_DAT_092ff508,
                         uVar10,*(undefined8 *)(*plVar16 + 0x5a0));
            }
            FUN_07d3c164(plVar19[6],plVar16,0);
            plVar17 = (long *)(**(code **)(*param_3 + 0x648))
                                        (param_3,*puVar26,*(undefined8 *)PTR_DAT_092b7bf0,
                                         *(undefined8 *)PTR_DAT_092bbd48,
                                         *(undefined8 *)(*param_3 + 0x650));
            uVar10 = FUN_07cb7f3c(param_2,0);
            uVar10 = FUN_074e691c(*(undefined8 *)PTR_DAT_09301af8,local_70,uVar10,0);
            if (plVar17 == (long *)0x0) goto LAB_07d46de4;
            (**(code **)(*plVar17 + 0x558))
                      (plVar17,*(undefined8 *)PTR_DAT_092e8aa8,uVar10,
                       *(undefined8 *)(*plVar17 + 0x560));
            (**(code **)(*plVar16 + 0x2f8))(plVar16,plVar17,*(undefined8 *)(*plVar16 + 0x300));
            uVar11 = FUN_07d1e42c(plVar19,0);
            if ((uVar11 & 1) != 0) {
              (**(code **)(*plVar16 + 0x598))
                        (plVar16,*(undefined8 *)PTR_DAT_09301898,*(undefined8 *)PTR_DAT_092ff508,
                         *(undefined8 *)PTR_DAT_092a6388,*(undefined8 *)(*plVar16 + 0x5a0));
            }
            if (lVar12 == 0) goto LAB_07d46de4;
            if (*(long *)(lVar12 + 0x18) != 0) {
              plVar17 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285ee8);
              FUN_074f484c(plVar17,0);
              if (0 < *(int *)(lVar12 + 0x18)) {
                if (plVar17 == (long *)0x0) goto LAB_07d46de4;
                lVar27 = 0;
                lVar25 = lVar12 + 0x20;
                do {
                  FUN_074f585c(plVar17,0,0);
                  uVar28 = (uint)lVar27;
                  if (*(int *)(param_1 + 0x5c) == 2) {
                    plVar18 = (long *)FUN_074ee2d4(plVar17,local_70,0);
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if ((lVar14 == 0) || (uVar10 = FUN_07cc9260(lVar14,0), plVar18 == (long *)0x0))
                    goto LAB_07d46de4;
                  }
                  else {
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_07d46de4;
                    uVar10 = FUN_07ccae88(lVar14,0);
                    FUN_07d47408(param_1,uVar10);
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_07d46de4;
                    uVar10 = FUN_07ccae88(lVar14,0);
                    uVar11 = FUN_074e5d94(uVar10,0);
                    if ((uVar11 & 1) == 0) {
                      if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                      lVar14 = *(long *)(lVar25 + lVar27 * 8);
                      if (lVar14 == 0) goto LAB_07d46de4;
                      plVar18 = *(long **)(param_1 + 0x28);
                      uVar10 = FUN_07ccae88(lVar14,0);
                      if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                      uVar10 = (**(code **)(*plVar18 + 0x308))
                                         (plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x310));
                      lVar14 = FUN_074f6b10(plVar17,uVar10,0);
                      if (lVar14 == 0) goto LAB_07d46de4;
                      FUN_074ee284(lVar14,0x3a,0);
                    }
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                    lVar14 = *(long *)(lVar25 + lVar27 * 8);
                    if (lVar14 == 0) goto LAB_07d46de4;
                    uVar10 = FUN_07cc9260(lVar14,0);
                    plVar18 = plVar17;
                  }
                  FUN_074ee2d4(plVar18,uVar10,0);
                  if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                  plVar18 = *(long **)(lVar25 + lVar27 * 8);
                  if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                  iVar8 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0))
                  ;
                  if (iVar8 == 2) {
LAB_07d45f48:
                    FUN_074f6d78(plVar17,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07d46de8;
                    plVar18 = *(long **)(lVar25 + lVar27 * 8);
                    if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                    iVar8 = (**(code **)(*plVar18 + 0x1d8))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
                    if (iVar8 == 4) goto LAB_07d45f48;
                  }
                  plVar18 = (long *)(**(code **)(*param_3 + 0x648))
                                              (param_3,*(undefined8 *)PTR_DAT_09301400,
                                               *(undefined8 *)PTR_DAT_092b6e00,
                                               *(undefined8 *)PTR_DAT_092bbd48,
                                               *(undefined8 *)(*param_3 + 0x650));
                  uVar10 = (**(code **)(*plVar17 + 0x168))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x170));
                  if (plVar18 == (long *)0x0) goto LAB_07d46de4;
                  (**(code **)(*plVar18 + 0x558))
                            (plVar18,*(undefined8 *)PTR_DAT_092e8aa8,uVar10,
                             *(undefined8 *)(*plVar18 + 0x560));
                  (**(code **)(*plVar16 + 0x2f8))(plVar16,plVar18,*(undefined8 *)(*plVar16 + 0x300))
                  ;
                  lVar27 = lVar27 + 1;
                } while ((int)lVar27 < *(int *)(lVar12 + 0x18));
              }
            }
            plVar17 = *(long **)(param_1 + 0x78);
            if (plVar17 == (long *)0x0) goto LAB_07d46de4;
            (**(code **)(*plVar17 + 0x2a8))
                      (plVar17,plVar16,*(undefined8 *)(param_1 + 0x80),
                       *(undefined8 *)(*plVar17 + 0x2b0));
            plVar16 = (long *)PTR_DAT_092ff0d8;
            plVar17 = (long *)PTR_DAT_092ff0e0;
            puVar26 = (undefined8 *)PTR_DAT_09301400;
          }
        }
LAB_07d46d90:
        iVar4 = iVar4 + 1;
        iVar8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
      } while (iVar4 < iVar8);
    }
    FUN_07d3c164(*(undefined8 *)(param_2 + 0x88),plVar9,0);
    return plVar9;
  }
LAB_07d46de4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


