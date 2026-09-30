/*
FUNCTION_NAME: thunk_FUN_067fb214
ENTRY_POINT: 067fbe94
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void thunk_FUN_067fb214(undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
                       float param_4,long *param_5)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
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
  float fVar33;
  float fVar34;
  float fVar35;
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
  
  if ((DAT_076e0c1a & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727c5b8);
    thunk_FUN_032e1da0(Method_UnityEngine_IntegratedSubsystem<XRInputSubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_set_Item__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_XR_InputFeatureUsage<Vector2>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_XR_InputFeatureUsage<Vector2>_get_name__);
    thunk_FUN_032e1da0(Method_UnityEngine_InputSystem_InputControl<Vector3>_FinishSetup__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_Append__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_XR_InputFeatureUsage<Vector3>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_07288de0);
    thunk_FUN_032e1da0(PTR_DAT_0727b668);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_Append__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_get_Item__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_IntegratedSubsystem<XRMeshSubsystemDescriptor>__ctor__);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727ac38);
    thunk_FUN_032e1da0(PTR_DAT_0727ac40);
    thunk_FUN_032e1da0(PTR_DAT_07279e30);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<HandGrabInteractor,_HandGrabInteractable>_GetEnumerator__
                      );
    DAT_076e0c1a = 1;
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
  if (param_5[0x2f] != 0) {
    FUN_06beadf0(param_5,param_5[0x2f],0);
    FUN_067fa584(param_5);
  }
  uVar8 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
  if (((uVar8 & 1) != 0) &&
     (uVar8 = (**(code **)(*param_5 + 0x2b8))(param_5,*(undefined8 *)(*param_5 + 0x2c0)),
     puVar4 = PTR_DAT_072794f0, (uVar8 & 1) != 0)) {
    lVar16 = param_5[0x2a];
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar8 = FUN_06be9890(lVar16,0,0);
    puVar5 = 
    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_get_Item__
    ;
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_get_Item__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar16 = FUN_04a0bebc(*(undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                           );
      lVar9 = FUN_06be6b40(param_5,0);
      if ((lVar9 == 0) ||
         (FUN_039f0f44(lVar9,0,lVar16,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_set_Item__
                      ),
         puVar6 = 
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
         , lVar16 == 0)) {
LAB_067fbe90:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(int *)(lVar16 + 0x18) != 0) {
        lVar9 = FUN_041e29a8(lVar16,*(int *)(lVar16 + 0x18) + -1,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                            );
        fVar32 = (float)param_2;
        if (0 < *(int *)(lVar16 + 0x18)) {
          iVar17 = 0;
          do {
            lVar10 = FUN_041e29a8(lVar16,iVar17,*(undefined8 *)puVar6);
            if (lVar10 == 0) goto LAB_067fbe90;
            uVar8 = FUN_06de67fc(lVar10,0);
            fVar32 = (float)param_2;
            if ((uVar8 & 1) != 0) {
              lVar9 = FUN_041e29a8(lVar16,iVar17,*(undefined8 *)puVar6);
              break;
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(lVar16 + 0x18));
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_04a0bf54(lVar16,*(undefined8 *)
                             Method_UnityEngine_InputSystem_Utilities_InlinedArray<OnScreenControl_OnScreenDeviceInfo>_Append__
                    );
        if (((char)param_5[0x2e] != '\0') || (FUN_067fab74(param_5), (char)param_5[0x2e] != '\0')) {
          if ((param_5[0x20] != 0) && (lVar16 = FUN_06be6b40(param_5[0x20],0), lVar16 != 0)) {
            FUN_06be9a98(lVar16,1,0);
            if (((param_5[0x20] != 0) &&
                (lVar16 = FUN_03958adc(param_5[0x20],*(undefined8 *)PTR_DAT_0727c5b8), lVar9 != 0))
               && (uVar7 = FUN_06de6d28(lVar9,0), lVar16 != 0)) {
              FUN_06de6d64(lVar16,uVar7,0);
              if (param_5[0x20] != 0) {
                plVar13 = param_5 + 0x2a;
                uVar11 = FUN_06be6b40(param_5[0x20],0);
                lVar16 = (**(code **)(*param_5 + 0x428))
                                   (param_5,uVar11,*(undefined8 *)(*param_5 + 0x430));
                param_5[0x2a] = lVar16;
                thunk_FUN_0333a630(plVar13,lVar16);
                if (param_5[0x2a] != 0) {
                  FUN_06bed0ac(param_5[0x2a],
                               *(undefined8 *)
                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<HandGrabInteractor,_HandGrabInteractable>_GetEnumerator__
                               ,0);
                  if (*plVar13 != 0) {
                    FUN_06be9a98(*plVar13,1,0);
                    if (*plVar13 != 0) {
                      plVar12 = (long *)FUN_06be99dc(*plVar13,0);
                      if (plVar12 == (long *)0x0) {
                        plVar12 = (long *)0x0;
                      }
                      else if (*plVar12 != *(long *)PTR_DAT_0727b668) {
                        plVar12 = (long *)0x0;
                      }
                      if (((param_5[0x20] != 0) &&
                          (lVar16 = FUN_06be6b04(param_5[0x20],0), lVar16 != 0)) &&
                         (uVar11 = FUN_06bf4764(lVar16,0), plVar12 != (long *)0x0)) {
                        FUN_06bf5194(plVar12,uVar11,0,0);
                        if (((*plVar13 != 0) &&
                            (lVar16 = FUN_039eff84(*plVar13,*(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_IntegratedSubsystem<XRInputSubsystemDescriptor>__ctor__
                                                  ), lVar16 != 0)) &&
                           ((*(long *)(lVar16 + 0x30) != 0 &&
                            ((lVar10 = FUN_06bf4764(*(long *)(lVar16 + 0x30),0), lVar10 != 0 &&
                             (lVar10 = FUN_06be6b40(lVar10,0), lVar10 != 0)))))) {
                          plVar13 = (long *)FUN_06be99dc(lVar10,0);
                          if (plVar13 == (long *)0x0) {
                            plVar13 = (long *)0x0;
                          }
                          else if (*plVar13 != *(long *)PTR_DAT_0727b668) {
                            plVar13 = (long *)0x0;
                          }
                          if (((*(long *)(lVar16 + 0x30) != 0) &&
                              (lVar10 = FUN_06be6b40(*(long *)(lVar16 + 0x30),0), lVar10 != 0)) &&
                             (FUN_06be9a98(lVar10,1,0), plVar13 != (long *)0x0)) {
                            FUN_06bf3744(plVar13,0);
                            if (*(long *)(lVar16 + 0x30) != 0) {
                              fVar31 = param_4;
                              fVar27 = fVar32;
                              FUN_06bf3744(*(long *)(lVar16 + 0x30),0);
                              if (*(long *)(lVar16 + 0x30) != 0) {
                                fVar33 = fVar31;
                                fVar35 = fVar27;
                                FUN_06bf3d9c(*(long *)(lVar16 + 0x30),0);
                                if (*(long *)(lVar16 + 0x30) != 0) {
                                  fVar26 = fVar35;
                                  FUN_06bf3d9c(*(long *)(lVar16 + 0x30),0);
                                  lVar10 = param_5[0x2c];
                                  if (lVar10 != 0) {
                                    iVar17 = *(int *)(lVar10 + 0x18);
                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                    if (0 < iVar17) {
                                      FUN_05946274(*(undefined8 *)(lVar10 + 0x10),0,iVar17,0);
                                    }
                                    puVar6 = 
                                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                    ;
                                    puVar5 = 
                                    Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                                    ;
                                    lVar10 = param_5[0x27];
                                    if (lVar10 != 0) {
                                      fVar30 = fVar27 - fVar32;
                                      lVar22 = 0;
                                      iVar17 = 0;
                                      fVar35 = fVar30 + fVar35;
                                      while( true ) {
                                        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_067fbe90;
                                        if (*(int *)(*(long *)(lVar10 + 0x10) + 0x18) <= iVar17)
                                        break;
                                        lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar6);
                                        FUN_059660a0(lVar10,0);
                                        if (lVar10 == 0) goto LAB_067fbe90;
                                        *(long *)(lVar10 + 0x18) = (long)param_5;
                                        thunk_FUN_0333a630((long *)(lVar10 + 0x18),param_5);
                                        if ((param_5[0x27] == 0) ||
                                           (lVar14 = *(long *)(param_5[0x27] + 0x10), lVar14 == 0))
                                        goto LAB_067fbe90;
                                        uVar11 = FUN_041e29a8(lVar14,iVar17,*(undefined8 *)puVar5);
                                        lVar14 = FUN_067fbfd8(param_5,uVar11,0,lVar16,param_5[0x2c])
                                        ;
                                        plVar20 = (long *)(lVar10 + 0x10);
                                        *plVar20 = lVar14;
                                        thunk_FUN_0333a630(plVar20,lVar14);
                                        lVar14 = *plVar20;
                                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                          thunk_FUN_032cd7c0();
                                        }
                                        uVar8 = FUN_06bece64(lVar14,0,0);
                                        if ((uVar8 & 1) == 0) {
                                          if ((*plVar20 == 0) ||
                                             (lVar14 = *(long *)(*plVar20 + 0x38), lVar14 == 0))
                                          goto LAB_067fbe90;
                                          FUN_06e09f30(lVar14,iVar17 == (int)param_5[0x26],0);
                                          if ((*plVar20 == 0) ||
                                             (lVar14 = *(long *)(*plVar20 + 0x38), lVar14 == 0))
                                          goto LAB_067fbe90;
                                          lVar14 = *(long *)(lVar14 + 0x118);
                                          uVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                       PTR_DAT_0727ac38);
                                          FUN_04af3e78(uVar11,lVar10,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_IntegratedSubsystem<XRMeshSubsystemDescriptor>__ctor__
                                                  ,0);
                                          if (lVar14 == 0) goto LAB_067fbe90;
                                          FUN_04af6388(lVar14,uVar11,*(undefined8 *)PTR_DAT_0727ac40
                                                      );
                                          if ((*plVar20 == 0) ||
                                             (plVar15 = *(long **)(*plVar20 + 0x38),
                                             plVar15 == (long *)0x0)) goto LAB_067fbe90;
                                          if ((char)plVar15[0x24] != '\0') {
                                            (**(code **)(*plVar15 + 0x398))
                                                      (plVar15,*(undefined8 *)(*plVar15 + 0x3a0));
                                          }
                                          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                            thunk_FUN_032cd7c0();
                                          }
                                          uVar8 = FUN_06be9890(lVar22,0,0);
                                          if ((uVar8 & 1) != 0) {
                                            if (lVar22 == 0) goto LAB_067fbe90;
                                            auStack_b0[0] = *(undefined8 *)(lVar22 + 0x48);
                                            uStack_b8 = *(undefined8 *)(lVar22 + 0x40);
                                            uStack_c0 = *(undefined8 *)(lVar22 + 0x38);
                                            uStack_c8 = *(undefined8 *)(lVar22 + 0x30);
                                            uStack_d0 = *(undefined8 *)(lVar22 + 0x28);
                                            if ((*plVar20 == 0) ||
                                               (lVar10 = *(long *)(*plVar20 + 0x38), lVar10 == 0))
                                            goto LAB_067fbe90;
                                            uStack_e0 = *(undefined8 *)(lVar10 + 0x48);
                                            lStack_f8 = *(long *)(lVar10 + 0x30);
                                            lStack_e8 = *(long *)(lVar10 + 0x40);
                                            uStack_f0 = *(undefined8 *)(lVar10 + 0x38);
                                            uVar8 = (ulong)uStack_d0 >> 0x20;
                                            uStack_d0 = CONCAT44((int)uVar8,4);
                                            uStack_100 = CONCAT44((int)((ulong)*(undefined8 *)
                                                                                (lVar10 + 0x28) >>
                                                                       0x20),4);
                                            if (*plVar20 == 0) goto LAB_067fbe90;
                                            uStack_c0 = *(undefined8 *)(*plVar20 + 0x38);
                                            thunk_FUN_0333a630(&uStack_c0);
                                            if (*plVar20 == 0) goto LAB_067fbe90;
                                            auStack_b0[0] = *(undefined8 *)(*plVar20 + 0x38);
                                            thunk_FUN_0333a630(auStack_b0);
                                            lStack_e8 = lVar22;
                                            thunk_FUN_0333a630(&lStack_e8,lVar22);
                                            lStack_f8 = lVar22;
                                            thunk_FUN_0333a630((ulong)&uStack_100 | 8,lVar22);
                                            uStack_128 = uStack_c8;
                                            uStack_130 = uStack_d0;
                                            uStack_118 = uStack_b8;
                                            uStack_120 = uStack_c0;
                                            uStack_110 = auStack_b0[0];
                                            FUN_06e03474(lVar22,&uStack_130,0);
                                            if (*plVar20 == 0) goto LAB_067fbe90;
                                            lVar10 = *(long *)(*plVar20 + 0x38);
                                            lStack_158 = lStack_f8;
                                            uStack_160 = uStack_100;
                                            lStack_148 = lStack_e8;
                                            uStack_150 = uStack_f0;
                                            uStack_140 = uStack_e0;
                                            if (lVar10 == 0) goto LAB_067fbe90;
                                            lStack_188 = lStack_f8;
                                            uStack_190 = uStack_100;
                                            lStack_178 = lStack_e8;
                                            uStack_180 = uStack_f0;
                                            uStack_170 = uStack_e0;
                                            FUN_06e03474(lVar10,&uStack_190,0);
                                          }
                                          if (*plVar20 == 0) goto LAB_067fbe90;
                                          lVar22 = *(long *)(*plVar20 + 0x38);
                                        }
                                        lVar10 = param_5[0x27];
                                        iVar17 = iVar17 + 1;
                                        if (lVar10 == 0) goto LAB_067fbe90;
                                      }
                                      FUN_06bf3b34(plVar13,0);
                                      if (param_5[0x2c] == 0) goto LAB_067fbe90;
                                      uVar8 = (ulong)(uint)((fVar35 + fVar31 * (float)*(int *)(
                                                  param_5[0x2c] + 0x18)) -
                                                  (((fVar31 + fVar27) - (param_4 + fVar32)) + fVar26
                                                  ));
                                      FUN_06bf3bc4(plVar13,0);
                                      FUN_06bf3744(plVar12,0);
                                      fVar32 = fVar33;
                                      FUN_06bf3744(plVar13,0);
                                      fVar27 = (float)uVar8;
                                      fVar33 = fVar33 - fVar32;
                                      if (0.0 < fVar33) {
                                        uVar11 = FUN_06bf3b34(plVar12,0);
                                        FUN_06bf3b34(plVar12,0);
                                        uVar8 = (ulong)(uint)(fVar27 - fVar33);
                                        FUN_06bf3bc4(uVar11,plVar12,0);
                                      }
                                      lVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279e30,4);
                                      FUN_06bf4210(plVar12,lVar10,0);
                                      plVar13 = (long *)FUN_06be6b04(lVar9,0);
                                      if (((plVar13 == (long *)0x0) ||
                                          (*plVar13 != *(long *)PTR_DAT_0727b668)) ||
                                         (fVar33 = (float)FUN_06bf3744(plVar13,0),
                                         puVar4 = PTR_DAT_07279bf8, fVar27 = DAT_013a03a0,
                                         lVar10 == 0)) goto LAB_067fbe90;
                                      bVar3 = true;
                                      uVar21 = uVar8;
                                      iVar17 = 0;
                                      do {
                                        fVar26 = fVar33;
                                        if (!bVar3) {
                                          fVar26 = (float)uVar21;
                                        }
                                        uVar21 = 0;
                                        fVar34 = fVar30 + fVar33;
                                        if (!bVar3) {
                                          fVar34 = fVar32 + (float)uVar8;
                                        }
                                        puVar19 = (undefined4 *)(lVar10 + 0x28);
                                        do {
                                          if (*(uint *)(lVar10 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                                            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality
                                                      ();
                                          }
                                          fVar28 = (float)puVar19[-1];
                                          fVar23 = (float)FUN_06bf6070(puVar19[-2],fVar28,*puVar19,
                                                                       plVar13,0);
                                          fVar25 = fVar23;
                                          if (!bVar3) {
                                            fVar25 = fVar28;
                                          }
                                          if (fVar25 < fVar26) {
                                            fVar25 = fVar23;
                                            if (!bVar3) {
                                              fVar25 = fVar28;
                                            }
                                            if (DAT_076ce2ba == '\0') {
                                              thunk_FUN_032e1da0(puVar4);
                                              DAT_076ce2ba = '\x01';
                                            }
                                            fVar24 = ABS(fVar25);
                                            if (ABS(fVar25) <= ABS(fVar26)) {
                                              fVar24 = ABS(fVar26);
                                            }
                                            fVar24 = fVar24 * fVar27;
                                            fVar29 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
                                            if (fVar24 <= fVar29) {
                                              fVar24 = fVar29;
                                            }
                                            if (ABS(fVar26 - fVar25) < fVar24) goto LAB_067fbc28;
LAB_067fbca0:
                                            if (*(int *)(*(long *)PTR_DAT_07288de0 + 0xe0) == 0) {
                                              thunk_FUN_032cd7c0();
                                            }
                                            FUN_06de5ef8(plVar12,iVar17,0,0,0);
                                            break;
                                          }
LAB_067fbc28:
                                          fVar25 = fVar23;
                                          if (!bVar3) {
                                            fVar25 = fVar28;
                                          }
                                          if (fVar34 < fVar25) {
                                            if (!bVar3) {
                                              fVar23 = fVar28;
                                            }
                                            if (DAT_076ce2ba == '\0') {
                                              thunk_FUN_032e1da0(puVar4);
                                              DAT_076ce2ba = '\x01';
                                            }
                                            fVar25 = ABS(fVar23);
                                            if (ABS(fVar23) <= ABS(fVar34)) {
                                              fVar25 = ABS(fVar34);
                                            }
                                            fVar25 = fVar25 * fVar27;
                                            fVar28 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
                                            if (fVar25 <= fVar28) {
                                              fVar25 = fVar28;
                                            }
                                            if (fVar25 <= ABS(fVar34 - fVar23)) goto LAB_067fbca0;
                                          }
                                          uVar21 = uVar21 + 1;
                                          puVar19 = puVar19 + 3;
                                        } while (uVar21 != 4);
                                        puVar5 = 
                                        Method_UnityEngine_XR_InputFeatureUsage<Vector3>__ctor__;
                                        uVar21 = uVar8 & 0xffffffff;
                                        bVar3 = false;
                                        bVar1 = iVar17 == 0;
                                        iVar17 = 1;
                                      } while (bVar1);
                                      lVar10 = param_5[0x2c];
                                      if (lVar10 == 0) goto LAB_067fbe90;
                                      iVar17 = 0;
                                      iVar18 = -1;
                                      while (iVar17 < *(int *)(lVar10 + 0x18)) {
                                        lVar10 = FUN_041e29a8(lVar10,iVar17,*(undefined8 *)puVar5);
                                        if ((lVar10 == 0) ||
                                           (lVar10 = *(long *)(lVar10 + 0x30), lVar10 == 0))
                                        goto LAB_067fbe90;
                                        uVar11 = FUN_06bf37e0(lVar10,0);
                                        FUN_06bf3870(uVar11,0,lVar10,0);
                                        uVar11 = FUN_06bf38fc(lVar10,0);
                                        fVar32 = 0.0;
                                        FUN_06bf398c(uVar11,0,lVar10,0);
                                        uVar11 = FUN_06bf3a18(lVar10,0);
                                        if (param_5[0x2c] == 0) goto LAB_067fbe90;
                                        iVar2 = *(int *)(param_5[0x2c] + 0x18);
                                        FUN_06bf3c50(lVar10,0);
                                        FUN_06bf3aa8(uVar11,fVar31 * fVar32 +
                                                            fVar35 + fVar31 * (float)(iVar18 + iVar2
                                                                                     ),lVar10,0);
                                        uVar11 = FUN_06bf3b34(lVar10,0);
                                        FUN_06bf3bc4(uVar11,fVar31,lVar10,0);
                                        lVar10 = param_5[0x2c];
                                        iVar17 = iVar17 + 1;
                                        iVar18 = iVar18 + -1;
                                        if (lVar10 == 0) goto LAB_067fbe90;
                                      }
                                      FUN_067fc2c8((int)param_5[0x29],0,0x3f800000,param_5);
                                      if ((param_5[0x20] != 0) &&
                                         (lVar10 = FUN_06be6b40(param_5[0x20],0), lVar10 != 0)) {
                                        FUN_06be9a98(lVar10,0,0);
                                        lVar16 = FUN_06be6b40(lVar16,0);
                                        if (lVar16 != 0) {
                                          FUN_06be9a98(lVar16,0,0);
                                          lVar16 = (**(code **)(*param_5 + 0x408))
                                                             (param_5,lVar9,
                                                              *(undefined8 *)(*param_5 + 0x410));
                                          param_5[0x2b] = lVar16;
                                          thunk_FUN_0333a630(param_5 + 0x2b);
                                          return;
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
          goto LAB_067fbe90;
        }
      }
    }
  }
  return;
}


