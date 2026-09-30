/*
FUNCTION_NAME: FUN_02711d1c
ENTRY_POINT: 02711d1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_02711d1c(float param_1,float param_2,undefined4 param_3,ulong param_4,long *param_5,
            ulong param_6,long param_7,long param_8)

{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  char cVar24;
  int iVar25;
  long lVar26;
  int *piVar27;
  code *pcVar28;
  undefined8 uVar29;
  uint uVar30;
  long *plVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  ulong uVar47;
  float fVar48;
  undefined4 uVar49;
  ulong uVar50;
  float fVar51;
  undefined4 uVar52;
  uint local_884;
  float local_864;
  float local_858;
  float local_854;
  ulong local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  ulong local_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  ulong local_7b0;
  undefined8 uStack_7a8;
  undefined4 local_7a0;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined4 uStack_778;
  undefined4 local_774;
  undefined4 uStack_770;
  undefined8 uStack_76c;
  ulong local_760;
  undefined8 uStack_758;
  undefined4 local_750;
  undefined8 local_740;
  undefined8 local_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  uint local_6c4;
  uint local_6c0 [15];
  float local_684;
  float local_658;
  undefined1 auStack_3b0 [784];
  
  if ((DAT_0378823a & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10025);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_11__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VectorImageManager>_Add__);
    thunk_FUN_00d48444(StringLiteral_10599);
    thunk_FUN_00d48444(StringLiteral_12605);
    thunk_FUN_00d48444(PTR_DAT_033f65a0);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonTextReader_<ReadNumberValueAsync>d__38_MoveNext__)
    ;
    thunk_FUN_00d48444(Oculus_Platform_Request<UserCapabilityList>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebSocketHandle_<ConnectAsyncCore>d__26>__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_Condition__);
    DAT_0378823a = 1;
  }
  memset(auStack_3b0,0,0x310);
  memset(local_6c0,0,0x310);
  local_6c4 = 0;
  local_740 = 0;
  local_738 = 0;
  local_760 = 0;
  uStack_758 = 0;
  local_750 = 0;
  local_7b0 = 0;
  uStack_7a8 = 0;
  uStack_6e8 = 0;
  local_6f0 = 0;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  uStack_708 = 0;
  local_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_728 = 0;
  local_730 = 0;
  uStack_718 = 0;
  uStack_720 = 0;
  uStack_76c = 0;
  uStack_770 = 0;
  uStack_788 = 0;
  local_790 = 0;
  uStack_778 = 0;
  local_774 = 0;
  uStack_780 = 0;
  local_7a0 = 0;
  if (param_7 != 0) {
    uVar29 = *(undefined8 *)(param_7 + 0x40);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_0268b4e0(uVar29,0,0);
    if ((uVar17 & 1) == 0) {
      if (*(long *)(param_7 + 0x40) == 0) goto LAB_02713988;
      lVar18 = FUN_02713ee0(*(long *)(param_7 + 0x40),0);
      puVar8 = Method_System_Linq_Expressions_Expression_Condition__;
      if (((lVar18 != 0) && (lVar18 = param_5[4], lVar18 != 0)) && (*(long *)(lVar18 + 0x18) != 0))
      {
        if ((int)*(long *)(lVar18 + 0x18) == 0) {
LAB_0271398c:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (*(int *)(lVar18 + 0x20) != 0) {
          lVar18 = *(long *)(param_7 + 0x40);
          param_5[6] = lVar18;
          lVar23 = *(long *)(param_7 + 0x48);
          *(undefined4 *)(param_5 + 8) = 0;
          param_5[7] = lVar23;
          local_820 = 0;
          uStack_838 = 0;
          local_840 = 0;
          uStack_828 = 0;
          uStack_830 = 0;
          uStack_848 = 0;
          local_850 = 0;
          FUN_0272032c((int)param_5[0x14],&local_850,0,lVar18,0,lVar23,0);
          uStack_7e8 = uStack_848;
          local_7f0 = local_850;
          uStack_7d8 = uStack_838;
          uStack_7e0 = local_840;
          uStack_7c8 = uStack_828;
          local_7d0 = uStack_830;
          local_7c0 = local_820;
          FUN_013c57d4(param_5 + 9,&local_7f0,*(undefined8 *)puVar8);
          puVar8 = StringLiteral_12605;
          iVar25 = (int)param_5[0x16];
          if ((param_5[0x149] == 0) || (*(int *)(param_5[0x149] + 0x18) < iVar25)) {
            if (iVar25 < 0x401) {
              iVar13 = FUN_02699ba8(iVar25,0);
            }
            else {
              iVar13 = iVar25 + 0x100;
            }
            lVar18 = FUN_00da4fb8(*(undefined8 *)puVar8,iVar13);
            param_5[0x149] = lVar18;
          }
          if (*(long *)(param_7 + 0x40) != 0) {
            FUN_027139b8(&local_850,*(long *)(param_7 + 0x40),0);
            memcpy(&local_730,&local_850,0x60);
            iVar13 = FUN_026fd110(&local_730,0);
            puVar10 = Method_Newtonsoft_Json_JsonTextReader_<ReadNumberValueAsync>d__38_MoveNext__;
            puVar9 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebSocketHandle_<ConnectAsyncCore>d__26>__
            ;
            puVar8 = Oculus_Platform_Request<UserCapabilityList>_TypeInfo;
            if (*(long *)(param_7 + 0x40) != 0) {
              pfVar1 = (float *)((long)param_5 + 0x254);
              FUN_027139b8(&local_850,*(long *)(param_7 + 0x40),0);
              memcpy(&local_730,&local_850,0x60);
              fVar32 = (float)FUN_026fd120(&local_730,0);
              *(undefined4 *)((long)param_5 + 0xbc) = 0x3f800000;
              fVar32 = (param_1 / (float)iVar13) * fVar32;
              *(float *)((long)param_5 + 0xb4) = fVar32;
              *(float *)(param_5 + 0x18) = param_1;
              local_850._0_4_ = param_1;
              FUN_013c57d4(param_5 + 0x19,&local_850,*(undefined8 *)puVar9);
              *(undefined4 *)(param_5 + 0x1d) = *(undefined4 *)(param_7 + 0x60);
              uVar41 = *(undefined4 *)(param_7 + 0x70);
              *(undefined4 *)(param_5 + 0x24) = uVar41;
              local_850 = CONCAT44(local_850._4_4_,uVar41);
              FUN_013c57d4(param_5 + 0x25,&local_850,*(undefined8 *)puVar8);
              *(undefined4 *)(param_5 + 0x29) = 0;
              FUN_013c5720(param_5 + 0x2a,*(undefined8 *)puVar10);
              *(undefined8 *)pfVar1 = DAT_029823b0;
              if (param_5[6] != 0) {
                FUN_027139b8(&local_850,param_5[6],0);
                memcpy(&local_730,&local_850,0x60);
                fVar33 = (float)FUN_026fd130(&local_730,0);
                if (param_5[6] != 0) {
                  FUN_027139b8(&local_850,param_5[6],0);
                  memcpy(&local_730,&local_850,0x60);
                  fVar34 = (float)FUN_026fd140(&local_730,0);
                  if (param_5[6] != 0) {
                    FUN_027139b8(&local_850,param_5[6],0);
                    memcpy(&local_730,&local_850,0x60);
                    fVar35 = (float)FUN_026fd180(&local_730,0);
                    *(undefined8 *)((long)param_5 + 0x264) = 0;
                    *(undefined8 *)((long)param_5 + 0x25c) = 0;
                    *(undefined4 *)((long)param_5 + 0x26c) = 0;
                    local_850 = local_850 & 0xffffffff00000000;
                    FUN_013c57d4(param_5 + 0x4e,&local_850,*(undefined8 *)puVar9);
                    uVar17 = DAT_029823b8;
                    *(undefined1 *)(param_5 + 0x52) = 0;
                    *(undefined8 *)((long)param_5 + 0x294) = 0;
                    *(undefined4 *)(param_5 + 0x56) = 0;
                    param_5[0x55] = uVar17;
                    lVar23 = *(long *)(param_7 + 0x68);
                    *(undefined4 *)(param_5 + 0x59) = 0xbf800000;
                    param_5[0x58] = 0;
                    *(undefined1 *)(param_5 + 0x13d) = 1;
                    param_5[0x5c] = 0;
                    memset(auStack_3b0,0,0x310);
                    FUN_027080b0(param_5,auStack_3b0,0,0,param_8);
                    memset(local_6c0,0,0x310);
                    lVar18 = param_5[4];
                    *(int *)(param_5 + 0x14a) = (int)param_5[0x14a] + 1;
                    fVar7 = DAT_028aa3e4;
                    if (lVar18 != 0) {
                      bVar5 = false;
                      local_884 = 0;
                      iVar25 = iVar25 + -1;
                      fVar33 = fVar33 - (fVar34 - fVar35);
                      uVar21 = (ulong)(uint)_LAB_028aa024;
                      local_864 = 0.0;
                      local_854 = 0.0;
                      uVar47 = 0;
                      fVar35 = param_2 + _LAB_028aa024;
                      uVar30 = 0;
                      uVar50 = 0;
                      uVar29 = 0;
                      local_858 = 0.0;
                      bVar6 = true;
                      plVar31 = (long *)Newtonsoft_Json_JsonReader_State_TypeInfo;
                      fVar34 = fVar32;
                      do {
                        fVar45 = 1.0;
                        if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_0271398c;
                        uVar14 = *(uint *)(lVar18 + (long)(int)uVar30 * 4 + 0x20);
                        fVar48 = (float)uVar50;
                        if (uVar14 == 0) {
                          if (((*(float *)(param_5 + 0x12e) - *(float *)((long)param_5 + 0x974) <=
                                DAT_02956ccc) || ((char)param_5[0x12f] != '\0')) ||
                             (((param_6 & 1) != 0 ||
                              (fVar32 = *(float *)(param_7 + 0xa8), fVar32 <= param_1)))) {
                            *(undefined1 *)(param_5 + 0x12f) = 0;
                            *(undefined1 *)(param_5 + 0x13d) = 0;
                            fVar32 = *(float *)(param_7 + 0x28);
                            fVar33 = *(float *)(param_7 + 0x30);
                            if (fVar32 <= 0.0) {
                              fVar32 = 0.0;
                            }
                            if (fVar33 <= 0.0) {
                              fVar33 = 0.0;
                            }
                            fVar33 = (fVar48 + fVar32 + fVar33) * 100.0 + 1.0;
                            fVar32 = DAT_0295880c;
                            if (fVar33 != INFINITY) {
                              fVar32 = (float)(int)fVar33 / 100.0;
                            }
                            return ZEXT416((uint)fVar32);
                          }
                          iVar25 = (int)param_5[0x14a];
                          fVar33 = (*(float *)(param_5 + 0x12e) - param_1) * 0.5;
                          if (fVar33 <= DAT_028aa298) {
                            fVar33 = DAT_028aa298;
                          }
                          fVar34 = fVar33 + param_1;
                          if (fVar32 <= fVar33 + param_1) {
                            fVar34 = fVar32;
                          }
                          *(float *)((long)param_5 + 0x974) = param_1;
LAB_027138b8:
                          auVar44._8_8_ = uVar29;
                          auVar44._0_8_ = uVar50;
                          if (0x14 < iVar25) {
                            return auVar44;
                          }
                          fVar32 = fVar34 * 20.0 + 0.5;
                          pcVar28 = *(code **)(*param_5 + 0x178);
                          uVar29 = *(undefined8 *)(*param_5 + 0x180);
                          param_1 = DAT_02958220;
                          if (fVar32 != INFINITY) {
                            param_1 = (float)(int)fVar32 / 20.0;
                          }
                          goto LAB_02713900;
                        }
                        if ((param_8 == 0) || (lVar26 = *(long *)(param_8 + 0x30), lVar26 == 0))
                        break;
                        if (*(uint *)(lVar26 + 0x18) <= *(uint *)((long)param_5 + 0x294))
                        goto LAB_0271398c;
                        lVar26 = lVar26 + (long)(int)*(uint *)((long)param_5 + 0x294) * 0x158;
                        *(undefined1 *)((long)param_5 + 0x914) = *(undefined1 *)(lVar26 + 0x28);
                        uVar15 = *(uint *)(lVar26 + 0x58);
                        lVar26 = param_5[0x131];
                        *(uint *)(param_5 + 8) = uVar15;
                        if (lVar26 == 0) break;
                        if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_0271398c;
                        param_5[6] = *(long *)(lVar26 + (long)(int)uVar15 * 0x38 + 0x28);
                        if ((uVar14 == 0x3c) && (*(char *)(param_7 + 0xad) != '\0')) {
                          *(undefined2 *)((long)param_5 + 0x914) = 0x101;
                          uVar19 = FUN_02708504(param_5,lVar18,uVar30 + 1,&local_6c4,param_7,param_8
                                               );
                          if (((uVar19 & 1) == 0) ||
                             (uVar30 = local_6c4, *(char *)((long)param_5 + 0x914) != '\x01'))
                          goto LAB_02712360;
                        }
                        else {
LAB_02712360:
                          *(undefined1 *)((long)param_5 + 0x915) = 0;
                          lVar18 = *(long *)(param_8 + 0x30);
                          if (lVar18 == 0) break;
                          if (*(uint *)(lVar18 + 0x18) <= *(uint *)((long)param_5 + 0x294))
                          goto LAB_0271398c;
                          cVar3 = *(char *)((long)param_5 + 0x914);
                          cVar24 = *(char *)(lVar18 + (long)(int)*(uint *)((long)param_5 + 0x294) *
                                                      0x158 + 0x5c);
                          if (cVar3 == '\x01') {
                            uVar16 = *(uint *)(param_5 + 0x1d);
                            if ((uVar16 >> 4 & 1) == 0) {
                              if ((uVar16 >> 3 & 1) == 0) {
                                if ((uVar16 >> 5 & 1) != 0) {
                                  if (*(int *)(*plVar31 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar19 = FUN_016f92d4(uVar14,0);
                                  if ((uVar19 & 1) != 0) {
                                    if (*(int *)(*plVar31 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar14 = FUN_016f95a8(uVar14,0);
                                    uVar14 = uVar14 & 0xffff;
                                    fVar45 = fVar7;
                                  }
                                }
                              }
                              else {
                                if (*(int *)(*plVar31 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar19 = FUN_016f9218(uVar14,0);
                                if ((uVar19 & 1) != 0) {
                                  if (*(int *)(*plVar31 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar14 = FUN_016f9724(uVar14,0);
                                  goto LAB_02712470;
                                }
                              }
                            }
                            else {
                              if (*(int *)(*plVar31 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar19 = FUN_016f92d4(uVar14,0);
                              if ((uVar19 & 1) != 0) {
                                if (*(int *)(*plVar31 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar14 = FUN_016f95a8(uVar14,0);
LAB_02712470:
                                uVar14 = uVar14 & 0xffff;
                              }
                            }
                            cVar3 = *(char *)((long)param_5 + 0x914);
                          }
                          fVar37 = (float)uVar47;
                          uVar41 = (undefined4)param_4;
                          fVar36 = (float)uVar21;
                          if (cVar3 == '\x01') {
                            lVar18 = *(long *)(param_8 + 0x30);
                            if (lVar18 == 0) break;
                            uVar15 = *(uint *)((long)param_5 + 0x294);
                            if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_0271398c;
                            lVar26 = *(long *)(lVar18 + (long)(int)uVar15 * 0x158 + 0x30);
                            param_5[0x124] = lVar26;
                            if (lVar26 == 0) goto LAB_02713508;
                            *(undefined4 *)(param_5 + 8) =
                                 *(undefined4 *)(lVar18 + (long)(int)uVar15 * 0x158 + 0x58);
                            if (param_5[6] == 0) break;
                            fVar34 = *(float *)(param_5 + 0x18);
                            FUN_027139b8(&local_850,param_5[6],0);
                            memcpy(&local_730,&local_850,0x60);
                            iVar13 = FUN_026fd110(&local_730,0);
                            if (param_5[6] == 0) break;
                            FUN_027139b8(&local_850,param_5[6],0);
                            memcpy(&local_730,&local_850,0x60);
                            fVar36 = (float)FUN_026fd120(&local_730,0);
                            fVar37 = (float)iVar13;
                            fVar36 = ((fVar45 * fVar34) / fVar37) * fVar36;
                            *(float *)((long)param_5 + 0xb4) = fVar36;
                            if (param_5[0x124] == 0) break;
                            fVar38 = *(float *)((long)param_5 + 0xbc);
                            fVar34 = (float)FUN_02720be4(param_5[0x124],0);
                            lVar18 = param_5[0x149];
                            if (lVar18 == 0) break;
                            uVar16 = *(uint *)((long)param_5 + 0x294);
                            if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_0271398c;
                            fVar36 = fVar36 * fVar38;
                            fVar34 = fVar36 * fVar34;
                            *(undefined1 *)(lVar18 + (long)(int)uVar16 * 0x158 + 0x28) = 1;
LAB_027127cc:
                            fVar38 = 0.0;
                            if (uVar14 != 0xad) {
                              fVar38 = fVar34;
                            }
                          }
                          else {
                            if (cVar3 == '\x02') {
                              lVar18 = *(long *)(param_8 + 0x30);
                              if (lVar18 != 0) {
                                if (*(uint *)(lVar18 + 0x18) <= *(uint *)((long)param_5 + 0x294))
                                goto LAB_0271398c;
                                plVar31 = *(long **)(lVar18 + (long)(int)*(uint *)((long)param_5 +
                                                                                  0x294) * 0x158 +
                                                    0x30);
                                if (plVar31 != (long *)0x0) {
                                  bVar12 = *(byte *)(*(long *)StringLiteral_10599 + 300);
                                  if ((*(byte *)(*plVar31 + 300) < bVar12) ||
                                     (*(long *)(*(long *)(*plVar31 + 200) + (ulong)bVar12 * 8 + -8)
                                      != *(long *)StringLiteral_10599)) {
                    /* WARNING: Subroutine does not return */
                                    FUN_00da544c(plVar31);
                                  }
                                  plVar20 = (long *)FUN_0271e5bc(plVar31,0);
                                  if (plVar20 == (long *)0x0) {
LAB_02712514:
                                    plVar20 = (long *)0x0;
                                  }
                                  else {
                                    bVar12 = *(byte *)(*(long *)
                                                  Method_System_Collections_Generic_List<VectorImageManager>_Add__
                                                  + 300);
                                    if (*(byte *)(*plVar20 + 300) < bVar12) goto LAB_02712514;
                                    if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar12 * 8 + -8
                                                 ) !=
                                        *(long *)
                                         Method_System_Collections_Generic_List<VectorImageManager>_Add__
                                       ) {
                                      plVar20 = (long *)0x0;
                                    }
                                  }
                                  param_5[0x15] = (long)plVar20;
                                  iVar13 = FUN_02714f64(plVar31,0);
                                  *(int *)(param_5 + 0x123) = iVar13;
                                  lVar18 = *(long *)(param_7 + 0x40);
                                  uVar2 = iVar13 + 0xe000;
                                  if (uVar14 != 0x3c) {
                                    uVar2 = uVar14;
                                  }
                                  param_5[6] = lVar18;
                                  if (lVar18 != 0) {
                                    fVar34 = *(float *)(param_5 + 0x18);
                                    FUN_027139b8(&local_850,lVar18,0);
                                    memcpy(&local_730,&local_850,0x60);
                                    iVar13 = FUN_026fd110(&local_730,0);
                                    if (*(long *)(param_7 + 0x40) != 0) {
                                      FUN_027139b8(&local_850,*(long *)(param_7 + 0x40),0);
                                      memcpy(&local_730,&local_850,0x60);
                                      fVar36 = (float)FUN_026fd120(&local_730,0);
                                      if (*(long *)(param_7 + 0x40) != 0) {
                                        FUN_027139b8(&local_850,*(long *)(param_7 + 0x40),0);
                                        memcpy(&local_730,&local_850,0x60);
                                        fVar37 = (float)FUN_026fd140(&local_730,0);
                                        lVar18 = FUN_02720bdc(plVar31,0);
                                        if (lVar18 != 0) {
                                          FUN_026fd62c(&local_850,lVar18,0);
                                          uStack_758 = uStack_848;
                                          local_760 = local_850;
                                          local_750 = (undefined4)local_840;
                                          fVar38 = (float)FUN_026fd45c(&local_760,0);
                                          fVar39 = (float)FUN_02720be4(plVar31,0);
                                          lVar18 = param_5[0x149];
                                          param_5[0x124] = (long)plVar31;
                                          if (lVar18 != 0) {
                                            uVar16 = *(uint *)((long)param_5 + 0x294);
                                            if (uVar16 < *(uint *)(lVar18 + 0x18)) {
                                              lVar26 = lVar18 + (long)(int)uVar16 * 0x158;
                                              fVar36 = (fVar34 / (float)iVar13) * fVar36;
                                              *(undefined1 *)(lVar26 + 0x28) = 2;
                                              *(float *)(lVar26 + 0x158) = fVar36;
                                              *(uint *)(param_5 + 8) = uVar15;
                                              fVar37 = fVar37 / fVar38;
                                              fVar34 = fVar36 * fVar37 * fVar39;
                                              plVar31 = (long *)
                                                  Newtonsoft_Json_JsonReader_State_TypeInfo;
                                              uVar14 = uVar2;
                                              goto LAB_027127cc;
                                            }
                                            goto LAB_0271398c;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            }
                            lVar18 = param_5[0x149];
                            fVar38 = 0.0;
                            if (uVar14 != 0xad) {
                              fVar38 = fVar34;
                            }
                            if (lVar18 == 0) break;
                            uVar16 = *(uint *)((long)param_5 + 0x294);
                          }
                          if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_0271398c;
                          *(short *)(lVar18 + (long)(int)uVar16 * 0x158 + 0x20) = (short)uVar14;
                          local_740 = 0;
                          local_738 = 0;
                          if (*(char *)(param_7 + 0xac) != '\0') {
                            if (param_5[0x124] == 0) break;
                            uVar15 = FUN_02714f64(param_5[0x124],0);
                            iVar13 = *(int *)((long)param_5 + 0x294);
                            if (iVar13 < iVar25) {
                              lVar18 = *(long *)(param_8 + 0x30);
                              if (lVar18 == 0) break;
                              if (*(uint *)(lVar18 + 0x18) <= iVar13 + 1U) goto LAB_0271398c;
                              lVar18 = *(long *)(lVar18 + (long)(int)(iVar13 + 1U) * 0x158 + 0x30);
                              if (lVar18 == 0) break;
                              iVar13 = FUN_02714f64(lVar18,0);
                              if (((param_5[6] == 0) ||
                                  (lVar18 = *(long *)(param_5[6] + 0x118), lVar18 == 0)) ||
                                 (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)) break;
                              local_850 = CONCAT44(local_850._4_4_,uVar15 | iVar13 << 0x10);
                              uVar21 = FUN_0129eff4(lVar18,&local_850,&local_790,
                                                    *(undefined8 *)StringLiteral_10025);
                              if ((uVar21 & 1) != 0) {
                                FUN_026ff8ac(&local_850,&local_790,0);
                                uStack_7a8 = uStack_848;
                                local_7b0 = local_850;
                                local_7a0 = (undefined4)local_840;
                                uVar40 = FUN_026ff710(&local_7b0,0);
                                local_740 = CONCAT44(fVar36,uVar40);
                                local_738 = CONCAT44(uVar41,fVar37);
                              }
                              iVar13 = *(int *)((long)param_5 + 0x294);
                            }
                            if (0 < iVar13) {
                              lVar18 = *(long *)(param_8 + 0x30);
                              if (lVar18 == 0) break;
                              if (*(uint *)(lVar18 + 0x18) <= (uint)((long)iVar13 + -1))
                              goto LAB_0271398c;
                              lVar18 = *(long *)(lVar18 + ((long)iVar13 + -1) * 0x158 + 0x30);
                              if (lVar18 == 0) break;
                              uVar16 = FUN_02714f64(lVar18,0);
                              if (((param_5[6] == 0) ||
                                  (lVar18 = *(long *)(param_5[6] + 0x118), lVar18 == 0)) ||
                                 (lVar18 = *(long *)(lVar18 + 0x18), lVar18 == 0)) break;
                              local_850 = CONCAT44(local_850._4_4_,uVar16 | uVar15 << 0x10);
                              uVar21 = FUN_0129eff4(lVar18,&local_850,&local_790,
                                                    *(undefined8 *)StringLiteral_10025);
                              if ((uVar21 & 1) != 0) {
                                uVar40 = (undefined4)(local_740 >> 0x20);
                                uVar21 = local_740 & 0xffffffff;
                                uVar52 = (undefined4)((ulong)local_738 >> 0x20);
                                uVar49 = (undefined4)local_738;
                                FUN_026ff8c0(&local_850,&local_790,0);
                                uStack_7a8 = uStack_848;
                                local_7b0 = local_850;
                                local_7a0 = (undefined4)local_840;
                                FUN_026ff710(&local_7b0,0);
                                uVar41 = FUN_026ff570(uVar21,0);
                                local_740 = CONCAT44(uVar40,uVar41);
                                local_738 = CONCAT44(uVar52,uVar49);
                              }
                            }
                          }
                          fVar37 = 1.0;
                          fVar36 = *(float *)(param_5 + 0x4c);
                          if (fVar36 == 0.0) {
                            fVar36 = 0.0;
                          }
                          else {
                            if ((param_5[0x124] == 0) ||
                               (lVar18 = FUN_02720bdc(param_5[0x124],0), lVar18 == 0)) break;
                            FUN_026fd62c(&local_850,lVar18,0);
                            uStack_758 = uStack_848;
                            local_760 = local_850;
                            local_750 = (undefined4)local_840;
                            fVar39 = (float)FUN_026fd454(&local_760,0);
                            if ((param_5[0x124] == 0) ||
                               (lVar18 = FUN_02720bdc(param_5[0x124],0), lVar18 == 0)) break;
                            FUN_026fd62c(&local_850,lVar18,0);
                            uStack_758 = uStack_848;
                            local_760 = local_850;
                            local_750 = (undefined4)local_840;
                            fVar42 = (float)FUN_026fd464(&local_760,0);
                            fVar36 = fVar36 * 0.5 - fVar38 * (fVar39 * 0.5 + fVar42);
                            *(float *)((long)param_5 + 0x264) =
                                 *(float *)((long)param_5 + 0x264) + fVar36;
                          }
                          if (((cVar24 == '\0') && (*(char *)((long)param_5 + 0x914) == '\x01')) &&
                             (fVar37 = 1.0, (*(byte *)(param_5 + 0x1d) & 1) != 0)) {
                            if (param_5[6] == 0) break;
                            fVar37 = (float)FUN_027140bc(param_5[6],0);
                            fVar37 = fVar37 * DAT_028aa028 + 1.0;
                          }
                          lVar18 = param_5[0x149];
                          if (lVar18 == 0) break;
                          if (*(uint *)(lVar18 + 0x18) <= *(uint *)((long)param_5 + 0x294))
                          goto LAB_0271398c;
                          *(float *)(lVar18 + (long)(int)*(uint *)((long)param_5 + 0x294) * 0x158 +
                                    0x148) =
                               (0.0 - *(float *)((long)param_5 + 0x254)) +
                               *(float *)(param_5 + 0x29);
                          if (param_5[6] == 0) break;
                          FUN_027139b8(&local_850,param_5[6],0);
                          memcpy(&local_730,&local_850,0x60);
                          fVar39 = (float)FUN_026fd140(&local_730,0);
                          if (*(char *)((long)param_5 + 0x914) == '\x01') {
                            lVar18 = param_5[0x149];
                            if (lVar18 == 0) break;
                            uVar15 = *(uint *)((long)param_5 + 0x294);
                            fVar39 = fVar39 * (fVar38 / fVar45) + *(float *)(param_5 + 0x29);
                          }
                          else {
                            lVar18 = param_5[0x149];
                            if (lVar18 == 0) break;
                            uVar15 = *(uint *)((long)param_5 + 0x294);
                            if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_0271398c;
                            fVar39 = fVar39 * *(float *)(lVar18 + (long)(int)uVar15 * 0x158 + 0x158)
                                     + *(float *)(param_5 + 0x29);
                          }
                          if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_0271398c;
                          *(float *)(lVar18 + (long)(int)uVar15 * 0x158 + 0x144) =
                               fVar39 - *(float *)((long)param_5 + 0x254);
                          fVar42 = fVar39;
                          if (fVar39 <= *(float *)(param_5 + 0x55)) {
                            fVar42 = *(float *)(param_5 + 0x55);
                          }
                          *(float *)(param_5 + 0x55) = fVar42;
                          if (param_5[6] == 0) break;
                          FUN_027139b8(&local_850,param_5[6],0);
                          memcpy(&local_730,&local_850,0x60);
                          fVar42 = (float)FUN_026fd180(&local_730,0);
                          if (*(char *)((long)param_5 + 0x914) == '\x01') {
                            fVar45 = fVar38 / fVar45;
                          }
                          else {
                            lVar18 = param_5[0x149];
                            if (lVar18 == 0) break;
                            if (*(uint *)(lVar18 + 0x18) <= *(uint *)((long)param_5 + 0x294))
                            goto LAB_0271398c;
                            fVar45 = *(float *)(lVar18 + (long)(int)*(uint *)((long)param_5 + 0x294)
                                                         * 0x158 + 0x158);
                          }
                          fVar51 = *(float *)(param_5 + 0x29);
                          fVar42 = fVar42 * fVar45 + fVar51;
                          fVar45 = fVar42;
                          if (*(float *)((long)param_5 + 0x2ac) <= fVar42) {
                            fVar45 = *(float *)((long)param_5 + 0x2ac);
                          }
                          *(float *)((long)param_5 + 0x2ac) = fVar45;
                          if ((*(ushort *)(param_5 + 0x1d) & 0x180) != 0) {
                            if (param_5[6] == 0) break;
                            FUN_027139b8(&local_850,param_5[6],0);
                            memcpy(&local_730,&local_850,0x60);
                            fVar45 = (float)FUN_026fd1c0(&local_730,0);
                            fVar51 = fVar39 - fVar51;
                            fVar39 = *(float *)(param_5 + 0x55);
                            fVar51 = fVar51 / fVar45;
                            if (fVar51 <= fVar39) {
                              fVar51 = fVar39;
                            }
                            *(float *)(param_5 + 0x55) = fVar51;
                            if (param_5[6] == 0) break;
                            fVar51 = *(float *)(param_5 + 0x29);
                            FUN_027139b8(&local_850,param_5[6],0);
                            memcpy(&local_730,&local_850,0x60);
                            fVar45 = (float)FUN_026fd1c0(&local_730,0);
                            fVar45 = (fVar42 - fVar51) / fVar45;
                            if (*(float *)((long)param_5 + 0x2ac) <= fVar45) {
                              fVar45 = *(float *)((long)param_5 + 0x2ac);
                            }
                            *(float *)((long)param_5 + 0x2ac) = fVar45;
                          }
                          if ((int)param_5[0x56] == 0) {
                            fVar45 = *(float *)(param_5 + 0x5c);
                            if (*(float *)(param_5 + 0x5c) <= fVar39) {
                              fVar45 = fVar39;
                            }
                            *(float *)(param_5 + 0x5c) = fVar45;
                          }
                          if (uVar14 == 9) {
LAB_02712d2c:
                            fVar42 = *(float *)(param_5 + 0x59);
                            fVar45 = (fVar35 - *(float *)(param_5 + 0x58)) -
                                     *(float *)((long)param_5 + 0x2c4);
                            bVar11 = true;
                            if ((fVar42 <= fVar45) && (bVar11 = false, !NAN(fVar42))) {
                              bVar11 = fVar42 == -1.0;
                            }
                            if (!bVar11) {
                              fVar45 = fVar42;
                            }
                            if (param_5[0x124] == 0) break;
                            uVar15 = *(uint *)(param_5 + 0x24);
                            local_864 = *(float *)((long)param_5 + 0x264);
                            lVar18 = FUN_02720bdc(param_5[0x124],0);
                            if (lVar18 == 0) break;
                            FUN_026fd62c(&local_850,lVar18,0);
                            uStack_758 = uStack_848;
                            local_760 = local_850;
                            local_750 = (undefined4)local_840;
                            fVar43 = (float)FUN_026fd474(&local_760,0);
                            fVar51 = DAT_028aa028;
                            fVar46 = *(float *)((long)param_5 + 0x92c);
                            fVar42 = 1.0;
                            if ((uVar15 & 0x18) != 0) {
                              fVar42 = _DAT_0294c6e8;
                            }
                            local_864 = local_864 + fVar34 * fVar43 * (1.0 - fVar46);
                            if (fVar45 * fVar42 < local_864) {
                              if ((*(char *)(param_7 + 0x78) != '\0') &&
                                 (*(int *)((long)param_5 + 0x294) != (int)param_5[0x53])) {
                                if (!(bool)(local_884 != local_6c0[0] & (bVar6 ^ 1U))) {
                                  if (((param_6 & 1) == 0) &&
                                     (fVar45 = *(float *)(param_7 + 0xa4),
                                     fVar45 < *(float *)(param_5 + 0x18))) {
                                    if (*(float *)(param_7 + 0xf8) / 100.0 <= fVar46) {
                                      iVar25 = (int)param_5[0x14a];
                                      fVar32 = (param_1 - *(float *)((long)param_5 + 0x974)) * 0.5;
                                      if (fVar32 <= DAT_028aa298) {
                                        fVar32 = DAT_028aa298;
                                      }
                                      goto LAB_027138a4;
                                    }
                                    *(undefined4 *)(param_5 + 0x14a) = 0;
                                    *(float *)((long)param_5 + 0x92c) = fVar46 + fVar51;
                                    pcVar28 = *(code **)(*param_5 + 0x178);
                                    uVar29 = *(undefined8 *)(*param_5 + 0x180);
                                    goto LAB_02713900;
                                  }
                                  if ((char)param_5[0x12f] == '\0') {
                                    *(undefined1 *)(param_5 + 0x12f) = 1;
                                  }
                                  else {
                                    bVar5 = true;
                                  }
                                }
                                local_884 = FUN_027082c8(param_5,local_6c0,param_8);
                                lVar18 = param_5[4];
                                if (lVar18 != 0) {
                                  if (*(uint *)(lVar18 + 0x18) <= local_884) goto LAB_0271398c;
                                  piVar27 = (int *)(lVar18 + (long)(int)local_884 * 4 + 0x20);
                                  if (*piVar27 == 0xad) {
                                    *piVar27 = 0x2d;
                                    uVar22 = 1;
                                    pcVar28 = *(code **)(*param_5 + 0x178);
                                    uVar29 = *(undefined8 *)(*param_5 + 0x180);
LAB_02713904:
                                    auVar44 = (*pcVar28)(param_1,param_2,param_3,param_5,uVar22,
                                                         param_7,param_8,uVar29);
                                    return auVar44;
                                  }
                                  if (0 < (int)param_5[0x56]) {
                                    lVar18 = param_5[0x55];
                                    uVar41 = *(undefined4 *)((long)param_5 + 0x97c);
                                    if (*(int *)(*(long *)PTR_DAT_033f65a0 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar21 = FUN_02720bec((int)lVar18,uVar41,0);
                                    if (((uVar21 & 1) == 0) &&
                                       (*(float *)(param_5 + 0x4b) == DAT_02958224)) {
                                      local_684 = *(float *)(param_5 + 0x55);
                                      local_658 = *(float *)((long)param_5 + 0x254) +
                                                  (local_684 - *(float *)((long)param_5 + 0x97c));
                                      *(float *)((long)param_5 + 0x254) = local_658;
                                    }
                                  }
                                  fVar45 = *(float *)((long)param_5 + 0x2ac) -
                                           *(float *)((long)param_5 + 0x254);
                                  fVar34 = *(float *)((long)param_5 + 0x2e4);
                                  if (fVar45 <= *(float *)((long)param_5 + 0x2e4)) {
                                    fVar34 = fVar45;
                                  }
                                  *(float *)((long)param_5 + 0x2e4) = fVar34;
                                  *(int *)(param_5 + 0x53) = *(int *)((long)param_5 + 0x294);
                                  fVar36 = *(float *)((long)param_5 + 0x264);
                                  if (*(char *)(param_7 + 0x78) == '\0') {
                                    fVar45 = (*(float *)(param_5 + 0x55) -
                                             *(float *)((long)param_5 + 0x254)) - fVar45;
                                    if (local_858 <= fVar45) {
                                      local_858 = fVar45;
                                    }
                                  }
                                  else {
                                    local_858 = *(float *)(param_5 + 0x5c) - fVar34;
                                  }
                                  FUN_027080b0(param_5,auStack_3b0,local_884,
                                               *(int *)((long)param_5 + 0x294) + -1,param_8);
                                  fVar34 = DAT_02958224;
                                  *(int *)(param_5 + 0x56) = (int)param_5[0x56] + 1;
                                  if (*(float *)(param_5 + 0x4b) == fVar34) {
                                    lVar18 = param_5[0x149];
                                    if (lVar18 == 0) break;
                                    if (*(uint *)(lVar18 + 0x18) <= *(uint *)((long)param_5 + 0x294)
                                       ) goto LAB_0271398c;
                                    lVar18 = lVar18 + (long)(int)*(uint *)((long)param_5 + 0x294) *
                                                      0x158;
                                    fVar37 = *(float *)(lVar18 + 0x144) - *(float *)(lVar18 + 0x148)
                                    ;
                                    fVar34 = *(float *)((long)param_5 + 0x254);
                                    fVar45 = fVar32 * (fVar33 + *(float *)(param_7 + 0xbc) +
                                                      *(float *)(param_5 + 0x130));
                                    *(float *)((long)param_5 + 0x254) =
                                         fVar34 + fVar37 + (0.0 - *(float *)((long)param_5 + 0x2ac))
                                                  + fVar45;
                                    *(float *)((long)param_5 + 0x97c) = fVar37;
                                  }
                                  else {
                                    fVar45 = *pfVar1;
                                    *pfVar1 = fVar45 + *(float *)(param_5 + 0x4b) +
                                                       fVar32 * *(float *)(param_7 + 0xbc);
                                    fVar34 = fVar32;
                                  }
                                  param_4 = (ulong)(uint)fVar34;
                                  uVar47 = (ulong)(uint)fVar45;
                                  uVar50 = (ulong)(uint)(fVar48 + fVar36);
                                  uVar29 = 0;
                                  param_5[0x55] = uVar17;
                                  *(float *)((long)param_5 + 0x264) =
                                       *(float *)((long)param_5 + 0x26c) + 0.0;
                                  uVar21 = uVar17;
                                  fVar34 = fVar38;
                                  uVar30 = local_884;
                                  goto LAB_02713508;
                                }
                                break;
                              }
                              if (((param_6 & 1) == 0) &&
                                 (fVar45 = *(float *)(param_7 + 0xa4), fVar45 < param_1)) {
                                if (*(float *)(param_7 + 0xf8) / 100.0 <= fVar46) {
                                  iVar25 = (int)param_5[0x14a];
                                  fVar32 = (param_1 - *(float *)((long)param_5 + 0x974)) * 0.5;
                                  if (fVar32 <= DAT_028aa298) {
                                    fVar32 = DAT_028aa298;
                                  }
LAB_027138a4:
                                  uVar29 = 0;
                                  fVar34 = param_1 - fVar32;
                                  if (param_1 - fVar32 <= fVar45) {
                                    fVar34 = fVar45;
                                  }
                                  *(float *)(param_5 + 0x12e) = param_1;
                                  goto LAB_027138b8;
                                }
                                *(undefined4 *)(param_5 + 0x14a) = 0;
                                *(float *)((long)param_5 + 0x92c) = fVar46 + fVar51;
                                pcVar28 = *(code **)(*param_5 + 0x178);
                                uVar29 = *(undefined8 *)(*param_5 + 0x180);
LAB_02713900:
                                uVar22 = 0;
                                goto LAB_02713904;
                              }
                            }
                          }
                          else {
                            if (*(int *)(*plVar31 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar21 = FUN_016f68bc(uVar14,0);
                            if (((uVar14 != 0x200b) && ((uVar21 & 1) == 0)) ||
                               (*(char *)((long)param_5 + 0x914) == '\x02')) goto LAB_02712d2c;
                          }
                          if (0 < (int)param_5[0x56]) {
                            lVar18 = param_5[0x55];
                            uVar41 = *(undefined4 *)((long)param_5 + 0x97c);
                            if (*(int *)(*(long *)PTR_DAT_033f65a0 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar21 = FUN_02720bec((int)lVar18,uVar41,0);
                            if ((((uVar21 & 1) == 0) && (*(float *)(param_5 + 0x4b) == DAT_02958224)
                                ) && ((char)param_5[0x5d] != '\x01')) {
                              local_684 = *(float *)(param_5 + 0x55) -
                                          *(float *)((long)param_5 + 0x97c);
                              local_658 = *(float *)((long)param_5 + 0x254) + local_684;
                              local_684 = *(float *)((long)param_5 + 0x97c) + local_684;
                              *(float *)((long)param_5 + 0x254) = local_658;
                              *(float *)((long)param_5 + 0x97c) = local_684;
                            }
                          }
                          if (uVar14 == 9) {
                            if (param_5[6] == 0) break;
                            FUN_027139b8(&local_850,param_5[6],0);
                            memcpy(&local_730,&local_850,0x60);
                            fVar34 = (float)FUN_026fd208(&local_730,0);
                            uVar29 = 0;
                            if (param_5[6] == 0) break;
                            bVar12 = FUN_027140dc(param_5[6],0);
                            fVar37 = *(float *)((long)param_5 + 0x264);
                            fVar42 = fVar38 * fVar34 * (float)bVar12;
                            fVar34 = (float)(int)(fVar37 / fVar42);
                            param_4 = (ulong)(uint)(fVar37 + fVar42);
                            fVar36 = fVar42 * fVar34;
                            fVar45 = fVar36;
                            if (fVar36 <= fVar37) {
                              fVar45 = fVar37 + fVar42;
                            }
                            uVar15 = 9;
LAB_02713078:
                            uVar50 = (ulong)(uint)fVar48;
                            uVar47 = (ulong)(uint)fVar34;
                            uVar21 = (ulong)(uint)fVar36;
                            *(float *)((long)param_5 + 0x264) = fVar45;
LAB_0271307c:
                            if (*(int *)((long)param_5 + 0x294) == iVar25) {
                              bVar11 = false;
                              goto LAB_027130ac;
                            }
                          }
                          else {
                            fVar34 = *(float *)(param_5 + 0x4c);
                            fVar45 = *(float *)((long)param_5 + 0x264);
                            if (fVar34 == 0.0) {
                              if ((param_5[0x124] == 0) ||
                                 (lVar18 = FUN_02720bdc(param_5[0x124],0), lVar18 == 0)) break;
                              FUN_026fd62c(&local_850,lVar18,0);
                              uStack_758 = uStack_848;
                              local_760 = local_850;
                              local_750 = (undefined4)local_840;
                              fVar36 = (float)FUN_026fd474(&local_760,0);
                              if (param_5[6] == 0) break;
                              fVar43 = *(float *)(param_7 + 0xb4);
                              fVar34 = (float)FUN_0271409c(param_5[6],0);
                              fVar42 = (float)FUN_026ff560(&local_740,0);
                              fVar51 = *(float *)((long)param_5 + 0x92c);
                              fVar34 = fVar37 * fVar36 + fVar43 + fVar34;
                              fVar37 = 1.0 - fVar51;
                              fVar36 = (*(float *)((long)param_5 + 0x25c) +
                                       fVar38 * (fVar34 + fVar42)) * fVar37;
                            }
                            else {
                              if (param_5[6] == 0) break;
                              fVar43 = *(float *)(param_7 + 0xb4);
                              fVar42 = (float)FUN_0271409c(param_5[6],0);
                              fVar51 = *(float *)((long)param_5 + 0x92c);
                              fVar34 = fVar34 - fVar36;
                              fVar37 = 1.0 - fVar51;
                              fVar36 = fVar37 * (*(float *)((long)param_5 + 0x25c) +
                                                fVar34 + fVar38 * (fVar43 + fVar42));
                            }
                            param_4 = (ulong)(uint)fVar34;
                            uVar47 = (ulong)(uint)fVar51;
                            uVar21 = (ulong)(uint)fVar37;
                            *(float *)((long)param_5 + 0x264) = fVar45 + fVar36;
                            if (*(int *)(*plVar31 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar19 = FUN_016f68bc(uVar14,0);
                            uVar29 = 0;
                            if ((uVar14 == 0x200b) || ((uVar19 & 1) != 0)) {
                              uVar21 = (ulong)(uint)*(float *)((long)param_5 + 0x264);
                              *(float *)((long)param_5 + 0x264) =
                                   *(float *)((long)param_5 + 0x264) +
                                   fVar38 * *(float *)(param_7 + 0xb8);
                            }
                            uVar15 = uVar14;
                            if (uVar14 != 10) {
                              if (uVar14 == 0xd) {
                                fVar36 = *(float *)((long)param_5 + 0x26c);
                                fVar45 = fVar48 + *(float *)((long)param_5 + 0x264);
                                fVar48 = 0.0;
                                uVar29 = 0;
                                fVar34 = local_854;
                                if (local_854 <= fVar45) {
                                  fVar34 = fVar45;
                                }
                                fVar45 = fVar36 + 0.0;
                                local_854 = fVar34;
                                goto LAB_02713078;
                              }
                              goto LAB_0271307c;
                            }
                            bVar11 = true;
LAB_027130ac:
                            if (0 < (int)param_5[0x56]) {
                              lVar18 = param_5[0x55];
                              uVar41 = *(undefined4 *)((long)param_5 + 0x97c);
                              if (*(int *)(*(long *)PTR_DAT_033f65a0 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar21 = FUN_02720bec((int)lVar18,uVar41,0);
                              if (((uVar21 & 1) == 0) &&
                                 (*(float *)(param_5 + 0x4b) == DAT_02958224)) {
                                *(float *)((long)param_5 + 0x254) =
                                     *(float *)((long)param_5 + 0x254) +
                                     (*(float *)(param_5 + 0x55) - *(float *)((long)param_5 + 0x97c)
                                     );
                              }
                            }
                            iVar13 = *(int *)((long)param_5 + 0x294);
                            *(int *)(param_5 + 0x53) = iVar13 + 1;
                            fVar45 = *(float *)((long)param_5 + 0x2ac) -
                                     *(float *)((long)param_5 + 0x254);
                            fVar48 = local_864 + (float)uVar50;
                            param_4 = (ulong)(uint)fVar48;
                            fVar34 = *(float *)((long)param_5 + 0x2e4);
                            if (fVar45 <= *(float *)((long)param_5 + 0x2e4)) {
                              fVar34 = fVar45;
                            }
                            uVar21 = (ulong)(uint)fVar34;
                            fVar45 = local_854;
                            if (local_854 <= fVar48) {
                              fVar45 = fVar48;
                            }
                            bVar4 = (bool)(bVar11 & iVar13 != iVar25);
                            fVar48 = 0.0;
                            if (!bVar4) {
                              fVar48 = fVar45;
                            }
                            uVar29 = 0;
                            uVar50 = (ulong)(uint)fVar48;
                            fVar48 = fVar45;
                            if (!bVar4) {
                              fVar48 = local_854;
                            }
                            uVar47 = (ulong)(uint)fVar48;
                            local_858 = *(float *)(param_5 + 0x5c) - fVar34;
                            *(float *)((long)param_5 + 0x2e4) = fVar34;
                            if (bVar11) {
                              FUN_027080b0(param_5,auStack_3b0,uVar30,iVar13,param_8);
                              FUN_027080b0(param_5,local_6c0,uVar30,
                                           *(undefined4 *)((long)param_5 + 0x294),param_8);
                              fVar34 = DAT_02958224;
                              *(int *)(param_5 + 0x56) = (int)param_5[0x56] + 1;
                              if (*(float *)(param_5 + 0x4b) == fVar34) {
                                fVar36 = *(float *)((long)param_5 + 0x254) +
                                         fVar39 + (0.0 - *(float *)((long)param_5 + 0x2ac)) +
                                         fVar32 * (fVar33 + *(float *)(param_7 + 0xbc) +
                                                   *(float *)(param_7 + 0xc0) +
                                                  *(float *)(param_5 + 0x130));
                                fVar34 = *(float *)((long)param_5 + 0x254);
                                fVar45 = fVar32;
                              }
                              else {
                                fVar45 = *pfVar1;
                                fVar36 = fVar45 + *(float *)(param_5 + 0x4b) +
                                                  fVar32 * (*(float *)(param_7 + 0xbc) +
                                                           *(float *)(param_7 + 0xc0));
                                fVar34 = fVar32;
                              }
                              param_4 = (ulong)(uint)fVar45;
                              uVar47 = (ulong)(uint)fVar34;
                              *(float *)((long)param_5 + 0x254) = fVar36;
                              param_5[0x55] = uVar17;
                              *(float *)((long)param_5 + 0x97c) = fVar39;
                              *(int *)((long)param_5 + 0x294) = *(int *)((long)param_5 + 0x294) + 1;
                              *(float *)((long)param_5 + 0x264) =
                                   *(float *)(param_5 + 0x4d) + 0.0 +
                                   *(float *)((long)param_5 + 0x26c);
                              uVar21 = (ulong)(uint)*(float *)((long)param_5 + 0x26c);
                              fVar34 = fVar38;
                              local_854 = fVar48;
                              goto LAB_02713508;
                            }
                            uVar29 = 0;
                            uVar50 = (ulong)(uint)fVar45;
                          }
                          if ((*(char *)(param_7 + 0x78) != '\0') ||
                             ((*(uint *)(param_7 + 0x74) | 2) == 3)) {
                            if (*(int *)(*plVar31 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar19 = FUN_016f68bc(uVar14,0);
                            if ((((((uVar19 & 1) == 0) && (uVar15 != 0x2d)) && (uVar15 != 0x200b))
                                && (uVar15 != 0xad)) || (*(char *)((long)param_5 + 0x2e9) != '\0'))
                            {
LAB_02713258:
                              if ((((((uVar15 - 0xff01 < 0xee) || (uVar15 - 0xfe31 < 0x1e)) ||
                                    ((uVar15 - 0xf901 < 0x1fe ||
                                     ((uVar15 - 0xac01 < 0x2bfe || (uVar15 - 0xa961 < 0x1e)))))) ||
                                   (uVar15 - 0x1101 < 0xfe)) || (uVar15 - 0x2e81 < 0x717e)) &&
                                 (*(char *)((long)param_5 + 0x2e9) != '\x01')) {
                                if (bVar5 || bVar6) goto LAB_027134dc;
                                if (((lVar23 == 0) || (lVar18 = FUN_0271b2a8(lVar23,0), lVar18 == 0)
                                    ) || (lVar18 = FUN_027299d8(lVar18,0), lVar18 == 0)) break;
                                local_850 = CONCAT44(local_850._4_4_,uVar15);
                                uVar19 = FUN_012ddcec(lVar18,&local_850,
                                                      *(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_11__
                                                  );
                                if (((uVar19 & 1) == 0) &&
                                   (*(int *)((long)param_5 + 0x294) < iVar25)) {
                                  lVar18 = FUN_0271b2a8(lVar23,0);
                                  if (lVar18 == 0) break;
                                  lVar18 = FUN_02729d74(lVar18,0);
                                  lVar26 = param_5[0x149];
                                  if (lVar26 == 0) break;
                                  uVar14 = *(int *)((long)param_5 + 0x294) + 1;
                                  if (*(uint *)(lVar26 + 0x18) <= uVar14) goto LAB_0271398c;
                                  if (lVar18 == 0) break;
                                  local_850 = CONCAT44(local_850._4_4_,
                                                       (uint)*(ushort *)
                                                              (lVar26 + (long)(int)uVar14 * 0x158 +
                                                              0x20));
                                  uVar19 = FUN_012ddcec(lVar18,&local_850,
                                                        *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_UIElements_ComputedTransitionUtils_<>c_<ConvertTransitionFunction>b__12_11__
                                                  );
                                  if ((uVar19 & 1) == 0) goto LAB_027134dc;
                                }
                                bVar6 = false;
                              }
                              else {
                                if (bVar6) {
                                  cVar24 = '\x01';
                                }
                                else {
                                  cVar24 = (char)param_5[0x12f];
                                }
                                if (cVar24 != '\0' || bVar5) {
                                  FUN_027080b0(param_5,local_6c0,uVar30,
                                               *(undefined4 *)((long)param_5 + 0x294),param_8);
                                }
                              }
                            }
                            else {
                              if (0x202e < (int)uVar15) {
                                if (uVar15 != 0x202f) {
                                  uVar14 = 0x2060;
                                  goto LAB_027134d4;
                                }
                                goto LAB_02713258;
                              }
                              if (uVar15 == 0xa0) goto LAB_02713258;
                              uVar14 = 0x2011;
LAB_027134d4:
                              if (uVar15 == uVar14) goto LAB_02713258;
LAB_027134dc:
                              FUN_027080b0(param_5,local_6c0,uVar30,
                                           *(undefined4 *)((long)param_5 + 0x294),param_8);
                              bVar6 = false;
                              *(undefined1 *)(param_5 + 0x12f) = 0;
                            }
                          }
                          *(int *)((long)param_5 + 0x294) = *(int *)((long)param_5 + 0x294) + 1;
                          fVar34 = fVar38;
                        }
LAB_02713508:
                        lVar18 = param_5[4];
                        uVar30 = uVar30 + 1;
                      } while (lVar18 != 0);
                    }
                  }
                }
              }
            }
          }
          goto LAB_02713988;
        }
      }
    }
    if (DAT_03774d77 == '\0') {
      thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__);
      DAT_03774d77 = '\x01';
    }
    return ZEXT416(**(uint **)(*(long *)
                                Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                              + 0xb8));
  }
LAB_02713988:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


