/*
FUNCTION_NAME: FUN_02f8b1bc
ENTRY_POINT: 02f8b1bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f8b4ac) */
/* WARNING: Removing unreachable block (ram,0x02f8b4c0) */

int FUN_02f8b1bc(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  char local_34 [4];
  
  if ((DAT_0412ad61 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d256f0);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cc6e60);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    DAT_0412ad61 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
  local_34[0] = '\0';
  FUN_027e0bd8(uVar7,local_34,0);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x2c8))(plVar6,*(undefined8 *)(*plVar6 + 0x2d0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar10 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cc6e60) {
        puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02f8b2b8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cc6e60,0);
LAB_02f8b2b8:
  plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
  puVar4 = PTR_DAT_03d256f0;
  puVar3 = PTR_DAT_03cbed20;
  puVar2 = PTR_DAT_03cbed08;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar14 = 0;
  do {
    lVar11 = *plVar6;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02f8b334;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar6,lVar10,0);
LAB_02f8b334:
    uVar12 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01a89d6c(plVar6,*(undefined8 *)puVar2);
      if (plVar6 == (long *)0x0) goto LAB_02f8b460;
      lVar11 = *plVar6;
      lVar10 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_02f8b438;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar6;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02f8b394;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar6,lVar10,1);
LAB_02f8b394:
    plVar9 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar9 = (long *)plVar9[3];
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar5 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    iVar14 = iVar5 + iVar14;
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == lVar10) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02f8b454;
    }
  }
LAB_02f8b438:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar6,lVar10,0);
LAB_02f8b454:
  (*(code *)*puVar8)(plVar6,puVar8[1]);
LAB_02f8b460:
  if (local_34[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
  }
  return iVar14;
}


