/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetSpaceMapGPU
ENTRY_POINT: 0773cbac
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


bool Meta_XR_MRUtilityKit_SceneDebugger__GetSpaceMapGPU
               (long *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
               int param_6,int param_7,long param_8,long param_9,undefined8 param_10,long param_11,
               long param_12,undefined8 param_13,undefined8 *param_14,long param_15)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  int *piVar32;
  long lVar33;
  undefined8 in_stack_fffffffffffffeb0;
  undefined4 uVar34;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int iStack_84;
  long local_80;
  undefined4 local_74;
  int local_68;
  int iStack_64;
  
  local_74 = param_5;
  local_68 = param_4;
  iStack_64 = param_3;
  if ((DAT_0a52322b & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f22e40);
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f31548);
    FUN_04447ba8(PTR_DAT_09f313c8);
    FUN_04447ba8(PTR_DAT_09f1e6a8);
    FUN_04447ba8(PTR_DAT_09f31558);
    FUN_04447ba8(PTR_DAT_09f1e870);
    FUN_04447ba8(PTR_DAT_09f1e8b0);
    FUN_04447ba8(PTR_DAT_09f31bb0);
    FUN_04447ba8(PTR_DAT_09f31bb8);
    FUN_04447ba8(PTR_DAT_09f31318);
    FUN_04447ba8(PTR_DAT_09f31320);
    FUN_04447ba8(PTR_DAT_09f31348);
    FUN_04447ba8(PTR_DAT_09f30ab8);
    FUN_04447ba8(PTR_DAT_09f312c0);
    FUN_04447ba8(PTR_DAT_09f31420);
    FUN_04447ba8(PTR_DAT_09f20d20);
    FUN_04447ba8(PTR_DAT_09f1e5f0);
    FUN_04447ba8(PTR_DAT_09f31bc0);
    FUN_04447ba8(PTR_DAT_09f31bc8);
    FUN_04447ba8(PTR_DAT_09f31bd0);
    FUN_04447ba8(PTR_DAT_09f31bd8);
    FUN_04447ba8(PTR_DAT_09f31be0);
    FUN_04447ba8(PTR_DAT_09f31be8);
    FUN_04447ba8(PTR_DAT_09f31bf0);
    FUN_04447ba8(PTR_DAT_09f31bf8);
    FUN_04447ba8(PTR_DAT_09f31c00);
    FUN_04447ba8(PTR_DAT_09f31c08);
    FUN_04447ba8(PTR_DAT_09f31c10);
    FUN_04447ba8(PTR_DAT_09f31c18);
    FUN_04447ba8(PTR_DAT_09f31b40);
    FUN_04447ba8(PTR_DAT_09f31c20);
    FUN_04447ba8(PTR_DAT_09f31c28);
    FUN_04447ba8(PTR_DAT_09f31c30);
    FUN_04447ba8(PTR_DAT_09f31c38);
    FUN_04447ba8(PTR_DAT_09f31c40);
    FUN_04447ba8(PTR_DAT_09f31c48);
    FUN_04447ba8(PTR_DAT_09f31c50);
    FUN_04447ba8(PTR_DAT_09f31c58);
    FUN_04447ba8(PTR_DAT_09f31c60);
    DAT_0a52322b = 1;
  }
  local_88 = 0;
  iStack_84 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  if (param_1 == (long *)0x0) goto LAB_0773ecc8;
  plVar21 = (long *)param_1[0x3a];
  lVar27 = param_1[0x3b];
  lVar23 = param_1[0x3c];
  plVar12 = (long *)FUN_07715da0(param_1,0);
  iVar4 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
  uVar13 = (**(code **)(*param_1 + 0x498))(param_1,*(undefined8 *)(*param_1 + 0x4a0));
  lVar24 = param_1[0x21];
  lVar29 = param_1[0x1f];
  local_80 = param_1[0x22];
  plVar14 = (long *)FUN_07715da0(param_1,0);
  if (plVar14 == (long *)0x0) goto LAB_0773ecc8;
  lVar25 = *plVar14;
  uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar30 != 0) {
    piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar15 = (undefined8 *)(lVar25 + (long)(*piVar32 + 0x2a) * 0x10 + 0x138);
        goto LAB_0773cec8;
      }
      uVar30 = uVar30 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar30 != 0);
  }
  puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773cec8:
  lVar25 = (*(code *)*puVar15)(plVar14,puVar15[1]);
  if (lVar25 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    plVar14 = (long *)FUN_07715da0(param_1,0);
    puVar2 = PTR_DAT_09f31548;
    if (plVar14 == (long *)0x0) goto LAB_0773ecc8;
    lVar25 = *plVar14;
    uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar15 = (undefined8 *)(lVar25 + (long)(*piVar32 + 0x2a) * 0x10 + 0x138);
          goto LAB_0773cf6c;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773cf6c:
    uVar16 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    lVar25 = thunk_FUN_04485110(uVar16,*(undefined8 *)puVar2);
    if (lVar25 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      plVar14 = (long *)FUN_07715da0(param_1,0);
      if (plVar14 == (long *)0x0) goto LAB_0773ecc8;
      lVar25 = *plVar14;
      uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
            puVar15 = (undefined8 *)(lVar25 + (long)(*piVar32 + 0x2a) * 0x10 + 0x138);
            goto LAB_0773d00c;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f30ab8,0x2a);
LAB_0773d00c:
      lVar25 = (*(code *)*puVar15)(plVar14,puVar15[1]);
      if (lVar25 == 0) goto LAB_0773ecc8;
      uVar16 = *(undefined8 *)puVar2;
      lVar17 = thunk_FUN_04485110(lVar25,uVar16);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar25,uVar16);
      }
      lVar17 = *(long *)puVar2;
      plVar14 = (long *)thunk_FUN_04485110(lVar25,lVar17);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4(lVar25,lVar17);
      }
      lVar25 = *plVar14;
      uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar30 != 0) {
        piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar32 + -2) == lVar17) {
            puVar15 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
            goto LAB_0773d09c;
          }
          uVar30 = uVar30 - 1;
          piVar32 = piVar32 + 4;
        } while (uVar30 != 0);
      }
      puVar15 = (undefined8 *)FUN_044822ac(plVar14,lVar17,0);
LAB_0773d09c:
      uVar5 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    }
  }
  if ((param_1[0x18] == 0) || (FUN_087dab38(param_1[0x18],0), plVar12 == (long *)0x0))
  goto LAB_0773ecc8;
  lVar25 = *plVar12;
  uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar30 != 0) {
    piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar15 = (undefined8 *)(lVar25 + (long)(*piVar32 + 0x22) * 0x10 + 0x138);
        goto LAB_0773d134;
      }
      uVar30 = uVar30 - 1;
      piVar32 = piVar32 + 4;
    } while (uVar30 != 0);
  }
  puVar15 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0x22);
LAB_0773d134:
  uVar30 = (*(code *)*puVar15)(plVar12,puVar15[1]);
  puVar2 = PTR_DAT_09f313c8;
  if ((uVar30 & 1) == 0) {
    if (lVar24 == 0) goto LAB_0773ecc8;
    if (*(int *)(lVar24 + 0x18) < 1) goto LAB_0773d1bc;
    plVar14 = (long *)*param_14;
    if (plVar14 == (long *)0x0) goto LAB_0773ecc8;
    lVar25 = *plVar14;
    uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
          puVar15 = (undefined8 *)(lVar25 + (long)(*piVar32 + 5) * 0x10 + 0x138);
          goto LAB_0773d1ec;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,5);
LAB_0773d1ec:
    (*(code *)*puVar15)(plVar14,param_1,param_2,uVar5,puVar15[1]);
    plVar14 = (long *)*param_14;
    if (plVar14 == (long *)0x0) goto LAB_0773ecc8;
    lVar17 = *plVar14;
    lVar25 = *(long *)puVar2;
    uVar30 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar25) {
          puVar15 = (undefined8 *)(lVar17 + (long)(*piVar32 + 6) * 0x10 + 0x138);
          goto LAB_0773d260;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar14,lVar25,6);
LAB_0773d260:
    iVar6 = (*(code *)*puVar15)(plVar14,puVar15[1]);
    plVar14 = (long *)*param_14;
    if (plVar14 == (long *)0x0) goto LAB_0773ecc8;
    lVar17 = *plVar14;
    lVar25 = *(long *)puVar2;
    uVar30 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == lVar25) {
          puVar15 = (undefined8 *)(lVar17 + (long)(*piVar32 + 0xf) * 0x10 + 0x138);
          goto LAB_0773d2d8;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar14,lVar25,0xf);
LAB_0773d2d8:
    lVar25 = (*(code *)*puVar15)(plVar14,puVar15[1]);
  }
  else {
LAB_0773d1bc:
    lVar25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,param_5);
    iVar6 = 0;
  }
  if (param_1[0x18] != 0) {
    FUN_087dae58(param_1[0x18],0);
    if (param_1[0x19] == 0) goto LAB_0773ecc8;
    FUN_087dab38(param_1[0x19],0);
    iStack_84 = (iVar6 + param_3) - param_4;
    local_88 = 0;
    lVar17 = *plVar12;
    uVar30 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar30 != 0) {
      piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar15 = (undefined8 *)(lVar17 + (long)*piVar32 * 0x10 + 0x138);
          goto LAB_0773d368;
        }
        uVar30 = uVar30 - 1;
        piVar32 = piVar32 + 4;
      } while (uVar30 != 0);
    }
    puVar15 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0);
LAB_0773d368:
    uVar30 = (*(code *)*puVar15)(plVar12,puVar15[1]);
    if ((uVar30 & 1) != 0) {
      if (param_1[0x34] == 0) goto LAB_0773ecc8;
      local_88 = (param_6 - param_7) + *(int *)(param_1[0x34] + 0x18);
    }
    if (3 < iVar4) {
      lVar17 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
      if (lVar17 == 0) goto LAB_0773ecc8;
      if (*(int *)(lVar17 + 0x18) == 0) goto LAB_0773ecc4;
      *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)PTR_DAT_09f31c48;
      thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x20));
      uVar16 = FUN_07a3b850(&iStack_64,0);
      if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_0773ecc4;
      *(undefined8 *)(lVar17 + 0x28) = uVar16;
      thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x28),uVar16);
      if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0773ecc4;
      *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)PTR_DAT_09f31c50;
      thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x30));
      uVar16 = FUN_07a3b850(&local_68,0);
      if (*(uint *)(lVar17 + 0x18) < 4) goto LAB_0773ecc4;
      *(undefined8 *)(lVar17 + 0x38) = uVar16;
      thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x38),uVar16);
      if (*(uint *)(lVar17 + 0x18) < 5) goto LAB_0773ecc4;
      *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)PTR_DAT_09f31c10;
      thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x40));
      uVar16 = FUN_07a3b850(&local_74,0);
      if (*(uint *)(lVar17 + 0x18) < 6) goto LAB_0773ecc4;
      *(undefined8 *)(lVar17 + 0x48) = uVar16;
      thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x48),uVar16);
      if (*(uint *)(lVar17 + 0x18) < 7) goto LAB_0773ecc4;
      *(undefined8 *)(lVar17 + 0x50) = *(undefined8 *)PTR_DAT_09f31bd8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar17 + 0x50));
      uVar16 = FUN_07a3b850(&local_88,0);
      if (*(uint *)(lVar17 + 0x18) < 8) goto LAB_0773ecc4;
      *(undefined8 *)(lVar17 + 0x58) = uVar16;
      thunk_FUN_044bb4b4();
      uVar16 = FUN_078b57fc(lVar17,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar16,0);
      param_5 = local_74;
    }
    lVar17 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,param_5);
    puVar1 = PTR_DAT_09f31c40;
    puVar2 = PTR_DAT_09f31bf0;
    uVar34 = (undefined4)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
    local_90 = local_90 & 0xffffffff00000000;
    if (lVar17 != 0) {
      uVar28 = *(uint *)(lVar17 + 0x18);
      if (0 < (int)uVar28) {
        uVar22 = 0;
        do {
          if (lVar25 == 0) goto LAB_0773ecc8;
          if (*(uint *)(lVar25 + 0x18) <= uVar22) goto LAB_0773ecc4;
          if (param_8 == 0) goto LAB_0773ecc8;
          if (*(uint *)(param_8 + 0x18) <= uVar22) goto LAB_0773ecc4;
          if (param_9 == 0) goto LAB_0773ecc8;
          if ((*(uint *)(param_9 + 0x18) <= uVar22) || (uVar28 <= uVar22)) goto LAB_0773ecc4;
          lVar26 = (long)(int)uVar22;
          *(int *)(lVar17 + lVar26 * 4 + 0x20) =
               (*(int *)(param_8 + lVar26 * 4 + 0x20) + *(int *)(lVar25 + lVar26 * 4 + 0x20)) -
               *(int *)(param_9 + lVar26 * 4 + 0x20);
          if (3 < iVar4) {
            lVar26 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,8);
            if (lVar26 == 0) goto LAB_0773ecc8;
            if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0773ecc4;
            *(undefined8 *)(lVar26 + 0x20) = *(undefined8 *)PTR_DAT_09f31be0;
            thunk_FUN_044bb4b4((undefined8 *)(lVar26 + 0x20));
            uVar16 = FUN_07a3b850(&local_90,0);
            if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_0773ecc4;
            *(undefined8 *)(lVar26 + 0x28) = uVar16;
            thunk_FUN_044bb4b4((undefined8 *)(lVar26 + 0x28),uVar16);
            if (*(uint *)(lVar26 + 0x18) < 3) goto LAB_0773ecc4;
            *(undefined8 *)(lVar26 + 0x30) = *(undefined8 *)PTR_DAT_09f31bc0;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(lVar25 + 0x18) <= (uint)local_90) ||
               (uVar16 = FUN_07a3b850(lVar25 + (long)(int)(uint)local_90 * 4 + 0x20,0),
               *(uint *)(lVar26 + 0x18) < 4)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar26 + 0x38) = uVar16;
            thunk_FUN_044bb4b4((undefined8 *)(lVar26 + 0x38),uVar16);
            if (*(uint *)(lVar26 + 0x18) < 5) goto LAB_0773ecc4;
            *(undefined8 *)(lVar26 + 0x40) = *(undefined8 *)puVar1;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(param_8 + 0x18) <= (uint)local_90) ||
               (uVar16 = FUN_07a3b850(param_8 + (long)(int)(uint)local_90 * 4 + 0x20,0),
               *(uint *)(lVar26 + 0x18) < 6)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar26 + 0x48) = uVar16;
            thunk_FUN_044bb4b4((undefined8 *)(lVar26 + 0x48),uVar16);
            if (*(uint *)(lVar26 + 0x18) < 7) goto LAB_0773ecc4;
            *(undefined8 *)(lVar26 + 0x50) = *(undefined8 *)puVar2;
            thunk_FUN_044bb4b4();
            if ((*(uint *)(param_9 + 0x18) <= (uint)local_90) ||
               (uVar16 = FUN_07a3b850(param_9 + (long)(int)(uint)local_90 * 4 + 0x20,0),
               *(uint *)(lVar26 + 0x18) < 8)) goto LAB_0773ecc4;
            *(undefined8 *)(lVar26 + 0x58) = uVar16;
            thunk_FUN_044bb4b4();
            uVar16 = FUN_078b57fc(lVar26,0);
            lVar33 = *(long *)PTR_DAT_09f22e40;
            lVar26 = *(long *)(lVar33 + 0x38);
            if (lVar26 == 0) {
              FUN_04482014(lVar33);
              lVar26 = *(long *)(lVar33 + 0x38);
            }
            lVar26 = *(long *)(lVar26 + 0x10);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = FUN_04481fb8();
            }
            if (*(int *)(lVar26 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            lVar26 = *(long *)(*(long *)(lVar33 + 0x38) + 0x10);
            if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = FUN_04481fb8();
            }
            FUN_0771ec00(uVar16,**(undefined8 **)(lVar26 + 0xb8),0);
          }
          uVar34 = (undefined4)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
          uVar22 = (uint)local_90 + 1;
          local_90 = CONCAT44(local_90._4_4_,uVar22);
          uVar28 = *(uint *)(lVar17 + 0x18);
        } while ((int)uVar22 < (int)uVar28);
      }
      iVar6 = iStack_84;
      iVar7 = FUN_0772052c(0);
      iVar11 = iStack_84;
      if (iVar7 <= iVar6) {
        uVar5 = FUN_0772052c(0);
        local_98 = CONCAT44(uVar5,(int)local_98);
        uVar13 = FUN_07a3b850((long)&local_98 + 4,0);
        uVar13 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31c08,uVar13,*(undefined8 *)PTR_DAT_09f31be8
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c6b48(uVar13,0);
LAB_0773ec98:
        return iVar6 < iVar7;
      }
      plVar14 = (long *)param_1[0x39];
      uVar8 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
      if (plVar14 != (long *)0x0) {
        lVar25 = *plVar14;
        uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar30 != 0) {
          piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
              puVar15 = (undefined8 *)(lVar25 + (long)(*piVar32 + 3) * 0x10 + 0x138);
              goto LAB_0773d918;
            }
            uVar30 = uVar30 - 1;
            piVar32 = piVar32 + 4;
          } while (uVar30 != 0);
        }
        puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,3);
LAB_0773d918:
        (*(code *)*puVar15)(plVar14,param_1,param_2,iVar11,lVar17,uVar5,lVar23,0,
                            CONCAT44(uVar34,uVar8),puVar15[1]);
        iVar11 = iStack_84;
        if (plVar21 != (long *)0x0) {
          lVar25 = *plVar21;
          lVar17 = param_1[0x39];
          uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar30 != 0) {
            piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f312c0) {
                puVar15 = (undefined8 *)(lVar25 + (long)(*piVar32 + 2) * 0x10 + 0x138);
                goto LAB_0773d9b0;
              }
              uVar30 = uVar30 - 1;
              piVar32 = piVar32 + 4;
            } while (uVar30 != 0);
          }
          puVar15 = (undefined8 *)FUN_044822ac(plVar21,*(long *)PTR_DAT_09f312c0,2);
LAB_0773d9b0:
          (*(code *)*puVar15)(plVar21,param_11,lVar24,iVar11,lVar17,puVar15[1]);
          if (lVar27 != 0) {
            FUN_07732130(lVar27,local_88,0);
            if (param_1[0x19] != 0) {
              FUN_087dae58(param_1[0x19],0);
              if (3 < iVar4) {
                lVar25 = *plVar14;
                uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
                if (uVar30 != 0) {
                  piVar32 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
                      puVar15 = (undefined8 *)(lVar25 + (long)*piVar32 * 0x10 + 0x138);
                      goto LAB_0773da50;
                    }
                    uVar30 = uVar30 - 1;
                    piVar32 = piVar32 + 4;
                  } while (uVar30 != 0);
                }
                puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,0);
LAB_0773da50:
                local_a8 = (*(code *)*puVar15)(plVar14,puVar15[1]);
                local_b8 = *(undefined8 *)PTR_DAT_09f31420;
                uStack_b0 = 0xffffffffffffffff;
                uVar16 = FUN_07a742b0(&local_b8,0);
                uVar18 = FUN_07a3b850(&iStack_84,0);
                uVar16 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31bd0,uVar16,
                                      *(undefined8 *)PTR_DAT_09f31c58,uVar18,0);
                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                }
                FUN_094c652c(uVar16,0);
              }
              if (lVar24 != 0) {
                FUN_05baf848(lVar24,*(undefined8 *)PTR_DAT_09f31bb8);
                local_90 = local_90 & 0xffffffff;
                lVar25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,local_74);
                if (param_1[0x1a] != 0) {
                  FUN_087dab38(param_1[0x1a],0);
                  lVar17 = *plVar12;
                  uVar30 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar30 != 0) {
                    piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                        puVar15 = (undefined8 *)(lVar17 + (long)(*piVar32 + 0x22) * 0x10 + 0x138);
                        goto LAB_0773db88;
                      }
                      uVar30 = uVar30 - 1;
                      piVar32 = piVar32 + 4;
                    } while (uVar30 != 0);
                  }
                  puVar15 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0x22);
LAB_0773db88:
                  uVar30 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                  puVar2 = PTR_DAT_09f31320;
                  if (((uVar30 & 1) == 0) && (0 < *(int *)(lVar24 + 0x18))) {
                    local_98 = local_98 & 0xffffffff00000000;
                    iVar11 = 0;
                    iVar9 = 0;
                    iVar10 = 0;
                    lVar17 = lVar25 + 0x20;
                    do {
                      lVar26 = FUN_05badb74(lVar24,iVar10,*(undefined8 *)puVar2);
                      if (lVar26 == 0) goto LAB_0773ecc8;
                      if (*(char *)(lVar26 + 0xb9) == '\0') {
                        if (3 < iVar4) {
                          uVar16 = FUN_07a3b850(&local_98,0);
                          uVar16 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31bf8,uVar16,0);
                          plVar19 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          local_b8 = CONCAT44(local_b8._4_4_,iVar4);
                          lVar33 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&local_b8);
                          if (plVar19 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar33 != 0) &&
                             (lVar20 = thunk_FUN_04485110(lVar33,*(undefined8 *)(*plVar19 + 0x40)),
                             lVar20 == 0)) goto LAB_0773eccc;
                          if ((int)plVar19[3] == 0) goto LAB_0773ecc4;
                          plVar19[4] = lVar33;
                          thunk_FUN_044bb4b4(plVar19 + 4,lVar33);
                          FUN_0771ec00(uVar16,plVar19,0);
                        }
                        lVar33 = *plVar14;
                        uVar30 = (ulong)*(ushort *)(lVar33 + 0x12e);
                        if (uVar30 != 0) {
                          piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
                              puVar15 = (undefined8 *)(lVar33 + (long)(*piVar32 + 9) * 0x10 + 0x138)
                              ;
                              goto LAB_0773ddc0;
                            }
                            uVar30 = uVar30 - 1;
                            piVar32 = piVar32 + 4;
                          } while (uVar30 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,9);
LAB_0773ddc0:
                        (*(code *)*puVar15)(plVar14,lVar26,param_14,iVar11,iVar9,lVar25,iVar4,
                                            puVar15[1]);
                        lVar33 = *plVar12;
                        uVar30 = (ulong)*(ushort *)(lVar33 + 0x12e);
                        if (uVar30 != 0) {
                          piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar15 = (undefined8 *)(lVar33 + (long)*piVar32 * 0x10 + 0x138);
                              goto LAB_0773de38;
                            }
                            uVar30 = uVar30 - 1;
                            piVar32 = piVar32 + 4;
                          } while (uVar30 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0);
LAB_0773de38:
                        uVar30 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                        if ((uVar30 & 1) != 0) {
                          FUN_077322fc(lVar27,(long)&local_90 + 4,lVar26,0);
                        }
                        lVar33 = *plVar12;
                        uVar30 = (ulong)*(ushort *)(lVar33 + 0x12e);
                        if (uVar30 != 0) {
                          piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar15 = (undefined8 *)
                                        (lVar33 + (long)(*piVar32 + 0x24) * 0x10 + 0x138);
                              goto LAB_0773deb4;
                            }
                            uVar30 = uVar30 - 1;
                            piVar32 = piVar32 + 4;
                          } while (uVar30 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0x24)
                        ;
LAB_0773deb4:
                        iVar10 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                        if (iVar10 == 1) {
                          lVar33 = *plVar21;
                          uVar30 = (ulong)*(ushort *)(lVar33 + 0x12e);
                          if (uVar30 != 0) {
                            piVar32 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f312c0) {
                                puVar15 = (undefined8 *)
                                          (lVar33 + (long)(*piVar32 + 8) * 0x10 + 0x138);
                                goto LAB_0773df2c;
                              }
                              uVar30 = uVar30 - 1;
                              piVar32 = piVar32 + 4;
                            } while (uVar30 != 0);
                          }
                          puVar15 = (undefined8 *)FUN_044822ac(plVar21,*(long *)PTR_DAT_09f312c0,8);
LAB_0773df2c:
                          (*(code *)*puVar15)(plVar21,lVar26,iVar11,puVar15[1]);
                        }
                        *(int *)(lVar26 + 0x28) = iVar11;
                        if (lVar25 == 0) goto LAB_0773ecc8;
                        uVar28 = *(uint *)(lVar25 + 0x18);
                        if (0 < (long)((ulong)uVar28 << 0x20)) {
                          lVar33 = *(long *)(lVar26 + 0x70);
                          uVar30 = 0;
                          do {
                            if (uVar28 <= uVar30) goto LAB_0773ecc4;
                            if (lVar33 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar33 + 0x18) <= uVar30) goto LAB_0773ecc4;
                            *(undefined4 *)(lVar33 + 0x20 + uVar30 * 4) =
                                 *(undefined4 *)(lVar17 + uVar30 * 4);
                            lVar20 = *(long *)(lVar26 + 0x78);
                            if (lVar20 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_0773ecc4;
                            *(int *)(lVar17 + uVar30 * 4) =
                                 *(int *)(lVar20 + uVar30 * 4 + 0x20) +
                                 *(int *)(lVar17 + uVar30 * 4);
                            uVar30 = uVar30 + 1;
                          } while ((long)(int)uVar28 != uVar30);
                        }
                        iVar11 = *(int *)(lVar26 + 0x30) + iVar11;
                      }
                      else {
                        if (3 < iVar4) {
                          uVar16 = FUN_07a3b850(&local_98,0);
                          uVar16 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f31c00,uVar16,0);
                          plVar19 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          local_b8 = CONCAT44(local_b8._4_4_,iVar4);
                          lVar33 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&local_b8);
                          if (plVar19 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar33 != 0) &&
                             (lVar20 = thunk_FUN_04485110(lVar33,*(undefined8 *)(*plVar19 + 0x40)),
                             lVar20 == 0)) goto LAB_0773eccc;
                          if ((int)plVar19[3] == 0) goto LAB_0773ecc4;
                          plVar19[4] = lVar33;
                          thunk_FUN_044bb4b4(plVar19 + 4,lVar33);
                          FUN_0771ec00(uVar16,plVar19,0);
                        }
                        iVar9 = *(int *)(lVar26 + 0x30) + iVar9;
                      }
                      iVar10 = (int)local_98 + 1;
                      local_98 = CONCAT44(local_98._4_4_,iVar10);
                    } while (iVar10 < *(int *)(lVar24 + 0x18));
                    lVar17 = *plVar12;
                    uVar30 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar30 != 0) {
                      piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                          puVar15 = (undefined8 *)(lVar17 + (long)(*piVar32 + 0x24) * 0x10 + 0x138);
                          goto LAB_0773e044;
                        }
                        uVar30 = uVar30 - 1;
                        piVar32 = piVar32 + 4;
                      } while (uVar30 != 0);
                    }
                    puVar15 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0773e044:
                    iVar9 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                    iVar10 = local_68;
                    if (iVar9 == 1) {
                      lVar17 = *plVar21;
                      uVar30 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar30 != 0) {
                        piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f312c0) {
                            puVar15 = (undefined8 *)(lVar17 + (long)(*piVar32 + 4) * 0x10 + 0x138);
                            goto LAB_0773e0b4;
                          }
                          uVar30 = uVar30 - 1;
                          piVar32 = piVar32 + 4;
                        } while (uVar30 != 0);
                      }
                      puVar15 = (undefined8 *)FUN_044822ac(plVar21,*(long *)PTR_DAT_09f312c0,4);
LAB_0773e0b4:
                      (*(code *)*puVar15)(plVar21,iVar10,puVar15[1]);
                    }
                    puVar3 = PTR_DAT_09f31bb0;
                    puVar1 = PTR_DAT_09f1e8b0;
                    iVar10 = *(int *)(lVar24 + 0x18);
                    while (iVar10 = iVar10 + -1, -1 < iVar10) {
                      lVar17 = FUN_05badb74(lVar24,iVar10,*(undefined8 *)puVar2);
                      if (lVar17 == 0) goto LAB_0773ecc8;
                      if (*(char *)(lVar17 + 0xb9) != '\0') {
                        lVar17 = FUN_05badb74(lVar24,iVar10,*(undefined8 *)puVar2);
                        if ((lVar17 == 0) ||
                           (FUN_0773caa0(&local_80,*(undefined8 *)(lVar17 + 0x18)), lVar29 == 0))
                        goto LAB_0773ecc8;
                        FUN_05baf638(lVar29,iVar10,*(undefined8 *)puVar1);
                        FUN_05baf638(lVar24,iVar10,*(undefined8 *)puVar3);
                      }
                    }
                  }
                  else {
                    iVar11 = 0;
                  }
                  if (param_1[0x1a] != 0) {
                    FUN_087dae58(param_1[0x1a],0);
                    if (param_1[0x1b] != 0) {
                      FUN_087dab38(param_1[0x1b],0);
                      lVar17 = *plVar12;
                      uVar30 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar30 != 0) {
                        piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                            puVar15 = (undefined8 *)
                                      (lVar17 + (long)(*piVar32 + 0x24) * 0x10 + 0x138);
                            goto LAB_0773e1c8;
                          }
                          uVar30 = uVar30 - 1;
                          piVar32 = piVar32 + 4;
                        } while (uVar30 != 0);
                      }
                      puVar15 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0773e1c8:
                      iVar10 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                      if (iVar10 == 1) {
                        lVar17 = *plVar21;
                        uVar30 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar30 != 0) {
                          piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f312c0) {
                              puVar15 = (undefined8 *)(lVar17 + (long)(*piVar32 + 5) * 0x10 + 0x138)
                              ;
                              goto LAB_0773e234;
                            }
                            uVar30 = uVar30 - 1;
                            piVar32 = piVar32 + 4;
                          } while (uVar30 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar21,*(long *)PTR_DAT_09f312c0,5);
LAB_0773e234:
                        (*(code *)*puVar15)(plVar21,puVar15[1]);
                      }
                      if (param_11 != 0) {
                        if (0 < *(int *)(param_11 + 0x18)) {
                          uVar30 = 0;
                          do {
                            lVar17 = FUN_05badb74(param_11,uVar30 & 0xffffffff,
                                                  *(undefined8 *)PTR_DAT_09f31320);
                            if (param_12 == 0) goto LAB_0773ecc8;
                            if (*(uint *)(param_12 + 0x18) <= uVar30) goto LAB_0773ecc4;
                            if (lVar17 == 0) goto LAB_0773ecc8;
                            lVar26 = *plVar14;
                            uVar16 = *(undefined8 *)(param_12 + uVar30 * 8 + 0x20);
                            lVar33 = *(long *)(lVar17 + 0xc0);
                            uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
                            if (uVar31 != 0) {
                              piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
                                  puVar15 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
                                  goto LAB_0773e2ec;
                                }
                                uVar31 = uVar31 - 1;
                                piVar32 = piVar32 + 4;
                              } while (uVar31 != 0);
                            }
                            puVar15 = (undefined8 *)
                                      FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,0);
LAB_0773e2ec:
                            uVar5 = (*(code *)*puVar15)(plVar14,puVar15[1]);
                            lVar26 = *plVar14;
                            uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
                            if (uVar31 != 0) {
                              piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
                                  puVar15 = (undefined8 *)
                                            (lVar26 + (long)(*piVar32 + 10) * 0x10 + 0x138);
                                  goto LAB_0773e354;
                                }
                                uVar31 = uVar31 - 1;
                                piVar32 = piVar32 + 4;
                              } while (uVar31 != 0);
                            }
                            puVar15 = (undefined8 *)
                                      FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,10);
LAB_0773e354:
                            (*(code *)*puVar15)(plVar14,lVar17,iVar11,uVar5,1,0,plVar12,plVar21,
                                                lVar25,uVar13,param_13,iVar4,lVar23,puVar15[1]);
                            if (lVar33 == 0) goto LAB_0773ecc8;
                            iVar10 = FUN_094d3ba4(lVar33,0);
                            if (*(long *)(lVar17 + 0x88) == 0) goto LAB_0773ecc8;
                            iVar9 = *(int *)(*(long *)(lVar17 + 0x88) + 0x18);
                            if (iVar9 < iVar10) {
                              if (3 < iVar4) {
                                uVar18 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                      *(undefined8 *)(lVar17 + 0x20),
                                                      *(undefined8 *)PTR_DAT_09f31c30,0);
                                lVar20 = *(long *)PTR_DAT_09f22e40;
                                lVar26 = *(long *)(lVar20 + 0x38);
                                if (lVar26 == 0) {
                                  FUN_04482014(lVar20);
                                  lVar26 = *(long *)(lVar20 + 0x38);
                                }
                                lVar26 = *(long *)(lVar26 + 0x10);
                                if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                                  lVar26 = FUN_04481fb8();
                                }
                                if (*(int *)(lVar26 + 0xe4) == 0) {
                                  thunk_FUN_044a54b4();
                                }
                                lVar26 = *(long *)(*(long *)(lVar20 + 0x38) + 0x10);
                                if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
                                  lVar26 = FUN_04481fb8();
                                }
                                FUN_0771ec00(uVar18,**(undefined8 **)(lVar26 + 0xb8),0);
                              }
                            }
                            else if ((1 < iVar4) && (iVar10 < iVar9)) {
                              uVar18 = FUN_078b4f58(*(undefined8 *)PTR_DAT_09f31b40,
                                                    *(undefined8 *)(lVar17 + 0x20),
                                                    *(undefined8 *)PTR_DAT_09f31c38,0);
                              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                              }
                              FUN_094c33b0(uVar18,0);
                            }
                            lVar26 = *plVar12;
                            uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
                            if (uVar31 != 0) {
                              piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                  puVar15 = (undefined8 *)(lVar26 + (long)*piVar32 * 0x10 + 0x138);
                                  goto LAB_0773e514;
                                }
                                uVar31 = uVar31 - 1;
                                piVar32 = piVar32 + 4;
                              } while (uVar31 != 0);
                            }
                            puVar15 = (undefined8 *)
                                      FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0);
LAB_0773e514:
                            uVar31 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                            if ((uVar31 & 1) != 0) {
                              FUN_07732404(lVar27,(long)&local_90 + 4,lVar17,lVar33,lVar23,0);
                            }
                            lVar26 = *plVar12;
                            uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
                            if (uVar31 != 0) {
                              piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                  puVar15 = (undefined8 *)
                                            (lVar26 + (long)(*piVar32 + 0x24) * 0x10 + 0x138);
                                  goto LAB_0773e59c;
                                }
                                uVar31 = uVar31 - 1;
                                piVar32 = piVar32 + 4;
                              } while (uVar31 != 0);
                            }
                            puVar15 = (undefined8 *)
                                      FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_0773e59c:
                            iVar10 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                            if (iVar10 == 1) {
                              lVar26 = *plVar21;
                              uVar31 = (ulong)*(ushort *)(lVar26 + 0x12e);
                              if (uVar31 != 0) {
                                piVar32 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f312c0) {
                                    puVar15 = (undefined8 *)
                                              (lVar26 + (long)(*piVar32 + 1) * 0x10 + 0x138);
                                    goto LAB_0773e608;
                                  }
                                  uVar31 = uVar31 - 1;
                                  piVar32 = piVar32 + 4;
                                } while (uVar31 != 0);
                              }
                              puVar15 = (undefined8 *)
                                        FUN_044822ac(plVar21,*(long *)PTR_DAT_09f312c0,1);
LAB_0773e608:
                              (*(code *)*puVar15)(plVar21,lVar17,iVar11,puVar15[1]);
                            }
                            *(int *)(lVar17 + 0x28) = iVar11;
                            FUN_0773ca38(&local_80,uVar16,lVar17);
                            if (lVar29 == 0) goto LAB_0773ecc8;
                            lVar26 = *(long *)(lVar29 + 0x10);
                            lVar33 = *(long *)PTR_DAT_09f1e870;
                            *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
                            if (lVar26 == 0) goto LAB_0773ecc8;
                            uVar28 = *(uint *)(lVar29 + 0x18);
                            if (uVar28 < *(uint *)(lVar26 + 0x18)) {
                              *(uint *)(lVar29 + 0x18) = uVar28 + 1;
                              puVar15 = (undefined8 *)(lVar26 + (long)(int)uVar28 * 8 + 0x20);
                              *puVar15 = uVar16;
                              thunk_FUN_044bb4b4(puVar15,uVar16);
                            }
                            else {
                              FUN_05bade44(lVar29,uVar16,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar26 = *(long *)(lVar24 + 0x10);
                            lVar33 = *(long *)PTR_DAT_09f31558;
                            *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                            if (lVar26 == 0) goto LAB_0773ecc8;
                            uVar28 = *(uint *)(lVar24 + 0x18);
                            if (uVar28 < *(uint *)(lVar26 + 0x18)) {
                              *(uint *)(lVar24 + 0x18) = uVar28 + 1;
                              plVar19 = (long *)(lVar26 + (long)(int)uVar28 * 8 + 0x20);
                              *plVar19 = lVar17;
                              thunk_FUN_044bb4b4(plVar19,lVar17);
                            }
                            else {
                              FUN_05bade44(lVar24,lVar17,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar33 + 0x20) + 0xc0) + 0x70));
                            }
                            plVar19 = (long *)(lVar17 + 0xd0);
                            lVar26 = *plVar19;
                            if (lVar26 == 0) goto LAB_0773ecc8;
                            uVar31 = 0;
                            lVar33 = 0x20;
                            iVar11 = *(int *)(lVar17 + 0x30) + iVar11;
                            while ((long)uVar31 < (long)(int)*(uint *)(lVar26 + 0x18)) {
                              if (*(uint *)(lVar26 + 0x18) <= uVar31) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar26 + lVar33) = 0;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar26 + lVar33),0);
                              lVar26 = *plVar19;
                              uVar31 = uVar31 + 1;
                              lVar33 = lVar33 + 8;
                              if (lVar26 == 0) goto LAB_0773ecc8;
                            }
                            *plVar19 = 0;
                            thunk_FUN_044bb4b4(plVar19,0);
                            if (3 < iVar4) {
                              lVar26 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,6);
                              if (lVar26 == 0) goto LAB_0773ecc8;
                              if (*(int *)(lVar26 + 0x18) == 0) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar26 + 0x20) = *(undefined8 *)PTR_DAT_09f31bc8;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar26 + 0x20));
                              if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(lVar17 + 0x20);
                              thunk_FUN_044bb4b4((undefined8 *)(lVar26 + 0x28));
                              if (*(uint *)(lVar26 + 0x18) < 3) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar26 + 0x30) = *(undefined8 *)PTR_DAT_09f31c20;
                              thunk_FUN_044bb4b4();
                              lVar17 = *plVar14;
                              uVar31 = (ulong)*(ushort *)(lVar17 + 0x12e);
                              if (uVar31 != 0) {
                                piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
                                    puVar15 = (undefined8 *)
                                              (lVar17 + (long)(*piVar32 + 6) * 0x10 + 0x138);
                                    goto LAB_0773e850;
                                  }
                                  uVar31 = uVar31 - 1;
                                  piVar32 = piVar32 + 4;
                                } while (uVar31 != 0);
                              }
                              puVar15 = (undefined8 *)
                                        FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,6);
LAB_0773e850:
                              uVar5 = (*(code *)*puVar15)(plVar14,puVar15[1]);
                              local_98 = CONCAT44(uVar5,(int)local_98);
                              uVar16 = FUN_07a3b850((long)&local_98 + 4,0);
                              if (*(uint *)(lVar26 + 0x18) < 4) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar26 + 0x38) = uVar16;
                              thunk_FUN_044bb4b4((undefined8 *)(lVar26 + 0x38),uVar16);
                              if (*(uint *)(lVar26 + 0x18) < 5) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar26 + 0x40) = *(undefined8 *)PTR_DAT_09f31c60;
                              thunk_FUN_044bb4b4();
                              lVar17 = *plVar21;
                              uVar31 = (ulong)*(ushort *)(lVar17 + 0x12e);
                              if (uVar31 != 0) {
                                piVar32 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f312c0) {
                                    puVar15 = (undefined8 *)
                                              (lVar17 + (long)(*piVar32 + 6) * 0x10 + 0x138);
                                    goto LAB_0773e908;
                                  }
                                  uVar31 = uVar31 - 1;
                                  piVar32 = piVar32 + 4;
                                } while (uVar31 != 0);
                              }
                              puVar15 = (undefined8 *)
                                        FUN_044822ac(plVar21,*(long *)PTR_DAT_09f312c0,6);
LAB_0773e908:
                              uVar5 = (*(code *)*puVar15)(plVar21,puVar15[1]);
                              local_98 = CONCAT44(uVar5,(int)local_98);
                              uVar16 = FUN_07a3b850((long)&local_98 + 4,0);
                              if (*(uint *)(lVar26 + 0x18) < 6) goto LAB_0773ecc4;
                              *(undefined8 *)(lVar26 + 0x48) = uVar16;
                              thunk_FUN_044bb4b4();
                              uVar16 = FUN_078b57fc(lVar26,0);
                              plVar19 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                              local_b8 = CONCAT44(local_b8._4_4_,iVar4);
                              lVar17 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&local_b8)
                              ;
                              if (plVar19 == (long *)0x0) goto LAB_0773ecc8;
                              if ((lVar17 != 0) &&
                                 (lVar26 = thunk_FUN_04485110(lVar17,*(undefined8 *)
                                                                      (*plVar19 + 0x40)),
                                 lVar26 == 0)) goto LAB_0773eccc;
                              if ((int)plVar19[3] == 0) goto LAB_0773ecc4;
                              plVar19[4] = lVar17;
                              thunk_FUN_044bb4b4(plVar19 + 4,lVar17);
                              FUN_0771ec00(uVar16,plVar19,0);
                            }
                            uVar30 = uVar30 + 1;
                          } while ((long)uVar30 < (long)*(int *)(param_11 + 0x18));
                        }
                        lVar27 = *plVar12;
                        uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
                        if (uVar30 != 0) {
                          piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar15 = (undefined8 *)
                                        (lVar27 + (long)(*piVar32 + 0x16) * 0x10 + 0x138);
                              goto LAB_0773ea3c;
                            }
                            uVar30 = uVar30 - 1;
                            piVar32 = piVar32 + 4;
                          } while (uVar30 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0x16)
                        ;
LAB_0773ea3c:
                        iVar11 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                        if (iVar11 == 4) {
                          lVar27 = *plVar12;
                          uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
                          if (uVar30 != 0) {
                            piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                puVar15 = (undefined8 *)
                                          (lVar27 + (long)(*piVar32 + 0x1a) * 0x10 + 0x138);
                                goto LAB_0773eaa8;
                              }
                              uVar30 = uVar30 - 1;
                              piVar32 = piVar32 + 4;
                            } while (uVar30 != 0);
                          }
                          puVar15 = (undefined8 *)
                                    FUN_044822ac(plVar12,*(long *)PTR_DAT_09f30ab8,0x1a);
LAB_0773eaa8:
                          uVar13 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                          lVar27 = *plVar14;
                          uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
                          if (uVar30 != 0) {
                            piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
                                puVar15 = (undefined8 *)
                                          (lVar27 + (long)(*piVar32 + 0xe) * 0x10 + 0x138);
                                goto LAB_0773eb18;
                              }
                              uVar30 = uVar30 - 1;
                              piVar32 = piVar32 + 4;
                            } while (uVar30 != 0);
                          }
                          puVar15 = (undefined8 *)
                                    FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,0xe);
LAB_0773eb18:
                          (*(code *)*puVar15)(uVar13,plVar14,lVar24,puVar15[1]);
                        }
                        if (3 < iVar4) {
                          lVar27 = *plVar14;
                          uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
                          if (uVar30 != 0) {
                            piVar32 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar32 + -2) == *(long *)PTR_DAT_09f313c8) {
                                puVar15 = (undefined8 *)
                                          (lVar27 + (long)(*piVar32 + 6) * 0x10 + 0x138);
                                goto LAB_0773eb94;
                              }
                              uVar30 = uVar30 - 1;
                              piVar32 = piVar32 + 4;
                            } while (uVar30 != 0);
                          }
                          puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f313c8,6);
LAB_0773eb94:
                          uVar5 = (*(code *)*puVar15)(plVar14,puVar15[1]);
                          local_98 = CONCAT44(uVar5,(int)local_98);
                          uVar13 = FUN_07a3b850((long)&local_98 + 4,0);
                          if (param_15 == 0) goto LAB_0773ecc8;
                          local_a0 = FUN_087dad08(param_15,0);
                          uVar16 = FUN_07a3c8f0(&local_a0,0);
                          uVar13 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f31c18,uVar13,
                                                *(undefined8 *)PTR_DAT_09f31c28,uVar16,0);
                          plVar21 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
                          local_b8 = CONCAT44(local_b8._4_4_,iVar4);
                          lVar27 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f31348,&local_b8);
                          if (plVar21 == (long *)0x0) goto LAB_0773ecc8;
                          if ((lVar27 != 0) &&
                             (lVar23 = thunk_FUN_04485110(lVar27,*(undefined8 *)(*plVar21 + 0x40)),
                             lVar23 == 0)) {
LAB_0773eccc:
                            uVar13 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                            FUN_04447d10(uVar13,0);
                          }
                          if ((int)plVar21[3] == 0) {
LAB_0773ecc4:
                    /* WARNING: Subroutine does not return */
                            FUN_04447e4c();
                          }
                          plVar21[4] = lVar27;
                          thunk_FUN_044bb4b4(plVar21 + 4,lVar27);
                          FUN_0771ec00(uVar13,plVar21,0);
                        }
                        if (param_1[0x1b] != 0) {
                          FUN_087dae58(param_1[0x1b],0);
                          goto LAB_0773ec98;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0773ecc8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


