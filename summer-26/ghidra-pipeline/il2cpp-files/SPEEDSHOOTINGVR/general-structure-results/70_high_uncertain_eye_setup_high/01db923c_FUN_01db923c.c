/*
FUNCTION_NAME: FUN_01db923c
ENTRY_POINT: 01db923c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db952c) */
/* WARNING: Removing unreachable block (ram,0x01db94cc) */
/* WARNING: Removing unreachable block (ram,0x01db9538) */
/* WARNING: Removing unreachable block (ram,0x01db94f0) */

void FUN_01db923c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  char local_44 [4];
  
  if ((DAT_0247da43 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bef0);
    FUN_00fdc2e4(PTR_DAT_0235a740);
    FUN_00fdc2e4(PTR_DAT_0235a748);
    FUN_00fdc2e4(PTR_DAT_0234bef8);
    DAT_0247da43 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x48);
  thunk_FUN_00ffe618();
  if (lVar9 == 0) {
    return;
  }
  puVar10 = (undefined8 *)(lVar9 + 0x40);
  plVar11 = (long *)*puVar10;
  thunk_FUN_00ffe618();
  if (plVar11 == (long *)0x0) {
    return;
  }
  local_44[0] = '\0';
  FUN_01da75d8(plVar11,local_44);
  lVar9 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0235a740) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_01db9314;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0103c348(plVar11,*(long *)PTR_DAT_0235a740,0);
LAB_01db9314:
  plVar5 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
  puVar3 = PTR_DAT_0235a748;
  puVar2 = PTR_DAT_0234bef8;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  do {
    lVar9 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_68_0___cctor;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348(plVar5,*(long *)puVar2,0);
OVRPlugin_OVRP_1_68_0___cctor:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_01db94bc;
      lVar9 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 == 0) goto LAB_01db9494;
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01db93e0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348(plVar5,*(long *)puVar3,0);
LAB_01db93e0:
    lVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(lVar9 + 0x38);
    thunk_FUN_00ffe618();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar9 + 0x38), thunk_FUN_00ffe618(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar9 = *(long *)(lVar9 + 0x48);
      thunk_FUN_00ffe618();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar9 = *(long *)(lVar9 + 0x20);
      thunk_FUN_00ffe618();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar6 = FUN_01dbf094(lVar9,0,0,0);
      FUN_01db8bac(param_1,uVar6,0);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_01db94b0;
    }
  }
LAB_01db9494:
  puVar4 = (undefined8 *)FUN_0103c348(plVar5,*(long *)PTR_DAT_0234bef0,0);
LAB_01db94b0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_01db94bc:
  if (local_44[0] != '\0') {
    FUN_0102a860(plVar11);
  }
  thunk_FUN_00ffe618();
  *puVar10 = 0;
  thunk_FUN_0106e12c(puVar10,0);
  return;
}


