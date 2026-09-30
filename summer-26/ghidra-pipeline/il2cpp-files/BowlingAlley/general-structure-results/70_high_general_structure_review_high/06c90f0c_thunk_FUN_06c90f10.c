/*
FUNCTION_NAME: thunk_FUN_06c90f10
ENTRY_POINT: 06c90f0c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_17;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void thunk_FUN_06c90f10(undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
                       float param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  long *plVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [2];
  
  if ((DAT_076e9104 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<object>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<PlayerInput>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputAction_CallbackContext>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputDevice,_InputDeviceChange>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_set_Item__
                      );
    thunk_FUN_032e1da0(Method_System_Delegate_CreateDelegate__);
    thunk_FUN_032e1da0(PTR_DAT_072a8858);
    thunk_FUN_032e1da0(Method_System_Delegate_CreateDelegate__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_Append__
                      );
    thunk_FUN_032e1da0(Method_System_Delegate_CreateDelegate__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a83a8);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_07288de0);
    thunk_FUN_032e1da0(PTR_DAT_0727b668);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputDevice,_InputEventPtr>__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputEventPtr,_InputDevice>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727ac38);
    thunk_FUN_032e1da0(PTR_DAT_0727ac40);
    thunk_FUN_032e1da0(PTR_DAT_07279e30);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<HandGrabInteractor,_HandGrabInteractable>_GetEnumerator__
                      );
    DAT_076e9104 = 1;
  }
  auStack_b0[0] = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uVar5 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
  if (((uVar5 & 1) != 0) &&
     (uVar5 = (**(code **)(*param_5 + 0x2b8))(param_5,*(undefined8 *)(*param_5 + 0x2c0)),
     plVar13 = (long *)PTR_DAT_072794f0, (uVar5 & 1) != 0)) {
    lVar14 = param_5[0x29];
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar5 = FUN_06be9890(lVar14,0,0);
    puVar3 = 
    Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputAction_CallbackContext>__
    ;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputAction_CallbackContext>__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar14 = FUN_04c0ce30(*(undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<object>__
                           );
      lVar6 = FUN_06be6b40(param_5,0);
      if ((lVar6 == 0) ||
         (FUN_039f0f44(lVar6,0,lVar14,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_set_Item__
                      ),
         puVar4 = 
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
         , lVar14 == 0)) {
LAB_06c91b48:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar16 = *(int *)(lVar14 + 0x18);
      if (iVar16 != 0) {
        lVar6 = FUN_041e29a8(lVar14,iVar16 + -1,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                            );
        fVar30 = (float)param_2;
        if (0 < iVar16) {
          iVar15 = 0;
          do {
            lVar7 = FUN_041e29a8(lVar14,iVar15,*(undefined8 *)puVar4);
            if (lVar7 == 0) goto LAB_06c91b48;
            uVar5 = FUN_06de67fc(lVar7,0);
            fVar30 = (float)param_2;
            if ((uVar5 & 1) != 0) {
LAB_06c91198:
              lVar6 = FUN_041e29a8(lVar14,iVar15,*(undefined8 *)puVar4);
              plVar13 = (long *)PTR_DAT_072794f0;
              break;
            }
            lVar7 = FUN_041e29a8(lVar14,iVar15,*(undefined8 *)puVar4);
            if (lVar7 == 0) goto LAB_06c91b48;
            uVar5 = FUN_06de6ba8(lVar7,0);
            fVar30 = (float)param_2;
            if ((uVar5 & 1) != 0) goto LAB_06c91198;
            iVar15 = iVar15 + 1;
            plVar13 = (long *)PTR_DAT_072794f0;
          } while (iVar16 != iVar15);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_04c0cf70(lVar14,*(undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<PlayerInput>__
                    );
        if (((char)param_5[0x2d] != '\0') ||
           (FUN_06c90848(param_5,lVar6), (char)param_5[0x2d] != '\0')) {
          if ((param_5[0x20] != 0) && (lVar14 = FUN_06be6b40(param_5[0x20],0), lVar14 != 0)) {
            FUN_06be9a98(lVar14,1,0);
            if (param_5[0x20] != 0) {
              plVar10 = param_5 + 0x29;
              uVar8 = FUN_06be6b40(param_5[0x20],0);
              lVar14 = (**(code **)(*param_5 + 0x428))
                                 (param_5,uVar8,*(undefined8 *)(*param_5 + 0x430));
              param_5[0x29] = lVar14;
              thunk_FUN_0333a630(plVar10,lVar14);
              if (param_5[0x29] != 0) {
                FUN_06bed0ac(param_5[0x29],
                             *(undefined8 *)
                              Method_Oculus_Interaction_InteractableRegistry_InteractableSet<HandGrabInteractor,_HandGrabInteractable>_GetEnumerator__
                             ,0);
                if (*plVar10 != 0) {
                  FUN_06be9a98(*plVar10,1,0);
                  if (*plVar10 != 0) {
                    plVar9 = (long *)FUN_06be99dc(*plVar10,0);
                    if (plVar9 == (long *)0x0) {
                      plVar9 = (long *)0x0;
                    }
                    else if (*plVar9 != *(long *)PTR_DAT_0727b668) {
                      plVar9 = (long *)0x0;
                    }
                    if (((param_5[0x20] != 0) &&
                        (lVar14 = FUN_06be6b04(param_5[0x20],0), lVar14 != 0)) &&
                       (uVar8 = FUN_06bf4764(lVar14,0), plVar9 != (long *)0x0)) {
                      FUN_06bf5194(plVar9,uVar8,0,0);
                      if (((*plVar10 != 0) &&
                          (lVar14 = FUN_039eff84(*plVar10,*(undefined8 *)
                                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputDevice,_InputDeviceChange>__
                                                ), lVar14 != 0)) &&
                         ((*(long *)(lVar14 + 0x30) != 0 &&
                          ((lVar7 = FUN_06bf4764(*(long *)(lVar14 + 0x30),0), lVar7 != 0 &&
                           (lVar7 = FUN_06be6b40(lVar7,0), lVar7 != 0)))))) {
                        plVar10 = (long *)FUN_06be99dc(lVar7,0);
                        if (plVar10 == (long *)0x0) {
                          plVar10 = (long *)0x0;
                        }
                        else if (*plVar10 != *(long *)PTR_DAT_0727b668) {
                          plVar10 = (long *)0x0;
                        }
                        if (((*(long *)(lVar14 + 0x30) != 0) &&
                            (lVar7 = FUN_06be6b40(*(long *)(lVar14 + 0x30),0), lVar7 != 0)) &&
                           (FUN_06be9a98(lVar7,1,0), plVar10 != (long *)0x0)) {
                          FUN_06bf3744(plVar10,0);
                          if (*(long *)(lVar14 + 0x30) != 0) {
                            fVar28 = param_4;
                            fVar24 = fVar30;
                            FUN_06bf3744(*(long *)(lVar14 + 0x30),0);
                            if (*(long *)(lVar14 + 0x30) != 0) {
                              fVar31 = fVar24;
                              FUN_06bf3d9c(*(long *)(lVar14 + 0x30),0);
                              if (*(long *)(lVar14 + 0x30) != 0) {
                                fVar20 = fVar31;
                                FUN_06bf3d9c(*(long *)(lVar14 + 0x30),0);
                                lVar7 = param_5[0x2b];
                                if (lVar7 != 0) {
                                  iVar16 = *(int *)(lVar7 + 0x18);
                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                  if (0 < iVar16) {
                                    FUN_05946274(*(undefined8 *)(lVar7 + 0x10),0,iVar16,0);
                                  }
                                  puVar4 = 
                                  Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputEventPtr,_InputDevice>__
                                  ;
                                  puVar3 = PTR_DAT_072a83a8;
                                  if ((param_5[0x26] != 0) &&
                                     (lVar7 = *(long *)(param_5[0x26] + 0x10), lVar7 != 0)) {
                                    iVar16 = *(int *)(lVar7 + 0x18);
                                    if (0 < iVar16) {
                                      lVar7 = 0;
                                      iVar15 = 0;
                                      do {
                                        lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                        FUN_059660a0(lVar11,0);
                                        if (lVar11 == 0) goto LAB_06c91b48;
                                        *(long *)(lVar11 + 0x18) = (long)param_5;
                                        thunk_FUN_0333a630((long *)(lVar11 + 0x18),param_5);
                                        if ((param_5[0x26] == 0) ||
                                           (lVar12 = *(long *)(param_5[0x26] + 0x10), lVar12 == 0))
                                        goto LAB_06c91b48;
                                        uVar8 = FUN_041e29a8(lVar12,iVar15,*(undefined8 *)puVar3);
                                        lVar12 = FUN_06c91c68(param_5,uVar8,0,lVar14,param_5[0x2b]);
                                        plVar18 = (long *)(lVar11 + 0x10);
                                        *plVar18 = lVar12;
                                        thunk_FUN_0333a630(plVar18,lVar12);
                                        lVar12 = *plVar18;
                                        if (*(int *)(*plVar13 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                        }
                                        uVar5 = FUN_06bece64(lVar12,0,0);
                                        if ((uVar5 & 1) == 0) {
                                          if ((*plVar18 == 0) ||
                                             (lVar12 = *(long *)(*plVar18 + 0x38), lVar12 == 0))
                                          goto LAB_06c91b48;
                                          FUN_06e09f30(lVar12,iVar15 == (int)param_5[0x25],0);
                                          if ((*plVar18 == 0) ||
                                             (lVar12 = *(long *)(*plVar18 + 0x38), lVar12 == 0))
                                          goto LAB_06c91b48;
                                          lVar12 = *(long *)(lVar12 + 0x118);
                                          uVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ac38
                                                                    );
                                          FUN_04af3e78(uVar8,lVar11,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_InputSystem_Utilities_DelegateHelpers_InvokeCallbacksSafe<InputDevice,_InputEventPtr>__
                                                  ,0);
                                          if (lVar12 == 0) goto LAB_06c91b48;
                                          FUN_04af6388(lVar12,uVar8,*(undefined8 *)PTR_DAT_0727ac40)
                                          ;
                                          if ((*plVar18 == 0) ||
                                             (plVar13 = *(long **)(*plVar18 + 0x38),
                                             plVar13 == (long *)0x0)) goto LAB_06c91b48;
                                          if ((char)plVar13[0x24] != '\0') {
                                            (**(code **)(*plVar13 + 0x398))
                                                      (plVar13,*(undefined8 *)(*plVar13 + 0x3a0));
                                          }
                                          plVar13 = (long *)PTR_DAT_072794f0;
                                          if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
                                            thunk_FUN_032cd7c0();
                                          }
                                          uVar5 = FUN_06be9890(lVar7,0,0);
                                          if ((uVar5 & 1) != 0) {
                                            if (lVar7 == 0) goto LAB_06c91b48;
                                            auStack_b0[0] = *(undefined8 *)(lVar7 + 0x48);
                                            uStack_b8 = *(undefined8 *)(lVar7 + 0x40);
                                            uStack_c0 = *(undefined8 *)(lVar7 + 0x38);
                                            uStack_c8 = *(undefined8 *)(lVar7 + 0x30);
                                            uStack_d0 = *(undefined8 *)(lVar7 + 0x28);
                                            if ((*plVar18 == 0) ||
                                               (lVar11 = *(long *)(*plVar18 + 0x38), lVar11 == 0))
                                            goto LAB_06c91b48;
                                            uStack_e0 = *(undefined8 *)(lVar11 + 0x48);
                                            lStack_f8 = *(long *)(lVar11 + 0x30);
                                            lStack_e8 = *(long *)(lVar11 + 0x40);
                                            uStack_f0 = *(undefined8 *)(lVar11 + 0x38);
                                            uVar5 = (ulong)uStack_d0 >> 0x20;
                                            uStack_d0 = CONCAT44((int)uVar5,4);
                                            uStack_100 = CONCAT44((int)((ulong)*(undefined8 *)
                                                                                (lVar11 + 0x28) >>
                                                                       0x20),4);
                                            if (*plVar18 == 0) goto LAB_06c91b48;
                                            uStack_c0 = *(undefined8 *)(*plVar18 + 0x38);
                                            thunk_FUN_0333a630(&uStack_c0);
                                            if (*plVar18 == 0) goto LAB_06c91b48;
                                            auStack_b0[0] = *(undefined8 *)(*plVar18 + 0x38);
                                            thunk_FUN_0333a630(auStack_b0);
                                            lStack_e8 = lVar7;
                                            thunk_FUN_0333a630(&lStack_e8,lVar7);
                                            lStack_f8 = lVar7;
                                            thunk_FUN_0333a630((ulong)&uStack_100 | 8,lVar7);
                                            uStack_128 = uStack_c8;
                                            uStack_130 = uStack_d0;
                                            uStack_118 = uStack_b8;
                                            uStack_120 = uStack_c0;
                                            uStack_110 = auStack_b0[0];
                                            FUN_06e03474(lVar7,&uStack_130,0);
                                            if (*plVar18 == 0) goto LAB_06c91b48;
                                            lVar7 = *(long *)(*plVar18 + 0x38);
                                            lStack_158 = lStack_f8;
                                            uStack_160 = uStack_100;
                                            lStack_148 = lStack_e8;
                                            uStack_150 = uStack_f0;
                                            uStack_140 = uStack_e0;
                                            if (lVar7 == 0) goto LAB_06c91b48;
                                            lStack_188 = lStack_f8;
                                            uStack_190 = uStack_100;
                                            lStack_178 = lStack_e8;
                                            uStack_180 = uStack_f0;
                                            uStack_170 = uStack_e0;
                                            FUN_06e03474(lVar7,&uStack_190,0);
                                          }
                                          if (*plVar18 == 0) goto LAB_06c91b48;
                                          lVar7 = *(long *)(*plVar18 + 0x38);
                                        }
                                        iVar15 = iVar15 + 1;
                                      } while (iVar16 != iVar15);
                                    }
                                    FUN_06bf3b34(plVar10,0);
                                    if (param_5[0x2b] != 0) {
                                      fVar29 = fVar24 - fVar30;
                                      fVar31 = fVar29 + fVar31;
                                      fVar27 = fVar31 + fVar28 * (float)*(int *)(param_5[0x2b] +
                                                                                0x18);
                                      uVar5 = (ulong)(uint)(fVar27 - (((fVar28 + fVar24) -
                                                                      (param_4 + fVar30)) + fVar20))
                                      ;
                                      FUN_06bf3bc4(plVar10,0);
                                      FUN_06bf3744(plVar9,0);
                                      fVar30 = fVar29;
                                      FUN_06bf3744(plVar10,0);
                                      fVar24 = (float)uVar5;
                                      fVar29 = fVar29 - fVar30;
                                      if (0.0 < fVar29) {
                                        uVar8 = FUN_06bf3b34(plVar9,0);
                                        FUN_06bf3b34(plVar9,0);
                                        uVar5 = (ulong)(uint)(fVar24 - fVar29);
                                        FUN_06bf3bc4(uVar8,plVar9,0);
                                      }
                                      lVar7 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279e30,4);
                                      FUN_06bf4210(plVar9,lVar7,0);
                                      if ((((lVar6 != 0) &&
                                           (plVar13 = (long *)FUN_06be6b04(lVar6,0),
                                           plVar13 != (long *)0x0)) &&
                                          (*plVar13 == *(long *)PTR_DAT_0727b668)) &&
                                         (fVar20 = (float)FUN_06bf3744(plVar13,0),
                                         puVar3 = PTR_DAT_07279bf8, fVar24 = DAT_013a03a0,
                                         lVar7 != 0)) {
                                        bVar2 = true;
                                        uVar19 = uVar5;
                                        iVar16 = 0;
                                        do {
                                          fVar29 = fVar20;
                                          if (!bVar2) {
                                            fVar29 = (float)uVar19;
                                          }
                                          uVar19 = 0;
                                          fVar32 = fVar27 + fVar20;
                                          if (!bVar2) {
                                            fVar32 = fVar30 + (float)uVar5;
                                          }
                                          puVar17 = (undefined4 *)(lVar7 + 0x28);
                                          do {
                                            if (*(uint *)(lVar7 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                                              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                                                        ();
                                            }
                                            fVar25 = (float)puVar17[-1];
                                            fVar21 = (float)FUN_06bf6070(puVar17[-2],fVar25,*puVar17
                                                                         ,plVar13,0);
                                            fVar23 = fVar21;
                                            if (!bVar2) {
                                              fVar23 = fVar25;
                                            }
                                            if (fVar23 < fVar29) {
                                              fVar23 = fVar21;
                                              if (!bVar2) {
                                                fVar23 = fVar25;
                                              }
                                              if (DAT_076ce2ba == '\0') {
                                                thunk_FUN_032e1da0(puVar3);
                                                DAT_076ce2ba = '\x01';
                                              }
                                              fVar22 = ABS(fVar23);
                                              if (ABS(fVar23) <= ABS(fVar29)) {
                                                fVar22 = ABS(fVar29);
                                              }
                                              fVar22 = fVar22 * fVar24;
                                              fVar26 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
                                              if (fVar22 <= fVar26) {
                                                fVar22 = fVar26;
                                              }
                                              if (ABS(fVar29 - fVar23) < fVar22) goto LAB_06c918f0;
LAB_06c91968:
                                              if (*(int *)(*(long *)PTR_DAT_07288de0 + 0xe0) == 0) {
                                                thunk_FUN_032cd7c0();
                                              }
                                              FUN_06de5ef8(plVar9,iVar16,0,0,0);
                                              break;
                                            }
LAB_06c918f0:
                                            fVar23 = fVar21;
                                            if (!bVar2) {
                                              fVar23 = fVar25;
                                            }
                                            if (fVar32 < fVar23) {
                                              if (!bVar2) {
                                                fVar21 = fVar25;
                                              }
                                              if (DAT_076ce2ba == '\0') {
                                                thunk_FUN_032e1da0(puVar3);
                                                DAT_076ce2ba = '\x01';
                                              }
                                              fVar23 = ABS(fVar21);
                                              if (ABS(fVar21) <= ABS(fVar32)) {
                                                fVar23 = ABS(fVar32);
                                              }
                                              fVar23 = fVar23 * fVar24;
                                              fVar25 = **(float **)(*(long *)puVar3 + 0xb8) * 8.0;
                                              if (fVar23 <= fVar25) {
                                                fVar23 = fVar25;
                                              }
                                              if (fVar23 <= ABS(fVar32 - fVar21)) goto LAB_06c91968;
                                            }
                                            uVar19 = uVar19 + 1;
                                            puVar17 = puVar17 + 3;
                                          } while (uVar19 != 4);
                                          puVar4 = Method_System_Delegate_CreateDelegate__;
                                          uVar19 = uVar5 & 0xffffffff;
                                          bVar2 = false;
                                          bVar1 = iVar16 == 0;
                                          iVar16 = 1;
                                        } while (bVar1);
                                        lVar7 = param_5[0x2b];
                                        if (lVar7 != 0) {
                                          iVar16 = *(int *)(lVar7 + 0x18);
                                          if (iVar16 < 1) {
LAB_06c91a98:
                                            FUN_06c91f54((int)param_5[0x28],0,0x3f800000,param_5);
                                            if ((param_5[0x20] != 0) &&
                                               (lVar7 = FUN_06be6b40(param_5[0x20],0), lVar7 != 0))
                                            {
                                              FUN_06be9a98(lVar7,0,0);
                                              lVar14 = FUN_06be6b40(lVar14,0);
                                              if (lVar14 != 0) {
                                                FUN_06be9a98(lVar14,0,0);
                                                lVar14 = (**(code **)(*param_5 + 0x408))
                                                                   (param_5,lVar6,
                                                                    *(undefined8 *)
                                                                     (*param_5 + 0x410));
                                                param_5[0x2a] = lVar14;
                                                thunk_FUN_0333a630(param_5 + 0x2a);
                                                return;
                                              }
                                            }
                                          }
                                          else {
                                            iVar15 = 0;
                                            do {
                                              iVar16 = iVar16 + -1;
                                              lVar7 = FUN_041e29a8(lVar7,iVar15,
                                                                   *(undefined8 *)puVar4);
                                              if ((lVar7 == 0) ||
                                                 (lVar7 = *(long *)(lVar7 + 0x30), lVar7 == 0))
                                              break;
                                              uVar8 = FUN_06bf37e0(lVar7,0);
                                              FUN_06bf3870(uVar8,0,lVar7,0);
                                              uVar8 = FUN_06bf38fc(lVar7,0);
                                              fVar30 = 0.0;
                                              FUN_06bf398c(uVar8,0,lVar7,0);
                                              uVar8 = FUN_06bf3a18(lVar7,0);
                                              FUN_06bf3c50(lVar7,0);
                                              FUN_06bf3aa8(uVar8,fVar31 + fVar28 * (float)iVar16 +
                                                                 fVar28 * fVar30,lVar7,0);
                                              uVar8 = FUN_06bf3b34(lVar7,0);
                                              FUN_06bf3bc4(uVar8,fVar28,lVar7,0);
                                              if (iVar16 == 0) goto LAB_06c91a98;
                                              lVar7 = param_5[0x2b];
                                              iVar15 = iVar15 + 1;
                                            } while (lVar7 != 0);
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
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_06c91b48;
        }
      }
    }
  }
  return;
}


