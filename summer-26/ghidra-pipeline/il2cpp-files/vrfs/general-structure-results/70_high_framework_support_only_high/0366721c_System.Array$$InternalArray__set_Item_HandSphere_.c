/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<HandSphere>
ENTRY_POINT: 0366721c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array__InternalArray__set_Item<HandSphere>
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  void *__dest;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  code *pcVar7;
  long *unaff_x28;
  int unaff_w29;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  do {
    uVar14 = FUN_04f1adf8(param_5,0);
    if (*(char *)(unaff_x23 + 0x396) == '\0') {
      thunk_FUN_0159f088(unaff_x27);
      *(undefined1 *)(unaff_x23 + 0x396) = 1;
    }
    lVar6 = *(long *)(*unaff_x27 + 0xb8);
    fVar8 = (float)FUN_04f13f58(uVar14,param_2,param_3,param_4,*(undefined4 *)(lVar6 + 0x48),
                                *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
    if (*(char *)(unaff_x23 + 0x396) == '\0') {
      thunk_FUN_0159f088(unaff_x27);
      *(undefined1 *)(unaff_x23 + 0x396) = 1;
    }
    lVar6 = *(long *)(*unaff_x27 + 0xb8);
    uVar3 = (ulong)(uint)*(float *)(lVar6 + 0x50);
    fVar9 = (float)param_2;
    fVar15 = (float)param_3 * *(float *)(lVar6 + 0x50);
    param_2 = (ulong)(uint)fVar15;
    if (0.0 < fVar15 + fVar8 * *(float *)(lVar6 + 0x48) + fVar9 * *(float *)(lVar6 + 0x4c))
    goto LAB_03667408;
LAB_03667688:
    if (unaff_w29 == unaff_w24) {
      return;
    }
    unaff_w24 = unaff_w24 + 1;
    if ((*(long *)(unaff_x20 + 0x38) == 0) ||
       (lVar6 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                          (*(long *)(unaff_x20 + 0x38),unaff_w24,*unaff_x22), lVar6 == 0)) {
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    unaff_x26 = FUN_051e516c(lVar6,0);
    if (*(char *)(unaff_x20 + 0x20) == '\0') {
      if (unaff_x26 != 0) goto LAB_03667408;
      goto LAB_0366769c;
    }
    param_3 = uVar3;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_3 = uVar3;
    }
    uVar3 = FUN_051d94d4();
    unaff_x27 = (long *)PTR_DAT_06e50440;
    if ((uVar3 & 1) == 0) {
      if ((unaff_x21 != 0) && (lVar6 = FUN_051e5130(), lVar6 != 0)) {
        uVar14 = FUN_04f1adf8(lVar6,0);
        if (*(char *)(unaff_x23 + 0x396) == '\0') {
          thunk_FUN_0159f088(unaff_x27);
          *(undefined1 *)(unaff_x23 + 0x396) = 1;
        }
        lVar6 = *(long *)(*unaff_x27 + 0xb8);
        fVar9 = (float)FUN_04f13f58(uVar14,param_2,param_3,param_4,*(undefined4 *)(lVar6 + 0x48),
                                    *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
        fVar8 = (float)param_2;
        fVar15 = (float)param_3;
        fVar10 = (float)FUN_051d5438();
        if ((unaff_x26 != 0) && (lVar6 = FUN_051df7a8(unaff_x26,0), lVar6 != 0)) {
          fVar11 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
          fVar20 = fVar8;
          fVar13 = fVar15;
          lVar6 = FUN_051e5130();
          if (lVar6 != 0) {
            fVar12 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
            lVar6 = FUN_051df7a8(unaff_x26,0);
            if (lVar6 != 0) break;
          }
        }
      }
      goto LAB_0366769c;
    }
    if ((unaff_x26 == 0) || (param_5 = FUN_051df7a8(unaff_x26,0), param_5 == 0)) goto LAB_0366769c;
  } while( true );
  param_4 = (ulong)(uint)(fVar11 - fVar12);
  fVar16 = (float)param_2 * fVar10;
  fVar18 = (float)param_3 * fVar10;
  uVar3 = (ulong)(uint)fVar18;
  fVar20 = (fVar8 - fVar20) - fVar16;
  fVar8 = (float)FUN_04f1b1c0(lVar6,0);
  fVar15 = ((fVar15 - fVar13) - fVar18) * (float)uVar3;
  param_2 = (ulong)(uint)fVar15;
  if (0.0 <= fVar15 + ((fVar11 - fVar12) - fVar9 * fVar10) * fVar8 + fVar20 * fVar16) {
LAB_03667408:
    lVar6 = FUN_051df7a8(unaff_x26,0);
    if (lVar6 == 0) goto LAB_0366769c;
    fVar8 = (float)FUN_04f1b1c0(lVar6,0);
    uVar17 = param_2;
    uVar19 = uVar3;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar4 = FUN_051d94d4();
    fVar10 = (float)param_2;
    fVar9 = (float)uVar3;
    param_2 = uVar17;
    uVar3 = uVar19;
    fVar15 = 0.0;
    if ((uVar4 & 1) == 0) {
      lVar5 = System_Array__InternalArray__set_Item<GradientColorKey>();
      if (lVar5 == 0) goto LAB_0366769c;
      iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar5,0);
      param_2 = uVar17;
      uVar3 = uVar19;
      fVar15 = 0.0;
      if (iVar2 != 0) {
        fVar13 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
        fVar15 = (float)uVar17;
        fVar20 = (float)uVar19;
        fVar11 = (float)FUN_051db584(&stack0x00000080,0);
        fVar20 = (float)uVar19 - fVar20;
        uVar3 = (ulong)(uint)fVar20;
        fVar20 = fVar9 * fVar20;
        fVar15 = fVar20 + fVar8 * (fVar13 - fVar11) + fVar10 * ((float)uVar17 - fVar15);
        fVar13 = (float)FUN_051db578(&stack0x00000080,0);
        fVar9 = fVar9 * (float)uVar3;
        param_2 = (ulong)(uint)fVar9;
        fVar15 = fVar15 / (fVar9 + fVar8 * fVar13 + fVar10 * fVar20);
        if (fVar15 < 0.0) goto LAB_03667688;
      }
    }
    if (fVar15 < in_stack_00000028._4_4_) {
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
      fVar10 = (float)uVar3;
      fVar9 = (float)param_2;
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
      fVar20 = fVar9;
      fVar13 = fVar10;
      FUN_051db578(&stack0x00000080,0);
      lVar5 = *(long *)PTR_DAT_06db7458;
      param_4 = (ulong)(uint)-fVar8;
      param_2 = (ulong)(uint)(fVar9 + fVar15 * fVar20);
      uVar3 = (ulong)(uint)(fVar10 + fVar15 * fVar13);
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
        pcVar7 = *(code **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x58) + 8);
        memcpy(&stack0x000000f0,&stack0x000000a0,0x50);
        (*pcVar7)();
      }
    }
  }
  goto LAB_03667688;
}


