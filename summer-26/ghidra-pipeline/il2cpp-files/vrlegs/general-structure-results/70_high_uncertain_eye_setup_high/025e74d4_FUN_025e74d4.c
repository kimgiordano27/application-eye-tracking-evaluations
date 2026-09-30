/*
FUNCTION_NAME: FUN_025e74d4
ENTRY_POINT: 025e74d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x025e7a80) */

long * FUN_025e74d4(uint param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined4 local_48;
  char local_44 [4];
  long *local_40;
  uint local_34;
  
  puVar2 = PTR_DAT_03cf0260;
  if ((DAT_04123dc7 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf0858);
    FUN_01ab69ac(PTR_DAT_03cf0860);
    FUN_01ab69ac(PTR_DAT_03cf0868);
    FUN_01ab69ac(PTR_DAT_03cf0870);
    FUN_01ab69ac(PTR_DAT_03cf0878);
    FUN_01ab69ac(PTR_DAT_03cf0260);
    FUN_01ab69ac(PTR_DAT_03cf0880);
    FUN_01ab69ac(PTR_DAT_03cf0258);
    FUN_01ab69ac(PTR_DAT_03cbeda8);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cf05d0);
    FUN_01ab69ac(PTR_DAT_03cf0888);
    DAT_04123dc7 = 1;
  }
  local_44[0] = '\0';
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  local_40 = (long *)FUN_025d3e1c(param_1,0);
  puVar2 = PTR_DAT_03cf0258;
  if (local_40 != (long *)0x0) {
    return local_40;
  }
  if (0xffff < param_1) {
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeb18);
    uVar3 = FUN_01ab6a94(uVar3,2);
    puVar2 = PTR_DAT_03cbeda8;
    local_34 = 0;
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
    uVar4 = thunk_FUN_01a89a98(uVar4,&local_34);
    FUN_018748a8(uVar3);
    FUN_0187ef2c(uVar3,uVar4);
    FUN_018795ac(uVar3,0,uVar4);
    local_48 = 0xffff;
    uVar4 = thunk_FUN_01a6ca08(puVar2);
    uVar4 = thunk_FUN_01a89a98(uVar4,&local_48);
    FUN_018748a8(uVar3);
    FUN_0187ef2c(uVar3,uVar4);
    FUN_018795ac(uVar3,1,uVar4);
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cf0148);
    uVar3 = FUN_027b5b9c(uVar4,uVar3,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar4 = thunk_FUN_01a89e68();
    uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cf0890);
    FUN_026ade84(uVar4,uVar9,uVar3,0);
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf0898);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,uVar3);
  }
  lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_03cf0258 + 0xb8) + 0x40);
  thunk_FUN_01a4b338();
  if (lVar10 != 0) {
    lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
    thunk_FUN_01a4b338();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    local_34 = param_1;
    FUN_0219f8b8(lVar10,&local_34,&local_40,*(undefined8 *)PTR_DAT_03cf0860);
    if (local_40 != (long *)0x0) {
      return local_40;
    }
  }
  uVar3 = FUN_025e743c();
  local_44[0] = '\0';
  FUN_027e0bd8(uVar3,local_44,0);
  lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
  thunk_FUN_01a4b338();
  if (lVar10 == 0) {
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf0870);
    FUN_0219a4f0(uVar4,*(undefined8 *)PTR_DAT_03cf0868);
    thunk_FUN_01a4b338();
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
    *puVar5 = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar4);
  }
  lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
  thunk_FUN_01a4b338();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  local_34 = param_1;
  uVar6 = FUN_0219f8b8(lVar10,&local_34,&local_40,*(undefined8 *)PTR_DAT_03cf0860);
  if ((uVar6 & 1) != 0) {
    uVar11 = 0xb;
    plVar7 = local_40;
    goto LAB_025e7938;
  }
  if ((int)param_1 < 0x4b2) {
    if ((int)param_1 < 4) {
      if (param_1 != 0) {
LAB_025e7a90:
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeb18);
        plVar7 = (long *)FUN_01ab6a94(uVar3,1);
        local_34 = param_1;
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        lVar10 = thunk_FUN_01a89a98(uVar3,&local_34);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((lVar10 != 0) &&
           (lVar8 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar3,0);
        }
        if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar7[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar10);
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf08a8);
        uVar3 = FUN_027b5b9c(uVar3,plVar7,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
        uVar4 = thunk_FUN_01a89e68();
        uVar9 = thunk_FUN_01a6ca08(PTR_DAT_03cf0890);
        FUN_026a7658(uVar4,uVar3,uVar9,0);
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf0898);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar3);
      }
      plVar7 = (long *)FUN_025e7db4();
    }
    else if (param_1 == 0x4b0) {
      plVar7 = (long *)FUN_025e7e40();
    }
    else {
      if (param_1 != 0x4b1) {
        if (param_1 == 0x2a) goto LAB_025e7a90;
        goto LAB_025e776c;
      }
      plVar7 = (long *)FUN_025e7f10();
    }
  }
  else if ((int)param_1 < 0x4ea0) {
    if (param_1 == 12000) {
      plVar7 = (long *)FUN_025e8088();
    }
    else if (param_1 == 0x2ee1) {
      plVar7 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf05d0);
      FUN_025da43c(plVar7,1,1,0);
    }
    else if (param_1 == 0x4e9f) {
      plVar7 = (long *)FUN_025e8134();
    }
    else {
LAB_025e776c:
      if (*(int *)(*(long *)PTR_DAT_03cf0880 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar10 = FUN_0271bba0(param_1,0);
      if (lVar10 == 0) {
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeb18);
        plVar7 = (long *)FUN_01ab6a94(uVar3,1);
        local_34 = param_1;
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        lVar10 = thunk_FUN_01a89a98(uVar3,&local_34);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((lVar10 != 0) &&
           (lVar8 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar3,0);
        }
        if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar7[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar10);
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf08b0);
        uVar3 = FUN_027b5b9c(uVar3,plVar7,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
        uVar4 = thunk_FUN_01a89e68();
        FUN_02765308(uVar4,uVar3,0);
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf0898);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar3);
      }
      if (param_1 == 12000) {
        plVar7 = (long *)FUN_025e8088();
      }
      else if (param_1 == 0x2ee1) {
        plVar7 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf05d0);
        FUN_025da43c(plVar7,1,1,0);
      }
      else {
        plVar7 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,1);
        local_34 = param_1;
        lVar10 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&local_34);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((lVar10 != 0) &&
           (lVar8 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
          uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar3,0);
        }
        if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar7[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7 + 4,lVar10);
        if (*(int *)(*(long *)PTR_DAT_03cf0878 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        plVar7 = (long *)FUN_025e827c(*(undefined8 *)PTR_DAT_03cf0888,plVar7);
        if (plVar7 == (long *)0x0) {
          local_40 = (long *)0x0;
          local_34 = param_1;
          uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
          uVar3 = thunk_FUN_01a89a98(uVar3,&local_34);
          uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cf08a0);
          uVar3 = FUN_025b4d3c(uVar4,uVar3,0);
          thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
          uVar4 = thunk_FUN_01a89e68();
          FUN_02765308(uVar4,uVar3,0);
          uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cf0898);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar4,uVar3);
        }
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0();
        }
      }
    }
  }
  else if (param_1 == 0x6faf) {
    plVar7 = (long *)FUN_025e81d8();
  }
  else if (param_1 == 65000) {
    plVar7 = (long *)FUN_025e7fe4();
  }
  else {
    if (param_1 != 0xfde9) goto LAB_025e776c;
    plVar7 = (long *)FUN_025e6b04();
  }
  local_40 = plVar7;
  lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
  thunk_FUN_01a4b338();
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  local_34 = param_1;
  FUN_0219b9a4(lVar10,&local_34,local_40,*(undefined8 *)PTR_DAT_03cf0858);
  plVar7 = (long *)0x0;
  uVar11 = 8;
LAB_025e7938:
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
  }
  if ((uVar11 | 8) == 8) {
    return local_40;
  }
  return plVar7;
}


