/*
FUNCTION_NAME: FUN_05d8a990
ENTRY_POINT: 05d8a990
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05d8b480) */

void FUN_05d8a990(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_2c0 [128];
  undefined8 local_240;
  undefined1 *puStack_238;
  undefined8 local_230;
  long **pplStack_228;
  long local_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104 [4];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = Method_System_Globalization_DateTimeFormatInfo_GetMonthName__;
  if ((DAT_06bc3a64 & 1) == 0) {
    FUN_02f08768(
                Method_System_Reflection_Pointer_System_Runtime_Serialization_ISerializable_GetObjectData__
                );
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_System_Reflection_Pointer_Unbox__);
    FUN_02f08768(Method_System_IO_Path_InsecureGetFullPath__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_02f08768(Method_UnityEngine_InputForUI_PointerEvent_ToString__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                );
    FUN_02f08768(Method_System_Globalization_DateTimeFormatInfo_GetMonthName__);
    FUN_02f08768(
                Method_UnityEngine_UIElements_PointerEventsHelper_SendEnterLeave<PointerLeaveEvent,_PointerEnterEvent>__
                );
    FUN_02f08768(
                Method_UnityEngine_PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__
                );
    FUN_02f08768(Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_Hands_PokeBlendShapeAnimator_<OnEnable>b__10_0__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__);
    FUN_02f08768(
                Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationOffsetPlayable>__
                );
    DAT_06bc3a64 = 1;
  }
  puVar1 = Method_System_Net_Sockets_NetworkStream_Close__;
  local_104[0] = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_1a8 = (long *)0x0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_f8 = param_3[1];
  local_100 = *param_3;
  local_1b0 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05ce0534(&local_230,&local_100,param_2,0);
  memcpy(&local_f0,&local_230,0x80);
  auVar25 = FUN_05d8a7e8(param_1);
  uVar19 = auVar25._0_8_;
  uVar6 = FUN_05d8a888(param_1,auVar25._8_8_,uVar19);
  uVar9 = FUN_034dac00(0x31,*(undefined8 *)puVar1);
  FUN_05c5cb44(local_104,uVar9,0);
  local_240 = 0;
  puStack_238 = local_104;
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x58);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar21 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x40);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
  fVar22 = (float)FUN_060d9e9c(0);
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x50);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  fVar23 = (float)(**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
  local_108 = 0;
  fVar24 = 1.0;
  if (fVar23 <= 1.0) {
    fVar24 = fVar23;
  }
  uStack_110 = CONCAT44(fVar22 * 0.5,fVar22);
  fVar22 = DAT_011b018c;
  if (0.0 <= fVar23) {
    fVar22 = fVar24 * DAT_011afbb4 + DAT_011b018c;
  }
  local_118 = CONCAT44(uVar21,fVar22);
  if (*(long *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x68);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = (**(code **)(*plVar10 + 0x218))(plVar10,*(undefined8 *)(*plVar10 + 0x220));
  local_108 = CONCAT31(local_108._1_3_,uVar5) & 0xffffff01;
  local_108 = CONCAT22(local_108._2_2_,CONCAT11(param_5,(undefined1)local_108)) & 0xffff01ff;
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar20 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x50);
  uVar7 = FUN_05d93ff0((ulong *)(param_1 + 0x278),&local_118,0);
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__;
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = FUN_060be220(lVar20,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48),0);
  if ((uVar7 & uVar8 & 1) == 0) {
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar11 = *(long *)puVar2;
    }
    thunk_FUN_060bfdac(local_118 & 0xffffffff,local_118._4_4_,(undefined4)uStack_110,
                       uStack_110._4_4_,lVar20,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x48),0);
    uVar7 = local_108;
    puVar1 = PTR_DAT_067c9e50;
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    puVar4 = Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationOffsetPlayable>__
    ;
    FUN_05cb163c(lVar20,*(undefined8 *)
                         Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimationOffsetPlayable>__
                 ,uVar7 & 1,0);
    puVar3 = Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__;
    FUN_05cb163c(lVar20,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,
                 local_108 >> 8 & 1,0);
    uVar15 = 0;
    do {
      if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar20 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x58);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      thunk_FUN_060bfdac(local_118 & 0xffffffff,local_118._4_4_,(undefined4)uStack_110,
                         uStack_110._4_4_,lVar20,
                         *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48),0);
      uVar7 = local_108;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cb163c(lVar20,*(undefined8 *)puVar4,uVar7 & 1,0);
      FUN_05cb163c(lVar20,*(undefined8 *)puVar3,local_108 >> 8 & 1,0);
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x10);
    *(undefined8 *)(param_1 + 0x280) = uStack_110;
    *(ulong *)(param_1 + 0x278) = local_118;
    *(uint *)(param_1 + 0x288) = local_108;
  }
  puVar2 = Method_System_IO_Path_InsecureGetFullPath__;
  uVar21 = *(undefined4 *)(param_1 + 0x220);
  if (*(int *)(*(long *)Method_System_IO_Path_InsecureGetFullPath__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar15 = uVar19 >> 0x20;
  memcpy(auStack_2c0,&local_f0,0x80);
  FUN_05d88a44(&local_230,auStack_2c0,uVar19 & 0xffffffff,uVar15,uVar21);
  memcpy(&local_1a0,&local_230,0x80);
  lVar20 = *(long *)(param_1 + 0x148);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  lVar11 = *(long *)(param_1 + 0x160);
  auVar25 = FUN_05d888f0(param_2,&local_1a0,*(undefined8 *)(lVar20 + 0x20),0,1);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  *(undefined1 (*) [16])(lVar11 + 0x20) = auVar25;
  lVar20 = *(long *)(param_1 + 0x150);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  lVar11 = *(long *)(param_1 + 0x158);
  auVar25 = FUN_05d888f0(param_2,&local_1a0,*(undefined8 *)(lVar20 + 0x20),0,1);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  *(undefined1 (*) [16])(lVar11 + 0x20) = auVar25;
  if (1 < (int)uVar6) {
    lVar20 = 0;
    lVar11 = 5;
    do {
      uVar7 = (int)uVar19 >> 1;
      uVar8 = (int)uVar15 >> 1;
      lVar17 = *(long *)(param_1 + 0x160);
      if ((int)uVar7 < 2) {
        uVar7 = 1;
      }
      uVar19 = (ulong)uVar7;
      if ((int)uVar8 < 2) {
        uVar8 = 1;
      }
      uVar15 = (ulong)uVar8;
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar16 = *(long *)(param_1 + 0x158);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar18 = lVar11 - 4;
      if (*(uint *)(lVar16 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar13 = *(long *)(param_1 + 0x148);
      local_1a0 = CONCAT44(uVar7,(undefined4)local_1a0);
      uStack_198 = CONCAT44(uStack_198._4_4_,uVar8);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar9 = *(undefined8 *)(lVar13 + lVar11 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      auVar25 = FUN_05d888f0(param_2,&local_1a0,uVar9,0,1);
      if (*(uint *)(lVar17 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      *(undefined1 (*) [16])(lVar17 + lVar20 + 0x30) = auVar25;
      lVar17 = *(long *)(param_1 + 0x150);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      auVar25 = FUN_05d888f0(param_2,&local_1a0,*(undefined8 *)(lVar17 + lVar11 * 8),0,1);
      lVar17 = lVar16 + lVar20;
      lVar16 = lVar16 + lVar20;
      lVar20 = lVar20 + 0x10;
      lVar11 = lVar11 + 1;
      *(long *)(lVar17 + 0x30) = auVar25._0_8_;
      *(long *)(lVar16 + 0x38) = auVar25._8_8_;
    } while ((ulong)uVar6 * 0x10 + -0x10 != lVar20);
  }
  FUN_05c5cb50(local_104,0);
  uVar9 = FUN_034dac00(0x1a,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar10 = (long *)FUN_03523d30(param_2,*(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_Samples_Hands_PokeBlendShapeAnimator_<OnEnable>b__10_0__
                                 ,&local_1b0,uVar9,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_PlayerInput_remove_onControlsChanged__
                                 ,0x1d1,*(undefined8 *)
                                         Method_UnityEngine_InputForUI_PointerEvent_ToString__);
  pplStack_228 = &local_1a8;
  local_230 = 0;
  local_1a8 = plVar10;
  if (local_1b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(uint *)(local_1b0 + 0x10) = uVar6;
  lVar20 = *(long *)(param_1 + 0x1b0);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar9 = *(undefined8 *)(lVar20 + 0x50);
  *(undefined8 *)(local_1b0 + 0x20) = *(undefined8 *)(lVar20 + 0x58);
  *(undefined8 *)(local_1b0 + 0x18) = uVar9;
  uVar9 = *param_3;
  *(undefined8 *)(local_1b0 + 0x30) = param_3[1];
  *(undefined8 *)(local_1b0 + 0x28) = uVar9;
  lVar20 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(local_1b0 + 0x40) = *(undefined8 *)(param_1 + 0x160);
  *(long *)(local_1b0 + 0x38) = lVar20;
  puVar2 = Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
  ;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar20 = *plVar10;
  uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar19 != 0) {
    piVar14 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)
           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
         ) {
        puVar12 = (undefined8 *)(lVar20 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
        goto LAB_05d8b0e4;
      }
      uVar19 = uVar19 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_02f421d0(plVar10,*(long *)
                                  Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                         ,0xb);
LAB_05d8b0e4:
  (*(code *)*puVar12)(plVar10,0,puVar12[1]);
  plVar10 = local_1a8;
  if (local_1a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar20 = *local_1a8;
  uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar19 != 0) {
    piVar14 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar20 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_05d8b148;
      }
      uVar19 = uVar19 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_02f421d0(local_1a8,*(long *)puVar2,0);
LAB_05d8b148:
  (*(code *)*puVar12)(plVar10,param_3,1,puVar12[1]);
  if (0 < (int)uVar6) {
    uVar19 = 0;
    do {
      plVar10 = local_1a8;
      lVar20 = *(long *)(param_1 + 0x160);
      if ((lVar20 == 0) || (local_1a8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar11 = *local_1a8;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d8b1d4;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_02f421d0(local_1a8,*(long *)puVar2,0);
LAB_05d8b1d4:
      (*(code *)*puVar12)(plVar10,lVar20 + uVar19 * 0x10 + 0x20,3,puVar12[1]);
      plVar10 = local_1a8;
      lVar20 = *(long *)(param_1 + 0x158);
      if ((lVar20 == 0) || (local_1a8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar20 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar11 = *local_1a8;
      uVar15 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar15 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_05d8b254;
          }
          uVar15 = uVar15 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_02f421d0(local_1a8,*(long *)puVar2,0);
LAB_05d8b254:
      (*(code *)*puVar12)(plVar10,lVar20 + uVar19 * 0x10 + 0x20,3,puVar12[1]);
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar6);
  }
  plVar10 = local_1a8;
  puVar2 = 
  Method_UnityEngine_PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__
  ;
  lVar20 = *(long *)
            Method_UnityEngine_PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__
  ;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar20 = *(long *)puVar2;
  }
  puVar12 = *(undefined8 **)(lVar20 + 0xb8);
  lVar11 = puVar12[9];
  if (lVar11 == 0) {
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar12 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar9 = *puVar12;
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Reflection_Pointer_System_Runtime_Serialization_ISerializable_GetObjectData__
                               );
    FUN_04237c6c(lVar11,uVar9,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventsHelper_SendEnterLeave<PointerLeaveEvent,_PointerEnterEvent>__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = lVar11;
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar20 = *plVar10;
  lVar17 = *(long *)Method_System_Reflection_Pointer_Unbox__;
  uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar19 != 0) {
    piVar14 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)(lVar17 + 0x20)) {
        lVar20 = lVar20 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar17 + 0x50)) * 0x10 + 0x138;
        goto LAB_05d8b354;
      }
      uVar19 = uVar19 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar19 != 0);
  }
  lVar20 = FUN_02f421d0(plVar10);
LAB_05d8b354:
  lVar20 = thunk_FUN_02f2742c(*(undefined8 *)(lVar20 + 8),lVar17);
  (**(code **)(lVar20 + 8))(plVar10,lVar11,lVar20);
  plVar10 = local_1a8;
  if (local_1b0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar20 = *(long *)(local_1b0 + 0x38);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  uVar9 = *(undefined8 *)(lVar20 + 0x20);
  param_4[1] = *(undefined8 *)(lVar20 + 0x28);
  *param_4 = uVar9;
  if (local_1a8 != (long *)0x0) {
    lVar20 = *local_1a8;
    uVar19 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar19 != 0) {
      piVar14 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar14 * 0x10 + 0x138);
          goto UnityEngine_XR_ARFoundation_ARCameraManager__TryGetIntrinsics;
        }
        uVar19 = uVar19 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(local_1a8,*(long *)PTR_DAT_067c91b0,0);
UnityEngine_XR_ARFoundation_ARCameraManager__TryGetIntrinsics:
    (*(code *)*puVar12)(plVar10,puVar12[1]);
  }
  return;
}


