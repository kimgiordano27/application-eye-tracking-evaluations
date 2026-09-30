/*
FUNCTION_NAME: FUN_02f5e0ac
ENTRY_POINT: 02f5e0ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02f5e6d8) */
/* WARNING: Removing unreachable block (ram,0x02f5e4c4) */
/* WARNING: Removing unreachable block (ram,0x02f5e594) */
/* WARNING: Removing unreachable block (ram,0x02f5e57c) */
/* WARNING: Removing unreachable block (ram,0x02f5e6cc) */

void FUN_02f5e0ac(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined8 uVar17;
  int iVar18;
  char local_64 [4];
  
                    /* try { // try from 02f5e0b4 to 0305e0bf has its CatchHandler @ 02f5e7c8 */
                    /* try { // try from 02f5e0c0 to 0305e1ff has its CatchHandler @ 02f5dca8 */
  if ((DAT_0412abf6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d245d8);
    FUN_01ab69ac(PTR_DAT_03d245d0);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cc6e60);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    DAT_0412abf6 = 1;
  }
  puVar5 = PTR_DAT_03d245d8;
  puVar4 = PTR_DAT_03d245d0;
  puVar3 = PTR_DAT_03cbed20;
  puVar2 = PTR_DAT_03cbed08;
  plVar16 = (long *)0x0;
  iVar18 = 0;
  local_64[0] = '\0';
switchD_02f5e28c_caseD_2:
  FUN_027e2830(0x2ee,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar4;
  }
  uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar17,local_64,0);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar4;
  }
  plVar8 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar6 = (**(code **)(*plVar8 + 0x3c8))(plVar8,*(undefined8 *)(*plVar8 + 0x3d0));
  if (iVar6 == 0) {
    iVar18 = iVar18 + 1;
    uVar12 = 5;
    if (iVar18 != 0x14) {
      uVar12 = 2;
    }
  }
  else {
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar4;
    }
    plVar16 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x2c8))(plVar16,*(undefined8 *)(*plVar16 + 0x2d0));
    if (plVar16 != (long *)0x0) {
                    /* try { // try from 02f5e200 to 0305e227 has its CatchHandler @ 02f5e944 */
      bVar1 = *(byte *)(*(long *)PTR_DAT_03cf21f8 + 0x130);
      if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cf21f8)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0();
      }
    }
    uVar12 = 6;
  }
                    /* try { // try from 02f5e25c to 0305e287 has its CatchHandler @ 02f5e93c */
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar17,0);
  }
  switch(uVar12) {
  case 0:
  case 6:
    if (plVar16 != (long *)0x0) {
      iVar6 = (**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0));
      if (iVar6 == 0) goto switchD_02f5e28c_caseD_2;
      plVar8 = (long *)(**(code **)(*plVar16 + 0x398))(plVar16,*(undefined8 *)(*plVar16 + 0x3a0));
      if (plVar8 != (long *)0x0) {
        lVar7 = *plVar8;
                    /* try { // try from 02f5e2d0 to 0305e2d3 has its CatchHandler @ 02f5e7d4 */
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 02f5e2d4 to 0305e3bb has its CatchHandler @ 02f5dca8 */
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_03cc6e60) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02f5e31c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f5e31c:
        plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
LAB_02f5e330:
        lVar13 = *plVar8;
        lVar7 = *(long *)puVar3;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar7) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02f5e37c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,0);
LAB_02f5e37c:
        uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar14 & 1) != 0) {
          lVar13 = *plVar8;
          lVar7 = *(long *)puVar3;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar7) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_02f5e3dc;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
                    /* try { // try from 02f5e3bc to 0305e3e3 has its CatchHandler @ 02f5e7e8 */
          puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,1);
LAB_02f5e3dc:
          plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
                    /* try { // try from 02f5e418 to 0305e443 has its CatchHandler @ 02f5e7e4 */
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar10);
            }
          }
          uVar14 = FUN_02f5dc14(param_1,plVar10,1);
          if ((uVar14 & 1) != 0) {
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar7 = *(long *)puVar4;
            }
            uVar17 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
            local_64[0] = '\0';
            FUN_027e0bd8(uVar17,local_64,0);
            lVar7 = *(long *)puVar4;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar7 = *(long *)puVar4;
            }
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            plVar11 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x10);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            (**(code **)(*plVar11 + 0x3a8))(plVar11,plVar10[2],*(undefined8 *)(*plVar11 + 0x3b0));
            if (local_64[0] != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(uVar17,0);
            }
          }
          goto LAB_02f5e330;
        }
        plVar8 = (long *)thunk_FUN_01a89d6c(plVar8,*(undefined8 *)puVar2);
        if (plVar8 != (long *)0x0) {
          lVar13 = *plVar8;
          lVar7 = *(long *)puVar2;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar7) {
                puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_02f5e564;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,0);
LAB_02f5e564:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        iVar18 = 0;
        goto switchD_02f5e28c_caseD_2;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  default:
    return;
  case 2:
    goto switchD_02f5e28c_caseD_2;
  case 5:
    local_64[0] = '\0';
    FUN_027e0bd8(param_1,local_64,0);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar4;
    }
    puVar9 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    *puVar9 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar9,0);
    if (local_64[0] == '\0') {
      return;
    }
    OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    return;
  }
}


