/*
FUNCTION_NAME: FUN_070c4a44
ENTRY_POINT: 070c4a44
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 113
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x070c5408) */

void FUN_070c4a44(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined8 *param_7)

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
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1a0 [16];
  undefined8 local_190;
  ulong uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined1 local_120 [16];
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  long local_98;
  
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
  local_b0._8_8_ = 0;
  local_b0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_c0._0_8_ = 0;
  local_d0._8_8_ = 0;
  local_d0._0_8_ = 0;
  local_98 = 0;
  local_e0._8_8_ = 0;
  local_e0._0_8_ = 0;
  uVar10 = *param_7;
  piVar16 = (int *)(param_1 + 0xb8);
  iVar24 = *piVar16;
  local_f0 = *(undefined4 *)(param_1 + 0xe8);
  uStack_108 = *(ulong *)(param_1 + 0xd0);
  local_110 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0xe0);
  local_100 = *(undefined8 *)(param_1 + 0xd8);
  local_120._8_8_ = *(undefined8 *)(param_1 + 0xc0);
  local_120._0_8_ = *(undefined8 *)piVar16;
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
  local_150 = local_110;
  local_130 = local_f0;
  uStack_138 = uStack_f8;
  local_140 = local_100;
  uStack_148 = uStack_108 & 0xffffffff;
  uStack_158 = CONCAT44(SUB84(local_120._8_8_,4),1);
  local_160 = uVar14;
  FUN_07590518(&local_160,5,0);
  local_170 = local_130;
  uStack_188 = uStack_148;
  local_190 = local_150;
  uStack_178 = uStack_138;
  local_180 = local_140;
  local_1a0._8_8_ = uStack_158;
  local_1a0._0_8_ = local_160;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uStack_1d8 = local_1a0._8_8_;
  local_1e0 = local_1a0._0_8_;
  uStack_1c8 = uStack_188;
  uStack_1d0 = local_190;
  uStack_1b8 = uStack_178;
  local_1c0 = local_180;
  local_1b0 = local_170;
  local_b0 = FUN_071026d0(param_2,&local_1e0,*(undefined8 *)puVar3,1,1,1,0);
  uStack_210 = *(undefined8 *)(param_1 + 200);
  local_1f0 = *(undefined4 *)(param_1 + 0xe8);
  uStack_1f8 = *(undefined8 *)(param_1 + 0xe0);
  local_200 = *(undefined8 *)(param_1 + 0xd8);
  uStack_208 = *(ulong *)(param_1 + 0xd0) & 0xffffffff;
  uStack_218 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20),1);
  local_220 = CONCAT44(iVar1,iVar24);
  FUN_07590518(&local_220,0x30,0);
  uStack_258 = uStack_218;
  local_260 = local_220;
  uStack_248 = uStack_208;
  uStack_250 = uStack_210;
  uStack_238 = uStack_1f8;
  local_240 = local_200;
  local_230 = local_1f0;
  local_c0 = FUN_071026d0(param_2,&local_260,*(undefined8 *)puVar5,1,1,1,0);
  uStack_290 = *(undefined8 *)(param_1 + 200);
  local_270 = *(undefined4 *)(param_1 + 0xe8);
  uStack_278 = *(undefined8 *)(param_1 + 0xe0);
  local_280 = *(undefined8 *)(param_1 + 0xd8);
  uStack_288 = *(ulong *)(param_1 + 0xd0) & 0xffffffff;
  uStack_298 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20),1);
  local_2a0 = CONCAT44(iVar1,iVar24);
  FUN_07590518(&local_2a0,0x30,0);
  uStack_2d8 = uStack_298;
  local_2e0 = local_2a0;
  uStack_2c8 = uStack_288;
  uStack_2d0 = uStack_290;
  uStack_2b8 = uStack_278;
  local_2c0 = local_280;
  local_2b0 = local_270;
  local_d0 = FUN_071026d0(param_2,&local_2e0,
                          *(undefined8 *)Cinemachine_CinemachineConfiner2D_ShapeCache_var,1,1,1,0);
  puVar3 = PTR_DAT_07d896f8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar7 = (long *)FUN_041b4e54(param_2,*(undefined8 *)
                                         UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                                ,&local_98,
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
  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar24 = *(int *)(param_1 + 0xbc);
  *(undefined8 *)(local_98 + 0x10) = *(undefined8 *)(param_1 + 0x230);
  thunk_FUN_037aeb94();
  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  fVar22 = 1.0 / (float)iVar24;
  *(undefined4 *)(local_98 + 0x18) = 2;
  *(float *)(local_98 + 0x1c) = fVar22 + fVar22;
  *(float *)(local_98 + 0x20) = fVar20;
  *(float *)(local_98 + 0x24) = ((fVar17 / 1000.0) * (fVar18 / fVar19)) / (fVar20 - fVar17 / 1000.0)
  ;
  *(float *)(local_98 + 0x28) = fVar21;
  *(float *)(local_98 + 0x2c) = fVar23;
  *(undefined1 *)(local_98 + 0x30) = *(undefined1 *)(param_1 + 0x247);
  uVar14 = *param_5;
  *(undefined8 *)(local_98 + 0x3c) = param_5[1];
  *(undefined8 *)(local_98 + 0x34) = uVar14;
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
  lVar11 = local_98;
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
  local_e0 = FUN_070a46e0(param_3,0);
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
  (*(code *)*puVar9)(plVar7,local_e0,1,puVar9[1]);
  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(local_98 + 0x58) = uVar10;
  thunk_FUN_037aeb94();
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(local_98 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x38);
  thunk_FUN_037aeb94();
  local_120 = local_b0;
  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined1 (*) [16])(local_98 + 0x78) = local_b0;
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
  (*(code *)*puVar9)(plVar7,local_b0,3,puVar9[1]);
  local_1a0 = local_c0;
  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined1 (*) [16])(local_98 + 0x88) = local_c0;
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
  (*(code *)*puVar9)(plVar7,local_c0,3,puVar9[1]);
  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined1 (*) [16])(local_98 + 0x98) = local_d0;
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
  (*(code *)*puVar9)(plVar7,local_d0,3,puVar9[1]);
  uVar14 = *param_6;
  if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(local_98 + 0xb0) = param_6[1];
  *(undefined8 *)(local_98 + 0xa8) = uVar14;
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


