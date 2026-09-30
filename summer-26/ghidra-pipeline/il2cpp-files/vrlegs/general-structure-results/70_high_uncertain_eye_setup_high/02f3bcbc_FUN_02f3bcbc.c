/*
FUNCTION_NAME: FUN_02f3bcbc
ENTRY_POINT: 02f3bcbc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f3c070) */
/* WARNING: Removing unreachable block (ram,0x02f3c260) */
/* WARNING: Removing unreachable block (ram,0x02f3c258) */

void FUN_02f3bcbc(long *param_1)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  char local_44 [4];
  
  if ((DAT_0412aaf6 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbf900);
    FUN_01ab69ac(PTR_DAT_03cfb838);
    FUN_01ab69ac(PTR_DAT_03d22a90);
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03ccbd08);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cc6e60);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cfe690);
    DAT_0412aaf6 = 1;
  }
  local_44[0] = '\0';
  if ((char)param_1[8] != '\0') {
    return;
  }
  if (*(char *)((long)param_1 + 0x41) == '\0') {
    plVar7 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf900);
    FUN_02730070(plVar7,0);
    (**(code **)(*param_1 + 0x1e8))(param_1,plVar7,*(undefined8 *)(*param_1 + 0x1f0));
    plVar2 = (long *)PTR_DAT_03ccbd08;
  }
  else {
    lVar15 = param_1[6];
    plVar7 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf900);
    FUN_0273026c(plVar7,lVar15,0);
    plVar2 = (long *)PTR_DAT_03ccbd08;
  }
  PTR_DAT_03ccbd08 = (undefined *)plVar2;
  if (plVar7 != (long *)0x0) {
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *plVar2) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_02f3be20;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*plVar2,1);
LAB_02f3be20:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    plVar9 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
    FUN_02734128(plVar9,uVar6,0);
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_03cc6e60) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02f3bea8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f3bea8:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar5 = PTR_DAT_03d22a90;
    puVar4 = PTR_DAT_03cbed20;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar12 = *plVar7;
      lVar15 = *(long *)puVar4;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar15) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02f3bf18;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,lVar15,0);
LAB_02f3bf18:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_03cbed08;
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01a89d6c(plVar7,*(undefined8 *)PTR_DAT_03cbed08);
        if (plVar7 == (long *)0x0) goto LAB_02f3c064;
        lVar15 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 == 0) goto LAB_02f3c03c;
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_02f3c024;
      }
      lVar12 = *plVar7;
      lVar15 = *(long *)puVar4;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar15) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_02f3bf78;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,lVar15,1);
LAB_02f3bf78:
      plVar10 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar15 = *plVar10;
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar10);
      }
      uVar11 = (**(code **)(lVar15 + 0x178))(plVar10,*(undefined8 *)(lVar15 + 0x180));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c(uVar11,uVar11);
      }
      (**(code **)(*plVar9 + 0x318))(plVar9,uVar11,plVar10,*(undefined8 *)(*plVar9 + 800));
    } while( true );
  }
  goto LAB_02f3c2c0;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_02f3c024:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02f3c058;
    }
  }
LAB_02f3c03c:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar3,0);
LAB_02f3c058:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_02f3c064:
  if ((plVar9 != (long *)0x0) &&
     (plVar7 = (long *)(**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0)),
     plVar7 != (long *)0x0)) {
    lVar15 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *plVar2) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_02f3c0e4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*plVar2,1);
LAB_02f3c0e4:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar15 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,uVar6);
    plVar7 = (long *)(**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *plVar2) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02f3c174;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*plVar2,0);
LAB_02f3c174:
      (*(code *)*puVar8)(plVar7,lVar15,0,puVar8[1]);
      lVar12 = param_1[0xb];
      local_44[0] = '\0';
      FUN_027e0bd8(lVar12,local_44,0);
      param_1[6] = lVar15;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 6,lVar15);
      *(undefined2 *)(param_1 + 8) = 0x101;
      puVar4 = PTR_DAT_03cfe690;
      if (*(int *)(*(long *)PTR_DAT_03cfe690 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412ab10 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cfe690);
        DAT_0412ab10 = '\x01';
      }
      lVar15 = *(long *)puVar4;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar15 = *(long *)puVar4;
      }
      *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x20);
      if (local_44[0] == '\0') {
        return;
      }
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar12,0);
      return;
    }
  }
LAB_02f3c2c0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


