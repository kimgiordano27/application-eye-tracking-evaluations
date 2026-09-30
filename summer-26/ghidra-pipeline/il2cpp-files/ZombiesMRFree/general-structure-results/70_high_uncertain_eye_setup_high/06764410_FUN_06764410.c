/*
FUNCTION_NAME: FUN_06764410
ENTRY_POINT: 06764410
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06764410(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
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
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = PTR_DAT_06f6d618;
  if ((DAT_073a14ef & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(System_Collections_Generic_List<TypeName>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WFX_Demo_DeleteAfterDelay>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<TweenBase>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<WFX_Demo_New>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<VisualizeMesh>_TypeInfo);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<RTSBuildingManager>_TypeInfo);
    FUN_02fe925c(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    DAT_073a14ef = 1;
  }
  local_50 = 0;
  local_74[0] = 0;
  local_78[0] = 0;
  local_80 = 0;
  local_c0 = 0;
  local_100 = 0;
  local_140 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uVar10 = *(undefined8 *)(param_4 + 0xe8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar7 = FUN_068f8810(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    FUN_06911464(&local_210,2,0);
  }
  else {
    local_1f0 = 0;
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    local_200 = 0;
    FUN_069111f4(&local_210,*(undefined8 *)(param_4 + 0xe8),0);
  }
  uStack_198 = uStack_208;
  local_1a0 = local_210;
  uStack_188 = uStack_1f8;
  uStack_190 = local_200;
  local_180 = local_1f0;
  local_50 = local_1f0;
  uStack_68 = uStack_208;
  local_70 = local_210;
  uStack_58 = uStack_1f8;
  uStack_60 = local_200;
  if (*(long *)(param_4 + 400) != 0) {
    uVar7 = FUN_0663aecc(*(long *)(param_4 + 400),0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)(param_4 + 400);
      if (lVar8 == 0) goto LAB_06764b80;
      local_50 = *(undefined8 *)(lVar8 + 0x50);
      uStack_68 = *(undefined8 *)(lVar8 + 0x38);
      local_70 = *(undefined8 *)(lVar8 + 0x30);
      uStack_58 = *(undefined8 *)(lVar8 + 0x48);
      uStack_60 = *(undefined8 *)(lVar8 + 0x40);
    }
    lVar8 = *(long *)(param_1 + 0x398);
    uStack_208 = uStack_68;
    local_210 = local_70;
    uStack_1f8 = uStack_58;
    local_200 = uStack_60;
    local_1f0 = local_50;
    if (param_2 != 0) {
      uStack_1c8 = uStack_68;
      local_1d0 = local_70;
      uStack_1b8 = uStack_58;
      uStack_1c0 = uStack_60;
      local_1b0 = local_50;
      uVar10 = FUN_066432a0(param_2,&local_1d0,0);
      puVar1 = System_Collections_Generic_List<TweenBase>_TypeInfo;
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x10) = uVar10;
        auVar12 = FUN_06762ec4(param_1,param_4);
        local_74[0] = 0;
        local_78[0] = 0;
        if (*(int *)(param_4 + 0xe0) == 0) {
          bVar4 = FUN_0676416c(param_1,local_74,local_78,param_4,auVar12._0_8_,auVar12._8_8_);
          lVar8 = *(long *)puVar1;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(lVar8);
            lVar8 = *(long *)puVar1;
          }
          *(byte *)(*(long *)(lVar8 + 0xb8) + 0x28) = bVar4 & 1;
        }
        else {
          lVar8 = *(long *)puVar1;
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(lVar8);
          lVar8 = *(long *)puVar1;
        }
        puVar2 = System_Collections_Generic_List<TypeName>_TypeInfo;
        if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x28) != '\0') {
          local_80 = *(undefined4 *)(param_4 + 0x120);
          uStack_98 = *(undefined8 *)(param_4 + 0x108);
          local_a0 = *(undefined8 *)(param_4 + 0x100);
          uStack_88 = *(undefined8 *)(param_4 + 0x118);
          uStack_90 = *(undefined8 *)(param_4 + 0x110);
          uStack_a8 = *(undefined8 *)(param_4 + 0xf8);
          local_b0 = *(undefined8 *)(param_4 + 0xf0);
          FUN_068e47d0(&local_b0,0,0);
          FUN_068e47ec(&local_b0,0,0);
          FUN_068e41c8(&local_b0,0,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          puVar3 = Unity_Entities_TypeManager_SharedTypeIndex<WFX_Demo_New>_TypeInfo;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          FUN_06748f48(0,*(long *)(*(long *)puVar1 + 0xb8) + 8,&local_b0,1,1,0,1,
                       *(undefined8 *)puVar3,0);
          lVar8 = *(long *)puVar1;
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(lVar8);
          lVar8 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x28) != '\0') {
          local_c0 = *(undefined4 *)(param_4 + 0x120);
          uStack_d8 = *(undefined8 *)(param_4 + 0x108);
          local_e0 = *(undefined8 *)(param_4 + 0x100);
          uStack_c8 = *(undefined8 *)(param_4 + 0x118);
          uStack_d0 = *(undefined8 *)(param_4 + 0x110);
          uStack_e8 = *(undefined8 *)(param_4 + 0xf8);
          local_f0 = *(undefined8 *)(param_4 + 0xf0);
          FUN_068e47d0(&local_f0,0,0);
          FUN_068e47ec(&local_f0,0,0);
          FUN_068e4844(&local_f0,0,0);
          if ((1 < (int)uStack_e8) && (iVar5 = FUN_06900970(0), iVar5 != 0)) {
            FUN_068e4844(&local_f0,1,0);
          }
          iVar5 = FUN_069005b0(0);
          if ((iVar5 == 8) || (iVar5 = FUN_069005b0(0), iVar5 == 0xb)) {
            FUN_068e4844(&local_f0,0,0);
          }
          FUN_068e40b4(&local_f0,0,0);
          uStack_d8 = CONCAT44(0x5c,(undefined4)uStack_d8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          puVar3 = OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          FUN_06748f48(0,*(long *)(*(long *)puVar1 + 0xb8) + 0x10,&local_f0,0,1,0,1,
                       *(undefined8 *)puVar3,0);
          lVar8 = *(long *)puVar1;
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(lVar8);
          lVar8 = *(long *)puVar1;
        }
        lVar9 = *(long *)(lVar8 + 0xb8);
        lVar11 = *(long *)(param_1 + 0x398);
        if (*(char *)(lVar9 + 0x28) == '\0') {
          if (lVar11 == 0) goto LAB_06764b80;
          uVar10 = *(undefined8 *)(lVar11 + 0x10);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(lVar8);
            lVar8 = *(long *)puVar1;
            lVar9 = *(long *)(lVar8 + 0xb8);
          }
          *(undefined8 *)(lVar9 + 0x18) = uVar10;
          if (*(long *)(param_1 + 0x398) == 0) goto LAB_06764b80;
          *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x20) =
               *(undefined8 *)(*(long *)(param_1 + 0x398) + 0x10);
          *(undefined1 *)(param_1 + 0x390) = 1;
        }
        else {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(lVar8);
            lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
          }
          uVar10 = FUN_066431c0(param_2,*(undefined8 *)(lVar9 + 0x10),0);
          if (lVar11 == 0) goto LAB_06764b80;
          *(undefined8 *)(lVar11 + 0x20) = uVar10;
          lVar8 = *(long *)(param_1 + 0x398);
          uVar10 = FUN_066431c0(param_2,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
          if (lVar8 == 0) goto LAB_06764b80;
          *(undefined8 *)(lVar8 + 0x18) = uVar10;
          puVar2 = UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo;
          lVar8 = *(long *)(param_1 + 0x398);
          if (lVar8 == 0) goto LAB_06764b80;
          if (*(int *)(*(long *)UnityEngine_UIElements_EventCallback<KeyUpEvent>_TypeInfo + 0xe0) ==
              0) {
            thunk_FUN_02fdcff0();
          }
          uVar7 = FUN_06643c7c(lVar8 + 0x18,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(param_1 + 0x398) == 0) goto LAB_06764b80;
            lVar8 = *(long *)puVar1;
            uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x398) + 0x18);
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar8 = *(long *)puVar1;
            }
            *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18) = uVar10;
            *(undefined1 *)(param_1 + 0x390) = 0;
          }
          lVar8 = *(long *)(param_1 + 0x398);
          if (lVar8 == 0) goto LAB_06764b80;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar7 = FUN_06643c7c(lVar8 + 0x20,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(param_1 + 0x398) == 0) goto LAB_06764b80;
            lVar8 = *(long *)puVar1;
            uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x398) + 0x20);
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar8 = *(long *)puVar1;
            }
            *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x20) = uVar10;
          }
        }
        if (*(int *)(*(long *)
                      Unity_Entities_TypeManager_SharedTypeIndex<WFX_Demo_DeleteAfterDelay>_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar8 = FUN_069226b4(0);
        if (lVar8 != 0) {
          *(undefined1 *)(lVar8 + 0x27) = 1;
          puVar2 = Unity_Entities_TypeManager_SharedTypeIndex<RTSBuildingManager>_TypeInfo;
          uStack_118 = *(undefined8 *)(param_4 + 0x108);
          local_120 = *(undefined8 *)(param_4 + 0x100);
          uStack_108 = *(undefined8 *)(param_4 + 0x118);
          uStack_110 = *(undefined8 *)(param_4 + 0x110);
          local_100 = *(undefined4 *)(param_4 + 0x120);
          uStack_128 = *(undefined8 *)(param_4 + 0xf8);
          local_130 = *(undefined8 *)(param_4 + 0xf0);
          FUN_068e40b4(&local_130,0x2e,0);
          FUN_068e41c8(&local_130,0,0);
          uStack_128 = CONCAT44(uStack_128._4_4_,1);
          lVar8 = *(long *)(param_1 + 0x398);
          uStack_1f8 = uStack_118;
          local_200 = local_120;
          uStack_1e8 = uStack_108;
          local_1f0 = uStack_110;
          uStack_208 = uStack_128;
          local_210 = local_130;
          local_1e0 = local_100;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uStack_248 = uStack_208;
          local_250 = local_210;
          uStack_238 = uStack_1f8;
          uStack_240 = local_200;
          uStack_228 = uStack_1e8;
          local_230 = local_1f0;
          local_220 = local_1e0;
          uVar10 = FUN_0676406c(param_2,&local_250,*(undefined8 *)puVar2,1,0,1);
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x58) = uVar10;
            local_140 = *(undefined4 *)(param_4 + 0x120);
            uStack_158 = *(undefined8 *)(param_4 + 0x108);
            local_160 = *(undefined8 *)(param_4 + 0x100);
            uStack_148 = *(undefined8 *)(param_4 + 0x118);
            uStack_150 = *(undefined8 *)(param_4 + 0x110);
            uStack_168 = *(undefined8 *)(param_4 + 0xf8);
            local_170 = *(undefined8 *)(param_4 + 0xf0);
            FUN_068e40b4(&local_170,0,0);
            iVar5 = FUN_068e416c(&local_170,0);
            if (iVar5 == 0) {
              uVar6 = 0x20;
            }
            else {
              uVar6 = FUN_068e416c(&local_170,0);
            }
            puVar2 = Unity_Entities_TypeManager_SharedTypeIndex<VisualizeMesh>_TypeInfo;
            FUN_068e41c8(&local_170,uVar6,0);
            uStack_168 = CONCAT44(uStack_168._4_4_,1);
            lVar8 = *(long *)(param_1 + 0x398);
            uStack_1f8 = uStack_158;
            local_200 = local_160;
            uStack_1e8 = uStack_148;
            local_1f0 = uStack_150;
            uStack_208 = uStack_168;
            local_210 = local_170;
            local_1e0 = local_140;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uStack_288 = uStack_208;
            local_290 = local_210;
            uStack_278 = uStack_1f8;
            uStack_280 = local_200;
            uStack_268 = uStack_1e8;
            local_270 = local_1f0;
            local_260 = local_1e0;
            uVar10 = FUN_0676406c(param_2,&local_290,*(undefined8 *)puVar2,1,0,1);
            if (lVar8 != 0) {
              *(undefined8 *)(lVar8 + 0x60) = uVar10;
              return;
            }
          }
        }
      }
    }
  }
LAB_06764b80:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


