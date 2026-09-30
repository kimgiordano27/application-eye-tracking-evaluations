/*
FUNCTION_NAME: FUN_05d88f88
ENTRY_POINT: 05d88f88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_12;strong_file_logging_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05d8a0b8) */
/* WARNING: Removing unreachable block (ram,0x05d8993c) */
/* WARNING: Removing unreachable block (ram,0x05d8a08c) */
/* WARNING: Removing unreachable block (ram,0x05d89c88) */
/* WARNING: Removing unreachable block (ram,0x05d8a0dc) */
/* WARNING: Removing unreachable block (ram,0x05d8a06c) */
/* WARNING: Removing unreachable block (ram,0x05d89558) */

void FUN_05d88f88(long param_1,long param_2,long param_3,undefined4 param_4,undefined8 *param_5,
                 undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 local_350;
  long **pplStack_348;
  long local_2d0;
  long *local_2c8;
  long local_2c0;
  long *local_2b8;
  undefined1 local_2b0 [16];
  long local_2a0;
  long *local_298;
  long local_290;
  long *local_288;
  undefined1 local_280 [16];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
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
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_170 [16];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_06bc3a62 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerJoined__);
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__);
    FUN_02f08768(PTR_DAT_067c9d90);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_Oculus_Interaction_Locomotion_PlayerLocomotor_MovePlayer__);
    FUN_02f08768(
                Method_Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_OnEntitlementFinished__
                );
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
    FUN_02f08768(Method_System_IO_Path_InsecureGetFullPath__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(Method_UnityEngine_PlayerPrefs_SetInt__);
    FUN_02f08768(Method_UnityEngine_PlayerPrefs_SetString__);
    FUN_02f08768(Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__);
    FUN_02f08768(Method_Oculus_Interaction_PointableCanvasModule_<Start>b__40_0__);
    FUN_02f08768(
                Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableHoverEnter__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableHoverExit__
                );
    FUN_02f08768(
                Method_UnityEngine_PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableSelected__
                );
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__);
    FUN_02f08768(
                Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableUnselected__
                );
    FUN_02f08768(Method_Oculus_Interaction_PinchPointerVisual_HandlePostprocessed__);
    FUN_02f08768(Method_Oculus_Interaction_PointableDebugGizmos_HandlePointerEventRaised__);
    FUN_02f08768(Method_Oculus_Interaction_PointableDebugVisual_HandlePointerEventRaised__);
    FUN_02f08768(Method_Oculus_Interaction_Samples_PingPongPaddle_HandleCollisionEnter__);
    FUN_02f08768(Method_Oculus_Interaction_PointableElement_HandlePointerEventRaised__);
    FUN_02f08768(Method_Oculus_Interaction_PointableUnityEventWrapper_HandlePointerEventRaised__);
    DAT_06bc3a62 = 1;
  }
  puVar5 = 
  Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableSelected__
  ;
  puVar4 = Method_Oculus_Interaction_Samples_PingPongPaddle_HandleCollisionEnter__;
  puVar3 = Method_System_IO_Path_InsecureGetFullPath__;
  puVar2 = PTR_DAT_067c9d90;
  local_170._8_8_ = 0;
  local_170._0_8_ = 0;
  local_280._0_8_ = 0;
  local_280._8_8_ = 0;
  local_290 = 0;
  local_288 = (long *)0x0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_2a0 = 0;
  local_298 = (long *)0x0;
  local_2b0._0_8_ = 0;
  local_2b0._8_8_ = 0;
  local_2c0 = 0;
  local_2b8 = (long *)0x0;
  local_2d0 = 0;
  local_2c8 = (long *)0x0;
  auVar18 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  if (param_2 != 0) {
    FUN_05cc669c(&local_350,param_2,param_5,0);
    memcpy(&local_e0,&local_350,0x80);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar6 = 
    Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableUnselected__
    ;
    puVar3 = Method_Oculus_Interaction_PinchPointerVisual_HandlePostprocessed__;
    auVar18 = FUN_05d888f0(param_2,&local_e0,*(undefined8 *)puVar5,1,1);
    local_70 = 0;
    uStack_78 = 0;
    *param_6 = auVar18;
    memcpy(&local_160,&local_e0,0x80);
    local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(param_1 + 0x228));
    local_170 = FUN_05d888f0(param_2,&local_160,*(undefined8 *)puVar4,1,1);
    memcpy(&local_1f0,&local_e0,0x80);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_06134294(0x18,0);
    local_1d0 = CONCAT44(local_1d0._4_4_,uVar7);
    auVar19 = FUN_05d888f0(param_2,&local_1f0,*(undefined8 *)puVar6,1,1);
    memcpy(&local_270,&local_e0,0x80);
    local_250 = CONCAT44(local_250._4_4_,8);
    local_280 = FUN_05d888f0(param_2,&local_270,*(undefined8 *)puVar3,1,0);
    puVar4 = Method_Oculus_Interaction_PointableDebugGizmos_HandlePointerEventRaised__;
    puVar3 = Method_UnityEngine_PlayerPrefs_SetString__;
    puVar2 = Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__;
    auVar18 = local_170;
    auVar1 = local_280;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x18);
      uVar8 = FUN_034dac00(0x22,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
      plVar9 = (long *)FUN_03523990(param_2,*(undefined8 *)puVar4,&local_290,uVar8,
                                    *(undefined8 *)puVar2,0xa9,*(undefined8 *)puVar3);
      pplStack_348 = &local_288;
      local_350 = 0;
      local_288 = plVar9;
      if (local_290 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar17 = NEON_fmov(0x3f800000,4);
      uVar8 = NEON_scvtf(CONCAT44(uStack_d8,uStack_dc),4);
      *(ulong *)(local_290 + 0x10) =
           CONCAT44((float)((ulong)uVar17 >> 0x20) / (float)((ulong)uVar8 >> 0x20),
                    (float)uVar17 / (float)uVar8);
      *(undefined8 *)(local_290 + 0x18) = uVar8;
      puVar2 = 
      Method_UnityEngine_PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__
      ;
      if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *(long *)(*(long *)(param_1 + 0x1b8) + 0x20);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar17 = *(undefined8 *)(lVar12 + 0x28);
      uVar8 = *(undefined8 *)(lVar12 + 0x20);
      *(undefined4 *)(local_290 + 0x38) = param_4;
      *(undefined8 *)(local_290 + 0x28) = uVar17;
      *(undefined8 *)(local_290 + 0x20) = uVar8;
      *(undefined8 *)(local_290 + 0x40) = uVar11;
      *(undefined8 *)(local_290 + 0x30) = 0x4280000042800000;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
            goto LAB_05d893d4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(plVar9,*(long *)
                                     Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,0xb);
LAB_05d893d4:
      (*(code *)*puVar10)(plVar9,0,puVar10[1]);
      plVar9 = local_288;
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar12 = *(long *)puVar2;
      }
      puVar10 = *(undefined8 **)(lVar12 + 0xb8);
      lVar15 = puVar10[5];
      if (lVar15 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar8 = *puVar10;
        lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerJoined__
                                   );
        FUN_04237db8(lVar15,uVar8,
                     *(undefined8 *)Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = lVar15;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      lVar16 = *(long *)
                Method_Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_OnEntitlementFinished__
      ;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_05d894b8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar12 = FUN_02f421d0(plVar9);
LAB_05d894b8:
      lVar12 = thunk_FUN_02f2742c(*(undefined8 *)(lVar12 + 8),lVar16);
      (**(code **)(lVar12 + 8))(plVar9,lVar15,lVar12);
      plVar9 = local_288;
      if (local_288 != (long *)0x0) {
        lVar12 = *local_288;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05d89540;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(local_288,*(long *)PTR_DAT_067c91b0,0);
LAB_05d89540:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
      puVar5 = Method_Oculus_Interaction_PointableElement_HandlePointerEventRaised__;
      puVar4 = Method_UnityEngine_PlayerPrefs_SetInt__;
      puVar3 = Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__;
      uVar8 = FUN_034dac00(0x23,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
      plVar9 = (long *)FUN_03523990(param_2,*(undefined8 *)puVar5,&local_2a0,uVar8,
                                    *(undefined8 *)
                                     Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__
                                    ,0xd2,*(undefined8 *)puVar4);
      uVar17 = local_170._8_8_;
      uVar8 = local_170._0_8_;
      pplStack_348 = &local_298;
      local_350 = 0;
      local_298 = plVar9;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d8961c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,0);
LAB_05d8961c:
      (*(code *)*puVar10)(plVar9,uVar8,uVar17,0,2,puVar10[1]);
      plVar9 = local_298;
      if (local_2a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined1 (*) [16])(local_2a0 + 0x20) = auVar19;
      if (local_298 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *local_298;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto FUN_05d8969c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(local_298,*(long *)puVar3,4);
FUN_05d8969c:
      (*(code *)*puVar10)(plVar9,auVar19._0_8_,auVar19._8_8_,2,puVar10[1]);
      plVar9 = local_298;
      if (local_2a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar8 = *param_5;
      *(undefined8 *)(local_2a0 + 0x18) = param_5[1];
      *(undefined8 *)(local_2a0 + 0x10) = uVar8;
      if (local_298 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *local_298;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d89724;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(local_298,
                             *(long *)
                              Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,0);
LAB_05d89724:
      (*(code *)*puVar10)(plVar9,param_5,1,puVar10[1]);
      plVar9 = local_298;
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      local_2b0 = FUN_05d6df38(param_3,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d897a8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(plVar9,*(long *)
                                     Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,0);
LAB_05d897a8:
      (*(code *)*puVar10)(plVar9,local_2b0,1,puVar10[1]);
      plVar9 = local_298;
      if (local_2a0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *(long *)puVar2;
      *(undefined8 *)(local_2a0 + 0x40) = uVar11;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar12 = *(long *)puVar2;
      }
      puVar10 = *(undefined8 **)(lVar12 + 0xb8);
      lVar15 = puVar10[6];
      if (lVar15 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar8 = *puVar10;
        lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__
                                   );
        FUN_04237db8(lVar15,uVar8,
                     *(undefined8 *)Method_Oculus_Interaction_PointableCanvasModule_<Start>b__40_0__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = lVar15;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      lVar16 = *(long *)Method_Oculus_Interaction_Locomotion_PlayerLocomotor_MovePlayer__;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_05d8989c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar12 = FUN_02f421d0(plVar9);
LAB_05d8989c:
      lVar12 = thunk_FUN_02f2742c(*(undefined8 *)(lVar12 + 8),lVar16);
      (**(code **)(lVar12 + 8))(plVar9,lVar15,lVar12);
      plVar9 = local_298;
      if (local_298 != (long *)0x0) {
        lVar12 = *local_298;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05d89924;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(local_298,*(long *)PTR_DAT_067c91b0,0);
LAB_05d89924:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
      uVar8 = FUN_034dac00(0x24,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
      plVar9 = (long *)FUN_03523990(param_2,*(undefined8 *)
                                             Method_Oculus_Interaction_PointableDebugVisual_HandlePointerEventRaised__
                                    ,&local_2c0,uVar8,
                                    *(undefined8 *)
                                     Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__
                                    ,0xe8,*(undefined8 *)Method_UnityEngine_PlayerPrefs_SetInt__);
      uVar17 = local_280._8_8_;
      uVar8 = local_280._0_8_;
      pplStack_348 = &local_2b8;
      local_350 = 0;
      local_2b8 = plVar9;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d899f0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,0);
LAB_05d899f0:
      (*(code *)*puVar10)(plVar9,uVar8,uVar17,0,2,puVar10[1]);
      plVar9 = local_2b8;
      if (local_2c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined1 (*) [16])(local_2c0 + 0x20) = auVar19;
      if (local_2b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *local_2b8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_05d89a70;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(local_2b8,*(long *)puVar3,4);
LAB_05d89a70:
      (*(code *)*puVar10)(plVar9,auVar19._0_8_,auVar19._8_8_,1,puVar10[1]);
      plVar9 = local_2b8;
      if (local_2c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined1 (*) [16])(local_2c0 + 0x10) = local_170;
      if (local_2b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *local_2b8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d89af4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(local_2b8,
                             *(long *)
                              Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,0);
LAB_05d89af4:
      (*(code *)*puVar10)(plVar9,local_170,1,puVar10[1]);
      plVar9 = local_2b8;
      if (local_2c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *(long *)puVar2;
      *(undefined8 *)(local_2c0 + 0x40) = uVar11;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar12 = *(long *)puVar2;
      }
      puVar10 = *(undefined8 **)(lVar12 + 0xb8);
      lVar15 = puVar10[7];
      if (lVar15 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar8 = *puVar10;
        lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__
                                   );
        FUN_04237db8(lVar15,uVar8,
                     *(undefined8 *)
                      Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableHoverEnter__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = lVar15;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      lVar16 = *(long *)Method_Oculus_Interaction_Locomotion_PlayerLocomotor_MovePlayer__;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_05d89be8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar12 = FUN_02f421d0(plVar9);
LAB_05d89be8:
      lVar12 = thunk_FUN_02f2742c(*(undefined8 *)(lVar12 + 8),lVar16);
      (**(code **)(lVar12 + 8))(plVar9,lVar15,lVar12);
      plVar9 = local_2b8;
      if (local_2b8 != (long *)0x0) {
        lVar12 = *local_2b8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05d89c70;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(local_2b8,*(long *)PTR_DAT_067c91b0,0);
LAB_05d89c70:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
      uVar8 = FUN_034dac00(0x25,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
      plVar9 = (long *)FUN_03523990(param_2,*(undefined8 *)
                                             Method_Oculus_Interaction_PointableUnityEventWrapper_HandlePointerEventRaised__
                                    ,&local_2d0,uVar8,
                                    *(undefined8 *)
                                     Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__
                                    ,0xfd,*(undefined8 *)Method_UnityEngine_PlayerPrefs_SetInt__);
      pplStack_348 = &local_2c8;
      local_350 = 0;
      local_2c8 = plVar9;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
            goto LAB_05d89d44;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(plVar9,*(long *)
                                     Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,0xc);
LAB_05d89d44:
      (*(code *)*puVar10)(plVar9,1,puVar10[1]);
      plVar9 = local_2c8;
      if (local_2c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *local_2c8;
      uVar8 = *(undefined8 *)*param_6;
      uVar17 = *(undefined8 *)(*param_6 + 8);
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d89db0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(local_2c8,*(long *)puVar3,0);
LAB_05d89db0:
      (*(code *)*puVar10)(plVar9,uVar8,uVar17,0,2,puVar10[1]);
      plVar9 = local_2c8;
      if (local_2d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar8 = *param_5;
      *(undefined8 *)(local_2d0 + 0x18) = param_5[1];
      *(undefined8 *)(local_2d0 + 0x10) = uVar8;
      if (local_2c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *local_2c8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d89e3c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(local_2c8,
                             *(long *)
                              Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,0);
LAB_05d89e3c:
      (*(code *)*puVar10)(plVar9,param_5,1,puVar10[1]);
      plVar9 = local_2c8;
      if (local_2d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      *(undefined1 (*) [16])(local_2d0 + 0x30) = local_280;
      if (local_2c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *local_2c8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
             ) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d89ebc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(local_2c8,
                             *(long *)
                              Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                             ,0);
LAB_05d89ebc:
      (*(code *)*puVar10)(plVar9,local_280,1,puVar10[1]);
      plVar9 = local_2c8;
      if (local_2d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *(long *)puVar2;
      *(undefined8 *)(local_2d0 + 0x40) = uVar11;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar12 = *(long *)puVar2;
      }
      puVar10 = *(undefined8 **)(lVar12 + 0xb8);
      lVar15 = puVar10[8];
      if (lVar15 == 0) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar8 = *puVar10;
        lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_PlayerInputManager_remove_onPlayerLeft__
                                   );
        FUN_04237db8(lVar15,uVar8,
                     *(undefined8 *)
                      Method_Oculus_Interaction_PointableCanvasUnityEventWrapper_PointableCanvasModule_WhenSelectableHoverExit__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = lVar15;
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar9;
      lVar16 = *(long *)Method_Oculus_Interaction_Locomotion_PlayerLocomotor_MovePlayer__;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)(lVar16 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar16 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_05d89fb0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      lVar12 = FUN_02f421d0(plVar9);
LAB_05d89fb0:
      lVar12 = thunk_FUN_02f2742c(*(undefined8 *)(lVar12 + 8),lVar16);
      (**(code **)(lVar12 + 8))(plVar9,lVar15,lVar12);
      plVar9 = local_2c8;
      if (local_2c8 != (long *)0x0) {
        lVar12 = *local_2c8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05d8a034;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(local_2c8,*(long *)PTR_DAT_067c91b0,0);
LAB_05d8a034:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
      return;
    }
  }
  local_170 = auVar18;
  local_280 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


