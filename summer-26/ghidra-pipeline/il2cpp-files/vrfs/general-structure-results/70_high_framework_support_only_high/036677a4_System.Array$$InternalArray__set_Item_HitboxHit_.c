/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<HitboxHit>
ENTRY_POINT: 036677a4
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


void System_Array__InternalArray__set_Item<HitboxHit>
               (float param_1,undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  void *__dest;
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
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
  float fVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
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
  
  fStack000000000000002c = param_1;
  if ((*(uint *)(unaff_x20 + 0x24) | 2) == 3) {
    lVar11 = FUN_030a030c(0);
    if (lVar11 == 0) goto LAB_0366769c;
    if (*(long *)(lVar11 + 0x28) != 0) {
      lVar11 = FUN_030a030c(0);
      if (lVar11 == 0) goto LAB_0366769c;
      lVar11 = *(long *)(lVar11 + 0x30);
      in_stack_000000a8 = in_stack_00000088;
      in_stack_000000a0 = in_stack_00000080;
      in_stack_000000b0 = in_stack_00000090;
      uVar6 = FUN_051e2138(*(undefined4 *)(unaff_x20 + 0x28),0);
      if (lVar11 == 0) goto LAB_0366769c;
      in_stack_000000f8 = in_stack_000000a8;
      in_stack_000000f0 = in_stack_000000a0;
      in_stack_00000100 = in_stack_000000b0;
      lVar11 = (**(code **)(lVar11 + 0x18))
                         (*(undefined8 *)(lVar11 + 0x40),&stack0x000000f0,uVar6,
                          *(undefined8 *)(lVar11 + 0x28));
      if (lVar11 == 0) goto LAB_0366769c;
      if (*(long *)(lVar11 + 0x18) != 0) {
        if ((int)*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        fStack000000000000002c = (float)FUN_03b71a54(lVar11 + 0x20,0);
      }
    }
  }
  puVar3 = PTR_DAT_06dc3868;
  lVar11 = *(long *)(unaff_x20 + 0x38);
  if (lVar11 != 0) {
    iVar1 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_031dd574(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
    }
    System_Array__InternalArray__set_Item<GradientColorKey>();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar24 = (ulong)in_stack_00000028;
    FUN_03667924();
    puVar3 = PTR_DAT_06e61e40;
    lVar11 = *(long *)(unaff_x20 + 0x38);
    if (lVar11 != 0) {
      iVar1 = *(int *)(lVar11 + 0x18);
      if (iVar1 < 1) {
        return;
      }
      iVar12 = 0;
      puVar13 = (undefined8 *)((ulong)&stack0x00000030 | 8);
      while (lVar11 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                (lVar11,iVar12,*(undefined8 *)puVar3), lVar11 != 0) {
        lVar11 = FUN_051e516c(lVar11,0);
        if (*(char *)(unaff_x20 + 0x20) == '\0') {
          if (lVar11 == 0) break;
LAB_03667408:
          lVar8 = FUN_051df7a8(lVar11,0);
          if (lVar8 == 0) break;
          fVar15 = (float)FUN_04f1b1c0(lVar8,0);
          uVar25 = uVar24;
          uVar7 = param_3;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar9 = FUN_051d94d4();
          fVar16 = (float)uVar24;
          fVar23 = (float)param_3;
          uVar24 = uVar25;
          param_3 = uVar7;
          fVar21 = 0.0;
          if ((uVar9 & 1) == 0) {
            lVar10 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar10 == 0) break;
            iVar5 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar10,0);
            uVar24 = uVar25;
            param_3 = uVar7;
            fVar21 = 0.0;
            if (iVar5 != 0) {
              fVar18 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar8,0);
              fVar21 = (float)uVar25;
              fVar27 = (float)uVar7;
              fVar19 = (float)FUN_051db584(&stack0x00000080,0);
              fVar27 = (float)uVar7 - fVar27;
              param_3 = (ulong)(uint)fVar27;
              fVar27 = fVar23 * fVar27;
              fVar21 = fVar27 + fVar15 * (fVar18 - fVar19) + fVar16 * ((float)uVar25 - fVar21);
              fVar18 = (float)FUN_051db578(&stack0x00000080,0);
              fVar23 = fVar23 * (float)param_3;
              uVar24 = (ulong)(uint)fVar23;
              fVar21 = fVar21 / (fVar23 + fVar15 * fVar18 + fVar16 * fVar27);
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
            in_stack_00000030 = lVar11;
            thunk_FUN_01656ef8(&stack0x00000030,lVar11);
            fVar16 = (float)param_3;
            fVar23 = (float)uVar24;
            thunk_FUN_01656ef8(puVar13);
            if (((unaff_x19 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
               (lVar11 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                   (*(long *)(unaff_x20 + 0x38),iVar12,*(undefined8 *)puVar3),
               lVar11 == 0)) break;
            FUN_03663fd4();
            lVar11 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar11 == 0) break;
            FUN_036e1250(lVar11,0);
            lVar11 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar11 == 0) break;
            FUN_036e1194(lVar11,0);
            FUN_051db584(&stack0x00000080,0);
            fVar27 = fVar23;
            fVar18 = fVar16;
            FUN_051db578(&stack0x00000080,0);
            lVar8 = *(long *)PTR_DAT_06db7458;
            param_4 = (ulong)(uint)-fVar15;
            uVar24 = (ulong)(uint)(fVar23 + fVar21 * fVar27);
            param_3 = (ulong)(uint)(fVar16 + fVar21 * fVar18);
            memcpy(&stack0x000000a0,&stack0x00000030,0x50);
            lVar11 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar11 == 0) break;
            uVar2 = *(uint *)(unaff_x19 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              __dest = (void *)(lVar11 + (long)(int)uVar2 * 0x50 + 0x20);
              *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
              memcpy(__dest,&stack0x000000a0,0x50);
              thunk_FUN_01656ef8(__dest,0);
            }
            else {
              pcVar14 = *(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8);
              memcpy(&stack0x000000f0,&stack0x000000a0,0x50);
              (*pcVar14)();
            }
          }
        }
        else {
          uVar25 = param_3;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            uVar25 = param_3;
          }
          uVar7 = FUN_051d94d4();
          puVar4 = PTR_DAT_06e50440;
          if ((uVar7 & 1) == 0) {
            if ((unaff_x21 == 0) || (lVar8 = FUN_051e5130(), lVar8 == 0)) break;
            uVar20 = FUN_04f1adf8(lVar8,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar4);
              DAT_0722a396 = '\x01';
            }
            lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
            fVar23 = (float)FUN_04f13f58(uVar20,uVar24,uVar25,param_4,*(undefined4 *)(lVar8 + 0x48),
                                         *(undefined4 *)(lVar8 + 0x4c),*(undefined4 *)(lVar8 + 0x50)
                                         ,0);
            fVar15 = (float)uVar24;
            fVar21 = (float)uVar25;
            fVar16 = (float)FUN_051d5438();
            if ((lVar11 == 0) || (lVar8 = FUN_051df7a8(lVar11,0), lVar8 == 0)) break;
            fVar19 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar8,0);
            fVar27 = fVar15;
            fVar18 = fVar21;
            lVar8 = FUN_051e5130();
            if (lVar8 == 0) break;
            fVar17 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar8,0);
            lVar8 = FUN_051df7a8(lVar11,0);
            if (lVar8 == 0) break;
            param_4 = (ulong)(uint)(fVar19 - fVar17);
            fVar22 = (float)uVar24 * fVar16;
            fVar26 = (float)uVar25 * fVar16;
            param_3 = (ulong)(uint)fVar26;
            fVar27 = (fVar15 - fVar27) - fVar22;
            fVar15 = (float)FUN_04f1b1c0(lVar8,0);
            fVar21 = ((fVar21 - fVar18) - fVar26) * (float)param_3;
            uVar24 = (ulong)(uint)fVar21;
            if (0.0 <= fVar21 + ((fVar19 - fVar17) - fVar23 * fVar16) * fVar15 + fVar27 * fVar22)
            goto LAB_03667408;
          }
          else {
            if ((lVar11 == 0) || (lVar8 = FUN_051df7a8(lVar11,0), lVar8 == 0)) break;
            uVar20 = FUN_04f1adf8(lVar8,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar4);
              DAT_0722a396 = '\x01';
            }
            lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
            fVar15 = (float)FUN_04f13f58(uVar20,uVar24,uVar25,param_4,*(undefined4 *)(lVar8 + 0x48),
                                         *(undefined4 *)(lVar8 + 0x4c),*(undefined4 *)(lVar8 + 0x50)
                                         ,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar4);
              DAT_0722a396 = '\x01';
            }
            lVar8 = *(long *)(*(long *)puVar4 + 0xb8);
            param_3 = (ulong)(uint)*(float *)(lVar8 + 0x50);
            fVar23 = (float)uVar24;
            fVar21 = (float)uVar25 * *(float *)(lVar8 + 0x50);
            uVar24 = (ulong)(uint)fVar21;
            if (0.0 < fVar21 + fVar15 * *(float *)(lVar8 + 0x48) + fVar23 * *(float *)(lVar8 + 0x4c)
               ) goto LAB_03667408;
          }
        }
LAB_03667688:
        if (iVar1 + -1 == iVar12) {
          return;
        }
        lVar11 = *(long *)(unaff_x20 + 0x38);
        iVar12 = iVar12 + 1;
        if (lVar11 == 0) break;
      }
    }
  }
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


