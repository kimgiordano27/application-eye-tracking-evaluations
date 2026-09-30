/*
FUNCTION_NAME: FUN_01554160
ENTRY_POINT: 01554160
PROGRAM: Lovesick-libil2cpp.so
SCORE: 217
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void FUN_01554160(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  long *plVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  if ((DAT_03777b64 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_LocalDataStoreSlot>_Add__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_GetEnumerator__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(PTR_DAT_033ec208);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPose>_get_HasValue__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(StringLiteral_8403);
    thunk_FUN_00d48444(PTR_DAT_033f6830);
    thunk_FUN_00d48444(StringLiteral_10718);
    thunk_FUN_00d48444(UnityEngine_UI_RawImage_var);
    thunk_FUN_00d48444(Method_System_Collections_ObjectModel_Collection<IEnumerable<Claim>>__ctor__)
    ;
    DAT_03777b64 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  lVar16 = *(long *)(param_5 + 0x50);
  if ((lVar16 != 0) && (lVar18 = *(long *)(lVar16 + 0x40), lVar18 != 0)) {
    lVar16 = *(long *)(lVar16 + 0x38);
    uVar20 = FUN_026a1758(lVar18,0);
    local_b0 = CONCAT44(param_2,uVar20);
    local_a8 = CONCAT44(param_4,param_3);
    fVar21 = (float)FUN_026884c4(&local_b0,0);
    uVar25 = FUN_026884d4(&local_b0,0);
    fVar29 = (float)uVar25;
    fVar22 = fVar21 / fVar29;
    fVar26 = fVar29 / fVar21;
    if (fVar29 <= fVar21) {
      fVar22 = 1.0;
    }
    fVar27 = fVar26;
    if (fVar21 <= fVar29) {
      fVar27 = 1.0;
    }
    bVar8 = *(char *)(param_5 + 0x48) == '\0';
    fVar28 = (float)(int)((uint)bVar8 * -0x10 + 0x640);
    if (DAT_03775e60 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775e60 = '\x01';
    }
    puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
    fVar22 = fVar22 * fVar28;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
      cVar14 = DAT_03775e60;
    }
    else {
      cVar14 = '\x01';
    }
    iVar2 = -0x80000000;
    if ((float)(int)fVar22 != INFINITY) {
      iVar2 = (int)fVar22;
    }
    if (cVar14 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775e60 = '\x01';
    }
    puVar4 = PTR_DAT_033ec208;
    fVar27 = fVar27 * fVar28;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    fVar22 = INFINITY;
    iVar3 = -0x80000000;
    if ((float)(int)fVar27 != INFINITY) {
      iVar3 = (int)fVar27;
    }
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar4 = PTR_DAT_033f6830;
    puVar5 = PTR_DAT_033f3868;
    if (lVar11 != 0) {
      iVar15 = (uint)bVar8 * 0x10;
      iVar1 = iVar2 + iVar15;
      iVar15 = iVar3 + iVar15;
      FUN_02676bbc(lVar11,iVar1,iVar15,0,0,1,0);
      FUN_02675230(lVar11,*(char *)(param_5 + 0x48) == '\0',0);
      *(long *)(param_5 + 0x28) = lVar11;
      uVar12 = FUN_0268b6ac(param_5,0);
      uVar12 = FUN_015f5b28(uVar12,*(undefined8 *)puVar4,0);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if (lVar11 != 0) {
        FUN_0268afbc(lVar11,uVar12,0);
        lVar13 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                           (lVar11,0);
        puVar4 = Method_System_Collections_Generic_Dictionary<string,_LocalDataStoreSlot>_Add__;
        if (lVar13 != 0) {
          FUN_026a0040(lVar13,lVar16,0,0);
          lVar11 = FUN_010e5800(lVar11,*(undefined8 *)puVar4);
          *(long *)(param_5 + 0x18) = lVar11;
          if (lVar11 != 0) {
            FUN_026853f4(lVar11,0,0);
            if ((*(long *)(param_5 + 0x18) != 0) &&
               (lVar11 = FUN_0268fd10(*(long *)(param_5 + 0x18),0), lVar16 != 0)) {
              fVar23 = (float)FUN_0269f578(lVar16,0);
              fVar27 = fVar22;
              fVar28 = fVar26;
              fVar24 = (float)FUN_0269fb58(lVar16,0);
              if (lVar11 != 0) {
                FUN_0269f618(fVar23 - fVar24,fVar22 - fVar27,fVar26 - fVar28,lVar11,0);
                if (*(long *)(param_5 + 0x18) != 0) {
                  FUN_0268427c(*(long *)(param_5 + 0x18),1,0);
                  if (*(long *)(param_5 + 0x18) != 0) {
                    FUN_02689f9c(*(long *)(param_5 + 0x18),0,0);
                    if (*(long *)(param_5 + 0x18) != 0) {
                      FUN_02684a90(*(long *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x28),0);
                      lVar11 = *(long *)(param_5 + 0x18);
                      lVar16 = FUN_0268fd4c(param_5,0);
                      if ((lVar16 != 0) && (uVar10 = FUN_0268ac68(lVar16,0), lVar11 != 0)) {
                        FUN_02684448(lVar11,1 << (ulong)(uVar10 & 0x1f),0);
                        if (*(long *)(param_5 + 0x18) != 0) {
                          FUN_02684674(*(long *)(param_5 + 0x18),2,0);
                          if (*(long *)(param_5 + 0x18) != 0) {
                            fVar22 = 0.0;
                            FUN_026845a0(0,0,0,0,*(long *)(param_5 + 0x18),0);
                            lVar16 = *(long *)(param_5 + 0x18);
                            FUN_0269fcf8(lVar18,0);
                            if (lVar16 != 0) {
                              fVar26 = (float)iVar15;
                              fVar29 = fVar29 * (fVar26 / (float)iVar3);
                              FUN_026841f4(fVar29 * 0.5 * fVar22,lVar16,0);
                              if (*(long *)(param_5 + 0x18) != 0) {
                                FUN_02683e98(DAT_02940108,*(long *)(param_5 + 0x18),0);
                                puVar4 = PTR_DAT_033f3618;
                                if (*(long *)(param_5 + 0x18) != 0) {
                                  FUN_02683f20(DAT_02940f70,*(long *)(param_5 + 0x18),0);
                                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                                  puVar6 = 
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                                  ;
                                  puVar4 = UnityEngine_UI_RawImage_var;
                                  if (lVar16 != 0) {
                                    FUN_02669c18(lVar16,0);
                                    uVar12 = FUN_0268b6ac(param_5,0);
                                    uVar12 = FUN_015f5b28(uVar12,*(undefined8 *)puVar4,0);
                                    FUN_0268b75c(lVar16,uVar12,0);
                                    lVar18 = FUN_00da4fb8(*(undefined8 *)puVar6,4);
                                    if (lVar18 != 0) {
                                      uVar10 = *(uint *)(lVar18 + 0x18);
                                      if (uVar10 != 0) {
                                        *(undefined8 *)(lVar18 + 0x20) = 0xbf000000bf000000;
                                        *(undefined4 *)(lVar18 + 0x28) = 0;
                                        uVar12 = DAT_02940f60;
                                        if (uVar10 != 1) {
                                          *(undefined4 *)(lVar18 + 0x34) = 0;
                                          *(undefined8 *)(lVar18 + 0x2c) = uVar12;
                                          if (2 < uVar10) {
                                            *(undefined8 *)(lVar18 + 0x38) = 0x3f0000003f000000;
                                            *(undefined4 *)(lVar18 + 0x40) = 0;
                                            puVar4 = 
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
                                            if (uVar10 != 3) {
                                              *(undefined8 *)(lVar18 + 0x44) = DAT_02940f68;
                                              *(undefined4 *)(lVar18 + 0x4c) = 0;
                                              FUN_0266b9c4(lVar16,lVar18,0);
                                              lVar18 = FUN_00da4fb8(*(undefined8 *)puVar4,4);
                                              if (lVar18 == 0) goto LAB_01554bc8;
                                              uVar10 = *(uint *)(lVar18 + 0x18);
                                              if (((uVar10 != 0) &&
                                                  (*(undefined8 *)(lVar18 + 0x20) = 0, uVar10 != 1))
                                                 && (*(undefined8 *)(lVar18 + 0x28) = DAT_028aa458,
                                                    2 < uVar10)) {
                                                uVar12 = NEON_fmov(0x3f800000,4);
                                                *(undefined8 *)(lVar18 + 0x30) = uVar12;
                                                puVar6 = 
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                                ;
                                                puVar4 = 
                                                Method_System_Nullable<OVRPose>_get_HasValue__;
                                                if (uVar10 != 3) {
                                                  *(undefined8 *)(lVar18 + 0x38) = DAT_028aa450;
                                                  FUN_0266bbc8(lVar16,lVar18,0);
                                                  uVar12 = FUN_00da4fb8(*(undefined8 *)puVar6,6);
                                                  FUN_016a34e8(uVar12,*(undefined8 *)puVar4,0);
                                                  FUN_0266db2c(lVar16,uVar12,0);
                                                  if (DAT_03774d76 == '\0') {
                                                    thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                                  DAT_03774d76 = '\x01';
                                                  }
                                                  puVar7 = StringLiteral_11347;
                                                  puVar6 = StringLiteral_10718;
                                                  puVar4 = 
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  ;
                                                  puVar17 = *(undefined4 **)
                                                             (*(long *)
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  + 0xb8);
                                                  uVar31 = *puVar17;
                                                  uVar30 = puVar17[1];
                                                  uVar20 = puVar17[2];
                                                  if (DAT_03774e1c == '\0') {
                                                    thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                                  DAT_03774e1c = '\x01';
                                                  puVar17 = *(undefined4 **)(*(long *)puVar4 + 0xb8)
                                                  ;
                                                  }
                                                  uStack_c0 = 0;
                                                  local_b8 = 0;
                                                  local_c8 = 0;
                                                  FUN_02687990(uVar31,uVar30,uVar20,puVar17[3],
                                                               puVar17[4],puVar17[5],&local_c8,0);
                                                  uStack_d8 = uStack_c0;
                                                  local_e0 = local_c8;
                                                  local_d0 = local_b8;
                                                  FUN_0266afe0(lVar16,&local_e0,0);
                                                  *(long *)(param_5 + 0x38) = lVar16;
                                                  FUN_0266f0f8(lVar16,1,0);
                                                  uVar12 = FUN_0267c994(*(undefined8 *)puVar6,0);
                                                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar7)
                                                  ;
                                                  puVar4 = 
                                                  Method_System_Collections_ObjectModel_Collection<IEnumerable<Claim>>__ctor__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    fVar27 = (float)iVar1;
                                                    fVar22 = (float)iVar2 / fVar27;
                                                    fVar26 = (float)iVar3 / fVar26;
                                                    FUN_0267d648(lVar16,uVar12,0);
                                                    FUN_0267dc2c(lVar16,*(undefined8 *)
                                                                         (param_5 + 0x28),0);
                                                    FUN_0267d974(0,0,0,0x3f800000,lVar16,0);
                                                    FUN_0267decc(0.5 - fVar22 * 0.5,
                                                                 0.5 - fVar26 * 0.5,lVar16,0);
                                                    FUN_0267e0c0(fVar22,fVar26,lVar16,0);
                                                    *(long *)(param_5 + 0x40) = lVar16;
                                                    uVar12 = FUN_0268b6ac(param_5,0);
                                                    uVar12 = FUN_015f5b28(uVar12,*(undefined8 *)
                                                                                  puVar4,0);
                                                    lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar5);
                                                    if (lVar16 != 0) {
                                                      FUN_0268afbc(lVar16,uVar12,0);
                                                      lVar18 = 
                                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                            (lVar16,0);
                                                  uVar12 = FUN_0268fd10(param_5,0);
                                                  puVar4 = OVRPlugin_OVRP_1_93_0_TypeInfo;
                                                  if (lVar18 != 0) {
                                                    FUN_026a0040(lVar18,uVar12,0,0);
                                                    lVar18 = FUN_010e5800(lVar16,*(undefined8 *)
                                                                                  puVar4);
                                                    puVar4 = UnityEngine_Pose___TypeInfo;
                                                    if (lVar18 != 0) {
                                                      FUN_02666150(lVar18,*(undefined8 *)
                                                                           (param_5 + 0x38),0);
                                                      lVar18 = FUN_010e5800(lVar16,*(undefined8 *)
                                                                                    puVar4);
                                                      *(long *)(param_5 + 0x30) = lVar18;
                                                      puVar4 = 
                                                  Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__
                                                  ;
                                                  if (lVar18 != 0) {
                                                    FUN_026689d4(lVar18,*(undefined8 *)
                                                                         (param_5 + 0x40),0);
                                                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                                      thunk_FUN_00d32864();
                                                    }
                                                    lVar18 = FUN_0153b754(0);
                                                    if (lVar18 != 0) {
                                                      FUN_0268aca4(lVar16,*(undefined4 *)
                                                                           (lVar18 + 0x48),0);
                                                      lVar16 = 
                                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                            (lVar16,0);
                                                  puVar4 = StringLiteral_8403;
                                                  if (lVar16 != 0) {
                                                    FUN_0269fd98(fVar21,uVar25,0x3f800000,lVar16,0);
                                                    uVar25 = FUN_0268b6ac(param_5,0);
                                                    uVar25 = FUN_015f5b28(uVar25,*(undefined8 *)
                                                                                  puVar4,0);
                                                    lVar16 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                 puVar5);
                                                    if (lVar16 != 0) {
                                                      FUN_0268afbc(lVar16,uVar25,0);
                                                      lVar18 = 
                                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                            (lVar16,0);
                                                  uVar25 = FUN_0268fd10(param_5,0);
                                                  puVar5 = 
                                                  Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_GetEnumerator__
                                                  ;
                                                  if (lVar18 != 0) {
                                                    FUN_026a0040(lVar18,uVar25,0,0);
                                                    lVar18 = FUN_010e5800(lVar16,*(undefined8 *)
                                                                                  puVar5);
                                                    *(long *)(param_5 + 0x20) = lVar18;
                                                    if (lVar18 != 0) {
                                                      *(undefined1 *)(lVar18 + 0x1c) = 1;
                                                      bVar9 = FUN_0269e8f0(0);
                                                      *(byte *)(lVar18 + 0xf8) = ~bVar9 & 1;
                                                      if ((*(long *)(param_5 + 0x20) != 0) &&
                                                         (plVar19 = *(long **)(*(long *)(param_5 +
                                                                                        0x20) + 0xf0
                                                                              ),
                                                         plVar19 != (long *)0x0)) {
                                                        lVar18 = *(long *)(param_5 + 0x28);
                                                        if ((lVar18 != 0) &&
                                                           (lVar11 = thunk_FUN_00d6225c(lVar18,*(
                                                  undefined8 *)(*plVar19 + 0x40)), lVar11 == 0)) {
                                                    uVar25 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da5038(uVar25,0);
                                                  }
                                                  if ((int)plVar19[3] == 0) goto LAB_01554bcc;
                                                  plVar19[4] = lVar18;
                                                  lVar18 = *(long *)(param_5 + 0x20);
                                                  if (lVar18 != 0) {
                                                    *(undefined4 *)(lVar18 + 0x18) = 2;
                                                    lVar11 = FUN_0153b754(0);
                                                    if (lVar11 != 0) {
                                                      *(undefined4 *)(lVar18 + 0xd4) =
                                                           *(undefined4 *)(lVar11 + 0x4c);
                                                      lVar18 = *(long *)(param_5 + 0x20);
                                                      if (lVar18 != 0) {
                                                        *(undefined1 *)(lVar18 + 0xdc) = 1;
                                                        lVar18 = FUN_0268fd10(lVar18,0);
                                                        if (lVar18 != 0) {
                                                          FUN_0269fd98(fVar21 * (fVar27 / (float)
                                                  iVar2),fVar29,0x3f800000,lVar18,0);
                                                  if (*(long *)(param_5 + 0x20) != 0) {
                                                    *(undefined4 *)
                                                     (*(long *)(param_5 + 0x20) + 0xe4) = 1;
                                                    lVar16 = 
                                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                            (lVar16,0);
                                                  if (((*(long *)(param_5 + 0x50) != 0) &&
                                                      (lVar18 = FUN_01551e1c(*(long *)(param_5 +
                                                                                      0x50)),
                                                      lVar18 != 0)) && (lVar16 != 0)) {
                                                    FUN_026a0040(lVar16,*(undefined8 *)
                                                                         (lVar18 + 0x38),0,0);
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
                                                  }
                                                  goto LAB_01554bc8;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
LAB_01554bcc:
                    /* WARNING: Subroutine does not return */
                                      FUN_00da5194();
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
  }
LAB_01554bc8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


