/*
FUNCTION_NAME: Fusion.Log.LegacyLogger$$NewMethod<__Il2CppFullySharedGenericType>
ENTRY_POINT: 01f0f66c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Fusion_Log_LegacyLogger__NewMethod<__Il2CppFullySharedGenericType>(void)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar9;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long lVar10;
  undefined4 unaff_w23;
  undefined8 *puVar11;
  undefined8 unaff_x24;
  undefined8 uVar12;
  long *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x28;
  undefined8 uVar13;
  long unaff_x29;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(undefined8 *)(unaff_x26 + 0x18) = unaff_x24;
  *(undefined8 **)(unaff_x29 + -0x58) = (undefined8 *)(unaff_x26 + 0x18);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (unaff_x25 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    puVar7 = PTR_DAT_03cd7368;
  }
  else {
    if ((*unaff_x21 != 0) || (**(long **)(unaff_x29 + -0x58) != 0)) {
      FUN_025c97a0(unaff_w23,1,0);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      uVar4 = thunk_FUN_01a89e68();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01a46ff8(lVar3);
      }
      FUN_020a18e8(uVar4,*(undefined8 *)(unaff_x29 + -0x28),unaff_w23,
                   *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x78));
      puVar11 = (undefined8 *)(unaff_x26 + 0x20);
      *puVar11 = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar11,uVar4);
      puVar7 = PTR_DAT_03cd7350;
      if (*(int *)(*(long *)PTR_DAT_03cd7350 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      *(undefined8 *)(unaff_x29 + -0x70) = unaff_x28;
      uVar5 = FUN_027ecd3c(0);
      if ((uVar5 & 1) != 0) {
        uVar12 = *puVar11;
        uVar13 = *(undefined8 *)PTR_DAT_03cd7360;
        uVar4 = (**(code **)(*unaff_x25 + 0x168))();
        uVar4 = FUN_025b1328(uVar13,uVar4,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar7);
        }
        FUN_027ecd44(0,uVar12,uVar4,0,0);
      }
      uVar4 = *puVar11;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04121c6a == '\0') {
        FUN_01ab69ac(PTR_DAT_03cd7350);
        FUN_01ab69ac(PTR_DAT_03cc0330);
        DAT_04121c6a = '\x01';
      }
      puVar2 = PTR_DAT_03cc0330;
      lVar3 = *(long *)PTR_DAT_03cc0330;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        OVRPlugin__GetCurrentDetachedInteractionProfile(uVar4,0);
      }
      lVar3 = *(long *)(unaff_x19 + 0x38);
      pvVar1 = *(void **)(unaff_x29 + -0x38);
      if (-1 < *(int *)(*(long *)(lVar3 + 0x18) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(unaff_x20,pvVar1,*(size_t *)(unaff_x29 + -0x48));
      pvVar1 = *(void **)(unaff_x29 + -0x30);
      if (-1 < *(int *)(*(long *)(lVar3 + 0x20) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x22,pvVar1,*(size_t *)(unaff_x29 + -0x40));
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7348);
      FUN_026b4574();
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
        unaff_x20 = (undefined8 *)*unaff_x20;
      }
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      (*(code *)unaff_x25[3])
                (unaff_x25[8],unaff_x20,unaff_x22,uVar4,*(undefined8 *)(unaff_x29 + -0x28),
                 unaff_x29 + -0x10,unaff_x25[5]);
      plVar9 = *(long **)(unaff_x29 + -0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cd7358) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_01f0f944;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03cd7358,3);
LAB_01f0f944:
      uVar5 = (*(code *)*puVar6)(plVar9,puVar6[1]);
      if ((uVar5 & 1) != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x20);
        lVar10 = *unaff_x21;
        uVar12 = *puVar11;
        uVar4 = **(undefined8 **)(unaff_x29 + -0x58);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01a46ff8();
        }
        FUN_0209ff88(plVar9,lVar10,uVar4,uVar12,0,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x88));
      }
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(*puVar11);
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar4 = thunk_FUN_01a89e68();
    puVar7 = PTR_DAT_03cd7378;
  }
  uVar12 = thunk_FUN_01a6ca08(puVar7);
  FUN_026a44fc(uVar4,uVar12,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar4);
}


