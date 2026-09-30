/*
FUNCTION_NAME: OVRPlugin$$EraseSpaceWithResult
ENTRY_POINT: 0322d108
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


void OVRPlugin__EraseSpaceWithResult
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  undefined1 *puVar12;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  long *unaff_x28;
  long *unaff_x29;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  float fVar19;
  undefined8 unaff_d12;
  undefined8 uVar20;
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
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
code_r0x0322d108:
  if (*(uint *)(param_1 + 0x18) <= unaff_w25) goto LAB_0322d6a0;
  lVar6 = *(long *)(param_1 + (long)(int)unaff_w25 * 8 + 0x20);
  if (lVar6 != 0) {
                    /* try { // try from 0322d128 to 0332d12b has its CatchHandler @ 0322d134 */
    iVar2 = FUN_051d0fb0(lVar6,0);
                    /* try { // try from 0322d12c to 0332d157 has its CatchHandler @ 0322cc90 */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322d128 with catch @ 0322d134
                        */
    lVar6 = **(long **)(*unaff_x29 + 0xb8);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322d05c with catch @ 0322d138
                        */
    if (lVar6 != 0) {
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322cfa0 with catch @ 0322d13c
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0322cfe0 with catch @ 0322d140
                        */
      if (*(uint *)(lVar6 + 0x18) <= unaff_w25) goto LAB_0322d6a0;
      lVar6 = *(long *)(lVar6 + (long)(int)unaff_w25 * 8 + 0x20);
      if (lVar6 != 0) {
                    /* try { // try from 0322d158 to 0332d15b has its CatchHandler @ 0322d1dc */
        iVar3 = FUN_051d1098(lVar6,0);
LAB_0322d164:
        puVar1 = PTR_DAT_06d9fd78;
        fVar13 = (float)unaff_d11 / (float)iVar3;
        if (1.0 < fVar13) goto LAB_0322d5e0;
        if (fVar13 < 0.0) goto LAB_0322d5e0;
        fVar13 = (float)unaff_d10 / (float)iVar2;
                    /* try { // try from 0322d1a0 to 0332d1c7 has its CatchHandler @ 0322d1e8 */
        if (fVar13 < 0.0) goto LAB_0322d5e0;
        fVar17 = 1.0;
        uVar8 = unaff_d10;
        uVar20 = unaff_d11;
        uVar18 = unaff_d12;
        if (1.0 < fVar13) goto LAB_0322d5e0;
        do {
          uVar16 = (undefined4)param_4;
          uStack00000000000000a0 = FUN_051d6ed8(unaff_x24,0);
          fStack00000000000000a4 = fVar17;
                    /* try { // try from 0322d1c8 to 0332d1d3 has its CatchHandler @ 0322cc90 */
          uStack00000000000000a8 = uVar16;
          uStack00000000000000ac = param_5;
                    /* try { // try from 0322d1d4 to 0332d1db has its CatchHandler @ 0322d1e8 */
                    /* catch() { ... } // from try @ 0322d158 with catch @ 0322d1dc */
          uVar7 = FUN_051dc270(uVar8,uVar20,uVar18,&stack0x000000a0,0);
          if (((uVar7 & 1) != 0) && (iVar2 = FUN_051d5eb0(unaff_x24,0), iVar2 != 0)) {
            FUN_051d81ac(&stack0x00000060,uVar8,uVar20,unaff_x24,0);
            fVar13 = (float)uVar18;
            in_stack_00000088 = in_stack_00000068;
            in_stack_00000080 = in_stack_00000060;
            in_stack_00000090 = in_stack_00000070;
            FUN_051db578(&stack0x00000080,0);
            if (DAT_0722a469 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06d97918);
              DAT_0722a469 = '\x01';
            }
            param_5 = 0x41000000;
            fVar17 = ABS(fVar13) * in_stack_00000010._4_4_;
            fVar14 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
            if (fVar17 <= fVar14) {
              fVar17 = fVar14;
            }
            if (fVar17 <= ABS(fVar13)) {
              fVar17 = (float)FUN_051d54c0(unaff_x24,0);
              fVar14 = (float)FUN_051d5438(unaff_x24,0);
              fVar13 = ABS((fVar17 - fVar14) / fVar13);
            }
            else {
              fVar13 = INFINITY;
            }
            in_stack_00000068 = in_stack_00000088;
            in_stack_00000060 = in_stack_00000080;
            in_stack_00000070 = in_stack_00000090;
            uVar4 = FUN_051d5e30(unaff_x24,0);
            uVar5 = FUN_051d5eb0(unaff_x24,0);
            in_stack_00000048 = in_stack_00000068;
            in_stack_00000040 = in_stack_00000060;
            in_stack_00000050 = in_stack_00000070;
            if (pcRam0000000007237ef8 == (code *)0x0) {
              pcRam0000000007237ef8 =
                   (code *)FUN_0160ed64(
                                       "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                       );
            }
            uVar8 = (*pcRam0000000007237ef8)(fVar13,unaff_x24,&stack0x00000040,uVar5 & uVar4);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc(*(long *)puVar1);
            }
            uVar7 = FUN_051d2ac0(uVar8,0,0);
            if ((uVar7 & 1) == 0) {
              iVar2 = FUN_051d662c(unaff_x24,0);
              if ((iVar2 == 1) || (iVar2 = FUN_051d662c(unaff_x24,0), iVar2 == 2)) {
                lVar6 = *unaff_x28;
                if (*(int *)(lVar6 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar6 = *unaff_x28;
                }
                lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
                if (lVar6 != 0) {
                  if (1 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x30) = 0;
                    thunk_FUN_01656ef8((undefined8 *)(lVar6 + 0x30),0);
                    lVar6 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
                    if (lVar6 != 0) {
                      if (1 < *(uint *)(lVar6 + 0x18)) {
                        plVar9 = (long *)(lVar6 + 0x38);
                        *plVar9 = 0;
                        lVar6 = 0;
                        goto LAB_0322d450;
                      }
                      goto LAB_0322d6a0;
                    }
                    break;
                  }
                  goto LAB_0322d6a0;
                }
                break;
              }
            }
            else {
              lVar6 = *unaff_x28;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar6 = *unaff_x28;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
              if (lVar6 == 0) break;
              if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0322d6a0;
              *(undefined8 *)(lVar6 + 0x30) = uVar8;
              thunk_FUN_01656ef8((undefined8 *)(lVar6 + 0x30),uVar8);
              lVar6 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
              if (lVar6 == 0) break;
              if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0322d6a0;
              plVar9 = (long *)(lVar6 + 0x38);
              *plVar9 = unaff_x24;
              lVar6 = unaff_x24;
LAB_0322d450:
              thunk_FUN_01656ef8(plVar9,lVar6);
            }
            in_stack_00000068 = in_stack_00000088;
            in_stack_00000060 = in_stack_00000080;
            in_stack_00000070 = in_stack_00000090;
            uVar4 = FUN_051d5e30(unaff_x24,0);
            uVar5 = FUN_051d5eb0(unaff_x24,0);
            in_stack_00000028 = in_stack_00000068;
            in_stack_00000020 = in_stack_00000060;
            in_stack_00000030 = in_stack_00000070;
            if (pcRam0000000007237f00 == (code *)0x0) {
              pcRam0000000007237f00 =
                   (code *)FUN_0160ed64(
                                       "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                       );
            }
            uVar8 = (*pcRam0000000007237f00)(fVar13,unaff_x24,&stack0x00000020,uVar5 & uVar4);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc(*(long *)puVar1);
            }
            uVar7 = FUN_051d2ac0(uVar8,0,0);
            if ((uVar7 & 1) == 0) {
              iVar2 = FUN_051d662c(unaff_x24,0);
              if ((iVar2 != 1) && (iVar2 = FUN_051d662c(unaff_x24,0), iVar2 != 2))
              goto LAB_0322d5e0;
              lVar6 = *unaff_x28;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar6 = *unaff_x28;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
              if (lVar6 == 0) break;
              if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0322d6a0;
              *(undefined8 *)(lVar6 + 0x40) = 0;
              thunk_FUN_01656ef8((undefined8 *)(lVar6 + 0x40),0);
              lVar6 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
              if (lVar6 == 0) break;
              if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0322d6a0;
              plVar9 = (long *)(lVar6 + 0x48);
              *plVar9 = 0;
              unaff_x24 = 0;
            }
            else {
              lVar6 = *unaff_x28;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar6 = *unaff_x28;
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
              if (lVar6 == 0) break;
              if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0322d6a0;
              *(undefined8 *)(lVar6 + 0x40) = uVar8;
              thunk_FUN_01656ef8((undefined8 *)(lVar6 + 0x40),uVar8);
              lVar6 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
              if (lVar6 == 0) break;
              if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0322d6a0;
              plVar9 = (long *)(lVar6 + 0x48);
              *plVar9 = unaff_x24;
            }
            thunk_FUN_01656ef8(plVar9,unaff_x24);
          }
LAB_0322d5e0:
          do {
            unaff_x21 = unaff_x21 + 1;
            if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x21) {
              lVar6 = 0;
              uVar7 = 0;
              goto LAB_0322d5f8;
            }
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x21) goto LAB_0322d6a0;
            unaff_x24 = *(long *)(unaff_x20 + unaff_x21 * 8);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar7 = FUN_051d94d4(unaff_x24,0,0);
          } while ((uVar7 & 1) != 0);
          if (iStack0000000000000018 == 0) {
            if (unaff_x24 == 0) break;
          }
          else {
            if (unaff_x24 == 0) break;
            uVar8 = FUN_051d70fc(unaff_x24,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc(*(long *)puVar1);
            }
            uVar7 = FUN_051d2ac0(uVar8,0,0);
            if ((uVar7 & 1) != 0) goto LAB_0322d5e0;
          }
          unaff_w25 = FUN_051d71b8(unaff_x24,0);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x29);
          }
          unaff_d12 = 0;
          unaff_d11 = unaff_d9;
          unaff_d10 = FUN_051d1218(0);
          if (*(char *)(unaff_x19 + 0x13e) == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e50440);
            *(undefined1 *)(unaff_x19 + 0x13e) = 1;
          }
          pfVar11 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
          fVar13 = (float)unaff_d10 - *pfVar11;
          fVar14 = (float)unaff_d11 - pfVar11[1];
          fVar19 = (float)unaff_d12;
          fVar15 = fVar19 - pfVar11[2];
          param_4 = (ulong)(uint)fVar15;
          uVar8 = unaff_d8;
          uVar20 = unaff_d9;
          uVar18 = 0;
          fVar17 = fStack000000000000001c;
          if (fStack000000000000001c <= fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14) {
            uVar4 = 0x80000000;
            if (fVar19 != INFINITY) {
              uVar4 = (int)fVar19;
            }
            if (uVar4 == unaff_w25) {
              iVar2 = FUN_04882f98(0);
              iVar3 = FUN_04882fc0(0);
              if ((int)unaff_w25 < 1) goto LAB_0322d164;
              lVar6 = *unaff_x29;
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar6 = *unaff_x29;
              }
              param_1 = **(long **)(lVar6 + 0xb8);
              if (param_1 == 0) break;
              if (*(int *)(param_1 + 0x18) <= (int)unaff_w25) goto LAB_0322d164;
              if (*(int *)(lVar6 + 0xe0) != 0) goto code_r0x0322d108;
              thunk_FUN_016466fc();
              param_1 = **(long **)(*unaff_x29 + 0xb8);
              if (param_1 != 0) goto code_r0x0322d108;
              break;
            }
            goto LAB_0322d5e0;
          }
        } while( true );
      }
    }
  }
LAB_0322d69c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
LAB_0322d5f8:
  lVar10 = *unaff_x28;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar10 = *unaff_x28;
  }
  puVar12 = *(undefined1 **)(lVar10 + 0xb8);
  if (*(long *)(puVar12 + 0x18) == 0) goto LAB_0322d69c;
  iVar2 = *(int *)(*(long *)(puVar12 + 0x18) + 0x18);
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    puVar12 = *(undefined1 **)(*unaff_x28 + 0xb8);
  }
  if ((long)iVar2 <= (long)uVar7) {
    *puVar12 = 0;
    return;
  }
  lVar10 = *(long *)(puVar12 + 0x18);
  if (lVar10 == 0) goto LAB_0322d69c;
  if (*(uint *)(lVar10 + 0x18) <= uVar7) {
LAB_0322d6a0:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  FUN_0322d6a4(uVar7 & 0xffffffff,*(undefined8 *)(lVar10 + lVar6 + 0x20),
               *(undefined8 *)(lVar10 + lVar6 + 0x28));
  uVar7 = uVar7 + 1;
  lVar6 = lVar6 + 0x10;
  goto LAB_0322d5f8;
}


