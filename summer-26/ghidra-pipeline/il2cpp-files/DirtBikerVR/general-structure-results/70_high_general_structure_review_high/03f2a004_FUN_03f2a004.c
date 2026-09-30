/*
FUNCTION_NAME: FUN_03f2a004
ENTRY_POINT: 03f2a004
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void FUN_03f2a004(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_08975cd8 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0848e758);
    FUN_03a8a718(PTR_DAT_0848e760);
    FUN_03a8a718(PTR_DAT_084907e8);
    FUN_03a8a718(PTR_DAT_0848e7d0);
    FUN_03a8a718(PTR_DAT_0848e7d8);
    FUN_03a8a718(PTR_DAT_0848e7e0);
    FUN_03a8a718(PTR_DAT_0848e770);
    FUN_03a8a718(PTR_DAT_0848e7f0);
    FUN_03a8a718(PTR_DAT_084907f0);
    FUN_03a8a718(PTR_DAT_0848e7f8);
    FUN_03a8a718(PTR_DAT_0848e800);
    FUN_03a8a718(PTR_DAT_08490800);
    FUN_03a8a718(PTR_DAT_0848e810);
    FUN_03a8a718(PTR_DAT_0848e7e8);
    FUN_03a8a718(PTR_DAT_0848e820);
    FUN_03a8a718(PTR_DAT_0848e830);
    FUN_03a8a718(PTR_DAT_0848ecc8);
    FUN_03a8a718(PTR_DAT_0848e740);
    FUN_03a8a718(PTR_DAT_0848d670);
    FUN_03a8a718(PTR_DAT_0848e748);
    FUN_03a8a718(PTR_DAT_0848ecd0);
    FUN_03a8a718(PTR_DAT_0848e750);
    FUN_03a8a718(PTR_DAT_08489628);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_0848e838);
    FUN_03a8a718(PTR_DAT_0848e840);
    DAT_08975cd8 = 1;
  }
  lVar15 = *(long *)(param_1 + 0x2e0);
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (lVar15 != 0) {
    iVar20 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (0 < iVar20) {
      Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                (*(undefined8 *)(lVar15 + 0x10),0,iVar20,0);
    }
    uVar21 = *(undefined8 *)(param_1 + 0x2a8);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    puVar5 = PTR_DAT_0848e770;
    plVar1 = (long *)(param_1 + 0x2a8);
    uVar12 = FUN_07c9e200(uVar21,0,0);
    if ((uVar12 & 1) != 0) {
      lVar15 = FUN_07c99058(param_1,0);
      if (lVar15 == 0) goto LAB_03f2b8c0;
      lVar15 = FUN_04561560(lVar15,*(undefined8 *)puVar5);
      *plVar1 = lVar15;
      thunk_FUN_03afed3c(plVar1,lVar15);
    }
    if (*plVar1 != 0) {
      uVar21 = *(undefined8 *)(*plVar1 + 0x2a8);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_07c9e200(uVar21,0,0);
      if ((uVar12 & 1) != 0) {
        lVar15 = *plVar1;
        uVar21 = *(undefined8 *)PTR_DAT_0848e758;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar21 = FUN_0675ff58(uVar21,0);
        if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
        }
        plVar13 = (long *)FUN_07ca3718(uVar21,0);
        if (lVar15 == 0) goto LAB_03f2b8c0;
        if (plVar13 == (long *)0x0) {
          plVar13 = (long *)0x0;
          *(undefined8 *)(lVar15 + 0x2a8) = 0;
        }
        else {
          lVar17 = *(long *)PTR_DAT_0848e760;
          bVar2 = *(byte *)(lVar17 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar2) {
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = plVar13;
            if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
              plVar16 = (long *)0x0;
            }
          }
          *(long **)(lVar15 + 0x2a8) = plVar16;
          if (*(byte *)(*plVar13 + 0x130) < bVar2) {
            plVar13 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != lVar17) {
            plVar13 = (long *)0x0;
          }
        }
        thunk_FUN_03afed3c(lVar15 + 0x2a8,plVar13);
      }
      puVar11 = PTR_DAT_084907f0;
      puVar10 = PTR_DAT_084907e8;
      puVar9 = PTR_DAT_0848ecd0;
      puVar8 = PTR_DAT_0848e7f8;
      puVar7 = PTR_DAT_0848e7d8;
      puVar4 = PTR_DAT_0848e7d0;
      puVar6 = PTR_DAT_0848e750;
      puVar5 = PTR_DAT_0848e748;
      if (((*plVar1 != 0) && (lVar15 = *(long *)(*plVar1 + 0x2a8), lVar15 != 0)) &&
         (lVar15 = *(long *)(lVar15 + 0xe0), lVar15 != 0)) {
        FUN_04de90b8(&local_98,lVar15,*(undefined8 *)PTR_DAT_0848e7e8);
        local_70 = local_88;
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_98 = 0;
        puStack_90 = &local_80;
LAB_03f2a3b8:
        uVar12 = FUN_061c1964(&local_80,*(undefined8 *)puVar7);
        if ((uVar12 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(long *)(local_70 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (((*(int *)(*(long *)(local_70 + 0xd0) + 0x18) == 2) &&
              (*(char *)(local_70 + 400) == '\0')) && (*(char *)(local_70 + 0x191) == '\0')) {
            lVar15 = *(long *)(param_1 + 0x2e0);
            if (lVar15 != 0) {
              lVar17 = *(long *)(lVar15 + 0x10);
              lVar18 = *(long *)puVar8;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar17 != 0) {
                uVar3 = *(uint *)(lVar15 + 0x18);
                if (uVar3 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                  plVar13 = (long *)(lVar17 + (long)(int)uVar3 * 8 + 0x20);
                  *plVar13 = local_70;
                  thunk_FUN_03afed3c(plVar13);
                }
                else {
                  FUN_04de85b0(lVar15,local_70,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_03f2a3b8;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          goto LAB_03f2a3b8;
        }
        FUN_061c1960(&local_80,*(undefined8 *)puVar4);
        lVar15 = *(long *)(param_1 + 0x180);
        if (lVar15 != 0) {
          iVar20 = *(int *)(lVar15 + 0x18);
          *(undefined4 *)(lVar15 + 0x18) = 0;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (0 < iVar20) {
            Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                      (*(undefined8 *)(lVar15 + 0x10),0,iVar20,0);
          }
          if ((param_2 != 0) && (lVar15 = *(long *)(param_2 + 0x180), lVar15 != 0)) {
            iVar20 = 0;
            while (iVar20 < *(int *)(lVar15 + 0x18)) {
              lVar15 = *(long *)(param_1 + 0x180);
              uVar21 = thunk_FUN_03ac74bc(*(undefined8 *)puVar10);
              FUN_03f24b10();
              if (lVar15 == 0) goto LAB_03f2b8c0;
              lVar17 = *(long *)(lVar15 + 0x10);
              lVar18 = *(long *)puVar11;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_03f2b8c0;
              uVar3 = *(uint *)(lVar15 + 0x18);
              if (uVar3 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                puVar14 = (undefined8 *)(lVar17 + (long)(int)uVar3 * 8 + 0x20);
                *puVar14 = uVar21;
                thunk_FUN_03afed3c(puVar14,uVar21);
              }
              else {
                FUN_04de85b0(lVar15,uVar21,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x10) = *(undefined4 *)(lVar17 + 0x10);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x14) = *(undefined4 *)(lVar17 + 0x14);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x18) = *(undefined4 *)(lVar17 + 0x18);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined1 *)(lVar15 + 0x1c) = *(undefined1 *)(lVar17 + 0x1c);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x20) = *(undefined4 *)(lVar17 + 0x20);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)(lVar17 + 0x24);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x28) = *(undefined4 *)(lVar17 + 0x28);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x2c) = *(undefined4 *)(lVar17 + 0x2c);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x30) = *(undefined4 *)(lVar17 + 0x30);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x34) = *(undefined4 *)(lVar17 + 0x34);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x38) = *(undefined4 *)(lVar17 + 0x38);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x3c) = *(undefined4 *)(lVar17 + 0x3c);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x40) = *(undefined4 *)(lVar17 + 0x40);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x44) = *(undefined4 *)(lVar17 + 0x44);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x48) = *(undefined4 *)(lVar17 + 0x48);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              uVar21 = *(undefined8 *)(lVar17 + 0x134);
              *(undefined4 *)(lVar15 + 0x13c) = *(undefined4 *)(lVar17 + 0x13c);
              *(undefined8 *)(lVar15 + 0x134) = uVar21;
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined1 *)(lVar15 + 0x152) = *(undefined1 *)(lVar17 + 0x152);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined8 *)(lVar15 + 0x158) = *(undefined8 *)(lVar17 + 0x158);
              thunk_FUN_03afed3c(lVar15 + 0x158);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined8 *)(lVar15 + 0x160) = *(undefined8 *)(lVar17 + 0x160);
              thunk_FUN_03afed3c(lVar15 + 0x160);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined4 *)(lVar15 + 0x168) = *(undefined4 *)(lVar17 + 0x168);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined8 *)(lVar15 + 0x200) = *(undefined8 *)(lVar17 + 0x200);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined8 *)(lVar15 + 0x208) = *(undefined8 *)(lVar17 + 0x208);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              *(undefined8 *)(lVar15 + 0x210) = *(undefined8 *)(lVar17 + 0x210);
              if (*(long *)(param_1 + 0x180) == 0) goto LAB_03f2b8c0;
              lVar15 = FUN_04de82e0(*(long *)(param_1 + 0x180),iVar20,*(undefined8 *)puVar9);
              if (((*(long *)(param_2 + 0x180) == 0) ||
                  (lVar17 = FUN_04de82e0(*(long *)(param_2 + 0x180),iVar20,*(undefined8 *)puVar9),
                  lVar17 == 0)) || (lVar15 == 0)) goto LAB_03f2b8c0;
              iVar20 = iVar20 + 1;
              *(undefined8 *)(lVar15 + 0x218) = *(undefined8 *)(lVar17 + 0x218);
              lVar15 = *(long *)(param_2 + 0x180);
              if (lVar15 == 0) goto LAB_03f2b8c0;
            }
            lVar15 = FUN_07c99058(param_2,0);
            if (lVar15 != 0) {
              lVar15 = FUN_04561560(lVar15,*(undefined8 *)PTR_DAT_0848e770);
              if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
                thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
              }
              uVar12 = FUN_07c9c218(lVar15,0,0);
              puVar7 = PTR_DAT_0848e820;
              puVar4 = PTR_DAT_08489628;
              if ((uVar12 & 1) == 0) goto LAB_03f2b724;
              if ((lVar15 != 0) && (lVar17 = *(long *)(lVar15 + 0x20), lVar17 != 0)) {
                iVar20 = 0;
                goto LAB_03f2abc0;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_03f2b8c0;
  while( true ) {
    lVar17 = *(long *)(lVar15 + 0x20);
    iVar20 = iVar20 + 1;
    if (lVar17 == 0) break;
LAB_03f2abc0:
    if (*(int *)(lVar17 + 0x18) <= iVar20) goto LAB_03f2b724;
    if (*plVar1 == 0) break;
    lVar17 = *(long *)(*plVar1 + 0x20);
    uVar21 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e838);
    FUN_03f87a60(uVar21,0);
    if (lVar17 == 0) break;
    lVar18 = *(long *)(lVar17 + 0x10);
    lVar19 = *(long *)PTR_DAT_0848e7f0;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar18 == 0) break;
    uVar3 = *(uint *)(lVar17 + 0x18);
    if (uVar3 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar17 + 0x18) = uVar3 + 1;
      puVar14 = (undefined8 *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
      *puVar14 = uVar21;
      thunk_FUN_03afed3c(puVar14,uVar21);
    }
    else {
      FUN_04de85b0(lVar17,uVar21,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
    if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x20), lVar17 == 0)) break;
    lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar6);
    if ((*(long *)(lVar15 + 0x20) == 0) ||
       ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x20),iVar20,*(undefined8 *)puVar6), lVar18 == 0
        || (lVar17 == 0)))) break;
    *(undefined1 *)(lVar17 + 0x160) = *(undefined1 *)(lVar18 + 0x160);
    if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x20), lVar17 == 0)) break;
    lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar6);
    if (((*(long *)(lVar15 + 0x20) == 0) ||
        (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x20),iVar20,*(undefined8 *)puVar6), lVar18 == 0))
       || (lVar17 == 0)) break;
    *(undefined1 *)(lVar17 + 400) = *(undefined1 *)(lVar18 + 400);
    if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x20), lVar17 == 0)) break;
    lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar6);
    if ((*(long *)(lVar15 + 0x20) == 0) ||
       ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x20),iVar20,*(undefined8 *)puVar6), lVar18 == 0
        || (lVar17 == 0)))) break;
    *(undefined1 *)(lVar17 + 0x191) = *(undefined1 *)(lVar18 + 0x191);
    if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x20), lVar17 == 0)) break;
    lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar6);
    if (((*(long *)(lVar15 + 0x20) == 0) ||
        (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x20),iVar20,*(undefined8 *)puVar6), lVar18 == 0))
       || (lVar17 == 0)) break;
    *(undefined8 *)(lVar17 + 0x198) = *(undefined8 *)(lVar18 + 0x198);
    thunk_FUN_03afed3c(lVar17 + 0x198);
    if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x20), lVar17 == 0)) break;
    lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar6);
    if ((*(long *)(lVar15 + 0x20) == 0) ||
       ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x20),iVar20,*(undefined8 *)puVar6), lVar18 == 0
        || (lVar17 == 0)))) break;
    *(undefined8 *)(lVar17 + 0x290) = *(undefined8 *)(lVar18 + 0x290);
    if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x20), lVar17 == 0)) break;
    lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar6);
    if (((*(long *)(lVar15 + 0x20) == 0) ||
        (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x20),iVar20,*(undefined8 *)puVar6), lVar18 == 0))
       || (lVar17 == 0)) break;
    *(undefined8 *)(lVar17 + 0x2a0) = *(undefined8 *)(lVar18 + 0x2a0);
    if (*plVar1 == 0) break;
    lVar17 = *(long *)(*plVar1 + 0x28);
    uVar21 = *(undefined8 *)PTR_DAT_0848e758;
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar21 = FUN_0675ff58(uVar21,0);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
    }
    plVar13 = (long *)FUN_07ca3718(uVar21,0);
    uVar21 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e840);
    if (plVar13 == (long *)0x0) {
LAB_03f2aebc:
      plVar13 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(*(long *)PTR_DAT_0848e760 + 0x130);
      if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_03f2aebc;
      if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0848e760)
      {
        plVar13 = (long *)0x0;
      }
    }
    FUN_03f1fda0(uVar21,plVar13);
    if (lVar17 == 0) break;
    lVar18 = *(long *)(lVar17 + 0x10);
    lVar19 = *(long *)PTR_DAT_0848e800;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar18 == 0) break;
    uVar3 = *(uint *)(lVar17 + 0x18);
    if (uVar3 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar17 + 0x18) = uVar3 + 1;
      puVar14 = (undefined8 *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
      *puVar14 = uVar21;
      thunk_FUN_03afed3c(puVar14,uVar21);
    }
    else {
      FUN_04de85b0(lVar17,uVar21,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70))
      ;
    }
    if (*(long *)(lVar15 + 0x28) == 0) break;
    if (iVar20 < *(int *)(*(long *)(lVar15 + 0x28) + 0x18)) {
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(lVar18 + 0x10);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined4 *)(lVar17 + 0x14) = *(undefined4 *)(lVar18 + 0x14);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      uVar21 = *(undefined8 *)(lVar18 + 0x18);
      *(undefined4 *)(lVar17 + 0x20) = *(undefined4 *)(lVar18 + 0x20);
      *(undefined8 *)(lVar17 + 0x18) = uVar21;
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      uVar21 = *(undefined8 *)(lVar18 + 0x30);
      *(undefined4 *)(lVar17 + 0x38) = *(undefined4 *)(lVar18 + 0x38);
      *(undefined8 *)(lVar17 + 0x30) = uVar21;
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      uVar21 = *(undefined8 *)(lVar18 + 0x3c);
      *(undefined4 *)(lVar17 + 0x44) = *(undefined4 *)(lVar18 + 0x44);
      *(undefined8 *)(lVar17 + 0x3c) = uVar21;
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined1 *)(lVar17 + 0x48) = *(undefined1 *)(lVar18 + 0x48);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined1 *)(lVar17 + 0x49) = *(undefined1 *)(lVar18 + 0x49);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined1 *)(lVar17 + 0x4a) = *(undefined1 *)(lVar18 + 0x4a);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined4 *)(lVar17 + 0x4c) = *(undefined4 *)(lVar18 + 0x4c);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined4 *)(lVar17 + 0x50) = *(undefined4 *)(lVar18 + 0x50);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined4 *)(lVar17 + 0x54) = *(undefined4 *)(lVar18 + 0x54);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined4 *)(lVar17 + 0x58) = *(undefined4 *)(lVar18 + 0x58);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined1 *)(lVar17 + 0x5c) = *(undefined1 *)(lVar18 + 0x5c);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined4 *)(lVar17 + 0x60) = *(undefined4 *)(lVar18 + 0x60);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined4 *)(lVar17 + 100) = *(undefined4 *)(lVar18 + 100);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined1 *)(lVar17 + 0x68) = *(undefined1 *)(lVar18 + 0x68);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined1 *)(lVar17 + 0x69) = *(undefined1 *)(lVar18 + 0x69);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined1 *)(lVar17 + 0x6a) = *(undefined1 *)(lVar18 + 0x6a);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined8 *)(lVar17 + 0x70) = *(undefined8 *)(lVar18 + 0x70);
      thunk_FUN_03afed3c((undefined8 *)(lVar17 + 0x70));
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0)
         ) break;
      uVar22 = *(undefined8 *)(lVar18 + 0x78);
      uVar21 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
      FUN_04e86ce4(uVar21,uVar22,*(undefined8 *)puVar7);
      if (lVar17 == 0) break;
      *(undefined8 *)(lVar17 + 0x78) = uVar21;
      thunk_FUN_03afed3c((undefined8 *)(lVar17 + 0x78),uVar21);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0)
         ) break;
      uVar22 = *(undefined8 *)(lVar18 + 0x80);
      uVar21 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
      FUN_04e86ce4(uVar21,uVar22,*(undefined8 *)puVar7);
      if (lVar17 == 0) break;
      *(undefined8 *)(lVar17 + 0x80) = uVar21;
      thunk_FUN_03afed3c((undefined8 *)(lVar17 + 0x80),uVar21);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined1 *)(lVar17 + 0x88) = *(undefined1 *)(lVar18 + 0x88);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined4 *)(lVar17 + 0x8c) = *(undefined4 *)(lVar18 + 0x8c);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined4 *)(lVar17 + 0x90) = *(undefined4 *)(lVar18 + 0x90);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined4 *)(lVar17 + 0x94) = *(undefined4 *)(lVar18 + 0x94);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined4 *)(lVar17 + 0x98) = *(undefined4 *)(lVar18 + 0x98);
    }
  }
  goto LAB_03f2b8c0;

  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  :
  lVar17 = *(long *)(lVar17 + 0x20);
  if (lVar17 == 0) goto LAB_03f2b8c0;
  if (*(int *)(lVar17 + 0x18) <= iVar20) {
    System_Array__IndexOfImpl<SerializedCommand>(param_1);
    System_Array__IndexOfImpl<Vector4>(param_1);
    FUN_03f26eac(param_1);
    return;
  }
  lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar6);
  if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) ||
      (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x20),iVar20,*(undefined8 *)puVar6), lVar18 == 0))
     || (lVar17 == 0)) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar17 + 400) = *(undefined1 *)(lVar18 + 400);
  if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x20), lVar17 == 0)) goto LAB_03f2b8c0;
  lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar6);
  if ((*(long *)(lVar15 + 0x20) == 0) ||
     ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x20),iVar20,*(undefined8 *)puVar6), lVar18 == 0 ||
      (lVar17 == 0)))) goto LAB_03f2b8c0;
  iVar20 = iVar20 + 1;
  *(undefined1 *)(lVar17 + 0x191) = *(undefined1 *)(lVar18 + 0x191);
  lVar17 = *plVar1;
  if (lVar17 == 0) goto LAB_03f2b8c0;
  goto 
  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  ;
LAB_03f2b724:
  lVar17 = *plVar1;
  if (lVar17 != 0) {
    iVar20 = 0;
    while (lVar18 = *(long *)(lVar17 + 0x28), lVar18 != 0) {
      if (*(int *)(lVar18 + 0x18) <= iVar20) {
        iVar20 = 0;
        goto 
        System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
        ;
      }
      lVar17 = FUN_04de82e0(lVar18,iVar20,*(undefined8 *)puVar5);
      if ((((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      *(undefined1 *)(lVar17 + 0x48) = *(undefined1 *)(lVar18 + 0x48);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if ((*(long *)(lVar15 + 0x28) == 0) ||
         ((lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          || (lVar17 == 0)))) break;
      *(undefined1 *)(lVar17 + 0x49) = *(undefined1 *)(lVar18 + 0x49);
      if ((*plVar1 == 0) || (lVar17 = *(long *)(*plVar1 + 0x28), lVar17 == 0)) break;
      lVar17 = FUN_04de82e0(lVar17,iVar20,*(undefined8 *)puVar5);
      if (((*(long *)(lVar15 + 0x28) == 0) ||
          (lVar18 = FUN_04de82e0(*(long *)(lVar15 + 0x28),iVar20,*(undefined8 *)puVar5), lVar18 == 0
          )) || (lVar17 == 0)) break;
      iVar20 = iVar20 + 1;
      *(undefined1 *)(lVar17 + 0x4a) = *(undefined1 *)(lVar18 + 0x4a);
      lVar17 = *plVar1;
      if (lVar17 == 0) break;
    }
  }
LAB_03f2b8c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


