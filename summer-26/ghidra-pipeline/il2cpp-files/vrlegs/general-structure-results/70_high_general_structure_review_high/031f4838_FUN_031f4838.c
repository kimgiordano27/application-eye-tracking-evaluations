/*
FUNCTION_NAME: FUN_031f4838
ENTRY_POINT: 031f4838
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_031f4838(int *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  long lVar14;
  byte bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  char *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  int *piVar31;
  uint uVar32;
  short sVar33;
  long lVar34;
  int *piVar35;
  uint uVar36;
  long lVar37;
  uint *puVar38;
  int iVar39;
  long *__src;
  int iVar40;
  long lVar41;
  undefined8 uVar42;
  uint uVar43;
  byte bVar44;
  ulong uVar45;
  undefined8 *puVar46;
  uint local_504;
  uint local_4f8;
  int local_4e4;
  long local_4d0;
  uint local_4c4;
  uint local_49c;
  long local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 auStack_470 [128];
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined1 auStack_398 [144];
  undefined4 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_164;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
                    /* try { // try from 031f4840 to 032f4843 has its CatchHandler @ 031f4908 */
                    /* try { // try from 031f4844 to 032f484b has its CatchHandler @ 031f4904 */
  lVar30 = tpidr_el0;
  local_68 = *(long *)(lVar30 + 0x28);
  if ((DAT_0412c4c4 & 1) == 0) {
    FUN_01ab69ac(System_Numerics_Vector<ushort>_TypeInfo);
    FUN_01ab69ac(System_Numerics_Vector<ulong>_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_TypeInfo);
    FUN_01ab69ac(System_WeakReference<Camera>_TypeInfo);
    FUN_01ab69ac(System_WeakReference<NetworkSceneManagerBase>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd8350);
    FUN_01ab69ac(PTR_DAT_03cd8348);
    FUN_01ab69ac(UnityEngine_Events_UnityEvent<FVRPhysicsRig>_TypeInfo);
    FUN_01ab69ac(System_WeakReference<RegexReplacement>_TypeInfo);
    FUN_01ab69ac(Unity_Properties_TypeConverter<sbyte,_char>_TypeInfo);
    FUN_01ab69ac(System_WeakReference<SslStream>_TypeInfo);
    FUN_01ab69ac(System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd83a0);
    FUN_01ab69ac(Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
    FUN_01ab69ac(Unity_Properties_TypeConverter<sbyte,_string>_TypeInfo);
    FUN_01ab69ac(Unity_Properties_TypeConverter<sbyte,_ulong>_TypeInfo);
    FUN_01ab69ac(Unity_Properties_TypeConverter<string,_byte>_TypeInfo);
    FUN_01ab69ac(Unity_Properties_TypeConverter<ushort,_uint>_TypeInfo);
    FUN_01ab69ac(System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
    DAT_0412c4c4 = 1;
  }
  local_164 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  local_1e0 = 0;
  local_218 = 0;
  local_220 = 0;
  local_278 = 0;
  local_280 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  lStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_308 = 0;
  if (*(int *)(*(long *)PTR_DAT_03cd83a0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar13 = PTR_DAT_03cd8348;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar9 = *(long *)(param_2 + 0x28);
  lVar34 = *(long *)(param_2 + 0x30);
  if (lVar34 == 0) {
    local_504 = 0;
  }
  else {
    local_504 = *(uint *)(lVar34 + 0x18);
  }
  uVar32 = 0;
  if (lVar9 != 0) {
    uVar32 = *(uint *)(lVar9 + 0x18);
  }
  iVar5 = param_1[10];
  iVar7 = param_1[0xb];
  iVar6 = param_1[0xd];
  iVar8 = param_1[0xe];
  piVar31 = param_1 + 2;
  iVar11 = *piVar31;
  iVar10 = *param_1;
  piVar35 = param_1 + 1;
  iVar12 = *piVar35;
  lStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  lStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  FUN_031f2110(&local_160,iVar5 + 1,iVar7 + uVar32,iVar6 + local_504);
  __src = (long *)(param_1 + 8);
  if (*__src != 0) {
    memcpy(auStack_398,__src,0x80);
    FUN_031f2274(&local_160,auStack_398);
  }
  local_164 = 0;
  memcpy(&local_1d0,(void *)(param_2 + 0x68),0x60);
  FUN_031e20fc(&local_3f0,param_2,0);
  uStack_1e8 = uStack_3e8;
  local_1f0 = local_3f0;
  local_1e0 = local_3e0;
  lVar29 = *(long *)(param_2 + 0x50);
  FUN_021f786c(&local_210,2,0,*(undefined8 *)puVar13);
  if (0 < (int)local_504) {
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar45 = 0;
    uVar43 = 0xffffffff;
    local_498 = 0;
    plVar1 = (long *)(param_1 + 0x2c);
    local_4f8 = 0xffffffff;
    local_49c = 0xffffffff;
    do {
      lVar14 = lStack_138;
      if (*(uint *)(lVar34 + 0x18) <= uVar45) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar37 = lVar34 + uVar45 * 0x58;
      puVar38 = (uint *)(lVar37 + 0x58);
      uVar36 = *puVar38;
      uVar28 = uVar36 & 0xc;
      puVar46 = (undefined8 *)(lVar37 + 0x20);
      if ((uVar43 == 0xffffffff) && (uVar28 == 8)) {
        memmove(&local_3f0,puVar46,0x58);
        uVar26 = thunk_FUN_01a6ca08(UnityEngine_Events_UnityAction<SelectEnterEventArgs>_TypeInfo);
        uVar26 = thunk_FUN_01a89a98(uVar26,&local_3f0);
        uVar27 = thunk_FUN_01a6ca08(System_Net_WebCompletionSource<WebResponseStream>_TypeInfo);
        uVar26 = FUN_025b4d3c(uVar27,uVar26,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar27 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar27,uVar26,0);
        uVar26 = thunk_FUN_01a6ca08(FluffyUnderware_DevTools_WeightedRandom<int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar27,uVar26);
      }
      lVar37 = local_498;
      uVar17 = local_49c;
      if (uVar28 != 8) {
        if (lVar29 == 0) {
          uVar26 = *(undefined8 *)(lVar34 + uVar45 * 0x58 + 0x50);
          uVar23 = FUN_025be440(uVar26,0);
          if ((uVar23 & 1) == 0) {
            uVar17 = FUN_031e72f4(param_2,uVar26,0);
            if (uVar17 != 0xffffffff) goto LAB_031f4bec;
            lVar37 = 0;
          }
          else {
            lVar37 = 0;
            uVar17 = 0xffffffff;
          }
        }
        else {
          uVar17 = 0;
LAB_031f4bec:
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar37 = *(long *)(lVar9 + (long)(int)uVar17 * 8 + 0x20);
        }
      }
      uVar36 = uVar36 & 4;
      uVar2 = iVar6 + (int)uVar45;
      lVar41 = *(long *)(lVar34 + uVar45 * 0x58 + 0x60);
      uVar4 = uVar2;
      local_4c4 = uVar17;
      local_4d0 = lVar37;
      if (uVar36 == 0) {
        uVar4 = uVar43;
        local_4c4 = local_49c;
        local_4d0 = local_498;
      }
      if (lVar41 == 0) {
        lVar41 = *(long *)(lVar34 + uVar45 * 0x58 + 0x30);
      }
      uVar23 = FUN_025be440(lVar41,0);
      if ((uVar23 & 1) == 0) {
        bVar15 = lVar37 == 0;
        if ((uVar36 == 0) && (lVar37 != 0)) {
          lVar24 = *(long *)(*(long *)Unity_Properties_TypeConverter<sbyte,_string>_TypeInfo + 0x20)
          ;
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = FUN_01a46ff8();
          }
          pcVar25 = (char *)thunk_FUN_01a59484(param_1 + 0x2e,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80));
          if (*pcVar25 != '\0') {
            FUN_022412e0(param_1 + 0x2e,&local_3f0,
                         *(undefined8 *)Unity_Properties_TypeConverter<sbyte,_ulong>_TypeInfo);
            memcpy(&local_270,&local_3f0,0x58);
            uVar23 = FUN_031f37f0(&local_270,puVar46,1);
            if ((uVar23 & 1) == 0) goto LAB_031f4cc8;
          }
          lVar24 = *(long *)(*(long *)Unity_Properties_TypeConverter<sbyte,_string>_TypeInfo + 0x20)
          ;
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = FUN_01a46ff8();
          }
          pcVar25 = (char *)thunk_FUN_01a59484(&local_1d0,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80));
          if (*pcVar25 != '\0') {
            FUN_022412e0(&local_1d0,&local_3f0,
                         *(undefined8 *)Unity_Properties_TypeConverter<sbyte,_ulong>_TypeInfo);
            memcpy(&local_270,&local_3f0,0x58);
            uVar23 = FUN_031f37f0(&local_270,puVar46,1);
            if ((uVar23 & 1) == 0) goto LAB_031f4cc8;
          }
          lVar24 = *(long *)(*(long *)Unity_Properties_TypeConverter<sbyte,_string>_TypeInfo + 0x20)
          ;
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = FUN_01a46ff8();
          }
          pcVar25 = (char *)thunk_FUN_01a59484(lVar37 + 0x50,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80));
          if (*pcVar25 == '\0') {
            bVar15 = 0;
          }
          else {
            FUN_022412e0(lVar37 + 0x50,&local_3f0,
                         *(undefined8 *)Unity_Properties_TypeConverter<sbyte,_ulong>_TypeInfo);
            memcpy(&local_270,&local_3f0,0x58);
            bVar15 = FUN_031f37f0(&local_270,puVar46,1);
            bVar15 = bVar15 ^ 1;
          }
        }
        iVar19 = 0;
        iVar40 = 0;
        if ((uVar36 == 0) && ((bVar15 & 1) == 0)) {
          iVar40 = (int)local_210;
          lVar24 = *(long *)(*(long *)Unity_Properties_TypeConverter<string,_bool>_TypeInfo + 0x20);
          iVar19 = param_1[0xe];
          if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
            lVar24 = FUN_01a46ff8();
          }
          pcVar25 = (char *)thunk_FUN_01a59484(&local_1f0,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar24 + 0xc0) + 8) + 0x80));
          iVar40 = iVar40 + iVar19;
          if (*pcVar25 == '\0') {
            if (*(int *)(*(long *)PTR_DAT_03cd83a0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar19 = FUN_01f8bcd4(lVar41,&local_210,
                                  *(undefined8 *)
                                   System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo
                                 );
          }
          else {
            FUN_022412e0(&local_1f0,&local_d8,
                         *(undefined8 *)Unity_Properties_TypeConverter<string,_byte>_TypeInfo);
            local_280 = local_d8;
            local_278 = local_d0;
            if ((int)((ulong)local_d0 >> 0x20) < 1) {
              iVar19 = 0;
            }
            else {
              iVar19 = 0;
              iVar21 = 0;
              do {
                FUN_02068f90(&local_280,iVar21,&local_c8,
                             *(undefined8 *)
                              System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
                if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if (*(int *)(local_c8 + 0xe8) != -1) {
                  iVar18 = FUN_01f889a8(local_c8,lVar41,0,&local_210,
                                        *(undefined8 *)
                                         System_WeakReference<RegexReplacement>_TypeInfo);
                  iVar19 = iVar18 + iVar19;
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < local_278._4_4_);
            }
          }
        }
        if ((bVar15 & 1) == 0) {
          lVar41 = *(long *)(lVar34 + uVar45 * 0x58 + 0x70);
          if (lVar41 == 0) {
            lVar41 = *(long *)(lVar34 + uVar45 * 0x58 + 0x40);
          }
          uVar23 = FUN_025be440(lVar41,0);
          if ((uVar23 & 1) == 0) {
            iVar21 = FUN_01f86c5c(param_1,**(undefined8 **)
                                            (*(long *)System_WeakReference<SslStream>_TypeInfo +
                                            0xb8),lVar41,param_1 + 0x2a,param_1,param_2,puVar46,
                                  *(undefined8 *)
                                   System_WeakReference<NetworkSceneManagerBase>_TypeInfo);
            if (iVar21 == -1) {
              local_4e4 = 0;
            }
            else {
              local_4e4 = *param_1 - iVar21;
            }
          }
          else {
            local_4e4 = 0;
            iVar21 = -1;
          }
          if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar23 = FUN_025be440(*(undefined8 *)(lVar37 + 0x30),0);
          iVar18 = iVar21;
          if (((uVar23 & 1) == 0) &&
             (iVar20 = FUN_01f86c5c(param_1,**(undefined8 **)
                                              (*(long *)System_WeakReference<SslStream>_TypeInfo +
                                              0xb8),*(undefined8 *)(lVar37 + 0x30),param_1 + 0x2a,
                                    param_1,param_2,puVar46,
                                    *(undefined8 *)
                                     System_WeakReference<NetworkSceneManagerBase>_TypeInfo),
             iVar20 != -1)) {
            iVar18 = iVar20;
            if (iVar21 != -1) {
              iVar18 = iVar21;
            }
            local_4e4 = (local_4e4 - iVar20) + *param_1;
          }
          lVar41 = *(long *)(lVar34 + uVar45 * 0x58 + 0x68);
          if (lVar41 == 0) {
            lVar41 = *(long *)(lVar34 + uVar45 * 0x58 + 0x38);
          }
          uVar23 = FUN_025be440(lVar41,0);
          if ((uVar23 & 1) == 0) {
            iVar21 = FUN_01f86c5c(param_1,**(undefined8 **)
                                            (*(long *)
                                              Unity_Properties_TypeConverter<sbyte,_char>_TypeInfo +
                                            0xb8),lVar41,param_1 + 0x28,piVar31,param_2,puVar46,
                                  *(undefined8 *)System_WeakReference<Camera>_TypeInfo);
            if (iVar21 == -1) {
              iVar20 = 0;
            }
            else {
              iVar20 = *piVar31 - iVar21;
            }
          }
          else {
            iVar20 = 0;
            iVar21 = -1;
          }
          uVar23 = FUN_025be440(*(undefined8 *)(lVar37 + 0x38),0);
          iVar39 = iVar21;
          if (((uVar23 & 1) == 0) &&
             (iVar22 = FUN_01f86c5c(param_1,**(undefined8 **)
                                              (*(long *)
                                                Unity_Properties_TypeConverter<sbyte,_char>_TypeInfo
                                              + 0xb8),*(undefined8 *)(lVar37 + 0x38),param_1 + 0x28,
                                    piVar31,param_2,puVar46,
                                    *(undefined8 *)System_WeakReference<Camera>_TypeInfo),
             iVar22 != -1)) {
            iVar39 = iVar22;
            if (iVar21 != -1) {
              iVar39 = iVar21;
            }
            iVar20 = (iVar20 - iVar22) + *piVar31;
          }
          if (uVar36 == 0) {
            if (uVar4 != 0xffffffff && uVar28 != 8) {
              uVar43 = 0xffffffff;
              local_4f8 = 0xffffffff;
              local_4d0 = 0;
              local_164 = 0;
              local_4c4 = 0xffffffff;
              goto LAB_031f5344;
            }
          }
          else {
            uVar26 = FUN_031f5ecc(puVar46,param_2);
            local_4f8 = FUN_01f28110(plVar1,piVar35,uVar26,10,
                                     *(undefined8 *)
                                      UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_TypeInfo
                                    );
            iVar40 = (int)local_210 + param_1[0xe];
            local_49c = uVar17;
            local_498 = lVar37;
            uVar43 = uVar2;
          }
        }
        else {
          local_4e4 = 0;
          iVar20 = 0;
          iVar18 = -1;
          iVar39 = -1;
          local_49c = local_4c4;
          local_498 = local_4d0;
          uVar43 = uVar4;
        }
        if (((iVar19 < 1) || (uVar28 != 8)) || (uVar43 == 0xffffffff)) {
          local_4c4 = local_49c;
          local_4d0 = local_498;
          goto LAB_031f5344;
        }
        uVar23 = FUN_025be440(*puVar46,0);
        if ((uVar23 & 1) != 0) {
          memmove(&local_3f0,puVar46,0x58);
          uVar26 = thunk_FUN_01a6ca08(UnityEngine_Events_UnityAction<SelectEnterEventArgs>_TypeInfo)
          ;
          uVar26 = thunk_FUN_01a89a98(uVar26,&local_3f0);
          lVar30 = *plVar1;
          if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar30 + 0x18) <= local_4f8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          uVar42 = *(undefined8 *)(lVar30 + (long)(int)local_4f8 * 8 + 0x20);
          uVar27 = thunk_FUN_01a6ca08(
                                     UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Rect,_FloatField,_float>_TypeInfo
                                     );
          uVar26 = FUN_025be86c(uVar27,uVar26,uVar42,0);
          thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
          uVar27 = thunk_FUN_01a89e68();
          FUN_0276a4a8(uVar27,uVar26,0);
          uVar26 = thunk_FUN_01a6ca08(FluffyUnderware_DevTools_WeightedRandom<int>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar27,uVar26);
        }
        lVar41 = *plVar1;
        if (lVar41 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar41 + 0x18) <= local_4f8) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar16 = FUN_031f615c(*(undefined8 *)(lVar41 + (long)(int)local_4f8 * 8 + 0x20),*puVar46,
                              &local_164);
        pbVar3 = (byte *)(lVar14 + (long)(int)uVar43 * 0x20);
        FUN_031f1730(pbVar3,iVar19 + (uint)*pbVar3);
        uVar28 = (uint)*(ushort *)(pbVar3 + 6);
        if (uVar28 == 0xffff) {
          uVar28 = 0xffffffff;
        }
      }
      else {
LAB_031f4cc8:
        iVar40 = 0;
        iVar20 = 0;
        local_4e4 = 0;
        iVar19 = 0;
        iVar39 = -1;
        iVar18 = -1;
        uVar43 = uVar4;
LAB_031f5344:
        uVar28 = uVar17 + iVar7;
        if (uVar17 == 0xffffffff) {
          uVar28 = 0xffffffff;
        }
        uVar16 = 0xff;
        local_49c = local_4c4;
        local_498 = local_4d0;
      }
      uStack_78 = 0;
      local_80 = 0;
      uStack_88 = 0;
      local_90 = 0;
      FUN_031f169c(&local_90,iVar40);
      FUN_031f1730(&local_90,iVar19);
      FUN_031f17d0(&local_90,iVar39);
      FUN_031f1874(&local_90,iVar20);
      FUN_031f1914(&local_90,iVar18);
      FUN_031f19b8(&local_90,local_4e4);
      local_90._0_5_ =
           CONCAT14(*(byte *)puVar38 & 8 | local_90._4_1_ & 0xf3 | (byte)uVar36,(undefined4)local_90
                   );
      local_90 = CONCAT35(CONCAT21(local_90._6_2_,uVar16),(undefined5)local_90);
      FUN_031f1a58(&local_90,uVar28);
      uVar28 = local_4f8;
      if (uVar36 == 0) {
        uVar28 = uVar43;
      }
      FUN_031f1b9c(&local_90,uVar28);
      FUN_031f1afc(&local_90,param_1[10]);
      if (lVar37 == 0) {
        bVar15 = 0;
      }
      else {
        uVar23 = FUN_031e0d34(lVar37,0);
        bVar15 = 0x20;
        if ((uVar23 & 1) == 0) {
          bVar15 = 0;
        }
      }
      local_90._0_5_ = CONCAT14(local_90._4_1_ & 0xdf | bVar15,(undefined4)local_90);
      puVar46 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 0x20);
      puVar46[1] = uStack_88;
      *puVar46 = local_90;
      puVar46[3] = uStack_78;
      puVar46[2] = local_80;
      uVar45 = uVar45 + 1;
    } while (uVar45 != local_504);
  }
  iVar40 = (int)local_210;
  iVar19 = param_1[0xe];
  if ((int)local_150 == param_1[2]) {
    iVar21 = *piVar35;
    if ((uStack_148._4_4_ == *piVar35) &&
       (iVar21 = uStack_148._4_4_, (int)uStack_148 == iVar19 + (int)local_210)) goto LAB_031f5934;
  }
  else {
    iVar21 = *piVar35;
  }
  uStack_298 = 0;
  local_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2f8 = 0;
  local_300 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  FUN_031f2110(&local_300,uStack_158 & 0xffffffff,uStack_158._4_4_,local_150._4_4_,
               iVar19 + (int)local_210,param_1[2],iVar21);
  memcpy(auStack_470,&local_160,0x80);
  FUN_031f2274(&local_300,auStack_470);
  if (local_160 != 0) {
    FUN_0366b81c(local_160,4,0);
  }
  memcpy(&local_160,&local_300,0x80);
  iVar19 = param_1[0xe];
LAB_031f5934:
  local_218 = CONCAT44(iVar19,(undefined4)local_218);
  uStack_488 = uStack_208;
  local_490 = local_210;
  uStack_478 = uStack_1f8;
  uStack_480 = uStack_200;
  FUN_01f27bd4(param_1 + 6,(long)&local_218 + 4,&local_490,10,
               *(undefined8 *)System_Numerics_Vector<ushort>_TypeInfo);
  if (0 < (int)local_504) {
    uVar45 = 0;
    do {
      iVar19 = iVar6 + (int)uVar45;
      pbVar3 = (byte *)(lStack_138 + (long)iVar19 * 0x20);
      uVar23 = (ulong)*pbVar3;
      if (uVar23 != 0) {
        lVar34 = (ulong)*(ushort *)(pbVar3 + 0xe) << 2;
        do {
          uVar23 = uVar23 - 1;
          *(int *)(lVar34 + local_100) = iVar19;
          lVar34 = lVar34 + 4;
        } while (uVar23 != 0);
      }
      uVar45 = uVar45 + 1;
    } while (uVar45 != local_504);
  }
  lVar34 = (long)param_1[0xc];
  if (param_1[0xc] < (int)local_150) {
    lVar29 = lVar34 * 0x30;
    do {
      lVar34 = lVar34 + 1;
      *(undefined1 *)((undefined2 *)(lVar29 + local_130) + 1) = 1;
      *(undefined2 *)(lVar29 + local_130) = 0xffff;
      lVar29 = lVar29 + 0x30;
    } while (lVar34 < (int)local_150);
  }
  if (0 < (int)uVar32) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar43 = 0;
    iVar19 = param_1[0xd];
    do {
      lVar34 = local_140;
      if (*(uint *)(lVar9 + 0x18) <= uVar43) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar29 = *(long *)(lVar9 + (long)(int)uVar43 * 8 + 0x20);
      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar28 = uVar43 + iVar7;
      *(uint *)(lVar29 + 0xc0) = uVar28;
      *(short *)(local_110 + (long)(int)(uVar28 * 2) * 2) = (short)iVar19;
      if ((int)local_504 < 1) {
        iVar21 = 0;
        sVar33 = 0;
        iVar18 = -1;
      }
      else {
        sVar33 = 0;
        iVar21 = 0;
        iVar18 = -1;
        uVar45 = (ulong)local_504;
        iVar20 = iVar6;
        do {
          pbVar3 = (byte *)(lStack_138 + (long)iVar20 * 0x20);
          uVar36 = (uint)*(ushort *)(pbVar3 + 6);
          if (uVar36 == 0xffff) {
            uVar36 = 0xffffffff;
          }
          if ((uVar36 == uVar28) && ((pbVar3[4] >> 3 & 1) == 0)) {
            sVar33 = sVar33 + 1;
            iVar39 = iVar20;
            if (iVar18 != -1) {
              iVar39 = iVar18;
            }
            *(short *)(lStack_108 + (long)iVar19 * 2) = (short)iVar20;
            iVar19 = iVar19 + 1;
            iVar18 = iVar39;
            if ((pbVar3[4] >> 2 & 1) == 0) {
              iVar21 = iVar21 + (uint)*pbVar3;
            }
            else if (*pbVar3 != 0) {
              iVar21 = iVar21 + 1;
            }
          }
          uVar45 = uVar45 - 1;
          iVar20 = iVar20 + 1;
        } while (uVar45 != 0);
      }
      *(short *)(local_110 + (long)(int)(uVar28 * 2 | 1) * 2) = sVar33;
      iVar39 = *(int *)(lVar29 + 0x18);
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      FUN_031f1d94(&local_c0,iVar5);
      uVar26 = local_c0;
      iVar20 = 0;
      if (iVar18 != -1) {
        iVar20 = iVar18;
      }
      bVar15 = local_c0._1_1_ & 0xd9;
      bVar44 = 4;
      if (iVar39 == 2 || iVar21 < 2) {
        bVar44 = 0;
      }
      local_c0._0_6_ = CONCAT24(0xffff,(undefined4)local_c0);
      uStack_a8._0_4_ = CONCAT22(0xffff,(undefined2)uStack_a8);
      local_c0._0_2_ =
           CONCAT11((iVar39 == 2) << 1 | (iVar39 == 1) << 5 | bVar44 | bVar15,(char)uVar26);
      FUN_031f1e80(&local_c0,iVar20);
      puVar46 = (undefined8 *)(lVar34 + (long)(int)uVar28 * 0x30);
      uVar43 = uVar43 + 1;
      puVar46[3] = uStack_a8;
      puVar46[2] = local_b0;
      puVar46[5] = uStack_98;
      puVar46[4] = local_a0;
      puVar46[1] = uStack_b8;
      *puVar46 = local_c0;
    } while (uVar43 != uVar32);
  }
  piVar31 = (int *)(lStack_e8 + (long)iVar5 * 0x30);
  iVar19 = param_1[1];
  iVar21 = param_1[2];
  iVar18 = *param_1;
  *piVar31 = iVar7;
  piVar31[1] = uVar32;
  piVar31[2] = iVar8;
  piVar31[3] = iVar40;
  piVar31[4] = iVar6;
  piVar31[5] = local_504;
  piVar31[6] = iVar11;
  piVar31[7] = iVar21 - iVar11;
  piVar31[8] = iVar10;
  piVar31[9] = iVar18 - iVar10;
  piVar31[10] = iVar12;
  piVar31[0xb] = iVar19 - iVar12;
  *(int *)(param_2 + 0x58) = iVar5;
  local_218 = CONCAT44(local_218._4_4_,param_1[10]);
  FUN_01f28110(param_1 + 4,&local_218,param_2,4,
               *(undefined8 *)System_Numerics_Vector<ulong>_TypeInfo);
  if (*__src != 0) {
    FUN_0366b81c(*__src,4,0);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *__src = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  memcpy(__src,&local_160,0x80);
  HurricaneVR_Framework_Components_HVRDestroyTimer_<Cleanup>d__1__System_Collections_IEnumerator_Reset
            (&local_210,*(undefined8 *)PTR_DAT_03cd8350);
  if (*(long *)(lVar30 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


