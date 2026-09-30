/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 0322cf9c
PROGRAM: vrfs-libil2cpp.so
SCORE: 200
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


void OVRPlugin__SaveSpace(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  float *pfVar9;
  undefined1 *puVar10;
  int in_w9;
  int unaff_w19;
  long unaff_x20;
  long lVar11;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 in_s3;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_stack_00000010;
  int iStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  do {
    if (in_w9 == 0) {
                    /* try { // try from 0322cfa0 to 0332cfc7 has its CatchHandler @ 0322d13c */
      thunk_FUN_016466fc(param_1);
    }
    uVar5 = FUN_051d2ac0(unaff_x25,0,0);
    if ((uVar5 & 1) == 0) goto LAB_0322cfc4;
LAB_0322d5e0:
    do {
      unaff_x21 = unaff_x21 + 1;
      if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x21) {
        lVar11 = 0;
        uVar5 = 0;
        goto LAB_0322d5f8;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x21) goto LAB_0322d6a0;
      unaff_x24 = *(long *)(unaff_x20 + unaff_x21 * 8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar5 = FUN_051d94d4(unaff_x24,0,0);
    } while ((uVar5 & 1) != 0);
    if (unaff_w19 == 0) {
      if (unaff_x24 == 0) goto LAB_0322d69c;
LAB_0322cfc4:
      uVar1 = FUN_051d71b8(unaff_x24,0);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 0322cfe0 to 0332d03f has its CatchHandler @ 0322d140 */
        thunk_FUN_016466fc(*unaff_x22);
      }
      uVar17 = 0;
      uVar6 = unaff_d9;
      uVar14 = FUN_051d1218(0);
      if (*(char *)(unaff_x27 + 0x13e) == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        *(undefined1 *)(unaff_x27 + 0x13e) = 1;
      }
      pfVar9 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
      fVar12 = (float)uVar14 - *pfVar9;
      fVar15 = (float)uVar6 - pfVar9[1];
      fVar19 = (float)uVar17;
      fVar16 = fVar19 - pfVar9[2];
                    /* try { // try from 0322d05c to 0332d067 has its CatchHandler @ 0322d138 */
                    /* try { // try from 0322d068 to 0332d127 has its CatchHandler @ 0322cc90 */
      uVar20 = unaff_d8;
      uVar21 = unaff_d9;
      uVar18 = 0;
      fVar13 = fStack000000000000001c;
      if (fStack000000000000001c <= fVar16 * fVar16 + fVar12 * fVar12 + fVar15 * fVar15) {
        uVar4 = 0x80000000;
        if (fVar19 != INFINITY) {
          uVar4 = (int)fVar19;
        }
        if (uVar4 != uVar1) goto LAB_0322d5e0;
        iVar2 = FUN_04882f98(0);
        iVar3 = FUN_04882fc0(0);
        if (0 < (int)uVar1) {
          lVar11 = *unaff_x22;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar11 = *unaff_x22;
          }
          lVar8 = **(long **)(lVar11 + 0xb8);
          if (lVar8 == 0) goto LAB_0322d69c;
          if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar8 = **(long **)(*unaff_x22 + 0xb8);
              if (lVar8 == 0) goto LAB_0322d69c;
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0322d6a0;
            lVar11 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_0322d69c;
            iVar2 = FUN_051d0fb0(lVar11,0);
            lVar11 = **(long **)(*unaff_x22 + 0xb8);
            if (lVar11 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar11 + 0x18) <= uVar1) goto LAB_0322d6a0;
            lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_0322d69c;
            iVar3 = FUN_051d1098(lVar11,0);
          }
        }
        fVar13 = (float)uVar6 / (float)iVar3;
        unaff_x29 = (long *)PTR_DAT_06d9fd78;
        unaff_w19 = iStack0000000000000018;
        if ((((1.0 < fVar13) || (fVar13 < 0.0)) ||
            (fVar12 = (float)uVar14 / (float)iVar2, fVar12 < 0.0)) ||
           (fVar13 = 1.0, uVar20 = uVar14, uVar21 = uVar6, uVar18 = uVar17, 1.0 < fVar12))
        goto LAB_0322d5e0;
      }
      uStack00000000000000a0 = FUN_051d6ed8(unaff_x24,0);
      fStack00000000000000a4 = fVar13;
      fStack00000000000000a8 = fVar16;
      uStack00000000000000ac = in_s3;
      uVar5 = FUN_051dc270(uVar20,uVar21,uVar18,&stack0x000000a0,0);
      if (((uVar5 & 1) != 0) && (iVar2 = FUN_051d5eb0(unaff_x24,0), iVar2 != 0)) {
        FUN_051d81ac(&stack0x00000060,uVar20,uVar21,unaff_x24,0);
        fVar13 = (float)uVar18;
        in_stack_00000088 = in_stack_00000068;
        in_stack_00000080 = in_stack_00000060;
        in_stack_00000090 = in_stack_00000070;
        FUN_051db578(&stack0x00000080,0);
        if (DAT_0722a469 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06d97918);
          DAT_0722a469 = '\x01';
        }
        in_s3 = 0x41000000;
        fVar12 = ABS(fVar13) * in_stack_00000010._4_4_;
        fVar15 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
        if (fVar12 <= fVar15) {
          fVar12 = fVar15;
        }
        if (fVar12 <= ABS(fVar13)) {
          fVar12 = (float)FUN_051d54c0(unaff_x24,0);
          fVar15 = (float)FUN_051d5438(unaff_x24,0);
          fVar13 = ABS((fVar12 - fVar15) / fVar13);
        }
        else {
          fVar13 = INFINITY;
        }
        in_stack_00000068 = in_stack_00000088;
        in_stack_00000060 = in_stack_00000080;
        in_stack_00000070 = in_stack_00000090;
        uVar1 = FUN_051d5e30(unaff_x24,0);
        uVar4 = FUN_051d5eb0(unaff_x24,0);
        in_stack_00000048 = in_stack_00000068;
        in_stack_00000040 = in_stack_00000060;
        in_stack_00000050 = in_stack_00000070;
        if (pcRam0000000007237ef8 == (code *)0x0) {
          pcRam0000000007237ef8 =
               (code *)FUN_0160ed64(
                                   "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                   );
        }
        uVar6 = (*pcRam0000000007237ef8)(fVar13,unaff_x24,&stack0x00000040,uVar4 & uVar1);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x29);
        }
        uVar5 = FUN_051d2ac0(uVar6,0,0);
        if ((uVar5 & 1) == 0) {
          iVar2 = FUN_051d662c(unaff_x24,0);
          if ((iVar2 == 1) || (iVar2 = FUN_051d662c(unaff_x24,0), iVar2 == 2)) {
            lVar11 = *unaff_x28;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar11 = *unaff_x28;
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
            if (lVar11 != 0) {
              if (1 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x30) = 0;
                thunk_FUN_01656ef8((undefined8 *)(lVar11 + 0x30),0);
                lVar11 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
                if (lVar11 != 0) {
                  if (1 < *(uint *)(lVar11 + 0x18)) {
                    plVar7 = (long *)(lVar11 + 0x38);
                    *plVar7 = 0;
                    lVar11 = 0;
                    goto LAB_0322d450;
                  }
                  goto LAB_0322d6a0;
                }
                goto LAB_0322d69c;
              }
              goto LAB_0322d6a0;
            }
            goto LAB_0322d69c;
          }
        }
        else {
          lVar11 = *unaff_x28;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar11 = *unaff_x28;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_0322d69c;
          if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_0322d6a0;
          *(undefined8 *)(lVar11 + 0x30) = uVar6;
          thunk_FUN_01656ef8((undefined8 *)(lVar11 + 0x30),uVar6);
          lVar11 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_0322d69c;
          if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_0322d6a0;
          plVar7 = (long *)(lVar11 + 0x38);
          *plVar7 = unaff_x24;
          lVar11 = unaff_x24;
LAB_0322d450:
          thunk_FUN_01656ef8(plVar7,lVar11);
        }
        in_stack_00000068 = in_stack_00000088;
        in_stack_00000060 = in_stack_00000080;
        in_stack_00000070 = in_stack_00000090;
        uVar1 = FUN_051d5e30(unaff_x24,0);
        uVar4 = FUN_051d5eb0(unaff_x24,0);
        in_stack_00000028 = in_stack_00000068;
        in_stack_00000020 = in_stack_00000060;
        in_stack_00000030 = in_stack_00000070;
        if (pcRam0000000007237f00 == (code *)0x0) {
          pcRam0000000007237f00 =
               (code *)FUN_0160ed64(
                                   "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                   );
        }
        uVar6 = (*pcRam0000000007237f00)(fVar13,unaff_x24,&stack0x00000020,uVar4 & uVar1);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x29);
        }
        uVar5 = FUN_051d2ac0(uVar6,0,0);
        if ((uVar5 & 1) == 0) {
          iVar2 = FUN_051d662c(unaff_x24,0);
          if ((iVar2 != 1) && (iVar2 = FUN_051d662c(unaff_x24,0), iVar2 != 2)) goto LAB_0322d5e0;
          lVar11 = *unaff_x28;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar11 = *unaff_x28;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_0322d69c;
          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0322d6a0;
          *(undefined8 *)(lVar11 + 0x40) = 0;
          thunk_FUN_01656ef8((undefined8 *)(lVar11 + 0x40),0);
          lVar11 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_0322d69c;
          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0322d6a0;
          plVar7 = (long *)(lVar11 + 0x48);
          *plVar7 = 0;
          unaff_x24 = 0;
        }
        else {
          lVar11 = *unaff_x28;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar11 = *unaff_x28;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_0322d69c;
          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0322d6a0;
          *(undefined8 *)(lVar11 + 0x40) = uVar6;
          thunk_FUN_01656ef8((undefined8 *)(lVar11 + 0x40),uVar6);
          lVar11 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_0322d69c;
          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0322d6a0;
          plVar7 = (long *)(lVar11 + 0x48);
          *plVar7 = unaff_x24;
        }
        thunk_FUN_01656ef8(plVar7,unaff_x24);
      }
      goto LAB_0322d5e0;
    }
    if (unaff_x24 == 0) goto LAB_0322d69c;
    unaff_x25 = FUN_051d70fc(unaff_x24,0);
    param_1 = *unaff_x29;
    in_w9 = *(int *)(param_1 + 0xe0);
  } while( true );
LAB_0322d5f8:
  lVar8 = *unaff_x28;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar8 = *unaff_x28;
  }
  puVar10 = *(undefined1 **)(lVar8 + 0xb8);
  if (*(long *)(puVar10 + 0x18) == 0) {
LAB_0322d69c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar2 = *(int *)(*(long *)(puVar10 + 0x18) + 0x18);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    puVar10 = *(undefined1 **)(*unaff_x28 + 0xb8);
  }
  if ((long)iVar2 <= (long)uVar5) {
    *puVar10 = 0;
    return;
  }
  lVar8 = *(long *)(puVar10 + 0x18);
  if (lVar8 == 0) goto LAB_0322d69c;
  if (*(uint *)(lVar8 + 0x18) <= uVar5) {
LAB_0322d6a0:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  FUN_0322d6a4(uVar5 & 0xffffffff,*(undefined8 *)(lVar8 + lVar11 + 0x20),
               *(undefined8 *)(lVar8 + lVar11 + 0x28));
  uVar5 = uVar5 + 1;
  lVar11 = lVar11 + 0x10;
  goto LAB_0322d5f8;
}


