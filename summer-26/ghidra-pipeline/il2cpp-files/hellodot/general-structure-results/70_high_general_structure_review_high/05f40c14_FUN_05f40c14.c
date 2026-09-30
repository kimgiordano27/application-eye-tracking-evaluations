/*
FUNCTION_NAME: FUN_05f40c14
ENTRY_POINT: 05f40c14
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_05f40c14(int param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float in_s3;
  uint uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  float local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  float local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  float local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  
  puVar6 = Niantic_Peridot_Telemetry_CreatureMetadata_TypeInfo;
  if ((DAT_06a80a4a & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e0ed8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0663ac98);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Telemetry_CreatureMetadata_TypeInfo);
    DAT_06a80a4a = 1;
  }
  local_a8 = 0;
  local_b0 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05f409f4();
  uVar29 = *(uint *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x30);
  uVar31 = *(uint *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x34);
  iVar9 = FUN_05eb1020(0);
  lVar15 = *(long *)puVar6;
  lVar21 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x20);
  if (lVar21 == 0) {
LAB_05f40d00:
    uVar13 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065e0ed8,iVar9);
    lVar15 = *(long *)puVar6;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar15);
      lVar15 = *(long *)puVar6;
    }
    *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x20) = uVar13;
  }
  else {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar15);
      lVar15 = *(long *)puVar6;
      lVar21 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x20);
      if (lVar21 == 0) {
LAB_05f41574:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
    }
    if (iVar9 != *(int *)(lVar21 + 0x18)) goto LAB_05f40d00;
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar15);
    lVar15 = *(long *)puVar6;
  }
  FUN_05eb10e8(*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x20),0);
  uVar22 = 0;
  lVar15 = 0x20;
  while( true ) {
    lVar21 = *(long *)puVar6;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar21 = *(long *)puVar6;
    }
    pcVar16 = *(char **)(lVar21 + 0xb8);
    if (*(long *)(pcVar16 + 0x18) == 0) goto LAB_05f41574;
    iVar9 = *(int *)(*(long *)(pcVar16 + 0x18) + 0x18);
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar21 = *(long *)puVar6;
      pcVar16 = *(char **)(lVar21 + 0xb8);
    }
    if ((long)iVar9 <= (long)uVar22) {
      if (*pcVar16 != '\0') goto LAB_05f414c8;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        pcVar16 = *(char **)(*(long *)puVar6 + 0xb8);
      }
      puVar4 = PTR_DAT_065c8c40;
      fVar3 = DAT_013de160;
      fVar2 = DAT_013ddaf8;
      lVar15 = *(long *)(pcVar16 + 0x20);
      if (lVar15 == 0) goto LAB_05f41574;
      if ((int)*(ulong *)(lVar15 + 0x18) < 1) goto LAB_05f414c8;
      uVar22 = 0;
      uVar17 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      plVar23 = (long *)PTR_DAT_0663ac98;
      goto LAB_05f40e3c;
    }
    lVar21 = *(long *)(pcVar16 + 0x18);
    if (lVar21 == 0) goto LAB_05f41574;
    if (*(uint *)(lVar21 + 0x18) <= uVar22) break;
    puVar1 = (undefined8 *)(lVar21 + lVar15);
    uVar22 = uVar22 + 1;
    lVar15 = lVar15 + 0x10;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
LAB_05f41578:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
LAB_05f40e3c:
  do {
    if (uVar17 <= uVar22) goto LAB_05f41578;
    lVar21 = *(long *)(lVar15 + 0x20 + uVar22 * 8);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar17 = FUN_05ef739c(lVar21,0,0);
    if ((uVar17 & 1) == 0) {
      if (param_1 == 0) {
        if (lVar21 == 0) goto LAB_05f41574;
      }
      else {
        if (lVar21 == 0) goto LAB_05f41574;
        uVar13 = FUN_05eb0114(lVar21,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)puVar4);
        }
        uVar17 = FUN_05ef59b8(uVar13,0,0);
        if ((uVar17 & 1) != 0) goto LAB_05f414b8;
      }
      uVar10 = FUN_05eb01d0(lVar21,0);
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*plVar23);
      }
      uVar32 = (ulong)uVar31;
      uVar30 = (ulong)uVar29;
      uVar13 = 0;
      uVar17 = uVar32;
      uVar26 = FUN_05eba550(uVar30,0);
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
        DAT_06a67148 = '\x01';
      }
      pfVar18 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
      fVar24 = (float)uVar26 - *pfVar18;
      fVar27 = (float)uVar17 - pfVar18[1];
      fVar33 = (float)uVar13;
      fVar28 = fVar33 - pfVar18[2];
      uVar34 = 0;
      fVar25 = fVar2;
      if (fVar28 * fVar28 + fVar24 * fVar24 + fVar27 * fVar27 < fVar2) {
LAB_05f410dc:
        fVar24 = (float)FUN_05eaff2c(lVar21,0);
        in_s3 = fVar25 + in_s3;
        if ((((float)uVar32 < in_s3) && (fVar25 <= (float)uVar32)) &&
           ((fVar24 <= (float)uVar30 &&
            (((float)uVar30 < fVar24 + fVar28 && (iVar9 = FUN_05eafb10(lVar21,0), iVar9 != 0)))))) {
          FUN_05eb0b7c(&local_c8,uVar30,uVar32,uVar34,lVar21,0);
          fVar25 = local_b4;
          uVar8 = uStack_b8;
          uVar7 = local_bc;
          local_b0 = local_c8;
          local_a8 = local_c0;
          if (DAT_06a67231 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9f70);
            DAT_06a67231 = '\x01';
          }
          in_s3 = 8.0;
          fVar24 = ABS(fVar25) * fVar3;
          fVar27 = **(float **)(*(long *)PTR_DAT_065c9f70 + 0xb8) * 8.0;
          if (fVar24 <= fVar27) {
            fVar24 = fVar27;
          }
          if (fVar24 <= ABS(fVar25)) {
            fVar24 = (float)FUN_05eaf678(lVar21,0);
            fVar27 = (float)FUN_05eaf5f0(lVar21,0);
            fVar24 = ABS((fVar24 - fVar27) / fVar25);
          }
          else {
            fVar24 = INFINITY;
          }
          uVar10 = FUN_05eafa90(lVar21,0);
          uVar12 = FUN_05eafb10(lVar21,0);
          local_d4 = uVar7;
          uStack_d0 = uVar8;
          local_e0 = local_b0;
          local_d8 = local_a8;
          local_cc = fVar25;
          if (DAT_06a80980 == (code *)0x0) {
            DAT_06a80980 = (code *)FUN_02ce79f8(
                                               "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                               );
          }
          uVar13 = (*DAT_06a80980)(fVar24,lVar21,&local_e0,uVar12 & uVar10);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)puVar4);
          }
          uVar17 = FUN_05ef59b8(uVar13,0,0);
          if ((uVar17 & 1) == 0) {
            iVar9 = FUN_05eafcbc(lVar21,0);
            if ((iVar9 == 1) || (iVar9 = FUN_05eafcbc(lVar21,0), iVar9 == 2)) {
              lVar14 = *(long *)puVar6;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
                lVar14 = *(long *)puVar6;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
              if (lVar14 != 0) {
                if (1 < *(uint *)(lVar14 + 0x18)) {
                  *(undefined8 *)(lVar14 + 0x30) = 0;
                  lVar14 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
                  if (lVar14 != 0) {
                    if (1 < *(uint *)(lVar14 + 0x18)) {
                      lVar19 = 0;
                      goto LAB_05f4134c;
                    }
                    goto LAB_05f41578;
                  }
                  goto LAB_05f41574;
                }
                goto LAB_05f41578;
              }
              goto LAB_05f41574;
            }
          }
          else {
            lVar14 = *(long *)puVar6;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar14 = *(long *)puVar6;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_05f41574;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_05f41578;
            *(undefined8 *)(lVar14 + 0x30) = uVar13;
            lVar14 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_05f41574;
            lVar19 = lVar21;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_05f41578;
LAB_05f4134c:
            *(long *)(lVar14 + 0x38) = lVar19;
          }
          uVar10 = FUN_05eafa90(lVar21,0);
          uVar12 = FUN_05eafb10(lVar21,0);
          local_ec = uVar7;
          uStack_e8 = uVar8;
          local_f8 = local_b0;
          local_f0 = local_a8;
          local_e4 = fVar25;
          if (DAT_06a80988 == (code *)0x0) {
            DAT_06a80988 = (code *)FUN_02ce79f8(
                                               "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                               );
          }
          uVar13 = (*DAT_06a80988)(fVar24,lVar21,&local_f8,uVar12 & uVar10);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)puVar4);
          }
          uVar17 = FUN_05ef59b8(uVar13,0,0);
          if ((uVar17 & 1) == 0) {
            iVar9 = FUN_05eafcbc(lVar21,0);
            if ((iVar9 == 1) || (iVar9 = FUN_05eafcbc(lVar21,0), iVar9 == 2)) {
              lVar21 = *(long *)puVar6;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
                lVar21 = *(long *)puVar6;
              }
              lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x18);
              if (lVar21 == 0) goto LAB_05f41574;
              if (*(uint *)(lVar21 + 0x18) < 3) goto LAB_05f41578;
              *(undefined8 *)(lVar21 + 0x40) = 0;
              lVar21 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
              if (lVar21 == 0) goto LAB_05f41574;
              if (*(uint *)(lVar21 + 0x18) < 3) goto LAB_05f41578;
              *(undefined8 *)(lVar21 + 0x48) = 0;
            }
          }
          else {
            lVar14 = *(long *)puVar6;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar14 = *(long *)puVar6;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_05f41574;
            if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_05f41578;
            *(undefined8 *)(lVar14 + 0x40) = uVar13;
            lVar14 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_05f41574;
            if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_05f41578;
            *(long *)(lVar14 + 0x48) = lVar21;
          }
        }
      }
      else {
        uVar12 = 0x80000000;
        if (fVar33 != INFINITY) {
          uVar12 = (int)fVar33;
        }
        if (uVar12 == uVar10) {
          iVar9 = FUN_05ebab84(0);
          iVar11 = FUN_05ebabac(0);
          puVar5 = PTR_DAT_0663ac98;
          if (0 < (int)uVar10) {
            lVar14 = *(long *)PTR_DAT_0663ac98;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar14 = *(long *)puVar5;
            }
            lVar19 = **(long **)(lVar14 + 0xb8);
            if (lVar19 == 0) goto LAB_05f41574;
            if ((int)uVar10 < *(int *)(lVar19 + 0x18)) {
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
                lVar19 = **(long **)(*(long *)PTR_DAT_0663ac98 + 0xb8);
                if (lVar19 == 0) goto LAB_05f41574;
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar10) goto LAB_05f41578;
              lVar14 = *(long *)(lVar19 + (ulong)uVar10 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_05f41574;
              iVar9 = FUN_05eba320(lVar14,0);
              lVar14 = **(long **)(*(long *)PTR_DAT_0663ac98 + 0xb8);
              if (lVar14 == 0) goto LAB_05f41574;
              if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05f41578;
              lVar14 = *(long *)(lVar14 + (ulong)uVar10 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_05f41574;
              iVar11 = FUN_05eba408(lVar14,0);
            }
          }
          fVar25 = (float)uVar17 / (float)iVar11;
          plVar23 = (long *)PTR_DAT_0663ac98;
          if ((((fVar25 <= 1.0) && (0.0 <= fVar25)) &&
              (fVar24 = (float)uVar26 / (float)iVar9, 0.0 <= fVar24)) &&
             (fVar25 = 1.0, uVar30 = uVar26, uVar32 = uVar17, uVar34 = uVar13, fVar24 <= 1.0))
          goto LAB_05f410dc;
        }
      }
    }
LAB_05f414b8:
    uVar17 = (ulong)*(uint *)(lVar15 + 0x18);
    uVar22 = uVar22 + 1;
  } while ((long)uVar22 < (long)(int)*(uint *)(lVar15 + 0x18));
LAB_05f414c8:
  lVar15 = 0;
  uVar22 = 0;
  while( true ) {
    lVar21 = *(long *)puVar6;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar21 = *(long *)puVar6;
    }
    puVar20 = *(undefined1 **)(lVar21 + 0xb8);
    if (*(long *)(puVar20 + 0x18) == 0) goto LAB_05f41574;
    iVar9 = *(int *)(*(long *)(puVar20 + 0x18) + 0x18);
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      puVar20 = *(undefined1 **)(*(long *)puVar6 + 0xb8);
    }
    if ((long)iVar9 <= (long)uVar22) {
      *puVar20 = 0;
      return;
    }
    lVar21 = *(long *)(puVar20 + 0x18);
    if (lVar21 == 0) goto LAB_05f41574;
    if (*(uint *)(lVar21 + 0x18) <= uVar22) break;
    FUN_05f4157c(uVar22 & 0xffffffff,*(undefined8 *)(lVar21 + lVar15 + 0x20),
                 *(undefined8 *)(lVar21 + lVar15 + 0x28));
    uVar22 = uVar22 + 1;
    lVar15 = lVar15 + 0x10;
  }
  goto LAB_05f41578;
}


