/*
FUNCTION_NAME: FUN_0395002c
ENTRY_POINT: 0395002c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0395002c(int param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float in_s3;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  float fVar34;
  undefined8 uVar35;
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
  
  puVar5 = PTR_DAT_03dac138;
  if ((DAT_03ffb9ea & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03dac150);
    thunk_FUN_01ad9084(PTR_DAT_03da7b40);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03dac138);
    DAT_03ffb9ea = 1;
  }
  local_a8 = 0;
  local_b0 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0394fe0c();
  uVar30 = *(uint *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
  uVar32 = *(uint *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x34);
  iVar8 = FUN_038f1a78(0);
  lVar16 = *(long *)puVar5;
  lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
  if (lVar22 == 0) {
LAB_03950118:
    uVar12 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03dac150,iVar8);
    lVar16 = *(long *)puVar5;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar16);
      lVar16 = *(long *)puVar5;
    }
    puVar13 = (undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x20);
    *puVar13 = uVar12;
    thunk_FUN_01b4f09c(puVar13,uVar12);
    lVar16 = *(long *)puVar5;
  }
  else {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar16);
      lVar16 = *(long *)puVar5;
      lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
      if (lVar22 == 0) {
LAB_039509cc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    if (iVar8 != *(int *)(lVar22 + 0x18)) goto LAB_03950118;
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar16);
    lVar16 = *(long *)puVar5;
  }
  FUN_038f1aa0(*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x20),0);
  uVar23 = 0;
  lVar16 = 0x20;
  while( true ) {
    lVar22 = *(long *)puVar5;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar22 = *(long *)puVar5;
    }
    pcVar17 = *(char **)(lVar22 + 0xb8);
    if (*(long *)(pcVar17 + 0x18) == 0) goto LAB_039509cc;
    iVar8 = *(int *)(*(long *)(pcVar17 + 0x18) + 0x18);
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar22 = *(long *)puVar5;
      pcVar17 = *(char **)(lVar22 + 0xb8);
    }
    if ((long)iVar8 <= (long)uVar23) {
      if (*pcVar17 != '\0') goto LAB_03950920;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        pcVar17 = *(char **)(*(long *)puVar5 + 0xb8);
      }
      puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      fVar2 = DAT_00b55490;
      fVar1 = DAT_00b55084;
      lVar16 = *(long *)(pcVar17 + 0x20);
      if (lVar16 == 0) goto LAB_039509cc;
      if ((int)*(ulong *)(lVar16 + 0x18) < 1) goto LAB_03950920;
      uVar23 = 0;
      uVar18 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
      plVar24 = (long *)PTR_DAT_03da7b40;
      goto LAB_03950260;
    }
    lVar22 = *(long *)(pcVar17 + 0x18);
    if (lVar22 == 0) goto LAB_039509cc;
    if (*(uint *)(lVar22 + 0x18) <= uVar23) break;
    puVar13 = (undefined8 *)(lVar22 + lVar16);
    uVar23 = uVar23 + 1;
    lVar16 = lVar16 + 0x10;
    *puVar13 = 0;
    puVar13[1] = 0;
  }
LAB_039509d0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_03950260:
  do {
    if (uVar18 <= uVar23) goto LAB_039509d0;
    lVar22 = *(long *)(lVar16 + 0x20 + uVar23 * 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_03922f24(lVar22,0,0);
    if ((uVar18 & 1) == 0) {
      if (param_1 == 0) {
        if (lVar22 == 0) goto LAB_039509cc;
      }
      else {
        if (lVar22 == 0) goto LAB_039509cc;
        uVar12 = FUN_038f0fb4(lVar22,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar18 = FUN_0391f968(uVar12,0,0);
        if ((uVar18 & 1) != 0) goto LAB_03950910;
      }
      uVar9 = FUN_038f1034(lVar22,0);
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*plVar24);
      }
      uVar33 = (ulong)uVar32;
      uVar31 = (ulong)uVar30;
      uVar12 = 0;
      uVar18 = uVar33;
      uVar27 = FUN_038fa0a0(uVar31,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar19 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar25 = (float)uVar27 - *pfVar19;
      fVar28 = (float)uVar18 - pfVar19[1];
      fVar34 = (float)uVar12;
      fVar29 = fVar34 - pfVar19[2];
      uVar35 = 0;
      fVar26 = fVar1;
      if (fVar29 * fVar29 + fVar25 * fVar25 + fVar28 * fVar28 < fVar1) {
LAB_03950500:
        fVar25 = (float)FUN_038f0ea0(lVar22,0);
        in_s3 = fVar26 + in_s3;
        if ((((float)uVar33 < in_s3) && (fVar26 <= (float)uVar33)) &&
           ((fVar25 <= (float)uVar31 &&
            (((float)uVar31 < fVar25 + fVar29 && (iVar8 = FUN_038f0b98(lVar22,0), iVar8 != 0)))))) {
          FUN_038f1588(&local_c8,uVar31,uVar33,uVar35,lVar22,0);
          fVar26 = local_b4;
          uVar7 = uStack_b8;
          uVar6 = local_bc;
          local_b0 = local_c8;
          local_a8 = local_c0;
          if (DAT_03fed263 == '\0') {
            thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
            DAT_03fed263 = '\x01';
          }
          in_s3 = 8.0;
          fVar25 = ABS(fVar26) * fVar2;
          fVar28 = **(float **)
                     (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                     0xb8) * 8.0;
          if (fVar25 <= fVar28) {
            fVar25 = fVar28;
          }
          if (fVar25 <= ABS(fVar26)) {
            fVar25 = (float)FUN_038f0758(lVar22,0);
            fVar28 = (float)FUN_038f06d0(lVar22,0);
            fVar25 = ABS((fVar25 - fVar28) / fVar26);
          }
          else {
            fVar25 = INFINITY;
          }
          uVar9 = FUN_038f0b18(lVar22,0);
          uVar11 = FUN_038f0b98(lVar22,0);
          local_d4 = uVar6;
          uStack_d0 = uVar7;
          local_e0 = local_b0;
          local_d8 = local_a8;
          local_cc = fVar26;
          if (DAT_03ffb920 == (code *)0x0) {
            DAT_03ffb920 = (code *)FUN_01b47f04(
                                               "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                               );
          }
          uVar12 = (*DAT_03ffb920)(fVar25,lVar22,&local_e0,uVar11 & uVar9);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          uVar18 = FUN_0391f968(uVar12,0,0);
          if ((uVar18 & 1) == 0) {
            iVar8 = FUN_038f0d08(lVar22,0);
            if ((iVar8 == 1) || (iVar8 = FUN_038f0d08(lVar22,0), iVar8 == 2)) {
              lVar14 = *(long *)puVar5;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar14 = *(long *)puVar5;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
              if (lVar14 != 0) {
                if (1 < *(uint *)(lVar14 + 0x18)) {
                  *(undefined8 *)(lVar14 + 0x30) = 0;
                  thunk_FUN_01b4f09c((undefined8 *)(lVar14 + 0x30),0);
                  lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
                  if (lVar14 != 0) {
                    if (1 < *(uint *)(lVar14 + 0x18)) {
                      plVar15 = (long *)(lVar14 + 0x38);
                      *plVar15 = 0;
                      lVar14 = 0;
                      goto LAB_03950788;
                    }
                    goto LAB_039509d0;
                  }
                  goto LAB_039509cc;
                }
                goto LAB_039509d0;
              }
              goto LAB_039509cc;
            }
          }
          else {
            lVar14 = *(long *)puVar5;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar14 = *(long *)puVar5;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039509d0;
            *(undefined8 *)(lVar14 + 0x30) = uVar12;
            thunk_FUN_01b4f09c((undefined8 *)(lVar14 + 0x30),uVar12);
            lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_039509d0;
            plVar15 = (long *)(lVar14 + 0x38);
            *plVar15 = lVar22;
            lVar14 = lVar22;
LAB_03950788:
            thunk_FUN_01b4f09c(plVar15,lVar14);
          }
          uVar9 = FUN_038f0b18(lVar22,0);
          uVar11 = FUN_038f0b98(lVar22,0);
          local_ec = uVar6;
          uStack_e8 = uVar7;
          local_f8 = local_b0;
          local_f0 = local_a8;
          local_e4 = fVar26;
          if (DAT_03ffb928 == (code *)0x0) {
            DAT_03ffb928 = (code *)FUN_01b47f04(
                                               "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                               );
          }
          uVar12 = (*DAT_03ffb928)(fVar25,lVar22,&local_f8,uVar11 & uVar9);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          uVar18 = FUN_0391f968(uVar12,0,0);
          if ((uVar18 & 1) == 0) {
            iVar8 = FUN_038f0d08(lVar22,0);
            if ((iVar8 != 1) && (iVar8 = FUN_038f0d08(lVar22,0), iVar8 != 2)) goto LAB_03950910;
            lVar22 = *(long *)puVar5;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar22 = *(long *)puVar5;
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_039509d0;
            *(undefined8 *)(lVar22 + 0x40) = 0;
            thunk_FUN_01b4f09c((undefined8 *)(lVar22 + 0x40),0);
            lVar22 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_039509d0;
            plVar15 = (long *)(lVar22 + 0x48);
            *plVar15 = 0;
            lVar22 = 0;
          }
          else {
            lVar14 = *(long *)puVar5;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar14 = *(long *)puVar5;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_039509d0;
            *(undefined8 *)(lVar14 + 0x40) = uVar12;
            thunk_FUN_01b4f09c((undefined8 *)(lVar14 + 0x40),uVar12);
            lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_039509d0;
            plVar15 = (long *)(lVar14 + 0x48);
            *plVar15 = lVar22;
          }
          thunk_FUN_01b4f09c(plVar15,lVar22);
        }
      }
      else {
        uVar11 = 0x80000000;
        if (fVar34 != INFINITY) {
          uVar11 = (int)fVar34;
        }
        if (uVar11 == uVar9) {
          iVar8 = FUN_038fa760(0);
          iVar10 = FUN_038fa788(0);
          puVar4 = PTR_DAT_03da7b40;
          if (0 < (int)uVar9) {
            lVar14 = *(long *)PTR_DAT_03da7b40;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar14 = *(long *)puVar4;
            }
            lVar20 = **(long **)(lVar14 + 0xb8);
            if (lVar20 == 0) goto LAB_039509cc;
            if ((int)uVar9 < *(int *)(lVar20 + 0x18)) {
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar20 = **(long **)(*(long *)PTR_DAT_03da7b40 + 0xb8);
                if (lVar20 == 0) goto LAB_039509cc;
              }
              if (*(uint *)(lVar20 + 0x18) <= uVar9) goto LAB_039509d0;
              lVar14 = *(long *)(lVar20 + (ulong)uVar9 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_039509cc;
              iVar8 = FUN_038f9f24(lVar14,0);
              lVar14 = **(long **)(*(long *)PTR_DAT_03da7b40 + 0xb8);
              if (lVar14 == 0) goto LAB_039509cc;
              if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_039509d0;
              lVar14 = *(long *)(lVar14 + (ulong)uVar9 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_039509cc;
              iVar10 = FUN_038fa00c(lVar14,0);
            }
          }
          fVar26 = (float)uVar18 / (float)iVar10;
          plVar24 = (long *)PTR_DAT_03da7b40;
          if ((((fVar26 <= 1.0) && (0.0 <= fVar26)) &&
              (fVar25 = (float)uVar27 / (float)iVar8, 0.0 <= fVar25)) &&
             (fVar26 = 1.0, uVar31 = uVar27, uVar33 = uVar18, uVar35 = uVar12, fVar25 <= 1.0))
          goto LAB_03950500;
        }
      }
    }
LAB_03950910:
    uVar18 = (ulong)*(uint *)(lVar16 + 0x18);
    uVar23 = uVar23 + 1;
  } while ((long)uVar23 < (long)(int)*(uint *)(lVar16 + 0x18));
LAB_03950920:
  lVar16 = 0;
  uVar23 = 0;
  while( true ) {
    lVar22 = *(long *)puVar5;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar22 = *(long *)puVar5;
    }
    puVar21 = *(undefined1 **)(lVar22 + 0xb8);
    if (*(long *)(puVar21 + 0x18) == 0) goto LAB_039509cc;
    iVar8 = *(int *)(*(long *)(puVar21 + 0x18) + 0x18);
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar21 = *(undefined1 **)(*(long *)puVar5 + 0xb8);
    }
    if ((long)iVar8 <= (long)uVar23) {
      *puVar21 = 0;
      return;
    }
    lVar22 = *(long *)(puVar21 + 0x18);
    if (lVar22 == 0) goto LAB_039509cc;
    if (*(uint *)(lVar22 + 0x18) <= uVar23) break;
    FUN_039509d4(uVar23 & 0xffffffff,*(undefined8 *)(lVar22 + lVar16 + 0x20),
                 *(undefined8 *)(lVar22 + lVar16 + 0x28));
    uVar23 = uVar23 + 1;
    lVar16 = lVar16 + 0x10;
  }
  goto LAB_039509d0;
}


