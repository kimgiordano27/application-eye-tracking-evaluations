/*
FUNCTION_NAME: FUN_03000554
ENTRY_POINT: 03000554
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03000914) */

undefined1  [16] FUN_03000554(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_64 [4];
  undefined1 local_60 [16];
  
  puVar4 = PTR_DAT_03ce04a0;
  if ((DAT_0412b123 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d27c60);
    FUN_01ab69ac(PTR_DAT_03ce04c8);
    FUN_01ab69ac(PTR_DAT_03d26d98);
    FUN_01ab69ac(PTR_DAT_03d267b8);
    FUN_01ab69ac(PTR_DAT_03d27ee8);
    FUN_01ab69ac(PTR_DAT_03ce04e0);
    FUN_01ab69ac(PTR_DAT_03ce04a0);
    FUN_01ab69ac(PTR_DAT_03ce04e8);
    DAT_0412b123 = 1;
  }
  local_64[0] = '\0';
  puVar1 = (undefined8 *)(param_1 + 0x48);
  lVar5 = *(long *)(*(long *)puVar4 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  pcVar6 = (char *)thunk_FUN_01a59484(puVar1,*(undefined8 *)
                                              (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
  if (*pcVar6 == '\0') {
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar11,local_64,0);
    lVar5 = *(long *)(*(long *)puVar4 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    pcVar6 = (char *)thunk_FUN_01a59484(puVar1,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    puVar4 = PTR_DAT_03d267b8;
    if (*pcVar6 == '\0') {
      uVar2 = *(uint *)(param_1 + 0x70);
      uVar12 = (ulong)uVar2;
      if (*(int *)(*(long *)PTR_DAT_03d267b8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412afe7 == '\0') {
        FUN_01ab69ac(PTR_DAT_03d267b8);
        DAT_0412afe7 = '\x01';
      }
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar4;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_60._0_8_ = local_60._0_8_ & 0xffffffffffffff00;
      auVar13 = FUN_020653c8(lVar5,uVar12,0,1,local_60,
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)PTR_DAT_03ce04c8 + 0x20) + 0xc0) + 0x40)
                            );
      lVar5 = auVar13._0_8_;
      if (DAT_0412afe0 == '\0') {
        FUN_01ab69ac(PTR_DAT_03d267b8);
        DAT_0412afe0 = '\x01';
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *(long *)puVar4;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_60._0_8_ = local_60._0_8_ & 0xffffffffffffff00;
      lVar7 = FUN_020653c8(lVar7,uVar12,0,1,local_60,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)PTR_DAT_03d27c60 + 0x20) + 0xc0) + 0x40));
      if (0 < (int)uVar2) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar2 = *(uint *)(lVar5 + 0x18);
        uVar8 = 0;
        lVar9 = 0x28;
        do {
          if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(int *)(lVar5 + 0x20 + uVar8 * 4) = (int)uVar8;
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          puVar3 = (undefined4 *)(lVar10 + lVar9);
          lVar9 = lVar9 + 0xc;
          *(undefined4 *)(lVar7 + 0x20 + uVar8 * 4) = *puVar3;
          uVar8 = uVar8 + 1;
        } while (uVar12 != uVar8);
      }
      FUN_01f26338(lVar7,lVar5,0,uVar12,*(undefined8 *)PTR_DAT_03d27ee8);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0412afe0 == '\0') {
        FUN_01ab69ac(PTR_DAT_03d267b8);
        DAT_0412afe0 = '\x01';
      }
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar4;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (lVar7 != 0) {
        FUN_02064b1c(lVar5,lVar7,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)PTR_DAT_03d26d98 + 0x20) + 0xc0) + 0x48));
      }
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_60 = auVar13;
      FUN_02241190(&local_80,local_60,*(undefined8 *)PTR_DAT_03ce04e0);
      *(undefined8 *)(param_1 + 0x58) = local_70;
      *(undefined8 *)(param_1 + 0x50) = uStack_78;
      *puVar1 = local_80;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x50,0);
    }
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar11,0);
    }
  }
  FUN_022412e0(puVar1,&local_80,*(undefined8 *)PTR_DAT_03ce04e8);
  auVar13._8_8_ = uStack_78;
  auVar13._0_8_ = local_80;
  return auVar13;
}


