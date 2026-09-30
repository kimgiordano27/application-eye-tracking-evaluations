/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 0322ceb0
PROGRAM: vrfs-libil2cpp.so
SCORE: 214
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_4
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(char *param_1,long param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  undefined1 *puVar15;
  int in_w10;
  int unaff_w19;
  ulong unaff_x20;
  long unaff_x21;
  ulong uVar16;
  long *unaff_x22;
  long unaff_x23;
  long lVar17;
  long *unaff_x28;
  long *unaff_x29;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 in_s3;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
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
  
  while( true ) {
    if (in_w10 == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x28;
      param_1 = *(char **)(param_2 + 0xb8);
    }
    if (unaff_x23 <= (long)unaff_x20) break;
    lVar11 = *(long *)(param_1 + 0x18);
    if (lVar11 == 0) goto LAB_0322d69c;
    if (*(uint *)(lVar11 + 0x18) <= unaff_x20) goto LAB_0322d6a0;
    puVar1 = (undefined8 *)(lVar11 + unaff_x21);
    unaff_x20 = unaff_x20 + 1;
    unaff_x21 = unaff_x21 + 0x10;
    *puVar1 = 0;
    puVar1[1] = 0;
    param_2 = *unaff_x28;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_2 = *unaff_x28;
    }
    param_1 = *(char **)(param_2 + 0xb8);
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0322d69c;
    in_w10 = *(int *)(param_2 + 0xe0);
    unaff_x23 = (long)*(int *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  if (*param_1 != '\0') goto LAB_0322d5f0;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    param_1 = *(char **)(*unaff_x28 + 0xb8);
  }
  fVar3 = DAT_0534bf7c;
  fVar2 = DAT_0534bb40;
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 != 0) {
    if ((int)*(ulong *)(lVar11 + 0x18) < 1) goto LAB_0322d5f0;
    uVar16 = 0;
    uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
    goto LAB_0322cf4c;
  }
  goto LAB_0322d69c;
LAB_0322cf4c:
  do {
    if (uVar12 <= uVar16) goto LAB_0322d6a0;
    lVar17 = *(long *)(lVar11 + 0x20 + uVar16 * 8);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar12 = FUN_051d94d4(lVar17,0,0);
    if ((uVar12 & 1) == 0) {
      if (unaff_w19 == 0) {
        if (lVar17 == 0) goto LAB_0322d69c;
      }
      else {
        if (lVar17 == 0) goto LAB_0322d69c;
        uVar8 = FUN_051d70fc(lVar17,0);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x29);
        }
        uVar12 = FUN_051d2ac0(uVar8,0,0);
        if ((uVar12 & 1) != 0) goto LAB_0322d5e0;
      }
      uVar4 = FUN_051d71b8(lVar17,0);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x22);
      }
      uVar23 = 0;
      uVar8 = unaff_d9;
      uVar20 = FUN_051d1218(0);
      if (DAT_0722a13e == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        DAT_0722a13e = '\x01';
      }
      pfVar13 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
      fVar18 = (float)uVar20 - *pfVar13;
      fVar21 = (float)uVar8 - pfVar13[1];
      fVar25 = (float)uVar23;
      fVar22 = fVar25 - pfVar13[2];
      uVar26 = unaff_d8;
      uVar27 = unaff_d9;
      uVar24 = 0;
      fVar19 = fVar3;
      if (fVar22 * fVar22 + fVar18 * fVar18 + fVar21 * fVar21 < fVar3) {
LAB_0322d1bc:
        uStack00000000000000a0 = FUN_051d6ed8(lVar17,0);
        fStack00000000000000a4 = fVar19;
        fStack00000000000000a8 = fVar22;
        uStack00000000000000ac = in_s3;
        uVar12 = FUN_051dc270(uVar26,uVar27,uVar24,&stack0x000000a0,0);
        if (((uVar12 & 1) != 0) && (iVar5 = FUN_051d5eb0(lVar17,0), iVar5 != 0)) {
          FUN_051d81ac(&stack0x00000060,uVar26,uVar27,lVar17,0);
          fVar19 = (float)uVar24;
          in_stack_00000088 = in_stack_00000068;
          in_stack_00000080 = in_stack_00000060;
          in_stack_00000090 = in_stack_00000070;
          FUN_051db578(&stack0x00000080,0);
          if (DAT_0722a469 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06d97918);
            DAT_0722a469 = '\x01';
          }
          in_s3 = 0x41000000;
          fVar18 = ABS(fVar19) * fVar2;
          fVar21 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
          if (fVar18 <= fVar21) {
            fVar18 = fVar21;
          }
          if (fVar18 <= ABS(fVar19)) {
            fVar18 = (float)FUN_051d54c0(lVar17,0);
            fVar21 = (float)FUN_051d5438(lVar17,0);
            fVar19 = ABS((fVar18 - fVar21) / fVar19);
          }
          else {
            fVar19 = INFINITY;
          }
          in_stack_00000068 = in_stack_00000088;
          in_stack_00000060 = in_stack_00000080;
          in_stack_00000070 = in_stack_00000090;
          uVar4 = FUN_051d5e30(lVar17,0);
          uVar7 = FUN_051d5eb0(lVar17,0);
          in_stack_00000048 = in_stack_00000068;
          in_stack_00000040 = in_stack_00000060;
          in_stack_00000050 = in_stack_00000070;
          if (pcRam0000000007237ef8 == (code *)0x0) {
            pcRam0000000007237ef8 =
                 (code *)FUN_0160ed64(
                                     "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                     );
          }
          uVar8 = (*pcRam0000000007237ef8)(fVar19,lVar17,&stack0x00000040,uVar7 & uVar4);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x29);
          }
          uVar12 = FUN_051d2ac0(uVar8,0,0);
          if ((uVar12 & 1) == 0) {
            iVar5 = FUN_051d662c(lVar17,0);
            if ((iVar5 == 1) || (iVar5 = FUN_051d662c(lVar17,0), iVar5 == 2)) {
              lVar9 = *unaff_x28;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar9 = *unaff_x28;
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
              if (lVar9 != 0) {
                if (1 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x30) = 0;
                  thunk_FUN_01656ef8((undefined8 *)(lVar9 + 0x30),0);
                  lVar9 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
                  if (lVar9 != 0) {
                    if (1 < *(uint *)(lVar9 + 0x18)) {
                      plVar10 = (long *)(lVar9 + 0x38);
                      *plVar10 = 0;
                      lVar9 = 0;
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
            lVar9 = *unaff_x28;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar9 = *unaff_x28;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
            if (lVar9 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_0322d6a0;
            *(undefined8 *)(lVar9 + 0x30) = uVar8;
            thunk_FUN_01656ef8((undefined8 *)(lVar9 + 0x30),uVar8);
            lVar9 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar9 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_0322d6a0;
            plVar10 = (long *)(lVar9 + 0x38);
            *plVar10 = lVar17;
            lVar9 = lVar17;
LAB_0322d450:
            thunk_FUN_01656ef8(plVar10,lVar9);
          }
          in_stack_00000068 = in_stack_00000088;
          in_stack_00000060 = in_stack_00000080;
          in_stack_00000070 = in_stack_00000090;
          uVar4 = FUN_051d5e30(lVar17,0);
          uVar7 = FUN_051d5eb0(lVar17,0);
          in_stack_00000028 = in_stack_00000068;
          in_stack_00000020 = in_stack_00000060;
          in_stack_00000030 = in_stack_00000070;
          if (pcRam0000000007237f00 == (code *)0x0) {
            pcRam0000000007237f00 =
                 (code *)FUN_0160ed64(
                                     "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                     );
          }
          uVar8 = (*pcRam0000000007237f00)(fVar19,lVar17,&stack0x00000020,uVar7 & uVar4);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x29);
          }
          uVar12 = FUN_051d2ac0(uVar8,0,0);
          if ((uVar12 & 1) == 0) {
            iVar5 = FUN_051d662c(lVar17,0);
            if ((iVar5 != 1) && (iVar5 = FUN_051d662c(lVar17,0), iVar5 != 2)) goto LAB_0322d5e0;
            lVar17 = *unaff_x28;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar17 = *unaff_x28;
            }
            lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
            if (lVar17 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0322d6a0;
            *(undefined8 *)(lVar17 + 0x40) = 0;
            thunk_FUN_01656ef8((undefined8 *)(lVar17 + 0x40),0);
            lVar17 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar17 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0322d6a0;
            plVar10 = (long *)(lVar17 + 0x48);
            *plVar10 = 0;
            lVar17 = 0;
          }
          else {
            lVar9 = *unaff_x28;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar9 = *unaff_x28;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
            if (lVar9 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0322d6a0;
            *(undefined8 *)(lVar9 + 0x40) = uVar8;
            thunk_FUN_01656ef8((undefined8 *)(lVar9 + 0x40),uVar8);
            lVar9 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar9 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_0322d6a0;
            plVar10 = (long *)(lVar9 + 0x48);
            *plVar10 = lVar17;
          }
          thunk_FUN_01656ef8(plVar10,lVar17);
        }
      }
      else {
        uVar7 = 0x80000000;
        if (fVar25 != INFINITY) {
          uVar7 = (int)fVar25;
        }
        if (uVar7 == uVar4) {
          iVar5 = FUN_04882f98(0);
          iVar6 = FUN_04882fc0(0);
          if (0 < (int)uVar4) {
            lVar9 = *unaff_x22;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar9 = *unaff_x22;
            }
            lVar14 = **(long **)(lVar9 + 0xb8);
            if (lVar14 == 0) goto LAB_0322d69c;
            if ((int)uVar4 < *(int *)(lVar14 + 0x18)) {
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar14 = **(long **)(*unaff_x22 + 0xb8);
                if (lVar14 == 0) goto LAB_0322d69c;
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar4) goto LAB_0322d6a0;
              lVar9 = *(long *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_0322d69c;
              iVar5 = FUN_051d0fb0(lVar9,0);
              lVar9 = **(long **)(*unaff_x22 + 0xb8);
              if (lVar9 == 0) goto LAB_0322d69c;
              if (*(uint *)(lVar9 + 0x18) <= uVar4) goto LAB_0322d6a0;
              lVar9 = *(long *)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_0322d69c;
              iVar6 = FUN_051d1098(lVar9,0);
            }
          }
          fVar19 = (float)uVar8 / (float)iVar6;
          unaff_x29 = (long *)PTR_DAT_06d9fd78;
          if ((((fVar19 <= 1.0) && (0.0 <= fVar19)) &&
              (fVar18 = (float)uVar20 / (float)iVar5, 0.0 <= fVar18)) &&
             (fVar19 = 1.0, uVar26 = uVar20, uVar27 = uVar8, uVar24 = uVar23, fVar18 <= 1.0))
          goto LAB_0322d1bc;
        }
      }
    }
LAB_0322d5e0:
    uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
    uVar16 = uVar16 + 1;
  } while ((long)uVar16 < (long)(int)*(uint *)(lVar11 + 0x18));
LAB_0322d5f0:
  lVar11 = 0;
  uVar16 = 0;
  while( true ) {
    lVar17 = *unaff_x28;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar17 = *unaff_x28;
    }
    puVar15 = *(undefined1 **)(lVar17 + 0xb8);
    if (*(long *)(puVar15 + 0x18) == 0) break;
    iVar5 = *(int *)(*(long *)(puVar15 + 0x18) + 0x18);
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      puVar15 = *(undefined1 **)(*unaff_x28 + 0xb8);
    }
    if ((long)iVar5 <= (long)uVar16) {
      *puVar15 = 0;
      return;
    }
    lVar17 = *(long *)(puVar15 + 0x18);
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar16) {
LAB_0322d6a0:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    FUN_0322d6a4(uVar16 & 0xffffffff,*(undefined8 *)(lVar17 + lVar11 + 0x20),
                 *(undefined8 *)(lVar17 + lVar11 + 0x28));
    uVar16 = uVar16 + 1;
    lVar11 = lVar11 + 0x10;
  }
LAB_0322d69c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


