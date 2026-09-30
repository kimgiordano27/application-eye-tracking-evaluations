/*
FUNCTION_NAME: FUN_07f812b0
ENTRY_POINT: 07f812b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_07f812b0(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
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
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_TryGetValue__;
  if ((DAT_0899b4f8 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_get_Item__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_TryGetValue__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_set_Item__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Clear__
                );
    FUN_03a8a718(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
                );
    DAT_0899b4f8 = 1;
  }
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_set_Item__
  ;
  uVar5 = FUN_0586dd30(param_5 + 8,param_6[1],*(undefined8 *)puVar1);
  if ((uVar5 & 1) == 0) {
    iVar3 = FUN_07f6d97c(param_5);
    iVar4 = FUN_07f6d97c(param_6);
    if (iVar3 == iVar4) {
      fVar13 = (float)FUN_07f6da6c(param_5);
      fVar12 = (float)FUN_07f6da6c(param_6);
      if (fVar13 != fVar12) goto LAB_07f81740;
      fVar13 = (float)FUN_07f6dabc(param_5);
      fVar12 = (float)FUN_07f6dabc(param_6);
      if (fVar13 != fVar12) goto LAB_07f81740;
      iVar3 = FUN_07f6db0c(param_5);
      iVar4 = FUN_07f6db0c(param_6);
      if (iVar3 != iVar4) goto LAB_07f81740;
      iVar3 = FUN_07f6da1c(param_5);
      iVar4 = FUN_07f6da1c(param_6);
      if (iVar3 != iVar4) goto LAB_07f81740;
      iVar3 = FUN_07f6dbac(param_5);
      iVar4 = FUN_07f6dbac(param_6);
      if (iVar3 != iVar4) goto LAB_07f81740;
      uVar6 = FUN_07f6d870(param_5);
      uVar7 = FUN_07f6d870(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6dbfc(param_5);
      uVar7 = FUN_07f6dbfc(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6e14c(param_5);
      uVar7 = FUN_07f6e14c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6e310(param_5);
      uVar7 = FUN_07f6e310(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6db5c(param_5);
      uVar7 = FUN_07f6db5c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6ec24(param_5);
      uVar7 = FUN_07f6ec24(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6dfbc(param_5);
      uVar7 = FUN_07f6dfbc(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6e00c(param_5);
      uVar7 = FUN_07f6e00c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6e05c(param_5);
      uVar7 = FUN_07f6e05c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6e0ac(param_5);
      uVar7 = FUN_07f6e0ac(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6dc9c(param_5);
      uVar7 = FUN_07f6dc9c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6dcec(param_5);
      uVar7 = FUN_07f6dcec(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6dd3c(param_5);
      uVar7 = FUN_07f6dd3c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6dd8c(param_5);
      uVar7 = FUN_07f6dd8c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      iVar3 = FUN_07f6e0fc(param_5);
      iVar4 = FUN_07f6e0fc(param_6);
      if (iVar3 != iVar4) goto LAB_07f81740;
      iVar3 = FUN_07f6d194(param_5);
      iVar4 = FUN_07f6d194(param_6);
      if (iVar3 != iVar4) goto LAB_07f81740;
      iVar3 = FUN_07f6d1e4(param_5);
      iVar4 = FUN_07f6d1e4(param_6);
      if (iVar3 != iVar4) goto LAB_07f81740;
      iVar3 = FUN_07f6d234(param_5);
      iVar4 = FUN_07f6d234(param_6);
      if (iVar3 != iVar4) goto LAB_07f81740;
      uVar6 = FUN_07f6d9cc(param_5);
      uVar7 = FUN_07f6d9cc(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6dddc(param_5);
      uVar7 = FUN_07f6dddc(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6de2c(param_5);
      uVar7 = FUN_07f6de2c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81740;
      uVar6 = FUN_07f6de7c(param_5);
      uVar7 = FUN_07f6de7c(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      uVar8 = 0x28;
      if ((uVar5 & 1) == 0) {
        uVar6 = FUN_07f6decc(param_5);
        uVar7 = FUN_07f6decc(param_6);
        uVar5 = FUN_07e228e8(uVar6,uVar7,0);
        if ((uVar5 & 1) == 0) {
          uVar8 = 0x20;
        }
      }
    }
    else {
LAB_07f81740:
      uVar8 = 0x28;
    }
    fVar13 = (float)FUN_07f6d594(param_5);
    fVar12 = (float)FUN_07f6d594(param_6);
    if (fVar13 == fVar12) {
      fVar13 = (float)FUN_07f6d638(param_5);
      fVar12 = (float)FUN_07f6d638(param_6);
      if (fVar13 == fVar12) {
        fVar13 = (float)FUN_07f6d6dc(param_5);
        fVar12 = (float)FUN_07f6d6dc(param_6);
        uVar9 = 0x928;
        if (fVar13 == fVar12) {
          fVar13 = (float)FUN_07f6d820(param_5);
          fVar12 = (float)FUN_07f6d820(param_6);
          uVar9 = uVar8;
          if (fVar13 != fVar12) {
            uVar9 = 0x928;
          }
        }
        goto LAB_07f817c8;
      }
    }
    uVar9 = 0x928;
  }
  else {
    uVar9 = 0x20;
  }
LAB_07f817c8:
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Clear__;
  uVar5 = FUN_0586d834(param_5,*param_6,*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    fVar10 = (float)FUN_07f6d8c0(param_5);
    fVar12 = param_4;
    fVar15 = param_2;
    fVar14 = param_3;
    fVar11 = (float)FUN_07f6d8c0(param_6);
    fVar13 = DAT_015c561c;
    fVar15 = param_2 - fVar15;
    param_3 = param_3 - fVar14;
    param_4 = param_4 - fVar12;
    param_2 = param_4 * param_4;
    uVar8 = uVar9 | 0x2000;
    if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 <
        DAT_015c561c) {
      uVar8 = uVar9;
    }
    if ((uVar8 & 0x8080808) == 0) {
      uVar6 = FUN_07f6e614(param_5);
      uVar7 = FUN_07f6e614(param_6);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
      }
      uVar5 = FUN_07c9c218(uVar6,uVar7,0);
      if ((uVar5 & 1) == 0) {
        iVar3 = FUN_07f6ea40(param_5);
        iVar4 = FUN_07f6ea40(param_6);
        if (iVar3 == iVar4) {
          uVar6 = FUN_07f6a05c(param_5);
          uVar7 = FUN_07f6a05c(param_6);
          uVar5 = FUN_07e228e8(uVar6,uVar7,0);
          if ((uVar5 & 1) == 0) {
            auVar16 = FUN_07f6e664(param_5);
            auVar17 = FUN_07f6e664(param_6);
            uVar5 = FUN_07de75a8(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
            if ((uVar5 & 1) == 0) {
              iVar3 = FUN_07f6ebd4(param_5);
              iVar4 = FUN_07f6ebd4(param_6);
              if (iVar3 == iVar4) {
                iVar3 = FUN_07f6e6b8(param_5);
                iVar4 = FUN_07f6e6b8(param_6);
                if (iVar3 == iVar4) {
                  fVar12 = (float)FUN_07f6eae4(param_5);
                  fVar15 = (float)FUN_07f6eae4(param_6);
                  if (fVar12 == fVar15) {
                    uVar6 = FUN_07f6dc4c(param_5);
                    uVar7 = FUN_07f6dc4c(param_6);
                    uVar5 = FUN_07e228e8(uVar6,uVar7,0);
                    if ((uVar5 & 1) == 0) {
                      uVar6 = FUN_07f6ec74(param_5);
                      uVar7 = FUN_07f6ec74(param_6);
                      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
                      if ((uVar5 & 1) == 0) {
                        iVar3 = FUN_07f6e5c4(param_5);
                        iVar4 = FUN_07f6e5c4(param_6);
                        if (iVar3 == iVar4) {
                          uVar6 = FUN_07f6e758(param_5);
                          uVar7 = FUN_07f6e758(param_6);
                          uVar5 = FUN_07e228e8(uVar6,uVar7,0);
                          if ((uVar5 & 1) == 0) goto LAB_07f81a04;
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
LAB_07f81a04:
    if ((uVar8 >> 0xb & 1) == 0) {
      FUN_07f6e2a8(&local_1c0,param_5);
      FUN_07f6e2a8(local_9c,param_6);
      local_c0[0] = local_1c0;
      local_e0[0] = local_9c[0];
      uVar6 = local_9c[0];
      param_2 = fStack_1b4;
      uVar5 = FUN_07e48da0(local_c0,local_e0,0);
      param_3 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
        iVar3 = FUN_07f6e988(param_5);
        iVar4 = FUN_07f6e988(param_6);
        if (iVar3 == iVar4) {
          fVar10 = (float)FUN_07f6ea90(param_5);
          fVar12 = param_4;
          fVar15 = param_2;
          fVar14 = param_3;
          fVar11 = (float)FUN_07f6ea90(param_6);
          fVar15 = param_2 - fVar15;
          param_3 = param_3 - fVar14;
          param_4 = param_4 - fVar12;
          param_2 = param_4 * param_4;
          if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15
              < fVar13) goto LAB_07f81ac8;
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_07f81ac8:
    iVar3 = FUN_07f6eb84(param_5);
    iVar4 = FUN_07f6eb84(param_6);
    uVar9 = uVar8;
    if (iVar3 != iVar4) {
      uVar9 = uVar8 | 0x100800;
    }
  }
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>__ctor__;
  uVar5 = FUN_0586e728(param_5 + 0x18,param_6[3],*(undefined8 *)puVar1);
  uVar8 = uVar9;
  if ((uVar5 & 1) == 0) {
    auVar16 = FUN_07f6e204(param_5);
    auVar17 = FUN_07f6e204(param_6);
    uVar5 = FUN_07e23414(auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_,0);
    if ((uVar5 & 1) == 0) {
      FUN_07f6e19c(&local_1c0,param_5);
      FUN_07f6e19c(local_9c,param_6);
      local_100[0] = local_1c0;
      local_120[0] = local_9c[0];
      uVar6 = local_9c[0];
      uVar5 = FUN_07e22f88(local_100,local_120,0);
      param_2 = (float)uVar6;
      if ((uVar5 & 1) == 0) {
        FUN_07f6e508(&local_1c0,param_5);
        FUN_07f6e508(local_9c,param_6);
        local_140[0] = local_1c0;
        local_160[0] = local_9c[0];
        uVar6 = local_9c[0];
        uVar5 = FUN_07e27684(local_140,local_160,0);
        param_2 = (float)uVar6;
        if ((uVar5 & 1) == 0) {
          FUN_07f6e360(&local_1c0,param_5);
          FUN_07f6e360(local_9c,param_6);
          local_180[0] = local_1c0;
          local_170 = local_1b0;
          local_1a0[0] = local_9c[0];
          local_190 = local_8c;
          uVar5 = FUN_07e26fe8(local_180,local_1a0,0);
          param_2 = (float)local_9c[0];
          uVar8 = uVar9 | 0x200;
          if ((uVar5 & 1) == 0) {
            uVar8 = uVar9;
          }
          goto LAB_07f81be4;
        }
      }
    }
    uVar8 = uVar9 | 0x200;
  }
LAB_07f81be4:
  puVar1 = Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_get_Item__
  ;
  uVar5 = FUN_0586ec10(param_5 + 0x20,param_6[4],*(undefined8 *)puVar2);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_07de5260(param_5,param_6,0);
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar8 | 0x8000;
    }
  }
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_GetEnumerator__
  ;
  uVar5 = FUN_0586f10c(param_5 + 0x28,param_6[5],*(undefined8 *)puVar1);
  if ((uVar5 & 1) == 0) {
    if ((uVar8 >> 0xd & 1) == 0) {
      fVar10 = (float)FUN_07f6d284(param_5);
      fVar12 = param_4;
      fVar15 = param_2;
      fVar14 = param_3;
      fVar11 = (float)FUN_07f6d284(param_6);
      fVar13 = DAT_015c561c;
      fVar15 = param_2 - fVar15;
      param_3 = param_3 - fVar14;
      param_4 = param_4 - fVar12;
      param_2 = param_4 * param_4;
      if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 <
          DAT_015c561c) {
        fVar10 = (float)FUN_07f6d4a0(param_5);
        fVar12 = param_4;
        fVar15 = param_2;
        fVar14 = param_3;
        fVar11 = (float)FUN_07f6d4a0(param_6);
        fVar15 = param_2 - fVar15;
        param_3 = param_3 - fVar14;
        param_4 = param_4 - fVar12;
        param_2 = param_4 * param_4;
        if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 <
            fVar13) {
          fVar10 = (float)FUN_07f6d5e4(param_5);
          fVar12 = param_4;
          fVar15 = param_2;
          fVar14 = param_3;
          fVar11 = (float)FUN_07f6d5e4(param_6);
          fVar15 = param_2 - fVar15;
          param_3 = param_3 - fVar14;
          param_4 = param_4 - fVar12;
          param_2 = param_4 * param_4;
          if (param_2 + param_3 * param_3 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15
              < fVar13) {
            fVar10 = (float)FUN_07f6d688(param_5);
            fVar12 = param_4;
            fVar15 = param_2;
            fVar14 = param_3;
            fVar11 = (float)FUN_07f6d688(param_6);
            fVar15 = param_2 - fVar15;
            param_3 = param_3 - fVar14;
            param_4 = param_4 - fVar12;
            param_2 = param_4 * param_4;
            if (param_2 + param_3 * param_3 +
                          (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 < fVar13) {
              fVar10 = (float)FUN_07f6d72c(param_5);
              fVar12 = param_4;
              fVar15 = param_2;
              fVar14 = param_3;
              fVar11 = (float)FUN_07f6d72c(param_6);
              fVar15 = param_2 - fVar15;
              param_3 = param_3 - fVar14;
              param_4 = param_4 - fVar12;
              param_2 = param_4 * param_4;
              if (param_2 + param_3 * param_3 +
                            (fVar10 - fVar11) * (fVar10 - fVar11) + fVar15 * fVar15 < fVar13)
              goto LAB_07f81e00;
            }
          }
        }
      }
      uVar8 = uVar8 | 0x2000;
    }
LAB_07f81e00:
    if ((uVar8 >> 0xb & 1) == 0) {
      FUN_07f6d2d8(&local_1c0,param_5);
      FUN_07f6d2d8(auStack_200,param_6);
      local_1e0[0] = local_1c0;
      param_2 = local_1b0;
      uVar5 = FUN_07de3fd4(local_1e0,auStack_200,0);
      if ((uVar5 & 1) == 0) {
        auVar16 = FUN_07f6d338(param_5);
        auVar17 = FUN_07f6d338(param_6);
        uVar5 = FUN_07db40c4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                             auVar17._8_8_ & 0xffffffff,0);
        if ((uVar5 & 1) == 0) {
          auVar16 = FUN_07f6d390(param_5);
          auVar17 = FUN_07f6d390(param_6);
          uVar5 = FUN_07db40c4(auVar16._0_8_,auVar16._8_8_ & 0xffffffff,auVar17._0_8_,
                               auVar17._8_8_ & 0xffffffff,0);
          if ((uVar5 & 1) == 0) {
            uVar6 = FUN_07f6d3e8(param_5);
            uVar7 = FUN_07f6d3e8(param_6);
            uVar5 = FUN_07db49d8(uVar6,uVar7,0);
            if ((uVar5 & 1) == 0) {
              FUN_07f6d438(&local_1c0,param_5);
              FUN_07f6d438(auStack_234,param_6);
              local_220[0] = local_1c0;
              local_210 = local_1b0;
              uVar5 = FUN_07db4ec0(local_220,auStack_234,0);
              if ((uVar5 & 1) == 0) goto LAB_07f81f10;
            }
          }
        }
      }
      uVar8 = uVar8 | 0x800;
    }
LAB_07f81f10:
    uVar6 = FUN_07f6d4f4(param_5);
    uVar7 = FUN_07f6d4f4(param_6);
    uVar5 = FUN_07e228e8(uVar6,uVar7,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = FUN_07f6d544(param_5);
      uVar7 = FUN_07f6d544(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81f88;
      uVar6 = FUN_07f6d780(param_5);
      uVar7 = FUN_07f6d780(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      if ((uVar5 & 1) != 0) goto LAB_07f81f88;
      uVar6 = FUN_07f6d7d0(param_5);
      uVar7 = FUN_07f6d7d0(param_6);
      uVar5 = FUN_07e228e8(uVar6,uVar7,0);
      uVar9 = uVar8 | 0x880;
      if ((uVar5 & 1) == 0) {
        uVar9 = uVar8;
      }
    }
    else {
LAB_07f81f88:
      uVar9 = uVar8 | 0x880;
    }
    fVar13 = (float)FUN_07f6df1c(param_5);
    fVar12 = (float)FUN_07f6df1c(param_6);
    uVar8 = uVar9 | 0x1000;
    if (fVar13 == fVar12) {
      uVar8 = uVar9;
    }
    iVar3 = FUN_07f6df6c(param_5);
    iVar4 = FUN_07f6df6c(param_6);
    if (iVar3 != iVar4) {
      uVar8 = uVar8 | 0x48;
    }
  }
  uVar5 = FUN_0586e22c(param_5 + 0x10,param_6[2],*(undefined8 *)puVar2);
  if ((uVar5 & 1) != 0) {
    return uVar8;
  }
  if ((uVar8 & 0x808) == 0) {
    iVar3 = FUN_07f6e938(param_5);
    iVar4 = FUN_07f6e938(param_6);
    if (iVar3 == iVar4) {
      iVar3 = FUN_07f6e258(param_5);
      iVar4 = FUN_07f6e258(param_6);
      if (iVar3 == iVar4) {
        fVar13 = (float)FUN_07f6e898(param_5);
        fVar12 = (float)FUN_07f6e898(param_6);
        if (fVar13 == fVar12) {
          FUN_07f6e9d8(&local_1c0,param_5);
          FUN_07f6e9d8(auStack_264,param_6);
          local_250[0] = local_1c0;
          local_240 = local_1b0;
          uVar5 = FUN_07e482dc(local_250,auStack_264,0);
          if ((uVar5 & 1) == 0) goto LAB_07f8208c;
        }
      }
    }
    uVar8 = uVar8 | 0x808;
  }
LAB_07f8208c:
  fVar14 = (float)FUN_07f6e570(param_5);
  fVar13 = param_4;
  fVar12 = param_2;
  fVar15 = param_3;
  fVar10 = (float)FUN_07f6e570(param_6);
  uVar9 = uVar8 | 0x2000;
  if ((param_4 - fVar13) * (param_4 - fVar13) +
      (param_3 - fVar15) * (param_3 - fVar15) +
      (fVar14 - fVar10) * (fVar14 - fVar10) + (param_2 - fVar12) * (param_2 - fVar12) < DAT_015c561c
     ) {
    uVar9 = uVar8;
  }
  if ((uVar9 >> 0xb & 1) == 0) {
    iVar3 = FUN_07f6e708(param_5);
    iVar4 = FUN_07f6e708(param_6);
    if (iVar3 == iVar4) {
      iVar3 = FUN_07f6e7a8(param_5);
      iVar4 = FUN_07f6e7a8(param_6);
      if (iVar3 == iVar4) {
        iVar3 = FUN_07f6e7f8(param_5);
        iVar4 = FUN_07f6e7f8(param_6);
        if (iVar3 == iVar4) {
          iVar3 = FUN_07f6e848(param_5);
          iVar4 = FUN_07f6e848(param_6);
          if (iVar3 == iVar4) {
            iVar3 = FUN_07f6e8e8(param_5);
            iVar4 = FUN_07f6e8e8(param_6);
            if (iVar3 == iVar4) {
              iVar3 = FUN_07f6eb34(param_5);
              iVar4 = FUN_07f6eb34(param_6);
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


