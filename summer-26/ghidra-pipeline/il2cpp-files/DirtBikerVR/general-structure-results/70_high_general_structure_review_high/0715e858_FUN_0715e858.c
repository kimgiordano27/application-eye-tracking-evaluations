/*
FUNCTION_NAME: FUN_0715e858
ENTRY_POINT: 0715e858
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_10
*/


void FUN_0715e858(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  int iVar21;
  undefined1 auVar22 [16];
  long local_e8;
  long local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined2 local_94 [2];
  undefined1 local_90 [16];
  long local_80;
  long *plStack_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_084e4388;
  if ((DAT_08984240 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084e4388);
    FUN_03a8a718(PTR_DAT_084e4390);
    FUN_03a8a718(PTR_DAT_084e4398);
    FUN_03a8a718(PTR_DAT_084e43a0);
    FUN_03a8a718(PTR_DAT_084920f8);
    FUN_03a8a718(PTR_DAT_08492148);
    FUN_03a8a718(PTR_DAT_084870f8);
    FUN_03a8a718(PTR_DAT_08491f88);
    FUN_03a8a718(PTR_DAT_08490f58);
    FUN_03a8a718(PTR_DAT_084e43a8);
    FUN_03a8a718(PTR_DAT_084870f0);
    FUN_03a8a718(PTR_DAT_084e43b0);
    FUN_03a8a718(PTR_DAT_084e4380);
    FUN_03a8a718(PTR_DAT_084870e8);
    FUN_03a8a718(PTR_DAT_08488b28);
    FUN_03a8a718(PTR_DAT_084e4358);
    FUN_03a8a718(PTR_DAT_084e43b8);
    FUN_03a8a718(PTR_DAT_084e2cd0);
    FUN_03a8a718(PTR_DAT_084e43c0);
    FUN_03a8a718(PTR_DAT_084e3a90);
    FUN_03a8a718(PTR_DAT_084e43c8);
    FUN_03a8a718(PTR_DAT_084e43d0);
    FUN_03a8a718(PTR_DAT_084e43d8);
    FUN_03a8a718(PTR_DAT_084e4360);
    FUN_03a8a718(PTR_DAT_084e3ad0);
    FUN_03a8a718(PTR_DAT_084e05b8);
    FUN_03a8a718(PTR_DAT_084e3b78);
    FUN_03a8a718(PTR_DAT_084cdbb8);
    DAT_08984240 = 1;
  }
  local_80 = 0;
  plStack_78 = (long *)0x0;
  local_70 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_0719a6b8(lVar8,0);
  local_b0 = (ulong)local_b0._4_4_ << 0x20;
  FUN_070cd290(&local_b0,0x58,0x52,0x53,0x30,0);
  puVar4 = PTR_DAT_08488b28;
  puVar2 = PTR_DAT_084870e8;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x28) = (undefined4)local_b0;
    puVar3 = PTR_DAT_084870f0;
    FUN_0719a1b4(lVar8,*(undefined8 *)(param_1 + 0x10),0);
    local_94[0] = 0;
    FUN_05294928(local_94,1,*(undefined8 *)puVar4);
    *(undefined2 *)(lVar8 + 0x38) = local_94[0];
    uVar9 = FUN_065cd268(*(undefined8 *)(param_1 + 0x10),0);
    local_e8 = 0;
    if ((uVar9 & 1) == 0) {
      uVar19 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_08492148 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      local_e8 = Unity_Mathematics_uint3x3__op_Equality(uVar19,0);
    }
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_04de7d48(lVar10,*(undefined8 *)puVar3);
    lVar11 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_04de7d48(lVar11,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_084e4358;
    puVar4 = PTR_DAT_084920f8;
    puVar2 = PTR_DAT_084870f8;
    lVar15 = *(long *)(param_1 + 0x20);
    if (lVar15 != 0) {
      uVar20 = 0;
      iVar21 = 0;
      do {
        puVar5 = PTR_DAT_084e4398;
        lVar15 = *(long *)(lVar15 + 0x30);
        if (lVar15 == 0) break;
        if (*(int *)(lVar15 + 0x18) <= iVar21) {
          FUN_0719a488(lVar8,0);
          return;
        }
        FUN_04ee134c(&local_b0,lVar15,iVar21,*(undefined8 *)PTR_DAT_084e4380);
        uVar19 = local_a0;
        plVar6 = plStack_a8;
        lVar15 = local_b0;
        if (lVar11 == 0) break;
        iVar1 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          Newtonsoft_Json_Schema_ValidationEventArgs__get_Path
                    (*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        }
        if (plVar6 != (long *)0x0) {
          FUN_04ecd464(&local_b0,plVar6,*(undefined8 *)PTR_DAT_084e43a8);
          local_70 = local_a0;
          plStack_78 = plStack_a8;
          local_80 = local_b0;
          local_b0 = 0;
          plStack_a8 = &local_80;
          while( true ) {
            uVar9 = FUN_061e56a8(&local_80,*(undefined8 *)puVar5);
            uVar13 = local_70;
            if ((uVar9 & 1) == 0) break;
            uVar9 = FUN_065cd268(local_70,0);
            if ((uVar9 & 1) == 0) {
              lVar16 = *(long *)(lVar11 + 0x10);
              lVar17 = *(long *)puVar2;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              uVar7 = *(uint *)(lVar11 + 0x18);
              if (uVar7 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar7 + 1;
                puVar12 = (undefined8 *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
                *puVar12 = uVar13;
                thunk_FUN_03afed3c(puVar12,uVar13);
              }
              else {
                FUN_04de85b0(lVar11,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          FUN_061e56a4(&local_80,*(undefined8 *)PTR_DAT_084e4390);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        lVar16 = FUN_0715df80(lVar15,1);
        if (local_e8 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar16 = FUN_0715e528(local_e8,lVar16);
        }
        if (lVar16 == 0) break;
        lVar16 = FUN_065d1f84(lVar16,0);
        if (lVar16 == 0) break;
        uVar9 = FUN_065d2580(lVar16,0x2f,0);
        if ((uVar9 & 1) != 0) {
          uVar13 = FUN_0715e6c0(uVar9,lVar16);
          if (lVar10 == 0) break;
          uVar9 = FUN_04de894c(lVar10,uVar13,*(undefined8 *)PTR_DAT_08490f58);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(param_1 + 0x20) == 0) break;
            uVar9 = FUN_0715e6f8(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),iVar21);
            if ((uVar9 & 1) != 0) {
              auVar22 = FUN_0719a264(lVar8,uVar13,0);
              local_90 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (local_90,*(undefined8 *)PTR_DAT_084e43c0,0);
              local_90 = auVar22;
              FUN_0719a878(local_90,0,0);
              lVar18 = *(long *)puVar2;
              lVar17 = *(long *)(lVar10 + 0x10);
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar17 == 0) break;
              uVar7 = *(uint *)(lVar10 + 0x18);
              if (uVar7 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar7 + 1;
                puVar12 = (undefined8 *)(lVar17 + (long)(int)uVar7 * 8 + 0x20);
                *puVar12 = uVar13;
                thunk_FUN_03afed3c(puVar12,uVar13);
              }
              else {
                FUN_04de85b0(lVar10,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        local_c8 = lVar15;
        plStack_c0 = plVar6;
        local_b8 = uVar19;
        uVar7 = FUN_0715decc(&local_c8);
        uVar9 = thunk_FUN_065cbffc(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_084e4360,0
                                  );
        if ((uVar9 & 1) == 0) {
          if ((3 < uVar7) && ((uVar20 & 3) != 0)) {
            uVar20 = (uVar20 & 0xfffffffc) + 4;
          }
        }
        else if (uVar7 < 5) {
          uVar7 = 4;
        }
        iVar1 = (int)uVar19;
        if (iVar1 < 5) {
          if (iVar1 < 3) {
            if (iVar1 == 1) {
              auVar22 = FUN_0719a264(lVar8,lVar16,0);
              local_90 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (local_90,*(undefined8 *)PTR_DAT_084e05b8,0);
              local_90 = auVar22;
              auVar22 = FUN_0719a878(local_90,uVar20,0);
              lVar15 = *(long *)puVar4;
              local_90 = auVar22;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar15 = *(long *)puVar4;
              }
              uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 4);
            }
            else {
              if (iVar1 != 2) goto LAB_0715f268;
              auVar22 = FUN_0719a264(lVar8,lVar16,0);
              local_90 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (local_90,*(undefined8 *)PTR_DAT_084cdbb8,0);
              local_90 = auVar22;
              auVar22 = FUN_0719a878(local_90,uVar20,0);
              lVar15 = *(long *)puVar4;
              local_90 = auVar22;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar15 = *(long *)puVar4;
              }
              uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0xc);
            }
FUN_0715f200:
            auVar22 = FUN_0719a7fc(local_90,uVar14,0);
            goto LAB_0715f254;
          }
          if (iVar1 == 3) {
            auVar22 = FUN_0719a264(lVar8,lVar16,0);
            local_90 = auVar22;
            auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (local_90,*(undefined8 *)PTR_DAT_084e2cd0,0);
            local_90 = auVar22;
            auVar22 = FUN_0719aa70(0xbf800000,0x3f800000,local_90,0);
            local_90 = auVar22;
            auVar22 = FUN_0719a878(local_90,uVar20,0);
            lVar15 = *(long *)puVar4;
            local_90 = auVar22;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar15 = *(long *)puVar4;
            }
            uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x2c);
            goto FUN_0715f200;
          }
          if (iVar1 == 4) {
            auVar22 = FUN_0719a264(lVar8,lVar16,0);
            local_90 = auVar22;
            auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (local_90,*(undefined8 *)PTR_DAT_084e3ad0,0);
            local_90 = auVar22;
            auVar22 = FUN_0719a878(local_90,uVar20,0);
            lVar15 = *(long *)puVar4;
            local_90 = auVar22;
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
              lVar15 = *(long *)puVar4;
            }
            auVar22 = FUN_0719a7fc(local_90,*(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x34),0);
            local_90 = auVar22;
            FUN_0719ace4(local_90,lVar11,0);
            uVar19 = FUN_065c0764(lVar16,*(undefined8 *)PTR_DAT_084e43d8,0);
            auVar22 = FUN_0719a264(lVar8,uVar19,0);
            puVar5 = PTR_DAT_084e2cd0;
            local_90 = auVar22;
            auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (local_90,*(undefined8 *)PTR_DAT_084e2cd0,0);
            local_90 = auVar22;
            FUN_0719aa70(0xbf800000,0x3f800000,local_90,0);
            uVar19 = FUN_065c0764(lVar16,*(undefined8 *)PTR_DAT_084e43b8,0);
            auVar22 = FUN_0719a264(lVar8,uVar19,0);
            local_90 = auVar22;
            auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (local_90,*(undefined8 *)puVar5,0);
            local_90 = auVar22;
            FUN_0719aa70(0xbf800000,0x3f800000,local_90,0);
          }
        }
        else {
          if (iVar1 < 8) {
            if (iVar1 == 5) {
              auVar22 = FUN_0719a264(lVar8,lVar16,0);
              local_90 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (local_90,*(undefined8 *)PTR_DAT_084e3b78,0);
              local_90 = auVar22;
              auVar22 = FUN_0719a878(local_90,uVar20,0);
              lVar15 = *(long *)puVar4;
              local_90 = auVar22;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar15 = *(long *)puVar4;
              }
              uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x38);
            }
            else {
              if (iVar1 != 6) goto LAB_0715f268;
              auVar22 = FUN_0719a264(lVar8,lVar16,0);
              local_90 = auVar22;
              auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (local_90,*(undefined8 *)PTR_DAT_084e3a90,0);
              local_90 = auVar22;
              auVar22 = FUN_0719a878(local_90,uVar20,0);
              lVar15 = *(long *)puVar4;
              local_90 = auVar22;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
                lVar15 = *(long *)puVar4;
              }
              uVar14 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x3c);
            }
            goto FUN_0715f200;
          }
          if (iVar1 == 8) {
            auVar22 = FUN_0719a264(lVar8,lVar16,0);
            puVar12 = (undefined8 *)PTR_DAT_084e43d0;
          }
          else {
            if (iVar1 != 9) goto LAB_0715f268;
            auVar22 = FUN_0719a264(lVar8,lVar16,0);
            puVar12 = (undefined8 *)PTR_DAT_084e43c8;
          }
          local_90 = auVar22;
          auVar22 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (local_90,*puVar12,0);
          local_90 = auVar22;
          auVar22 = FUN_0719a878(local_90,uVar20,0);
LAB_0715f254:
          local_90 = auVar22;
          FUN_0719ace4(local_90,lVar11,0);
        }
LAB_0715f268:
        uVar20 = uVar20 + uVar7;
        lVar15 = *(long *)(param_1 + 0x20);
        iVar21 = iVar21 + 1;
      } while (lVar15 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


