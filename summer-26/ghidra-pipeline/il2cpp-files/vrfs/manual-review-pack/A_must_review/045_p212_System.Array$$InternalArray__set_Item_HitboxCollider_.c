/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<HitboxCollider>
ENTRY_POINT: 03667634
PROGRAM: vrfs-libil2cpp.so
SCORE: 138
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array__InternalArray__set_Item<HitboxCollider>
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  code *pcVar9;
  long *unaff_x28;
  int unaff_w29;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  do {
    *(int *)(unaff_x19 + 0x18) = in_w10;
    memcpy(unaff_x26,&stack0x000000a0,0x50);
    thunk_FUN_01656ef8(unaff_x26,0);
LAB_03667688:
    do {
      while( true ) {
        if (unaff_w29 == unaff_w24) {
          return;
        }
        unaff_w24 = unaff_w24 + 1;
        if ((*(long *)(unaff_x20 + 0x38) == 0) ||
           (lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                              (*(long *)(unaff_x20 + 0x38),unaff_w24,*unaff_x22), lVar4 == 0))
        goto LAB_0366769c;
        lVar4 = FUN_051e516c(lVar4,0);
        if (*(char *)(unaff_x20 + 0x20) == '\0') {
          if (lVar4 == 0) goto LAB_0366769c;
          goto LAB_03667408;
        }
        uVar19 = param_3;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          uVar19 = param_3;
        }
        uVar5 = FUN_051d94d4();
        puVar2 = PTR_DAT_06e50440;
        if ((uVar5 & 1) == 0) break;
        if ((lVar4 == 0) || (lVar6 = FUN_051df7a8(lVar4,0), lVar6 == 0)) goto LAB_0366769c;
        uVar15 = FUN_04f1adf8(lVar6,0);
        if (*(char *)(unaff_x23 + 0x396) == '\0') {
          thunk_FUN_0159f088(puVar2);
          *(undefined1 *)(unaff_x23 + 0x396) = 1;
        }
        lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
        fVar10 = (float)FUN_04f13f58(uVar15,param_2,uVar19,param_4,*(undefined4 *)(lVar6 + 0x48),
                                     *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
        if (*(char *)(unaff_x23 + 0x396) == '\0') {
          thunk_FUN_0159f088(puVar2);
          *(undefined1 *)(unaff_x23 + 0x396) = 1;
        }
        lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
        param_3 = (ulong)(uint)*(float *)(lVar6 + 0x50);
        fVar18 = (float)param_2;
        fVar16 = (float)uVar19 * *(float *)(lVar6 + 0x50);
        param_2 = (ulong)(uint)fVar16;
        if (0.0 < fVar16 + fVar10 * *(float *)(lVar6 + 0x48) + fVar18 * *(float *)(lVar6 + 0x4c))
        goto LAB_03667408;
      }
      if ((unaff_x21 == 0) || (lVar6 = FUN_051e5130(), lVar6 == 0)) goto LAB_0366769c;
      uVar15 = FUN_04f1adf8(lVar6,0);
      if (*(char *)(unaff_x23 + 0x396) == '\0') {
        thunk_FUN_0159f088(puVar2);
        *(undefined1 *)(unaff_x23 + 0x396) = 1;
      }
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      fVar18 = (float)FUN_04f13f58(uVar15,param_2,uVar19,param_4,*(undefined4 *)(lVar6 + 0x48),
                                   *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
      fVar10 = (float)param_2;
      fVar16 = (float)uVar19;
      fVar11 = (float)FUN_051d5438();
      if ((lVar4 == 0) || (lVar6 = FUN_051df7a8(lVar4,0), lVar6 == 0)) goto LAB_0366769c;
      fVar14 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
      fVar21 = fVar10;
      fVar13 = fVar16;
      lVar6 = FUN_051e5130();
      if (lVar6 == 0) goto LAB_0366769c;
      fVar12 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
      lVar6 = FUN_051df7a8(lVar4,0);
      if (lVar6 == 0) goto LAB_0366769c;
      param_4 = (ulong)(uint)(fVar14 - fVar12);
      fVar17 = (float)param_2 * fVar11;
      fVar20 = (float)uVar19 * fVar11;
      param_3 = (ulong)(uint)fVar20;
      fVar21 = (fVar10 - fVar21) - fVar17;
      fVar10 = (float)FUN_04f1b1c0(lVar6,0);
      fVar16 = ((fVar16 - fVar13) - fVar20) * (float)param_3;
      param_2 = (ulong)(uint)fVar16;
    } while (fVar16 + ((fVar14 - fVar12) - fVar18 * fVar11) * fVar10 + fVar21 * fVar17 < 0.0);
LAB_03667408:
    lVar6 = FUN_051df7a8(lVar4,0);
    if (lVar6 == 0) {
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    fVar10 = (float)FUN_04f1b1c0(lVar6,0);
    uVar19 = param_2;
    uVar5 = param_3;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar7 = FUN_051d94d4();
    fVar11 = (float)param_2;
    fVar18 = (float)param_3;
    param_2 = uVar19;
    param_3 = uVar5;
    fVar16 = 0.0;
    if ((uVar7 & 1) == 0) {
      lVar8 = System_Array__InternalArray__set_Item<GradientColorKey>();
      if (lVar8 == 0) goto LAB_0366769c;
      iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar8,0);
      param_2 = uVar19;
      param_3 = uVar5;
      fVar16 = 0.0;
      if (iVar3 != 0) {
        fVar13 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar6,0);
        fVar16 = (float)uVar19;
        fVar21 = (float)uVar5;
        fVar14 = (float)FUN_051db584(&stack0x00000080,0);
        fVar21 = (float)uVar5 - fVar21;
        param_3 = (ulong)(uint)fVar21;
        fVar21 = fVar18 * fVar21;
        fVar16 = fVar21 + fVar10 * (fVar13 - fVar14) + fVar11 * ((float)uVar19 - fVar16);
        fVar13 = (float)FUN_051db578(&stack0x00000080,0);
        fVar18 = fVar18 * (float)param_3;
        param_2 = (ulong)(uint)fVar18;
        fVar16 = fVar16 / (fVar18 + fVar10 * fVar13 + fVar11 * fVar21);
        if (fVar16 < 0.0) goto LAB_03667688;
      }
    }
    if (in_stack_00000028._4_4_ <= fVar16) goto LAB_03667688;
    unaff_x25[8] = 0;
    unaff_x25[5] = 0;
    unaff_x25[4] = 0;
    unaff_x25[7] = 0;
    unaff_x25[6] = 0;
    unaff_x25[1] = 0;
    *unaff_x25 = 0;
    unaff_x25[3] = 0;
    unaff_x25[2] = 0;
    in_stack_00000030 = lVar4;
    thunk_FUN_01656ef8(&stack0x00000030,lVar4);
    fVar11 = (float)param_3;
    fVar18 = (float)param_2;
    thunk_FUN_01656ef8();
    if (((unaff_x19 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
       (lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                          (*(long *)(unaff_x20 + 0x38),unaff_w24,*unaff_x22), lVar4 == 0))
    goto LAB_0366769c;
    FUN_03663fd4();
    lVar4 = System_Array__InternalArray__set_Item<GradientColorKey>();
    if (lVar4 == 0) goto LAB_0366769c;
    FUN_036e1250(lVar4,0);
    lVar4 = System_Array__InternalArray__set_Item<GradientColorKey>();
    if (lVar4 == 0) goto LAB_0366769c;
    FUN_036e1194(lVar4,0);
    FUN_051db584(&stack0x00000080,0);
    fVar21 = fVar18;
    fVar13 = fVar11;
    FUN_051db578(&stack0x00000080,0);
    lVar6 = *(long *)PTR_DAT_06db7458;
    param_4 = (ulong)(uint)-fVar10;
    param_2 = (ulong)(uint)(fVar18 + fVar16 * fVar21);
    param_3 = (ulong)(uint)(fVar11 + fVar16 * fVar13);
    memcpy(&stack0x000000a0,&stack0x00000030,0x50);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_0366769c;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
      pcVar9 = *(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8);
      memcpy(&stack0x000000f0,&stack0x000000a0,0x50);
      (*pcVar9)();
      goto LAB_03667688;
    }
    unaff_x26 = (void *)(lVar4 + (long)(int)uVar1 * 0x50 + 0x20);
    in_w10 = uVar1 + 1;
  } while( true );
}


