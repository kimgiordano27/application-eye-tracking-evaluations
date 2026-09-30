/*
FUNCTION_NAME: UnityEngine.UIElements.RadioButtonGroup$$UpdateRadioButtons
ENTRY_POINT: 03950078
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void UnityEngine_UIElements_RadioButtonGroup__UpdateRadioButtons(void)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  int unaff_w19;
  long unaff_x20;
  ulong uVar22;
  long *plVar23;
  long *unaff_x28;
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
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  float fStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(PTR_DAT_03da7b40);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(PTR_DAT_03dac138);
  *(undefined1 *)(unaff_x20 + 0x9ea) = 1;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0394fe0c();
  uVar29 = *(uint *)(*(long *)(*unaff_x28 + 0xb8) + 0x30);
  uVar31 = *(uint *)(*(long *)(*unaff_x28 + 0xb8) + 0x34);
  iVar7 = FUN_038f1a78(0);
  lVar15 = *unaff_x28;
  lVar21 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x20);
  if (lVar21 == 0) {
LAB_03950118:
    uVar11 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03dac150,iVar7);
    lVar15 = *unaff_x28;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar15);
      lVar15 = *unaff_x28;
    }
    puVar12 = (undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x20);
    *puVar12 = uVar11;
    thunk_FUN_01b4f09c(puVar12,uVar11);
    lVar15 = *unaff_x28;
  }
  else {
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar15);
      lVar15 = *unaff_x28;
      lVar21 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x20);
      if (lVar21 == 0) {
LAB_039509cc:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    if (iVar7 != *(int *)(lVar21 + 0x18)) goto LAB_03950118;
  }
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar15);
    lVar15 = *unaff_x28;
  }
  FUN_038f1aa0(*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x20),0);
  uVar22 = 0;
  lVar15 = 0x20;
  while( true ) {
    lVar21 = *unaff_x28;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar21 = *unaff_x28;
    }
    pcVar16 = *(char **)(lVar21 + 0xb8);
    if (*(long *)(pcVar16 + 0x18) == 0) goto LAB_039509cc;
    iVar7 = *(int *)(*(long *)(pcVar16 + 0x18) + 0x18);
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar21 = *unaff_x28;
      pcVar16 = *(char **)(lVar21 + 0xb8);
    }
    if ((long)iVar7 <= (long)uVar22) {
      if (*pcVar16 != '\0') goto LAB_03950920;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        pcVar16 = *(char **)(*unaff_x28 + 0xb8);
      }
      puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      fVar2 = DAT_00b55490;
      fVar1 = DAT_00b55084;
      lVar15 = *(long *)(pcVar16 + 0x20);
      if (lVar15 == 0) goto LAB_039509cc;
      if ((int)*(ulong *)(lVar15 + 0x18) < 1) goto LAB_03950920;
      uVar22 = 0;
      uVar17 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      plVar23 = (long *)PTR_DAT_03da7b40;
      goto LAB_03950260;
    }
    lVar21 = *(long *)(pcVar16 + 0x18);
    if (lVar21 == 0) goto LAB_039509cc;
    if (*(uint *)(lVar21 + 0x18) <= uVar22) break;
    puVar12 = (undefined8 *)(lVar21 + lVar15);
    uVar22 = uVar22 + 1;
    lVar15 = lVar15 + 0x10;
    *puVar12 = 0;
    puVar12[1] = 0;
  }
LAB_039509d0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_03950260:
  do {
    if (uVar17 <= uVar22) goto LAB_039509d0;
    lVar21 = *(long *)(lVar15 + 0x20 + uVar22 * 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar17 = FUN_03922f24(lVar21,0,0);
    if ((uVar17 & 1) == 0) {
      if (unaff_w19 == 0) {
        if (lVar21 == 0) goto LAB_039509cc;
      }
      else {
        if (lVar21 == 0) goto LAB_039509cc;
        uVar11 = FUN_038f0fb4(lVar21,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar3);
        }
        uVar17 = FUN_0391f968(uVar11,0,0);
        if ((uVar17 & 1) != 0) goto LAB_03950910;
      }
      uVar8 = FUN_038f1034(lVar21,0);
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*plVar23);
      }
      uVar32 = (ulong)uVar31;
      uVar30 = (ulong)uVar29;
      uVar11 = 0;
      uVar17 = uVar32;
      uVar26 = FUN_038fa0a0(uVar30,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      pfVar18 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar24 = (float)uVar26 - *pfVar18;
      fVar27 = (float)uVar17 - pfVar18[1];
      fVar33 = (float)uVar11;
      fVar28 = fVar33 - pfVar18[2];
      uVar34 = 0;
      fVar25 = fVar1;
      if (fVar28 * fVar28 + fVar24 * fVar24 + fVar27 * fVar27 < fVar1) {
LAB_03950500:
        fVar24 = (float)FUN_038f0ea0(lVar21,0);
        in_s3 = fVar25 + in_s3;
        if ((((float)uVar32 < in_s3) && (fVar25 <= (float)uVar32)) &&
           ((fVar24 <= (float)uVar30 &&
            (((float)uVar30 < fVar24 + fVar28 && (iVar7 = FUN_038f0b98(lVar21,0), iVar7 != 0)))))) {
          FUN_038f1588(&stack0x00000058,uVar30,uVar32,uVar34,lVar21,0);
          fVar25 = fStack000000000000006c;
          uVar6 = uStack0000000000000068;
          uVar5 = uStack0000000000000064;
          in_stack_00000070 = in_stack_00000058;
          in_stack_00000078 = uStack0000000000000060;
          if (DAT_03fed263 == '\0') {
            thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
            DAT_03fed263 = '\x01';
          }
          in_s3 = 8.0;
          fVar24 = ABS(fVar25) * fVar2;
          fVar27 = **(float **)
                     (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                     0xb8) * 8.0;
          if (fVar24 <= fVar27) {
            fVar24 = fVar27;
          }
          if (fVar24 <= ABS(fVar25)) {
            fVar24 = (float)FUN_038f0758(lVar21,0);
            fVar27 = (float)FUN_038f06d0(lVar21,0);
            fVar24 = ABS((fVar24 - fVar27) / fVar25);
          }
          else {
            fVar24 = INFINITY;
          }
          uVar8 = FUN_038f0b18(lVar21,0);
          uVar10 = FUN_038f0b98(lVar21,0);
          uStack000000000000004c = uVar5;
          uStack0000000000000050 = uVar6;
          in_stack_00000040 = in_stack_00000070;
          uStack0000000000000048 = in_stack_00000078;
          fStack0000000000000054 = fVar25;
          if (DAT_03ffb920 == (code *)0x0) {
            DAT_03ffb920 = (code *)FUN_01b47f04(
                                               "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                               );
          }
          uVar11 = (*DAT_03ffb920)(fVar24,lVar21,&stack0x00000040,uVar10 & uVar8);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          uVar17 = FUN_0391f968(uVar11,0,0);
          if ((uVar17 & 1) == 0) {
            iVar7 = FUN_038f0d08(lVar21,0);
            if ((iVar7 == 1) || (iVar7 = FUN_038f0d08(lVar21,0), iVar7 == 2)) {
              lVar13 = *unaff_x28;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar13 = *unaff_x28;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
              if (lVar13 != 0) {
                if (1 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined8 *)(lVar13 + 0x30) = 0;
                  thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x30),0);
                  lVar13 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
                  if (lVar13 != 0) {
                    if (1 < *(uint *)(lVar13 + 0x18)) {
                      plVar14 = (long *)(lVar13 + 0x38);
                      *plVar14 = 0;
                      lVar13 = 0;
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
            lVar13 = *unaff_x28;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar13 = *unaff_x28;
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
            if (lVar13 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_039509d0;
            *(undefined8 *)(lVar13 + 0x30) = uVar11;
            thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x30),uVar11);
            lVar13 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar13 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_039509d0;
            plVar14 = (long *)(lVar13 + 0x38);
            *plVar14 = lVar21;
            lVar13 = lVar21;
LAB_03950788:
            thunk_FUN_01b4f09c(plVar14,lVar13);
          }
          uVar8 = FUN_038f0b18(lVar21,0);
          uVar10 = FUN_038f0b98(lVar21,0);
          uStack0000000000000034 = uVar5;
          uStack0000000000000038 = uVar6;
          in_stack_00000028 = in_stack_00000070;
          uStack0000000000000030 = in_stack_00000078;
          fStack000000000000003c = fVar25;
          if (DAT_03ffb928 == (code *)0x0) {
            DAT_03ffb928 = (code *)FUN_01b47f04(
                                               "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                               );
          }
          uVar11 = (*DAT_03ffb928)(fVar24,lVar21,&stack0x00000028,uVar10 & uVar8);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar3);
          }
          uVar17 = FUN_0391f968(uVar11,0,0);
          if ((uVar17 & 1) == 0) {
            iVar7 = FUN_038f0d08(lVar21,0);
            if ((iVar7 != 1) && (iVar7 = FUN_038f0d08(lVar21,0), iVar7 != 2)) goto LAB_03950910;
            lVar21 = *unaff_x28;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar21 = *unaff_x28;
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 0x18);
            if (lVar21 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar21 + 0x18) < 3) goto LAB_039509d0;
            *(undefined8 *)(lVar21 + 0x40) = 0;
            thunk_FUN_01b4f09c((undefined8 *)(lVar21 + 0x40),0);
            lVar21 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar21 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar21 + 0x18) < 3) goto LAB_039509d0;
            plVar14 = (long *)(lVar21 + 0x48);
            *plVar14 = 0;
            lVar21 = 0;
          }
          else {
            lVar13 = *unaff_x28;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar13 = *unaff_x28;
            }
            lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
            if (lVar13 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_039509d0;
            *(undefined8 *)(lVar13 + 0x40) = uVar11;
            thunk_FUN_01b4f09c((undefined8 *)(lVar13 + 0x40),uVar11);
            lVar13 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 0x18);
            if (lVar13 == 0) goto LAB_039509cc;
            if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_039509d0;
            plVar14 = (long *)(lVar13 + 0x48);
            *plVar14 = lVar21;
          }
          thunk_FUN_01b4f09c(plVar14,lVar21);
        }
      }
      else {
        uVar10 = 0x80000000;
        if (fVar33 != INFINITY) {
          uVar10 = (int)fVar33;
        }
        if (uVar10 == uVar8) {
          iVar7 = FUN_038fa760(0);
          iVar9 = FUN_038fa788(0);
          puVar4 = PTR_DAT_03da7b40;
          if (0 < (int)uVar8) {
            lVar13 = *(long *)PTR_DAT_03da7b40;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar13 = *(long *)puVar4;
            }
            lVar19 = **(long **)(lVar13 + 0xb8);
            if (lVar19 == 0) goto LAB_039509cc;
            if ((int)uVar8 < *(int *)(lVar19 + 0x18)) {
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar19 = **(long **)(*(long *)PTR_DAT_03da7b40 + 0xb8);
                if (lVar19 == 0) goto LAB_039509cc;
              }
              if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_039509d0;
              lVar13 = *(long *)(lVar19 + (ulong)uVar8 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_039509cc;
              iVar7 = FUN_038f9f24(lVar13,0);
              lVar13 = **(long **)(*(long *)PTR_DAT_03da7b40 + 0xb8);
              if (lVar13 == 0) goto LAB_039509cc;
              if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_039509d0;
              lVar13 = *(long *)(lVar13 + (ulong)uVar8 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_039509cc;
              iVar9 = FUN_038fa00c(lVar13,0);
            }
          }
          fVar25 = (float)uVar17 / (float)iVar9;
          plVar23 = (long *)PTR_DAT_03da7b40;
          if ((((fVar25 <= 1.0) && (0.0 <= fVar25)) &&
              (fVar24 = (float)uVar26 / (float)iVar7, 0.0 <= fVar24)) &&
             (fVar25 = 1.0, uVar30 = uVar26, uVar32 = uVar17, uVar34 = uVar11, fVar24 <= 1.0))
          goto LAB_03950500;
        }
      }
    }
LAB_03950910:
    uVar17 = (ulong)*(uint *)(lVar15 + 0x18);
    uVar22 = uVar22 + 1;
  } while ((long)uVar22 < (long)(int)*(uint *)(lVar15 + 0x18));
LAB_03950920:
  lVar15 = 0;
  uVar22 = 0;
  while( true ) {
    lVar21 = *unaff_x28;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar21 = *unaff_x28;
    }
    puVar20 = *(undefined1 **)(lVar21 + 0xb8);
    if (*(long *)(puVar20 + 0x18) == 0) goto LAB_039509cc;
    iVar7 = *(int *)(*(long *)(puVar20 + 0x18) + 0x18);
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar20 = *(undefined1 **)(*unaff_x28 + 0xb8);
    }
    if ((long)iVar7 <= (long)uVar22) {
      *puVar20 = 0;
      return;
    }
    lVar21 = *(long *)(puVar20 + 0x18);
    if (lVar21 == 0) goto LAB_039509cc;
    if (*(uint *)(lVar21 + 0x18) <= uVar22) break;
    FUN_039509d4(uVar22 & 0xffffffff,*(undefined8 *)(lVar21 + lVar15 + 0x20),
                 *(undefined8 *)(lVar21 + lVar15 + 0x28));
    uVar22 = uVar22 + 1;
    lVar15 = lVar15 + 0x10;
  }
  goto LAB_039509d0;
}


