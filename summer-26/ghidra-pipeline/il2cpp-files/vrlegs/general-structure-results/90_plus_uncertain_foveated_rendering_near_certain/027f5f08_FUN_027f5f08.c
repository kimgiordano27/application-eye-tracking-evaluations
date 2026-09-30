/*
FUNCTION_NAME: FUN_027f5f08
ENTRY_POINT: 027f5f08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_foveation_hits_1;functionality_foveated_rendering
*/


long FUN_027f5f08(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  local_38 = param_2;
  if ((DAT_0412517e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8ac0);
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    FUN_01ab69ac(PTR_DAT_03cfd6d0);
    FUN_01ab69ac(PTR_DAT_03cc0330);
    FUN_01ab69ac(PTR_DAT_03cca2a8);
    FUN_01ab69ac(PTR_DAT_03cca2b0);
    FUN_01ab69ac(PTR_DAT_03cfd6d8);
    FUN_01ab69ac(PTR_DAT_03cfd6e0);
    FUN_01ab69ac(PTR_DAT_03cfd6e8);
    DAT_0412517e = 1;
  }
  puVar2 = PTR_DAT_03cc9e10;
  if (param_1 < -1) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar10 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfcc78);
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cfd6f0);
    FUN_026ade84(uVar10,uVar7,uVar8,0);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfd6f8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar10,uVar7);
  }
  if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_027d75b4(&local_38,0);
  uVar10 = local_38;
  puVar1 = PTR_DAT_03cc0330;
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_04120e63 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cc0330);
        DAT_04120e63 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar1;
      }
      return *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
    }
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfd6d0);
    FUN_027f6318(lVar4,uVar10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = OVRManager__SetFoveatedRenderingLevel(&local_38,0);
    puVar1 = PTR_DAT_03cfd6e8;
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)PTR_DAT_03cfd6e8;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar1;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *(long *)puVar1;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
        FUN_02060754(lVar9,uVar10,*(undefined8 *)PTR_DAT_03cfd6d8,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar6 = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar9);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d7a1c(&local_78,&local_38,lVar9,lVar4,0);
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      if (lVar4 == 0) goto LAB_027f61f0;
      *(undefined8 *)(lVar4 + 0x70) = local_68;
      *(undefined8 *)(lVar4 + 0x68) = uStack_70;
      *(undefined8 *)(lVar4 + 0x60) = local_78;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar4 + 0x60,0);
    }
    puVar2 = PTR_DAT_03cfd6e8;
    if (param_1 != -1) {
      lVar5 = *(long *)PTR_DAT_03cfd6e8;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *(long *)puVar2;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cca2a8);
        FUN_027e9210(lVar9,uVar10,*(undefined8 *)PTR_DAT_03cfd6e0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar6 = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar9);
      }
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cca2b0);
      FUN_027b624c(lVar5,0);
      FUN_027e81b4(lVar5,lVar9,lVar4,param_1,0xffffffffffffffff);
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0x78);
        *plVar6 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar5);
        if (*plVar6 != 0) {
          return lVar4;
        }
      }
LAB_027f61f0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cc0330 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = FUN_027f587c(uVar10);
  }
  return lVar4;
}


