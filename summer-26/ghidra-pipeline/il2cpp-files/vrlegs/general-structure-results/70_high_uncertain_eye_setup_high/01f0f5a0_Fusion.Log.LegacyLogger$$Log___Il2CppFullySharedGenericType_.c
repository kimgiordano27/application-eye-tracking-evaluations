/*
FUNCTION_NAME: Fusion.Log.LegacyLogger$$Log<__Il2CppFullySharedGenericType>
ENTRY_POINT: 01f0f5a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Fusion_Log_LegacyLogger__Log<__Il2CppFullySharedGenericType>(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *__dest;
  undefined4 unaff_w23;
  undefined8 *puVar16;
  undefined8 unaff_x24;
  undefined8 uVar17;
  long *unaff_x25;
  long unaff_x27;
  undefined8 uVar18;
  long unaff_x29;
  
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_01a47054();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  plVar15 = *(long **)(unaff_x19 + 0x38);
  uVar1 = *(uint *)(plVar15[3] + 0xfc);
  uVar2 = *(uint *)(plVar15[4] + 0xfc);
  uVar10 = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0xfc);
  *(ulong *)(unaff_x29 + -0x48) = (ulong)uVar1;
  *(ulong *)(unaff_x29 + -0x40) = (ulong)uVar2;
  puVar13 = (undefined8 *)(&stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0));
  uVar11 = uVar10 + 0xf & 0x1fffffff0;
  lVar4 = (long)puVar13 - uVar11;
  __dest = (undefined8 *)(lVar4 - ((ulong)uVar2 + 0xf & 0x1fffffff0));
  pvVar5 = (void *)((long)__dest - uVar11);
  *(void **)(unaff_x29 + -0x68) = pvVar5;
  *(ulong *)(unaff_x29 + -0x60) = uVar10;
  memset(pvVar5,0,uVar10);
  if ((*(byte *)(*plVar15 + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar6 = thunk_FUN_01a89e68();
  FUN_020203fc(lVar6,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar15 = (long *)(lVar6 + 0x10);
  *plVar15 = unaff_x27;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15);
  *(undefined8 *)(lVar6 + 0x18) = unaff_x24;
  *(undefined8 **)(unaff_x29 + -0x58) = (undefined8 *)(lVar6 + 0x18);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (unaff_x25 == (long *)0x0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar8 = thunk_FUN_01a89e68();
    puVar9 = PTR_DAT_03cd7368;
  }
  else {
    if ((*plVar15 != 0) || (**(long **)(unaff_x29 + -0x58) != 0)) {
      FUN_025c97a0(unaff_w23,1,0);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      uVar8 = thunk_FUN_01a89e68();
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8(lVar7);
      }
      FUN_020a18e8(uVar8,*(undefined8 *)(unaff_x29 + -0x28),unaff_w23,
                   *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x78));
      puVar16 = (undefined8 *)(lVar6 + 0x20);
      *puVar16 = uVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar16,uVar8);
      puVar9 = PTR_DAT_03cd7350;
      if (*(int *)(*(long *)PTR_DAT_03cd7350 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      *(long *)(unaff_x29 + -0x70) = lVar4;
      uVar10 = FUN_027ecd3c(0);
      if ((uVar10 & 1) != 0) {
        uVar17 = *puVar16;
        uVar18 = *(undefined8 *)PTR_DAT_03cd7360;
        uVar8 = (**(code **)(*unaff_x25 + 0x168))();
        uVar8 = FUN_025b1328(uVar18,uVar8,0);
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar9);
        }
        FUN_027ecd44(0,uVar17,uVar8,0,0);
      }
      uVar8 = *puVar16;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04121c6a == '\0') {
        FUN_01ab69ac(PTR_DAT_03cd7350);
        FUN_01ab69ac(PTR_DAT_03cc0330);
        DAT_04121c6a = '\x01';
      }
      puVar3 = PTR_DAT_03cc0330;
      lVar4 = *(long *)PTR_DAT_03cc0330;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar3;
      }
      if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        OVRPlugin__GetCurrentDetachedInteractionProfile(uVar8,0);
      }
      lVar4 = *(long *)(unaff_x19 + 0x38);
      pvVar5 = *(void **)(unaff_x29 + -0x38);
      if (-1 < *(int *)(*(long *)(lVar4 + 0x18) + 0x28)) {
        pvVar5 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(puVar13,pvVar5,*(size_t *)(unaff_x29 + -0x48));
      pvVar5 = *(void **)(unaff_x29 + -0x30);
      if (-1 < *(int *)(*(long *)(lVar4 + 0x20) + 0x28)) {
        pvVar5 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(__dest,pvVar5,*(size_t *)(unaff_x29 + -0x40));
      uVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7348);
      FUN_026b4574(uVar8,lVar6,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28),0);
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x28)) {
        puVar13 = (undefined8 *)*puVar13;
      }
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      (*(code *)unaff_x25[3])
                (unaff_x25[8],puVar13,__dest,uVar8,*(undefined8 *)(unaff_x29 + -0x28),
                 unaff_x29 + -0x10,unaff_x25[5]);
      plVar14 = *(long **)(unaff_x29 + -0x10);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *plVar14;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cd7358) {
            puVar13 = (undefined8 *)(lVar4 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_01f0f944;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)PTR_DAT_03cd7358,3);
LAB_01f0f944:
      uVar10 = (*(code *)*puVar13)(plVar14,puVar13[1]);
      if ((uVar10 & 1) != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x20);
        lVar6 = *plVar15;
        uVar17 = *puVar16;
        uVar8 = **(undefined8 **)(unaff_x29 + -0x58);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01a46ff8();
        }
        FUN_0209ff88(plVar14,lVar6,uVar8,uVar17,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x88));
      }
      if (*(long *)(*(long *)(unaff_x29 + -0x50) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(*puVar16);
    }
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar8 = thunk_FUN_01a89e68();
    puVar9 = PTR_DAT_03cd7378;
  }
  uVar17 = thunk_FUN_01a6ca08(puVar9);
  FUN_026a44fc(uVar8,uVar17,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar8);
}


