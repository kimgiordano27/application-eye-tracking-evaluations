/*
FUNCTION_NAME: FUN_0199d86c
ENTRY_POINT: 0199d86c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 155
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0199d86c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5
                 ,long param_6,undefined8 param_7,int param_8,uint param_9,long param_10)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  
  if ((DAT_0377a4d0 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<TextVertex>_Dispose__);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(OVRPlugin_<>c_TypeInfo);
    DAT_0377a4d0 = 1;
  }
  if (*(int *)(param_4 + 0x30) < param_8) {
    return;
  }
  fVar20 = 1.0;
  fVar14 = 1.0 / (float)*(int *)(param_4 + 0x30);
  fVar15 = fVar14 * (float)param_8;
  fVar18 = fVar15;
  if (1.0 < fVar15) {
    fVar18 = fVar20;
  }
  if (fVar15 < 0.0) {
    fVar18 = 0.0;
  }
  if (param_10 != 0) {
    *(undefined4 *)(param_10 + 0x10) = param_1;
    *(undefined4 *)(param_10 + 0x14) = param_2;
    *(undefined4 *)(param_10 + 0x18) = param_3;
    if ((param_5 != 0) && (param_6 != 0)) {
      fVar15 = *(float *)(param_5 + 0x28);
      uVar21 = *(undefined8 *)(param_5 + 0x20);
      uVar23 = *(undefined8 *)(param_6 + 0x20);
      fVar24 = *(float *)(param_6 + 0x28);
      FUN_0199ce4c(fVar18,param_4,param_5);
      FUN_0199d220(param_4);
      lVar12 = *(long *)(param_4 + 0x40);
      if (lVar12 != 0) {
        lVar11 = *(long *)
                  Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
        ;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
        if ((uVar9 & 1) == 0) {
          *(undefined4 *)(lVar12 + 0x18) = 0;
        }
        else {
          iVar13 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          if (0 < iVar13) {
            FUN_0179519c(*(undefined8 *)(lVar12 + 0x10),0,iVar13,0);
          }
        }
        puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
        puVar7 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
        puVar6 = OVRPlugin_<>c_TypeInfo;
        lVar12 = *(long *)(param_10 + 0x20);
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar12 + 0x18);
          uVar9 = 0;
          do {
            if (uVar1 <= uVar9) goto LAB_0199dec4;
            *(undefined1 *)(lVar12 + 0x20 + uVar9) = 0;
            uVar9 = uVar9 + 1;
          } while (uVar9 != 5);
          uVar9 = FUN_0199d3d0(*(undefined4 *)(param_10 + 0x10),*(undefined4 *)(param_10 + 0x14),
                               *(undefined4 *)(param_10 + 0x18),param_4,param_7,
                               *(undefined8 *)(param_4 + 0x40),0);
          if ((uVar9 & 1) == 0) {
            return;
          }
          lVar12 = *(long *)(param_4 + 0x40);
          if (lVar12 != 0) {
            bVar5 = 0;
            bVar3 = 0;
            bVar4 = 0;
            iVar13 = 0;
            do {
              if (*(int *)(lVar12 + 0x18) <= iVar13) {
                if ((bool)(bVar5 & (bVar4 | bVar3))) {
                  *(undefined1 *)(param_10 + 0x1c) = 1;
                  *(float *)(param_10 + 0x28) = fVar18;
                  return;
                }
                if ((param_9 & 1) == 0) {
                  return;
                }
                fVar22 = 0.0;
                fVar16 = fVar14 + fVar18;
                fVar25 = fVar16;
                if (1.0 < fVar16) {
                  fVar25 = fVar20;
                }
                    /* try { // try from 0199db80 to 01a9dcb7 has its CatchHandler @ 0199db80
                       catch() { ... } // from try @ 0199db80 with catch @ 0199db80
                       catch() { ... } // from try @ 0199de24 with catch @ 0199db80
                       catch() { ... } // from try @ 0199e030 with catch @ 0199db80
                       catch() { ... } // from try @ 0199e0dc with catch @ 0199db80
                       catch() { ... } // from try @ 0199e154 with catch @ 0199db80 */
                if (fVar16 < 0.0) {
                  fVar25 = fVar22;
                }
                FUN_0199ce4c(fVar25,param_4,param_5,param_6);
                FUN_0199d220(param_4);
                lVar12 = *(long *)(param_4 + 0x28);
                if (lVar12 != 0) {
                  if (*(int *)(lVar12 + 0x18) < 1) {
                    fVar25 = 0.0;
                    fVar16 = 0.0;
                    goto LAB_0199dc08;
                  }
                  iVar13 = 0;
                  fVar25 = 0.0;
                  fVar16 = 0.0;
                  fVar22 = 0.0;
                  goto LAB_0199dbb8;
                }
                break;
              }
              lVar11 = *(long *)(param_4 + 0x28);
              FUN_0132138c(lVar12,iVar13,&local_a8,*(undefined8 *)puVar7);
              if (lVar11 == 0) break;
              FUN_0132138c(lVar11,local_a8,&local_a8,*(undefined8 *)puVar6);
              uVar1 = local_98;
              lVar12 = *(long *)puVar8;
              lVar11 = (long)(int)local_98;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar12 = *(long *)puVar8;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar1) {
LAB_0199dec4:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
              if ((int)uVar1 < 0) {
LAB_0199db1c:
                bVar4 = bVar4 | uVar1 != 0;
                bVar3 = bVar3 | uVar1 == 0;
              }
              else {
                lVar12 = *(long *)(param_10 + 0x20);
                if (lVar12 == 0) break;
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_0199dec4;
                *(undefined1 *)(lVar12 + (int)uVar1 + 0x20) = 1;
                if ((int)uVar1 < 1) goto LAB_0199db1c;
                bVar5 = 1;
              }
              lVar12 = *(long *)(param_4 + 0x40);
              iVar13 = iVar13 + 1;
            } while (lVar12 != 0);
          }
        }
      }
    }
  }
  goto LAB_0199dec0;
  while( true ) {
    iVar13 = iVar13 + 1;
    fVar19 = (float)*(int *)(lVar12 + 0x18);
    fVar25 = fVar25 + local_a8 / fVar19;
    fVar16 = fVar16 + fStack_a4 / fVar19;
    fVar22 = fVar22 + local_a0 / fVar19;
    if (*(int *)(lVar12 + 0x18) <= iVar13) break;
LAB_0199dbb8:
    FUN_0132138c(lVar12,iVar13,&local_a8,*(undefined8 *)puVar6);
    lVar12 = *(long *)(param_4 + 0x28);
    if (lVar12 == 0) goto LAB_0199dec0;
  }
LAB_0199dc08:
  fVar17 = fVar18 - fVar14;
  fVar19 = fVar17;
  if (1.0 < fVar17) {
    fVar19 = fVar20;
  }
  if (fVar17 < 0.0) {
    fVar19 = 0.0;
  }
  FUN_0199ce4c(fVar19,param_4,param_5,param_6);
  FUN_0199d220(param_4);
  lVar12 = *(long *)(param_4 + 0x28);
  if (lVar12 != 0) {
    if (0 < *(int *)(lVar12 + 0x18)) {
      iVar13 = 0;
      do {
        FUN_0132138c(lVar12,iVar13,&local_a8,*(undefined8 *)puVar6);
        lVar12 = *(long *)(param_4 + 0x28);
        if (lVar12 == 0) goto LAB_0199dec0;
        iVar13 = iVar13 + 1;
        fVar20 = (float)*(int *)(lVar12 + 0x18);
        fVar25 = fVar25 - local_a8 / fVar20;
        fVar16 = fVar16 - fStack_a4 / fVar20;
        fVar22 = fVar22 - local_a0 / fVar20;
      } while (iVar13 < *(int *)(lVar12 + 0x18));
    }
    lVar12 = *(long *)(param_4 + 0x40);
    if (lVar12 != 0) {
      if (*(int *)(lVar12 + 0x18) < 1) {
                    /* try { // try from 0199dd18 to 01a9dd1b has its CatchHandler @ 0199e074 */
        fVar20 = 0.0;
      }
      else {
        iVar13 = 0;
        fVar20 = 0.0;
        do {
                    /* try { // try from 0199dcb8 to 01a9dcbf has its CatchHandler @ 0199e078 */
          lVar11 = *(long *)(param_4 + 0x28);
          FUN_0132138c(lVar12,iVar13,&local_a8,*(undefined8 *)puVar7);
                    /* try { // try from 0199dccc to 01a9dd03 has its CatchHandler @ 0199e060 */
          if (lVar11 == 0) goto LAB_0199dec0;
          FUN_0132138c(lVar11,local_a8,&local_a8,*(undefined8 *)puVar6);
          lVar12 = *(long *)(param_4 + 0x40);
          if (lVar12 == 0) goto LAB_0199dec0;
          iVar13 = iVar13 + 1;
          fVar20 = fVar20 + local_9c / (float)*(int *)(lVar12 + 0x18);
        } while (iVar13 < *(int *)(lVar12 + 0x18));
      }
      if (DAT_0377518c == '\0') {
                    /* try { // try from 0199dd2c to 01a9dd33 has its CatchHandler @ 0199e08c */
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    /* try { // try from 0199dd3c to 01a9dd43 has its CatchHandler @ 0199e088 */
        DAT_0377518c = '\x01';
      }
      fVar25 = fVar25 - ((float)uVar23 - (float)uVar21) * fVar14;
      fVar16 = fVar16 - ((float)((ulong)uVar23 >> 0x20) - (float)((ulong)uVar21 >> 0x20)) * fVar14;
                    /* try { // try from 0199dd4c to 01a9dd57 has its CatchHandler @ 0199e084 */
      fVar22 = fVar22 - fVar14 * (fVar24 - fVar15);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
                    /* try { // try from 0199dd64 to 01a9dd6b has its CatchHandler @ 0199e0a0 */
                    /* try { // try from 0199dd80 to 01a9dd83 has its CatchHandler @ 0199e09c */
      fVar14 = SQRT(fVar22 * fVar22 + fVar25 * fVar25 + fVar16 * fVar16);
      if (fVar14 <= DAT_028aa038) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
                    /* try { // try from 0199ddc4 to 01a9dddb has its CatchHandler @ 0199e0a8 */
        uVar21 = *puVar10;
        fVar22 = *(float *)(puVar10 + 1);
      }
      else {
        uVar21 = CONCAT44(fVar16 / fVar14,fVar25 / fVar14);
                    /* try { // try from 0199dd98 to 01a9ddab has its CatchHandler @ 0199e0ac */
        fVar22 = fVar22 / fVar14;
      }
      FUN_0199ce4c(fVar18,param_4,param_5,param_6);
      FUN_0199d220(param_4);
                    /* try { // try from 0199ddec to 01a9ddf3 has its CatchHandler @ 0199e098 */
      if (0 < *(int *)(param_4 + 0x34)) {
                    /* try { // try from 0199ddf8 to 01a9de03 has its CatchHandler @ 0199e094 */
        iVar13 = 0;
        do {
                    /* try { // try from 0199de08 to 01a9de13 has its CatchHandler @ 0199e090 */
          fVar18 = (float)((ulong)uVar21 >> 0x20) * fVar20 +
                   (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
          uVar23 = CONCAT44(fVar18,(float)uVar21 * fVar20 + (float)*(undefined8 *)(param_10 + 0x10))
          ;
          *(undefined8 *)(param_10 + 0x10) = uVar23;
          *(float *)(param_10 + 0x18) = fVar20 * fVar22 + *(float *)(param_10 + 0x18);
          uVar9 = FUN_0199d3d0(uVar23,fVar18,param_4,param_7,0,*(undefined8 *)(param_4 + 0x40));
          if ((uVar9 & 1) == 0) {
            return;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(param_4 + 0x34));
      }
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar10 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      uVar21 = *puVar10;
      uVar2 = *(undefined4 *)(puVar10 + 1);
      *(undefined1 *)(param_10 + 0x1c) = 0;
      *(undefined8 *)(param_10 + 0x10) = uVar21;
      *(undefined4 *)(param_10 + 0x18) = uVar2;
      FUN_0199ce4c(0x3f800000,param_4,param_5,param_6);
      return;
    }
  }
LAB_0199dec0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0199dec0 to 01a9ded7 has its CatchHandler @ 0199e07c */
  FUN_00da518c();
}


