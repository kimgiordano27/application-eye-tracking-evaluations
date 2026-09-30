/*
FUNCTION_NAME: FUN_07d409ec
ENTRY_POINT: 07d409ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x07d42d10) */
/* WARNING: Removing unreachable block (ram,0x07d42d20) */
/* WARNING: Removing unreachable block (ram,0x07d421b8) */
/* WARNING: Removing unreachable block (ram,0x07d43174) */
/* WARNING: Removing unreachable block (ram,0x07d42af0) */
/* WARNING: Removing unreachable block (ram,0x07d43090) */
/* WARNING: Removing unreachable block (ram,0x07d43098) */
/* WARNING: Removing unreachable block (ram,0x07d430a4) */
/* WARNING: Removing unreachable block (ram,0x07d430c0) */
/* WARNING: Removing unreachable block (ram,0x07d430d0) */
/* WARNING: Removing unreachable block (ram,0x07d42bb8) */
/* WARNING: Removing unreachable block (ram,0x07d40eec) */
/* WARNING: Removing unreachable block (ram,0x07d42f44) */
/* WARNING: Removing unreachable block (ram,0x07d42f48) */
/* WARNING: Removing unreachable block (ram,0x07d43198) */
/* WARNING: Removing unreachable block (ram,0x07d431a8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_07d409ec(long param_1,long *param_2,long *param_3,long param_4,long param_5,uint param_6)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 extraout_x1;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  int *piVar30;
  long *plVar31;
  long lVar32;
  uint uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long *plVar36;
  long *plVar37;
  undefined1 auVar38 [16];
  long *local_a8;
  undefined4 local_9c;
  long *local_98;
  long *local_90;
  char local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar5 = PTR_DAT_092ceb90;
  puVar3 = PTR_DAT_092bf870;
  lVar26 = tpidr_el0;
  local_68 = *(long *)(lVar26 + 0x28);
  if ((DAT_09899c77 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ceb90);
    FUN_04077588(PTR_DAT_092fee60);
    FUN_04077588(PTR_DAT_0928de30);
    FUN_04077588(PTR_DAT_09301a78);
    FUN_04077588(PTR_DAT_092e1938);
    FUN_04077588(PTR_DAT_092a67b0);
    FUN_04077588(PTR_DAT_092bf870);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092a6300);
    FUN_04077588(PTR_DAT_092860c8);
    FUN_04077588(PTR_DAT_092858e8);
    FUN_04077588(PTR_DAT_092aa098);
    FUN_04077588(PTR_DAT_092e1c88);
    FUN_04077588(PTR_DAT_092ff580);
    FUN_04077588(PTR_DAT_093000e8);
    FUN_04077588(PTR_DAT_09301a80);
    FUN_04077588(PTR_DAT_092db308);
    FUN_04077588(PTR_DAT_09301458);
    FUN_04077588(PTR_DAT_09301a88);
    FUN_04077588(PTR_DAT_092ff508);
    FUN_04077588(PTR_DAT_092e1f48);
    FUN_04077588(PTR_DAT_09286938);
    FUN_04077588(PTR_DAT_092d2388);
    FUN_04077588(PTR_DAT_09301460);
    FUN_04077588(PTR_DAT_092860a8);
    FUN_04077588(PTR_DAT_09301a90);
    FUN_04077588(PTR_DAT_09301a98);
    FUN_04077588(PTR_DAT_0928e698);
    FUN_04077588(PTR_DAT_09301aa0);
    FUN_04077588(PTR_DAT_09301400);
    FUN_04077588(PTR_DAT_09301aa8);
    FUN_04077588(PTR_DAT_09301ab0);
    FUN_04077588(PTR_DAT_092e1310);
    FUN_04077588(PTR_DAT_092bbd48);
    FUN_04077588(PTR_DAT_09301a60);
    FUN_04077588(PTR_DAT_092fffa8);
    FUN_04077588(PTR_DAT_092e03d8);
    FUN_04077588(PTR_DAT_09301ab8);
    DAT_09899c77 = 1;
  }
  local_84 = 0;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_9c = 0;
  uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
  FUN_07612198(uVar13,0);
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x10),uVar13);
  uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_0761ca70(uVar13,0);
  *(undefined8 *)(param_1 + 0x20) = uVar13;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x20),uVar13);
  puVar4 = PTR_DAT_092e1938;
  puVar5 = PTR_DAT_092860c8;
  local_84 = *(long *)(param_1 + 0x60) != 0;
  if (param_2 != (long *)0x0) {
    lVar14 = (**(code **)(*param_2 + 0x648))
                       (param_2,*(undefined8 *)PTR_DAT_09301400,*(undefined8 *)PTR_DAT_092db308,
                        *(undefined8 *)PTR_DAT_092bbd48,*(undefined8 *)(*param_2 + 0x650));
    plVar36 = (long *)(param_1 + 0x78);
    *plVar36 = lVar14;
    thunk_FUN_040ec700(plVar36,lVar14);
    if (param_4 == 0) {
      if (param_5 != 0) {
        if (*(long *)(param_5 + 0x20) != 0) {
          *(long *)(param_1 + 0x30) = *(long *)(param_5 + 0x20);
          thunk_FUN_040ec700();
        }
        plVar15 = *(long **)(param_1 + 0x38);
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x308))(plVar15,param_5,*(undefined8 *)(*plVar15 + 0x310));
          if ((param_6 & 1) != 0) {
            FUN_07d40088(param_1,param_5);
          }
          goto LAB_07d40f3c;
        }
      }
    }
    else {
      *(long *)(param_1 + 0x30) = param_4;
      thunk_FUN_040ec700((long *)(param_1 + 0x30),param_4);
      plVar15 = *(long **)(param_4 + 0x28);
      if (plVar15 != (long *)0x0) {
        local_90 = (long *)(**(code **)(*plVar15 + 0x1e8))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x1f0));
        while (plVar15 = local_90, local_90 != (long *)0x0) {
          lVar14 = *local_90;
          uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar27 != 0) {
            piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)puVar5) {
                puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
                goto LAB_07d40d80;
              }
              uVar27 = uVar27 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar27 != 0);
          }
          puVar16 = (undefined8 *)FUN_040b1e00(local_90,*(long *)puVar5,0);
LAB_07d40d80:
          uVar27 = (*(code *)*puVar16)(plVar15,puVar16[1]);
          plVar15 = local_90;
          if ((uVar27 & 1) == 0) {
            plVar15 = (long *)thunk_FUN_040b4e00(local_90,*(undefined8 *)PTR_DAT_092860c0);
            local_98 = plVar15;
            if (plVar15 == (long *)0x0) goto LAB_07d40f3c;
            lVar14 = *plVar15;
            uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar27 == 0) goto LAB_07d40eb4;
            piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_07d40e9c;
          }
          if (local_90 == (long *)0x0) {
            if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            goto LAB_07d43388;
          }
          lVar14 = *local_90;
          uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar27 != 0) {
            piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar30 + -2) == *(long *)puVar5) {
                puVar16 = (undefined8 *)(lVar14 + (long)(*piVar30 + 1) * 0x10 + 0x138);
                goto LAB_07d40de8;
              }
              uVar27 = uVar27 - 1;
              piVar30 = piVar30 + 4;
            } while (uVar27 != 0);
          }
          puVar16 = (undefined8 *)FUN_040b1e00(local_90,*(long *)puVar5,1);
LAB_07d40de8:
          plVar15 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
          if (plVar15 != (long *)0x0) {
            bVar7 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar15 + 0x130) < bVar7) ||
               (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)puVar4)) {
              if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0(plVar15);
              }
              goto LAB_07d43388;
            }
          }
          plVar17 = *(long **)(param_1 + 0x38);
          if (plVar17 == (long *)0x0) {
            if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            goto LAB_07d43388;
          }
          (**(code **)(*plVar17 + 0x308))(plVar17,plVar15,*(undefined8 *)(*plVar17 + 0x310));
        }
        if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_07d43388;
      }
    }
  }
  goto LAB_07d42fb8;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar30 = piVar30 + 4;
    if (uVar27 == 0) break;
LAB_07d40e9c:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_07d40ed0;
    }
  }
LAB_07d40eb4:
  puVar16 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092860c0,0);
LAB_07d40ed0:
  (*(code *)*puVar16)(plVar15,puVar16[1]);
LAB_07d40f3c:
  puVar4 = PTR_DAT_092e03d8;
  plVar15 = (long *)(param_1 + 0x48);
  *plVar15 = (long)param_2;
  thunk_FUN_040ec700(plVar15,param_2);
  lVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_0761ca70(lVar14,0);
  plVar17 = (long *)(param_1 + 0x18);
  *plVar17 = lVar14;
  thunk_FUN_040ec700(plVar17,lVar14);
  lVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_0761ca70(lVar14,0);
  plVar18 = (long *)(param_1 + 0x28);
  *plVar18 = lVar14;
  thunk_FUN_040ec700(plVar18,lVar14);
  plVar19 = (long *)(**(code **)(*param_2 + 0x648))
                              (param_2,*(undefined8 *)PTR_DAT_09301400,*(undefined8 *)puVar4,
                               *(undefined8 *)PTR_DAT_092bbd48,*(undefined8 *)(*param_2 + 0x650));
  *(long *)(param_1 + 0x50) = (long)plVar19;
  thunk_FUN_040ec700((long *)(param_1 + 0x50),plVar19);
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(int *)(*(long *)PTR_DAT_092aa098 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar13 = *(undefined8 *)PTR_DAT_092fffa8;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40);
    if (*(int *)(*(long *)PTR_DAT_092aa098 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
  }
  uVar13 = FUN_07f47104(uVar13,0);
  if (plVar19 == (long *)0x0) goto LAB_07d42fb8;
  (**(code **)(*plVar19 + 0x558))
            (plVar19,*(undefined8 *)PTR_DAT_0928e698,uVar13,*(undefined8 *)(*plVar19 + 0x560));
  if (*(long *)(param_1 + 0x30) == 0) {
    if (param_5 == 0) goto LAB_07d42fb8;
    auVar38 = FUN_07cb02a0(param_5,0);
  }
  else {
    auVar38._8_8_ = extraout_x1;
    auVar38._0_8_ = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
  }
  FUN_07d3ea54(param_1,auVar38._8_8_,plVar19,auVar38._0_8_);
  if (*(int *)(param_1 + 0x5c) == 2) {
    plVar31 = *(long **)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x30) == 0) {
      if ((param_5 != 0) && (uVar13 = FUN_07cb02a0(param_5,0), plVar31 != (long *)0x0))
      goto LAB_07d410e4;
    }
    else if (plVar31 != (long *)0x0) {
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
LAB_07d410e4:
      (**(code **)(*plVar31 + 0x318))(plVar31,uVar13,plVar19,*(undefined8 *)(*plVar31 + 800));
      if (*(int *)(param_1 + 0x5c) != 2) goto LAB_07d41108;
      goto joined_r0x07d411fc;
    }
    goto LAB_07d42fb8;
  }
LAB_07d41108:
  if (*(long *)(param_1 + 0x30) == 0) goto joined_r0x07d411fc;
  plVar31 = (long *)*plVar17;
  if (plVar31 == (long *)0x0) goto LAB_07d42fb8;
  (**(code **)(*plVar31 + 0x318))
            (plVar31,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),plVar19,
             *(undefined8 *)(*plVar31 + 800));
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x50), lVar14 == 0)) goto LAB_07d42fb8;
  if (*(int *)(lVar14 + 0x10) == 0) {
    plVar31 = (long *)*plVar18;
    if (plVar31 != (long *)0x0) {
      (**(code **)(*plVar31 + 0x318))(plVar31,lVar14,0,*(undefined8 *)(*plVar31 + 800));
      goto joined_r0x07d411fc;
    }
    goto LAB_07d42fb8;
  }
  (**(code **)(*plVar19 + 0x558))
            (plVar19,*(undefined8 *)PTR_DAT_09301a60,lVar14,*(undefined8 *)(*plVar19 + 0x560));
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (plVar31 = *(long **)(param_1 + 0x28), plVar31 == (long *)0x0)) goto LAB_07d42fb8;
  (**(code **)(*plVar31 + 0x318))
            (plVar31,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),
             *(undefined8 *)PTR_DAT_09301a88,*(undefined8 *)(*plVar31 + 800));
joined_r0x07d411fc:
  if (param_4 == 0) {
    FUN_07d3e504(param_1,*(undefined8 *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x5c) != 2) {
      FUN_07d3f9b8(param_1,*(undefined8 *)(param_1 + 0x38));
    }
    lVar14 = FUN_07d406fc(param_1);
  }
  else {
    FUN_07d3e5fc(param_1,param_4);
    if (*(int *)(param_1 + 0x5c) != 2) {
      FUN_07d3ed40(param_1,param_4);
    }
    lVar14 = FUN_07cddebc(param_4,1,0);
  }
  if (lVar14 == 0) goto LAB_07d42fb8;
  if ((*(long *)(lVar14 + 0x18) == 0) || ((*(uint *)(param_1 + 0x5c) & 0xfffffffe) == 4)) {
    FUN_07d43390(param_1,param_2,param_4,param_5);
    (**(code **)(*plVar19 + 0x2f8))
              (plVar19,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(*plVar19 + 0x300));
    FUN_07d3c83c(param_1,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x78),param_2);
    if (param_4 != 0) {
      FUN_07d3c164(*(undefined8 *)(param_4 + 0x38),*plVar36,0);
      (**(code **)(*param_2 + 0x2f8))(param_2,plVar19,*(undefined8 *)(*param_2 + 0x300));
      (**(code **)(*param_2 + 0x688))(param_2,param_3,*(undefined8 *)(*param_2 + 0x690));
      if (param_3 != (long *)0x0) goto LAB_07d412d8;
    }
    goto LAB_07d42fb8;
  }
  plVar31 = (long *)FUN_07d43390(param_1,param_2,param_4,param_5);
  uVar13 = (**(code **)(*param_2 + 0x648))
                     (param_2,*(undefined8 *)PTR_DAT_09301400,*(undefined8 *)PTR_DAT_09301aa0,
                      *(undefined8 *)PTR_DAT_092bbd48,*(undefined8 *)(*param_2 + 0x650));
  puVar16 = (undefined8 *)(param_1 + 0x80);
  *puVar16 = uVar13;
  thunk_FUN_040ec700(puVar16,uVar13);
  plVar20 = *(long **)(param_1 + 0x78);
  if (plVar20 == (long *)0x0) goto LAB_07d42fb8;
  (**(code **)(*plVar20 + 0x2f8))
            (plVar20,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(*plVar20 + 0x300));
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_07d3c83c(param_1,*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x78),param_2);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_07d42fb8;
    FUN_07d3c164(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38),*plVar36,0);
  }
  puVar3 = PTR_DAT_092a67b0;
  if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
    uVar27 = 0;
    uVar25 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
    lVar32 = lVar14 + 0x20;
    do {
      if (uVar25 <= uVar27) goto LAB_07d42f4c;
      plVar20 = (long *)FUN_07d44500(param_1,*(undefined8 *)(lVar32 + uVar27 * 8),param_2,plVar19,1)
      ;
      if (*(long *)(param_1 + 0x30) == 0) {
LAB_07d41460:
        if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
        lVar21 = *(long *)(lVar32 + uVar27 * 8);
        if (lVar21 == 0) goto LAB_07d41b70;
        uVar13 = FUN_07cb02a0(lVar21,0);
        uVar25 = FUN_074e5d94(uVar13,0);
        if (((uVar25 & 1) != 0) || (*(int *)(param_1 + 0x5c) == 2)) goto LAB_07d41494;
        if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
        lVar21 = *(long *)(lVar32 + uVar27 * 8);
        if (lVar21 == 0) goto LAB_07d41b70;
        auVar38 = FUN_07cb02a0(lVar21,0);
        FUN_07d439b8(param_1,auVar38._8_8_,auVar38._0_8_,plVar20);
        plVar20 = (long *)(**(code **)(*param_2 + 0x648))
                                    (param_2,*(undefined8 *)PTR_DAT_09301400,
                                     *(undefined8 *)PTR_DAT_092db308,*(undefined8 *)PTR_DAT_092bbd48
                                     ,*(undefined8 *)(*param_2 + 0x650));
        if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
        lVar21 = *(long *)(lVar32 + uVar27 * 8);
        if (lVar21 == 0) goto LAB_07d41b70;
        plVar37 = *(long **)(param_1 + 0x28);
LAB_07d41930:
        uVar13 = FUN_07cb02a0(lVar21,0);
        if (plVar37 == (long *)0x0) goto LAB_07d41b70;
        plVar37 = (long *)(**(code **)(*plVar37 + 0x308))
                                    (plVar37,uVar13,*(undefined8 *)(*plVar37 + 0x310));
        if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
        lVar21 = *(long *)(lVar32 + uVar27 * 8);
        if (lVar21 == 0) goto LAB_07d41b70;
        uVar13 = FUN_07cb7f3c(lVar21,0);
        if ((plVar37 != (long *)0x0) && (*plVar37 != *(long *)(PTR_DAT_09285980 + 0x90))) {
          if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar37,*(long *)(PTR_DAT_09285980 + 0x90),uVar13);
          }
          goto LAB_07d43388;
        }
        uVar13 = FUN_074e691c(plVar37,*(undefined8 *)PTR_DAT_092860a8,uVar13,0);
        if (plVar20 == (long *)0x0) goto LAB_07d41b70;
        (**(code **)(*plVar20 + 0x558))
                  (plVar20,*(undefined8 *)PTR_DAT_092d2388,uVar13,*(undefined8 *)(*plVar20 + 0x560))
        ;
      }
      else {
        if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
        lVar21 = *(long *)(lVar32 + uVar27 * 8);
        if (lVar21 == 0) goto LAB_07d41b70;
        uVar34 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
        uVar13 = FUN_07cb02a0(lVar21,0);
        uVar25 = thunk_FUN_074e4840(uVar34,uVar13,0);
        if ((uVar25 & 1) == 0) goto LAB_07d41460;
LAB_07d41494:
        uVar25 = (ulong)*(uint *)(lVar14 + 0x18);
        if (uVar25 <= uVar27) goto LAB_07d42f4c;
        lVar21 = *(long *)(lVar32 + uVar27 * 8);
        if (lVar21 == 0) goto LAB_07d41b70;
        cVar1 = *(char *)(lVar21 + 0xb0);
        bVar7 = cVar1 != '\0';
        if (*(long *)(param_1 + 0x30) != 0) {
          lVar29 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
          if (lVar29 == 0) goto LAB_07d41b70;
          if (*(int *)(lVar29 + 0x10) != 0) {
            uVar13 = FUN_07cb02a0(lVar21,0);
            bVar7 = FUN_074e5d94(uVar13,0);
            uVar25 = (ulong)*(uint *)(lVar14 + 0x18);
            bVar7 = cVar1 != '\0' | bVar7;
          }
        }
        if (uVar25 <= uVar27) goto LAB_07d42f4c;
        lVar21 = *(long *)(lVar32 + uVar27 * 8);
        if (lVar21 == 0) goto LAB_07d41b70;
        bVar10 = FUN_07cb5b00(lVar21,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
        lVar21 = *(long *)(lVar32 + uVar27 * 8);
        if (lVar21 == 0) goto LAB_07d41b70;
        iVar11 = System_Net_Http_MonoWebRequestHandler__Dispose(lVar21,0);
        if ((iVar11 < 2 & (bVar10 ^ 1) & bVar7) == 1) {
          if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
          lVar21 = *(long *)(lVar32 + uVar27 * 8);
          if (lVar21 == 0) goto LAB_07d41b70;
          lVar29 = *(long *)puVar3;
          uVar13 = *(undefined8 *)(lVar21 + 0x108);
          uVar34 = *(undefined8 *)(lVar21 + 0x110);
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar29 = *(long *)puVar3;
          }
          uVar25 = FUN_076db0b4(uVar13,uVar34,*(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x10),
                                *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x18),0);
          if ((uVar25 & 1) != 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
            lVar21 = *(long *)(lVar32 + uVar27 * 8);
            if (lVar21 == 0) goto LAB_07d41b70;
            uStack_78 = *(undefined8 *)(lVar21 + 0x110);
            local_80 = *(undefined8 *)(lVar21 + 0x108);
            if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar13 = FUN_076060c0(0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)puVar3);
            }
            uVar13 = FUN_076d85e8(&local_80,uVar13,0);
            if (plVar20 == (long *)0x0) goto LAB_07d41b70;
            (**(code **)(*plVar20 + 0x558))
                      (plVar20,*(undefined8 *)PTR_DAT_09301458,uVar13,
                       *(undefined8 *)(*plVar20 + 0x560));
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
          lVar21 = *(long *)(lVar32 + uVar27 * 8);
          if (lVar21 == 0) goto LAB_07d41b70;
          lVar29 = *(long *)puVar3;
          uVar13 = *(undefined8 *)(lVar21 + 0x118);
          uVar34 = *(undefined8 *)(lVar21 + 0x120);
          if (*(int *)(lVar29 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar29 = *(long *)puVar3;
          }
          uVar25 = FUN_076db024(uVar13,uVar34,*(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x20),
                                *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x28),0);
          if ((uVar25 & 1) == 0) {
            if (uVar27 < *(uint *)(lVar14 + 0x18)) {
              lVar21 = *(long *)(lVar32 + uVar27 * 8);
              if (lVar21 == 0) goto LAB_07d41b70;
              lVar29 = *(long *)puVar3;
              uVar13 = *(undefined8 *)(lVar21 + 0x118);
              uVar34 = *(undefined8 *)(lVar21 + 0x120);
              if (*(int *)(lVar29 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar29 = *(long *)puVar3;
              }
              uVar25 = FUN_076db0b4(uVar13,uVar34,*(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x10),
                                    *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x18),0);
              if ((uVar25 & 1) == 0) goto joined_r0x07d419d8;
              if (uVar27 < *(uint *)(lVar14 + 0x18)) {
                lVar21 = *(long *)(lVar32 + uVar27 * 8);
                if (lVar21 != 0) {
                  uStack_78 = *(undefined8 *)(lVar21 + 0x120);
                  local_80 = *(undefined8 *)(lVar21 + 0x118);
                  if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                  }
                  uVar13 = FUN_076060c0(0);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_040d65a8(*(long *)puVar3);
                  }
                  uVar13 = FUN_076d85e8(&local_80,uVar13,0);
                  if (plVar20 != (long *)0x0) {
                    lVar21 = *plVar20;
                    puVar28 = (undefined8 *)PTR_DAT_09301460;
                    goto LAB_07d4184c;
                  }
                }
                goto LAB_07d41b70;
              }
            }
            goto LAB_07d42f4c;
          }
          if (plVar20 == (long *)0x0) goto LAB_07d41b70;
          lVar21 = *plVar20;
          uVar34 = *(undefined8 *)PTR_DAT_09301460;
          uVar13 = *(undefined8 *)PTR_DAT_09301a90;
        }
        else {
          (**(code **)(*plVar19 + 0x2f8))(plVar19,plVar20,*(undefined8 *)(*plVar19 + 0x300));
          plVar20 = (long *)(**(code **)(*param_2 + 0x648))
                                      (param_2,*(undefined8 *)PTR_DAT_09301400,
                                       *(undefined8 *)PTR_DAT_092db308,
                                       *(undefined8 *)PTR_DAT_092bbd48,
                                       *(undefined8 *)(*param_2 + 0x650));
          if (*(long *)(param_1 + 0x30) == 0) {
LAB_07d4171c:
            if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
            lVar21 = *(long *)(lVar32 + uVar27 * 8);
            if (lVar21 == 0) goto LAB_07d41b70;
            uVar13 = FUN_07cb02a0(lVar21,0);
            uVar25 = FUN_074e5d94(uVar13,0);
            if (((uVar25 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
              if (uVar27 < *(uint *)(lVar14 + 0x18)) {
                lVar21 = *(long *)(lVar32 + uVar27 * 8);
                if (lVar21 != 0) {
                  plVar37 = (long *)*plVar18;
                  goto LAB_07d41930;
                }
                goto LAB_07d41b70;
              }
              goto LAB_07d42f4c;
            }
          }
          else {
            if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
            lVar21 = *(long *)(lVar32 + uVar27 * 8);
            if (lVar21 == 0) goto LAB_07d41b70;
            uVar34 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
            uVar13 = FUN_07cb02a0(lVar21,0);
            uVar25 = thunk_FUN_074e4840(uVar34,uVar13,0);
            if ((uVar25 & 1) == 0) goto LAB_07d4171c;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar27) goto LAB_07d42f4c;
          lVar21 = *(long *)(lVar32 + uVar27 * 8);
          if ((lVar21 == 0) || (uVar13 = FUN_07cb7f3c(lVar21,0), plVar20 == (long *)0x0))
          goto LAB_07d41b70;
          lVar21 = *plVar20;
          puVar28 = (undefined8 *)PTR_DAT_092d2388;
LAB_07d4184c:
          uVar34 = *puVar28;
        }
        (**(code **)(lVar21 + 0x558))(plVar20,uVar34,uVar13,*(undefined8 *)(lVar21 + 0x560));
      }
joined_r0x07d419d8:
      if (plVar31 == (long *)0x0) goto LAB_07d41b70;
      (**(code **)(*plVar31 + 0x2f8))(plVar31,plVar20,*(undefined8 *)(*plVar31 + 0x300));
      uVar25 = (ulong)*(uint *)(lVar14 + 0x18);
      uVar27 = uVar27 + 1;
    } while ((long)uVar27 < (long)(int)*(uint *)(lVar14 + 0x18));
  }
  plVar31 = (long *)*plVar36;
  if ((plVar31 != (long *)0x0) &&
     ((**(code **)(*plVar31 + 0x2d8))(plVar31,*puVar16,*(undefined8 *)(*plVar31 + 0x2e0)),
     plVar19 != (long *)0x0)) {
    (**(code **)(*plVar19 + 0x2f8))(plVar19,*plVar36,*(undefined8 *)(*plVar19 + 0x300));
    lVar32 = *(long *)PTR_DAT_092fee60;
    lVar14 = *(long *)(lVar32 + 0x38);
    if (lVar14 == 0) {
      FUN_040b1b28(lVar32);
      lVar14 = *(long *)(lVar32 + 0x38);
    }
    lVar14 = *(long *)(lVar14 + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_040b1acc();
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar14 = *(long *)(*(long *)(lVar32 + 0x38) + 0x10);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_040b1acc();
    }
    plVar36 = (long *)**(undefined8 **)(lVar14 + 0xb8);
    if (param_4 == 0) {
LAB_07d41b88:
      if ((param_6 & 1) == 0) {
LAB_07d41c6c:
        puVar4 = PTR_DAT_09301a98;
        puVar3 = PTR_DAT_092bbd48;
        if (plVar36 != (long *)0x0) {
          uVar24 = *(uint *)(plVar36 + 3);
          if (0 < (int)uVar24) {
            uVar33 = 0;
            plVar20 = (long *)0x0;
            plVar31 = (long *)0x0;
            do {
              if (uVar24 <= uVar33) goto LAB_07d42f4c;
              plVar37 = (long *)plVar36[(long)(int)uVar33 + 4];
              if (plVar37 == (long *)0x0) goto LAB_07d41b70;
              uVar27 = (**(code **)(*plVar37 + 0x1d8))(plVar37,*(undefined8 *)(*plVar37 + 0x1e0));
              if (((uVar27 & 1) == 0) &&
                 (lVar14 = (**(code **)(*plVar37 + 0x208))
                                     (plVar37,*(undefined8 *)(*plVar37 + 0x210)),
                 puVar6 = PTR_DAT_09301400, lVar14 == 0)) {
                if (plVar31 == (long *)0x0) {
                  plVar31 = (long *)(**(code **)(*param_2 + 0x648))
                                              (param_2,*(undefined8 *)PTR_DAT_09301400,
                                               *(undefined8 *)PTR_DAT_092e1310,*(undefined8 *)puVar3
                                               ,*(undefined8 *)(*param_2 + 0x650));
                  (**(code **)(*plVar19 + 0x2f8))(plVar19,plVar31,*(undefined8 *)(*plVar19 + 0x300))
                  ;
                  plVar20 = (long *)(**(code **)(*param_2 + 0x648))
                                              (param_2,*(undefined8 *)puVar6,*(undefined8 *)puVar4,
                                               *(undefined8 *)puVar3,
                                               *(undefined8 *)(*param_2 + 0x650));
                  if (plVar31 == (long *)0x0) goto LAB_07d41b70;
                  (**(code **)(*plVar31 + 0x2f8))(plVar31,plVar20,*(undefined8 *)(*plVar31 + 0x300))
                  ;
                }
                uVar13 = FUN_07d43a70(param_1,plVar37,param_2);
                if (plVar20 == (long *)0x0) goto LAB_07d41b70;
                (**(code **)(*plVar20 + 0x2f8))(plVar20,uVar13,*(undefined8 *)(*plVar20 + 0x300));
              }
              uVar24 = *(uint *)(plVar36 + 3);
              uVar33 = uVar33 + 1;
            } while ((int)uVar33 < (int)uVar24);
          }
          plVar36 = (long *)*plVar17;
          if (plVar36 != (long *)0x0) {
            iVar11 = (**(code **)(*plVar36 + 0x3c8))(plVar36,*(undefined8 *)(*plVar36 + 0x3d0));
            bVar2 = 1 < iVar11;
            bVar8 = local_84 == '\0';
            if ((*(int *)(param_1 + 0x5c) == 2) || (*(int *)(param_1 + 0x5c) == 4)) {
              (**(code **)(*param_2 + 0x2f8))(param_2,plVar19,*(undefined8 *)(*param_2 + 0x300));
              (**(code **)(*param_2 + 0x688))(param_2,param_3,*(undefined8 *)(*param_2 + 0x690));
              goto LAB_07d41e20;
            }
            plVar36 = (long *)*plVar17;
            if ((plVar36 != (long *)0x0) &&
               (plVar36 = (long *)(**(code **)(*plVar36 + 0x388))
                                            (plVar36,*(undefined8 *)(*plVar36 + 0x390)),
               plVar36 != (long *)0x0)) {
              lVar14 = *plVar36;
              uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar27 != 0) {
                piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_092a6300) {
                    puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
                    goto LAB_07d41eb0;
                  }
                  uVar27 = uVar27 - 1;
                  piVar30 = piVar30 + 4;
                } while (uVar27 != 0);
              }
              puVar16 = (undefined8 *)FUN_040b1e00(plVar36,*(long *)PTR_DAT_092a6300,0);
LAB_07d41eb0:
              local_90 = (long *)(*(code *)*puVar16)(plVar36,puVar16[1]);
              puVar3 = PTR_DAT_09285980;
              while (plVar36 = local_90, local_90 != (long *)0x0) {
                lVar14 = *local_90;
                uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar27 != 0) {
                  piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == *(long *)puVar5) {
                      puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
                      goto LAB_07d41f2c;
                    }
                    uVar27 = uVar27 - 1;
                    piVar30 = piVar30 + 4;
                  } while (uVar27 != 0);
                }
                puVar16 = (undefined8 *)FUN_040b1e00(local_90,*(long *)puVar5,0);
LAB_07d41f2c:
                uVar27 = (*(code *)*puVar16)(plVar36,puVar16[1]);
                plVar36 = local_90;
                if ((uVar27 & 1) == 0) {
                  plVar36 = (long *)thunk_FUN_040b4e00(local_90,*(undefined8 *)PTR_DAT_092860c0);
                  local_98 = plVar36;
                  if (plVar36 == (long *)0x0) goto LAB_07d421ac;
                  lVar14 = *plVar36;
                  uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar27 == 0) goto LAB_07d42184;
                  piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  goto LAB_07d4216c;
                }
                if (local_90 == (long *)0x0) {
                  if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  goto LAB_07d43388;
                }
                lVar14 = *local_90;
                uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar27 != 0) {
                  piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == *(long *)puVar5) {
                      puVar16 = (undefined8 *)(lVar14 + (long)(*piVar30 + 1) * 0x10 + 0x138);
                      goto LAB_07d41f94;
                    }
                    uVar27 = uVar27 - 1;
                    piVar30 = piVar30 + 4;
                  } while (uVar27 != 0);
                }
                puVar16 = (undefined8 *)FUN_040b1e00(local_90,*(long *)puVar5,1);
LAB_07d41f94:
                plVar36 = (long *)(*(code *)*puVar16)(plVar36,puVar16[1]);
                if ((plVar36 != (long *)0x0) && (*plVar36 != *(long *)(puVar3 + 0x90))) {
                  if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077bb0(plVar36);
                  }
                  goto LAB_07d43388;
                }
                if (*(long *)(param_1 + 0x30) == 0) {
                  if (param_5 == 0) {
                    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    goto LAB_07d43388;
                  }
                  uVar13 = FUN_07cb02a0(param_5,0);
                }
                else {
                  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
                }
                uVar27 = thunk_FUN_074e4840(plVar36,uVar13,0);
                if (((uVar27 & 1) == 0) && (uVar27 = FUN_074e5d94(plVar36,0), (uVar27 & 1) == 0)) {
                  plVar31 = (long *)(**(code **)(*param_2 + 0x648))
                                              (param_2,*(undefined8 *)PTR_DAT_09301400,
                                               *(undefined8 *)PTR_DAT_09301aa8,
                                               *(undefined8 *)PTR_DAT_092bbd48,
                                               *(undefined8 *)(*param_2 + 0x650));
                  if (plVar31 == (long *)0x0) {
                    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    goto LAB_07d43388;
                  }
                  (**(code **)(*plVar31 + 0x558))
                            (plVar31,*(undefined8 *)PTR_DAT_09301ab0,plVar36,
                             *(undefined8 *)(*plVar31 + 0x560));
                  if (*(int *)(param_1 + 0x5c) != 3 && (!bVar2 || !bVar8)) {
                    plVar20 = *(long **)(param_1 + 0x28);
                    if (plVar20 == (long *)0x0) {
                      if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
                      }
                      goto LAB_07d43388;
                    }
                    uVar35 = *(undefined8 *)(param_1 + 0x68);
                    plVar36 = (long *)(**(code **)(*plVar20 + 0x308))
                                                (plVar20,plVar36,*(undefined8 *)(*plVar20 + 0x310));
                    uVar34 = *(undefined8 *)PTR_DAT_09286938;
                    uVar13 = *(undefined8 *)PTR_DAT_09301ab8;
                    if (plVar36 == (long *)0x0) {
                      uVar22 = 0;
                    }
                    else {
                      uVar22 = (**(code **)(*plVar36 + 0x168))
                                         (plVar36,*(undefined8 *)(*plVar36 + 0x170));
                    }
                    uVar34 = FUN_074e70a4(uVar35,uVar34,uVar22,*(undefined8 *)PTR_DAT_09301a80,0);
                    (**(code **)(*plVar31 + 0x558))
                              (plVar31,uVar13,uVar34,*(undefined8 *)(*plVar31 + 0x560));
                  }
                  (**(code **)(*plVar19 + 0x2e8))(plVar19,plVar31,*(undefined8 *)(*plVar19 + 0x2f0))
                  ;
                }
              }
              if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              goto LAB_07d43388;
            }
            goto LAB_07d42fb8;
          }
        }
      }
      else {
        plVar31 = *(long **)(param_1 + 0x38);
        if (plVar31 != (long *)0x0) {
          iVar11 = (**(code **)(*plVar31 + 0x298))(plVar31,*(undefined8 *)(*plVar31 + 0x2a0));
          if (iVar11 < 1) goto LAB_07d41c6c;
          plVar36 = *(long **)(param_1 + 0x38);
          if (plVar36 != (long *)0x0) {
            plVar36 = (long *)(**(code **)(*plVar36 + 0x2e8))
                                        (plVar36,0,*(undefined8 *)(*plVar36 + 0x2f0));
            if (plVar36 != (long *)0x0) {
              bVar7 = *(byte *)(*(long *)PTR_DAT_092e1938 + 0x130);
              if ((*(byte *)(*plVar36 + 0x130) < bVar7) ||
                 (*(long *)(*(long *)(*plVar36 + 200) + (ulong)bVar7 * 8 + -8) !=
                  *(long *)PTR_DAT_092e1938)) {
                if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077bb0(plVar36);
                }
                goto LAB_07d43388;
              }
            }
            FUN_07d403d4(param_1,plVar36);
            plVar36 = *(long **)(param_1 + 0x40);
            if (plVar36 != (long *)0x0) {
              uVar12 = (**(code **)(*plVar36 + 0x298))(plVar36,*(undefined8 *)(*plVar36 + 0x2a0));
              plVar36 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09301a78,uVar12);
              plVar31 = *(long **)(param_1 + 0x40);
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x368))(plVar31,plVar36,0,*(undefined8 *)(*plVar31 + 0x370))
                ;
                goto LAB_07d41c6c;
              }
            }
          }
        }
      }
    }
    else {
      plVar31 = *(long **)(param_1 + 0x38);
      if (plVar31 != (long *)0x0) {
        iVar11 = (**(code **)(*plVar31 + 0x298))(plVar31,*(undefined8 *)(*plVar31 + 0x2a0));
        if (iVar11 < 1) goto LAB_07d41b88;
        plVar36 = *(long **)(param_4 + 0x30);
        if (plVar36 != (long *)0x0) {
          uVar12 = (**(code **)(*plVar36 + 0x1c8))(plVar36,*(undefined8 *)(*plVar36 + 0x1d0));
          plVar36 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09301a78,uVar12);
          plVar31 = *(long **)(param_4 + 0x30);
          if (plVar31 != (long *)0x0) {
            uVar27 = 0;
            lVar14 = 0x20;
            do {
              iVar11 = (**(code **)(*plVar31 + 0x1c8))(plVar31,*(undefined8 *)(*plVar31 + 0x1d0));
              if ((long)iVar11 <= (long)uVar27) goto LAB_07d41c6c;
              plVar31 = *(long **)(param_4 + 0x30);
              if ((plVar31 == (long *)0x0) ||
                 (lVar32 = (**(code **)(*plVar31 + 0x208))
                                     (plVar31,uVar27 & 0xffffffff,*(undefined8 *)(*plVar31 + 0x210))
                 , plVar36 == (long *)0x0)) break;
              if ((lVar32 != 0) &&
                 (lVar21 = thunk_FUN_040b4e00(lVar32,*(undefined8 *)(*plVar36 + 0x40)), lVar21 == 0)
                 ) {
                uVar13 = thunk_FUN_040c2a64();
                if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar13,0);
                }
                goto LAB_07d43388;
              }
              if (*(uint *)(plVar36 + 3) <= uVar27) goto LAB_07d42f4c;
              plVar36[uVar27 + 4] = lVar32;
              thunk_FUN_040ec700((long)plVar36 + lVar14,lVar32);
              plVar31 = *(long **)(param_4 + 0x30);
              uVar27 = uVar27 + 1;
              lVar14 = lVar14 + 8;
            } while (plVar31 != (long *)0x0);
          }
        }
      }
    }
  }
LAB_07d41b70:
  lVar26 = *(long *)(lVar26 + 0x28);
  goto LAB_07d41b78;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar30 = piVar30 + 4;
    if (uVar27 == 0) break;
LAB_07d42ef4:
    if (*(long *)(piVar30 + -2) == *(long *)puVar4) {
      puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_07d42f28;
    }
  }
LAB_07d42f0c:
  puVar16 = (undefined8 *)FUN_040b1e00(plVar36,*(long *)puVar4,0);
LAB_07d42f28:
  (*(code *)*puVar16)(plVar36,puVar16[1]);
LAB_07d41e20:
  if (local_84 == '\0') {
    if (param_3 == (long *)0x0) goto LAB_07d42fb8;
LAB_07d412d8:
    (**(code **)(*param_3 + 0x318))(param_3,*(undefined8 *)(*param_3 + 800));
  }
  if (*(long *)(lVar26 + 0x28) == local_68) {
    return;
  }
  goto LAB_07d43388;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar30 = piVar30 + 4;
    if (uVar27 == 0) break;
LAB_07d42aa4:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_07d42ad8;
    }
  }
LAB_07d42abc:
  puVar16 = (undefined8 *)FUN_040b1e00(plVar36,*(long *)PTR_DAT_092860c0,0);
LAB_07d42ad8:
  (*(code *)*puVar16)(plVar36,puVar16[1]);
LAB_07d42ae4:
  plVar36 = *(long **)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x5c) == 3 || (!bVar2 || !bVar8)) {
    if (plVar36 == (long *)0x0) {
      if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto LAB_07d43388;
    }
    (**(code **)(*plVar36 + 0x688))(plVar36,local_a8,*(undefined8 *)(*plVar36 + 0x690));
  }
  else {
    if (plVar36 == (long *)0x0) {
      if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto LAB_07d43388;
    }
    (**(code **)(*plVar36 + 0x428))(plVar36,local_a8,*(undefined8 *)(*plVar36 + 0x430));
  }
  plVar36 = (long *)*plVar15;
  if (plVar36 == (long *)0x0) {
    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    goto LAB_07d43388;
  }
  (**(code **)(*plVar36 + 0x2d8))(plVar36,plVar19,*(undefined8 *)(*plVar36 + 0x2e0));
  if (local_84 != '\0') {
    if (local_a8 == (long *)0x0) {
      if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto LAB_07d43388;
    }
    (**(code **)(*local_a8 + 0x1b8))(local_a8,*(undefined8 *)(*local_a8 + 0x1c0));
  }
  if (local_84 != '\0') {
    if (local_a8 == (long *)0x0) {
      if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      goto LAB_07d43388;
    }
    (**(code **)(*local_a8 + 0x308))(local_a8,*(undefined8 *)(*local_a8 + 0x310));
  }
  if (local_90 == (long *)0x0) goto LAB_07d43020;
  goto LAB_07d4236c;
code_r0x07d4288c:
  if (*plVar37 != *(long *)(puVar3 + 0x90)) {
    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar37);
    }
    goto LAB_07d43388;
  }
  uVar13 = FUN_074d875c(*(undefined8 *)PTR_DAT_092e1f48,plVar37,0);
  if (plVar19 == (long *)0x0) {
    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830(uVar13,uVar13);
    }
    goto LAB_07d43388;
  }
  (**(code **)(*plVar19 + 0x558))(plVar19,uVar13,plVar20,*(undefined8 *)(*plVar19 + 0x560));
  plVar23 = (long *)*plVar15;
  if (plVar23 == (long *)0x0) {
    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    goto LAB_07d43388;
  }
  plVar23 = (long *)(**(code **)(*plVar23 + 0x648))
                              (plVar23,*(undefined8 *)PTR_DAT_09301400,
                               *(undefined8 *)PTR_DAT_09301aa8,*(undefined8 *)PTR_DAT_092bbd48,
                               *(undefined8 *)(*plVar23 + 0x650));
  if (plVar23 == (long *)0x0) {
    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    goto LAB_07d43388;
  }
  (**(code **)(*plVar23 + 0x558))
            (plVar23,*(undefined8 *)PTR_DAT_09301ab0,plVar20,*(undefined8 *)(*plVar23 + 0x560));
  if (*(int *)(param_1 + 0x5c) != 3 && (!bVar2 || !bVar8)) {
    if (*(long *)(param_1 + 0x30) == 0) {
      if (param_5 == 0) {
        if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_07d43388;
      }
      uVar13 = FUN_07cb02a0(param_5,0);
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
    }
    uVar27 = thunk_FUN_074e4840(plVar20,uVar13,0);
    if ((uVar27 & 1) == 0) {
      uVar13 = FUN_074e70a4(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_09286938,plVar37,
                            *(undefined8 *)PTR_DAT_09301a80,0);
      (**(code **)(*plVar23 + 0x558))
                (plVar23,*(undefined8 *)PTR_DAT_09301ab8,uVar13,*(undefined8 *)(*plVar23 + 0x560));
    }
    else {
      uVar13 = FUN_074d875c(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),0);
      (**(code **)(*plVar23 + 0x558))
                (plVar23,*(undefined8 *)PTR_DAT_09301ab8,uVar13,*(undefined8 *)(*plVar23 + 0x560));
    }
  }
  (**(code **)(*plVar19 + 0x2e8))(plVar19,plVar23,*(undefined8 *)(*plVar19 + 0x2f0));
  goto joined_r0x07d42774;
LAB_07d42f4c:
  if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  goto LAB_07d43388;
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar30 = piVar30 + 4;
    if (uVar27 == 0) break;
LAB_07d4216c:
    if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
      goto LAB_07d421a0;
    }
  }
LAB_07d42184:
  puVar16 = (undefined8 *)FUN_040b1e00(plVar36,*(long *)PTR_DAT_092860c0,0);
LAB_07d421a0:
  (*(code *)*puVar16)(plVar36,puVar16[1]);
LAB_07d421ac:
  if (*(int *)(param_1 + 0x5c) != 3 && (bVar2 && bVar8)) {
    plVar36 = (long *)*plVar17;
    if (plVar36 == (long *)0x0) goto LAB_07d42fb8;
    local_9c = (**(code **)(*plVar36 + 0x3c8))(plVar36,*(undefined8 *)(*plVar36 + 0x3d0));
    if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_0928de30);
    }
    uVar13 = FUN_076060c0(0);
    uVar13 = FUN_07676d08(&local_9c,uVar13,0);
    (**(code **)(*plVar19 + 0x598))
              (plVar19,*(undefined8 *)PTR_DAT_093000e8,*(undefined8 *)PTR_DAT_092ff508,uVar13,
               *(undefined8 *)(*plVar19 + 0x5a0));
  }
  (**(code **)(*param_2 + 0x2f8))(param_2,plVar19,*(undefined8 *)(*param_2 + 0x300));
  bVar9 = (!bVar2 || !bVar8) || *(int *)(param_1 + 0x5c) == 3;
  lVar14 = 0x430;
  if (bVar9) {
    lVar14 = 0x690;
  }
  lVar32 = 0x428;
  if (bVar9) {
    lVar32 = 0x688;
  }
  (**(code **)(*param_2 + lVar32))(param_2,param_3,*(undefined8 *)(*param_2 + lVar14));
  (**(code **)(*param_2 + 0x2d8))(param_2,plVar19,*(undefined8 *)(*param_2 + 0x2e0));
  plVar36 = *(long **)(param_1 + 0x18);
  if ((plVar36 != (long *)0x0) &&
     (plVar36 = (long *)(**(code **)(*plVar36 + 0x388))(plVar36,*(undefined8 *)(*plVar36 + 0x390)),
     plVar36 != (long *)0x0)) {
    lVar14 = *plVar36;
    uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar27 != 0) {
      piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_092a6300) {
          puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
          goto LAB_07d42344;
        }
        uVar27 = uVar27 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar27 != 0);
    }
    puVar16 = (undefined8 *)FUN_040b1e00(plVar36,*(long *)PTR_DAT_092a6300,0);
LAB_07d42344:
    local_90 = (long *)(*(code *)*puVar16)(plVar36,puVar16[1]);
joined_r0x07d42364:
    if (local_90 != (long *)0x0) {
LAB_07d4236c:
      plVar36 = local_90;
      lVar14 = *local_90;
      uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar27 != 0) {
        piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)puVar5) {
            puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_07d423b8;
          }
          uVar27 = uVar27 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar27 != 0);
      }
      puVar16 = (undefined8 *)FUN_040b1e00(local_90,*(long *)puVar5,0);
LAB_07d423b8:
      uVar27 = (*(code *)*puVar16)(plVar36,puVar16[1]);
      plVar36 = local_90;
      puVar4 = PTR_DAT_092860c0;
      if ((uVar27 & 1) == 0) {
        plVar36 = (long *)thunk_FUN_040b4e00(local_90,*(undefined8 *)PTR_DAT_092860c0);
        local_98 = plVar36;
        if (plVar36 == (long *)0x0) goto LAB_07d41e20;
        lVar14 = *plVar36;
        uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar27 == 0) goto LAB_07d42f0c;
        piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_07d42ef4;
      }
      if (local_90 == (long *)0x0) {
        if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_07d43388;
      }
      lVar14 = *local_90;
      uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar27 != 0) {
        piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)puVar5) {
            puVar16 = (undefined8 *)(lVar14 + (long)(*piVar30 + 1) * 0x10 + 0x138);
            goto LAB_07d42420;
          }
          uVar27 = uVar27 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar27 != 0);
      }
      puVar16 = (undefined8 *)FUN_040b1e00(local_90,*(long *)puVar5,1);
LAB_07d42420:
      plVar36 = (long *)(*(code *)*puVar16)(plVar36,puVar16[1]);
      if ((plVar36 != (long *)0x0) && (*plVar36 != *(long *)(puVar3 + 0x90))) {
        if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_04077bb0(plVar36);
        }
        goto LAB_07d43388;
      }
      if (*(long *)(param_1 + 0x30) == 0) {
        if (param_5 == 0) {
          if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto LAB_07d43388;
        }
        uVar13 = FUN_07cb02a0(param_5,0);
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
      }
      uVar27 = thunk_FUN_074e4840(plVar36,uVar13,0);
      if (((uVar27 & 1) == 0) && (uVar27 = FUN_074e5d94(plVar36,0), (uVar27 & 1) == 0)) {
        local_a8 = param_3;
        if (local_84 == '\0') goto LAB_07d4265c;
        lVar14 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,5);
        if (lVar14 == 0) {
          if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
        }
        else if (*(int *)(lVar14 + 0x18) == 0) {
          if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
        }
        else {
          *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(param_1 + 0x60);
          thunk_FUN_040ec700();
          if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) {
            if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
          }
          else {
            *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(param_1 + 0x68);
            thunk_FUN_040ec700();
            if (*(uint *)(lVar14 + 0x18) < 3) {
              if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
            }
            else {
              *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)PTR_DAT_09286938;
              thunk_FUN_040ec700();
              plVar19 = (long *)*plVar18;
              if (plVar19 == (long *)0x0) {
                if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
              }
              else {
                plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                            (plVar19,plVar36,*(undefined8 *)(*plVar19 + 0x310));
                if (plVar19 == (long *)0x0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = (**(code **)(*plVar19 + 0x168))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x170));
                }
                if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
                  if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                }
                else {
                  *(undefined8 *)(lVar14 + 0x38) = uVar13;
                  thunk_FUN_040ec700();
                  if (*(uint *)(lVar14 + 0x18) < 5) {
                    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077838();
                    }
                  }
                  else {
                    *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)PTR_DAT_09301a80;
                    thunk_FUN_040ec700();
                    uVar13 = FUN_074e71ac(lVar14,0);
                    local_a8 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092ff580);
                    FUN_07efe4bc(local_a8,uVar13,0,0);
                    if (local_84 == '\0') {
LAB_07d4265c:
                      plVar19 = (long *)*plVar17;
                      if (plVar19 == (long *)0x0) {
                        if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_04077830();
                        }
                        goto LAB_07d43388;
                      }
                      plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                  (plVar19,plVar36,*(undefined8 *)(*plVar19 + 0x310)
                                                  );
                      if (plVar19 != (long *)0x0) {
                        bVar7 = *(byte *)(*(long *)PTR_DAT_092e1c88 + 0x130);
                        if ((*(byte *)(*plVar19 + 0x130) < bVar7) ||
                           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar7 * 8 + -8) !=
                            *(long *)PTR_DAT_092e1c88)) {
                          if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_04077bb0(plVar19);
                          }
                          goto LAB_07d43388;
                        }
                      }
                      plVar31 = (long *)*plVar15;
                      if (plVar31 == (long *)0x0) {
                        if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_04077830();
                        }
                      }
                      else {
                        (**(code **)(*plVar31 + 0x2f8))
                                  (plVar31,plVar19,*(undefined8 *)(*plVar31 + 0x300));
                        plVar31 = (long *)*plVar17;
                        if (plVar31 == (long *)0x0) {
                          if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_04077830();
                          }
                        }
                        else {
                          plVar31 = (long *)(**(code **)(*plVar31 + 0x388))
                                                      (plVar31,*(undefined8 *)(*plVar31 + 0x390));
                          if (plVar31 != (long *)0x0) {
                            lVar14 = *plVar31;
                            uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
                            if (uVar27 != 0) {
                              piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_092a6300) {
                                  puVar16 = (undefined8 *)(lVar14 + (long)*piVar30 * 0x10 + 0x138);
                                  goto LAB_07d42750;
                                }
                                uVar27 = uVar27 - 1;
                                piVar30 = piVar30 + 4;
                              } while (uVar27 != 0);
                            }
                            puVar16 = (undefined8 *)
                                      FUN_040b1e00(plVar31,*(long *)PTR_DAT_092a6300,0);
LAB_07d42750:
                            plVar31 = (long *)(*(code *)*puVar16)(plVar31,puVar16[1]);
joined_r0x07d42774:
                            if (plVar31 != (long *)0x0) {
                              do {
                                lVar14 = *plVar31;
                                uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
                                if (uVar27 != 0) {
                                  piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar30 + -2) == *(long *)puVar5) {
                                      puVar16 = (undefined8 *)
                                                (lVar14 + (long)*piVar30 * 0x10 + 0x138);
                                      goto LAB_07d427c4;
                                    }
                                    uVar27 = uVar27 - 1;
                                    piVar30 = piVar30 + 4;
                                  } while (uVar27 != 0);
                                }
                                puVar16 = (undefined8 *)FUN_040b1e00(plVar31,*(long *)puVar5,0);
LAB_07d427c4:
                                uVar27 = (*(code *)*puVar16)(plVar31,puVar16[1]);
                                if ((uVar27 & 1) == 0) {
                                  plVar36 = (long *)thunk_FUN_040b4e00(plVar31,*(undefined8 *)
                                                                                PTR_DAT_092860c0);
                                  local_98 = plVar36;
                                  if (plVar36 == (long *)0x0) goto LAB_07d42ae4;
                                  lVar14 = *plVar36;
                                  uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
                                  if (uVar27 == 0) goto LAB_07d42abc;
                                  piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                  goto LAB_07d42aa4;
                                }
                                if (plVar31 == (long *)0x0) {
                                  if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                    FUN_04077830();
                                  }
                                  goto LAB_07d43388;
                                }
                                lVar14 = *plVar31;
                                uVar27 = (ulong)*(ushort *)(lVar14 + 0x12e);
                                if (uVar27 != 0) {
                                  piVar30 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar30 + -2) == *(long *)puVar5) {
                                      puVar16 = (undefined8 *)
                                                (lVar14 + (long)(*piVar30 + 1) * 0x10 + 0x138);
                                      goto LAB_07d4282c;
                                    }
                                    uVar27 = uVar27 - 1;
                                    piVar30 = piVar30 + 4;
                                  } while (uVar27 != 0);
                                }
                                puVar16 = (undefined8 *)FUN_040b1e00(plVar31,*(long *)puVar5,1);
LAB_07d4282c:
                                plVar20 = (long *)(*(code *)*puVar16)(plVar31,puVar16[1]);
                                if ((plVar20 != (long *)0x0) &&
                                   (*plVar20 != *(long *)(puVar3 + 0x90))) {
                                  if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                    FUN_04077bb0(plVar20);
                                  }
                                  goto LAB_07d43388;
                                }
                                uVar27 = thunk_FUN_074e4840(plVar36,plVar20,0);
                                if ((uVar27 & 1) == 0) {
                                  plVar37 = (long *)*plVar18;
                                  if (plVar37 == (long *)0x0) {
                                    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                      FUN_04077830();
                                    }
                                    goto LAB_07d43388;
                                  }
                                  plVar37 = (long *)(**(code **)(*plVar37 + 0x308))
                                                              (plVar37,plVar20,
                                                               *(undefined8 *)(*plVar37 + 0x310));
                                  if (plVar37 != (long *)0x0) goto code_r0x07d4288c;
                                }
                                if (plVar31 == (long *)0x0) break;
                              } while( true );
                            }
                            if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_04077830();
                            }
                            goto LAB_07d43388;
                          }
                          if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_04077830();
                          }
                        }
                      }
                      goto LAB_07d43388;
                    }
                    if (local_a8 != (long *)0x0) {
                      bVar7 = *(byte *)(*(long *)PTR_DAT_092ff580 + 0x130);
                      if (((*(byte *)(*local_a8 + 0x130) < bVar7) ||
                          (*(long *)(*(long *)(*local_a8 + 200) + (ulong)bVar7 * 8 + -8) !=
                           *(long *)PTR_DAT_092ff580)) ||
                         (FUN_07efe6f8(local_a8,1,0), local_a8 != (long *)0x0)) {
                        (**(code **)(*local_a8 + 0x1a8))
                                  (local_a8,1,*(undefined8 *)(*local_a8 + 0x1b0));
                        goto LAB_07d4265c;
                      }
                    }
                    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_07d43388;
      }
      goto joined_r0x07d42364;
    }
LAB_07d43020:
    if (*(long *)(lVar26 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    goto LAB_07d43388;
  }
LAB_07d42fb8:
  lVar26 = *(long *)(lVar26 + 0x28);
LAB_07d41b78:
  if (lVar26 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_07d43388:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


