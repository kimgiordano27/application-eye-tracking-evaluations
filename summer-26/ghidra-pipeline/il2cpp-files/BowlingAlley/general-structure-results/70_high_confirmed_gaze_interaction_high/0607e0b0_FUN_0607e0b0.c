/*
FUNCTION_NAME: FUN_0607e0b0
ENTRY_POINT: 0607e0b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0607e0b0(long param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                 long param_6,uint param_7)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int local_64;
  
  if ((DAT_076dd406 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727f070);
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    thunk_FUN_032e1da0(PTR_DAT_072a14c0);
    thunk_FUN_032e1da0(PTR_DAT_072804e0);
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<GeometryChangedEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<object,_Vector3>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07287a48);
    thunk_FUN_032e1da0(System_Func<ValueTuple<Enum,_string>,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<VectorImageRenderInfo>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_RaycastHit___var);
    thunk_FUN_032e1da0(
                      System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    thunk_FUN_032e1da0(System_Func<Task<DependencyStatus>,_Task<DependencyStatus>>_TypeInfo);
    DAT_076dd406 = 1;
  }
  local_64 = 0;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (param_4 == 0) goto LAB_0607e408;
    if (*(long *)(param_4 + 0xf8) != 0) {
      return;
    }
  }
  if ((param_2 == 0) || (lVar9 = FUN_061ac6b8(param_2,0), lVar9 == 0)) goto LAB_0607e408;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_0607e2c4:
    plVar12 = *(long **)(param_2 + 0x60);
    if (plVar12 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
      if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
        lVar9 = FUN_061ac6b8(plVar12,0);
        if (lVar9 == 0) goto LAB_0607e408;
        uVar10 = FUN_057aa92c(*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)PTR_DAT_07285080,0);
        if ((uVar10 & 1) != 0) {
          lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                       System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                                     );
          FUN_0606a570(lVar11,param_2,0);
          lVar9 = lVar11;
          do {
            lVar21 = lVar9;
            if (lVar21 == 0) goto LAB_0607e408;
            lVar9 = *(long *)(lVar21 + 0x18);
          } while (*(long *)(lVar21 + 0x18) != 0);
          uVar13 = FUN_06082090(param_1,*(undefined8 *)(lVar21 + 0x10));
          if (lVar11 == 0) goto LAB_0607e408;
          param_3 = *(undefined8 *)(lVar11 + 0x28);
          goto LAB_0607e388;
        }
      }
    }
    uVar13 = FUN_06082090(param_1,param_3);
    lVar11 = 0;
  }
  else {
    lVar9 = FUN_061ac6b8(param_2,0);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_0607e408;
    if (*(int *)(*(long *)(lVar9 + 0x10) + 0x10) == 0) goto LAB_0607e2c4;
    lVar9 = FUN_061ac6b8(param_2,0);
    if (lVar9 == 0) goto LAB_0607e408;
    uVar10 = FUN_057aa92c(*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)PTR_DAT_07285080,0);
    if ((uVar10 & 1) == 0) goto LAB_0607e2c4;
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                               );
    FUN_0606a570(lVar11,param_2,0);
    plVar12 = (long *)FUN_061ac6b8(param_2,0);
    if (plVar12 == (long *)0x0) goto LAB_0607e408;
    param_3 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    plVar12 = (long *)FUN_061ac6b8(param_2,0);
    if (plVar12 == (long *)0x0) goto LAB_0607e408;
    uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar13 = FUN_06082090(param_1,uVar13);
  }
LAB_0607e388:
  if (param_4 == 0) goto LAB_0607e408;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar14 = FUN_057a19ac(*(undefined8 *)(param_4 + 0x90),
                          *(undefined8 *)
                           System_Func<ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                          ,0);
    lVar9 = *(long *)(param_4 + 0x40);
    if (lVar9 != 0) {
      iVar18 = 0;
      do {
        lVar9 = FUN_0600bcf4(lVar9,uVar14,0);
        if (lVar9 == 0) goto LAB_0607e424;
        local_64 = iVar18;
        uVar15 = FUN_05920f80(&local_64,0);
        uVar14 = FUN_057a19ac(uVar14,uVar15,0);
        lVar9 = *(long *)(param_4 + 0x40);
        iVar18 = iVar18 + 1;
      } while (lVar9 != 0);
    }
    goto LAB_0607e408;
  }
  uVar14 = FUN_057a19ac(*(undefined8 *)(param_4 + 0x90),
                        *(undefined8 *)System_Func<ValueTuple<Enum,_string>,_string>_TypeInfo,0);
LAB_0607e424:
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_0607e408;
    uVar10 = FUN_0600dc0c(*(long *)(param_4 + 0x40),uVar14,1,0);
    if ((uVar10 & 1) == 0) goto LAB_0607e464;
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_0607e408;
    lVar9 = FUN_0600bcf4(*(long *)(param_4 + 0x40),uVar14,0);
    bVar3 = false;
  }
  else {
LAB_0607e464:
    lVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a14c0);
    FUN_060033dc(lVar9,uVar14,uVar13,0,3,0);
    bVar3 = true;
  }
  puVar4 = PTR_DAT_07280380;
  if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_060740f4(lVar9,param_6);
  FUN_060749ec(param_1,lVar9,param_6);
  FUN_0607465c(lVar9,param_6);
  local_64 = -1;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar13 = FUN_058e6040(0);
  uVar13 = FUN_059210c4(&local_64,uVar13,0);
  if (lVar9 == 0) goto LAB_0607e408;
  FUN_060040cc(lVar9,param_7 & 1,0);
  puVar7 = System_Func<Task<DependencyStatus>,_Task<DependencyStatus>>_TypeInfo;
  puVar6 = System_Func<VectorImageRenderInfo>_TypeInfo;
  puVar5 = System_Collections_Generic_Dictionary<object,_Vector3>_TypeInfo;
  puVar4 = UnityEngine_RaycastHit___var;
  if ((param_6 == 0) || (uVar1 = *(uint *)(param_6 + 0x18), (int)uVar1 < 1)) {
    lVar21 = 0;
  }
  else {
    lVar20 = 0;
    lVar21 = 0;
    lVar17 = param_6 + 0x20;
    do {
      uVar19 = (uint)lVar20;
      if (uVar1 <= uVar19) {
LAB_0607e98c:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      plVar12 = *(long **)(lVar17 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_0607e408;
      uVar14 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
      uVar10 = thunk_FUN_057aa644(uVar14,*(undefined8 *)puVar7,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_0607e98c;
        plVar12 = *(long **)(lVar17 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_0607e408;
        uVar14 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
        uVar10 = thunk_FUN_057aa644(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_0607e98c;
          plVar12 = *(long **)(lVar17 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_0607e408;
          uVar14 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
          uVar10 = thunk_FUN_057aa644(uVar14,*(undefined8 *)PTR_DAT_07287a48,0);
          if ((uVar10 & 1) != 0) {
            FUN_060040cc(lVar9,0,0);
          }
        }
      }
      if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_0607e98c;
      plVar12 = *(long **)(lVar17 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_0607e408;
      uVar14 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
      uVar10 = thunk_FUN_057aa644(uVar14,*(undefined8 *)puVar6,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_0607e98c;
        plVar12 = *(long **)(lVar17 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_0607e408;
        uVar14 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
        uVar10 = thunk_FUN_057aa644(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_0607e98c;
          plVar12 = *(long **)(lVar17 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_0607e408;
          uVar13 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        }
      }
      if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_0607e98c;
      plVar12 = *(long **)(lVar17 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_0607e408;
      uVar14 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
      uVar10 = thunk_FUN_057aa644(uVar14,*(undefined8 *)puVar4,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_0607e98c;
        plVar12 = *(long **)(lVar17 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_0607e408;
        uVar14 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
        uVar10 = thunk_FUN_057aa644(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_0607e98c;
          plVar12 = *(long **)(lVar17 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_0607e408;
          lVar21 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        }
      }
      uVar1 = *(uint *)(param_6 + 0x18);
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < (int)uVar1);
  }
  puVar4 = PTR_DAT_0727f070;
  uVar14 = *(undefined8 *)PTR_DAT_072804e0;
  if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar14 = FUN_059324dc(uVar14,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar4);
  }
  plVar12 = (long *)FUN_058a763c(uVar13,uVar14,0,0);
  if (plVar12 == (long *)0x0) goto LAB_0607e408;
  if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_07279558 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d618c();
  }
  piVar16 = (int *)thunk_FUN_032a57f4();
  iVar18 = *piVar16;
  lVar17 = FUN_0600710c(lVar9,0);
  if (lVar17 != 0) {
    lVar17 = FUN_0600710c(lVar9,0);
    if (lVar17 == 0) goto LAB_0607e408;
    if (*(int *)(lVar17 + 0x10) != 0) {
      plVar12 = *(long **)(param_1 + 0x30);
      if (plVar12 == (long *)0x0) goto LAB_0607e408;
      (**(code **)(*plVar12 + 0x308))(plVar12,lVar9,*(undefined8 *)(*plVar12 + 0x310));
    }
  }
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar11 + 0x28) + 0x10) < 1)) {
LAB_0607e890:
    *(undefined8 *)(lVar9 + 0xe0) = param_3;
    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0xe0),param_3);
  }
  else {
    if (*(int *)(*(long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo + 0xe0) == 0)
    {
      thunk_FUN_032cd7c0();
    }
    lVar17 = FUN_06073f60(param_2,*(undefined8 *)System_Func<GeometryChangedEvent>_TypeInfo);
    if (lVar17 != 0) {
      param_3 = FUN_0606b26c(lVar11,0);
      goto LAB_0607e890;
    }
  }
  FUN_06003770(lVar9,lVar11,0);
  if (bVar3) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar13 = FUN_0601931c(param_4,0);
      uVar13 = FUN_0608044c(param_1,uVar13);
      FUN_0600631c(lVar9,uVar13,0);
      FUN_060040cc(lVar9,1,0);
    }
    if (-1 < iVar18) {
      plVar12 = *(long **)(param_4 + 0x40);
      if (plVar12 == (long *)0x0) goto LAB_0607e408;
      iVar8 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      if (iVar18 < iVar8) {
        if (*(long *)(param_4 + 0x40) != 0) {
          FUN_0600c030(*(long *)(param_4 + 0x40),iVar18,lVar9,0);
          goto joined_r0x0607e92c;
        }
        goto LAB_0607e408;
      }
    }
    if (*(long *)(param_4 + 0x40) == 0) {
LAB_0607e408:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_0600c024(*(long *)(param_4 + 0x40),lVar9,0);
  }
joined_r0x0607e92c:
  if (lVar21 != 0) {
    uVar13 = FUN_0600a784(lVar9,lVar21,0);
    FUN_0600695c(lVar9,uVar13,0);
  }
  return;
}


