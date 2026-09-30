/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 0322d57c
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


void OVRPlugin__RetrieveSpaceQueryResults(void)

{
  undefined1 in_ZR;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  undefined1 *puVar11;
  int unaff_w19;
  ulong uVar12;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 in_s3;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
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
  
code_r0x0322d57c:
  if (!(bool)in_ZR) goto LAB_0322d5e0;
LAB_0322d580:
  lVar6 = *unaff_x28;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar6 = *unaff_x28;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (lVar6 != 0) {
    if (2 < *(uint *)(lVar6 + 0x18)) {
      *(undefined8 *)(lVar6 + 0x40) = 0;
      thunk_FUN_01656ef8((undefined8 *)(lVar6 + 0x40),0);
      lVar6 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
      if (lVar6 != 0) {
        if (2 < *(uint *)(lVar6 + 0x18)) {
          plVar7 = (long *)(lVar6 + 0x48);
          *plVar7 = 0;
          lVar6 = 0;
          do {
            thunk_FUN_01656ef8(plVar7,lVar6);
LAB_0322d5e0:
            do {
              unaff_x21 = unaff_x21 + 1;
              if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x21) {
                lVar6 = 0;
                uVar12 = 0;
                goto LAB_0322d5f8;
              }
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x21) goto LAB_0322d6a0;
              lVar6 = *(long *)(unaff_x20 + unaff_x21 * 8);
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar12 = FUN_051d94d4(lVar6,0,0);
            } while ((uVar12 & 1) != 0);
            if (unaff_w19 == 0) {
              if (lVar6 == 0) goto LAB_0322d69c;
            }
            else {
              if (lVar6 == 0) goto LAB_0322d69c;
              uVar5 = FUN_051d70fc(lVar6,0);
              if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                thunk_FUN_016466fc(*unaff_x29);
              }
              uVar12 = FUN_051d2ac0(uVar5,0,0);
              if ((uVar12 & 1) != 0) goto LAB_0322d5e0;
            }
            uVar1 = FUN_051d71b8(lVar6,0);
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_016466fc(*unaff_x22);
            }
            uVar18 = 0;
            uVar5 = unaff_d9;
            uVar15 = FUN_051d1218(0);
            if (*(char *)(unaff_x27 + 0x13e) == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06e50440);
              *(undefined1 *)(unaff_x27 + 0x13e) = 1;
            }
            pfVar9 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
            fVar13 = (float)uVar15 - *pfVar9;
            fVar16 = (float)uVar5 - pfVar9[1];
            fVar20 = (float)uVar18;
            fVar17 = fVar20 - pfVar9[2];
            uVar21 = unaff_d8;
            uVar22 = unaff_d9;
            uVar19 = 0;
            fVar14 = fStack000000000000001c;
            if (fStack000000000000001c <= fVar17 * fVar17 + fVar13 * fVar13 + fVar16 * fVar16) {
              uVar4 = 0x80000000;
              if (fVar20 != INFINITY) {
                uVar4 = (int)fVar20;
              }
              if (uVar4 != uVar1) goto LAB_0322d5e0;
              iVar2 = FUN_04882f98(0);
              iVar3 = FUN_04882fc0(0);
              if (0 < (int)uVar1) {
                lVar8 = *unaff_x22;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar8 = *unaff_x22;
                }
                lVar10 = **(long **)(lVar8 + 0xb8);
                if (lVar10 == 0) goto LAB_0322d69c;
                if ((int)uVar1 < *(int *)(lVar10 + 0x18)) {
                  if (*(int *)(lVar8 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                    lVar10 = **(long **)(*unaff_x22 + 0xb8);
                    if (lVar10 == 0) goto LAB_0322d69c;
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar1) break;
                  lVar8 = *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar8 == 0) goto LAB_0322d69c;
                  iVar2 = FUN_051d0fb0(lVar8,0);
                  lVar8 = **(long **)(*unaff_x22 + 0xb8);
                  if (lVar8 == 0) goto LAB_0322d69c;
                  if (*(uint *)(lVar8 + 0x18) <= uVar1) break;
                  lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar8 == 0) goto LAB_0322d69c;
                  iVar3 = FUN_051d1098(lVar8,0);
                }
              }
              fVar14 = (float)uVar5 / (float)iVar3;
              unaff_x29 = (long *)PTR_DAT_06d9fd78;
              unaff_w19 = iStack0000000000000018;
              if ((((1.0 < fVar14) || (fVar14 < 0.0)) ||
                  (fVar13 = (float)uVar15 / (float)iVar2, fVar13 < 0.0)) ||
                 (fVar14 = 1.0, uVar21 = uVar15, uVar22 = uVar5, uVar19 = uVar18, 1.0 < fVar13))
              goto LAB_0322d5e0;
            }
            uStack00000000000000a0 = FUN_051d6ed8(lVar6,0);
            fStack00000000000000a4 = fVar14;
            fStack00000000000000a8 = fVar17;
            uStack00000000000000ac = in_s3;
            uVar12 = FUN_051dc270(uVar21,uVar22,uVar19,&stack0x000000a0,0);
            if (((uVar12 & 1) == 0) || (iVar2 = FUN_051d5eb0(lVar6,0), iVar2 == 0))
            goto LAB_0322d5e0;
            FUN_051d81ac(&stack0x00000060,uVar21,uVar22,lVar6,0);
            fVar14 = (float)uVar19;
            in_stack_00000088 = in_stack_00000068;
            in_stack_00000080 = in_stack_00000060;
            in_stack_00000090 = in_stack_00000070;
            FUN_051db578(&stack0x00000080,0);
            if (DAT_0722a469 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06d97918);
              DAT_0722a469 = '\x01';
            }
            in_s3 = 0x41000000;
            fVar13 = ABS(fVar14) * in_stack_00000010._4_4_;
            fVar16 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
            if (fVar13 <= fVar16) {
              fVar13 = fVar16;
            }
            if (fVar13 <= ABS(fVar14)) {
              fVar13 = (float)FUN_051d54c0(lVar6,0);
              fVar16 = (float)FUN_051d5438(lVar6,0);
              fVar14 = ABS((fVar13 - fVar16) / fVar14);
            }
            else {
              fVar14 = INFINITY;
            }
            in_stack_00000068 = in_stack_00000088;
            in_stack_00000060 = in_stack_00000080;
            in_stack_00000070 = in_stack_00000090;
            uVar1 = FUN_051d5e30(lVar6,0);
            uVar4 = FUN_051d5eb0(lVar6,0);
            in_stack_00000048 = in_stack_00000068;
            in_stack_00000040 = in_stack_00000060;
            in_stack_00000050 = in_stack_00000070;
            if (pcRam0000000007237ef8 == (code *)0x0) {
              pcRam0000000007237ef8 =
                   (code *)FUN_0160ed64(
                                       "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                       );
            }
            uVar5 = (*pcRam0000000007237ef8)(fVar14,lVar6,&stack0x00000040,uVar4 & uVar1);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_016466fc(*unaff_x29);
            }
            uVar12 = FUN_051d2ac0(uVar5,0,0);
            if ((uVar12 & 1) == 0) {
              iVar2 = FUN_051d662c(lVar6,0);
              if ((iVar2 == 1) || (iVar2 = FUN_051d662c(lVar6,0), iVar2 == 2)) {
                lVar8 = *unaff_x28;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar8 = *unaff_x28;
                }
                lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
                if (lVar8 != 0) {
                  if (1 < *(uint *)(lVar8 + 0x18)) {
                    *(undefined8 *)(lVar8 + 0x30) = 0;
                    thunk_FUN_01656ef8((undefined8 *)(lVar8 + 0x30),0);
                    lVar8 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
                    if (lVar8 != 0) {
                      if (1 < *(uint *)(lVar8 + 0x18)) {
                        plVar7 = (long *)(lVar8 + 0x38);
                        *plVar7 = 0;
                        lVar8 = 0;
                        goto LAB_0322d450;
                      }
                      break;
                    }
                    goto LAB_0322d69c;
                  }
                  break;
                }
                goto LAB_0322d69c;
              }
            }
            else {
              lVar8 = *unaff_x28;
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar8 = *unaff_x28;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
              if (lVar8 == 0) goto LAB_0322d69c;
              if (*(uint *)(lVar8 + 0x18) < 2) break;
              *(undefined8 *)(lVar8 + 0x30) = uVar5;
              thunk_FUN_01656ef8((undefined8 *)(lVar8 + 0x30),uVar5);
              lVar8 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
              if (lVar8 == 0) goto LAB_0322d69c;
              if (*(uint *)(lVar8 + 0x18) < 2) break;
              plVar7 = (long *)(lVar8 + 0x38);
              *plVar7 = lVar6;
              lVar8 = lVar6;
LAB_0322d450:
              thunk_FUN_01656ef8(plVar7,lVar8);
            }
            in_stack_00000068 = in_stack_00000088;
            in_stack_00000060 = in_stack_00000080;
            in_stack_00000070 = in_stack_00000090;
            uVar1 = FUN_051d5e30(lVar6,0);
            uVar4 = FUN_051d5eb0(lVar6,0);
            in_stack_00000028 = in_stack_00000068;
            in_stack_00000020 = in_stack_00000060;
            in_stack_00000030 = in_stack_00000070;
            if (pcRam0000000007237f00 == (code *)0x0) {
              pcRam0000000007237f00 =
                   (code *)FUN_0160ed64(
                                       "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                       );
            }
            uVar5 = (*pcRam0000000007237f00)(fVar14,lVar6,&stack0x00000020,uVar4 & uVar1);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_016466fc(*unaff_x29);
            }
            uVar12 = FUN_051d2ac0(uVar5,0,0);
            if ((uVar12 & 1) == 0) goto LAB_0322d558;
            lVar8 = *unaff_x28;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar8 = *unaff_x28;
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
            if (lVar8 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar8 + 0x18) < 3) break;
            *(undefined8 *)(lVar8 + 0x40) = uVar5;
            thunk_FUN_01656ef8((undefined8 *)(lVar8 + 0x40),uVar5);
            lVar8 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar8 == 0) goto LAB_0322d69c;
            if (*(uint *)(lVar8 + 0x18) < 3) break;
            plVar7 = (long *)(lVar8 + 0x48);
            *plVar7 = lVar6;
          } while( true );
        }
        goto LAB_0322d6a0;
      }
      goto LAB_0322d69c;
    }
    goto LAB_0322d6a0;
  }
  goto LAB_0322d69c;
LAB_0322d5f8:
  lVar8 = *unaff_x28;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar8 = *unaff_x28;
  }
  puVar11 = *(undefined1 **)(lVar8 + 0xb8);
  if (*(long *)(puVar11 + 0x18) == 0) {
LAB_0322d69c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar2 = *(int *)(*(long *)(puVar11 + 0x18) + 0x18);
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    puVar11 = *(undefined1 **)(*unaff_x28 + 0xb8);
  }
  if ((long)iVar2 <= (long)uVar12) {
    *puVar11 = 0;
    return;
  }
  lVar8 = *(long *)(puVar11 + 0x18);
  if (lVar8 == 0) goto LAB_0322d69c;
  if (*(uint *)(lVar8 + 0x18) <= uVar12) {
LAB_0322d6a0:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  FUN_0322d6a4(uVar12 & 0xffffffff,*(undefined8 *)(lVar8 + lVar6 + 0x20),
               *(undefined8 *)(lVar8 + lVar6 + 0x28));
  uVar12 = uVar12 + 1;
  lVar6 = lVar6 + 0x10;
  goto LAB_0322d5f8;
LAB_0322d558:
  iVar2 = FUN_051d662c(lVar6,0);
  if (iVar2 != 1) goto code_r0x0322d56c;
  goto LAB_0322d580;
code_r0x0322d56c:
  iVar2 = FUN_051d662c(lVar6,0);
  in_ZR = iVar2 == 2;
  goto code_r0x0322d57c;
}


