/*
FUNCTION_NAME: FUN_02f958d0
ENTRY_POINT: 02f958d0
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


/* WARNING: Removing unreachable block (ram,0x02f95cb4) */
/* WARNING: Removing unreachable block (ram,0x02f95c18) */
/* WARNING: Removing unreachable block (ram,0x02f95cc4) */

long FUN_02f958d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  char local_54 [4];
  
  if ((DAT_0412ad96 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1f840);
    FUN_01ab69ac(PTR_DAT_03d25910);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    DAT_0412ad96 = 1;
  }
  puVar1 = PTR_DAT_03d1f840;
  if (param_1 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar12 = thunk_FUN_01a89e68();
                    /* try { // try from 02f95c84 to 03095dab has its CatchHandler @ 02f95c84
                       catch() { ... } // from try @ 02f95c84 with catch @ 02f95c84
                       catch() { ... } // from try @ 02f95eec with catch @ 02f95c84
                       catch() { ... } // from try @ 02f95f60 with catch @ 02f95c84
                       catch() { ... } // from try @ 02f95fcc with catch @ 02f95c84
                       catch() { ... } // from try @ 02f960d4 with catch @ 02f95c84 */
    uVar14 = thunk_FUN_01a6ca08(PTR_DAT_03d18c68);
    FUN_026a44fc(uVar12,uVar14,0);
    uVar14 = thunk_FUN_01a6ca08(PTR_DAT_03d25918);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar12,uVar14);
  }
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03d1f840 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02f94fe4();
    uVar12 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    local_54[0] = '\0';
    FUN_027e0bd8(uVar12,local_54,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar1;
    }
    plVar5 = (long *)**(long **)(lVar4 + 0xb8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
    puVar3 = PTR_DAT_03d25910;
    puVar2 = PTR_DAT_03cbed20;
    puVar1 = PTR_DAT_03cbed08;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar8 = *plVar5;
      lVar4 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f95a14;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar5,lVar4,0);
LAB_02f95a14:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        lVar4 = 0;
        iVar13 = 9;
        goto LAB_02f95ba0;
      }
      lVar8 = *plVar5;
      lVar4 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_02f95a74;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar5,lVar4,1);
LAB_02f95a74:
      lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar14 = *(undefined8 *)puVar3;
      plVar7 = (long *)thunk_FUN_01a89d6c(lVar4,uVar14);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar4,uVar14);
      }
      lVar4 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_02f95af0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar3,1);
LAB_02f95af0:
      lVar4 = (*(code *)*puVar6)(plVar7,param_1,param_2,puVar6[1]);
    } while (lVar4 == 0);
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_02f95b78;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar3,2);
LAB_02f95b78:
    uVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    *(undefined8 *)(lVar4 + 0x20) = uVar14;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    iVar13 = 8;
LAB_02f95ba0:
    plVar5 = (long *)thunk_FUN_01a89d6c(plVar5,*(undefined8 *)puVar1);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02f95c00;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar5,lVar8,0);
LAB_02f95c00:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if (local_54[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
    }
    if (iVar13 != 8) {
      lVar4 = 0;
    }
  }
  return lVar4;
}


