/*
FUNCTION_NAME: FUN_02f9b87c
ENTRY_POINT: 02f9b87c
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


/* WARNING: Removing unreachable block (ram,0x02f9bdb8) */

long FUN_02f9b87c(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long local_68;
  char local_5c [4];
  long local_58;
  
  puVar5 = PTR_DAT_03cbede8;
  if ((DAT_0412ae11 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d25b18);
    FUN_01ab69ac(PTR_DAT_03d25b20);
    FUN_01ab69ac(PTR_DAT_03d25b28);
    FUN_01ab69ac(PTR_DAT_03d1f860);
    FUN_01ab69ac(PTR_DAT_03d25b30);
    FUN_01ab69ac(PTR_DAT_03ceec20);
    FUN_01ab69ac(PTR_DAT_03d25b38);
    FUN_01ab69ac(PTR_DAT_03cbede8);
    FUN_01ab69ac(PTR_DAT_03d20e90);
    FUN_01ab69ac(PTR_DAT_03d07d00);
    FUN_01ab69ac(PTR_DAT_03d18950);
    DAT_0412ae11 = 1;
  }
  local_5c[0] = '\0';
  local_68 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_02ea33d8(param_1,0,0);
  puVar7 = PTR_DAT_03d07d00;
  if ((uVar11 & 1) != 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar13 = thunk_FUN_01a89e68();
    uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03d20060);
    FUN_026a44fc(uVar13,uVar12,0);
LAB_02f9bdfc:
    uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03d25b48);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar13,uVar12);
  }
  if (param_1 != 0) {
    uVar12 = FUN_02ea2a34(param_1,0);
    uVar13 = FUN_02ea1800(param_1,0);
    uVar13 = FUN_025bdc88(uVar12,*(undefined8 *)puVar7,uVar13,0);
    uVar12 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
    FUN_02e9f010(uVar12,uVar13,0);
    puVar6 = PTR_DAT_03d1f860;
    if (param_2 == (long *)0x0) {
      bVar4 = false;
      bVar9 = 0;
    }
    else {
      lVar18 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar11 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_03d1f860) {
            puVar14 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_02f9ba30;
          }
          uVar11 = uVar11 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar11 != 0);
      }
      puVar14 = (undefined8 *)FUN_01a472ec(param_2,*(long *)PTR_DAT_03d1f860,1);
LAB_02f9ba30:
      uVar11 = (*(code *)*puVar14)(param_2,param_1,puVar14[1]);
      uVar13 = 0;
      if ((uVar11 & 1) == 0) {
        uVar13 = uVar12;
      }
      if ((uVar11 & 1) == 0) {
        uVar12 = FUN_02ea2a34(param_1,0);
        uVar15 = thunk_FUN_025bd1c0(uVar12,*(undefined8 *)PTR_DAT_03d18950,0);
        lVar18 = *param_2;
        uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar11 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
              puVar14 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_02f9bacc;
            }
            uVar11 = uVar11 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_01a472ec(param_2,*(long *)puVar6,0);
LAB_02f9bacc:
        param_1 = (*(code *)*puVar14)(param_2,param_1,puVar14[1]);
        if (param_1 == 0) goto LAB_02f9bd80;
        uVar12 = FUN_02ea2a34(param_1,0);
        puVar6 = PTR_DAT_03d20e90;
        uVar11 = FUN_025bd4ac(uVar12,*(undefined8 *)PTR_DAT_03d20e90,0);
        if ((uVar11 & 1) != 0) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
          uVar13 = thunk_FUN_01a89e68();
          uVar12 = thunk_FUN_01a6ca08(PTR_DAT_03d25b40);
          FUN_02765308(uVar13,uVar12,0);
          goto LAB_02f9bdfc;
        }
        if ((uVar15 & 1) == 0) {
          bVar9 = 0;
        }
        else {
          uVar12 = FUN_02ea2a34(param_1,0);
          bVar9 = thunk_FUN_025bd1c0(uVar12,*(undefined8 *)puVar6,0);
        }
        bVar4 = true;
        uVar12 = uVar13;
      }
      else {
        bVar9 = 0;
        bVar4 = false;
      }
    }
    puVar8 = PTR_DAT_03d25b30;
    puVar6 = PTR_DAT_03ceec20;
    uVar13 = FUN_02ea2a34(param_1,0);
    uVar16 = FUN_02ea1800(param_1,0);
    uVar13 = FUN_025bdc88(uVar13,*(undefined8 *)puVar7,uVar16,0);
    uVar16 = thunk_FUN_01a89e68(*(undefined8 *)puVar5);
    FUN_02e9f010(uVar16,uVar13,0);
    uVar13 = uVar16;
    if (!bVar4) {
      uVar13 = 0;
    }
    uVar17 = thunk_FUN_01a89e68(*(undefined8 *)puVar8);
    FUN_02fa5320(uVar17,uVar12,uVar13,bVar9 & 1);
    lVar18 = *(long *)puVar6;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar18 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar18 + 0xb8);
    local_5c[0] = '\0';
    FUN_027e0bd8(uVar12,local_5c,0);
    lVar18 = *(long *)puVar6;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar18 = *(long *)puVar6;
    }
    if (**(long **)(lVar18 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = FUN_02180b80(**(long **)(lVar18 + 0xb8),uVar17,&local_68,
                          *(undefined8 *)PTR_DAT_03d25b20);
    lVar18 = local_68;
    if ((uVar11 & 1) == 0) {
      lVar18 = *(long *)puVar6;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar18);
        lVar18 = *(long *)puVar6;
      }
      if (0 < *(int *)(*(long *)(lVar18 + 0xb8) + 0x18)) {
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar18);
          lVar18 = *(long *)puVar6;
        }
        if (**(long **)(lVar18 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        iVar10 = FUN_02182fb4(**(long **)(lVar18 + 0xb8),*(undefined8 *)PTR_DAT_03d25b28);
        lVar18 = *(long *)puVar6;
        if (*(int *)(*(long *)(lVar18 + 0xb8) + 0x18) <= iVar10) {
          thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
          uVar12 = thunk_FUN_01a89e68();
          uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d25b50);
          FUN_0276a4a8(uVar12,uVar13,0);
          uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03d25b48);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,uVar13);
        }
      }
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar18);
        lVar18 = *(long *)puVar6;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar18 + 0xb8) + 0x10);
      uVar2 = *(undefined4 *)(*(long *)(lVar18 + 0xb8) + 0x14);
      lVar18 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d25b38);
      FUN_02fa408c(lVar18,uVar17,uVar16,uVar1,uVar2);
      local_68 = lVar18;
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar19 = *(long *)(*(long *)puVar6 + 0xb8);
      *(undefined1 *)(lVar18 + 0x31) = *(undefined1 *)(lVar19 + 0x28);
      uVar3 = *(undefined1 *)(lVar19 + 0x29);
      *(bool *)(lVar18 + 0x30) = bVar4;
      *(byte *)(lVar18 + 0x32) = bVar9 & 1;
      *(undefined1 *)(lVar18 + 0x40) = uVar3;
      FUN_02fa4400(lVar18,*(undefined1 *)(lVar19 + 0x38),*(undefined4 *)(lVar19 + 0x3c),
                   *(undefined4 *)(lVar19 + 0x40));
      if (**(long **)(*(long *)puVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02183548(**(long **)(*(long *)puVar6 + 0xb8),uVar17,local_68,&local_58,
                   *(undefined8 *)PTR_DAT_03d25b18);
      lVar18 = local_58;
    }
    if (local_5c[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar12,0);
    }
    return lVar18;
  }
LAB_02f9bd80:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


