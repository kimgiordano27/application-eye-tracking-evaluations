/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUuid
ENTRY_POINT: 0322d1e4
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


void OVRPlugin__GetSpaceUuid
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float *pfVar10;
  undefined1 *puVar11;
  int unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar18;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
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
    fVar12 = (float)unaff_d15;
    uVar5 = FUN_051dc270(param_1,param_2,param_3,param_5,param_6);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322d1a0 with catch @ 0322d1e8
                       catch(type#2 @ 00000000) { ... } // from try @ 0322d1d4 with catch @ 0322d1e8
                        */
    if (((uVar5 & 1) != 0) && (iVar2 = FUN_051d5eb0(unaff_x24,0), iVar2 != 0)) {
      FUN_051d81ac(&stack0x00000060,unaff_d13,unaff_d14,unaff_x24,0);
      in_stack_00000088 = in_stack_00000068;
      in_stack_00000080 = in_stack_00000060;
      in_stack_00000090 = in_stack_00000070;
      FUN_051db578(&stack0x00000080,0);
      if (DAT_0722a469 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06d97918);
        DAT_0722a469 = '\x01';
      }
      param_4 = 0x41000000;
      fVar16 = ABS(fVar12) * in_stack_00000010._4_4_;
      fVar13 = **(float **)(*(long *)PTR_DAT_06d97918 + 0xb8) * 8.0;
      if (fVar16 <= fVar13) {
        fVar16 = fVar13;
      }
      if (fVar16 <= ABS(fVar12)) {
        fVar16 = (float)FUN_051d54c0(unaff_x24,0);
        fVar13 = (float)FUN_051d5438(unaff_x24,0);
        fVar12 = ABS((fVar16 - fVar13) / fVar12);
      }
      else {
        fVar12 = INFINITY;
      }
      in_stack_00000068 = in_stack_00000088;
      in_stack_00000060 = in_stack_00000080;
      in_stack_00000070 = in_stack_00000090;
      uVar3 = FUN_051d5e30(unaff_x24,0);
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
      uVar6 = (*pcRam0000000007237ef8)(fVar12,unaff_x24,&stack0x00000040,uVar4 & uVar3);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x29);
      }
      uVar5 = FUN_051d2ac0(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        iVar2 = FUN_051d662c(unaff_x24,0);
        if ((iVar2 == 1) || (iVar2 = FUN_051d662c(unaff_x24,0), iVar2 == 2)) {
          lVar7 = *unaff_x28;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar7 = *unaff_x28;
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_0322d6a0;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            thunk_FUN_01656ef8((undefined8 *)(lVar7 + 0x30),0);
            lVar7 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar7 != 0) {
              if (1 < *(uint *)(lVar7 + 0x18)) {
                plVar8 = (long *)(lVar7 + 0x38);
                *plVar8 = 0;
                lVar7 = 0;
                goto LAB_0322d450;
              }
              goto LAB_0322d6a0;
            }
          }
          goto LAB_0322d69c;
        }
      }
      else {
        lVar7 = *unaff_x28;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar7 = *unaff_x28;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
        if (lVar7 == 0) goto LAB_0322d69c;
        if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_0322d6a0;
        *(undefined8 *)(lVar7 + 0x30) = uVar6;
        thunk_FUN_01656ef8((undefined8 *)(lVar7 + 0x30),uVar6);
        lVar7 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
        if (lVar7 == 0) goto LAB_0322d69c;
        if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_0322d6a0;
        plVar8 = (long *)(lVar7 + 0x38);
        *plVar8 = unaff_x24;
        lVar7 = unaff_x24;
LAB_0322d450:
        thunk_FUN_01656ef8(plVar8,lVar7);
      }
      in_stack_00000068 = in_stack_00000088;
      in_stack_00000060 = in_stack_00000080;
      in_stack_00000070 = in_stack_00000090;
      uVar3 = FUN_051d5e30(unaff_x24,0);
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
      uVar6 = (*pcRam0000000007237f00)(fVar12,unaff_x24,&stack0x00000020,uVar4 & uVar3);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x29);
      }
      uVar5 = FUN_051d2ac0(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        iVar2 = FUN_051d662c(unaff_x24,0);
        if ((iVar2 != 1) && (iVar2 = FUN_051d662c(unaff_x24,0), iVar2 != 2)) goto LAB_0322d5e0;
        lVar7 = *unaff_x28;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar7 = *unaff_x28;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
        if (lVar7 == 0) goto LAB_0322d69c;
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0322d6a0;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        thunk_FUN_01656ef8((undefined8 *)(lVar7 + 0x40),0);
        lVar7 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
        if (lVar7 == 0) goto LAB_0322d69c;
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0322d6a0;
        plVar8 = (long *)(lVar7 + 0x48);
        *plVar8 = 0;
        unaff_x24 = 0;
      }
      else {
        lVar7 = *unaff_x28;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar7 = *unaff_x28;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
        if (lVar7 == 0) goto LAB_0322d69c;
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0322d6a0;
        *(undefined8 *)(lVar7 + 0x40) = uVar6;
        thunk_FUN_01656ef8((undefined8 *)(lVar7 + 0x40),uVar6);
        lVar7 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
        if (lVar7 == 0) goto LAB_0322d69c;
        if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0322d6a0;
        plVar8 = (long *)(lVar7 + 0x48);
        *plVar8 = unaff_x24;
      }
      thunk_FUN_01656ef8(plVar8,unaff_x24);
    }
LAB_0322d5e0:
    do {
      unaff_x21 = unaff_x21 + 1;
      if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)unaff_x21) {
        lVar7 = 0;
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
    }
    else {
      if (unaff_x24 == 0) goto LAB_0322d69c;
      uVar6 = FUN_051d70fc(unaff_x24,0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x29);
      }
      uVar5 = FUN_051d2ac0(uVar6,0,0);
      if ((uVar5 & 1) != 0) goto LAB_0322d5e0;
    }
    uVar3 = FUN_051d71b8(unaff_x24,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_016466fc(*unaff_x22);
    }
    uVar17 = 0;
    uVar6 = unaff_d9;
    uVar14 = FUN_051d1218(0);
    if (*(char *)(unaff_x27 + 0x13e) == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      *(undefined1 *)(unaff_x27 + 0x13e) = 1;
    }
    pfVar10 = *(float **)(*(long *)PTR_DAT_06e50440 + 0xb8);
    fVar16 = (float)uVar14 - *pfVar10;
    fVar13 = (float)uVar6 - pfVar10[1];
    fVar18 = (float)uVar17;
    fVar15 = fVar18 - pfVar10[2];
    param_1 = unaff_d8;
    param_2 = unaff_d9;
    param_3 = 0;
    fVar12 = fStack000000000000001c;
    if (fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13 < fStack000000000000001c)
    goto LAB_0322d1bc;
    uVar4 = 0x80000000;
    if (fVar18 != INFINITY) {
      uVar4 = (int)fVar18;
    }
    if (uVar4 != uVar3) goto LAB_0322d5e0;
    iVar2 = FUN_04882f98(0);
    iVar1 = FUN_04882fc0(0);
    if (0 < (int)uVar3) {
      lVar7 = *unaff_x22;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar7 = *unaff_x22;
      }
      lVar9 = **(long **)(lVar7 + 0xb8);
      if (lVar9 == 0) goto LAB_0322d69c;
      if ((int)uVar3 < *(int *)(lVar9 + 0x18)) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar9 = **(long **)(*unaff_x22 + 0xb8);
          if (lVar9 == 0) goto LAB_0322d69c;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_0322d6a0;
        lVar7 = *(long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0322d69c;
        iVar2 = FUN_051d0fb0(lVar7,0);
        lVar7 = **(long **)(*unaff_x22 + 0xb8);
        if (lVar7 == 0) goto LAB_0322d69c;
        if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_0322d6a0;
        lVar7 = *(long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0322d69c;
        iVar1 = FUN_051d1098(lVar7,0);
      }
    }
    fVar12 = (float)uVar6 / (float)iVar1;
    unaff_x29 = (long *)PTR_DAT_06d9fd78;
    unaff_w19 = iStack0000000000000018;
    if ((((1.0 < fVar12) || (fVar12 < 0.0)) || (fVar16 = (float)uVar14 / (float)iVar2, fVar16 < 0.0)
        ) || (fVar12 = 1.0, param_1 = uVar14, param_2 = uVar6, param_3 = uVar17, 1.0 < fVar16))
    goto LAB_0322d5e0;
LAB_0322d1bc:
    uStack00000000000000a0 = FUN_051d6ed8(unaff_x24,0);
    fStack00000000000000a4 = fVar12;
    param_5 = (undefined8 *)&stack0x000000a0;
    param_6 = 0;
    unaff_d13 = param_1;
    unaff_d14 = param_2;
    unaff_d15 = param_3;
    fStack00000000000000a8 = fVar15;
    uStack00000000000000ac = param_4;
  } while( true );
LAB_0322d5f8:
  lVar9 = *unaff_x28;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar9 = *unaff_x28;
  }
  puVar11 = *(undefined1 **)(lVar9 + 0xb8);
  if (*(long *)(puVar11 + 0x18) == 0) {
LAB_0322d69c:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar2 = *(int *)(*(long *)(puVar11 + 0x18) + 0x18);
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    puVar11 = *(undefined1 **)(*unaff_x28 + 0xb8);
  }
  if ((long)iVar2 <= (long)uVar5) {
    *puVar11 = 0;
    return;
  }
  lVar9 = *(long *)(puVar11 + 0x18);
  if (lVar9 == 0) goto LAB_0322d69c;
  if (*(uint *)(lVar9 + 0x18) <= uVar5) {
LAB_0322d6a0:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  FUN_0322d6a4(uVar5 & 0xffffffff,*(undefined8 *)(lVar9 + lVar7 + 0x20),
               *(undefined8 *)(lVar9 + lVar7 + 0x28));
  uVar5 = uVar5 + 1;
  lVar7 = lVar7 + 0x10;
  goto LAB_0322d5f8;
}


