/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<Guid>
ENTRY_POINT: 03666ca8
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array__InternalArray__set_Item<Guid>
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
               undefined8 param_5)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  int *piVar20;
  long unaff_x19;
  long *unaff_x20;
  int iVar21;
  long unaff_x25;
  code *pcVar22;
  long *unaff_x28;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  float fStack0000000000000028;
  float fStack000000000000002c;
  long in_stack_00000030;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc(param_1);
  }
  uVar8 = FUN_051d94d4(param_5,0,0);
  puVar2 = PTR_DAT_06d8a890;
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar9 = System_Array__InternalArray__set_Item<GradientColorKey>();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar2);
  }
  plVar10 = (long *)FUN_03667868(uVar9);
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar17 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar8 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_06e21e50) {
        puVar11 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_03666d5c;
      }
      uVar8 = uVar8 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_015c2a80(plVar10,*(long *)PTR_DAT_06e21e50,0);
LAB_03666d5c:
  iVar4 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  if (iVar4 == 0) {
    return;
  }
  lVar17 = (**(code **)(*unaff_x20 + 600))();
  lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>();
  if (lVar12 == 0) goto LAB_0366769c;
  iVar4 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
  if (iVar4 == 0) {
LAB_03666dc0:
    lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>();
    if (lVar12 == 0) goto LAB_0366769c;
    uVar5 = FUN_036e1214(lVar12,0);
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar8 = FUN_051d94d4(lVar17,0,0);
    if ((uVar8 & 1) != 0) goto LAB_03666dc0;
    if (lVar17 == 0) goto LAB_0366769c;
    uVar5 = FUN_051d71b8(lVar17,0);
  }
  if (unaff_x25 == 0) goto LAB_0366769c;
  fStack0000000000000028 = *(float *)(unaff_x25 + 0x104);
  uVar8 = FUN_0308f3d8(*(undefined4 *)(unaff_x25 + 0x100),0);
  if (DAT_0722a13e == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e50440);
    DAT_0722a13e = '\x01';
  }
  pfVar18 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
  fVar23 = (float)uVar8 - *pfVar18;
  uVar33 = (ulong)(uint)DAT_0534bf7c;
  fVar34 = (float)param_4;
  if ((fVar34 - pfVar18[2]) * (fVar34 - pfVar18[2]) +
      fVar23 * fVar23 +
      (fStack0000000000000028 - pfVar18[1]) * (fStack0000000000000028 - pfVar18[1]) < DAT_0534bf7c)
  {
    uVar8 = (ulong)*(uint *)(unaff_x25 + 0x100);
    fStack0000000000000028 = *(float *)(unaff_x25 + 0x104);
    param_4 = 0;
  }
  else {
    uVar1 = 0x80000000;
    if (fVar34 != INFINITY) {
      uVar1 = (int)fVar34;
    }
    if (uVar1 != uVar5) {
      return;
    }
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar13 = FUN_051d94d4(lVar17,0,0);
  if ((uVar13 & 1) == 0) {
    if (lVar17 == 0) goto LAB_0366769c;
    fVar23 = fStack0000000000000028;
    fVar34 = (float)FUN_051d7d18(uVar8,fStack0000000000000028,param_4,lVar17,0);
  }
  else {
    iVar4 = FUN_04882f98(0);
    fVar34 = (float)iVar4;
    iVar4 = FUN_04882fc0(0);
    puVar2 = PTR_DAT_06da0418;
    fVar23 = (float)iVar4;
    if (0 < (int)uVar5) {
      lVar12 = *(long *)PTR_DAT_06da0418;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar12 = *(long *)puVar2;
      }
      lVar19 = **(long **)(lVar12 + 0xb8);
      if (lVar19 == 0) goto LAB_0366769c;
      if ((int)uVar5 < *(int *)(lVar19 + 0x18)) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar19 = **(long **)(*(long *)puVar2 + 0xb8);
          if (lVar19 == 0) goto LAB_0366769c;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar5) goto LAB_03667864;
        lVar12 = *(long *)(lVar19 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_0366769c;
        iVar4 = FUN_051d0fb0(lVar12,0);
        lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
        if (lVar12 == 0) goto LAB_0366769c;
        if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_03667864;
        lVar12 = *(long *)(lVar12 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_0366769c;
        fVar34 = (float)iVar4;
        iVar4 = FUN_051d1098(lVar12,0);
        fVar23 = (float)iVar4;
      }
    }
    fVar34 = (float)uVar8 / fVar34;
    fVar23 = fStack0000000000000028 / fVar23;
  }
  uVar13 = 0x3f800000;
  if (1.0 < fVar23) {
    return;
  }
  if (fVar23 < 0.0) {
    return;
  }
  if (fVar34 < 0.0) {
    return;
  }
  if (1.0 < fVar34) {
    return;
  }
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000080 = 0;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar14 = FUN_051d2ac0(lVar17,0,0);
  if ((uVar14 & 1) != 0) {
    if (lVar17 == 0) goto LAB_0366769c;
    FUN_051d81ac(&stack0x000000f0,uVar8,fStack0000000000000028,lVar17,0);
    in_stack_00000088 = in_stack_000000f8;
    in_stack_00000080 = in_stack_000000f0;
    in_stack_00000090 = in_stack_00000100;
    uVar13 = param_4;
  }
  lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>();
  if (lVar12 == 0) goto LAB_0366769c;
  iVar4 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
  if ((iVar4 == 0) || (*(int *)((long)unaff_x20 + 0x24) == 0)) {
    fStack000000000000002c = 3.4028235e+38;
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar14 = FUN_051d2ac0(lVar17,0,0);
    if ((uVar14 & 1) == 0) {
      fVar23 = 100.0;
    }
    else {
      FUN_051db578(&stack0x00000080,0);
      if (DAT_0722a469 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06d97918);
        DAT_0722a469 = '\x01';
      }
      fVar24 = (float)uVar13;
      fVar29 = ABS(fVar24);
      uVar13 = (ulong)(uint)fVar29;
      uVar33 = 0x41000000;
      fVar34 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
      fVar23 = fVar29 * DAT_0534bb40;
      if (fVar29 * DAT_0534bb40 <= fVar34) {
        fVar23 = fVar34;
      }
      if (fVar29 < fVar23) {
        fVar23 = INFINITY;
      }
      else {
        if (lVar17 == 0) goto LAB_0366769c;
        fVar23 = (float)FUN_051d54c0(lVar17,0);
        fVar34 = (float)FUN_051d5438(lVar17,0);
        fVar23 = ABS((fVar23 - fVar34) / fVar24);
      }
    }
    uVar5 = *(uint *)((long)unaff_x20 + 0x24);
    if ((uVar5 & 0xfffffffe) == 2) {
      lVar12 = FUN_030a030c(0);
      if (lVar12 == 0) goto LAB_0366769c;
      if (*(long *)(lVar12 + 0x10) == 0) {
LAB_036677b8:
        fStack000000000000002c = 3.4028235e+38;
      }
      else {
        lVar12 = FUN_030a030c(0);
        if (lVar12 == 0) goto LAB_0366769c;
        lVar12 = *(long *)(lVar12 + 0x18);
        in_stack_000000a8 = in_stack_00000088;
        in_stack_000000a0 = in_stack_00000080;
        in_stack_000000b0 = in_stack_00000090;
        uVar7 = FUN_051e2138((int)unaff_x20[5],0);
        if (lVar12 == 0) goto LAB_0366769c;
        in_stack_000000f8 = in_stack_000000a8;
        in_stack_000000f0 = in_stack_000000a0;
        in_stack_00000100 = in_stack_000000b0;
        lVar12 = (**(code **)(lVar12 + 0x18))
                           (fVar23,*(undefined8 *)(lVar12 + 0x40),&stack0x000000f0,uVar7,
                            *(undefined8 *)(lVar12 + 0x28));
        if (lVar12 == 0) goto LAB_0366769c;
        if (*(long *)(lVar12 + 0x18) == 0) goto LAB_036677b8;
        if ((int)*(long *)(lVar12 + 0x18) == 0) goto LAB_03667864;
        fStack000000000000002c = (float)FUN_049ab7f0(lVar12 + 0x20,0);
      }
      uVar5 = *(uint *)((long)unaff_x20 + 0x24);
    }
    else {
      fStack000000000000002c = 3.4028235e+38;
    }
    if ((uVar5 | 2) == 3) {
      lVar12 = FUN_030a030c(0);
      if (lVar12 == 0) goto LAB_0366769c;
      if (*(long *)(lVar12 + 0x28) != 0) {
        lVar12 = FUN_030a030c(0);
        if (lVar12 == 0) goto LAB_0366769c;
        lVar12 = *(long *)(lVar12 + 0x30);
        in_stack_000000a8 = in_stack_00000088;
        in_stack_000000a0 = in_stack_00000080;
        in_stack_000000b0 = in_stack_00000090;
        uVar7 = FUN_051e2138((int)unaff_x20[5],0);
        if (lVar12 == 0) goto LAB_0366769c;
        in_stack_000000f8 = in_stack_000000a8;
        in_stack_000000f0 = in_stack_000000a0;
        in_stack_00000100 = in_stack_000000b0;
        lVar12 = (**(code **)(lVar12 + 0x18))
                           (fVar23,*(undefined8 *)(lVar12 + 0x40),&stack0x000000f0,uVar7,
                            *(undefined8 *)(lVar12 + 0x28));
        if (lVar12 == 0) goto LAB_0366769c;
        if (*(long *)(lVar12 + 0x18) != 0) {
          if ((int)*(long *)(lVar12 + 0x18) == 0) {
LAB_03667864:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          fStack000000000000002c = (float)FUN_03b71a54(lVar12 + 0x20,0);
        }
      }
    }
  }
  puVar2 = PTR_DAT_06dc3868;
  lVar12 = unaff_x20[7];
  if (lVar12 != 0) {
    iVar4 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar4) {
      FUN_031dd574(*(undefined8 *)(lVar12 + 0x10),0,iVar4,0);
    }
    System_Array__InternalArray__set_Item<GradientColorKey>();
    lVar12 = *(long *)puVar2;
    lVar19 = unaff_x20[7];
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = thunk_FUN_016466fc();
    }
    uVar14 = (ulong)(uint)fStack0000000000000028;
    FUN_03667924(uVar8,lVar12,lVar17,plVar10,lVar19);
    puVar2 = PTR_DAT_06e61e40;
    lVar12 = unaff_x20[7];
    if (lVar12 != 0) {
      iVar4 = *(int *)(lVar12 + 0x18);
      if (iVar4 < 1) {
        return;
      }
      iVar21 = 0;
      puVar11 = (undefined8 *)((ulong)&stack0x00000030 | 8);
      while (lVar12 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                (lVar12,iVar21,*(undefined8 *)puVar2), lVar12 != 0) {
        lVar12 = FUN_051e516c(lVar12,0);
        if ((char)unaff_x20[4] == '\0') {
          if (lVar12 == 0) break;
LAB_03667408:
          lVar19 = FUN_051df7a8(lVar12,0);
          if (lVar19 == 0) break;
          fVar23 = (float)FUN_04f1b1c0(lVar19,0);
          uVar8 = uVar14;
          uVar32 = uVar13;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar15 = FUN_051d94d4(lVar17,0,0);
          fVar24 = (float)uVar14;
          fVar29 = (float)uVar13;
          uVar14 = uVar8;
          uVar13 = uVar32;
          fVar34 = 0.0;
          if ((uVar15 & 1) == 0) {
            lVar16 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar16 == 0) break;
            iVar6 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar16,0);
            uVar14 = uVar8;
            uVar13 = uVar32;
            fVar34 = 0.0;
            if (iVar6 != 0) {
              fVar26 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar19,0);
              fVar34 = (float)uVar8;
              fVar31 = (float)uVar32;
              fVar27 = (float)FUN_051db584(&stack0x00000080,0);
              fVar31 = (float)uVar32 - fVar31;
              uVar13 = (ulong)(uint)fVar31;
              fVar31 = fVar29 * fVar31;
              fVar34 = fVar31 + fVar23 * (fVar26 - fVar27) + fVar24 * ((float)uVar8 - fVar34);
              fVar26 = (float)FUN_051db578(&stack0x00000080,0);
              fVar29 = fVar29 * (float)uVar13;
              uVar14 = (ulong)(uint)fVar29;
              fVar34 = fVar34 / (fVar29 + fVar23 * fVar26 + fVar24 * fVar31);
              if (fVar34 < 0.0) goto LAB_03667688;
            }
          }
          if (fVar34 < fStack000000000000002c) {
            puVar11[8] = 0;
            puVar11[5] = 0;
            puVar11[4] = 0;
            puVar11[7] = 0;
            puVar11[6] = 0;
            puVar11[1] = 0;
            *puVar11 = 0;
            puVar11[3] = 0;
            puVar11[2] = 0;
            in_stack_00000030 = lVar12;
            thunk_FUN_01656ef8(&stack0x00000030,lVar12);
            fVar24 = (float)uVar13;
            fVar29 = (float)uVar14;
            thunk_FUN_01656ef8(puVar11);
            if (((unaff_x19 == 0) || (unaff_x20[7] == 0)) ||
               (lVar12 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                   (unaff_x20[7],iVar21,*(undefined8 *)puVar2), lVar12 == 0)) break;
            FUN_03663fd4();
            lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar12 == 0) break;
            FUN_036e1250(lVar12,0);
            lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar12 == 0) break;
            FUN_036e1194(lVar12,0);
            FUN_051db584(&stack0x00000080,0);
            fVar31 = fVar29;
            fVar26 = fVar24;
            FUN_051db578(&stack0x00000080,0);
            lVar19 = *(long *)PTR_DAT_06db7458;
            uVar33 = (ulong)(uint)-fVar23;
            uVar14 = (ulong)(uint)(fVar29 + fVar34 * fVar31);
            uVar13 = (ulong)(uint)(fVar24 + fVar34 * fVar26);
            memcpy(&stack0x000000a0,&stack0x00000030,0x50);
            lVar12 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar12 == 0) break;
            uVar5 = *(uint *)(unaff_x19 + 0x18);
            if (uVar5 < *(uint *)(lVar12 + 0x18)) {
              __dest = (void *)(lVar12 + (long)(int)uVar5 * 0x50 + 0x20);
              *(uint *)(unaff_x19 + 0x18) = uVar5 + 1;
              memcpy(__dest,&stack0x000000a0,0x50);
              thunk_FUN_01656ef8(__dest,0);
            }
            else {
              pcVar22 = *(code **)(*(long *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x58) + 8)
              ;
              memcpy(&stack0x000000f0,&stack0x000000a0,0x50);
              (*pcVar22)();
            }
          }
        }
        else {
          uVar8 = uVar13;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            uVar8 = uVar13;
          }
          uVar13 = FUN_051d94d4(lVar17,0,0);
          puVar3 = PTR_DAT_06e50440;
          if ((uVar13 & 1) == 0) {
            if ((lVar17 == 0) || (lVar19 = FUN_051e5130(lVar17,0), lVar19 == 0)) break;
            uVar9 = FUN_04f1adf8(lVar19,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar19 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar29 = (float)FUN_04f13f58(uVar9,uVar14,uVar8,uVar33,*(undefined4 *)(lVar19 + 0x48),
                                         *(undefined4 *)(lVar19 + 0x4c),
                                         *(undefined4 *)(lVar19 + 0x50),0);
            fVar23 = (float)uVar14;
            fVar34 = (float)uVar8;
            fVar24 = (float)FUN_051d5438(lVar17,0);
            if ((lVar12 == 0) || (lVar19 = FUN_051df7a8(lVar12,0), lVar19 == 0)) break;
            fVar27 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar19,0);
            fVar31 = fVar23;
            fVar26 = fVar34;
            lVar19 = FUN_051e5130(lVar17,0);
            if (lVar19 == 0) break;
            fVar25 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar19,0);
            lVar19 = FUN_051df7a8(lVar12,0);
            if (lVar19 == 0) break;
            uVar33 = (ulong)(uint)(fVar27 - fVar25);
            fVar28 = (float)uVar14 * fVar24;
            fVar30 = (float)uVar8 * fVar24;
            uVar13 = (ulong)(uint)fVar30;
            fVar31 = (fVar23 - fVar31) - fVar28;
            fVar23 = (float)FUN_04f1b1c0(lVar19,0);
            fVar34 = ((fVar34 - fVar26) - fVar30) * (float)uVar13;
            uVar14 = (ulong)(uint)fVar34;
            if (0.0 <= fVar34 + ((fVar27 - fVar25) - fVar29 * fVar24) * fVar23 + fVar31 * fVar28)
            goto LAB_03667408;
          }
          else {
            if ((lVar12 == 0) || (lVar19 = FUN_051df7a8(lVar12,0), lVar19 == 0)) break;
            uVar9 = FUN_04f1adf8(lVar19,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar19 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar23 = (float)FUN_04f13f58(uVar9,uVar14,uVar8,uVar33,*(undefined4 *)(lVar19 + 0x48),
                                         *(undefined4 *)(lVar19 + 0x4c),
                                         *(undefined4 *)(lVar19 + 0x50),0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar19 = *(long *)(*(long *)puVar3 + 0xb8);
            uVar13 = (ulong)(uint)*(float *)(lVar19 + 0x50);
            fVar29 = (float)uVar14;
            fVar34 = (float)uVar8 * *(float *)(lVar19 + 0x50);
            uVar14 = (ulong)(uint)fVar34;
            if (0.0 < fVar34 + fVar23 * *(float *)(lVar19 + 0x48) +
                               fVar29 * *(float *)(lVar19 + 0x4c)) goto LAB_03667408;
          }
        }
LAB_03667688:
        if (iVar4 + -1 == iVar21) {
          return;
        }
        lVar12 = unaff_x20[7];
        iVar21 = iVar21 + 1;
        if (lVar12 == 0) break;
      }
    }
  }
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


