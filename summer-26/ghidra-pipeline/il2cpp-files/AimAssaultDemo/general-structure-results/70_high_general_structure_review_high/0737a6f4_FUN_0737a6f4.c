/*
FUNCTION_NAME: FUN_0737a6f4
ENTRY_POINT: 0737a6f4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0737ab58) */
/* WARNING: Removing unreachable block (ram,0x0737abac) */
/* WARNING: Removing unreachable block (ram,0x0737ac08) */

bool FUN_0737a6f4(float param_1,float param_2,float param_3,long param_4,long param_5,
                 undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 local_258;
  undefined8 uStack_250;
  float local_248;
  float fStack_244;
  float local_240;
  undefined8 local_23c;
  undefined8 uStack_234;
  undefined4 local_22c;
  ulong local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulong local_168;
  long local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [80];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  
  local_150 = param_5;
  uStack_148 = param_6;
  if ((DAT_082692b9 & 1) == 0) {
    FUN_0373b518(UnityEngine_InputSystem_InputControlScheme_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_InputBinding_TypeInfo);
    FUN_0373b518(CustomWebSocketSharp_HttpRequest_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_InputDevice_TypeInfo);
    FUN_0373b518(UnityEngine_XR_InputDevice_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_Layouts_InputDeviceBuilder_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_LowLevel_InputDeviceCommand_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_Layouts_InputDeviceDescription_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_LowLevel_InputDeviceExecuteCommandDelegate_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_Layouts_InputDeviceFindControlLayoutDelegate_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_Filtering_IXRHoverFilter_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_Layouts_InputDeviceMatcher_TypeInfo);
    FUN_0373b518(UnityEngine_XR_InputDevices_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07d95c70);
    DAT_082692b9 = 1;
  }
  local_160 = 0;
  uStack_158 = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  fStack_180 = 0.0;
  uStack_17c = 0;
  local_168 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  local_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar14 = *(int *)(param_7 + 0x18);
  *(undefined4 *)(param_7 + 0x18) = 0;
  *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
  if (0 < iVar14) {
    FUN_062658d0(*(undefined8 *)(param_7 + 0x10),0,iVar14,0);
  }
  puVar2 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_TypeInfo;
  if (param_5 == 0) {
    bVar13 = false;
  }
  else {
    lVar8 = FUN_03f0da94(param_4,*(undefined8 *)CustomWebSocketSharp_HttpRequest_TypeInfo);
    uStack_158 = uStack_148;
    local_160 = local_150;
    FUN_04d11c4c(&local_f0,&local_150,*(undefined8 *)puVar2);
    puVar3 = UnityEngine_XR_InputDevice_TypeInfo;
    memcpy(&local_1b0,&local_f0,0x50);
    puVar2 = PTR_DAT_07d863e8;
    lVar10 = *(long *)puVar3;
    iVar14 = (int)local_1a0 + 1;
    local_1a0 = CONCAT44(local_1a0._4_4_,iVar14);
    if (iVar14 < (int)uStack_1a8) {
      do {
        lVar15 = local_1b0;
        if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        puVar11 = (undefined8 *)(lVar15 + (long)iVar14 * 0x38);
        uStack_d8 = puVar11[3];
        local_e0 = puVar11[2];
        uStack_c8 = puVar11[5];
        uStack_d0 = puVar11[4];
        uVar12 = puVar11[6];
        uVar20 = puVar11[1];
        uVar16 = *puVar11;
        fStack_180 = (float)uStack_d8;
        fVar6 = fStack_180;
        uStack_17c = (undefined4)((ulong)uStack_d8 >> 0x20);
        uStack_170 = (undefined4)uStack_c8;
        uStack_16c = (undefined4)((ulong)uStack_c8 >> 0x20);
        uVar7 = uStack_16c;
        uStack_178 = (undefined4)uStack_d0;
        uStack_174 = (undefined4)((ulong)uStack_d0 >> 0x20);
        uStack_1b8 = CONCAT44(uStack_170,uStack_174);
        local_1c0 = CONCAT44(uStack_178,uStack_17c);
        local_188._0_4_ = (float)local_e0;
        fVar4 = (float)local_188;
        local_188._4_4_ = (float)((ulong)local_e0 >> 0x20);
        fVar5 = local_188._4_4_;
        uStack_198 = uVar16;
        uStack_190 = uVar20;
        local_188 = local_e0;
        local_168 = uVar12;
        local_f0 = uVar16;
        uStack_e8 = uVar20;
        local_c0 = uVar12;
        if (*(int *)(*(long *)PTR_DAT_07d95c70 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (DAT_082528bb == '\0') {
          FUN_0373b518(puVar2);
          DAT_082528bb = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if ((uVar12 & 0xf) != 0) {
          if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar9 = FUN_075b0180(lVar8,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_07d95c70 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            FUN_07373908(lVar8,uVar16,uVar20);
          }
        }
        uStack_1c8 = uStack_1b8;
        local_1d0 = local_1c0;
        if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        fVar17 = fVar4 - param_1;
        fVar18 = fVar5 - param_2;
        uStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_208 = 0;
        local_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_218 = 0;
        local_220 = 0;
        fVar19 = fVar6 - param_3;
        local_248 = fVar4;
        fStack_244 = fVar5;
        local_240 = fVar6;
        uStack_234 = uStack_1b8;
        local_23c = local_1c0;
        local_22c = uVar7;
        local_258 = uVar16;
        uStack_250 = uVar20;
        local_228 = uVar12;
        FUN_07379e20(SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19),&local_220,&local_258
                     ,*(undefined8 *)(*(long *)(param_4 + 0x40) + 0x28));
        lVar15 = *(long *)UnityEngine_InputSystem_LowLevel_InputDeviceCommand_TypeInfo;
        memcpy(auStack_140,&local_220,0x50);
        lVar10 = *(long *)(param_7 + 0x10);
        *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar1 = *(uint *)(param_7 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * 0x50;
          *(uint *)(param_7 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar10 + 0x20),auStack_140,0x50);
          thunk_FUN_037aeb94(lVar10 + 0x28,0);
        }
        else {
          uVar16 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
          memcpy(&local_f0,auStack_140,0x50);
          FUN_048e1af4(param_7,&local_f0,uVar16);
        }
        iVar14 = (int)local_1a0 + 1;
        lVar10 = *(long *)UnityEngine_XR_InputDevice_TypeInfo;
        local_1a0 = CONCAT44(local_1a0._4_4_,iVar14);
      } while (iVar14 < (int)uStack_1a8);
    }
    local_168 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    fStack_180 = 0.0;
    uStack_17c = 0;
    local_188 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    FUN_05db3f98(&local_1b0,*(undefined8 *)UnityEngine_InputSystem_InputDevice_TypeInfo);
    puVar2 = UnityEngine_InputSystem_InputControlScheme_TypeInfo;
    lVar8 = *(long *)UnityEngine_InputSystem_InputControlScheme_TypeInfo;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar8 = *(long *)puVar2;
    }
    FUN_048e3a5c(param_7,**(undefined8 **)(lVar8 + 0xb8),
                 *(undefined8 *)
                  UnityEngine_InputSystem_LowLevel_InputDeviceExecuteCommandDelegate_TypeInfo);
    bVar13 = 0 < *(int *)(param_7 + 0x18);
    FUN_04d118f0(&local_160,
                 *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_Filtering_IXRHoverFilter_TypeInfo
                );
  }
  return bVar13;
}


