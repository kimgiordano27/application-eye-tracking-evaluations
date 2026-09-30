/*
FUNCTION_NAME: FUN_029ea170
ENTRY_POINT: 029ea170
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029ea4a8) */

void FUN_029ea170(long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char local_54 [4];
  
  if ((DAT_04127f7d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdb5a8);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    DAT_04127f7d = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  local_54[0] = '\0';
  FUN_027e0bd8(uVar8,local_54,0);
  cVar2 = *(char *)(param_1 + 0x9e);
  thunk_FUN_01a4b338();
  if (cVar2 == '\0') {
    thunk_FUN_01a4b338();
    *(undefined1 *)(param_1 + 0x9e) = 1;
    uVar9 = 4;
  }
  else {
    uVar9 = 3;
  }
  if (local_54[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
  puVar4 = PTR_DAT_03cdb5a8;
  puVar3 = PTR_DAT_03cbed08;
  if ((uVar9 | 4) != 4) {
    return;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_027de940(*(long *)(param_1 + 0xe0),0);
  }
  while ((iVar1 = *(int *)(param_1 + 0xa8), thunk_FUN_01a4b338(), 0 < iVar1 ||
         (cVar2 = *(char *)(param_1 + 0xac), thunk_FUN_01a4b338(), cVar2 != '\0'))) {
    lVar12 = *(long *)(param_1 + 0xd0);
    if (lVar12 == 0) goto LAB_029ea424;
    FUN_02793a34(lVar12,0,*(undefined4 *)(lVar12 + 0x18),0);
    lVar12 = *(long *)(param_1 + 0x148);
    if (lVar12 == 0) goto LAB_029ea424;
    FUN_02793a34(lVar12,0,*(undefined4 *)(lVar12 + 0x18),0);
  }
  plVar5 = *(long **)(param_1 + 0xe0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
  }
  lVar12 = *(long *)(param_1 + 200);
  if (lVar12 != 0) {
    uVar10 = 0;
    lVar11 = 0x20;
    goto LAB_029ea2b8;
  }
  goto LAB_029ea424;
  while( true ) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      uVar9 = *(uint *)(lVar12 + 0x18);
    }
    if (uVar9 <= uVar10) goto LAB_029ea4a4;
    FUN_029e29e4(lVar12 + lVar11);
    uVar17 = *(undefined8 *)(param_1 + 0x108);
    uVar16 = *(undefined8 *)(param_1 + 0x100);
    uVar13 = *(undefined8 *)(param_1 + 0x118);
    uVar8 = *(undefined8 *)(param_1 + 0x110);
    uVar15 = *(undefined8 *)(param_1 + 0xf8);
    uVar14 = *(undefined8 *)(param_1 + 0xf0);
    lVar12 = *(long *)(param_1 + 200);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_029ea4a4;
    puVar6 = (undefined8 *)(lVar12 + lVar11);
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 0x38;
    puVar6[6] = *(undefined8 *)(param_1 + 0x120);
    puVar6[3] = uVar17;
    puVar6[2] = uVar16;
    puVar6[5] = uVar13;
    puVar6[4] = uVar8;
    puVar6[1] = uVar15;
    *puVar6 = uVar14;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,0);
    lVar12 = *(long *)(param_1 + 200);
    if (lVar12 == 0) break;
LAB_029ea2b8:
    uVar9 = *(uint *)(lVar12 + 0x18);
    if ((long)(int)uVar9 <= (long)uVar10) {
      lVar12 = *(long *)(param_1 + 0x140);
      if (lVar12 != 0) {
        uVar10 = 0;
        lVar11 = 0x20;
        goto LAB_029ea378;
      }
      break;
    }
  }
  goto LAB_029ea424;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar7 = piVar7 + 4;
    if (uVar10 == 0) break;
LAB_029ea448:
    if (*(long *)(piVar7 + -2) == *(long *)puVar3) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_029ea47c;
    }
  }
LAB_029ea460:
  puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar3,0);
LAB_029ea47c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
LAB_029ea378:
  do {
    uVar9 = *(uint *)(lVar12 + 0x18);
    if ((long)(int)uVar9 <= (long)uVar10) {
      plVar5 = *(long **)(param_1 + 0x48);
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 == 0) goto LAB_029ea460;
        piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_029ea448;
      }
      break;
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      uVar9 = *(uint *)(lVar12 + 0x18);
    }
    if (uVar9 <= uVar10) {
LAB_029ea4a4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_029e29e4(lVar12 + lVar11);
    uVar17 = *(undefined8 *)(param_1 + 0x108);
    uVar16 = *(undefined8 *)(param_1 + 0x100);
    uVar13 = *(undefined8 *)(param_1 + 0x118);
    uVar8 = *(undefined8 *)(param_1 + 0x110);
    uVar15 = *(undefined8 *)(param_1 + 0xf8);
    uVar14 = *(undefined8 *)(param_1 + 0xf0);
    lVar12 = *(long *)(param_1 + 0x140);
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_029ea4a4;
    puVar6 = (undefined8 *)(lVar12 + lVar11);
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 0x38;
    puVar6[6] = *(undefined8 *)(param_1 + 0x120);
    puVar6[3] = uVar17;
    puVar6[2] = uVar16;
    puVar6[5] = uVar13;
    puVar6[4] = uVar8;
    puVar6[1] = uVar15;
    *puVar6 = uVar14;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,0);
    lVar12 = *(long *)(param_1 + 0x140);
  } while (lVar12 != 0);
LAB_029ea424:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


