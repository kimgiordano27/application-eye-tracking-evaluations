/*
FUNCTION_NAME: FUN_0607c594
ENTRY_POINT: 0607c594
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_3;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0607c594(long param_1,long *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong local_68;
  
  if ((DAT_076dd408 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072813a8);
    thunk_FUN_032e1da0(PTR_DAT_072a14c0);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_072813d0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<GeometryChangedEvent>_TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_RaycastHit___var);
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    thunk_FUN_032e1da0(System_Func<Task<DependencyStatus>,_Task<DependencyStatus>>_TypeInfo);
    DAT_076dd408 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_0607cdb8;
  plVar7 = param_2;
  if (param_2[0xc] == 0) {
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 == (long *)0x0) goto LAB_0607cdb8;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                               (plVar7,param_2[0xe],*(undefined8 *)(*plVar7 + 0x310));
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)System_Func<TransitionEndEvent>_TypeInfo + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<TransitionEndEvent>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar7);
      }
    }
  }
  plVar8 = (long *)FUN_06079180(param_1,plVar7);
  if (plVar8 == (long *)0x0) {
    if ((plVar7 == (long *)0x0) || (plVar7[0xf] == 0)) goto LAB_0607cdb8;
    lVar14 = *(long *)(plVar7[0xf] + 0x10);
    uVar9 = FUN_057ab1f0(lVar14,0);
    if ((uVar9 & 1) == 0) {
      if (plVar7[0xf] == 0) goto LAB_0607cdb8;
      uVar9 = FUN_057aa92c(*(undefined8 *)(plVar7[0xf] + 0x18),*(undefined8 *)PTR_DAT_07285080,0);
      plVar11 = (long *)plVar7[0xf];
      if (plVar11 == (long *)0x0) goto LAB_0607cdb8;
      if ((uVar9 & 1) == 0) {
        lVar15 = plVar11[2];
      }
      else {
        lVar15 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      }
      goto LAB_0607c998;
    }
    lVar14 = **(long **)(*(long *)PTR_DAT_072794f8 + 0xb8);
    uVar10 = *(undefined8 *)PTR_DAT_072813d0;
    if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar9 = FUN_059324dc(uVar10,0);
LAB_0607c99c:
    lVar15 = 0;
    local_68 = uVar9;
  }
  else {
    lVar14 = *plVar8;
    bVar1 = *(byte *)(*(long *)System_Func<FocusOutEvent>_TypeInfo + 0x130);
    if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Func<FocusOutEvent>_TypeInfo)) {
      bVar1 = *(byte *)(*(long *)System_Func<TransitionRunEvent>_TypeInfo + 0x130);
      if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)System_Func<TransitionRunEvent>_TypeInfo)) {
        if (plVar8[7] == 0) {
          uVar10 = FUN_06012894(0);
        }
        else {
          FUN_02d9d3f0(plVar8);
          uVar10 = FUN_06012848(plVar8[7],0);
        }
        goto LAB_0607cf04;
      }
      if (plVar8[0x16] == 0) goto LAB_0607cdb8;
      lVar15 = *(long *)(plVar8[0x16] + 0x10);
      lVar14 = lVar15;
LAB_0607c998:
      uVar9 = FUN_06082090(param_1,lVar15);
      goto LAB_0607c99c;
    }
    lVar15 = thunk_FUN_032a56a0(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>_TypeInfo
                               );
    FUN_0606a570(lVar15,plVar8,0);
    lVar14 = FUN_061ac6b8(plVar8,0);
    if (lVar14 == 0) goto LAB_0607cdb8;
    if (*(long *)(lVar14 + 0x10) == 0) {
LAB_0607c8f8:
      if (lVar15 == 0) goto LAB_0607cdb8;
      local_68 = FUN_06082090(param_1,*(undefined8 *)(lVar15 + 0x10));
      puVar4 = PTR_DAT_07279510;
      lVar14 = *(long *)(lVar15 + 0x28);
      uVar9 = local_68;
      if (*(int *)(lVar15 + 0x30) == 1) {
        uVar10 = *(undefined8 *)PTR_DAT_072813d0;
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar10 = FUN_059324dc(uVar10,0);
        uVar9 = FUN_0593b434(local_68,uVar10,0);
        if ((uVar9 & 1) != 0) {
          uVar10 = *(undefined8 *)PTR_DAT_072813a8;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar9 = FUN_059324dc(uVar10,0);
          local_68 = uVar9;
        }
      }
    }
    else {
      lVar14 = FUN_061ac6b8(plVar8,0);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) goto LAB_0607cdb8;
      if (*(int *)(*(long *)(lVar14 + 0x10) + 0x10) == 0) goto LAB_0607c8f8;
      lVar14 = FUN_061ac6b8(plVar8,0);
      if (lVar14 == 0) goto LAB_0607cdb8;
      uVar9 = FUN_057aa92c(*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_07285080,0);
      if ((uVar9 & 1) == 0) goto LAB_0607c8f8;
      plVar11 = (long *)FUN_061ac6b8(plVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_0607cdb8;
      lVar14 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      plVar11 = (long *)FUN_061ac6b8(plVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_0607cdb8;
      uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      uVar9 = FUN_06082090(param_1,uVar10);
      local_68 = uVar9;
    }
  }
  puVar4 = PTR_DAT_072a1998;
  uVar10 = FUN_06074f14(uVar9,plVar7);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar4);
  }
  uVar10 = FUN_06240390(uVar10,0);
  if (((param_4 & 1) == 0) || (*(char *)(param_1 + 0xa0) != '\0')) {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_0607cdb8;
    uVar9 = FUN_0600dc0c(*(long *)(param_3 + 0x40),uVar10,1,0);
    if ((uVar9 & 1) == 0) goto LAB_0607ca9c;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_0607cdb8;
    plVar11 = (long *)FUN_0600bcf4(*(long *)(param_3 + 0x40),uVar10,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (plVar11 == (long *)0x0) goto LAB_0607cdb8;
      iVar5 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      if (iVar5 != 2) {
        FUN_02d9d3f0(plVar11);
        uVar10 = FUN_06012b68(plVar11[6],0);
LAB_0607cf04:
        uVar12 = thunk_FUN_032e1da0(System_Func<Task<Texture>,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar10,uVar12);
      }
      if (param_2[0x10] == 0) goto LAB_0607cdb8;
      uVar9 = FUN_057ab1f0(*(undefined8 *)(param_2[0x10] + 0x18),0);
      if (((uVar9 & 1) != 0) && (uVar9 = FUN_057ab1f0(plVar11[0x17],0), (uVar9 & 1) != 0)) {
        return;
      }
      if (param_2[0x10] == 0) goto LAB_0607cdb8;
      uVar17 = *(undefined8 *)(param_2[0x10] + 0x18);
      uVar12 = FUN_06007f1c(plVar11,0);
      uVar9 = FUN_057aa690(uVar17,uVar12,4,0);
      if ((uVar9 & 1) != 0) {
        return;
      }
      goto LAB_0607ca9c;
    }
    bVar2 = false;
    plVar3 = (long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo;
  }
  else {
LAB_0607ca9c:
    plVar11 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a14c0);
    FUN_060033dc(plVar11,uVar10,local_68,0,2,0);
    bVar2 = true;
    plVar3 = (long *)System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo;
  }
  System_Collections_Generic_Dictionary<Pose,_string>_TypeInfo = (undefined *)plVar3;
  if (plVar7 == (long *)0x0) goto LAB_0607cdb8;
  lVar16 = plVar7[9];
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_060740f4(plVar11,lVar16);
  FUN_060749ec(param_1,plVar11,plVar7[9]);
  FUN_0607465c(plVar11,plVar7[9]);
  if (plVar11 == (long *)0x0) goto LAB_0607cdb8;
  lVar16 = FUN_0600710c(plVar11,0);
  if (lVar16 != 0) {
    lVar16 = FUN_0600710c(plVar11,0);
    if (lVar16 == 0) goto LAB_0607cdb8;
    if (*(int *)(lVar16 + 0x10) != 0) {
      plVar13 = *(long **)(param_1 + 0x30);
      if (plVar13 == (long *)0x0) goto LAB_0607cdb8;
      (**(code **)(*plVar13 + 0x308))(plVar13,plVar11,*(undefined8 *)(*plVar13 + 0x310));
    }
  }
  puVar4 = System_Func<GeometryChangedEvent>_TypeInfo;
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar15 + 0x28) + 0x10) < 1)) {
LAB_0607cbac:
    plVar11[0x1c] = lVar14;
    thunk_FUN_0333a630(plVar11 + 0x1c,lVar14);
  }
  else {
    if (*(int *)(*plVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar14 = FUN_06073f60(plVar8,*(undefined8 *)puVar4);
    if (lVar14 != 0) {
      lVar14 = FUN_0606b26c(lVar15,0);
      goto LAB_0607cbac;
    }
  }
  FUN_06003770(plVar11,lVar15,0);
  FUN_060040cc(plVar11,*(int *)((long)param_2 + 0x6c) != 3,0);
  if (param_2[0x10] == 0) {
LAB_0607cdb8:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_06007f94(plVar11,*(undefined8 *)(param_2[0x10] + 0x18),0);
  uVar10 = FUN_06007f1c(plVar11,0);
  uVar10 = FUN_060790fc(uVar10,param_2,*(undefined8 *)puVar4,uVar10);
  FUN_06007f94(plVar11,uVar10,0);
  if (bVar2) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      FUN_060040cc(plVar11,1,0);
      uVar10 = FUN_06007f1c(plVar11,0);
      uVar10 = FUN_0608044c(param_1,uVar10);
      FUN_0600631c(plVar11,uVar10,0);
    }
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_0607cdb8;
    FUN_0600c024(*(long *)(param_3 + 0x40),plVar11,0);
  }
  iVar5 = *(int *)((long)param_2 + 0x6c);
  if (iVar5 == 2) {
    uVar10 = (**(code **)(*plVar11 + 0x1e8))(plVar11,4,*(undefined8 *)(*plVar11 + 0x1f0));
    uVar6 = FUN_0607672c(uVar10,plVar7,
                         *(undefined8 *)
                          System_Func<Task<DependencyStatus>,_Task<DependencyStatus>>_TypeInfo,1);
    FUN_060040cc(plVar11,uVar6 & 1,0);
    if (*(int *)(*plVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar14 = FUN_06073f60(plVar7,*(undefined8 *)UnityEngine_RaycastHit___var);
    if (lVar14 != 0) {
      uVar10 = FUN_0600a784(plVar11,lVar14,0);
      FUN_0600695c(plVar11,uVar10,0);
    }
    iVar5 = *(int *)((long)param_2 + 0x6c);
  }
  if (iVar5 == 3) {
    if (*(int *)(*plVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar14 = FUN_06073f60(plVar7,*(undefined8 *)UnityEngine_RaycastHit___var);
  }
  else {
    lVar14 = plVar7[10];
  }
  if ((lVar14 == 0) && (*(int *)((long)plVar7 + 0x6c) == 1)) {
    lVar14 = plVar7[0xb];
  }
  if (lVar14 != 0) {
    uVar10 = FUN_0600a784(plVar11,lVar14,0);
    FUN_0600695c(plVar11,uVar10,0);
  }
  return;
}


