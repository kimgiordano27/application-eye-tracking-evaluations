/*
FUNCTION_NAME: FUN_0676329c
ENTRY_POINT: 0676329c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0676329c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_50 [8];
  undefined8 local_48;
  
  puVar2 = Unity_Entities_TypeManager_SharedTypeIndex<WFX_BulletHoleDecal>_TypeInfo;
  local_48 = param_2;
  if ((DAT_073a14e8 & 1) == 0) {
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WFX_BulletHoleDecal>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f988b8);
    FUN_02fe925c(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WFX_Demo>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    DAT_073a14e8 = 1;
  }
  lVar6 = *(long *)puVar2;
  local_50[0] = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar6 = *(long *)puVar2;
  }
  FUN_06668eb0(local_50,0,**(undefined8 **)(lVar6 + 0xb8),0);
  if (*(long *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar6 = FUN_067946d0(*(long *)(param_1 + 0x270),0);
  if (lVar6 == 0) {
LAB_067633f8:
    if (*(long *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar8 = FUN_06794718(*(long *)(param_1 + 0x270),param_5,0);
    plVar1 = (long *)(param_1 + 0x278);
    *(undefined8 *)(param_1 + 0x278) = uVar8;
    thunk_FUN_03048534(plVar1);
    FUN_06726080(param_1,*(undefined8 *)(param_1 + 0x278),0);
    lVar6 = *plVar1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    local_150 = *(undefined8 *)(lVar6 + 0x48);
    uStack_158 = *(undefined8 *)(lVar6 + 0x40);
    uStack_160 = *(undefined8 *)(lVar6 + 0x38);
    uStack_168 = *(undefined8 *)(lVar6 + 0x30);
    local_170 = *(undefined8 *)(lVar6 + 0x28);
    local_c0 = local_170;
    uStack_b8 = uStack_168;
    uStack_b0 = uStack_160;
    uStack_a8 = uStack_158;
    local_a0 = local_150;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_06916814(param_5,*(undefined8 *)
                          OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,&local_170,
                 0);
    lVar6 = *plVar1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    local_180 = *(undefined8 *)(lVar6 + 0x48);
    uStack_188 = *(undefined8 *)(lVar6 + 0x40);
    uStack_190 = *(undefined8 *)(lVar6 + 0x38);
    uStack_198 = *(undefined8 *)(lVar6 + 0x30);
    local_1a0 = *(undefined8 *)(lVar6 + 0x28);
    FUN_06916814(param_5,*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,&local_1a0,0);
  }
  else {
    if (*(long *)(param_1 + 0x270) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar6 = FUN_067946d0(*(long *)(param_1 + 0x270),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    local_a0 = *(undefined8 *)(lVar6 + 0x48);
    uStack_a8 = *(undefined8 *)(lVar6 + 0x40);
    uStack_b0 = *(undefined8 *)(lVar6 + 0x38);
    uStack_b8 = *(undefined8 *)(lVar6 + 0x30);
    local_c0 = *(undefined8 *)(lVar6 + 0x28);
    FUN_06911464(&local_e8,2,0);
    uStack_138 = uStack_e0;
    local_140 = local_e8;
    uStack_128 = uStack_d0;
    uStack_130 = uStack_d8;
    local_120 = local_c8;
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    local_f0 = local_a0;
    uVar7 = FUN_069119bc(&local_110,&local_140,0);
    if ((uVar7 & 1) != 0) goto LAB_067633f8;
  }
  lVar6 = *(long *)(param_1 + 0x290);
  if (lVar6 != 0) {
    local_a0 = *(undefined8 *)(lVar6 + 0x48);
    uStack_a8 = *(undefined8 *)(lVar6 + 0x40);
    uStack_b0 = *(undefined8 *)(lVar6 + 0x38);
    uStack_b8 = *(undefined8 *)(lVar6 + 0x30);
    local_c0 = *(undefined8 *)(lVar6 + 0x28);
    FUN_06911464(&local_e8,2,0);
    uStack_1f8 = uStack_e0;
    local_200 = local_e8;
    uStack_1e8 = uStack_d0;
    uStack_1f0 = uStack_d8;
    local_1e0 = local_c8;
    uStack_1c8 = uStack_b8;
    local_1d0 = local_c0;
    uStack_1b8 = uStack_a8;
    uStack_1c0 = uStack_b0;
    local_1b0 = local_a0;
    uVar7 = FUN_069119bc(&local_1d0,&local_200,0);
    if ((uVar7 & 1) == 0) goto LAB_06763780;
  }
  local_60 = *(undefined4 *)(param_3 + 6);
  uStack_78 = param_3[3];
  local_80 = param_3[2];
  uStack_68 = param_3[5];
  uStack_70 = param_3[4];
  uStack_88 = param_3[1];
  local_90 = *param_3;
  FUN_068e47d0(&local_90,0,0);
  FUN_068e47ec(&local_90,0,0);
  FUN_068e4844(&local_90,0,0);
  puVar2 = System_Collections_Generic_List<TypeName>_TypeInfo;
  if ((1 < (int)uStack_88) && (iVar4 = FUN_06900970(0), iVar4 != 0)) {
    uVar7 = FUN_06760480(param_1,param_6);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar7 = FUN_0674de10(0);
      if (((uVar7 & 1) == 0) || (uVar7 = FUN_069009c0(0), (uVar7 & 1) == 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = *(int *)(param_1 + 0x2f0) != 1;
      }
      FUN_068e4844(&local_90,bVar3,0);
    }
    else {
      FUN_068e4844(&local_90,1,0);
    }
  }
  iVar4 = FUN_069005b0(0);
  if ((iVar4 == 8) || (iVar4 = FUN_069005b0(0), iVar4 == 0xb)) {
    FUN_068e4844(&local_90,0,0);
  }
  FUN_068e40b4(&local_90,0,0);
  uStack_78 = CONCAT44(0x5c,(undefined4)uStack_78);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  plVar1 = (long *)(param_1 + 0x290);
  FUN_06748f48(0,plVar1,&local_90,0,1,0,1,
               *(undefined8 *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo,0);
  uVar8 = FUN_069005b0(0);
  if ((int)uVar8 == 2) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar8 = FUN_06748f48(0,(long *)(param_1 + 0x2a0),&local_90,0,1,0,1,
                         *(undefined8 *)
                          Unity_Entities_TypeManager_SharedTypeIndex<WFX_Demo>_TypeInfo,0);
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar6 = *(long *)(param_1 + 0x2a0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    local_210 = *(undefined8 *)(lVar6 + 0x48);
    uStack_218 = *(undefined8 *)(lVar6 + 0x40);
    uStack_220 = *(undefined8 *)(lVar6 + 0x38);
    uStack_228 = *(undefined8 *)(lVar6 + 0x30);
    local_230 = *(undefined8 *)(lVar6 + 0x28);
    uVar9 = *(undefined8 *)(*plVar1 + 0x58);
    local_c0 = local_230;
    uStack_b8 = uStack_228;
    uStack_b0 = uStack_220;
    uStack_a8 = uStack_218;
    local_a0 = local_210;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(uVar8,uVar9);
    }
    FUN_06916814(param_5,uVar9,&local_230,0);
  }
  else {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    local_240 = *(undefined8 *)(lVar6 + 0x48);
    uStack_248 = *(undefined8 *)(lVar6 + 0x40);
    uStack_250 = *(undefined8 *)(lVar6 + 0x38);
    uStack_258 = *(undefined8 *)(lVar6 + 0x30);
    local_260 = *(undefined8 *)(lVar6 + 0x28);
    local_c0 = local_260;
    uStack_b8 = uStack_258;
    uStack_b0 = uStack_250;
    uStack_a8 = uStack_248;
    local_a0 = local_240;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8(uVar8,*(undefined8 *)(lVar6 + 0x58));
    }
    FUN_06916814(param_5,*(undefined8 *)(lVar6 + 0x58),&local_260,0);
  }
  *(undefined4 *)((long)param_3 + 0x1c) = uStack_78._4_4_;
  uVar5 = FUN_068e416c(&local_90,0);
  FUN_068e41c8(param_3,uVar5,0);
LAB_06763780:
  FUN_06668eb4(local_50,0);
  if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0691ff78(&local_48,param_5,0);
  if (param_5 != 0) {
    FUN_0691250c(param_5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


