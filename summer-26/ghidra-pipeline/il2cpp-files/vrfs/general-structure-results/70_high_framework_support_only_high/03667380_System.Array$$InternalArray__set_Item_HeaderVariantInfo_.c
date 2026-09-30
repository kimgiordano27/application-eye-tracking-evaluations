/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<HeaderVariantInfo>
ENTRY_POINT: 03667380
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__set_Item<HeaderVariantInfo>
               (float param_1,ulong param_2,ulong param_3)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  code *pcVar8;
  long *unaff_x28;
  int unaff_w29;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float unaff_s13;
  float unaff_s14;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
code_r0x03667380:
  fVar10 = (float)param_2;
  fVar14 = (float)param_3;
  lVar5 = FUN_051e5130();
  if (lVar5 != 0) {
    fVar9 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar5,0);
    lVar5 = FUN_051df7a8(unaff_x26,0);
    if (lVar5 != 0) {
      uVar19 = (ulong)(uint)(param_1 - fVar9);
      fStack0000000000000024 = fStack0000000000000024 * unaff_s14;
      uVar4 = (ulong)(uint)(fStack0000000000000020 * unaff_s14);
      fVar20 = ((float)param_2 - fVar10) - fStack0000000000000024;
      fVar10 = (float)FUN_04f1b1c0(lVar5,0);
      fVar14 = (((float)param_3 - fVar14) - fStack0000000000000020 * unaff_s14) * (float)uVar4;
      uVar15 = (ulong)(uint)fVar14;
      if (fVar14 + ((param_1 - fVar9) - unaff_s13 * unaff_s14) * fVar10 +
                   fVar20 * fStack0000000000000024 < 0.0) goto LAB_03667688;
      do {
        lVar5 = FUN_051df7a8(unaff_x26,0);
        if (lVar5 == 0) break;
        fVar10 = (float)FUN_04f1b1c0(lVar5,0);
        uVar16 = uVar15;
        uVar18 = uVar4;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar6 = FUN_051d94d4();
        fVar20 = (float)uVar15;
        fVar9 = (float)uVar4;
        uVar15 = uVar16;
        uVar4 = uVar18;
        fVar14 = 0.0;
        if ((uVar6 & 1) == 0) {
          lVar7 = System_Array__InternalArray__set_Item<GradientColorKey>();
          if (lVar7 == 0) break;
          iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar7,0);
          uVar15 = uVar16;
          uVar4 = uVar18;
          fVar14 = 0.0;
          if (iVar3 == 0) goto LAB_036674e0;
          fVar11 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar5,0);
          fVar14 = (float)uVar16;
          fVar17 = (float)uVar18;
          fVar12 = (float)FUN_051db584(&stack0x00000080,0);
          fVar17 = (float)uVar18 - fVar17;
          uVar4 = (ulong)(uint)fVar17;
          fVar17 = fVar9 * fVar17;
          fVar14 = fVar17 + fVar10 * (fVar11 - fVar12) + fVar20 * ((float)uVar16 - fVar14);
          fVar11 = (float)FUN_051db578(&stack0x00000080,0);
          fVar9 = fVar9 * (float)uVar4;
          uVar15 = (ulong)(uint)fVar9;
          fVar14 = fVar14 / (fVar9 + fVar10 * fVar11 + fVar20 * fVar17);
          if (0.0 <= fVar14) goto LAB_036674e0;
        }
        else {
LAB_036674e0:
          if (fVar14 < in_stack_00000028._4_4_) {
            unaff_x25[8] = 0;
            unaff_x25[5] = 0;
            unaff_x25[4] = 0;
            unaff_x25[7] = 0;
            unaff_x25[6] = 0;
            unaff_x25[1] = 0;
            *unaff_x25 = 0;
            unaff_x25[3] = 0;
            unaff_x25[2] = 0;
            in_stack_00000030 = unaff_x26;
            thunk_FUN_01656ef8(&stack0x00000030,unaff_x26);
            fVar20 = (float)uVar4;
            fVar9 = (float)uVar15;
            thunk_FUN_01656ef8();
            if (((unaff_x19 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
               (lVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                  (*(long *)(unaff_x20 + 0x38),unaff_w24,*unaff_x22), lVar5 == 0))
            break;
            FUN_03663fd4();
            lVar5 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar5 == 0) break;
            FUN_036e1250(lVar5,0);
            lVar5 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar5 == 0) break;
            FUN_036e1194(lVar5,0);
            FUN_051db584(&stack0x00000080,0);
            fVar17 = fVar9;
            fVar11 = fVar20;
            FUN_051db578(&stack0x00000080,0);
            lVar7 = *(long *)PTR_DAT_06db7458;
            uVar19 = (ulong)(uint)-fVar10;
            uVar15 = (ulong)(uint)(fVar9 + fVar14 * fVar17);
            uVar4 = (ulong)(uint)(fVar20 + fVar14 * fVar11);
            memcpy(&stack0x000000a0,&stack0x00000030,0x50);
            lVar5 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar5 == 0) break;
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              __dest = (void *)(lVar5 + (long)(int)uVar1 * 0x50 + 0x20);
              *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
              memcpy(__dest,&stack0x000000a0,0x50);
              thunk_FUN_01656ef8(__dest,0);
            }
            else {
              pcVar8 = *(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8);
              memcpy(&stack0x000000f0,&stack0x000000a0,0x50);
              (*pcVar8)();
            }
          }
        }
LAB_03667688:
        do {
          if (unaff_w29 == unaff_w24) {
            return;
          }
          unaff_w24 = unaff_w24 + 1;
          if ((*(long *)(unaff_x20 + 0x38) == 0) ||
             (lVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                (*(long *)(unaff_x20 + 0x38),unaff_w24,*unaff_x22), lVar5 == 0))
          goto LAB_0366769c;
          unaff_x26 = FUN_051e516c(lVar5,0);
          if (*(char *)(unaff_x20 + 0x20) == '\0') {
            if (unaff_x26 == 0) goto LAB_0366769c;
            break;
          }
          uVar16 = uVar4;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            uVar16 = uVar4;
          }
          uVar4 = FUN_051d94d4();
          puVar2 = PTR_DAT_06e50440;
          if ((uVar4 & 1) == 0) {
            if ((unaff_x21 == 0) || (lVar5 = FUN_051e5130(), lVar5 == 0)) goto LAB_0366769c;
            uVar13 = FUN_04f1adf8(lVar5,0);
            if (*(char *)(unaff_x23 + 0x396) == '\0') {
              thunk_FUN_0159f088(puVar2);
              *(undefined1 *)(unaff_x23 + 0x396) = 1;
            }
            lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
            unaff_s13 = (float)FUN_04f13f58(uVar13,uVar15,uVar16,uVar19,
                                            *(undefined4 *)(lVar5 + 0x48),
                                            *(undefined4 *)(lVar5 + 0x4c),
                                            *(undefined4 *)(lVar5 + 0x50),0);
            param_2 = uVar15;
            param_3 = uVar16;
            unaff_s14 = (float)FUN_051d5438();
            if ((unaff_x26 == 0) || (lVar5 = FUN_051df7a8(unaff_x26,0), lVar5 == 0))
            goto LAB_0366769c;
            fStack0000000000000020 = (float)uVar16;
            fStack0000000000000024 = (float)uVar15;
            param_1 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar5,0);
            goto code_r0x03667380;
          }
          if ((unaff_x26 == 0) || (lVar5 = FUN_051df7a8(unaff_x26,0), lVar5 == 0))
          goto LAB_0366769c;
          uVar13 = FUN_04f1adf8(lVar5,0);
          if (*(char *)(unaff_x23 + 0x396) == '\0') {
            thunk_FUN_0159f088(puVar2);
            *(undefined1 *)(unaff_x23 + 0x396) = 1;
          }
          lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
          fVar10 = (float)FUN_04f13f58(uVar13,uVar15,uVar16,uVar19,*(undefined4 *)(lVar5 + 0x48),
                                       *(undefined4 *)(lVar5 + 0x4c),*(undefined4 *)(lVar5 + 0x50),0
                                      );
          if (*(char *)(unaff_x23 + 0x396) == '\0') {
            thunk_FUN_0159f088(puVar2);
            *(undefined1 *)(unaff_x23 + 0x396) = 1;
          }
          lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
          uVar4 = (ulong)(uint)*(float *)(lVar5 + 0x50);
          fVar9 = (float)uVar15;
          fVar14 = (float)uVar16 * *(float *)(lVar5 + 0x50);
          uVar15 = (ulong)(uint)fVar14;
        } while (fVar14 + fVar10 * *(float *)(lVar5 + 0x48) + fVar9 * *(float *)(lVar5 + 0x4c) <=
                 0.0);
      } while( true );
    }
  }
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


