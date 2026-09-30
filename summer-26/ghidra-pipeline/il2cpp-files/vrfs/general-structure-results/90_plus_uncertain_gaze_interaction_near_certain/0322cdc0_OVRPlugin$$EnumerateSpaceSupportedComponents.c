/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 0322cdc0
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


void OVRPlugin__EnumerateSpaceSupportedComponents(long param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  int unaff_w19;
  ulong uVar19;
  long *unaff_x28;
  long *plVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 in_s3;
  uint uVar27;
  uint uVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
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
  
  uVar27 = *(uint *)(param_1 + 0x30);
  uVar28 = *(uint *)(param_1 + 0x34);
  iVar4 = FUN_051d8e54();
  lVar12 = *unaff_x28;
  lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x20);
  if (lVar18 == 0) {
LAB_0322ce08:
    uVar8 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06e57dc8,iVar4);
    lVar12 = *unaff_x28;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar12);
      lVar12 = *unaff_x28;
    }
    puVar9 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x20);
    *puVar9 = uVar8;
    thunk_FUN_01656ef8(puVar9,uVar8);
    lVar12 = *unaff_x28;
  }
  else {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_016466fc(lVar12);
      lVar12 = *unaff_x28;
      lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x20);
      if (lVar18 == 0) {
LAB_0322d69c:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
    if (iVar4 != *(int *)(lVar18 + 0x18)) goto LAB_0322ce08;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_016466fc(lVar12);
    lVar12 = *unaff_x28;
  }
  puVar3 = PTR_DAT_06da0418;
  plVar20 = (long *)PTR_DAT_06d9fd78;
  FUN_051d8f1c(*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x20),0);
  uVar19 = 0;
  lVar12 = 0x20;
  while( true ) {
    lVar18 = *unaff_x28;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar18 = *unaff_x28;
    }
    pcVar13 = *(char **)(lVar18 + 0xb8);
    if (*(long *)(pcVar13 + 0x18) == 0) goto LAB_0322d69c;
    iVar4 = *(int *)(*(long *)(pcVar13 + 0x18) + 0x18);
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar18 = *unaff_x28;
      pcVar13 = *(char **)(lVar18 + 0xb8);
    }
    if ((long)iVar4 <= (long)uVar19) {
      if (*pcVar13 != '\0') goto LAB_0322d5f0;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        pcVar13 = *(char **)(*unaff_x28 + 0xb8);
      }
      fVar2 = DAT_0534bf7c;
      fVar1 = DAT_0534bb40;
      lVar12 = *(long *)(pcVar13 + 0x20);
      if (lVar12 == 0) goto LAB_0322d69c;
      if ((int)*(ulong *)(lVar12 + 0x18) < 1) goto LAB_0322d5f0;
      uVar19 = 0;
      uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      goto LAB_0322cf4c;
    }
    lVar18 = *(long *)(pcVar13 + 0x18);
    if (lVar18 == 0) goto LAB_0322d69c;
    if (*(uint *)(lVar18 + 0x18) <= uVar19) break;
    puVar9 = (undefined8 *)(lVar18 + lVar12);
    uVar19 = uVar19 + 1;
    lVar12 = lVar12 + 0x10;
    *puVar9 = 0;
    puVar9[1] = 0;
  }
LAB_0322d6a0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
LAB_0322cf4c:
  do {
    if (uVar14 <= uVar19) goto LAB_0322d6a0;
    lVar18 = *(long *)(lVar12 + 0x20 + uVar19 * 8);
    if (*(int *)(*plVar20 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar14 = FUN_051d94d4(lVar18,0,0);
    if ((uVar14 & 1) == 0) {
      if (unaff_w19 == 0) {
        if (lVar18 == 0) goto LAB_0322d69c;
      }
      else {
        if (lVar18 == 0) goto LAB_0322d69c;
        uVar8 = FUN_051d70fc(lVar18,0);
        if (*(int *)(*plVar20 + 0xe0) == 0) {
          thunk_FUN_016466fc(*plVar20);
        }
        uVar14 = FUN_051d2ac0(uVar8,0,0);
        if ((uVar14 & 1) != 0) goto LAB_0322d5e0;
      }
      uVar5 = FUN_051d71b8(lVar18,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar3);
      }
      uVar8 = 0;
      uVar14 = (ulong)uVar28;
      uVar23 = FUN_051d1218((ulong)uVar27,0);
      if (DAT_0722a13e == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e50440);
        DAT_0722a13e = '\x01';
      }
      pfVar15 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
      fVar21 = (float)uVar23 - *pfVar15;
      fVar24 = (float)uVar14 - pfVar15[1];
      fVar29 = (float)uVar8;
      fVar25 = fVar29 - pfVar15[2];
      uVar30 = (ulong)uVar27;
      uVar31 = (ulong)uVar28;
      uVar26 = 0;
      fVar22 = fVar2;
      if (fVar25 * fVar25 + fVar21 * fVar21 + fVar24 * fVar24 < fVar2) {
LAB_0322d1bc:
        uStack00000000000000a0 = FUN_051d6ed8(lVar18,0);
        fStack00000000000000a4 = fVar22;
        fStack00000000000000a8 = fVar25;
        uStack00000000000000ac = in_s3;
        uVar14 = FUN_051dc270(uVar30,uVar31,uVar26,&stack0x000000a0,0);
        if (((uVar14 & 1) != 0) && (iVar4 = FUN_051d5eb0(lVar18,0), iVar4 != 0)) {
          FUN_051d81ac(&stack0x00000060,uVar30,uVar31,lVar18,0);
          fVar22 = (float)uVar26;
          in_stack_00000088 = in_stack_00000068;
          in_stack_00000080 = in_stack_00000060;
          in_stack_00000090 = in_stack_00000070;
          FUN_051db578(&stack0x00000080,0);
          if (DAT_0722a469 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06d97918);
            DAT_0722a469 = '\x01';
          }
          in_s3 = 0x41000000;
          fVar21 = ABS(fVar22) * fVar1;
          fVar24 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
          if (fVar21 <= fVar24) {
            fVar21 = fVar24;
          }
          if (fVar21 <= ABS(fVar22)) {
            fVar21 = (float)FUN_051d54c0(lVar18,0);
            fVar24 = (float)FUN_051d5438(lVar18,0);
            fVar22 = ABS((fVar21 - fVar24) / fVar22);
          }
          else {
            fVar22 = INFINITY;
          }
          in_stack_00000068 = in_stack_00000088;
          in_stack_00000060 = in_stack_00000080;
          in_stack_00000070 = in_stack_00000090;
          uVar5 = FUN_051d5e30(lVar18,0);
          uVar7 = FUN_051d5eb0(lVar18,0);
          in_stack_00000048 = in_stack_00000068;
          in_stack_00000040 = in_stack_00000060;
          in_stack_00000050 = in_stack_00000070;
          if (pcRam0000000007237ef8 == (code *)0x0) {
            pcRam0000000007237ef8 =
                 (code *)FUN_0160ed64(
                                     "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                     );
          }
          uVar8 = (*pcRam0000000007237ef8)(fVar22,lVar18,&stack0x00000040,uVar7 & uVar5);
          if (*(int *)(*plVar20 + 0xe0) == 0) {
            thunk_FUN_016466fc(*plVar20);
          }
          uVar14 = FUN_051d2ac0(uVar8,0,0);
          if ((uVar14 & 1) == 0) {
            iVar4 = FUN_051d662c(lVar18,0);
            if ((iVar4 == 1) || (iVar4 = FUN_051d662c(lVar18,0), iVar4 == 2)) {
              lVar10 = *unaff_x28;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar10 = *unaff_x28;
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
              if (lVar10 != 0) {
                if (1 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x30) = 0;
                  thunk_FUN_01656ef8((undefined8 *)(lVar10 + 0x30),0);
                  lVar10 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
                  if (lVar10 != 0) {
                    if (1 < *(uint *)(lVar10 + 0x18)) {
                      plVar11 = (long *)(lVar10 + 0x38);
                      *plVar11 = 0;
                      lVar10 = 0;
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
            lVar10 = *unaff_x28;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar10 = *unaff_x28;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
            if (lVar10 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0322d6a0;
            *(undefined8 *)(lVar10 + 0x30) = uVar8;
            thunk_FUN_01656ef8((undefined8 *)(lVar10 + 0x30),uVar8);
            lVar10 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar10 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_0322d6a0;
            plVar11 = (long *)(lVar10 + 0x38);
            *plVar11 = lVar18;
            lVar10 = lVar18;
LAB_0322d450:
            thunk_FUN_01656ef8(plVar11,lVar10);
          }
          in_stack_00000068 = in_stack_00000088;
          in_stack_00000060 = in_stack_00000080;
          in_stack_00000070 = in_stack_00000090;
          uVar5 = FUN_051d5e30(lVar18,0);
          uVar7 = FUN_051d5eb0(lVar18,0);
          in_stack_00000028 = in_stack_00000068;
          in_stack_00000020 = in_stack_00000060;
          in_stack_00000030 = in_stack_00000070;
          if (pcRam0000000007237f00 == (code *)0x0) {
            pcRam0000000007237f00 =
                 (code *)FUN_0160ed64(
                                     "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                     );
          }
          uVar8 = (*pcRam0000000007237f00)(fVar22,lVar18,&stack0x00000020,uVar7 & uVar5);
          if (*(int *)(*plVar20 + 0xe0) == 0) {
            thunk_FUN_016466fc(*plVar20);
          }
          uVar14 = FUN_051d2ac0(uVar8,0,0);
          if ((uVar14 & 1) == 0) {
            iVar4 = FUN_051d662c(lVar18,0);
            if ((iVar4 != 1) && (iVar4 = FUN_051d662c(lVar18,0), iVar4 != 2)) goto LAB_0322d5e0;
            lVar18 = *unaff_x28;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar18 = *unaff_x28;
            }
            lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x18);
            if (lVar18 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_0322d6a0;
            *(undefined8 *)(lVar18 + 0x40) = 0;
            thunk_FUN_01656ef8((undefined8 *)(lVar18 + 0x40),0);
            lVar18 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar18 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar18 + 0x18) < 3) goto LAB_0322d6a0;
            plVar11 = (long *)(lVar18 + 0x48);
            *plVar11 = 0;
            lVar18 = 0;
          }
          else {
            lVar10 = *unaff_x28;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar10 = *unaff_x28;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
            if (lVar10 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_0322d6a0;
            *(undefined8 *)(lVar10 + 0x40) = uVar8;
            thunk_FUN_01656ef8((undefined8 *)(lVar10 + 0x40),uVar8);
            lVar10 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar10 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_0322d6a0;
            plVar11 = (long *)(lVar10 + 0x48);
            *plVar11 = lVar18;
          }
          thunk_FUN_01656ef8(plVar11,lVar18);
        }
      }
      else {
        uVar7 = 0x80000000;
        if (fVar29 != INFINITY) {
          uVar7 = (int)fVar29;
        }
        if (uVar7 == uVar5) {
          iVar4 = FUN_04882f98(0);
          iVar6 = FUN_04882fc0(0);
          if (0 < (int)uVar5) {
            lVar10 = *(long *)puVar3;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar10 = *(long *)puVar3;
            }
            lVar16 = **(long **)(lVar10 + 0xb8);
            if (lVar16 == 0) goto LAB_0322d69c;
            if ((int)uVar5 < *(int *)(lVar16 + 0x18)) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar16 = **(long **)(*(long *)puVar3 + 0xb8);
                if (lVar16 == 0) goto LAB_0322d69c;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_0322d6a0;
              lVar10 = *(long *)(lVar16 + (long)(int)uVar5 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_0322d69c;
              iVar4 = FUN_051d0fb0(lVar10,0);
              lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
              if (lVar10 == 0) goto LAB_0322d69c;
              if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_0322d6a0;
              lVar10 = *(long *)(lVar10 + (long)(int)uVar5 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_0322d69c;
              iVar6 = FUN_051d1098(lVar10,0);
            }
          }
          fVar22 = (float)uVar14 / (float)iVar6;
          plVar20 = (long *)PTR_DAT_06d9fd78;
          if ((((fVar22 <= 1.0) && (0.0 <= fVar22)) &&
              (fVar21 = (float)uVar23 / (float)iVar4, 0.0 <= fVar21)) &&
             (fVar22 = 1.0, uVar30 = uVar23, uVar31 = uVar14, uVar26 = uVar8, fVar21 <= 1.0))
          goto LAB_0322d1bc;
        }
      }
    }
LAB_0322d5e0:
    uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
    uVar19 = uVar19 + 1;
  } while ((long)uVar19 < (long)(int)*(uint *)(lVar12 + 0x18));
LAB_0322d5f0:
  lVar12 = 0;
  uVar19 = 0;
  while( true ) {
    lVar18 = *unaff_x28;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar18 = *unaff_x28;
    }
    puVar17 = *(undefined1 **)(lVar18 + 0xb8);
    if (*(long *)(puVar17 + 0x18) == 0) goto LAB_0322d69c;
    iVar4 = *(int *)(*(long *)(puVar17 + 0x18) + 0x18);
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      puVar17 = *(undefined1 **)(*unaff_x28 + 0xb8);
    }
    if ((long)iVar4 <= (long)uVar19) {
      *puVar17 = 0;
      return;
    }
    lVar18 = *(long *)(puVar17 + 0x18);
    if (lVar18 == 0) goto LAB_0322d69c;
    if (*(uint *)(lVar18 + 0x18) <= uVar19) break;
    FUN_0322d6a4(uVar19 & 0xffffffff,*(undefined8 *)(lVar18 + lVar12 + 0x20),
                 *(undefined8 *)(lVar18 + lVar12 + 0x28));
    uVar19 = uVar19 + 1;
    lVar12 = lVar12 + 0x10;
  }
  goto LAB_0322d6a0;
}


