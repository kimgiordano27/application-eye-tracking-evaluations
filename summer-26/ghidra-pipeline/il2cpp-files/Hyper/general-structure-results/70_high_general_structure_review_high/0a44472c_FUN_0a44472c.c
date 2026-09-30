/*
FUNCTION_NAME: FUN_0a44472c
ENTRY_POINT: 0a44472c
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


uint FUN_0a44472c(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
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
  undefined1 auStack_264 [20];
  undefined8 local_250 [2];
  float local_240;
  undefined1 auStack_234 [20];
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
  undefined8 local_9c [2];
  undefined4 local_8c;
  
  puVar1 = PTR_DAT_0acf1e40;
  if ((DAT_0b343618 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ace6420);
    FUN_04947ee4(PTR_DAT_0ac09788);
    FUN_04947ee4(PTR_DAT_0acf1e48);
    FUN_04947ee4(PTR_DAT_0acf1e40);
    FUN_04947ee4(PTR_DAT_0acf1e50);
    FUN_04947ee4(PTR_DAT_0acf1e58);
    FUN_04947ee4(PTR_DAT_0acf1e60);
    FUN_04947ee4(PTR_DAT_0acf1e68);
    DAT_0b343618 = 1;
  }
  puVar2 = PTR_DAT_0acf1e50;
  uVar5 = FUN_07648424(param_5 + 8,param_6[1],*(undefined8 *)puVar1);
  if ((uVar5 & 1) == 0) {
    iVar3 = FUN_0a430df8(param_5);
    iVar4 = FUN_0a430df8(param_6);
    if (iVar3 == iVar4) {
      fVar13 = (float)FUN_0a430ee8(param_5);
      fVar12 = (float)FUN_0a430ee8(param_6);
      if (fVar13 != fVar12) goto LAB_0a444bbc;
      fVar13 = (float)FUN_0a430f38(param_5);
      fVar12 = (float)FUN_0a430f38(param_6);
      if (fVar13 != fVar12) goto LAB_0a444bbc;
      iVar3 = WebSocketSharp_Net_HttpListenerResponse__AppendHeader(param_5);
      iVar4 = WebSocketSharp_Net_HttpListenerResponse__AppendHeader(param_6);
      if (iVar3 != iVar4) goto LAB_0a444bbc;
      iVar3 = FUN_0a430e98(param_5);
      iVar4 = FUN_0a430e98(param_6);
      if (iVar3 != iVar4) goto LAB_0a444bbc;
      iVar3 = FUN_0a431028(param_5);
      iVar4 = FUN_0a431028(param_6);
      if (iVar3 != iVar4) goto LAB_0a444bbc;
      uVar6 = FUN_0a430cec(param_5);
      uVar7 = FUN_0a430cec(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a431078(param_5);
      uVar7 = FUN_0a431078(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a4315c8(param_5);
      uVar7 = FUN_0a4315c8(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a43178c(param_5);
      uVar7 = FUN_0a43178c(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = WebSocketSharp_Net_HttpListenerResponse__Close(param_5);
      uVar7 = WebSocketSharp_Net_HttpListenerResponse__Close(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a4320a0(param_5);
      uVar7 = FUN_0a4320a0(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a431438(param_5);
      uVar7 = FUN_0a431438(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a431488(param_5);
      uVar7 = FUN_0a431488(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = WebSocketSharp_Net_HttpListenerResponse__System_IDisposable_Dispose(param_5);
      uVar7 = WebSocketSharp_Net_HttpListenerResponse__System_IDisposable_Dispose(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a431528(param_5);
      uVar7 = FUN_0a431528(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a431118(param_5);
      uVar7 = FUN_0a431118(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a431168(param_5);
      uVar7 = FUN_0a431168(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a4311b8(param_5);
      uVar7 = FUN_0a4311b8(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a431208(param_5);
      uVar7 = FUN_0a431208(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      iVar3 = FUN_0a431578(param_5);
      iVar4 = FUN_0a431578(param_6);
      if (iVar3 != iVar4) goto LAB_0a444bbc;
      iVar3 = FUN_0a430610(param_5);
      iVar4 = FUN_0a430610(param_6);
      if (iVar3 != iVar4) goto LAB_0a444bbc;
      iVar3 = FUN_0a430660(param_5);
      iVar4 = FUN_0a430660(param_6);
      if (iVar3 != iVar4) goto LAB_0a444bbc;
      iVar3 = FUN_0a4306b0(param_5);
      iVar4 = FUN_0a4306b0(param_6);
      if (iVar3 != iVar4) goto LAB_0a444bbc;
      uVar6 = FUN_0a430e48(param_5);
      uVar7 = FUN_0a430e48(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a431258(param_5);
      uVar7 = FUN_0a431258(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a4312a8(param_5);
      uVar7 = FUN_0a4312a8(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a444bbc;
      uVar6 = FUN_0a4312f8(param_5);
      uVar7 = FUN_0a4312f8(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      uVar8 = 0x28;
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_0a431348(param_5);
        uVar7 = FUN_0a431348(param_6);
        uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
        if ((uVar5 & 1) == 0) {
          uVar8 = 0x20;
        }
      }
    }
    else {
LAB_0a444bbc:
      uVar8 = 0x28;
    }
    fVar13 = (float)FUN_0a430a10(param_5);
    fVar12 = (float)FUN_0a430a10(param_6);
    if (fVar13 == fVar12) {
      fVar13 = (float)FUN_0a430ab4(param_5);
      fVar12 = (float)FUN_0a430ab4(param_6);
      if (fVar13 == fVar12) {
        fVar13 = (float)FUN_0a430b58(param_5);
        fVar12 = (float)FUN_0a430b58(param_6);
        uVar9 = 0x928;
        if (fVar13 == fVar12) {
          fVar13 = (float)FUN_0a430c9c(param_5);
          fVar12 = (float)FUN_0a430c9c(param_6);
          uVar9 = uVar8;
          if (fVar13 != fVar12) {
            uVar9 = 0x928;
          }
        }
        goto LAB_0a444c44;
      }
    }
    uVar9 = 0x928;
  }
  else {
    uVar9 = 0x20;
  }
LAB_0a444c44:
  puVar1 = PTR_DAT_0acf1e60;
  uVar5 = FUN_07647f28(param_5,*param_6,*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    fVar10 = (float)FUN_0a430d3c(param_5);
    fVar12 = param_4;
    fVar15 = param_2;
    fVar14 = param_3;
    fVar11 = (float)FUN_0a430d3c(param_6);
    fVar13 = DAT_01df45a8;
    fVar15 = param_2 - fVar15;
    param_3 = param_3 - fVar14;
    param_4 = param_4 - fVar12;
    param_2 = param_4 * param_4;
    uVar8 = uVar9 | 0x2000;
    if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 <
        DAT_01df45a8) {
      uVar8 = uVar9;
    }
    if ((uVar8 & 0x8080808) == 0) {
      uVar6 = WebSocketSharp_Net_HttpListenerResponse_<findCookie>d__62__System_Collections_IEnumerable_GetEnumerator
                        (param_5);
      uVar7 = WebSocketSharp_Net_HttpListenerResponse_<findCookie>d__62__System_Collections_IEnumerable_GetEnumerator
                        (param_6);
      if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac09788);
      }
      uVar5 = FUN_0a17b398(uVar6,uVar7,0);
      if ((uVar5 & 1) == 0) {
        iVar3 = FUN_0a431ebc(param_5);
        iVar4 = FUN_0a431ebc(param_6);
        if (iVar3 == iVar4) {
          uVar6 = FUN_0a42d4d8(param_5);
          uVar7 = FUN_0a42d4d8(param_6);
          uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
          if ((uVar5 & 1) == 0) {
            auVar16 = FUN_0a431ae0(param_5);
            auVar17 = FUN_0a431ae0(param_6);
            uVar5 = FUN_0a2ab1dc(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
            if ((uVar5 & 1) == 0) {
              iVar3 = FUN_0a432050(param_5);
              iVar4 = FUN_0a432050(param_6);
              if (iVar3 == iVar4) {
                iVar3 = FUN_0a431b34(param_5);
                iVar4 = FUN_0a431b34(param_6);
                if (iVar3 == iVar4) {
                  fVar12 = (float)FUN_0a431f60(param_5);
                  fVar15 = (float)FUN_0a431f60(param_6);
                  if (fVar12 == fVar15) {
                    uVar6 = FUN_0a4310c8(param_5);
                    uVar7 = FUN_0a4310c8(param_6);
                    uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
                    if ((uVar5 & 1) == 0) {
                      uVar6 = FUN_0a4320f0(param_5);
                      uVar7 = FUN_0a4320f0(param_6);
                      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
                      if ((uVar5 & 1) == 0) {
                        iVar3 = FUN_0a431a40(param_5);
                        iVar4 = FUN_0a431a40(param_6);
                        if (iVar3 == iVar4) {
                          uVar6 = FUN_0a431bd4(param_5);
                          uVar7 = FUN_0a431bd4(param_6);
                          uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
                          if ((uVar5 & 1) == 0) goto LAB_0a444e80;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = uVar8 | 0x808;
    }
LAB_0a444e80:
    if ((uVar8 >> 0xb & 1) == 0) {
      FUN_0a431724(&local_1c0,param_5);
      FUN_0a431724(local_9c,param_6);
      local_c0[0] = local_1c0;
      local_e0[0] = local_9c[0];
      uVar6 = local_9c[0];
      param_2 = fStack_1b4;
      uVar5 = FUN_0a30cb18(local_c0,local_e0,0);
      param_3 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
        iVar3 = FUN_0a431e04(param_5);
        iVar4 = FUN_0a431e04(param_6);
        if (iVar3 == iVar4) {
          fVar10 = (float)FUN_0a431f0c(param_5);
          fVar12 = param_4;
          fVar15 = param_2;
          fVar14 = param_3;
          fVar11 = (float)FUN_0a431f0c(param_6);
          fVar15 = param_2 - fVar15;
          param_3 = param_3 - fVar14;
          param_4 = param_4 - fVar12;
          param_2 = param_4 * param_4;
          if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15
              < fVar13) goto LAB_0a444f44;
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_0a444f44:
    iVar3 = FUN_0a432000(param_5);
    iVar4 = FUN_0a432000(param_6);
    uVar9 = uVar8;
    if (iVar3 != iVar4) {
      uVar9 = uVar8 | 0x100800;
    }
  }
  puVar2 = PTR_DAT_0acf1e58;
  uVar5 = FUN_07648e1c(param_5 + 0x18,param_6[3],*(undefined8 *)puVar1);
  uVar8 = uVar9;
  if ((uVar5 & 1) == 0) {
    auVar16 = FUN_0a431680(param_5);
    auVar17 = FUN_0a431680(param_6);
    uVar5 = FUN_0a2e714c(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
    if ((uVar5 & 1) == 0) {
      FUN_0a431618(&local_1c0,param_5);
      FUN_0a431618(local_9c,param_6);
      local_100[0] = local_1c0;
      local_120[0] = local_9c[0];
      uVar6 = local_9c[0];
      uVar5 = FUN_0a2e6cc0(local_100,local_120,0);
      param_2 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
        FUN_0a431984(&local_1c0,param_5);
        FUN_0a431984(local_9c,param_6);
        local_140[0] = local_1c0;
        local_160[0] = local_9c[0];
        uVar6 = local_9c[0];
        uVar5 = FUN_0a2eb3dc(local_140,local_160,0);
        param_2 = (float)uVar6;
        if ((uVar5 & 1) == 0) {
          FUN_0a4317dc(&local_1c0,param_5);
          FUN_0a4317dc(local_9c,param_6);
          local_180[0] = local_1c0;
          local_170 = local_1b0;
          local_1a0[0] = local_9c[0];
          local_190 = local_8c;
          uVar5 = FUN_0a2ead40(local_180,local_1a0,0);
          param_2 = (float)local_9c[0];
          uVar8 = uVar9 | 0x200;
          if ((uVar5 & 1) == 0) {
            uVar8 = uVar9;
          }
          goto LAB_0a445060;
        }
      }
    }
    uVar8 = uVar9 | 0x200;
  }
LAB_0a445060:
  puVar1 = PTR_DAT_0acf1e48;
  uVar5 = FUN_07649304(param_5 + 0x20,param_6[4],*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0ace6420 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar5 = FUN_0a2a8e94(param_5,param_6,0);
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar8 | 0x8000;
    }
  }
  puVar2 = PTR_DAT_0acf1e68;
  uVar5 = FUN_07649800(param_5 + 0x28,param_6[5],*(undefined8 *)puVar1);
  if ((uVar5 & 1) == 0) {
    if ((uVar8 >> 0xd & 1) == 0) {
      fVar10 = (float)FUN_0a430700(param_5);
      fVar12 = param_4;
      fVar15 = param_2;
      fVar14 = param_3;
      fVar11 = (float)FUN_0a430700(param_6);
      fVar13 = DAT_01df45a8;
      fVar15 = param_2 - fVar15;
      param_3 = param_3 - fVar14;
      param_4 = param_4 - fVar12;
      param_2 = param_4 * param_4;
      if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 <
          DAT_01df45a8) {
        fVar10 = (float)FUN_0a43091c(param_5);
        fVar12 = param_4;
        fVar15 = param_2;
        fVar14 = param_3;
        fVar11 = (float)FUN_0a43091c(param_6);
        fVar15 = param_2 - fVar15;
        param_3 = param_3 - fVar14;
        param_4 = param_4 - fVar12;
        param_2 = param_4 * param_4;
        if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 <
            fVar13) {
          fVar10 = (float)FUN_0a430a60(param_5);
          fVar12 = param_4;
          fVar15 = param_2;
          fVar14 = param_3;
          fVar11 = (float)FUN_0a430a60(param_6);
          fVar15 = param_2 - fVar15;
          param_3 = param_3 - fVar14;
          param_4 = param_4 - fVar12;
          param_2 = param_4 * param_4;
          if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15
              < fVar13) {
            fVar10 = (float)FUN_0a430b04(param_5);
            fVar12 = param_4;
            fVar15 = param_2;
            fVar14 = param_3;
            fVar11 = (float)FUN_0a430b04(param_6);
            fVar15 = param_2 - fVar15;
            param_3 = param_3 - fVar14;
            param_4 = param_4 - fVar12;
            param_2 = param_4 * param_4;
            if (param_2 + param_3 * param_3 +
                          (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 < fVar13) {
              fVar10 = (float)FUN_0a430ba8(param_5);
              fVar12 = param_4;
              fVar15 = param_2;
              fVar14 = param_3;
              fVar11 = (float)FUN_0a430ba8(param_6);
              fVar15 = param_2 - fVar15;
              param_3 = param_3 - fVar14;
              param_4 = param_4 - fVar12;
              param_2 = param_4 * param_4;
              if (param_2 + param_3 * param_3 +
                            (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 < fVar13)
              goto LAB_0a44527c;
            }
          }
        }
      }
      uVar8 = uVar8 | 0x2000;
    }
LAB_0a44527c:
    if ((uVar8 >> 0xb & 1) == 0) {
      FUN_0a430754(&local_1c0,param_5);
      FUN_0a430754(auStack_200,param_6);
      local_1e0[0] = local_1c0;
      param_2 = local_1b0;
      uVar5 = FUN_0a2a7c08(local_1e0,auStack_200,0);
      if ((uVar5 & 1) == 0) {
        auVar16 = FUN_0a4307b4(param_5);
        auVar17 = FUN_0a4307b4(param_6);
        uVar5 = FUN_0a277c98(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                             auVar17._8_8_ & 0xffffffff,0);
        if ((uVar5 & 1) == 0) {
          auVar16 = FUN_0a43080c(param_5);
          auVar17 = FUN_0a43080c(param_6);
          uVar5 = FUN_0a277c98(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                               auVar17._8_8_ & 0xffffffff,0);
          if ((uVar5 & 1) == 0) {
            uVar6 = FUN_0a430864(param_5);
            uVar7 = FUN_0a430864(param_6);
            uVar5 = FUN_0a2785ac(uVar6,uVar7,0);
            if ((uVar5 & 1) == 0) {
              FUN_0a4308b4(&local_1c0,param_5);
              FUN_0a4308b4(auStack_234,param_6);
              local_220[0] = local_1c0;
              local_210 = local_1b0;
              uVar5 = FUN_0a278a94(local_220,auStack_234,0);
              if ((uVar5 & 1) == 0) goto LAB_0a44538c;
            }
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_0a44538c:
    uVar6 = FUN_0a430970(param_5);
    uVar7 = FUN_0a430970(param_6);
    uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = FUN_0a4309c0(param_5);
      uVar7 = FUN_0a4309c0(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a445404;
      uVar6 = FUN_0a430bfc(param_5);
      uVar7 = FUN_0a430bfc(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_0a445404;
      uVar6 = FUN_0a430c4c(param_5);
      uVar7 = FUN_0a430c4c(param_6);
      uVar5 = FUN_0a2e6620(uVar6,uVar7,0);
      uVar9 = uVar8 | 0x880;
      if ((uVar5 & 1) == 0) {
        uVar9 = uVar8;
      }
    }
    else {
LAB_0a445404:
      uVar9 = uVar8 | 0x880;
    }
    fVar13 = (float)FUN_0a431398(param_5);
    fVar12 = (float)FUN_0a431398(param_6);
    uVar8 = uVar9 | 0x1000;
    if (fVar13 == fVar12) {
      uVar8 = uVar9;
    }
    iVar3 = FUN_0a4313e8(param_5);
    iVar4 = FUN_0a4313e8(param_6);
    if (iVar3 != iVar4) {
      uVar8 = uVar8 | 0x48;
    }
  }
  uVar5 = FUN_07648920(param_5 + 0x10,param_6[2],*(undefined8 *)puVar2);
  if ((uVar5 & 1) != 0) {
    return uVar8;
  }
  if ((uVar8 & 0x808) == 0) {
    iVar3 = FUN_0a431db4(param_5);
    iVar4 = FUN_0a431db4(param_6);
    if (iVar3 == iVar4) {
      iVar3 = FUN_0a4316d4(param_5);
      iVar4 = FUN_0a4316d4(param_6);
      if (iVar3 == iVar4) {
        fVar13 = (float)FUN_0a431d14(param_5);
        fVar12 = (float)FUN_0a431d14(param_6);
        if (fVar13 == fVar12) {
          FUN_0a431e54(&local_1c0,param_5);
          FUN_0a431e54(auStack_264,param_6);
          local_250[0] = local_1c0;
          local_240 = local_1b0;
          uVar5 = FUN_0a30c054(local_250,auStack_264,0);
          if ((uVar5 & 1) == 0) goto LAB_0a445508;
        }
      }
    }
    uVar8 = uVar8 | 0x808;
  }
LAB_0a445508:
  fVar14 = (float)FUN_0a4319ec(param_5);
  fVar13 = param_4;
  fVar12 = param_2;
  fVar15 = param_3;
  fVar10 = (float)FUN_0a4319ec(param_6);
  uVar9 = uVar8 | 0x2000;
  if ((param_4 - fVar13) * (param_4 - fVar13) +
      (param_3 - fVar15) * (param_3 - fVar15) +
      (fVar14 - fVar10) * (fVar14 - fVar10) + (param_2 - fVar12) * (param_2 - fVar12) < DAT_01df45a8
     ) {
    uVar9 = uVar8;
  }
  if ((uVar9 >> 0xb & 1) == 0) {
    iVar3 = FUN_0a431b84(param_5);
    iVar4 = FUN_0a431b84(param_6);
    if (iVar3 == iVar4) {
      iVar3 = FUN_0a431c24(param_5);
      iVar4 = FUN_0a431c24(param_6);
      if (iVar3 == iVar4) {
        iVar3 = FUN_0a431c74(param_5);
        iVar4 = FUN_0a431c74(param_6);
        if (iVar3 == iVar4) {
          iVar3 = FUN_0a431cc4(param_5);
          iVar4 = FUN_0a431cc4(param_6);
          if (iVar3 == iVar4) {
            iVar3 = FUN_0a431d64(param_5);
            iVar4 = FUN_0a431d64(param_6);
            if (iVar3 == iVar4) {
              iVar3 = FUN_0a431fb0(param_5);
              iVar4 = FUN_0a431fb0(param_6);
              if (iVar3 == iVar4) {
                return uVar9;
              }
            }
          }
        }
      }
    }
    uVar9 = uVar9 | 0x800;
  }
  return uVar9;
}


