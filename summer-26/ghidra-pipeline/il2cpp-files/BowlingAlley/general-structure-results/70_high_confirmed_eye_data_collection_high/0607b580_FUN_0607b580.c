/*
FUNCTION_NAME: FUN_0607b580
ENTRY_POINT: 0607b580
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_9;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_0607b580(long param_1,long *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  int *piVar16;
  ulong uVar17;
  char cVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined4 local_64;
  
  if ((DAT_076dd409 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072813a8);
    thunk_FUN_032e1da0(PTR_DAT_0727f070);
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    thunk_FUN_032e1da0(PTR_DAT_072a14c0);
    thunk_FUN_032e1da0(PTR_DAT_0727fc08);
    thunk_FUN_032e1da0(PTR_DAT_072804e0);
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(PTR_DAT_07282378);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_072813d0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                      );
    thunk_FUN_032e1da0(System_Func<GeometryChangedEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<VectorImageRenderInfo>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    thunk_FUN_032e1da0(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
    DAT_076dd409 = 1;
  }
  local_64 = 0;
  if (param_2 == (long *)0x0) goto LAB_0607c18c;
  plVar9 = param_2;
  if (param_2[0x13] == 0) {
    plVar9 = *(long **)(param_1 + 0x68);
    if (plVar9 == (long *)0x0) goto LAB_0607c18c;
    plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                               (plVar9,param_2[0x14],*(undefined8 *)(*plVar9 + 0x310));
    if (plVar9 == (long *)0x0) {
      return;
    }
    bVar1 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Func<TransitionRunEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(plVar9);
    }
  }
  puVar5 = System_Func<GeometryChangedEvent>_TypeInfo;
  puVar4 = PTR_DAT_07279510;
  plVar10 = (long *)FUN_06079180(param_1,plVar9);
  puVar6 = System_Func<FocusOutEvent>_TypeInfo;
  if (plVar10 == (long *)0x0) {
    if (plVar9[0x16] == 0) goto LAB_0607c18c;
    lVar19 = *(long *)(plVar9[0x16] + 0x10);
    uVar12 = FUN_057ab1f0(lVar19,0);
    if ((uVar12 & 1) == 0) {
      if (plVar9[0x16] == 0) goto LAB_0607c18c;
      lVar20 = *(long *)(plVar9[0x16] + 0x10);
      goto LAB_0607b9ec;
    }
    lVar19 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
    uVar11 = *(undefined8 *)PTR_DAT_072813d0;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = FUN_059324dc(uVar11,0);
LAB_0607b9f0:
    lVar20 = 0;
    uVar17 = uVar12;
  }
  else {
    lVar19 = *plVar10;
    bVar1 = *(byte *)(lVar19 + 0x130);
    bVar2 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
      if ((bVar2 <= bVar1) &&
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)System_Func<TransitionRunEvent>_TypeInfo)) {
        if (plVar10[0x16] == 0) goto LAB_0607c18c;
        lVar20 = *(long *)(plVar10[0x16] + 0x10);
        lVar19 = lVar20;
LAB_0607b9ec:
        uVar12 = FUN_06082090(param_1,lVar20);
        goto LAB_0607b9f0;
      }
      bVar2 = *(byte *)(*(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_Dictionary<PrimitiveType,_Mesh>_TypeInfo)) {
        if (plVar10[7] != 0) {
          FUN_02d9d3f0(plVar10);
          uVar11 = FUN_06012848(plVar10[7],0);
          goto LAB_0607c248;
        }
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0)
            == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar11 = FUN_06073f60(param_2,*(undefined8 *)
                                       System_Func<VisualElementFocusChangeTarget>_TypeInfo);
        uVar12 = FUN_057ab1f0(uVar11,0);
        if ((uVar12 & 1) == 0) {
          uVar11 = *(undefined8 *)PTR_DAT_07282378;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar12 = FUN_059324dc(uVar11,0);
          lVar20 = 0;
          lVar19 = 0;
          uVar17 = uVar12;
          goto LAB_0607b9f8;
        }
      }
      uVar11 = FUN_06012894(0);
      goto LAB_0607c248;
    }
    lVar20 = thunk_FUN_032a56a0(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                               );
    FUN_0606a570(lVar20,plVar10,0);
    bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
    goto LAB_0607c1c8;
    if ((plVar10[10] != 0) && (*(int *)(plVar10[10] + 0x10) != 0)) {
      lVar19 = FUN_061ac6b8(plVar10,0);
      if (lVar19 == 0) goto LAB_0607c18c;
      uVar12 = FUN_057aa92c(*(undefined8 *)(lVar19 + 0x18),*(undefined8 *)PTR_DAT_07285080,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0)
            == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_06073f60(plVar10,*(undefined8 *)puVar5);
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
        goto LAB_0607c1c8;
        plVar13 = (long *)FUN_061ac6b8(plVar10,0);
        if (plVar13 == (long *)0x0) goto LAB_0607c18c;
        lVar19 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        uVar12 = FUN_06082090(param_1,lVar19);
        uVar17 = uVar12;
        goto LAB_0607b9f8;
      }
    }
    puVar4 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
    if (lVar20 == 0) goto LAB_0607c18c;
    uVar11 = *(undefined8 *)(lVar20 + 0x20);
    if (*(int *)(*(long *)System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo + 0xe0)
        == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar12 = FUN_0624bca0(uVar11,0,0);
    puVar5 = PTR_DAT_07285080;
    if ((uVar12 & 1) != 0) {
      if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0607c18c;
      uVar12 = FUN_057aa92c(*(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x18),
                            *(undefined8 *)PTR_DAT_07285080,0);
      if ((uVar12 & 1) == 0) goto LAB_0607c0f0;
      plVar13 = *(long **)(param_1 + 0x78);
      if (plVar13 == (long *)0x0) goto LAB_0607c18c;
      plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                  (plVar13,*(undefined8 *)(lVar20 + 0x20),
                                   *(undefined8 *)(*plVar13 + 0x310));
      if (plVar13 == (long *)0x0) {
LAB_0607bfb8:
        plVar13 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if (*(byte *)(*plVar13 + 0x130) < bVar1) goto LAB_0607bfb8;
        if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6) {
          plVar13 = (long *)0x0;
        }
      }
      while (plVar13 != (long *)0x0) {
        FUN_0606a748(lVar20,plVar13,0);
        uVar11 = *(undefined8 *)(lVar20 + 0x20);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar12 = FUN_0624bca0(uVar11,0,0);
        if ((uVar12 & 1) == 0) break;
        if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0607c18c;
        uVar12 = FUN_057aa92c(*(undefined8 *)(*(long *)(lVar20 + 0x20) + 0x18),*(undefined8 *)puVar5
                              ,0);
        if ((uVar12 & 1) == 0) break;
        plVar13 = *(long **)(param_1 + 0x78);
        if (plVar13 == (long *)0x0) goto LAB_0607c18c;
        plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                    (plVar13,*(undefined8 *)(lVar20 + 0x20),
                                     *(undefined8 *)(*plVar13 + 0x310));
        if (plVar13 == (long *)0x0) break;
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if (*(byte *)(*plVar13 + 0x130) < bVar1) break;
        if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6) {
          plVar13 = (long *)0x0;
        }
      }
    }
LAB_0607c0f0:
    uVar17 = FUN_06082090(param_1,*(undefined8 *)(lVar20 + 0x10));
    lVar19 = *(long *)(lVar20 + 0x28);
    uVar12 = uVar17;
    if (*(int *)(lVar20 + 0x30) == 1) {
      uVar11 = *(undefined8 *)PTR_DAT_072813d0;
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar11 = FUN_059324dc(uVar11,0);
      uVar12 = FUN_0593b434(uVar17,uVar11,0);
      if ((uVar12 & 1) != 0) {
        uVar11 = *(undefined8 *)PTR_DAT_072813a8;
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar12 = FUN_059324dc(uVar11,0);
        uVar17 = uVar12;
      }
    }
  }
LAB_0607b9f8:
  puVar4 = PTR_DAT_072a1998;
  uVar11 = FUN_06074f14(uVar12,plVar9);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar4);
  }
  uVar11 = FUN_06240390(uVar11,0);
  if (((param_4 & 1) == 0) || (*(char *)(param_1 + 0xa0) != '\0')) {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_0607c18c;
    uVar12 = FUN_0600dc0c(*(long *)(param_3 + 0x40),uVar11,1,0);
    if ((uVar12 & 1) == 0) goto LAB_0607baf0;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_0607c18c;
    plVar13 = (long *)FUN_0600bcf4(*(long *)(param_3 + 0x40),uVar11,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (plVar13 == (long *)0x0) goto LAB_0607c18c;
      iVar7 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (iVar7 != 1) {
        FUN_02d9d3f0(plVar13);
        uVar11 = FUN_06012b68(plVar13[6],0);
LAB_0607c248:
        uVar14 = thunk_FUN_032e1da0(System_Func<Task<AssetLibrary>,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar11,uVar14);
      }
      if (param_2[0x18] == 0) goto LAB_0607c18c;
      uVar12 = FUN_057ab1f0(*(undefined8 *)(param_2[0x18] + 0x18),0);
      if (((uVar12 & 1) != 0) && (uVar12 = FUN_057ab1f0(plVar13[0x17],0), (uVar12 & 1) != 0)) {
        return;
      }
      if (param_2[0x18] == 0) goto LAB_0607c18c;
      uVar22 = *(undefined8 *)(param_2[0x18] + 0x18);
      uVar14 = FUN_06007f1c(plVar13,0);
      uVar12 = FUN_057aa690(uVar22,uVar14,4,0);
      if ((uVar12 & 1) != 0) {
        return;
      }
      goto LAB_0607baf0;
    }
    bVar3 = false;
  }
  else {
LAB_0607baf0:
    plVar13 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a14c0);
    bVar3 = true;
    FUN_060033dc(plVar13,uVar11,uVar17,0,1,0);
  }
  lVar21 = plVar9[9];
  if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_060740f4(plVar13,lVar21);
  FUN_060749ec(param_1,plVar13,plVar9[9]);
  FUN_0607465c(plVar13,plVar9[9]);
  if (plVar13 == (long *)0x0) goto LAB_0607c18c;
  uVar11 = FUN_0600710c(plVar13,0);
  uVar12 = FUN_057ab1f0(uVar11,0);
  puVar4 = System_Func<GeometryChangedEvent>_TypeInfo;
  if ((uVar12 & 1) == 0) {
    plVar15 = *(long **)(param_1 + 0x30);
    if (plVar15 == (long *)0x0) goto LAB_0607c18c;
    (**(code **)(*plVar15 + 0x308))(plVar15,plVar13,*(undefined8 *)(*plVar15 + 0x310));
  }
  if (((lVar20 == 0) || (*(long *)(lVar20 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar20 + 0x28) + 0x10) < 1)) {
LAB_0607bbf4:
    plVar13[0x1c] = lVar19;
    thunk_FUN_0333a630(plVar13 + 0x1c,lVar19);
  }
  else {
    if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0) == 0)
    {
      thunk_FUN_032cd7c0();
    }
    lVar19 = FUN_06073f60(plVar10,*(undefined8 *)puVar4);
    if (lVar19 != 0) {
      lVar19 = FUN_0606b26c(lVar20,0);
      goto LAB_0607bbf4;
    }
  }
  FUN_06003770(plVar13,lVar20,0);
  puVar6 = PTR_DAT_0727fc08;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    lVar19 = param_2[10];
    lVar20 = param_2[0xb];
    lVar21 = *(long *)PTR_DAT_0727fc08;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar21 = *(long *)puVar6;
    }
    uVar12 = FUN_0598371c(lVar19,lVar20,**(undefined8 **)(lVar21 + 0xb8),
                          (*(undefined8 **)(lVar21 + 0xb8))[1],0);
    if ((uVar12 & 1) != 0) goto LAB_0607bc58;
    cVar18 = *(char *)((long)param_2 + 0x76);
  }
  else {
LAB_0607bc58:
    cVar18 = '\x01';
  }
  FUN_060040cc(plVar13,cVar18 != '\0',0);
  if (param_2[0x14] == 0) goto LAB_0607c18c;
  uVar12 = FUN_0624bb14(param_2[0x14],0);
  if ((uVar12 & 1) == 0) {
LAB_0607bcc4:
    if (param_2[0x18] == 0) goto LAB_0607c18c;
    FUN_06007f94(plVar13,*(undefined8 *)(param_2[0x18] + 0x18),0);
    uVar11 = FUN_06007f1c(plVar13,0);
    uVar11 = FUN_060790fc(uVar11,plVar9,*(undefined8 *)puVar4,uVar11);
LAB_0607bcfc:
    FUN_06007f94(plVar13,uVar11,0);
  }
  else {
    if ((param_2[0x18] == 0) || (param_3 == 0)) goto LAB_0607c18c;
    uVar14 = *(undefined8 *)(param_2[0x18] + 0x18);
    uVar11 = FUN_0601931c(param_3,0);
    uVar12 = FUN_057aa92c(uVar14,uVar11,0);
    if ((uVar12 & 1) != 0) goto LAB_0607bcc4;
    if (*(int *)((long)param_2 + 0x84) != 0) {
      if (*(int *)((long)param_2 + 0x84) != 2) goto LAB_0607bcc4;
LAB_0607c014:
      uVar11 = **(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8);
      goto LAB_0607bcfc;
    }
    plVar15 = (long *)param_2[5];
    do {
      plVar10 = plVar15;
      if (plVar10 == (long *)0x0) goto LAB_0607c18c;
      plVar15 = (long *)plVar10[5];
    } while ((long *)plVar10[5] != (long *)0x0);
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
       )) goto LAB_0607c1c8;
    if ((int)plVar10[7] == 2) goto LAB_0607c014;
  }
  puVar6 = System_Func<VectorImageRenderInfo>_TypeInfo;
  puVar4 = PTR_DAT_072804e0;
  local_64 = 0xffffffff;
  if (*(int *)(*(long *)PTR_DAT_07280380 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  puVar5 = PTR_DAT_0727f070;
  uVar11 = FUN_058e6040(0);
  uVar11 = FUN_059210c4(&local_64,uVar11,0);
  uVar11 = FUN_060790fc(uVar11,param_2,*(undefined8 *)puVar6,uVar11);
  uVar14 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
  }
  uVar14 = FUN_059324dc(uVar14,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar5);
  }
  plVar10 = (long *)FUN_058a763c(uVar11,uVar14,0,0);
  if (plVar10 == (long *)0x0) goto LAB_0607c18c;
  if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)PTR_DAT_07279558 + 0x40)) {
LAB_0607c1c8:
                    /* WARNING: Subroutine does not return */
    FUN_032d618c(plVar10);
  }
  piVar16 = (int *)thunk_FUN_032a57f4();
  if (!bVar3) {
    uVar11 = FUN_06007f1c(plVar13,0);
    if (param_3 == 0) goto LAB_0607c18c;
    goto LAB_0607be74;
  }
  iVar7 = *piVar16;
  if (iVar7 < 0) {
    if (param_3 == 0) goto LAB_0607c18c;
LAB_0607be54:
    if (*(long *)(param_3 + 0x40) == 0) {
LAB_0607c18c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_0600c024(*(long *)(param_3 + 0x40),plVar13,0);
  }
  else {
    if ((param_3 == 0) || (plVar10 = *(long **)(param_3 + 0x40), plVar10 == (long *)0x0))
    goto LAB_0607c18c;
    iVar8 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
    if (iVar8 <= iVar7) goto LAB_0607be54;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_0607c18c;
    FUN_0600c030(*(long *)(param_3 + 0x40),iVar7,plVar13,0);
  }
  uVar11 = FUN_06007f1c(plVar13,0);
LAB_0607be74:
  uVar14 = FUN_0601931c(param_3,0);
  uVar12 = thunk_FUN_057aa644(uVar11,uVar14,0);
  if ((uVar12 & 1) != 0) {
    plVar13[0x17] = 0;
    thunk_FUN_0333a630(plVar13 + 0x17,0);
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar11 = FUN_06007f1c(plVar13,0);
    uVar11 = FUN_0608044c(param_1,uVar11);
    FUN_0600631c(plVar13,uVar11,0);
  }
  if (plVar9[0x11] != 0) {
    uVar11 = FUN_0600a784(plVar13,plVar9[0x11],0);
    FUN_0600695c(plVar13,uVar11,0);
  }
  return;
}


