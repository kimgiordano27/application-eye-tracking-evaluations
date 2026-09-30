/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_GetIsSpecified
ENTRY_POINT: 062460e8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__get_GetIsSpecified
               (long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  short sVar6;
  bool bVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  bool bVar16;
  undefined2 uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  ushort *puVar26;
  uint uVar27;
  short *psVar28;
  short *psVar29;
  uint uVar30;
  int iVar31;
  long lVar32;
  short sVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  undefined1 auVar37 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  int local_ec;
  long local_e8;
  uint local_dc;
  int local_d8;
  int local_d4;
  long local_d0;
  long local_c8;
  uint local_bc;
  long local_b8;
  uint local_ac;
  long local_a8;
  uint local_9c;
  uint local_98;
  uint local_94;
  short *local_90;
  undefined8 local_88;
  uint local_7c;
  undefined1 local_78 [16];
  long local_68;
  undefined1 auVar8 [12];
  
  local_c8 = tpidr_el0;
  local_68 = *(long *)(local_c8 + 0x28);
  local_88 = param_3;
  if ((DAT_0825b9e8 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d87068);
    FUN_0373b518(PTR_DAT_07da5228);
    FUN_0373b518(PTR_DAT_07daae20);
    FUN_0373b518(PTR_DAT_07da5230);
    FUN_0373b518(PTR_DAT_07dae4d0);
    FUN_0373b518(PTR_DAT_07da53d0);
    FUN_0373b518(PTR_DAT_07dae4d8);
    FUN_0373b518(PTR_DAT_07dae4e0);
    DAT_0825b9e8 = 1;
  }
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  local_90 = (short *)FUN_06251760(param_2,0);
  if (*local_90 == 0) {
    uVar18 = 2;
  }
  else {
    uVar18 = FUN_06251744(param_2,0);
    uVar18 = uVar18 & 1;
  }
  local_a8 = param_5;
  if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar18 = FUN_0624bf1c(local_88,param_4,uVar18);
  uVar27 = (uint)param_4;
  local_98 = 0;
  do {
    lVar20 = FUN_04077750(local_88,param_4,*(undefined8 *)PTR_DAT_07da5228);
    if ((int)uVar18 < (int)uVar27) {
      local_7c = 0;
      uVar36 = 0;
      bVar7 = false;
      local_9c = 0;
      iVar31 = 0;
      uVar30 = 0x7fffffff;
      local_94 = 0xffffffff;
      uVar19 = 0xffffffff;
      uVar34 = uVar18;
      do {
        uVar4 = *(ushort *)(lVar20 + (long)(int)uVar34 * 2);
        if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
        uVar25 = uVar34 + 1;
        uVar5 = uVar30;
        uVar15 = local_98;
        if (uVar4 < 0x46) {
          switch(uVar4) {
          case 0x22:
          case 0x27:
            lVar32 = (long)(int)uVar25;
            lVar2 = lVar32;
            if ((long)(int)uVar25 <= (long)(int)uVar27) {
              lVar2 = (long)(int)uVar27;
            }
            puVar26 = (ushort *)(lVar20 + (long)(int)uVar25 * 2);
            do {
              if (lVar2 == lVar32) {
                uVar25 = (uint)lVar2;
                goto switchD_0624628c_caseD_24;
              }
              uVar3 = *puVar26;
              if (uVar3 == 0) break;
              lVar32 = lVar32 + 1;
              puVar26 = puVar26 + 1;
            } while (uVar3 != uVar4);
            uVar25 = (uint)lVar32;
            break;
          case 0x23:
            local_7c = local_7c + 1;
            break;
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2d:
          case 0x2f:
            break;
          case 0x25:
            iVar31 = iVar31 + 2;
            break;
          case 0x2c:
            if (((int)local_94 < 0) && (0 < (int)local_7c)) {
              if ((int)uVar19 < 0) {
                local_98 = 1;
                uVar19 = local_7c;
                uVar15 = local_98;
              }
              else {
                bVar16 = uVar19 != local_7c;
                local_9c = local_9c | bVar16;
                uVar19 = local_7c;
                uVar15 = 1;
                if (!bVar16) {
                  uVar15 = local_98 + 1;
                }
              }
            }
            break;
          case 0x2e:
            if ((int)local_94 < 0) {
              local_94 = local_7c;
            }
            break;
          case 0x30:
            uVar36 = local_7c + 1;
            uVar5 = local_7c;
            local_7c = uVar36;
            if (uVar30 != 0x7fffffff) {
              uVar5 = uVar30;
            }
            break;
          default:
            if (uVar4 == 0x45) {
LAB_06246310:
              if ((((int)uVar25 < (int)uVar27) &&
                  (*(short *)(lVar20 + (long)(int)uVar25 * 2) == 0x30)) ||
                 (((int)(uVar34 + 2) < (int)uVar27 &&
                  (((sVar33 = *(short *)(lVar20 + (long)(int)uVar25 * 2), sVar33 == 0x2d ||
                    (sVar33 == 0x2b)) && (*(short *)(lVar20 + (long)(int)(uVar34 + 2) * 2) == 0x30))
                  )))) {
                do {
                  uVar25 = uVar25 + 1;
                  if ((int)uVar27 <= (int)uVar25) {
                    bVar7 = true;
                    goto LAB_06246438;
                  }
                } while (*(short *)(lVar20 + (long)(int)uVar25 * 2) == 0x30);
                bVar7 = true;
              }
            }
          }
        }
        else if (uVar4 == 0x5c) {
          if (((int)uVar25 < (int)uVar27) && (*(short *)(lVar20 + (long)(int)uVar25 * 2) != 0)) {
            uVar25 = uVar34 + 2;
          }
        }
        else {
          if (uVar4 == 0x65) goto LAB_06246310;
          if (uVar4 == 0x2030) {
            iVar31 = iVar31 + 3;
          }
        }
switchD_0624628c_caseD_24:
        local_98 = uVar15;
        uVar30 = uVar5;
        uVar34 = uVar25;
      } while ((int)uVar34 < (int)uVar27);
LAB_06246438:
      if ((int)local_94 < 0) {
        local_94 = local_7c;
      }
      if (-1 < (int)uVar19) {
        if (uVar19 == local_94) {
          iVar31 = local_98 * -3 + iVar31;
        }
        else {
          local_9c = 1;
        }
      }
    }
    else {
      local_94 = 0;
      bVar7 = false;
      uVar36 = 0;
      local_7c = 0;
      iVar31 = 0;
      local_9c = 0;
      uVar30 = 0x7fffffff;
    }
    if (*local_90 == 0) {
      local_98 = uVar18;
      FUN_06251754(param_2,0,0);
      *(undefined4 *)(param_2 + 4) = 0;
      uVar34 = local_98;
      break;
    }
    iVar31 = *(int *)(param_2 + 4) + iVar31;
    *(int *)(param_2 + 4) = iVar31;
    uVar34 = local_7c;
    if (!bVar7) {
      uVar34 = (local_7c - local_94) + iVar31;
    }
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0624abbc(param_2,uVar34);
    uVar34 = uVar18;
    if (*local_90 != 0) break;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar19 = FUN_0624bf1c(local_88,param_4,2);
    bVar16 = uVar19 != uVar18;
    uVar18 = uVar19;
  } while (bVar16);
  local_98 = uVar34;
  local_d8 = local_94 - uVar30;
  if (local_d8 == 0 || (int)local_94 < (int)uVar30) {
    local_d8 = 0;
  }
  local_d4 = local_94 - uVar36;
  if ((int)uVar36 <= (int)local_94) {
    local_d4 = 0;
  }
  if (bVar7) {
    local_bc = 1;
    local_ac = 0;
    uVar18 = local_94;
  }
  else {
    uVar18 = *(uint *)(param_2 + 4);
    local_bc = 0;
    local_ac = uVar18 - local_94;
    if (local_ac == 0 || (int)uVar18 < (int)local_94) {
      uVar18 = local_94;
    }
  }
  puVar22 = &local_100;
  local_100 = 0;
  uStack_f8 = 0;
  auVar14._8_8_ = DAT_0158a960;
  auVar14._0_8_ = puVar22;
  auVar13._8_8_ = DAT_0158a960;
  auVar13._0_8_ = puVar22;
  auVar12._8_8_ = DAT_0158a960;
  auVar12._0_8_ = puVar22;
  local_78._8_8_ = DAT_0158a960;
  local_78._0_8_ = puVar22;
  auVar11._8_8_ = DAT_0158a960;
  auVar11._0_8_ = puVar22;
  auVar10._8_8_ = DAT_0158a960;
  auVar10._0_8_ = puVar22;
  auVar37._8_8_ = DAT_0158a960;
  auVar37._0_8_ = puVar22;
  local_d0 = param_2;
  if ((local_9c & 1) == 0) {
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext:
    uVar36 = 0xffffffff;
  }
  else {
    if ((local_a8 == 0) || (auVar12 = auVar13, *(long *)(local_a8 + 0x40) == 0)) goto LAB_06247218;
    if (*(int *)(*(long *)(local_a8 + 0x40) + 0x10) < 1)
    goto Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext;
    lVar20 = *(long *)(local_a8 + 0x10);
    auVar12 = auVar14;
    if (lVar20 == 0) goto LAB_06247218;
    iVar31 = *(int *)(lVar20 + 0x18);
    if (iVar31 == 0) {
      iVar24 = 0;
    }
    else {
      iVar24 = *(int *)(lVar20 + 0x20);
    }
    uVar36 = 0xffffffff;
    iVar35 = (local_ac & (int)local_ac >> 0x1f) + uVar18;
    iVar1 = local_d8;
    if (local_d8 <= iVar35) {
      iVar1 = iVar35;
    }
    local_78 = auVar10;
    if ((iVar24 != 0) && (local_78 = auVar11, iVar24 < iVar1)) {
      uVar36 = 0;
      lVar32 = 0;
      uVar23 = 4;
      local_b8 = lVar20;
      iVar35 = iVar24;
      while( true ) {
        auVar9._8_8_ = uVar23;
        auVar9._0_8_ = puVar22;
        auVar8 = auVar9._0_12_;
        if ((int)uVar23 <= (int)uVar36) {
          local_78 = auVar37;
          uVar21 = RootMotion_FinalIK_Finger___ctor
                             (*(undefined8 *)PTR_DAT_07d87068,(int)uVar23 << 1);
          auVar37 = FUN_0531f3bc(uVar21,*(undefined8 *)PTR_DAT_07dae4e0);
          FUN_0531eed0(local_78,auVar37._0_8_,auVar37._8_8_,*(undefined8 *)PTR_DAT_07dae4d0);
          auVar37 = FUN_0531f3bc(uVar21,*(undefined8 *)PTR_DAT_07dae4e0);
          auVar8 = auVar37._0_12_;
          lVar20 = local_b8;
        }
        puVar22 = auVar8._0_8_;
        local_78 = auVar37;
        if (auVar8._8_4_ <= uVar36) goto LAB_06247214;
        *(int *)((long)puVar22 + (long)(int)uVar36 * 4) = iVar24;
        if ((int)lVar32 < iVar31 + -1) {
          lVar32 = (long)(int)lVar32 + 1;
          if (*(uint *)(lVar20 + 0x18) <= (uint)lVar32) goto LAB_06247214;
          iVar35 = *(int *)(lVar20 + lVar32 * 4 + 0x20);
        }
        if ((iVar35 == 0) || (iVar24 = iVar35 + iVar24, iVar1 <= iVar24)) break;
        uVar23 = local_78._8_8_ & 0xffffffff;
        uVar36 = uVar36 + 1;
        auVar37 = local_78;
      }
    }
  }
  uVar23 = FUN_06251744(local_d0,0);
  if ((local_98 == 0) && ((uVar23 & 1) != 0)) {
    auVar12 = local_78;
    if (local_a8 != 0) {
      lVar20 = *(long *)(local_a8 + 0x30);
      if (DAT_0825ba12 == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825ba12 = '\x01';
      }
      auVar12 = local_78;
      if (lVar20 != 0) {
        if (*(int *)(lVar20 + 0x10) == 1) {
          uVar30 = *(uint *)(param_1 + 0x18);
          if ((int)uVar30 < (int)*(uint *)(param_1 + 0x10)) {
            if (*(uint *)(param_1 + 0x10) <= uVar30) {
LAB_06247214:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar32 = *(long *)(param_1 + 8);
            uVar17 = FUN_060bb390(lVar20,0,0);
            *(undefined2 *)(lVar32 + (long)(int)uVar30 * 2) = uVar17;
            *(uint *)(param_1 + 0x18) = uVar30 + 1;
            goto LAB_06246670;
          }
        }
        FUN_060dc110(param_1,lVar20,0);
        goto LAB_06246670;
      }
    }
LAB_06247218:
    local_78 = auVar12;
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_06246670:
  local_b8 = FUN_04077750(local_88,param_4,*(undefined8 *)PTR_DAT_07da5228);
  if ((int)local_98 < (int)uVar27) {
    local_dc = 0;
    local_88 = CONCAT44(local_88._4_4_,local_9c) ^ 1;
    local_ec = uVar27 - 2;
    local_e8 = (long)(int)uVar27;
    psVar29 = local_90;
    do {
      uVar4 = *(ushort *)(local_b8 + (long)(int)local_98 * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      uVar34 = (uint)uVar4;
      lVar20 = local_a8;
      uVar30 = local_ac;
      auVar12 = local_78;
      if ((0 < (int)local_ac) &&
         ((uVar4 < 0x31 && ((1L << ((ulong)uVar34 & 0x3f) & 0x1400800000000U) != 0)))) {
        local_9c = uVar18 - local_ac;
        iVar31 = local_ac + 1;
        uVar30 = (uint)local_88;
        do {
          sVar33 = *psVar29;
          sVar6 = 0x30;
          if (sVar33 != 0) {
            psVar29 = psVar29 + 1;
            sVar6 = sVar33;
          }
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar19 = *(uint *)(param_1 + 0x18);
          if ((int)uVar19 < (int)*(uint *)(param_1 + 0x10)) {
            if (*(uint *)(param_1 + 0x10) <= uVar19) goto LAB_06247214;
            *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar19 * 2) = sVar6;
            *(uint *)(param_1 + 0x18) = uVar19 + 1;
          }
          else {
            FUN_060dbfe4(param_1,sVar6,0);
          }
          if ((-1 < (int)uVar36) && (1 < (int)uVar18 && (uVar30 & 1) == 0)) {
            if ((uint)local_78._8_4_ <= uVar36) goto LAB_06247214;
            if (uVar18 == *(int *)(local_78._0_8_ + (ulong)uVar36 * 4) + 1U) {
              auVar12 = local_78;
              if (lVar20 == 0) goto LAB_06247218;
              lVar32 = *(long *)(lVar20 + 0x40);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              auVar12 = local_78;
              if (lVar32 == 0) goto LAB_06247218;
              if (*(int *)(lVar32 + 0x10) == 1) {
                uVar30 = *(uint *)(param_1 + 0x18);
                if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar30) goto LAB_06246844;
                if (*(uint *)(param_1 + 0x10) <= uVar30) goto LAB_06247214;
                lVar20 = *(long *)(param_1 + 8);
                uVar17 = FUN_060bb390(lVar32,0,0);
                *(undefined2 *)(lVar20 + (long)(int)uVar30 * 2) = uVar17;
                *(uint *)(param_1 + 0x18) = uVar30 + 1;
                lVar20 = local_a8;
              }
              else {
LAB_06246844:
                FUN_060dc110(param_1,lVar32,0);
              }
              uVar36 = uVar36 - 1;
              uVar30 = (uint)local_88;
            }
          }
          iVar31 = iVar31 + -1;
          uVar18 = uVar18 - 1;
        } while (1 < iVar31);
        uVar30 = 0;
        uVar18 = local_9c;
        auVar12 = local_78;
      }
      uVar25 = local_98;
      uVar19 = local_98 + 1;
      local_78 = auVar12;
      if (uVar34 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar19 < (int)uVar27) {
            lVar20 = (ulong)uVar19 << 0x20;
            uVar25 = ~local_98;
            puVar26 = (ushort *)(local_b8 + (long)(int)uVar19 * 2);
            lVar32 = local_e8 - (int)uVar19;
            local_ac = uVar30;
            local_9c = uVar18;
            while( true ) {
              uVar4 = *puVar26;
              if ((uVar4 == 0) || (uVar4 == uVar34)) break;
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar18 = *(uint *)(param_1 + 0x18);
              if ((int)uVar18 < (int)*(uint *)(param_1 + 0x10)) {
                if (*(uint *)(param_1 + 0x10) <= uVar18) goto LAB_06247214;
                *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar18 * 2) = uVar4;
                *(uint *)(param_1 + 0x18) = uVar18 + 1;
              }
              else {
                FUN_060dbfe4(param_1,uVar4,0);
              }
              lVar20 = lVar20 + 0x100000000;
              uVar25 = uVar25 - 1;
              lVar32 = lVar32 + -1;
              puVar26 = puVar26 + 1;
              if (lVar32 == 0) goto LAB_062470b4;
            }
            uVar19 = (*(short *)((lVar20 >> 0x1f) + local_b8) != 0) - uVar25;
            uVar30 = local_ac;
            uVar18 = local_9c;
          }
          break;
        case 0x23:
        case 0x30:
          if ((int)uVar30 < 0) {
            uVar30 = uVar30 + 1;
            if ((int)uVar18 <= local_d8) {
LAB_06246d4c:
              sVar33 = 0x30;
              goto LAB_06246d50;
            }
          }
          else {
            sVar33 = *psVar29;
            if (sVar33 == 0) {
              if (local_d4 < (int)uVar18) goto LAB_06246d4c;
            }
            else {
              psVar29 = psVar29 + 1;
LAB_06246d50:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar23 = local_88;
              uVar34 = *(uint *)(param_1 + 0x18);
              if ((int)uVar34 < (int)*(uint *)(param_1 + 0x10)) {
                if (*(uint *)(param_1 + 0x10) <= uVar34) goto LAB_06247214;
                *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar34 * 2) = sVar33;
                *(uint *)(param_1 + 0x18) = uVar34 + 1;
              }
              else {
                FUN_060dbfe4(param_1,sVar33,0);
              }
              auVar12 = local_78;
              if ((-1 < (int)uVar36) && (1 < (int)uVar18 && (uVar23 & 1) == 0)) {
                if ((uint)local_78._8_4_ <= uVar36) goto LAB_06247214;
                if (uVar18 == *(int *)(local_78._0_8_ + (ulong)uVar36 * 4) + 1U) {
                  if (lVar20 == 0) goto LAB_06247218;
                  lVar20 = *(long *)(lVar20 + 0x40);
                  if (DAT_0825ba12 == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825ba12 = '\x01';
                  }
                  auVar12 = local_78;
                  if (lVar20 == 0) goto LAB_06247218;
                  if (*(int *)(lVar20 + 0x10) == 1) {
                    uVar34 = *(uint *)(param_1 + 0x18);
                    if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar34) goto LAB_06246e68;
                    if (*(uint *)(param_1 + 0x10) <= uVar34) goto LAB_06247214;
                    lVar32 = *(long *)(param_1 + 8);
                    uVar17 = FUN_060bb390(lVar20,0,0);
                    *(undefined2 *)(lVar32 + (long)(int)uVar34 * 2) = uVar17;
                    *(uint *)(param_1 + 0x18) = uVar34 + 1;
                    auVar12 = local_78;
                  }
                  else {
LAB_06246e68:
                    FUN_060dc110(param_1,lVar20,0);
                    auVar12 = local_78;
                  }
                  uVar36 = uVar36 - 1;
                }
              }
            }
          }
          uVar18 = uVar18 - 1;
          local_78 = auVar12;
          break;
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
switchD_062468ac_caseD_24:
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar25 = *(uint *)(param_1 + 0x18);
          uVar34 = *(uint *)(param_1 + 0x10);
          if ((int)uVar34 <= (int)uVar25) goto LAB_06246a68;
LAB_06246b00:
          if (uVar34 <= uVar25) goto LAB_06247214;
          *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar25 * 2) = uVar4;
          *(uint *)(param_1 + 0x18) = uVar25 + 1;
          break;
        case 0x25:
          if (lVar20 == 0) goto LAB_06247218;
          lVar20 = *(long *)(lVar20 + 0x90);
joined_r0x06246994:
          if (DAT_0825ba12 == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba12 = '\x01';
          }
          auVar12 = local_78;
          if (lVar20 == 0) goto LAB_06247218;
          if (*(int *)(lVar20 + 0x10) == 1) {
            uVar34 = *(uint *)(param_1 + 0x18);
            if ((int)uVar34 < (int)*(uint *)(param_1 + 0x10)) {
              if (uVar34 < *(uint *)(param_1 + 0x10)) {
                lVar32 = *(long *)(param_1 + 8);
                uVar17 = FUN_060bb390(lVar20,0,0);
                *(undefined2 *)(lVar32 + (long)(int)uVar34 * 2) = uVar17;
                *(uint *)(param_1 + 0x18) = uVar34 + 1;
                break;
              }
              goto LAB_06247214;
            }
          }
          FUN_060dc110(param_1,lVar20,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((local_dc & 1) == 0 && uVar18 == 0) {
            if ((local_d4 < 0) || (((int)local_94 < (int)local_7c && (*psVar29 != 0)))) {
              if (lVar20 == 0) goto LAB_06247218;
              lVar20 = *(long *)(lVar20 + 0x38);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              auVar12 = local_78;
              if (lVar20 == 0) goto LAB_06247218;
              if (*(int *)(lVar20 + 0x10) == 1) {
                uVar18 = *(uint *)(param_1 + 0x18);
                if ((int)uVar18 < (int)*(uint *)(param_1 + 0x10)) {
                  if (uVar18 < *(uint *)(param_1 + 0x10)) {
                    lVar32 = *(long *)(param_1 + 8);
                    uVar17 = FUN_060bb390(lVar20,0,0);
                    *(undefined2 *)(lVar32 + (long)(int)uVar18 * 2) = uVar17;
                    *(uint *)(param_1 + 0x18) = uVar18 + 1;
                    uVar18 = 0;
                    local_dc = 1;
                    break;
                  }
                  goto LAB_06247214;
                }
              }
              FUN_060dc110(param_1,lVar20,0);
              local_dc = 1;
              uVar18 = 0;
            }
            else {
              local_dc = 0;
              uVar18 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_062468ac_caseD_24;
LAB_06246a98:
          if ((local_bc & 1) == 0) {
            if (DAT_0825aded == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825aded = '\x01';
            }
            uVar5 = *(uint *)(param_1 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(param_1 + 0x10)) {
              if (*(uint *)(param_1 + 0x10) <= uVar5) goto LAB_06247214;
              *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar5 * 2) = uVar4;
              *(uint *)(param_1 + 0x18) = uVar5 + 1;
            }
            else {
              FUN_060dbfe4(param_1,uVar34,0);
            }
            if ((int)uVar19 < (int)uVar27) {
              sVar33 = *(short *)(local_b8 + (long)(int)uVar19 * 2);
              if ((sVar33 == 0x2d) || (sVar33 == 0x2b)) {
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar34 = *(uint *)(param_1 + 0x18);
                uVar19 = uVar25 + 2;
                if ((int)uVar34 < (int)*(uint *)(param_1 + 0x10)) {
                  if (*(uint *)(param_1 + 0x10) <= uVar34) goto LAB_06247214;
                  *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar34 * 2) = sVar33;
                  *(uint *)(param_1 + 0x18) = uVar34 + 1;
                }
                else {
                  FUN_060dbfe4(param_1,sVar33,0);
                }
              }
              if ((int)uVar19 < (int)uVar27) {
                psVar28 = (short *)(local_b8 + (long)(int)uVar19 * 2);
                lVar20 = local_e8 - (int)uVar19;
                while (*psVar28 == 0x30) {
                  if (DAT_0825aded == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825aded = '\x01';
                  }
                  uVar34 = *(uint *)(param_1 + 0x18);
                  if ((int)uVar34 < (int)*(uint *)(param_1 + 0x10)) {
                    if (*(uint *)(param_1 + 0x10) <= uVar34) goto LAB_06247214;
                    *(undefined2 *)(*(long *)(param_1 + 8) + (long)(int)uVar34 * 2) = 0x30;
                    *(uint *)(param_1 + 0x18) = uVar34 + 1;
                  }
                  else {
                    FUN_060dbfe4(param_1,0x30,0);
                  }
                  uVar19 = uVar19 + 1;
                  lVar20 = lVar20 + -1;
                  psVar28 = psVar28 + 1;
                  if (lVar20 == 0) goto LAB_062470b4;
                }
                local_bc = 0;
                break;
              }
            }
          }
          else {
            if (((int)uVar19 < (int)uVar27) &&
               (*(short *)(local_b8 + (long)(int)uVar19 * 2) == 0x30)) {
              uVar34 = 0;
              iVar31 = 1;
              goto LAB_06246f80;
            }
            iVar31 = local_98 + 2;
            if ((int)uVar27 <= iVar31) {
LAB_06246fc0:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar34 = *(uint *)(param_1 + 0x18);
              if ((int)uVar34 < (int)*(uint *)(param_1 + 0x10)) {
                if (*(uint *)(param_1 + 0x10) <= uVar34) goto LAB_06247214;
                *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar34 * 2) = uVar4;
                *(uint *)(param_1 + 0x18) = uVar34 + 1;
              }
              else {
                FUN_060dbfe4(param_1,uVar4,0);
              }
              local_bc = 1;
              break;
            }
            sVar33 = *(short *)(local_b8 + (long)(int)uVar19 * 2);
            if (sVar33 == 0x2d) {
              if (*(short *)(local_b8 + (long)iVar31 * 2) != 0x30) goto LAB_06246fc0;
              iVar31 = 0;
              uVar34 = 0;
            }
            else {
              if ((sVar33 != 0x2b) || (*(short *)(local_b8 + (long)iVar31 * 2) != 0x30))
              goto LAB_06246fc0;
              iVar31 = 0;
              uVar34 = 1;
            }
LAB_06246f80:
            uVar25 = local_98 + 2;
            iVar24 = iVar31;
            uVar19 = uVar25;
            if ((int)uVar25 < (int)uVar27) {
              iVar35 = local_ec + iVar31;
              do {
                iVar24 = iVar31;
                uVar19 = uVar25;
                if (*(short *)(local_b8 + (long)(int)uVar25 * 2) != 0x30) break;
                uVar25 = uVar25 + 1;
                iVar31 = iVar31 + 1;
                iVar24 = iVar35 - local_98;
                uVar19 = uVar27;
              } while (uVar27 != uVar25);
            }
            if (9 < iVar24) {
              iVar24 = 10;
            }
            if (*local_90 == 0) {
              iVar31 = 0;
            }
            else {
              iVar31 = *(int *)(local_d0 + 4) - local_94;
            }
            if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
              local_98 = uVar34;
              thunk_FUN_03798b70();
              uVar34 = local_98;
            }
            FUN_0624c068(param_1,local_a8,iVar31,uVar4,iVar24,uVar34);
          }
          local_bc = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_06246a98;
          if (uVar4 != 0x2030) goto switchD_062468ac_caseD_24;
          if (lVar20 != 0) {
            lVar20 = *(long *)(lVar20 + 0x98);
            goto joined_r0x06246994;
          }
          goto LAB_06247218;
        }
        if (((int)uVar27 <= (int)uVar19) ||
           (uVar4 = *(ushort *)(local_b8 + (long)(int)uVar19 * 2), uVar4 == 0))
        goto switchD_062468ac_caseD_2c;
        if (DAT_0825aded == '\0') {
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825aded = '\x01';
        }
        uVar25 = *(uint *)(param_1 + 0x18);
        uVar34 = *(uint *)(param_1 + 0x10);
        uVar19 = local_98 + 2;
        if ((int)uVar25 < (int)uVar34) goto LAB_06246b00;
LAB_06246a68:
        FUN_060dbfe4(param_1,uVar4,0);
      }
switchD_062468ac_caseD_2c:
      local_ac = uVar30;
      local_98 = uVar19;
    } while ((int)uVar19 < (int)uVar27);
  }
LAB_062470b4:
  if (*(long *)(local_c8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


