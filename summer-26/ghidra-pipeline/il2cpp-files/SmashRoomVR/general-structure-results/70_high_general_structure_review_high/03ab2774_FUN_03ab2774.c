/*
FUNCTION_NAME: FUN_03ab2774
ENTRY_POINT: 03ab2774
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


uint FUN_03ab2774(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_238 [24];
  undefined8 local_220 [2];
  float local_210;
  undefined1 auStack_200 [32];
  undefined8 local_1e0 [4];
  undefined8 local_1c0;
  float fStack_1b4;
  float local_1b0;
  undefined8 local_1a0 [2];
  undefined4 local_190;
  undefined8 local_180 [2];
  float local_170;
  undefined8 local_160 [4];
  undefined8 local_140 [4];
  undefined8 local_120 [4];
  undefined8 local_100 [4];
  undefined8 local_e0 [4];
  undefined8 local_c0 [4];
  undefined8 local_a0;
  float fStack_94;
  undefined4 local_90;
  
  puVar1 = PTR_DAT_03db4bb0;
  if ((DAT_03ffd4c7 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03dafa68);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db4bb8);
    thunk_FUN_01ad9084(PTR_DAT_03db4bb0);
    thunk_FUN_01ad9084(PTR_DAT_03db4bc0);
    thunk_FUN_01ad9084(PTR_DAT_03db4bc8);
    thunk_FUN_01ad9084(PTR_DAT_03db4bd0);
    thunk_FUN_01ad9084(PTR_DAT_03db4bd8);
    DAT_03ffd4c7 = 1;
  }
  puVar2 = PTR_DAT_03db4bc0;
  uVar5 = FUN_02171a04(param_5 + 8,param_6[1],*(undefined8 *)puVar1);
  if ((uVar5 & 1) == 0) {
    fVar14 = (float)FUN_03a9ab34(param_5);
    fVar12 = (float)FUN_03a9ab34(param_6);
    if (fVar14 == fVar12) {
      fVar14 = (float)FUN_03a9ab84(param_5);
      fVar12 = (float)FUN_03a9ab84(param_6);
      if (fVar14 != fVar12) goto LAB_03ab2be8;
      iVar3 = FUN_03a9b534(param_5);
      iVar4 = FUN_03a9b534(param_6);
      if (iVar3 != iVar4) goto LAB_03ab2be8;
      iVar3 = FUN_03a9b3f4(param_5);
      iVar4 = FUN_03a9b3f4(param_6);
      if (iVar3 != iVar4) goto LAB_03ab2be8;
      iVar3 = FUN_03a9b4e4(param_5);
      iVar4 = FUN_03a9b4e4(param_6);
      if (iVar3 != iVar4) goto LAB_03ab2be8;
      uVar6 = FUN_03a9ad14(param_5);
      uVar7 = FUN_03a9ad14(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9ac24(param_5);
      uVar7 = FUN_03a9ac24(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9acc4(param_5);
      uVar7 = FUN_03a9acc4(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9ac74(param_5);
      uVar7 = FUN_03a9ac74(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9b174(param_5);
      uVar7 = FUN_03a9b174(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9b124(param_5);
      uVar7 = FUN_03a9b124(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9af94(param_5);
      uVar7 = FUN_03a9af94(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9aea4(param_5);
      uVar7 = FUN_03a9aea4(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9af44(param_5);
      uVar7 = FUN_03a9af44(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9aef4(param_5);
      uVar7 = FUN_03a9aef4(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9ae54(param_5);
      uVar7 = FUN_03a9ae54(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9ad64(param_5);
      uVar7 = FUN_03a9ad64(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9ae04(param_5);
      uVar7 = FUN_03a9ae04(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9adb4(param_5);
      uVar7 = FUN_03a9adb4(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      iVar3 = FUN_03a9b1c4(param_5);
      iVar4 = FUN_03a9b1c4(param_6);
      if (iVar3 != iVar4) goto LAB_03ab2be8;
      iVar3 = FUN_03a9b444(param_5);
      iVar4 = FUN_03a9b444(param_6);
      if (iVar3 != iVar4) goto LAB_03ab2be8;
      iVar3 = FUN_03a9b494(param_5);
      iVar4 = FUN_03a9b494(param_6);
      if (iVar3 != iVar4) goto LAB_03ab2be8;
      iVar3 = FUN_03a9b264(param_5);
      iVar4 = FUN_03a9b264(param_6);
      if (iVar3 != iVar4) goto LAB_03ab2be8;
      uVar6 = FUN_03a9abd4(param_5);
      uVar7 = FUN_03a9abd4(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9b304(param_5);
      uVar7 = FUN_03a9b304(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9b2b4(param_5);
      uVar7 = FUN_03a9b2b4(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_03ab2be8;
      uVar6 = FUN_03a9b3a4(param_5);
      uVar7 = FUN_03a9b3a4(param_6);
      uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
      uVar8 = 0x28;
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_03a9b354(param_5);
        uVar7 = FUN_03a9b354(param_6);
        uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
        if ((uVar5 & 1) == 0) {
          uVar8 = 0x20;
        }
      }
    }
    else {
LAB_03ab2be8:
      uVar8 = 0x28;
    }
    fVar14 = (float)FUN_03a9b0d4(param_5);
    fVar12 = (float)FUN_03a9b0d4(param_6);
    if (fVar14 == fVar12) {
      fVar14 = (float)FUN_03a9afe4(param_5);
      fVar12 = (float)FUN_03a9afe4(param_6);
      if (fVar14 != fVar12) goto LAB_03ab2c64;
      fVar14 = (float)FUN_03a9b084(param_5);
      fVar12 = (float)FUN_03a9b084(param_6);
      uVar9 = 0x928;
      if (fVar14 == fVar12) {
        fVar14 = (float)FUN_03a9b034(param_5);
        fVar12 = (float)FUN_03a9b034(param_6);
        uVar9 = uVar8;
        if (fVar14 != fVar12) {
          uVar9 = 0x928;
        }
      }
    }
    else {
LAB_03ab2c64:
      uVar9 = 0x928;
    }
    iVar3 = FUN_03a9b584(param_5);
    iVar4 = FUN_03a9b584(param_6);
    if (iVar3 != iVar4) {
      uVar9 = uVar9 | 0x808;
    }
  }
  else {
    uVar9 = 0x20;
  }
  puVar1 = PTR_DAT_03db4bd0;
  uVar5 = FUN_02171544(param_5,*param_6,*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    fVar10 = (float)FUN_03a9dfa8(param_5);
    fVar12 = param_2;
    fVar13 = param_3;
    fVar15 = param_4;
    fVar11 = (float)FUN_03a9dfa8(param_6);
    fVar14 = DAT_00b55084;
    param_2 = (param_2 - fVar12) * (param_2 - fVar12);
    param_3 = (param_3 - fVar13) * (param_3 - fVar13);
    param_4 = (param_4 - fVar15) * (param_4 - fVar15);
    uVar8 = uVar9 | 0x2000;
    if (param_4 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + param_2 < DAT_00b55084) {
      uVar8 = uVar9;
    }
    if ((uVar8 & 0x8080808) == 0) {
      uVar6 = FUN_03a9e4dc(param_5);
      uVar7 = FUN_03a9e4dc(param_6);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_0391f968(uVar6,uVar7,0);
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_03a9a700(param_5);
        uVar7 = FUN_03a9a700(param_6);
        uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
        if ((uVar5 & 1) == 0) {
          auVar16 = FUN_03a9e52c(param_5);
          auVar17 = FUN_03a9e52c(param_6);
          uVar5 = FUN_03ab992c(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
          if ((uVar5 & 1) == 0) {
            iVar3 = FUN_03a9e580(param_5);
            iVar4 = FUN_03a9e580(param_6);
            if (iVar3 == iVar4) {
              fVar12 = (float)FUN_03a9e8a4(param_5);
              fVar13 = (float)FUN_03a9e8a4(param_6);
              if (fVar12 == fVar13) {
                uVar6 = FUN_03a9e064(param_5);
                uVar7 = FUN_03a9e064(param_6);
                uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
                if ((uVar5 & 1) == 0) {
                  uVar6 = FUN_03a9e9e4(param_5);
                  uVar7 = FUN_03a9e9e4(param_6);
                  uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
                  if ((uVar5 & 1) == 0) {
                    uVar6 = FUN_03a9e620(param_5);
                    uVar7 = FUN_03a9e620(param_6);
                    uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
                    if ((uVar5 & 1) == 0) goto LAB_03ab2e74;
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x808;
    }
LAB_03ab2e74:
    if ((uVar8 >> 0xb & 1) == 0) {
      iVar3 = FUN_03a9e944(param_5);
      iVar4 = FUN_03a9e944(param_6);
      if (iVar3 == iVar4) {
        FUN_03a9e210(&local_1c0,param_5);
        FUN_03a9e210(&local_a0,param_6);
        local_c0[0] = local_1c0;
        local_e0[0] = local_a0;
        uVar6 = local_a0;
        param_2 = fStack_1b4;
        param_4 = fStack_94;
        uVar5 = FUN_03ae9bf4(local_c0,local_e0,0);
        param_3 = (float)uVar6;
        if ((uVar5 & 1) == 0) {
          iVar3 = FUN_03a9e800(param_5);
          iVar4 = FUN_03a9e800(param_6);
          if (iVar3 == iVar4) {
            fVar10 = (float)FUN_03a9e850(param_5);
            fVar12 = param_2;
            fVar13 = param_3;
            fVar15 = param_4;
            fVar11 = (float)FUN_03a9e850(param_6);
            fVar12 = param_2 - fVar12;
            param_4 = param_4 - fVar15;
            param_3 = (param_3 - fVar13) * (param_3 - fVar13);
            param_2 = param_4 * param_4;
            if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14
               ) goto LAB_03ab2f54;
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_03ab2f54:
    iVar3 = FUN_03a9e994(param_5);
    iVar4 = FUN_03a9e994(param_6);
    uVar9 = uVar8;
    if (iVar3 != iVar4) {
      uVar9 = uVar8 | 8;
    }
  }
  puVar2 = PTR_DAT_03db4bc8;
  uVar5 = FUN_02172524(param_5 + 0x18,param_6[3],*(undefined8 *)puVar1);
  uVar8 = uVar9;
  if ((uVar5 & 1) == 0) {
    auVar16 = FUN_03a9e16c(param_5);
    auVar17 = FUN_03a9e16c(param_6);
    uVar5 = FUN_03ad2d3c(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
    if ((uVar5 & 1) == 0) {
      FUN_03a9e104(&local_1c0,param_5);
      FUN_03a9e104(&local_a0,param_6);
      local_100[0] = local_1c0;
      local_120[0] = local_a0;
      uVar6 = local_a0;
      uVar5 = FUN_03ad29ec(local_100,local_120,0);
      param_2 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
        FUN_03a9e420(&local_1c0,param_5);
        FUN_03a9e420(&local_a0,param_6);
        local_140[0] = local_1c0;
        local_160[0] = local_a0;
        uVar6 = local_a0;
        uVar5 = FUN_03ad5c88(local_140,local_160,0);
        param_2 = (float)uVar6;
        if ((uVar5 & 1) == 0) {
          FUN_03a9e278(&local_1c0,param_5);
          FUN_03a9e278(&local_a0,param_6);
          local_180[0] = local_1c0;
          local_170 = local_1b0;
          local_1a0[0] = local_a0;
          local_190 = local_90;
          uVar5 = FUN_03ad5924(local_180,local_1a0,0);
          param_2 = (float)local_a0;
          uVar8 = uVar9 | 0x200;
          if ((uVar5 & 1) == 0) {
            uVar8 = uVar9;
          }
          goto LAB_03ab3060;
        }
      }
    }
    uVar8 = uVar9 | 0x200;
  }
LAB_03ab3060:
  puVar1 = PTR_DAT_03db4bb8;
  uVar5 = FUN_021729dc(param_5 + 0x20,param_6[4],*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_03dafa68 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_03ab80d8(param_5,param_6,0);
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar8 | 0x8000;
    }
  }
  puVar2 = PTR_DAT_03db4bd8;
  uVar5 = FUN_02172e9c(param_5 + 0x28,param_6[5],*(undefined8 *)puVar1);
  if ((uVar5 & 1) != 0) goto LAB_03ab3454;
  if ((uVar8 >> 0xd & 1) == 0) {
    fVar10 = (float)FUN_03a9dafc(param_5);
    fVar12 = param_2;
    fVar13 = param_3;
    fVar15 = param_4;
    fVar11 = (float)FUN_03a9dafc(param_6);
    fVar14 = DAT_00b55084;
    fVar12 = param_2 - fVar12;
    param_4 = param_4 - fVar15;
    param_3 = (param_3 - fVar13) * (param_3 - fVar13);
    param_2 = param_4 * param_4;
    if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < DAT_00b55084)
    {
      fVar10 = (float)FUN_03a9dd18(param_5);
      fVar12 = param_2;
      fVar13 = param_3;
      fVar15 = param_4;
      fVar11 = (float)FUN_03a9dd18(param_6);
      fVar12 = param_2 - fVar12;
      param_4 = param_4 - fVar15;
      param_3 = (param_3 - fVar13) * (param_3 - fVar13);
      param_2 = param_4 * param_4;
      if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14) {
        fVar10 = (float)FUN_03a9de0c(param_5);
        fVar12 = param_2;
        fVar13 = param_3;
        fVar15 = param_4;
        fVar11 = (float)FUN_03a9de0c(param_6);
        fVar12 = param_2 - fVar12;
        param_4 = param_4 - fVar15;
        param_3 = (param_3 - fVar13) * (param_3 - fVar13);
        param_2 = param_4 * param_4;
        if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14) {
          fVar10 = (float)FUN_03a9de60(param_5);
          fVar12 = param_2;
          fVar13 = param_3;
          fVar15 = param_4;
          fVar11 = (float)FUN_03a9de60(param_6);
          fVar12 = param_2 - fVar12;
          param_4 = param_4 - fVar15;
          param_3 = (param_3 - fVar13) * (param_3 - fVar13);
          param_2 = param_4 * param_4;
          if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14)
          {
            fVar10 = (float)FUN_03a9deb4(param_5);
            fVar12 = param_2;
            fVar13 = param_3;
            fVar15 = param_4;
            fVar11 = (float)FUN_03a9deb4(param_6);
            fVar12 = param_2 - fVar12;
            param_4 = param_4 - fVar15;
            param_3 = (param_3 - fVar13) * (param_3 - fVar13);
            param_2 = param_4 * param_4;
            if (param_2 + param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12 < fVar14
               ) goto LAB_03ab327c;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x2000;
  }
LAB_03ab327c:
  if ((uVar8 >> 0xb & 1) == 0) {
    FUN_03a9db50(&local_1c0,param_5);
    FUN_03a9db50(auStack_200,param_6);
    local_1e0[0] = local_1c0;
    param_2 = local_1b0;
    uVar5 = FUN_03ab7248(local_1e0,auStack_200,0);
    if ((uVar5 & 1) == 0) {
      auVar16 = FUN_03a9dbb0(param_5);
      auVar17 = FUN_03a9dbb0(param_6);
      uVar5 = FUN_039bb7e0(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                           auVar17._8_8_ & 0xffffffff,0);
      if ((uVar5 & 1) == 0) {
        auVar16 = FUN_03a9dc08(param_5);
        auVar17 = FUN_03a9dc08(param_6);
        uVar5 = FUN_039bb7e0(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                             auVar17._8_8_ & 0xffffffff,0);
        if ((uVar5 & 1) == 0) {
          uVar6 = FUN_03a9dc60(param_5);
          uVar7 = FUN_03a9dc60(param_6);
          uVar5 = FUN_039bbef8(uVar6,uVar7,0);
          if ((uVar5 & 1) == 0) {
            FUN_03a9dcb0(&local_1c0,param_5);
            FUN_03a9dcb0(auStack_238,param_6);
            local_220[0] = local_1c0;
            local_210 = local_1b0;
            uVar5 = FUN_039bc1d4(local_220,auStack_238,0);
            if ((uVar5 & 1) == 0) goto LAB_03ab3390;
          }
        }
      }
    }
    uVar8 = uVar8 | 0x800;
  }
LAB_03ab3390:
  uVar6 = FUN_03a9dd6c(param_5);
  uVar7 = FUN_03a9dd6c(param_6);
  uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_03a9ddbc(param_5);
    uVar7 = FUN_03a9ddbc(param_6);
    uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
    if ((uVar5 & 1) != 0) goto LAB_03ab3408;
    uVar6 = FUN_03a9df08(param_5);
    uVar7 = FUN_03a9df08(param_6);
    uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
    if ((uVar5 & 1) != 0) goto LAB_03ab3408;
    uVar6 = FUN_03a9df58(param_5);
    uVar7 = FUN_03a9df58(param_6);
    uVar5 = FUN_03ad25e0(uVar6,uVar7,0);
    uVar9 = uVar8 | 0x880;
    if ((uVar5 & 1) == 0) {
      uVar9 = uVar8;
    }
  }
  else {
LAB_03ab3408:
    uVar9 = uVar8 | 0x880;
  }
  fVar14 = (float)FUN_03a9e0b4(param_5);
  fVar12 = (float)FUN_03a9e0b4(param_6);
  uVar8 = uVar9 | 0x1000;
  if (fVar14 == fVar12) {
    uVar8 = uVar9;
  }
  iVar3 = FUN_03a9b214(param_5);
  iVar4 = FUN_03a9b214(param_6);
  if (iVar3 != iVar4) {
    uVar8 = uVar8 | 0x48;
  }
LAB_03ab3454:
  uVar5 = FUN_02172064(param_5 + 0x10,param_6[2],*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    iVar3 = FUN_03a9e1c0(param_5);
    iVar4 = FUN_03a9e1c0(param_6);
    if (iVar3 == iVar4) {
      fVar14 = (float)FUN_03a9e760(param_5);
      fVar12 = (float)FUN_03a9e760(param_6);
      uVar9 = uVar8;
      if (fVar14 != fVar12) {
        uVar9 = uVar8 | 0x808;
      }
    }
    else {
      uVar9 = uVar8 | 0x808;
    }
    fVar15 = (float)FUN_03a9e488(param_5);
    fVar14 = param_2;
    fVar12 = param_3;
    fVar13 = param_4;
    fVar10 = (float)FUN_03a9e488(param_6);
    uVar8 = uVar9 | 0x2000;
    if ((param_4 - fVar13) * (param_4 - fVar13) +
        (param_3 - fVar12) * (param_3 - fVar12) +
        (fVar15 - fVar10) * (fVar15 - fVar10) + (param_2 - fVar14) * (param_2 - fVar14) <
        DAT_00b55084) {
      uVar8 = uVar9;
    }
    if ((uVar8 >> 0xb & 1) == 0) {
      iVar3 = FUN_03a9e5d0(param_5);
      iVar4 = FUN_03a9e5d0(param_6);
      if (iVar3 == iVar4) {
        iVar3 = FUN_03a9e670(param_5);
        iVar4 = FUN_03a9e670(param_6);
        if (iVar3 == iVar4) {
          iVar3 = FUN_03a9e6c0(param_5);
          iVar4 = FUN_03a9e6c0(param_6);
          if (iVar3 == iVar4) {
            iVar3 = FUN_03a9e710(param_5);
            iVar4 = FUN_03a9e710(param_6);
            if (iVar3 == iVar4) {
              iVar3 = FUN_03a9e7b0(param_5);
              iVar4 = FUN_03a9e7b0(param_6);
              if (iVar3 == iVar4) {
                iVar3 = FUN_03a9e8f4(param_5);
                iVar4 = FUN_03a9e8f4(param_6);
                if (iVar3 == iVar4) {
                  return uVar8;
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
  }
  return uVar8;
}


