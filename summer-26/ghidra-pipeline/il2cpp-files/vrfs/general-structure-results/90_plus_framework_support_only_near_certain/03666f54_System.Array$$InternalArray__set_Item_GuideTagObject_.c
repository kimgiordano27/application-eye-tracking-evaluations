/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<GuideTagObject>
ENTRY_POINT: 03666f54
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


void System_Array__InternalArray__set_Item<GuideTagObject>(long param_1)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *puVar14;
  uint unaff_w26;
  code *pcVar15;
  long *unaff_x28;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong in_d3;
  ulong unaff_d10;
  float unaff_s15;
  float in_stack_00000028;
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
  
  if (*(uint *)(param_1 + 0x18) <= unaff_w26) goto LAB_03667864;
  lVar7 = *(long *)(param_1 + (long)(int)unaff_w26 * 8 + 0x20);
  if (lVar7 == 0) goto LAB_0366769c;
  iVar3 = FUN_051d0fb0(lVar7,0);
  lVar7 = **(long **)(*unaff_x22 + 0xb8);
  if (lVar7 == 0) goto LAB_0366769c;
  if (*(uint *)(lVar7 + 0x18) <= unaff_w26) goto LAB_03667864;
  lVar7 = *(long *)(lVar7 + (long)(int)unaff_w26 * 8 + 0x20);
  if (lVar7 == 0) goto LAB_0366769c;
  iVar4 = FUN_051d1098(lVar7,0);
  uVar9 = 0x3f800000;
  if (1.0 < in_stack_00000028 / (float)iVar4) {
    return;
  }
  if (in_stack_00000028 / (float)iVar4 < 0.0) {
    return;
  }
  if (unaff_s15 / (float)iVar3 < 0.0) {
    return;
  }
  if (1.0 < unaff_s15 / (float)iVar3) {
    return;
  }
                    /* try { // try from 03667008 to 0376701b has its CatchHandler @ 03667028 */
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000080 = 0;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
                    /* try { // try from 0366701c to 0376703f has its CatchHandler @ 03666fc8 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 03667008 with catch @ 03667028
                        */
  uVar8 = FUN_051d2ac0();
  if ((uVar8 & 1) != 0) {
    if (unaff_x21 == 0) goto LAB_0366769c;
                    /* try { // try from 03667040 to 03767057 has its CatchHandler @ 03667090 */
    FUN_051d81ac(&stack0x000000f0);
                    /* try { // try from 03667058 to 0376707f has its CatchHandler @ 03666fc8 */
    in_stack_00000088 = in_stack_000000f8;
    in_stack_00000080 = in_stack_000000f0;
    in_stack_00000090 = in_stack_00000100;
    uVar9 = unaff_d10;
  }
  lVar7 = System_Array__InternalArray__set_Item<GradientColorKey>();
  if (lVar7 == 0) goto LAB_0366769c;
  iVar3 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar7,0);
  if ((iVar3 == 0) || (*(int *)(unaff_x20 + 0x24) == 0)) {
    fStack000000000000002c = 3.4028235e+38;
  }
  else {
                    /* try { // try from 03667080 to 0376708f has its CatchHandler @ 03667090 */
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
                    /* catch() { ... } // from try @ 03667040 with catch @ 03667090
                       catch() { ... } // from try @ 03667080 with catch @ 03667090 */
                    /* try { // try from 03667094 to 03767097 has its CatchHandler @ 036670a0 */
                    /* try { // try from 03667098 to 037670a3 has its CatchHandler @ 03666fc8 */
    uVar8 = FUN_051d2ac0();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03667094 with catch @ 036670a0
                        */
    if ((uVar8 & 1) == 0) {
      fVar16 = 100.0;
    }
    else {
      FUN_051db578(&stack0x00000080,0);
      if (DAT_0722a469 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06d97918);
        DAT_0722a469 = '\x01';
      }
      fVar17 = (float)uVar9;
      fVar25 = ABS(fVar17);
      uVar9 = (ulong)(uint)fVar25;
      in_d3 = 0x41000000;
      fVar22 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
      fVar16 = fVar25 * DAT_0534bb40;
      if (fVar25 * DAT_0534bb40 <= fVar22) {
        fVar16 = fVar22;
      }
      if (fVar25 < fVar16) {
        fVar16 = INFINITY;
      }
      else {
        if (unaff_x21 == 0) goto LAB_0366769c;
        fVar16 = (float)FUN_051d54c0();
        fVar22 = (float)FUN_051d5438();
        fVar16 = ABS((fVar16 - fVar22) / fVar17);
      }
    }
    uVar13 = *(uint *)(unaff_x20 + 0x24);
    if ((uVar13 & 0xfffffffe) == 2) {
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
        uVar6 = FUN_051e2138(*(undefined4 *)(unaff_x20 + 0x28),0);
        if (lVar7 == 0) goto LAB_0366769c;
        in_stack_000000f8 = in_stack_000000a8;
        in_stack_000000f0 = in_stack_000000a0;
        in_stack_00000100 = in_stack_000000b0;
        lVar7 = (**(code **)(lVar7 + 0x18))
                          (fVar16,*(undefined8 *)(lVar7 + 0x40),&stack0x000000f0,uVar6,
                           *(undefined8 *)(lVar7 + 0x28));
        if (lVar7 == 0) goto LAB_0366769c;
        if (*(long *)(lVar7 + 0x18) == 0) goto LAB_036677b8;
        if ((int)*(long *)(lVar7 + 0x18) == 0) goto LAB_03667864;
        fStack000000000000002c = (float)FUN_049ab7f0(lVar7 + 0x20,0);
      }
      uVar13 = *(uint *)(unaff_x20 + 0x24);
    }
    else {
      fStack000000000000002c = 3.4028235e+38;
    }
    if ((uVar13 | 2) == 3) {
      lVar7 = FUN_030a030c(0);
      if (lVar7 == 0) goto LAB_0366769c;
      if (*(long *)(lVar7 + 0x28) != 0) {
        lVar7 = FUN_030a030c(0);
        if (lVar7 == 0) goto LAB_0366769c;
        lVar7 = *(long *)(lVar7 + 0x30);
        in_stack_000000a8 = in_stack_00000088;
        in_stack_000000a0 = in_stack_00000080;
        in_stack_000000b0 = in_stack_00000090;
        uVar6 = FUN_051e2138(*(undefined4 *)(unaff_x20 + 0x28),0);
        if (lVar7 == 0) goto LAB_0366769c;
        in_stack_000000f8 = in_stack_000000a8;
        in_stack_000000f0 = in_stack_000000a0;
        in_stack_00000100 = in_stack_000000b0;
        lVar7 = (**(code **)(lVar7 + 0x18))
                          (fVar16,*(undefined8 *)(lVar7 + 0x40),&stack0x000000f0,uVar6,
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
    uVar8 = (ulong)(uint)in_stack_00000028;
    FUN_03667924();
    puVar1 = PTR_DAT_06e61e40;
    lVar7 = *(long *)(unaff_x20 + 0x38);
    if (lVar7 != 0) {
      iVar3 = *(int *)(lVar7 + 0x18);
      if (iVar3 < 1) {
        return;
      }
      iVar4 = 0;
      puVar14 = (undefined8 *)((ulong)&stack0x00000030 | 8);
      while (lVar7 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                               (lVar7,iVar4,*(undefined8 *)puVar1), lVar7 != 0) {
        lVar7 = FUN_051e516c(lVar7,0);
        if (*(char *)(unaff_x20 + 0x20) == '\0') {
          if (lVar7 == 0) break;
LAB_03667408:
          lVar10 = FUN_051df7a8(lVar7,0);
          if (lVar10 == 0) break;
          fVar16 = (float)FUN_04f1b1c0(lVar10,0);
          uVar24 = uVar8;
          uVar28 = uVar9;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar11 = FUN_051d94d4();
          fVar17 = (float)uVar8;
          fVar25 = (float)uVar9;
          uVar8 = uVar24;
          uVar9 = uVar28;
          fVar22 = 0.0;
          if ((uVar11 & 1) == 0) {
            lVar12 = System_Array__InternalArray__set_Item<GradientColorKey>();
            if (lVar12 == 0) break;
            iVar5 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar12,0);
            uVar8 = uVar24;
            uVar9 = uVar28;
            fVar22 = 0.0;
            if (iVar5 != 0) {
              fVar19 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar10,0);
              fVar22 = (float)uVar24;
              fVar27 = (float)uVar28;
              fVar20 = (float)FUN_051db584(&stack0x00000080,0);
              fVar27 = (float)uVar28 - fVar27;
              uVar9 = (ulong)(uint)fVar27;
              fVar27 = fVar25 * fVar27;
              fVar22 = fVar27 + fVar16 * (fVar19 - fVar20) + fVar17 * ((float)uVar24 - fVar22);
              fVar19 = (float)FUN_051db578(&stack0x00000080,0);
              fVar25 = fVar25 * (float)uVar9;
              uVar8 = (ulong)(uint)fVar25;
              fVar22 = fVar22 / (fVar25 + fVar16 * fVar19 + fVar17 * fVar27);
              if (fVar22 < 0.0) goto LAB_03667688;
            }
          }
          if (fVar22 < fStack000000000000002c) {
            puVar14[8] = 0;
            puVar14[5] = 0;
            puVar14[4] = 0;
            puVar14[7] = 0;
            puVar14[6] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            puVar14[3] = 0;
            puVar14[2] = 0;
            in_stack_00000030 = lVar7;
            thunk_FUN_01656ef8(&stack0x00000030,lVar7);
            fVar17 = (float)uVar9;
            fVar25 = (float)uVar8;
            thunk_FUN_01656ef8(puVar14);
            if (((unaff_x19 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
               (lVar7 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                  (*(long *)(unaff_x20 + 0x38),iVar4,*(undefined8 *)puVar1),
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
            fVar19 = fVar17;
            FUN_051db578(&stack0x00000080,0);
            lVar10 = *(long *)PTR_DAT_06db7458;
            in_d3 = (ulong)(uint)-fVar16;
            uVar8 = (ulong)(uint)(fVar25 + fVar22 * fVar27);
            uVar9 = (ulong)(uint)(fVar17 + fVar22 * fVar19);
            memcpy(&stack0x000000a0,&stack0x00000030,0x50);
            lVar7 = *(long *)(unaff_x19 + 0x10);
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            if (lVar7 == 0) break;
            uVar13 = *(uint *)(unaff_x19 + 0x18);
            if (uVar13 < *(uint *)(lVar7 + 0x18)) {
              __dest = (void *)(lVar7 + (long)(int)uVar13 * 0x50 + 0x20);
              *(uint *)(unaff_x19 + 0x18) = uVar13 + 1;
              memcpy(__dest,&stack0x000000a0,0x50);
              thunk_FUN_01656ef8(__dest,0);
            }
            else {
              pcVar15 = *(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8)
              ;
              memcpy(&stack0x000000f0,&stack0x000000a0,0x50);
              (*pcVar15)();
            }
          }
        }
        else {
          uVar24 = uVar9;
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            uVar24 = uVar9;
          }
          uVar9 = FUN_051d94d4();
          puVar2 = PTR_DAT_06e50440;
          if ((uVar9 & 1) == 0) {
            if ((unaff_x21 == 0) || (lVar10 = FUN_051e5130(), lVar10 == 0)) break;
            uVar21 = FUN_04f1adf8(lVar10,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar2);
              DAT_0722a396 = '\x01';
            }
            lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
            fVar25 = (float)FUN_04f13f58(uVar21,uVar8,uVar24,in_d3,*(undefined4 *)(lVar10 + 0x48),
                                         *(undefined4 *)(lVar10 + 0x4c),
                                         *(undefined4 *)(lVar10 + 0x50),0);
            fVar16 = (float)uVar8;
            fVar22 = (float)uVar24;
            fVar17 = (float)FUN_051d5438();
            if ((lVar7 == 0) || (lVar10 = FUN_051df7a8(lVar7,0), lVar10 == 0)) break;
            fVar20 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar10,0);
            fVar27 = fVar16;
            fVar19 = fVar22;
            lVar10 = FUN_051e5130();
            if (lVar10 == 0) break;
            fVar18 = (float)Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar10,0);
            lVar10 = FUN_051df7a8(lVar7,0);
            if (lVar10 == 0) break;
            in_d3 = (ulong)(uint)(fVar20 - fVar18);
            fVar23 = (float)uVar8 * fVar17;
            fVar26 = (float)uVar24 * fVar17;
            uVar9 = (ulong)(uint)fVar26;
            fVar27 = (fVar16 - fVar27) - fVar23;
            fVar16 = (float)FUN_04f1b1c0(lVar10,0);
            fVar22 = ((fVar22 - fVar19) - fVar26) * (float)uVar9;
            uVar8 = (ulong)(uint)fVar22;
            if (0.0 <= fVar22 + ((fVar20 - fVar18) - fVar25 * fVar17) * fVar16 + fVar27 * fVar23)
            goto LAB_03667408;
          }
          else {
            if ((lVar7 == 0) || (lVar10 = FUN_051df7a8(lVar7,0), lVar10 == 0)) break;
            uVar21 = FUN_04f1adf8(lVar10,0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar2);
              DAT_0722a396 = '\x01';
            }
            lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
            fVar16 = (float)FUN_04f13f58(uVar21,uVar8,uVar24,in_d3,*(undefined4 *)(lVar10 + 0x48),
                                         *(undefined4 *)(lVar10 + 0x4c),
                                         *(undefined4 *)(lVar10 + 0x50),0);
            if (DAT_0722a396 == '\0') {
              thunk_FUN_0159f088(puVar2);
              DAT_0722a396 = '\x01';
            }
            lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
            uVar9 = (ulong)(uint)*(float *)(lVar10 + 0x50);
            fVar25 = (float)uVar8;
            fVar22 = (float)uVar24 * *(float *)(lVar10 + 0x50);
            uVar8 = (ulong)(uint)fVar22;
            if (0.0 < fVar22 + fVar16 * *(float *)(lVar10 + 0x48) +
                               fVar25 * *(float *)(lVar10 + 0x4c)) goto LAB_03667408;
          }
        }
LAB_03667688:
        if (iVar3 + -1 == iVar4) {
          return;
        }
        lVar7 = *(long *)(unaff_x20 + 0x38);
        iVar4 = iVar4 + 1;
        if (lVar7 == 0) break;
      }
    }
  }
LAB_0366769c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


