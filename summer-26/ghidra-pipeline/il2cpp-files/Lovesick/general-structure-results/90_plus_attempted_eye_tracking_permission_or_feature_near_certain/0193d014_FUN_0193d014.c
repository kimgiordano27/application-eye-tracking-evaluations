/*
FUNCTION_NAME: FUN_0193d014
ENTRY_POINT: 0193d014
PROGRAM: Lovesick-libil2cpp.so
SCORE: 163
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_6;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0193da74) */
/* WARNING: Removing unreachable block (ram,0x0193da78) */
/* WARNING: Removing unreachable block (ram,0x0193df84) */

undefined4
FUN_0193d014(undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  int iVar21;
  long lVar22;
  float *pfVar23;
  long *plVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  ulong uVar37;
  float fVar38;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  ulong local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  ulong local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  float local_a4;
  
  if ((DAT_0377a156 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<SkinnedMeshRenderer>__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_System_Numerics_Vector<ushort>_get_Zero__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(StringLiteral_9785);
    thunk_FUN_00d48444(StringLiteral_3677);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_short>__ctor__);
    thunk_FUN_00d48444(UnityEngine_Timeline_TrackAsset_var);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      );
    thunk_FUN_00d48444(Polenter_Serialization_Core_DeserializingException_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_79);
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_00d48444(Method_System_Diagnostics_Process_StartWithShellExecuteEx__);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3d78);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0958);
    thunk_FUN_00d48444(StringLiteral_9928);
    thunk_FUN_00d48444(StringLiteral_12714);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__);
    thunk_FUN_00d48444(StringLiteral_645);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3e18);
    thunk_FUN_00d48444(StringLiteral_6246);
    thunk_FUN_00d48444(Method_PaperCyclone_<>c__DisplayClass6_0_<Reverse>b__1__);
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_WitSocketRequest_ReturnDecodedResponse__);
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_Process__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033ec200);
    thunk_FUN_00d48444(StringLiteral_12902);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(StringLiteral_5840);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
    thunk_FUN_00d48444(Method_System_Net_AuthenticationManager_PreAuthenticate__);
    thunk_FUN_00d48444(StringLiteral_13935);
    DAT_0377a156 = 1;
  }
  puVar10 = (undefined8 *)
            Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
  ;
  plVar24 = (long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar5 = OVREyeGaze_TypeInfo;
  puVar11 = (undefined8 *)PTR_DAT_033f3e18;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (5 < *(uint *)(param_5 + 0x10)) {
    return 0;
  }
  plVar18 = *(long **)(param_5 + 0x20);
  switch(*(uint *)(param_5 + 0x10)) {
  case 0:
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (plVar18 == (long *)0x0) goto LAB_0193e6c8;
    FUN_01903eac(plVar18,1,0);
    lVar14 = plVar18[0x23];
    if (lVar14 == 0) goto LAB_0193e6c8;
    lVar22 = *(long *)StringLiteral_3677;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    uVar16 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 200));
    if ((uVar16 & 1) == 0) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
    }
    else {
      iVar21 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (0 < iVar21) {
        FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar21,0);
      }
    }
    lVar14 = plVar18[0x24];
    if (lVar14 == 0) goto LAB_0193e6c8;
    lVar22 = *(long *)UnityEngine_Timeline_TrackAsset_var;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    uVar16 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 200));
    if ((uVar16 & 1) == 0) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
    }
    else {
      iVar21 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (0 < iVar21) {
        FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar21,0);
      }
    }
    lVar14 = plVar18[0x25];
    if (lVar14 == 0) goto LAB_0193e6c8;
    lVar22 = *(long *)
              Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    uVar16 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 200));
    if ((uVar16 & 1) == 0) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
    }
    else {
      iVar21 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (0 < iVar21) {
        FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar21,0);
      }
    }
    lVar14 = plVar18[0x26];
    if (lVar14 == 0) goto LAB_0193e6c8;
    lVar22 = *(long *)Method_System_Collections_Generic_Dictionary<int,_short>__ctor__;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    puVar4 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
    uVar16 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 200));
    if ((uVar16 & 1) == 0) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
    }
    else {
      iVar21 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (0 < iVar21) {
        FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar21,0);
      }
    }
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar4 = StringLiteral_12714;
    if (lVar14 == 0) goto LAB_0193e6c8;
    FUN_01320e50(lVar14,*(undefined8 *)StringLiteral_79);
    *(long *)(param_5 + 0x28) = lVar14;
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar14 == 0) goto LAB_0193e6c8;
    FUN_01320e50(lVar14,*(undefined8 *)Polenter_Serialization_Core_DeserializingException_TypeInfo);
    *(long *)(param_5 + 0x30) = lVar14;
    if ((plVar18[0x22] == 0) ||
       (lVar14 = FUN_0268fd10(plVar18[0x22],0), puVar4 = StringLiteral_12902, lVar14 == 0))
    goto LAB_0193e6c8;
    FUN_026a0094(&local_130,lVar14,0);
    uStack_e8 = CONCAT44(uStack_124,fStack_128);
    uVar16 = CONCAT44(fStack_12c,local_130);
    uStack_d8 = uStack_118;
    local_e0 = local_120;
    uStack_c8 = auStack_110._8_8_;
    local_d0 = auStack_110._0_8_;
    uStack_b8 = uStack_f8;
    local_c0 = local_100;
    uVar34 = local_120;
    local_f0 = uVar16;
    fVar29 = (float)thunk_FUN_02693554(&local_f0,0);
    fVar36 = (float)local_100;
    param_2 = uVar16;
    param_3 = uVar34;
    uVar25 = FUN_02698858(0);
    *(undefined4 *)(plVar18 + 0x2b) = uVar25;
    *(int *)((long)plVar18 + 0x15c) = (int)param_2;
    *(int *)(plVar18 + 0x2c) = (int)param_3;
    *(int *)((long)plVar18 + 0x164) = (int)local_100;
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar11 = (undefined8 *)Method_Meta_WitAi_Requests_WitSocketRequest_ReturnDecodedResponse__;
    if (lVar14 == 0) goto LAB_0193e6c8;
    FUN_013752a0(lVar14,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetFilter_Process__
                );
    FUN_013757d8(lVar14,plVar18[0x22],*puVar11);
    if (plVar18[0x25] == 0) goto LAB_0193e6c8;
    FUN_00ac20f0(plVar18[0x25],0xffffffff,*(undefined8 *)StringLiteral_4747);
    if (plVar18[0x26] == 0) goto LAB_0193e6c8;
    fVar38 = 0.0;
    FUN_00ac1d04(plVar18[0x26],*(undefined8 *)Method_System_Numerics_Vector<ushort>_get_Zero__);
    puVar3 = Method_PaperCyclone_<>c__DisplayClass6_0_<Reverse>b__1__;
    puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar10 = (undefined8 *)StringLiteral_9928;
    param_4 = local_100;
    uVar15 = uVar16;
    uVar37 = uVar34;
    if (0 < *(int *)(lVar14 + 0x20)) {
LAB_0193d618:
      FUN_01375c70(lVar14,&local_130,*(undefined8 *)puVar3);
      lVar22 = CONCAT44(fStack_12c,local_130);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_02681b9c(lVar22,0,0);
      if ((uVar7 & 1) == 0) goto LAB_0193d668;
      lVar8 = FUN_0193ca30(plVar18,lVar22);
      fVar33 = (float)param_3;
      fVar32 = (float)param_2;
      fVar35 = (float)param_4;
      if (lVar8 == 0) {
        if ((plVar18[0x23] != 0) &&
           (FUN_00acdfa0(plVar18[0x23],lVar22,
                         *(undefined8 *)UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo),
           lVar22 != 0)) {
          lVar8 = plVar18[0x24];
          FUN_0269f910(lVar22,0);
          if (lVar8 != 0) {
            FUN_00acfdbc(lVar8,*(undefined8 *)StringLiteral_9785);
            lVar8 = *(long *)(param_5 + 0x28);
            FUN_0269f578(lVar22,0);
            FUN_02692df0(&local_f0,0);
            if (lVar8 != 0) {
              FUN_00ac4f98(lVar8,*(undefined8 *)StringLiteral_1006);
              lVar8 = *(long *)(param_5 + 0x30);
              fVar26 = (float)FUN_0269f810(lVar22,0);
              if (lVar8 != 0) {
                fVar27 = (float)uVar15;
                fVar28 = (float)uVar37;
                param_2 = (ulong)(uint)((fVar28 * fVar26 + fVar36 * fVar32 + fVar27 * fVar35) -
                                       fVar29 * fVar33);
                param_3 = (ulong)(uint)((fVar29 * fVar32 + fVar36 * fVar33 + fVar28 * fVar35) -
                                       fVar27 * fVar26);
                param_4 = (ulong)(uint)(((fVar36 * fVar35 - fVar29 * fVar26) - fVar27 * fVar32) -
                                       fVar28 * fVar33);
                FUN_00acfdbc(lVar8,*(undefined8 *)StringLiteral_9785);
LAB_0193d798:
                plVar20 = (long *)FUN_026a13c0(lVar22,0);
                do {
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  lVar8 = *plVar20;
                  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *plVar24) {
                        puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                        goto LAB_0193d7fc;
                      }
                      uVar15 = uVar15 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_00d59724(plVar20,*plVar24,0);
LAB_0193d7fc:
                  uVar15 = (*(code *)*puVar10)(plVar20,puVar10[1]);
                  if ((uVar15 & 1) == 0) goto LAB_0193d9d0;
                  lVar8 = *plVar20;
                  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
                  if (uVar15 != 0) {
                    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar17 + -2) == *plVar24) {
                        puVar10 = (undefined8 *)(lVar8 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                        goto LAB_0193d85c;
                      }
                      uVar15 = uVar15 - 1;
                      piVar17 = piVar17 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar10 = (undefined8 *)FUN_00d59724(plVar20,*plVar24,1);
LAB_0193d85c:
                  plVar9 = (long *)(*(code *)*puVar10)(plVar20,puVar10[1]);
                  if (plVar9 != (long *)0x0) {
                    bVar2 = *(byte *)(*(long *)StringLiteral_5840 + 300);
                    if ((*(byte *)(*plVar9 + 300) < bVar2) ||
                       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                        *(long *)StringLiteral_5840)) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(plVar9);
                    }
                  }
                  lVar8 = FUN_0193ca30(plVar18,plVar9);
                  fVar33 = (float)param_3;
                  fVar32 = (float)param_2;
                  if (lVar8 == 0) {
                    if (plVar18[0x23] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    if (plVar18[0x25] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    iVar21 = *(int *)(plVar18[0x23] + 0x18) + -1;
                    FUN_00ac20f0(plVar18[0x25],iVar21,*(undefined8 *)StringLiteral_4747);
                    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    fVar27 = (float)FUN_0269f578(plVar9,0);
                    fVar35 = fVar32;
                    fVar26 = fVar33;
                    fVar28 = (float)FUN_0269f578(lVar22,0);
                    if (DAT_03774e1a == '\0') {
                      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                      DAT_03774e1a = '\x01';
                    }
                    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0
                       ) {
                      thunk_FUN_00d32864();
                    }
                    if (plVar18[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_0132138c(plVar18[0x26],iVar21,&local_a4,*(undefined8 *)puVar5);
                    puVar11 = (undefined8 *)
                              Method_Meta_WitAi_Requests_WitSocketRequest_ReturnDecodedResponse__;
                    param_4 = (ulong)(uint)local_a4;
                    fVar32 = (fVar32 - fVar35) * (fVar32 - fVar35);
                    param_2 = (ulong)(uint)fVar32;
                    fVar33 = (fVar33 - fVar26) * (fVar33 - fVar26);
                    param_3 = (ulong)(uint)fVar33;
                    fVar32 = SQRT(fVar33 + (fVar27 - fVar28) * (fVar27 - fVar28) + fVar32) +
                             local_a4;
                    if (fVar38 <= fVar32) {
                      fVar38 = fVar32;
                    }
                    if (plVar18[0x26] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_00ac1d04(plVar18[0x26],
                                 *(undefined8 *)Method_System_Numerics_Vector<ushort>_get_Zero__);
                  }
                  FUN_013757d8(lVar14,plVar9,*puVar11);
                } while( true );
              }
            }
          }
        }
        goto LAB_0193e6c8;
      }
      if (*(char *)(lVar8 + 0x18) == '\0') {
        if (lVar22 != 0) goto LAB_0193d798;
        goto LAB_0193e6c8;
      }
      goto LAB_0193d668;
    }
    goto LAB_0193db90;
  case 1:
    iVar21 = *(int *)(param_5 + 0x50);
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    goto LAB_0193e2f8;
  case 2:
    plVar20 = *(long **)(param_5 + 0x38);
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (plVar20 == (long *)0x0) goto LAB_0193e6c8;
LAB_0193e364:
    lVar14 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *plVar24) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0193e3f4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar20,*plVar24,0);
LAB_0193e3f4:
    uVar16 = (*(code *)*puVar10)(plVar20,puVar10[1]);
    if ((uVar16 & 1) != 0) {
      plVar18 = *(long **)(param_5 + 0x38);
      if (plVar18 == (long *)0x0) goto LAB_0193e6c8;
      lVar14 = *plVar18;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar24) {
            puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0193e628;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar18,*plVar24,1);
LAB_0193e628:
      uVar12 = (*(code *)*puVar11)(plVar18,puVar11[1]);
      uVar25 = 2;
      *(undefined8 *)(param_5 + 0x18) = uVar12;
      goto LAB_0193e68c;
    }
    if (plVar18 == (long *)0x0) goto LAB_0193e6c8;
    plVar20 = (long *)(**(code **)(*plVar18 + 0x268))
                                (plVar18,*(undefined8 *)(param_5 + 0x28),
                                 *(undefined8 *)(*plVar18 + 0x270));
    *(long **)(param_5 + 0x40) = plVar20;
    break;
  case 3:
    plVar20 = *(long **)(param_5 + 0x40);
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    break;
  case 4:
    plVar18 = *(long **)(param_5 + 0x48);
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    goto joined_r0x0193d33c;
  case 5:
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    return 0;
  }
  if (plVar20 != (long *)0x0) {
    lVar14 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *plVar24) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0193e4c0;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar20,*plVar24,0);
LAB_0193e4c0:
    uVar16 = (*(code *)*puVar10)(plVar20,puVar10[1]);
    if ((uVar16 & 1) == 0) {
      if (plVar18 != (long *)0x0) {
        plVar18 = (long *)(**(code **)(*plVar18 + 0x278))
                                    (plVar18,*(undefined8 *)(param_5 + 0x28),
                                     *(undefined8 *)(*plVar18 + 0x280));
        *(long **)(param_5 + 0x48) = plVar18;
joined_r0x0193d33c:
        if (plVar18 != (long *)0x0) {
          lVar14 = *plVar18;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *plVar24) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0193e58c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar18,*plVar24,0);
LAB_0193e58c:
          uVar16 = (*(code *)*puVar10)(plVar18,puVar10[1]);
          if ((uVar16 & 1) == 0) {
            lVar14 = thunk_FUN_00d62348(*puVar11);
            if (lVar14 != 0) {
              FUN_01919300(lVar14,*(undefined8 *)
                                   Method_System_Net_AuthenticationManager_PreAuthenticate__,0);
              *(long *)(param_5 + 0x18) = lVar14;
              uVar25 = 5;
              goto LAB_0193e68c;
            }
          }
          else {
            plVar18 = *(long **)(param_5 + 0x48);
            if (plVar18 != (long *)0x0) {
              lVar14 = *plVar18;
              uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *plVar24) {
                    puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_0193e678;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)FUN_00d59724(plVar18,*plVar24,1);
LAB_0193e678:
              uVar12 = (*(code *)*puVar11)(plVar18,puVar11[1]);
              *(undefined8 *)(param_5 + 0x18) = uVar12;
              uVar25 = 4;
LAB_0193e68c:
              *(undefined4 *)(param_5 + 0x10) = uVar25;
              return 1;
            }
          }
        }
      }
    }
    else {
      plVar18 = *(long **)(param_5 + 0x40);
      if (plVar18 != (long *)0x0) {
        lVar14 = *plVar18;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *plVar24) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_0193e650;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar18,*plVar24,1);
LAB_0193e650:
        uVar12 = (*(code *)*puVar11)(plVar18,puVar11[1]);
        *(undefined8 *)(param_5 + 0x18) = uVar12;
        uVar25 = 3;
        goto LAB_0193e68c;
      }
    }
  }
LAB_0193e6c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0193d9d0:
  plVar20 = (long *)thunk_FUN_00d6225c(plVar20,*(undefined8 *)StringLiteral_10310);
  uVar15 = uVar16 & 0xffffffff;
  uVar37 = uVar34 & 0xffffffff;
  puVar10 = (undefined8 *)StringLiteral_9928;
  if (plVar20 != (long *)0x0) {
    lVar22 = *plVar20;
    uVar7 = (ulong)*(ushort *)(lVar22 + 0x12a);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)StringLiteral_10310) {
          puVar10 = (undefined8 *)(lVar22 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0193da54;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar20,*(long *)StringLiteral_10310,0);
LAB_0193da54:
    (*(code *)*puVar10)(plVar20,puVar10[1]);
    puVar10 = (undefined8 *)StringLiteral_9928;
  }
LAB_0193d668:
  if (*(int *)(lVar14 + 0x20) < 1) goto code_r0x0193db30;
  goto LAB_0193d618;
code_r0x0193db30:
  if (0.0 < fVar38) {
    lVar14 = plVar18[0x26];
    if (lVar14 != 0) {
      iVar21 = 0;
      do {
        if (*(int *)(lVar14 + 0x18) <= iVar21) goto LAB_0193db90;
        FUN_0132138c(lVar14,iVar21,&local_130,*(undefined8 *)puVar5);
        local_130 = local_130 / fVar38;
        FUN_0132149c(lVar14,iVar21,&local_130,*puVar10);
        lVar14 = plVar18[0x26];
        iVar21 = iVar21 + 1;
      } while (lVar14 != 0);
    }
    goto LAB_0193e6c8;
  }
LAB_0193db90:
  if (plVar18[0x25] != 0) {
    lVar14 = FUN_00da4fb8(*(undefined8 *)
                           Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                          ,*(undefined4 *)(plVar18[0x25] + 0x18));
    puVar4 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
    if (plVar18[0x25] != 0) {
      lVar22 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                            *(undefined4 *)(plVar18[0x25] + 0x18));
      puVar6 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
      puVar3 = PTR_DAT_033f0958;
      lVar8 = plVar18[0x25];
      if (lVar8 != 0) {
        iVar21 = 0;
        do {
          if (*(int *)(lVar8 + 0x18) <= iVar21) {
            if (*(int *)(lVar8 + 0x18) < 1) goto LAB_0193ddd0;
            uVar16 = 0;
            pfVar23 = (float *)(lVar14 + 0x28);
            goto LAB_0193dcdc;
          }
          FUN_0132138c(lVar8,iVar21,&local_130,*(undefined8 *)puVar6);
          fVar29 = local_130;
          lVar8 = (long)(int)local_130;
          if (-1 < (int)local_130) {
            if (*(long *)(param_5 + 0x28) == 0) break;
            FUN_0132138c(*(long *)(param_5 + 0x28),iVar21,&local_130,*(undefined8 *)puVar4);
            fVar32 = fStack_128;
            fVar38 = fStack_12c;
            fVar36 = local_130;
            if ((*(long *)(param_5 + 0x28) == 0) ||
               (FUN_0132138c(*(long *)(param_5 + 0x28),fVar29,&local_130,*(undefined8 *)puVar4),
               lVar14 == 0)) break;
            if ((uint)*(float *)(lVar14 + 0x18) <= (uint)fVar29) goto LAB_0193e6cc;
            lVar13 = lVar14 + lVar8 * 0xc;
            param_3 = *(ulong *)(lVar13 + 0x20);
            param_4 = (ulong)(uint)*(float *)(lVar13 + 0x28);
            fVar32 = (fVar32 - fStack_128) + *(float *)(lVar13 + 0x28);
            param_2 = (ulong)(uint)fVar32;
            *(ulong *)(lVar13 + 0x20) =
                 CONCAT44((fVar38 - fStack_12c) + (float)(param_3 >> 0x20),
                          (fVar36 - local_130) + (float)param_3);
            *(float *)(lVar13 + 0x28) = fVar32;
            if (lVar22 == 0) break;
            if ((uint)*(float *)(lVar22 + 0x18) <= (uint)fVar29) goto LAB_0193e6cc;
            lVar8 = lVar22 + lVar8 * 4;
            *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + 1;
          }
          lVar8 = plVar18[0x25];
          iVar21 = iVar21 + 1;
        } while (lVar8 != 0);
      }
    }
  }
  goto LAB_0193e6c8;
LAB_0193dcdc:
  do {
    if (lVar22 == 0) goto LAB_0193e6c8;
    if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_0193e6cc;
    iVar21 = *(int *)(lVar22 + 0x20 + uVar16 * 4);
    if (iVar21 < 1) {
      FUN_0132138c(lVar8,uVar16 & 0xffffffff,&local_130,*(undefined8 *)puVar6);
      if (-1 < (int)local_130) {
        if (plVar18[0x25] != 0) {
          lVar8 = *(long *)(param_5 + 0x30);
          FUN_0132138c(plVar18[0x25],uVar16 & 0xffffffff,&local_130,*(undefined8 *)puVar6);
          if (lVar8 != 0) {
            FUN_0132138c(lVar8,local_130,&local_130,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
                        );
            uVar12 = *(undefined8 *)puVar3;
            goto LAB_0193dda4;
          }
        }
        goto LAB_0193e6c8;
      }
    }
    else {
      if (lVar14 == 0) goto LAB_0193e6c8;
      if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_0193e6cc;
      lVar8 = *(long *)(param_5 + 0x30);
      fVar29 = (float)iVar21;
      param_4 = (ulong)(uint)fVar29;
      param_2 = (ulong)(uint)(pfVar23[-1] / fVar29);
      param_3 = (ulong)(uint)(*pfVar23 / fVar29);
      fVar29 = (float)FUN_02698ebc(0);
      if (lVar8 == 0) goto LAB_0193e6c8;
      uVar12 = *(undefined8 *)puVar3;
      fStack_12c = (float)param_2;
      fStack_128 = (float)param_3;
      uStack_124 = (undefined4)param_4;
      local_130 = fVar29;
LAB_0193dda4:
      FUN_0132149c(lVar8,uVar16 & 0xffffffff,&local_130,uVar12);
    }
    lVar8 = plVar18[0x25];
    if (lVar8 == 0) goto LAB_0193e6c8;
    uVar16 = uVar16 + 1;
    pfVar23 = pfVar23 + 3;
  } while ((long)uVar16 < (long)*(int *)(lVar8 + 0x18));
LAB_0193ddd0:
  if (*(long *)(param_5 + 0x28) != 0) {
    *(undefined4 *)((long)plVar18 + 0x24) = *(undefined4 *)(*(long *)(param_5 + 0x28) + 0x18);
    puVar3 = 
    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
    lVar14 = FUN_00da4fb8(*(undefined8 *)
                           Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                         );
    plVar18[9] = lVar14;
    puVar6 = StringLiteral_6246;
    lVar14 = FUN_00da4fb8(*(undefined8 *)StringLiteral_6246,*(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0xb] = lVar14;
    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0xd] = lVar14;
    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0xe] = lVar14;
    puVar4 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
    lVar14 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,
                          *(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0xf] = lVar14;
    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0x10] = lVar14;
    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0x12] = lVar14;
    lVar14 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                          *(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0x11] = lVar14;
    lVar14 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                          ,*(undefined4 *)((long)plVar18 + 0x24));
    plVar18[10] = lVar14;
    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar6,*(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0xc] = lVar14;
    lVar14 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__,
                          *(undefined4 *)((long)plVar18 + 0x24));
    plVar18[0x13] = lVar14;
    *(undefined4 *)(param_5 + 0x50) = 0;
    uVar19 = 0;
    puVar11 = (undefined8 *)PTR_DAT_033f3e18;
    plVar24 = (long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    puVar10 = (undefined8 *)
              Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
    ;
    while (plVar18 != (long *)0x0) {
      uVar25 = (undefined4)param_2;
      iVar21 = *(int *)((long)plVar18 + 0x24);
      if (iVar21 <= (int)uVar19) {
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_Component_GetComponentsInChildren<SkinnedMeshRenderer>__
                                   );
        if (lVar14 != 0) {
          FUN_01902800(lVar14,iVar21,0);
          plVar18[0x2d] = lVar14;
          FUN_0193cbc4(plVar18);
          plVar20 = (long *)(**(code **)(*plVar18 + 600))
                                      (plVar18,*(undefined8 *)(param_5 + 0x28),
                                       *(undefined8 *)(*plVar18 + 0x260));
          *(long **)(param_5 + 0x38) = plVar20;
          if (plVar20 != (long *)0x0) goto LAB_0193e364;
        }
        break;
      }
      lVar14 = plVar18[0x28];
      lVar22 = plVar18[0xf];
      fVar29 = DAT_028aa040;
      if (lVar14 != 0) {
        if (plVar18[0x26] == 0) break;
        FUN_0132138c(plVar18[0x26],uVar19,&local_130,*(undefined8 *)puVar5);
        fVar29 = (float)FUN_0193755c(lVar14);
      }
      puVar4 = StringLiteral_645;
      if (*(int *)(*(long *)StringLiteral_645 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar36 = DAT_028aa038;
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar19) {
LAB_0193e6cc:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (fVar29 <= DAT_028aa038) {
        fVar29 = DAT_028aa038;
      }
      *(float *)(lVar22 + (long)(int)uVar19 * 4 + 0x20) = 1.0 / fVar29;
      lVar22 = plVar18[0x10];
      lVar14 = plVar18[0x29];
      uVar19 = *(uint *)(param_5 + 0x50);
      fVar29 = DAT_028aa040;
      if (lVar14 != 0) {
        if (plVar18[0x26] == 0) break;
        FUN_0132138c(plVar18[0x26],uVar19,&local_130,*(undefined8 *)puVar5);
        fVar29 = (float)FUN_0193755c(lVar14);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0193e6cc;
      if (fVar29 <= fVar36) {
        fVar29 = fVar36;
      }
      *(float *)(lVar22 + (long)(int)uVar19 * 4 + 0x20) = 1.0 / fVar29;
      if (*(long *)(param_5 + 0x28) == 0) break;
      lVar14 = plVar18[9];
      uVar19 = *(uint *)(param_5 + 0x50);
      FUN_0132138c(*(long *)(param_5 + 0x28),uVar19,&local_130,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_0193e6cc;
      lVar14 = lVar14 + (long)(int)uVar19 * 0xc;
      *(ulong *)(lVar14 + 0x20) = CONCAT44(fStack_12c,local_130);
      *(float *)(lVar14 + 0x28) = fStack_128;
      lVar14 = plVar18[9];
      if (lVar14 == 0) break;
      uVar19 = *(uint *)(param_5 + 0x50);
      if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_0193e6cc;
      lVar22 = plVar18[10];
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= uVar19) goto LAB_0193e6cc;
      lVar14 = lVar14 + (long)(int)uVar19 * 0xc;
      uVar30 = *(undefined4 *)(lVar14 + 0x28);
      lVar22 = lVar22 + (long)(int)uVar19 * 0x10;
      *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(lVar14 + 0x20);
      *(undefined4 *)(lVar22 + 0x28) = uVar30;
      *(undefined4 *)(lVar22 + 0x2c) = 0;
      lVar14 = plVar18[10];
      if (lVar14 == 0) break;
      uVar19 = *(uint *)(param_5 + 0x50);
      if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_0193e6cc;
      *(undefined4 *)(lVar14 + (long)(int)uVar19 * 0x10 + 0x2c) = 0x3f800000;
      if (*(long *)(param_5 + 0x30) == 0) break;
      lVar14 = plVar18[0xb];
      FUN_0132138c(*(long *)(param_5 + 0x30),uVar19,&local_130,*puVar10);
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_0193e6cc;
      auVar31._8_4_ = fStack_128;
      auVar31._0_8_ = CONCAT44(fStack_12c,local_130);
      auVar31._12_4_ = uStack_124;
      lVar14 = lVar14 + (long)(int)uVar19 * 0x10;
      *(long *)(lVar14 + 0x28) = auVar31._8_8_;
      *(ulong *)(lVar14 + 0x20) = CONCAT44(fStack_12c,local_130);
      if (plVar18[0x23] == 0) break;
      uVar19 = *(uint *)(param_5 + 0x50);
      lVar14 = plVar18[0xc];
      FUN_0132138c(plVar18[0x23],uVar19,&local_130,*(undefined8 *)PTR_DAT_033f3d78);
      if ((CONCAT44(fStack_12c,local_130) == 0) ||
         (uVar30 = FUN_0269f810(CONCAT44(fStack_12c,local_130),0), lVar14 == 0)) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_0193e6cc;
      lVar14 = lVar14 + (long)(int)uVar19 * 0x10;
      *(undefined4 *)(lVar14 + 0x20) = uVar30;
      *(undefined4 *)(lVar14 + 0x24) = uVar25;
      *(int *)(lVar14 + 0x28) = (int)param_3;
      *(int *)(lVar14 + 0x2c) = (int)param_4;
      lVar14 = plVar18[0x12];
      uVar19 = *(uint *)(param_5 + 0x50);
      if (DAT_03774e1c == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774e1c = '\x01';
      }
      lVar22 = plVar18[0x2a];
      uVar12 = *(undefined8 *)
                (*(long *)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8) + 0xc);
      fVar36 = *(float *)(*(long *)(*(long *)
                                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                   + 0xb8) + 0x14);
      fVar29 = DAT_028aa298;
      if (lVar22 != 0) {
        if (plVar18[0x26] == 0) break;
        FUN_0132138c(plVar18[0x26],*(undefined4 *)(param_5 + 0x50),&local_130,*(undefined8 *)puVar5)
        ;
        fVar29 = (float)FUN_0193755c(lVar22);
      }
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_0193e6cc;
      param_2 = CONCAT44((float)((ulong)uVar12 >> 0x20) * fVar29,(float)uVar12 * fVar29);
      lVar14 = lVar14 + (long)(int)uVar19 * 0xc;
      *(ulong *)(lVar14 + 0x20) = param_2;
      *(float *)(lVar14 + 0x28) = fVar36 * fVar29;
      lVar14 = plVar18[0x11];
      uVar19 = *(uint *)(param_5 + 0x50);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar19) goto LAB_0193e6cc;
      *(undefined4 *)(lVar14 + (long)(int)uVar19 * 4 + 0x20) = 0xffff0001;
      lVar14 = plVar18[0x13];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(param_5 + 0x50)) goto LAB_0193e6cc;
      lVar14 = lVar14 + (long)(int)*(uint *)(param_5 + 0x50) * 0x10;
      auVar31 = NEON_fmov(0x3f800000,4);
      *(long *)(lVar14 + 0x28) = auVar31._8_8_;
      *(long *)(lVar14 + 0x20) = auVar31._0_8_;
      iVar21 = *(int *)(param_5 + 0x50);
      if (iVar21 % 100 == 0) {
        iVar1 = *(int *)((long)plVar18 + 0x24);
        lVar14 = thunk_FUN_00d62348(*puVar11);
        if (lVar14 != 0) {
          FUN_01919300((float)iVar21 / (float)iVar1,(float)iVar1,lVar14,
                       *(undefined8 *)StringLiteral_13935,0);
          *(long *)(param_5 + 0x18) = lVar14;
          *(undefined4 *)(param_5 + 0x10) = 1;
          return 1;
        }
        break;
      }
LAB_0193e2f8:
      uVar19 = iVar21 + 1;
      *(uint *)(param_5 + 0x50) = uVar19;
    }
  }
  goto LAB_0193e6c8;
}


