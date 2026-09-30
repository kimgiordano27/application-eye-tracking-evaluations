/*
FUNCTION_NAME: FUN_01d9f438
ENTRY_POINT: 01d9f438
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_11;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01d9f438(long param_1,long *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  int *piVar18;
  long lVar19;
  char cVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong local_70;
  undefined4 local_64;
  
  if ((DAT_0377f6dd & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_SoccerBlocker_HideCrowd__);
    thunk_FUN_00d48444(UnityEngine_UIElements_EventCallback<PointerCaptureOutEvent>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(Method_System_Net_TimerThread_CreateQueue__);
    thunk_FUN_00d48444(StringLiteral_7091);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRPass>_get_Item__);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Span<char>_TryCopyTo__);
    DAT_0377f6dd = 1;
  }
  puVar5 = StringLiteral_13941;
  local_64 = 0;
  if (param_2 == (long *)0x0) goto LAB_01da003c;
  plVar11 = param_2;
  if (param_2[0x13] == 0) {
    plVar11 = *(long **)(param_1 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_01da003c;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,param_2[0x14],*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar19 = *(long *)puVar5;
    bVar1 = *(byte *)(lVar19 + 300);
    if ((*(byte *)(*plVar11 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar19)) {
                    /* catch() { ... } // from try @ 01d9fec0 with catch @ 01da0054 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01d9feac with catch @ 01da0058 */
      FUN_00da544c(plVar11);
    }
  }
  puVar8 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar6 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  plVar12 = (long *)FUN_01d9d0a4(param_1,plVar11);
  puVar7 = Method_System_Span<char>_TryCopyTo__;
  puVar4 = PTR_DAT_033f19d8;
  if (plVar12 == (long *)0x0) {
    if ((plVar11 == (long *)0x0) || (plVar11[0x16] == 0)) goto LAB_01da003c;
    lVar19 = *(long *)(plVar11[0x16] + 0x10);
    uVar14 = FUN_015ff8a0(lVar19,0);
    if ((uVar14 & 1) == 0) {
      if (plVar11[0x16] == 0) goto LAB_01da003c;
      lVar21 = *(long *)(plVar11[0x16] + 0x10);
      goto LAB_01d9f8a4;
    }
    uVar13 = *(undefined8 *)puVar6;
    lVar19 = **(long **)(*(long *)
                          System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                        + 0xb8);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01780344(uVar13,0);
LAB_01d9f8a8:
    lVar21 = 0;
    local_70 = uVar14;
  }
  else {
    lVar19 = *plVar12;
    bVar1 = *(byte *)(lVar19 + 300);
    bVar2 = *(byte *)(*(long *)PTR_DAT_033f19d8 + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_033f19d8)) {
      lVar21 = *(long *)puVar5;
      bVar2 = *(byte *)(lVar21 + 300);
      if ((bVar1 < bVar2) || (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) != lVar21))
      {
        bVar2 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
                    /* catch() { ... } // from try @ 01da0034 with catch @ 01da0040 */
                    /* catch() { ... } // from try @ 01d9fff0 with catch @ 01da0044 */
          if (plVar12[7] != 0) {
                    /* catch() { ... } // from try @ 01d9fef0 with catch @ 01da005c */
                    /* catch() { ... } // from try @ 01d9fe7c with catch @ 01da0060 */
            FUN_00ac2be8(plVar12);
                    /* catch() { ... } // from try @ 01d9fe20 with catch @ 01da0064 */
            uVar13 = FUN_01d34a50(plVar12[7],0);
            goto LAB_01da00fc;
          }
        }
        else {
          if (*(int *)(*(long *)
                        Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_01d98168(param_2,*(undefined8 *)puVar7);
          uVar14 = FUN_015ff8a0(uVar13,0);
          if ((uVar14 & 1) == 0) {
            uVar13 = *(undefined8 *)Method_SoccerBlocker_HideCrowd__;
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_01780344(uVar13,0);
            lVar21 = 0;
            lVar19 = 0;
            local_70 = uVar14;
            goto LAB_01d9f8b0;
          }
        }
                    /* catch() { ... } // from try @ 01d9ff00 with catch @ 01da0048 */
                    /* catch() { ... } // from try @ 01d9fedc with catch @ 01da004c */
        uVar13 = FUN_01d34a9c(0);
                    /* catch() { ... } // from try @ 01d9fee0 with catch @ 01da0050 */
        goto LAB_01da00fc;
      }
      if (plVar12[0x16] == 0) goto LAB_01da003c;
      lVar21 = *(long *)(plVar12[0x16] + 0x10);
      lVar19 = lVar21;
LAB_01d9f8a4:
      uVar14 = FUN_01da5e7c(param_1,lVar21);
      goto LAB_01d9f8a8;
    }
    lVar21 = thunk_FUN_00d62348(*(undefined8 *)
                                 UnityEngine_UIElements_EventCallback<PointerCaptureOutEvent>_TypeInfo
                               );
    if (lVar21 == 0) goto LAB_01da003c;
    FUN_01d8d998(lVar21,plVar12,0);
    bVar1 = *(byte *)(*(long *)puVar4 + 300);
    if ((*(byte *)(*plVar12 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_01da0078;
    if ((plVar12[10] != 0) && (*(int *)(plVar12[10] + 0x10) != 0)) {
      lVar19 = FUN_01eca598(plVar12,0);
      if (lVar19 == 0) goto LAB_01da003c;
      uVar14 = FUN_015fe7e8(*(undefined8 *)(lVar19 + 0x18),
                            *(undefined8 *)
                             Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo,0);
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01d98168(plVar12,*(undefined8 *)StringLiteral_7091);
        bVar1 = *(byte *)(*(long *)puVar4 + 300);
        if ((*(byte *)(*plVar12 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
        goto LAB_01da0078;
        plVar15 = (long *)FUN_01eca598(plVar12,0);
        if (plVar15 == (long *)0x0) goto LAB_01da003c;
        lVar19 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        uVar14 = FUN_01da5e7c(param_1,lVar19);
        local_70 = uVar14;
        goto LAB_01d9f8b0;
      }
    }
    puVar5 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
    uVar13 = *(undefined8 *)(lVar21 + 0x20);
    if (*(int *)(*(long *)Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01f76228(uVar13,0,0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(lVar21 + 0x20) == 0) goto LAB_01da003c;
                    /* try { // try from 01d9fe20 to 01e9fe47 has its CatchHandler @ 01da0064 */
      uVar14 = FUN_015fe7e8(*(undefined8 *)(*(long *)(lVar21 + 0x20) + 0x18),
                            *(undefined8 *)
                             Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo,0);
      if ((uVar14 & 1) != 0) {
        plVar15 = *(long **)(param_1 + 0x78);
        if (plVar15 == (long *)0x0) goto LAB_01da003c;
        plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                    (plVar15,*(undefined8 *)(lVar21 + 0x20),
                                     *(undefined8 *)(*plVar15 + 0x310));
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 300);
          if (bVar1 <= *(byte *)(*plVar15 + 300)) {
                    /* try { // try from 01d9fedc to 01e9fedf has its CatchHandler @ 01da004c */
                    /* try { // try from 01d9fee0 to 01e9feef has its CatchHandler @ 01da0050 */
            if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
              plVar15 = (long *)0x0;
            }
                    /* try { // try from 01d9fef0 to 01e9fefb has its CatchHandler @ 01da005c */
            while (plVar15 != (long *)0x0) {
              FUN_01d8dab8(lVar21,plVar15,0);
                    /* try { // try from 01d9ff00 to 01e9ff2f has its CatchHandler @ 01da0048 */
              uVar13 = *(undefined8 *)(lVar21 + 0x20);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_01f76228(uVar13,0,0);
              if ((uVar14 & 1) == 0) break;
              if (*(long *)(lVar21 + 0x20) == 0) goto LAB_01da003c;
                    /* try { // try from 01d9ff30 to 01e9ffef has its CatchHandler @ 01d9fc50 */
              uVar14 = FUN_015fe7e8(*(undefined8 *)(*(long *)(lVar21 + 0x20) + 0x18),
                                    *(undefined8 *)
                                     Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo
                                    ,0);
              if ((uVar14 & 1) == 0) break;
              plVar15 = *(long **)(param_1 + 0x78);
              if (plVar15 == (long *)0x0) goto LAB_01da003c;
              plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                          (plVar15,*(undefined8 *)(lVar21 + 0x20),
                                           *(undefined8 *)(*plVar15 + 0x310));
              if (plVar15 == (long *)0x0) break;
              bVar1 = *(byte *)(*(long *)puVar4 + 300);
              if (*(byte *)(*plVar15 + 300) < bVar1) break;
              if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
                plVar15 = (long *)0x0;
              }
            }
          }
        }
      }
    }
    local_70 = FUN_01da5e7c(param_1,*(undefined8 *)(lVar21 + 0x10));
    lVar19 = *(long *)(lVar21 + 0x28);
    uVar14 = local_70;
    if (*(int *)(lVar21 + 0x30) == 1) {
      uVar13 = *(undefined8 *)puVar6;
      if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_01780344(uVar13,0);
                    /* try { // try from 01d9fff0 to 01e9fff3 has its CatchHandler @ 01da0044 */
                    /* try { // try from 01d9fff4 to 01ea0033 has its CatchHandler @ 01d9fc50 */
      uVar14 = FUN_01789ac0(local_70,uVar13,0);
      if ((uVar14 & 1) != 0) {
        uVar13 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
        if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_01780344(uVar13,0);
        local_70 = uVar14;
      }
    }
  }
LAB_01d9f8b0:
  puVar5 = Method_System_Collections_Generic_List<Type>_Add__;
  uVar13 = FUN_01d99104(uVar14,plVar11);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar5);
  }
  puVar5 = UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo;
  uVar13 = FUN_01f6a2b8(uVar13,0);
  if (((param_4 & 1) == 0) || (*(char *)(param_1 + 0xa0) != '\0')) {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_01da003c;
    uVar14 = FUN_01d2fd6c(*(long *)(param_3 + 0x40),uVar13,1,0);
    if ((uVar14 & 1) == 0) goto LAB_01d9f9b0;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_01da003c;
    plVar15 = (long *)FUN_01d2de3c(*(long *)(param_3 + 0x40),uVar13,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (plVar15 == (long *)0x0) goto LAB_01da003c;
      iVar9 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
      if (iVar9 != 1) {
        FUN_00ac2be8(plVar15);
        uVar13 = FUN_01d34d70(plVar15[6],0);
LAB_01da00fc:
                    /* catch() { ... } // from try @ 01da0074 with catch @ 01da00fc */
                    /* catch() { ... } // from try @ 01da00c0 with catch @ 01da0108
                       catch() { ... } // from try @ 01da00f4 with catch @ 01da0108 */
        uVar16 = thunk_FUN_00d48444(
                                   Method_Oculus_Interaction_HandGrab_Visuals_JointCollection_<>c__DisplayClass2_0_<_ctor>b__0__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar13,uVar16);
      }
      if (param_2[0x18] == 0) goto LAB_01da003c;
      uVar14 = FUN_015ff8a0(*(undefined8 *)(param_2[0x18] + 0x18),0);
      if (((uVar14 & 1) != 0) && (uVar14 = FUN_015ff8a0(plVar15[0x17],0), (uVar14 & 1) != 0)) {
        return;
      }
      if (param_2[0x18] == 0) goto LAB_01da003c;
      uVar23 = *(undefined8 *)(param_2[0x18] + 0x18);
      uVar16 = FUN_01d2a2c4(plVar15,0);
      uVar14 = FUN_015fe560(uVar23,uVar16,4,0);
      if ((uVar14 & 1) != 0) {
        return;
      }
      goto LAB_01d9f9b0;
    }
    bVar3 = false;
  }
  else {
LAB_01d9f9b0:
    plVar15 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar5);
    if (plVar15 == (long *)0x0) goto LAB_01da003c;
    bVar3 = true;
    FUN_01d258dc(plVar15,uVar13,local_70,0,1,0);
  }
  if (plVar11 == (long *)0x0) goto LAB_01da003c;
  lVar22 = plVar11[9];
  if (*(int *)(*(long *)
                Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01d982fc(plVar15,lVar22);
  FUN_01d98be0(param_1,plVar15,plVar11[9]);
  FUN_01d98850(plVar15,plVar11[9]);
  if (plVar15 == (long *)0x0) goto LAB_01da003c;
  uVar13 = FUN_01d294bc(plVar15,0);
  uVar14 = FUN_015ff8a0(uVar13,0);
  puVar5 = StringLiteral_7091;
  if ((uVar14 & 1) == 0) {
    plVar17 = *(long **)(param_1 + 0x30);
    if (plVar17 == (long *)0x0) goto LAB_01da003c;
    (**(code **)(*plVar17 + 0x308))(plVar17,plVar15,*(undefined8 *)(*plVar17 + 0x310));
  }
  if (((lVar21 == 0) || (*(long *)(lVar21 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar21 + 0x28) + 0x10) < 1)) {
LAB_01d9fab8:
    plVar15[0x1c] = lVar19;
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar19 = FUN_01d98168(plVar12,*(undefined8 *)puVar5);
    if (lVar19 != 0) {
      lVar19 = FUN_01d8e504(lVar21,0);
      goto LAB_01d9fab8;
    }
  }
  FUN_01d25c54(plVar15,lVar21,0);
  puVar4 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    lVar19 = param_2[10];
    lVar21 = param_2[0xb];
    lVar22 = *(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar22 = *(long *)puVar4;
    }
    uVar14 = FUN_017d2808(lVar19,lVar21,**(undefined8 **)(lVar22 + 0xb8),
                          (*(undefined8 **)(lVar22 + 0xb8))[1],0);
    if ((uVar14 & 1) != 0) goto LAB_01d9fb10;
    cVar20 = *(char *)((long)param_2 + 0x76);
  }
  else {
LAB_01d9fb10:
    cVar20 = '\x01';
  }
  FUN_01d26550(plVar15,cVar20 != '\0',0);
  if (param_2[0x14] == 0) goto LAB_01da003c;
  uVar14 = FUN_01f7609c(param_2[0x14],0);
  if ((uVar14 & 1) == 0) {
LAB_01d9fb7c:
    if (param_2[0x18] == 0) goto LAB_01da003c;
    FUN_01d2a33c(plVar15,*(undefined8 *)(param_2[0x18] + 0x18),0);
    uVar13 = FUN_01d2a2c4(plVar15,0);
    uVar13 = FUN_01d9d020(uVar13,plVar11,*(undefined8 *)puVar5,uVar13);
LAB_01d9fbb4:
    FUN_01d2a33c(plVar15,uVar13,0);
  }
  else {
    if ((param_2[0x18] == 0) || (param_3 == 0)) goto LAB_01da003c;
    uVar16 = *(undefined8 *)(param_2[0x18] + 0x18);
    uVar13 = FUN_01d3b244(param_3,0);
    uVar14 = FUN_015fe7e8(uVar16,uVar13,0);
    if ((uVar14 & 1) != 0) goto LAB_01d9fb7c;
    if (*(int *)((long)param_2 + 0x84) != 0) {
      if (*(int *)((long)param_2 + 0x84) != 2) goto LAB_01d9fb7c;
LAB_01d9fec4:
      uVar13 = **(undefined8 **)
                 (*(long *)
                   System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo +
                 0xb8);
      goto LAB_01d9fbb4;
    }
    plVar17 = (long *)param_2[5];
    do {
      plVar12 = plVar17;
                    /* try { // try from 01d9fe7c to 01e9fea3 has its CatchHandler @ 01da0060 */
      if (plVar12 == (long *)0x0) goto LAB_01da003c;
      plVar17 = (long *)plVar12[5];
    } while ((long *)plVar12[5] != (long *)0x0);
    bVar1 = *(byte *)(*(long *)Method_System_Net_TimerThread_CreateQueue__ + 300);
                    /* try { // try from 01d9feac to 01e9feb3 has its CatchHandler @ 01da0058 */
    if ((*(byte *)(*plVar12 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Net_TimerThread_CreateQueue__)) goto LAB_01da0078;
                    /* try { // try from 01d9fec0 to 01e9fec7 has its CatchHandler @ 01da0054 */
    if ((int)plVar12[7] == 2) goto LAB_01d9fec4;
  }
  puVar4 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar5 = Method_System_Collections_Generic_List<XRPass>_get_Item__;
  local_64 = 0xffffffff;
  if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  uVar13 = FUN_017319b4(0);
  uVar13 = FUN_0176ec60(&local_64,uVar13,0);
  uVar13 = FUN_01d9d020(uVar13,param_2,*(undefined8 *)puVar5,uVar13);
  uVar16 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  }
  uVar16 = FUN_01780344(uVar16,0);
                    /* try { // try from 01d9fc50 to 01e9fe1f has its CatchHandler @ 01d9fc50
                       catch() { ... } // from try @ 01d9fc50 with catch @ 01d9fc50
                       catch() { ... } // from try @ 01d9ff30 with catch @ 01d9fc50
                       catch() { ... } // from try @ 01d9fff4 with catch @ 01d9fc50
                       catch() { ... } // from try @ 01da0038 with catch @ 01d9fc50
                       catch() { ... } // from try @ 01da00e8 with catch @ 01d9fc50 */
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar6);
  }
  plVar12 = (long *)FUN_016fbcdc(uVar13,uVar16,0,0);
  if (plVar12 == (long *)0x0) goto LAB_01da003c;
  if (*(long *)(*plVar12 + 0x40) !=
      *(long *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__ +
               0x40)) {
LAB_01da0078:
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar12);
  }
  piVar18 = (int *)thunk_FUN_00d624a0();
  if (!bVar3) {
    uVar13 = FUN_01d2a2c4(plVar15,0);
    if (param_3 == 0) goto LAB_01da003c;
    goto LAB_01d9fd2c;
  }
  iVar9 = *piVar18;
  if (iVar9 < 0) {
    if (param_3 == 0) goto LAB_01da003c;
LAB_01d9fd0c:
    if (*(long *)(param_3 + 0x40) == 0) {
LAB_01da003c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01d2e180(*(long *)(param_3 + 0x40),plVar15,0);
  }
  else {
    if ((param_3 == 0) || (plVar12 = *(long **)(param_3 + 0x40), plVar12 == (long *)0x0))
    goto LAB_01da003c;
    iVar10 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (iVar10 <= iVar9) goto LAB_01d9fd0c;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_01da003c;
    FUN_01d2e18c(*(long *)(param_3 + 0x40),iVar9,plVar15,0);
  }
  uVar13 = FUN_01d2a2c4(plVar15,0);
LAB_01d9fd2c:
  uVar16 = FUN_01d3b244(param_3,0);
  uVar14 = thunk_FUN_015fe514(uVar13,uVar16,0);
  if ((uVar14 & 1) != 0) {
    plVar15[0x17] = 0;
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar13 = FUN_01d2a2c4(plVar15,0);
    uVar13 = FUN_01da4260(param_1,uVar13);
    FUN_01d286f0(plVar15,uVar13,0);
  }
  if (plVar11[0x11] != 0) {
    uVar13 = FUN_01d2ca20(plVar15,plVar11[0x11],0);
    FUN_01d28d14(plVar15,uVar13,0);
  }
  return;
}


