/*
FUNCTION_NAME: FUN_029f4c24
ENTRY_POINT: 029f4c24
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f4ea0) */
/* WARNING: Removing unreachable block (ram,0x029f5000) */

void FUN_029f4c24(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_84;
  undefined8 local_80;
  long *plStack_78;
  char local_6c [4];
  long local_68;
  long local_58;
  
  puVar3 = PTR_DAT_03cbec30;
  local_68 = param_1;
  if ((DAT_04127faa & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbec30);
    FUN_01ab69ac(PTR_DAT_03d09938);
    FUN_01ab69ac(PTR_DAT_03ccf278);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03d09968);
    FUN_01ab69ac(PTR_DAT_03d09958);
    FUN_01ab69ac(PTR_DAT_03d09970);
    FUN_01ab69ac(PTR_DAT_03d09978);
    FUN_01ab69ac(PTR_DAT_03d09980);
    DAT_04127faa = 1;
  }
  lVar15 = *(long *)puVar3;
  local_6c[0] = '\0';
  plVar14 = *(long **)(param_1 + 0x78);
  lVar10 = *(long *)(lVar15 + 0x38);
  if (lVar10 == 0) {
    FUN_01a47054(lVar15);
    lVar10 = *(long *)(lVar15 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01a46ff8();
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar10 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01a46ff8();
  }
  puVar3 = PTR_DAT_03ccf278;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar15 = *plVar14;
  uVar16 = **(undefined8 **)(lVar10 + 0xb8);
  uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
  uVar17 = *(undefined8 *)PTR_DAT_03d09970;
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03ccf278) {
        puVar9 = (undefined8 *)(lVar15 + (long)(*piVar12 + 2) * 0x10 + 0x138);
        goto LAB_029f4d98;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03ccf278,2);
LAB_029f4d98:
  (*(code *)*puVar9)(plVar14,uVar17,uVar16,puVar9[1]);
  plStack_78 = &local_68;
  *(undefined1 *)(param_1 + 0x26) = 1;
  puVar7 = PTR_DAT_03d09978;
  puVar6 = PTR_DAT_03d09968;
  puVar5 = PTR_DAT_03d09938;
  puVar4 = PTR_DAT_03cbeda8;
  puVar2 = PTR_DAT_03cbeb18;
  local_80 = 0;
  cVar1 = *(char *)(param_1 + 0x60);
  do {
    if (cVar1 != '\0') {
      FUN_019b3b28(&local_80);
      return;
    }
    plVar14 = *(long **)(param_1 + 0x30);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    while( true ) {
      uVar16 = *(undefined8 *)(local_68 + 0x28);
      local_6c[0] = '\0';
      FUN_027e0bd8(uVar16,local_6c,0);
      lVar10 = *(long *)(local_68 + 0x28);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(lVar10 + 0x20) < 1) {
        lVar10 = 0;
      }
      else {
        FUN_022661a4(lVar10,&local_58,*(undefined8 *)puVar6);
        lVar10 = local_58;
      }
      if (local_6c[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar16,0);
      }
      if (lVar10 == 0) break;
      iVar8 = FUN_029f5270(*(undefined8 *)(local_68 + 0x58),lVar10,*(undefined4 *)(lVar10 + 0x18));
      if (*(long *)(local_68 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_021c7fbc(*(long *)(local_68 + 0x38),lVar10,*(undefined8 *)puVar5);
      if (*(int *)(local_68 + 0x88) != iVar8) {
        *(int *)(local_68 + 0x88) = iVar8;
        plVar13 = *(long **)(local_68 + 0x78);
        plVar14 = (long *)FUN_01ab6a94(*(undefined8 *)puVar2,1);
        local_84 = iVar8;
        lVar10 = thunk_FUN_01a89a98(*(undefined8 *)puVar4,&local_84);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((lVar10 != 0) &&
           (lVar15 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar14 + 0x40)), lVar15 == 0)) {
          uVar16 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar16,0);
        }
        if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar14[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14 + 4,lVar10);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar10 = *plVar13;
        uVar16 = *(undefined8 *)puVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_029f4f9c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar13,*(long *)puVar3,0);
LAB_029f4f9c:
        (*(code *)*puVar9)(plVar13,uVar16,plVar14,puVar9[1]);
      }
    }
    cVar1 = *(char *)(local_68 + 0x60);
    param_1 = local_68;
  } while( true );
}


