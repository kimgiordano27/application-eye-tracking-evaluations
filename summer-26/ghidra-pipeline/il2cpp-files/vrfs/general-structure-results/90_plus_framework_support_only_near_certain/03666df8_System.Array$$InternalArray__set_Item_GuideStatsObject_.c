/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<GuideStatsObject>
ENTRY_POINT: 03666df8
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<GuideStatsObject>
               (undefined1 param_1 [16],float param_2,ulong param_3)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  float *pfVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar14;
  long unaff_x25;
  undefined8 *puVar15;
  uint unaff_w26;
  code *pcVar16;
  long *unaff_x28;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  float fVar30;
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
  
  fStack0000000000000028 = param_2;
  uVar22 = FUN_0308f3d8(0);
  if (DAT_0722a13e == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e50440);
    DAT_0722a13e = '\x01';
  }
  pfVar12 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
  fVar17 = (float)uVar22 - *pfVar12;
  uVar29 = (ulong)(uint)DAT_0534bf7c;
  fVar30 = (float)param_3;
  if ((fVar30 - pfVar12[2]) * (fVar30 - pfVar12[2]) +
      fVar17 * fVar17 +
      (fStack0000000000000028 - pfVar12[1]) * (fStack0000000000000028 - pfVar12[1]) < DAT_0534bf7c)
  {
    uVar22 = (ulong)*(uint *)(unaff_x25 + 0x100);
    fStack0000000000000028 = *(float *)(unaff_x25 + 0x104);
    param_3 = 0;
  }
  else {
    uVar11 = 0x80000000;
    if (fVar30 != INFINITY) {
      uVar11 = (int)fVar30;
    }
    if (uVar11 != unaff_w26) {
      return;
    }
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar6 = FUN_051d94d4();
  if ((uVar6 & 1) == 0) {
    if (unaff_x21 == 0) goto LAB_0366769c;
    fVar17 = fStack0000000000000028;
    fVar30 = (float)FUN_051d7d18(uVar22,fStack0000000000000028,param_3);
  }
  else {
    iVar3 = FUN_04882f98(0);
    fVar30 = (float)iVar3;
    iVar3 = FUN_04882fc0(0);
    puVar1 = PTR_DAT_06da0418;
    fVar17 = (float)iVar3;
    if (0 < (int)unaff_w26) {
      lVar7 = *(long *)PTR_DAT_06da0418;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar7 = *(long *)puVar1;
      }
      lVar13 = **(long **)(lVar7 + 0xb8);
      if (lVar13 == 0) goto LAB_0366769c;
      if ((int)unaff_w26 < *(int *)(lVar13 + 0x18)) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar13 = **(long **)(*(long *)puVar1 + 0xb8);
          if (lVar13 == 0) goto LAB_0366769c;
        }
        if (*(uint *)(lVar13 + 0x18) <= unaff_w26) goto LAB_03667864;
        lVar7 = *(long *)(lVar13 + (long)(int)unaff_w26 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0366769c;
        iVar3 = FUN_051d0fb0(lVar7,0);
        lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar7 == 0) goto LAB_0366769c;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w26) goto LAB_03667864;
        lVar7 = *(long *)(lVar7 + (long)(int)unaff_w26 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0366769c;
        fVar30 = (float)iVar3;
        iVar3 = FUN_051d1098(lVar7,0);
        fVar17 = (float)iVar3;
      }
    }
    fVar30 = (float)uVar22 / fVar30;
    fVar17 = fStack0000000000000028 / fVar17;
  }
  uVar6 = 0x3f800000;
  if (1.0 < fVar17) {
    return;
  }
  if (fVar17 < 0.0) {
    return;
  }
  if (fVar30 < 0.0) {
    return;
  }
  if (1.0 < fVar30) {
    return;
  }
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000080 = 0;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar8 = FUN_051d2ac0();
  if ((uVar8 & 1) != 0) {
    if (unaff_x21 == 0) goto LAB_0366769c;
    FUN_051d81ac(&stack0x000000f0,uVar22,fStack0000000000000028);
    in_stack_00000088 = in_stack_000000f8;
    in_stack_00000080 = in_stack_000000f0;
    in_stack_00000090 = in_stack_00000100;
    uVar6 = param_3;
  }
  lVar7 = System_Array__InternalArray__set_Item<GradientColorKey>();
  if (lVar7 == 0) goto LAB_0366769c;
  iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar7,0);
  if ((iVar3 == 0) || (*(int *)(unaff_x20 + 0x24) == 0)) {
    fStack000000000000002c = 3.4028235e+38;
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar8 = FUN_051d2ac0();
    if ((uVar8 & 1) == 0) {
      fVar17 = 100.0;
    }
    else {
      FUN_051db578(&stack0x00000080,0);
      if (DAT_0722a469 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06d97918);
        DAT_0722a469 = '\x01';
      }
      fVar18 = (float)uVar6;
      fVar25 = ABS(fVar18);
      uVar6 = (ulong)(uint)fVar25;
      uVar29 = 0x41000000;
      fVar30 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
      fVar17 = fVar25 * DAT_0534bb40;
      if (fVar25 * DAT_0534bb40 <= fVar30) {
        fVar17 = fVar30;
      }
      if (fVar25 < fVar17) {
        fVar17 = INFINITY;
      }
      else {
        if (unaff_x21 == 0) goto LAB_0366769c;
        fVar17 = (float)FUN_051d54c0();
        fVar30 = (float)FUN_051d5438();
        fVar17 = ABS((fVar17 - fVar30) / fVar18);
      }
    }
    uVar11 = *(uint *)(unaff_x20 + 0x24);
    if ((uVar11 & 0xfffffffe) == 2) {
      lVar7 = FUN_030a030c(0);
      if (lVar7 == 0) goto LAB_0366769c;
      if (*(long *)(lVar7 + 0x10) == 0) {
LAB_036677b8:
        fStack000000000000002c = 3.4028235e+38;
      }
      else {
        lVar7 = FUN_030a030c(0);
        if (lVar7 == 0) goto LAB_0366769c;
        lVar7 = *(long *)(lVar7 + 0x18);
        in_stack_000000a8 = in_stack_00000088;
        in_stack_000000a0 = in_stack_00000080;
        in_stack_000000b0 = in_stack_00000090;
        uVar5 = FUN_051e2138(*(undefined4 *)(unaff_x20 + 0x28),0);
        if (lVar7 == 0) goto LAB_0366769c;
        in_stack_000000f8 = in_stack_000000a8;
        in_stack_000000f0 = in_stack_000000a0;
        in_stack_00000100 = in_stack_000000b0;
        lVar7 = (**(code **)(lVar7 + 0x18))
                          (fVar17,*(undefined8 *)(lVar7 + 0x40),&stack0x000000f0,uVar5,
                           *(undefined8 *)(lVar7 + 0x28));
        if (lVar7 == 0) goto LAB_0366769c;
        if (*(long *)(lVar7 + 0x18) == 0) goto LAB_036677b8;
        if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_03667864;
        fStack000000000000002c = (float)FUN_049ab7f0(lVar7 + 0x20,0);
      }
      uVar11 = *(uint *)(unaff_x20 + 0x24);
    }
    else {
      fStack000000000000002c = 3.4028235e+38;
    }
    if ((uVar11 | 2) == 3) {
      lVar7 = FUN_030a030c(0);
      if (lVar7 == 0) goto LAB_0366769c;
      if (*(long *)(lVar7 + 0x28) != 0) {
        lVar7 = FUN_030a030c(0);
        if (lVar7 == 0) goto LAB_0366769c;
        lVar7 = *(long *)(lVar7 + 0x30);
        in_stack_000000a8 = in_stack_00000088;
        in_stack_000000a0 = in_stack_00000080;
        in_stack_000000b0 = in_stack_00000090;
        uVar5 = FUN_051e2138(*(undefined4 *)(unaff_x20 + 0x28),0);
        if (lVar7 == 0) goto LAB_0366769c;
        in_stack_000000f8 = in_stack_000000a8;
        in_stack_000000f0 = in_stack_000000a0;
        in_stack_00000100 = in_stack_000000b0;
        lVar7 = (**(code **)(lVar7 + 0x18))
                          (fVar17,*(undefined8 *)(lVar7 + 0x40),&stack0x000000f0,uVar5,
                           *(undefined8 *)(lVar7 + 0x28));
        if (lVar7 == 0) goto LAB_0366769c;
        if (*(long *)(lVar7 + 0x18) != 0) {
          if ((int)*(long *)(lVar7 + 0x18) == 0) {
LAB_03667864:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          fStack000000000000002c = (float)FUN_03b71a54(lVar7 + 0x20,0);
        }
      }
    }
  }
  puVar1 = PTR_DAT_06dc3868;
  lVar7 = *(long *)(unaff_x20 + 0x38);
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar3) {
      FUN_031dd574(*(undefined8 *)(lVar7 + 0x10),0,iVar3,0);
    }
    System_Array__InternalArray__set_Item<GradientColorKey>();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar8 = (ulong)(uint)fStack0000000000000028;
    FUN_03667924(uVar22);
    puVar1 = PTR_DAT_06e61e40;
    lVar7 = *(long *)(unaff_x20 + 0x38);
    if (lVar7 != 0) {
      iVar3 = *(int *)(lVar7 + 0x18);
      if (iVar3 < 1) {
        return;
      }
      iVar14 = 0;
      puVar15 = (undefined8 *)((ulong)&stack0x00000030 | 8);
      while (lVar7 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                               (lVar7,iVar14,*(undefined8 *)puVar1), lVar7 != 0) {
        lVar7 = FUN_051e516c(lVar7,0);
        if (*(char *)(unaff_x20 + 0x20) == '\0') {
          if (lVar7 == 0) break;
LAB_03667408:
          lVar13 = FUN_051df7a8(lVar7,0);
          if (lVar13 == 0) break;
          fVar17 = (float)FUN_04f1b1c0(lVar13,0);
          uVar22 = uVar8;
          uVar28 = uVar6;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar9 = FUN_051d94d4();
          fVar18 = (float)uVar8;
          fVar25 = (float)uVar6;
          uVar8 = uVar22;
          uVar6 = uVar28;
          fVar30 = 0.0;
          if ((uVar9 & 1) == 0) {
            lVar10 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar10 == 0) break;
            iVar4 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar10,0);
            uVar8 = uVar22;
            uVar6 = uVar28;
            fVar30 = 0.0;
            if (iVar4 != 0) {
              fVar20 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar13,0);
              fVar30 = (float)uVar22;
              fVar27 = (float)uVar28;
              fVar21 = (float)FUN_051db584(&stack0x00000080,0);
              fVar27 = (float)uVar28 - fVar27;
              uVar6 = (ulong)(uint)fVar27;
              fVar27 = fVar25 * fVar27;
              fVar30 = fVar27 + fVar17 * (fVar20 - fVar21) + fVar18 * ((float)uVar22 - fVar30);
              fVar20 = (float)FUN_051db578(&stack0x00000080,0);
              fVar25 = fVar25 * (float)uVar6;
              uVar8 = (ulong)(uint)fVar25;
              fVar30 = fVar30 / (fVar25 + fVar17 * fVar20 + fVar18 * fVar27);
              if (fVar30 < 0.0) goto LAB_03667688;
            }
          }
          if (fVar30 < fStack000000000000002c) {
            puVar15[8] = 0;
            puVar15[5] = 0;
            puVar15[4] = 0;
            puVar15[7] = 0;
            puVar15[6] = 0;
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15[3] = 0;
            puVar15[2] = 0;
            in_stack_00000030 = lVar7;
            thunk_FUN_01656ef8(&stack0x00000030,lVar7);
            fVar18 = (float)uVar6;
            fVar25 = (float)uVar8;
            thunk_FUN_01656ef8(puVar15);
            if (((unaff_x19 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
               (lVar7 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                  (*(long *)(unaff_x20 + 0x38),iVar14,*(undefined8 *)puVar1),
               lVar7 == 0)) break;
            FUN_03663fd4();
            lVar7 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar7 == 0) break;
            FUN_036e1250(lVar7,0);
            lVar7 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar7 == 0) break;
            FUN_036e1194(lVar7,0);
            FUN_051db584(&stack0x00000080,0);
            fVar27 = fVar25;
            fVar20 = fVar18;
            FUN_051db578(&stack0x00000080,0);
            lVar13 = *(long *)PTR_DAT_06db7458;
            uVar29 = (ulong)(uint)-fVar17;
            uVar8 = (ulong)(uint)(fVar25 + fVar30 * fVar27);
            uVar6 = (ulong)(uint)(fVar18 + fVar30 * fVar20);
            memcpy(&stack0x000000a0,&stack0x00000030,0x50);
            lVar7 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar7 == 0) break;
            uVar11 = *(uint *)(unaff_x19 + 0x18);
            if (uVar11 < *(uint *)(lVar7 + 0x18)) {
              __dest = (void *)(lVar7 + (long)(int)uVar11 * 0x50 + 0x20);
              *(uint *)(unaff_x19 + 0x18) = uVar11 + 1;
              memcpy(__dest,&stack0x000000a0,0x50);
              thunk_FUN_01656ef8(__dest,0);
            }
            else {
              pcVar16 = *(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8)
              ;
              memcpy(&stack0x000000f0,&stack0x000000a0,0x50);
              (*pcVar16)();
            }
          }
        }
        else {
          uVar22 = uVar6;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            uVar22 = uVar6;
          }
          uVar6 = FUN_051d94d4();
          puVar2 = PTR_DAT_06e50440;
          if ((uVar6 & 1) == 0) {
            if ((unaff_x21 == 0) || (lVar13 = FUN_051e5130(), lVar13 == 0)) break;
            uVar23 = FUN_04f1adf8(lVar13,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar2);
              DAT_0722a396 = '\x01';
            }
            lVar13 = *(long *)(*(long *)puVar2 + 0xb8);
            fVar25 = (float)FUN_04f13f58(uVar23,uVar8,uVar22,uVar29,*(undefined4 *)(lVar13 + 0x48),
                                         *(undefined4 *)(lVar13 + 0x4c),
                                         *(undefined4 *)(lVar13 + 0x50),0);
            fVar17 = (float)uVar8;
            fVar30 = (float)uVar22;
            fVar18 = (float)FUN_051d5438();
            if ((lVar7 == 0) || (lVar13 = FUN_051df7a8(lVar7,0), lVar13 == 0)) break;
            fVar21 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar13,0);
            fVar27 = fVar17;
            fVar20 = fVar30;
            lVar13 = FUN_051e5130();
            if (lVar13 == 0) break;
            fVar19 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar13,0);
            lVar13 = FUN_051df7a8(lVar7,0);
            if (lVar13 == 0) break;
            uVar29 = (ulong)(uint)(fVar21 - fVar19);
            fVar24 = (float)uVar8 * fVar18;
            fVar26 = (float)uVar22 * fVar18;
            uVar6 = (ulong)(uint)fVar26;
            fVar27 = (fVar17 - fVar27) - fVar24;
            fVar17 = (float)FUN_04f1b1c0(lVar13,0);
            fVar30 = ((fVar30 - fVar20) - fVar26) * (float)uVar6;
            uVar8 = (ulong)(uint)fVar30;
            if (0.0 <= fVar30 + ((fVar21 - fVar19) - fVar25 * fVar18) * fVar17 + fVar27 * fVar24)
            goto LAB_03667408;
          }
          else {
            if ((lVar7 == 0) || (lVar13 = FUN_051df7a8(lVar7,0), lVar13 == 0)) break;
            uVar23 = FUN_04f1adf8(lVar13,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar2);
              DAT_0722a396 = '\x01';
            }
            lVar13 = *(long *)(*(long *)puVar2 + 0xb8);
            fVar17 = (float)FUN_04f13f58(uVar23,uVar8,uVar22,uVar29,*(undefined4 *)(lVar13 + 0x48),
                                         *(undefined4 *)(lVar13 + 0x4c),
                                         *(undefined4 *)(lVar13 + 0x50),0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar2);
              DAT_0722a396 = '\x01';
            }
            lVar13 = *(long *)(*(long *)puVar2 + 0xb8);
            uVar6 = (ulong)(uint)*(float *)(lVar13 + 0x50);
            fVar25 = (float)uVar8;
            fVar30 = (float)uVar22 * *(float *)(lVar13 + 0x50);
            uVar8 = (ulong)(uint)fVar30;
            if (0.0 < fVar30 + fVar17 * *(float *)(lVar13 + 0x48) +
                               fVar25 * *(float *)(lVar13 + 0x4c)) goto LAB_03667408;
          }
        }
LAB_03667688:
        if (iVar3 + -1 == iVar14) {
          return;
        }
        lVar7 = *(long *)(unaff_x20 + 0x38);
        iVar14 = iVar14 + 1;
        if (lVar7 == 0) break;
      }
    }
  }
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


