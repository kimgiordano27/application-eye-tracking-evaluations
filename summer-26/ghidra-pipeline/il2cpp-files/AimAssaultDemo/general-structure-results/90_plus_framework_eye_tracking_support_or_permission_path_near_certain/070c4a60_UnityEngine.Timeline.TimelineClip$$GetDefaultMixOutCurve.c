/*
FUNCTION_NAME: UnityEngine.Timeline.TimelineClip$$GetDefaultMixOutCurve
ENTRY_POINT: 070c4a60
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 93
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x070c5408) */

void UnityEngine_Timeline_TimelineClip__GetDefaultMixOutCurve
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5,
               undefined8 *param_6,undefined8 *param_7,undefined8 param_8,undefined8 param_9,
               long param_10)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  puVar3 = PTR_DAT_07dfc128;
  if ((DAT_08267bc8 & 1) == 0) {
    FUN_0373b518(UnityEngine_UIElements_EventDispatcher_EventRecord_var);
    FUN_0373b518(PTR_DAT_07df7550);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(UnityEngine_InputForUI_EventProvider_Registration_var);
    FUN_0373b518(PTR_DAT_07dfc128);
    FUN_0373b518(UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var);
    FUN_0373b518(System_Threading_ExecutionContext_Reader_var);
    FUN_0373b518(DIVR_Animation2UnityEvent_EventPair_var);
    FUN_0373b518(PTR_DAT_07dfc190);
    FUN_0373b518(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_0373b518(UnityEngine_Rendering_Blitter_BlitColorAndDepthPassNames_var);
    FUN_0373b518(Cinemachine_CinemachineVirtualCameraBase_TransitionParams_var);
    FUN_0373b518(Cinemachine_CinemachineBlendListCamera_Instruction_var);
    FUN_0373b518(Cinemachine_CinemachineConfiner2D_ShapeCache_var);
    DAT_08267bc8 = 1;
  }
  puVar4 = PTR_DAT_07dfc190;
  auStack_10._8_8_ = 0;
  auStack_10._0_8_ = 0;
  auStack_20._8_8_ = 0;
  auStack_20._0_8_ = 0;
  auStack_30._8_8_ = 0;
  auStack_30._0_8_ = 0;
  param_10 = 0;
  auStack_40._8_8_ = 0;
  auStack_40._0_8_ = 0;
  uVar10 = *param_7;
  piVar16 = (int *)(param_1 + 0xb8);
  iVar24 = *piVar16;
  uStack_50 = *(undefined4 *)(param_1 + 0xe8);
  uStack_68 = *(ulong *)(param_1 + 0xd0);
  uStack_70 = *(undefined8 *)(param_1 + 200);
  uStack_58 = *(undefined8 *)(param_1 + 0xe0);
  uStack_60 = *(undefined8 *)(param_1 + 0xd8);
  auStack_80._8_8_ = *(undefined8 *)(param_1 + 0xc0);
  auStack_80._0_8_ = *(undefined8 *)piVar16;
  iVar1 = *(int *)(param_1 + 0xbc);
  uVar14 = *(undefined8 *)piVar16;
  if (iVar24 < 0) {
    iVar24 = iVar24 + 1;
  }
  iVar24 = iVar24 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 >> 1;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar5 = Cinemachine_CinemachineBlendListCamera_Instruction_var;
  puVar3 = UnityEngine_Rendering_Blitter_BlitColorAndDepthPassNames_var;
  uStack_b0 = uStack_70;
  uStack_90 = uStack_50;
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_a8 = uStack_68 & 0xffffffff;
  uStack_b8 = CONCAT44(SUB84(auStack_80._8_8_,4),1);
  uStack_c0 = uVar14;
  FUN_07590518(&uStack_c0,5,0);
  uStack_d0 = uStack_90;
  uStack_e8 = uStack_a8;
  uStack_f0 = uStack_b0;
  uStack_d8 = uStack_98;
  uStack_e0 = uStack_a0;
  auStack_100._8_8_ = uStack_b8;
  auStack_100._0_8_ = uStack_c0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uStack_138 = auStack_100._8_8_;
  uStack_140 = auStack_100._0_8_;
  uStack_128 = uStack_e8;
  uStack_130 = uStack_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_110 = uStack_d0;
  auStack_10 = FUN_071026d0(param_2,&uStack_140,*(undefined8 *)puVar3,1,1,1,0);
  uStack_170 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined4 *)(param_1 + 0xe8);
  uStack_158 = *(undefined8 *)(param_1 + 0xe0);
  uStack_160 = *(undefined8 *)(param_1 + 0xd8);
  uStack_168 = *(ulong *)(param_1 + 0xd0) & 0xffffffff;
  uStack_178 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20),1);
  uStack_180 = CONCAT44(iVar1,iVar24);
  FUN_07590518(&uStack_180,0x30,0);
  uStack_1b8 = uStack_178;
  uStack_1c0 = uStack_180;
  uStack_1a8 = uStack_168;
  uStack_1b0 = uStack_170;
  uStack_198 = uStack_158;
  uStack_1a0 = uStack_160;
  uStack_190 = uStack_150;
  auStack_20 = FUN_071026d0(param_2,&uStack_1c0,*(undefined8 *)puVar5,1,1,1,0);
  uStack_1f0 = *(undefined8 *)(param_1 + 200);
  uStack_1d0 = *(undefined4 *)(param_1 + 0xe8);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_1e8 = *(ulong *)(param_1 + 0xd0) & 0xffffffff;
  uStack_1f8 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20),1);
  uStack_200 = CONCAT44(iVar1,iVar24);
  FUN_07590518(&uStack_200,0x30,0);
  uStack_238 = uStack_1f8;
  uStack_240 = uStack_200;
  uStack_228 = uStack_1e8;
  uStack_230 = uStack_1f0;
  uStack_218 = uStack_1d8;
  uStack_220 = uStack_1e0;
  uStack_210 = uStack_1d0;
  auStack_30 = FUN_071026d0(param_2,&uStack_240,
                            *(undefined8 *)Cinemachine_CinemachineConfiner2D_ShapeCache_var,1,1,1,0)
  ;
  puVar3 = PTR_DAT_07d896f8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar7 = (long *)FUN_041b4e54(param_2,*(undefined8 *)
                                         UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                                ,&param_10,
                                *(undefined8 *)
                                 Cinemachine_CinemachineVirtualCameraBase_TransitionParams_var,0x2e2
                                ,*(undefined8 *)
                                  UnityEngine_EventSystems_EventSystem_UIToolkitOverrideConfig_var);
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x1b0) + 0x70);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  fVar17 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x1b0) + 0x70);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  fVar18 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x1b0) + 0x68);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  fVar19 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
  if (*(long *)(param_1 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x1b0) + 0x60);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  fVar20 = (float)(**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
  iVar2 = *(int *)(param_1 + 0xbc);
  if (*(int *)(*(long *)PTR_DAT_07dfc128 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  plVar8 = *(long **)(param_1 + 0x1b0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar6 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
  fVar21 = 14.0 / (float)iVar2;
  if (DAT_01586808 < fVar21) {
    fVar21 = DAT_01586808;
  }
  fVar23 = 1.0 / ((float)iVar24 / (float)iVar1);
  if (((iVar6 != *(int *)(param_1 + 0x238)) || (fVar21 != *(float *)(param_1 + 0x23c))) ||
     (fVar23 != *(float *)(param_1 + 0x240))) {
    *(int *)(param_1 + 0x238) = iVar6;
    *(float *)(param_1 + 0x23c) = fVar21;
    *(float *)(param_1 + 0x240) = fVar23;
    FUN_070bfc28(fVar21,fVar23,param_1);
  }
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar24 = *(int *)(param_1 + 0xbc);
  *(undefined8 *)(param_10 + 0x10) = *(undefined8 *)(param_1 + 0x230);
  thunk_FUN_037aeb94();
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  fVar22 = 1.0 / (float)iVar24;
  *(undefined4 *)(param_10 + 0x18) = 2;
  *(float *)(param_10 + 0x1c) = fVar22 + fVar22;
  *(float *)(param_10 + 0x20) = fVar20;
  *(float *)(param_10 + 0x24) = ((fVar17 / 1000.0) * (fVar18 / fVar19)) / (fVar20 - fVar17 / 1000.0)
  ;
  *(float *)(param_10 + 0x28) = fVar21;
  *(float *)(param_10 + 0x2c) = fVar23;
  *(undefined1 *)(param_10 + 0x30) = *(undefined1 *)(param_1 + 0x247);
  uVar14 = *param_5;
  *(undefined8 *)(param_10 + 0x3c) = param_5[1];
  *(undefined8 *)(param_10 + 0x34) = uVar14;
  puVar4 = PTR_DAT_07df7550;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07df7550) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_070c4fac;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07df7550,0);
LAB_070c4fac:
  (*(code *)*puVar9)(plVar7,param_5,1,puVar9[1]);
  lVar11 = param_10;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  auVar25 = FUN_070a46e0(param_3,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined1 (*) [16])(lVar11 + 0x44) = auVar25;
  auStack_40 = FUN_070a46e0(param_3,0);
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_070c5040;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar4,0);
LAB_070c5040:
  (*(code *)*puVar9)(plVar7,auStack_40,1,puVar9[1]);
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(param_10 + 0x58) = uVar10;
  thunk_FUN_037aeb94();
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(param_10 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x38);
  thunk_FUN_037aeb94();
  auStack_80 = auStack_10;
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined1 (*) [16])(param_10 + 0x78) = auStack_10;
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_070c50ec;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar4,0);
LAB_070c50ec:
  (*(code *)*puVar9)(plVar7,auStack_10,3,puVar9[1]);
  auStack_100 = auStack_20;
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined1 (*) [16])(param_10 + 0x88) = auStack_20;
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
        goto FUN_070c5164;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar4,0);
FUN_070c5164:
  (*(code *)*puVar9)(plVar7,auStack_20,3,puVar9[1]);
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined1 (*) [16])(param_10 + 0x98) = auStack_30;
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_070c51dc;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar4,0);
LAB_070c51dc:
  (*(code *)*puVar9)(plVar7,auStack_30,3,puVar9[1]);
  uVar14 = *param_6;
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(param_10 + 0xb0) = param_6[1];
  *(undefined8 *)(param_10 + 0xa8) = uVar14;
  lVar11 = *plVar7;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_070c5254;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar9 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar4,0);
LAB_070c5254:
  (*(code *)*puVar9)(plVar7,param_6,2,puVar9[1]);
  puVar4 = DIVR_Animation2UnityEvent_EventPair_var;
  lVar11 = *(long *)DIVR_Animation2UnityEvent_EventPair_var;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar11);
    lVar11 = *(long *)puVar4;
  }
  lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
  if (lVar13 == 0) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar11);
      lVar11 = *(long *)puVar4;
    }
    uVar14 = **(undefined8 **)(lVar11 + 0xb8);
    lVar13 = thunk_FUN_037788cc(*(undefined8 *)
                                 UnityEngine_UIElements_EventDispatcher_EventRecord_var);
    FUN_05203178(lVar13,uVar14,*(undefined8 *)System_Threading_ExecutionContext_Reader_var,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
    *plVar8 = lVar13;
    thunk_FUN_037aeb94(plVar8,lVar13);
  }
  lVar11 = *plVar7;
  lVar15 = *(long *)UnityEngine_InputForUI_EventProvider_Registration_var;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)(lVar15 + 0x20)) {
        lVar11 = lVar11 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar15 + 0x50)) * 0x10 + 0x138;
        goto LAB_070c534c;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  lVar11 = FUN_0377596c(plVar7);
LAB_070c534c:
  lVar11 = thunk_FUN_0375ad08(*(undefined8 *)(lVar11 + 8),lVar15);
  (**(code **)(lVar11 + 8))(plVar7,lVar13,lVar11);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_070c53c0;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar3,0);
LAB_070c53c0:
    (*(code *)*puVar9)(plVar7,puVar9[1]);
  }
  return;
}


