/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<HighlightState>
ENTRY_POINT: 036674d0
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__set_Item<HighlightState>
               (float param_1,ulong param_2,ulong param_3,ulong param_4)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar7;
  code *pcVar8;
  long *unaff_x28;
  int unaff_w29;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float unaff_s8;
  float fVar19;
  float unaff_s11;
  float fVar20;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  do {
    fVar20 = unaff_s8 / ((float)param_2 + param_1);
    uVar16 = param_2;
    uVar4 = param_3;
    if (fVar20 < 0.0) goto LAB_03667688;
    do {
      do {
        param_3 = uVar4;
        param_2 = uVar16;
        if (fVar20 < in_stack_00000028._4_4_) {
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
          fVar11 = (float)param_3;
          fVar14 = (float)param_2;
          thunk_FUN_01656ef8();
          if (((unaff_x19 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
             (lVar6 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                (*(long *)(unaff_x20 + 0x38),unaff_w24,*unaff_x22), lVar6 == 0))
          goto LAB_0366769c;
          FUN_03663fd4();
          lVar6 = System_Array__InternalArray__set_Item<GradientColorKey>();
          if (lVar6 == 0) goto LAB_0366769c;
          FUN_036e1250(lVar6,0);
          lVar6 = System_Array__InternalArray__set_Item<GradientColorKey>();
          if (lVar6 == 0) goto LAB_0366769c;
          FUN_036e1194(lVar6,0);
          FUN_051db584(&stack0x00000080,0);
          fVar12 = fVar14;
          fVar19 = fVar11;
          FUN_051db578(&stack0x00000080,0);
          lVar7 = *(long *)PTR_DAT_06db7458;
          param_4 = (ulong)(uint)-unaff_s11;
          param_2 = (ulong)(uint)(fVar14 + fVar20 * fVar12);
          param_3 = (ulong)(uint)(fVar11 + fVar20 * fVar19);
          memcpy(&stack0x000000a0,&stack0x00000030,0x50);
          lVar6 = *(long *)(unaff_x19 + 0x10);
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_0366769c;
          uVar1 = *(uint *)(unaff_x19 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            __dest = (void *)(lVar6 + (long)(int)uVar1 * 0x50 + 0x20);
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
LAB_03667688:
        do {
          while( true ) {
            if (unaff_w29 == unaff_w24) {
              return;
            }
            unaff_w24 = unaff_w24 + 1;
            if ((*(long *)(unaff_x20 + 0x38) == 0) ||
               (lVar6 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                  (*(long *)(unaff_x20 + 0x38),unaff_w24,*unaff_x22), lVar6 == 0))
            goto LAB_0366769c;
            unaff_x26 = FUN_051e516c(lVar6,0);
            if (*(char *)(unaff_x20 + 0x20) == '\0') {
              if (unaff_x26 == 0) goto LAB_0366769c;
              goto LAB_03667408;
            }
            uVar16 = param_3;
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              uVar16 = param_3;
            }
            uVar4 = FUN_051d94d4();
            puVar2 = PTR_DAT_06e50440;
            if ((uVar4 & 1) == 0) break;
            if ((unaff_x26 == 0) || (lVar6 = FUN_051df7a8(unaff_x26,0), lVar6 == 0))
            goto LAB_0366769c;
            uVar13 = FUN_04f1adf8(lVar6,0);
            if (*(char *)(unaff_x23 + 0x396) == '\0') {
              thunk_FUN_0159f088(puVar2);
              *(undefined1 *)(unaff_x23 + 0x396) = 1;
            }
            lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
            fVar20 = (float)FUN_04f13f58(uVar13,param_2,uVar16,param_4,*(undefined4 *)(lVar6 + 0x48)
                                         ,*(undefined4 *)(lVar6 + 0x4c),
                                         *(undefined4 *)(lVar6 + 0x50),0);
            if (*(char *)(unaff_x23 + 0x396) == '\0') {
              thunk_FUN_0159f088(puVar2);
              *(undefined1 *)(unaff_x23 + 0x396) = 1;
            }
            lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
            param_3 = (ulong)(uint)*(float *)(lVar6 + 0x50);
            fVar11 = (float)param_2;
            fVar14 = (float)uVar16 * *(float *)(lVar6 + 0x50);
            param_2 = (ulong)(uint)fVar14;
            if (0.0 < fVar14 + fVar20 * *(float *)(lVar6 + 0x48) + fVar11 * *(float *)(lVar6 + 0x4c)
               ) goto LAB_03667408;
          }
          if ((unaff_x21 == 0) || (lVar6 = FUN_051e5130(), lVar6 == 0)) goto LAB_0366769c;
          uVar13 = FUN_04f1adf8(lVar6,0);
          if (*(char *)(unaff_x23 + 0x396) == '\0') {
            thunk_FUN_0159f088(puVar2);
            *(undefined1 *)(unaff_x23 + 0x396) = 1;
          }
          lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
          fVar11 = (float)FUN_04f13f58(uVar13,param_2,uVar16,param_4,*(undefined4 *)(lVar6 + 0x48),
                                       *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0
                                      );
          fVar20 = (float)param_2;
          fVar14 = (float)uVar16;
          fVar12 = (float)FUN_051d5438();
          if ((unaff_x26 == 0) || (lVar6 = FUN_051df7a8(unaff_x26,0), lVar6 == 0))
          goto LAB_0366769c;
          fVar9 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
          fVar19 = fVar20;
          fVar17 = fVar14;
          lVar6 = FUN_051e5130();
          if (lVar6 == 0) goto LAB_0366769c;
          fVar10 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
          lVar6 = FUN_051df7a8(unaff_x26,0);
          if (lVar6 == 0) goto LAB_0366769c;
          param_4 = (ulong)(uint)(fVar9 - fVar10);
          fVar15 = (float)param_2 * fVar12;
          fVar18 = (float)uVar16 * fVar12;
          param_3 = (ulong)(uint)fVar18;
          fVar19 = (fVar20 - fVar19) - fVar15;
          fVar20 = (float)FUN_04f1b1c0(lVar6,0);
          fVar14 = ((fVar14 - fVar17) - fVar18) * (float)param_3;
          param_2 = (ulong)(uint)fVar14;
        } while (fVar14 + ((fVar9 - fVar10) - fVar11 * fVar12) * fVar20 + fVar19 * fVar15 < 0.0);
LAB_03667408:
        lVar6 = FUN_051df7a8(unaff_x26,0);
        if (lVar6 == 0) {
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        unaff_s11 = (float)FUN_04f1b1c0(lVar6,0);
        uVar16 = param_2;
        uVar4 = param_3;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar5 = FUN_051d94d4();
        fVar20 = 0.0;
      } while ((uVar5 & 1) != 0);
      lVar7 = System_Array__InternalArray__set_Item<GradientColorKey>();
      if (lVar7 == 0) goto LAB_0366769c;
      iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar7,0);
    } while (iVar3 == 0);
    fVar11 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
    fVar20 = (float)uVar16;
    fVar14 = (float)uVar4;
    fVar12 = (float)FUN_051db584(&stack0x00000080,0);
    fVar14 = (float)uVar4 - fVar14;
    uVar4 = (ulong)(uint)fVar14;
    fVar14 = (float)param_3 * fVar14;
    unaff_s8 = fVar14 + unaff_s11 * (fVar11 - fVar12) + (float)param_2 * ((float)uVar16 - fVar20);
    fVar20 = (float)FUN_051db578(&stack0x00000080,0);
    param_1 = unaff_s11 * fVar20 + (float)param_2 * fVar14;
    param_2 = (ulong)(uint)((float)param_3 * (float)uVar4);
    param_3 = uVar4;
  } while( true );
}


