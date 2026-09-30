/*
FUNCTION_NAME: FUN_02baecc4
ENTRY_POINT: 02baecc4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02baefd0) */
/* WARNING: Removing unreachable block (ram,0x02baefdc) */

void FUN_02baecc4(long *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined1 auVar11 [16];
  char local_44 [4];
  
  puVar1 = PTR_DAT_03cd75b0;
  if ((DAT_04128edb & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d13a38);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03d13a40);
    FUN_01ab69ac(PTR_DAT_03d13a48);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cd9da0);
    FUN_01ab69ac(PTR_DAT_03cd75b0);
    FUN_01ab69ac(PTR_DAT_03cd9d90);
    DAT_04128edb = 1;
  }
  FUN_02baf9d0(param_2,*(undefined8 *)puVar1,0);
  lVar10 = param_1[2];
  local_44[0] = '\0';
  FUN_027e0bd8(lVar10,local_44,0);
  FUN_01f4d114(param_2,param_3,(int)param_1[4],*(undefined8 *)PTR_DAT_03cd9d90,
               *(undefined8 *)PTR_DAT_03cd9da0,*(undefined8 *)PTR_DAT_03d13a38);
  lVar6 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03d13a40) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_02baee14;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01a472ec(param_1,*(long *)PTR_DAT_03d13a40,0);
LAB_02baee14:
  plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
  puVar3 = PTR_DAT_03d13a48;
  puVar2 = PTR_DAT_03cbed20;
  puVar1 = PTR_DAT_03cbed08;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02baee8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar2,0);
LAB_02baee8c:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_02baef8c;
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02baef64;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02baeee8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar3,0);
LAB_02baeee8:
    auVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    pauVar7 = (undefined1 (*) [16])(param_2 + (long)(int)param_3 * 0x10 + 0x20);
    param_3 = param_3 + 1;
    *pauVar7 = auVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(pauVar7,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02baef80;
    }
  }
LAB_02baef64:
  puVar4 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar1,0);
LAB_02baef80:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02baef8c:
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar10,0);
  }
  return;
}


