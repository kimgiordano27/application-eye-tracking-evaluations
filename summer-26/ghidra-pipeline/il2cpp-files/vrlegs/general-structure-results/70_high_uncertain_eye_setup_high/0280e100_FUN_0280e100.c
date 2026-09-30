/*
FUNCTION_NAME: FUN_0280e100
ENTRY_POINT: 0280e100
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined2 FUN_0280e100(long *param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  long lVar16;
  undefined4 local_3c;
  byte local_38 [4];
  undefined2 local_34 [2];
  byte local_28 [4];
  byte local_24 [4];
  
  if ((DAT_04125324 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc4168);
    FUN_01ab69ac(PTR_DAT_03cbeb20);
    FUN_01ab69ac(PTR_DAT_03cfe1b0);
    FUN_01ab69ac(PTR_DAT_03cc02b0);
    FUN_01ab69ac(PTR_DAT_03cc03b8);
    FUN_01ab69ac(PTR_DAT_03cc41f8);
    FUN_01ab69ac(PTR_DAT_03cbedd0);
    FUN_01ab69ac(PTR_DAT_03cbffe8);
    DAT_04125324 = 1;
  }
  FUN_0280bd34(param_1);
  uVar2 = *(uint *)((long)param_1 + 0x24);
  if (uVar2 < 0xd) {
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x665U) == 0) {
      if (uVar2 != 8) {
        if (uVar2 == 0xc) {
          FUN_0280dad0(param_1);
          return 0;
        }
        goto LAB_0280e5e0;
      }
      uVar9 = FUN_0280c344(param_1,1);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
    }
    puVar5 = PTR_DAT_03cc02b0;
    lVar16 = param_1[0x10];
    plVar10 = (long *)PTR_DAT_03cbedd0;
    while( true ) {
      PTR_DAT_03cbedd0 = (undefined *)plVar10;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = *(uint *)((long)param_1 + 0x8c);
      if (*(uint *)(lVar16 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar3 = *(ushort *)(lVar16 + (long)(int)uVar2 * 2 + 0x20);
      uVar8 = (uint)uVar3;
      if (0x39 < uVar3) break;
      switch(uVar8) {
      case 9:
      case 0x20:
        *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
        break;
      case 10:
        *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
        *(uint *)(param_1 + 0x12) = uVar2 + 1;
        *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
        break;
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
switchD_0280e200_caseD_b:
        *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_026b63d8(uVar8,0);
        if ((uVar9 & 1) == 0) goto LAB_0280e598;
        break;
      case 0xd:
        FUN_0280da6c(param_1,0);
        break;
      case 0x22:
      case 0x27:
        FUN_0280af38(param_1,uVar8,0);
        uVar12 = FUN_0282f680(param_1 + 0x16,0);
        uVar7 = FUN_028058a0(param_1,uVar12);
        return uVar7;
      case 0x2c:
        FUN_0280d930(param_1);
        break;
      case 0x2d:
      case 0x2e:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        FUN_0280defc(param_1,0);
        plVar10 = (long *)(**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0))
        ;
        puVar5 = PTR_DAT_03cc4168;
        if ((plVar10 == (long *)0x0) || (*plVar10 != *(long *)PTR_DAT_03cc4168)) {
          uVar12 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
          if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc41f8);
          }
          uVar13 = FUN_0271c480(0);
          if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)PTR_DAT_03cc03b8);
          }
          bVar6 = FUN_0273b8d0(uVar12,uVar13,0);
        }
        else {
          puVar11 = (undefined8 *)thunk_FUN_01a89fbc();
          uVar12 = *puVar11;
          uVar13 = puVar11[1];
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar6 = FUN_02ce7704(uVar12,uVar13,0,0);
        }
        local_38[0] = bVar6 & 1;
        uVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeb20,local_38);
        FUN_02804374(param_1,10,uVar12,0);
        pbVar15 = local_28;
        uVar12 = *(undefined8 *)PTR_DAT_03cbffe8;
        local_28[0] = bVar6 & 1;
        goto LAB_0280e504;
      case 0x2f:
        FUN_0280c700(param_1,0);
        break;
      default:
        if (uVar8 != 0) goto switchD_0280e200_caseD_b;
        uVar9 = FUN_0280d810(param_1);
        if ((uVar9 & 1) != 0) {
          if ((DAT_041252ed & 1) == 0) {
            FUN_01ab69ac(PTR_DAT_03cbebc0);
            DAT_041252ed = 1;
          }
          param_1[3] = 0;
          *(undefined4 *)(param_1 + 2) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 3,0);
          return 0;
        }
      }
      lVar16 = param_1[0x10];
      plVar10 = (long *)PTR_DAT_03cbedd0;
    }
    if (uVar3 < 0x67) {
      if (uVar3 != 0x5d) {
        if (uVar3 == 0x66) goto OVRPlugin_InsightPassthroughStyle2__CopyTo;
        goto switchD_0280e200_caseD_b;
      }
      *(uint *)((long)param_1 + 0x8c) = uVar2 + 1;
      if ((*(int *)((long)param_1 + 0x24) - 5U < 2) || (*(int *)((long)param_1 + 0x24) == 8)) {
        FUN_02804374(param_1,0xe,0,1);
        return 0;
      }
      uVar8 = 0x5d;
    }
    else {
      if (uVar3 == 0x6e) {
        FUN_0280d860(param_1);
        return 0;
      }
      if (uVar3 != 0x74) goto switchD_0280e200_caseD_b;
OVRPlugin_InsightPassthroughStyle2__CopyTo:
      lVar16 = *plVar10;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *plVar10;
      }
      lVar1 = 0x10;
      if (0x66 < uVar8) {
        lVar1 = 8;
      }
      uVar9 = FUN_0280df64(param_1,*(undefined8 *)(*(long *)(lVar16 + 0xb8) + lVar1));
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_02818a5c(0x66 < uVar3,0);
        FUN_02804374(param_1,10,uVar12,1);
        pbVar15 = local_24;
        uVar12 = *(undefined8 *)PTR_DAT_03cbffe8;
        local_24[0] = 0x66 < uVar3;
LAB_0280e504:
        local_34[0] = 0;
        FUN_02241190(local_34,pbVar15,uVar12);
        return local_34[0];
      }
      lVar16 = param_1[0x10];
      iVar4 = *(int *)((long)param_1 + 0x8c);
      FUN_018748a8(lVar16);
      uVar8 = FUN_019a7458(lVar16,(long)iVar4);
    }
LAB_0280e598:
    uVar12 = FUN_0280d99c(param_1,uVar8);
  }
  else {
LAB_0280e5e0:
    thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
    FUN_01876390();
    uVar12 = FUN_0271c480(0);
    local_3c = *(undefined4 *)((long)param_1 + 0x24);
    uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cfe108);
    uVar13 = thunk_FUN_01a89a98(uVar13,&local_3c);
    uVar14 = thunk_FUN_01a6ca08(PTR_DAT_03cfe110);
    uVar12 = FUN_0282f8b0(uVar14,uVar12,uVar13,0);
    uVar12 = FUN_02803d2c(param_1,uVar12);
  }
  uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03cfe1b8);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar12,uVar13);
}


