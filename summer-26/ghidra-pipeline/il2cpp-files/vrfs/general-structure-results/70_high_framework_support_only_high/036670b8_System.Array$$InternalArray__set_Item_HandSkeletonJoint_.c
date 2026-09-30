/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<HandSkeletonJoint>
ENTRY_POINT: 036670b8
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__set_Item<HandSkeletonJoint>
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  void *__dest;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int in_w8;
  uint uVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long *unaff_x28;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  uint in_stack_00000028;
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
  
  if (in_w8 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d97918);
    *(undefined1 *)(unaff_x22 + 0x469) = 1;
  }
  fVar25 = ABS(param_3);
  uVar6 = (ulong)(uint)fVar25;
  uVar29 = 0x41000000;
  fVar21 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
  fVar15 = fVar25 * DAT_0534bb40;
  if (fVar25 * DAT_0534bb40 <= fVar21) {
    fVar15 = fVar21;
  }
  if (fVar15 <= fVar25) {
    if (unaff_x21 == 0) goto LAB_0366769c;
    fVar15 = (float)FUN_051d54c0();
    fVar21 = (float)FUN_051d5438();
    fVar15 = ABS((fVar15 - fVar21) / param_3);
  }
  else {
    fVar15 = INFINITY;
  }
  uVar11 = *(uint *)(unaff_x20 + 0x24);
  if ((uVar11 & 0xfffffffe) == 2) {
    lVar10 = FUN_030a030c(0);
    if (lVar10 == 0) goto LAB_0366769c;
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_036677b8:
      fStack000000000000002c = 3.4028235e+38;
    }
    else {
      lVar10 = FUN_030a030c(0);
      if (lVar10 == 0) goto LAB_0366769c;
      lVar10 = *(long *)(lVar10 + 0x18);
      in_stack_000000a8 = in_stack_00000088;
      in_stack_000000a0 = in_stack_00000080;
      in_stack_000000b0 = in_stack_00000090;
      uVar5 = FUN_051e2138(*(undefined4 *)(unaff_x20 + 0x28),0);
      if (lVar10 == 0) goto LAB_0366769c;
      in_stack_000000f8 = in_stack_000000a8;
      in_stack_000000f0 = in_stack_000000a0;
      in_stack_00000100 = in_stack_000000b0;
      lVar10 = (**(code **)(lVar10 + 0x18))
                         (fVar15,*(undefined8 *)(lVar10 + 0x40),&stack0x000000f0,uVar5,
                          *(undefined8 *)(lVar10 + 0x28));
      if (lVar10 == 0) goto LAB_0366769c;
      if (*(long *)(lVar10 + 0x18) == 0) goto LAB_036677b8;
      if ((int)*(long *)(lVar10 + 0x18) == 0) goto LAB_03667864;
      fStack000000000000002c = (float)FUN_049ab7f0(lVar10 + 0x20,0);
    }
    uVar11 = *(uint *)(unaff_x20 + 0x24);
  }
  else {
    fStack000000000000002c = 3.4028235e+38;
  }
  if ((uVar11 | 2) == 3) {
    lVar10 = FUN_030a030c(0);
    if (lVar10 == 0) goto LAB_0366769c;
    if (*(long *)(lVar10 + 0x28) != 0) {
      lVar10 = FUN_030a030c(0);
      if (lVar10 == 0) goto LAB_0366769c;
      lVar10 = *(long *)(lVar10 + 0x30);
      in_stack_000000a8 = in_stack_00000088;
      in_stack_000000a0 = in_stack_00000080;
      in_stack_000000b0 = in_stack_00000090;
      uVar5 = FUN_051e2138(*(undefined4 *)(unaff_x20 + 0x28),0);
      if (lVar10 == 0) goto LAB_0366769c;
      in_stack_000000f8 = in_stack_000000a8;
      in_stack_000000f0 = in_stack_000000a0;
      in_stack_00000100 = in_stack_000000b0;
      lVar10 = (**(code **)(lVar10 + 0x18))
                         (fVar15,*(undefined8 *)(lVar10 + 0x40),&stack0x000000f0,uVar5,
                          *(undefined8 *)(lVar10 + 0x28));
      if (lVar10 == 0) goto LAB_0366769c;
      if (*(long *)(lVar10 + 0x18) != 0) {
        if ((int)*(long *)(lVar10 + 0x18) == 0) {
LAB_03667864:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        fStack000000000000002c = (float)FUN_03b71a54(lVar10 + 0x20,0);
      }
    }
  }
  puVar2 = PTR_DAT_06dc3868;
  lVar10 = *(long *)(unaff_x20 + 0x38);
  if (lVar10 != 0) {
    iVar1 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_031dd574(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
    }
    System_Array__InternalArray__set_Item<GradientColorKey>();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar23 = (ulong)in_stack_00000028;
    FUN_03667924();
    puVar2 = PTR_DAT_06e61e40;
    lVar10 = *(long *)(unaff_x20 + 0x38);
    if (lVar10 != 0) {
      iVar1 = *(int *)(lVar10 + 0x18);
      if (iVar1 < 1) {
        return;
      }
      iVar12 = 0;
      puVar13 = (undefined8 *)((ulong)&stack0x00000030 | 8);
      while (lVar10 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                (lVar10,iVar12,*(undefined8 *)puVar2), lVar10 != 0) {
        lVar10 = FUN_051e516c(lVar10,0);
        if (*(char *)(unaff_x20 + 0x20) == '\0') {
          if (lVar10 == 0) break;
LAB_03667408:
          lVar7 = FUN_051df7a8(lVar10,0);
          if (lVar7 == 0) break;
          fVar15 = (float)FUN_04f1b1c0(lVar7,0);
          uVar24 = uVar23;
          uVar28 = uVar6;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar8 = FUN_051d94d4();
          fVar16 = (float)uVar23;
          fVar25 = (float)uVar6;
          uVar23 = uVar24;
          uVar6 = uVar28;
          fVar21 = 0.0;
          if ((uVar8 & 1) == 0) {
            lVar9 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar9 == 0) break;
            iVar4 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar9,0);
            uVar23 = uVar24;
            uVar6 = uVar28;
            fVar21 = 0.0;
            if (iVar4 != 0) {
              fVar18 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar7,0);
              fVar21 = (float)uVar24;
              fVar27 = (float)uVar28;
              fVar19 = (float)FUN_051db584(&stack0x00000080,0);
              fVar27 = (float)uVar28 - fVar27;
              uVar6 = (ulong)(uint)fVar27;
              fVar27 = fVar25 * fVar27;
              fVar21 = fVar27 + fVar15 * (fVar18 - fVar19) + fVar16 * ((float)uVar24 - fVar21);
              fVar18 = (float)FUN_051db578(&stack0x00000080,0);
              fVar25 = fVar25 * (float)uVar6;
              uVar23 = (ulong)(uint)fVar25;
              fVar21 = fVar21 / (fVar25 + fVar15 * fVar18 + fVar16 * fVar27);
              if (fVar21 < 0.0) goto LAB_03667688;
            }
          }
          if (fVar21 < fStack000000000000002c) {
            puVar13[8] = 0;
            puVar13[5] = 0;
            puVar13[4] = 0;
            puVar13[7] = 0;
            puVar13[6] = 0;
            puVar13[1] = 0;
            *puVar13 = 0;
            puVar13[3] = 0;
            puVar13[2] = 0;
            in_stack_00000030 = lVar10;
            thunk_FUN_01656ef8(&stack0x00000030,lVar10);
            fVar16 = (float)uVar6;
            fVar25 = (float)uVar23;
            thunk_FUN_01656ef8(puVar13);
            if (((unaff_x19 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
               (lVar10 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                   (*(long *)(unaff_x20 + 0x38),iVar12,*(undefined8 *)puVar2),
               lVar10 == 0)) break;
            FUN_03663fd4();
            lVar10 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar10 == 0) break;
            FUN_036e1250(lVar10,0);
            lVar10 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar10 == 0) break;
            FUN_036e1194(lVar10,0);
            FUN_051db584(&stack0x00000080,0);
            fVar27 = fVar25;
            fVar18 = fVar16;
            FUN_051db578(&stack0x00000080,0);
            lVar7 = *(long *)PTR_DAT_06db7458;
            uVar29 = (ulong)(uint)-fVar15;
            uVar23 = (ulong)(uint)(fVar25 + fVar21 * fVar27);
            uVar6 = (ulong)(uint)(fVar16 + fVar21 * fVar18);
            memcpy(&stack0x000000a0,&stack0x00000030,0x50);
            lVar10 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar10 == 0) break;
            uVar11 = *(uint *)(unaff_x19 + 0x18);
            if (uVar11 < *(uint *)(lVar10 + 0x18)) {
              __dest = (void *)(lVar10 + (long)(int)uVar11 * 0x50 + 0x20);
              *(uint *)(unaff_x19 + 0x18) = uVar11 + 1;
              memcpy(__dest,&stack0x000000a0,0x50);
              thunk_FUN_01656ef8(__dest,0);
            }
            else {
              pcVar14 = *(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8);
              memcpy(&stack0x000000f0,&stack0x000000a0,0x50);
              (*pcVar14)();
            }
          }
        }
        else {
          uVar24 = uVar6;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            uVar24 = uVar6;
          }
          uVar6 = FUN_051d94d4();
          puVar3 = PTR_DAT_06e50440;
          if ((uVar6 & 1) == 0) {
            if ((unaff_x21 == 0) || (lVar7 = FUN_051e5130(), lVar7 == 0)) break;
            uVar20 = FUN_04f1adf8(lVar7,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar25 = (float)FUN_04f13f58(uVar20,uVar23,uVar24,uVar29,*(undefined4 *)(lVar7 + 0x48),
                                         *(undefined4 *)(lVar7 + 0x4c),*(undefined4 *)(lVar7 + 0x50)
                                         ,0);
            fVar15 = (float)uVar23;
            fVar21 = (float)uVar24;
            fVar16 = (float)FUN_051d5438();
            if ((lVar10 == 0) || (lVar7 = FUN_051df7a8(lVar10,0), lVar7 == 0)) break;
            fVar19 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar7,0);
            fVar27 = fVar15;
            fVar18 = fVar21;
            lVar7 = FUN_051e5130();
            if (lVar7 == 0) break;
            fVar17 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar7,0);
            lVar7 = FUN_051df7a8(lVar10,0);
            if (lVar7 == 0) break;
            uVar29 = (ulong)(uint)(fVar19 - fVar17);
            fVar22 = (float)uVar23 * fVar16;
            fVar26 = (float)uVar24 * fVar16;
            uVar6 = (ulong)(uint)fVar26;
            fVar27 = (fVar15 - fVar27) - fVar22;
            fVar15 = (float)FUN_04f1b1c0(lVar7,0);
            fVar21 = ((fVar21 - fVar18) - fVar26) * (float)uVar6;
            uVar23 = (ulong)(uint)fVar21;
            if (0.0 <= fVar21 + ((fVar19 - fVar17) - fVar25 * fVar16) * fVar15 + fVar27 * fVar22)
            goto LAB_03667408;
          }
          else {
            if ((lVar10 == 0) || (lVar7 = FUN_051df7a8(lVar10,0), lVar7 == 0)) break;
            uVar20 = FUN_04f1adf8(lVar7,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar15 = (float)FUN_04f13f58(uVar20,uVar23,uVar24,uVar29,*(undefined4 *)(lVar7 + 0x48),
                                         *(undefined4 *)(lVar7 + 0x4c),*(undefined4 *)(lVar7 + 0x50)
                                         ,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar3);
              DAT_0722a396 = '\x01';
            }
            lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
            uVar6 = (ulong)(uint)*(float *)(lVar7 + 0x50);
            fVar25 = (float)uVar23;
            fVar21 = (float)uVar24 * *(float *)(lVar7 + 0x50);
            uVar23 = (ulong)(uint)fVar21;
            if (0.0 < fVar21 + fVar15 * *(float *)(lVar7 + 0x48) + fVar25 * *(float *)(lVar7 + 0x4c)
               ) goto LAB_03667408;
          }
        }
LAB_03667688:
        if (iVar1 + -1 == iVar12) {
          return;
        }
        lVar10 = *(long *)(unaff_x20 + 0x38);
        iVar12 = iVar12 + 1;
        if (lVar10 == 0) break;
      }
    }
  }
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


