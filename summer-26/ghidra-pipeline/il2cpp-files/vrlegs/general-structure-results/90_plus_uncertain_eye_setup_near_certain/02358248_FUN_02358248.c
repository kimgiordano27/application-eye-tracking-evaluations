/*
FUNCTION_NAME: FUN_02358248
ENTRY_POINT: 02358248
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x023583a0) */
/* WARNING: Removing unreachable block (ram,0x02358570) */

void FUN_02358248(long param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  char local_84 [4];
  undefined1 local_80 [16];
  long local_70;
  float local_64;
  
  if ((DAT_04122c1c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ce1468);
    FUN_01ab69ac(PTR_DAT_03ce1470);
    FUN_01ab69ac(PTR_DAT_03ce1478);
    FUN_01ab69ac(PTR_DAT_03ce1480);
    FUN_01ab69ac(PTR_DAT_03ce1488);
    FUN_01ab69ac(PTR_DAT_03ce1490);
    FUN_01ab69ac(PTR_DAT_03ce1498);
    FUN_01ab69ac(PTR_DAT_03ce14a0);
    FUN_01ab69ac(PTR_DAT_03ce14a8);
    DAT_04122c1c = 1;
  }
  puVar6 = PTR_DAT_03ce1490;
  puVar5 = PTR_DAT_03ce1488;
  puVar4 = PTR_DAT_03ce1480;
  puVar3 = PTR_DAT_03ce1470;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  auVar12 = ZEXT816(0);
  if (param_4 == 0) {
    lVar8 = *(long *)PTR_DAT_03ce1470;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar3;
    }
    if (**(long **)(lVar8 + 0xb8) != 0) {
      FUN_01c5707c(**(long **)(lVar8 + 0xb8),*(undefined8 *)PTR_DAT_03ce14a8,0);
      return;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x18);
    local_80 = ZEXT816(0);
    if (lVar8 != 0) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar1 = param_3 / *(int *)(param_1 + 0x10);
      }
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = *(int *)(lVar8 + 0x20) / iVar1;
      }
      param_4 = iVar1 * param_4;
      iVar11 = 0;
      if (iVar2 * iVar1 <= param_4) {
        iVar11 = param_4 - iVar2 * iVar1;
      }
      if (param_4 <= iVar11) {
        return;
      }
      while( true ) {
        local_84[0] = '\0';
        local_80 = auVar12;
        FUN_027e0bd8(lVar8,local_84,0);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_022661a4(*(long *)(param_1 + 0x18),&local_70,*(undefined8 *)PTR_DAT_03ce1498);
        lVar7 = local_70;
        if (local_84[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(lVar8,0);
        }
        if (lVar7 == 0) break;
        auVar12 = FUN_01fb4a38(*param_2,param_2[1],*(int *)(param_1 + 0x10) * iVar11,
                               *(undefined4 *)(lVar7 + 0x18),*(undefined8 *)PTR_DAT_03ce1478);
        local_80 = auVar12;
        if (0 < *(int *)(lVar7 + 0x18)) {
          uVar9 = 0;
          do {
            FUN_02233354(local_80,uVar9 & 0xffffffff,&local_64,*(undefined8 *)puVar4);
            if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            local_64 = local_64 + *(float *)(lVar7 + 0x20 + uVar9 * 4);
            FUN_02233490(local_80,uVar9 & 0xffffffff,&local_64,*(undefined8 *)puVar5);
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < (long)*(int *)(lVar7 + 0x18));
        }
        local_64 = 0.0;
        FUN_01f22fa0(lVar7,&local_64,*(undefined8 *)PTR_DAT_03ce1468);
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        local_84[0] = '\0';
        FUN_027e0bd8(uVar10,local_84,0);
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_022492b8(*(long *)(param_1 + 0x20),lVar7,*(undefined8 *)puVar6);
        if (local_84[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
        }
        iVar11 = iVar11 + 1;
        if (param_4 <= iVar11) {
          return;
        }
        lVar8 = *(long *)(param_1 + 0x18);
        auVar12 = local_80;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


