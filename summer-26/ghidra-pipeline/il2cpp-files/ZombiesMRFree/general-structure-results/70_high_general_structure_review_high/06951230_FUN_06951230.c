/*
FUNCTION_NAME: FUN_06951230
ENTRY_POINT: 06951230
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_06951230(int param_1)

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
  
  puVar5 = Oculus_Platform_MessageWithLaunchFriendRequestFlowResult_TypeInfo;
  if ((DAT_073a76da & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f9c648);
    FUN_02fe925c(System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(Oculus_Platform_MessageWithLaunchFriendRequestFlowResult_TypeInfo);
    DAT_073a76da = 1;
  }
  local_a8 = 0;
  local_b0 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_06951010();
  uVar30 = *(uint *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
  uVar32 = *(uint *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x34);
  iVar8 = FUN_068bb838(0);
  lVar16 = *(long *)puVar5;
  lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
  if (lVar22 == 0) {
LAB_0695131c:
    uVar12 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f9c648,iVar8);
    lVar16 = *(long *)puVar5;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar16);
      lVar16 = *(long *)puVar5;
    }
    puVar13 = (undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x20);
    *puVar13 = uVar12;
    thunk_FUN_03048534(puVar13,uVar12);
    lVar16 = *(long *)puVar5;
  }
  else {
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar16);
      lVar16 = *(long *)puVar5;
      lVar22 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x20);
      if (lVar22 == 0) {
LAB_06951bd0:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
    }
    if (iVar8 != *(int *)(lVar22 + 0x18)) goto LAB_0695131c;
  }
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(lVar16);
    lVar16 = *(long *)puVar5;
  }
  FUN_068bb900(*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x20),0);
  uVar23 = 0;
  lVar16 = 0x20;
  while( true ) {
    lVar22 = *(long *)puVar5;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar22 = *(long *)puVar5;
    }
    pcVar17 = *(char **)(lVar22 + 0xb8);
    if (*(long *)(pcVar17 + 0x18) == 0) goto LAB_06951bd0;
    iVar8 = *(int *)(*(long *)(pcVar17 + 0x18) + 0x18);
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar22 = *(long *)puVar5;
      pcVar17 = *(char **)(lVar22 + 0xb8);
    }
    if ((long)iVar8 <= (long)uVar23) {
      if (*pcVar17 != '\0') goto LAB_06951b24;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        pcVar17 = *(char **)(*(long *)puVar5 + 0xb8);
      }
      puVar3 = PTR_DAT_06f6d618;
      fVar2 = DAT_0136a264;
      fVar1 = DAT_01369900;
      lVar16 = *(long *)(pcVar17 + 0x20);
      if (lVar16 == 0) goto LAB_06951bd0;
      if ((int)*(ulong *)(lVar16 + 0x18) < 1) goto LAB_06951b24;
      uVar23 = 0;
      uVar18 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
      plVar24 = (long *)System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo;
      goto LAB_06951464;
    }
    lVar22 = *(long *)(pcVar17 + 0x18);
    if (lVar22 == 0) goto LAB_06951bd0;
    if (*(uint *)(lVar22 + 0x18) <= uVar23) break;
    puVar13 = (undefined8 *)(lVar22 + lVar16);
    uVar23 = uVar23 + 1;
    lVar16 = lVar16 + 0x10;
    *puVar13 = 0;
    puVar13[1] = 0;
  }
LAB_06951bd4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
LAB_06951464:
  do {
    if (uVar18 <= uVar23) goto LAB_06951bd4;
    lVar22 = *(long *)(lVar16 + 0x20 + uVar23 * 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar18 = FUN_068f9b78(lVar22,0,0);
    if ((uVar18 & 1) == 0) {
      if (param_1 == 0) {
        if (lVar22 == 0) goto LAB_06951bd0;
      }
      else {
        if (lVar22 == 0) goto LAB_06951bd0;
        uVar12 = FUN_068ba5c0(lVar22,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar3);
        }
        uVar18 = FUN_068f8810(uVar12,0,0);
        if ((uVar18 & 1) != 0) goto LAB_06951b14;
      }
      uVar9 = FUN_068ba640(lVar22,0);
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*plVar24);
      }
      uVar33 = (ulong)uVar32;
      uVar31 = (ulong)uVar30;
      uVar12 = 0;
      uVar18 = uVar33;
      uVar27 = FUN_068c5864(uVar31,0);
      if (DAT_0738e669 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e669 = '\x01';
      }
      pfVar19 = *(float **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
      fVar25 = (float)uVar27 - *pfVar19;
      fVar28 = (float)uVar18 - pfVar19[1];
      fVar34 = (float)uVar12;
      fVar29 = fVar34 - pfVar19[2];
      uVar35 = 0;
      fVar26 = fVar1;
      if (fVar29 * fVar29 + fVar25 * fVar25 + fVar28 * fVar28 < fVar1) {
LAB_06951704:
        fVar25 = (float)FUN_068ba414(lVar22,0);
        in_s3 = fVar26 + in_s3;
        if ((((float)uVar33 < in_s3) && (fVar26 <= (float)uVar33)) &&
           ((fVar25 <= (float)uVar31 &&
            (((float)uVar31 < fVar25 + fVar29 && (iVar8 = FUN_068b9a54(lVar22,0), iVar8 != 0)))))) {
          FUN_068bb168(&local_c8,uVar31,uVar33,uVar35,lVar22,0);
          fVar26 = local_b4;
          uVar7 = uStack_b8;
          uVar6 = local_bc;
          local_b0 = local_c8;
          local_a8 = local_c0;
          if (DAT_0738eca2 == '\0') {
            FUN_02fe925c(PTR_DAT_06f6e7c0);
            DAT_0738eca2 = '\x01';
          }
          in_s3 = 8.0;
          fVar25 = ABS(fVar26) * fVar2;
          fVar28 = **(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) * 8.0;
          if (fVar25 <= fVar28) {
            fVar25 = fVar28;
          }
          if (fVar25 <= ABS(fVar26)) {
            fVar25 = (float)FUN_068b91fc(lVar22,0);
            fVar28 = (float)FUN_068b9174(lVar22,0);
            fVar25 = ABS((fVar25 - fVar28) / fVar26);
          }
          else {
            fVar25 = INFINITY;
          }
          uVar9 = FUN_068b99d4(lVar22,0);
          uVar11 = FUN_068b9a54(lVar22,0);
          local_d4 = uVar6;
          uStack_d0 = uVar7;
          local_e0 = local_b0;
          local_d8 = local_a8;
          local_cc = fVar26;
          if (DAT_073a7618 == (code *)0x0) {
            DAT_073a7618 = (code *)FUN_02fe9220(
                                               "UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                               );
          }
          uVar12 = (*DAT_073a7618)(fVar25,lVar22,&local_e0,uVar11 & uVar9);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)puVar3);
          }
          uVar18 = FUN_068f8810(uVar12,0,0);
          if ((uVar18 & 1) == 0) {
            iVar8 = FUN_068ba01c(lVar22,0);
            if ((iVar8 == 1) || (iVar8 = FUN_068ba01c(lVar22,0), iVar8 == 2)) {
              lVar14 = *(long *)puVar5;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar14 = *(long *)puVar5;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
              if (lVar14 != 0) {
                if (1 < *(uint *)(lVar14 + 0x18)) {
                  *(undefined8 *)(lVar14 + 0x30) = 0;
                  thunk_FUN_03048534((undefined8 *)(lVar14 + 0x30),0);
                  lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
                  if (lVar14 != 0) {
                    if (1 < *(uint *)(lVar14 + 0x18)) {
                      plVar15 = (long *)(lVar14 + 0x38);
                      *plVar15 = 0;
                      lVar14 = 0;
                      goto LAB_0695198c;
                    }
                    goto LAB_06951bd4;
                  }
                  goto LAB_06951bd0;
                }
                goto LAB_06951bd4;
              }
              goto LAB_06951bd0;
            }
          }
          else {
            lVar14 = *(long *)puVar5;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar14 = *(long *)puVar5;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_06951bd0;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_06951bd4;
            *(undefined8 *)(lVar14 + 0x30) = uVar12;
            thunk_FUN_03048534((undefined8 *)(lVar14 + 0x30),uVar12);
            lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_06951bd0;
            if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_06951bd4;
            plVar15 = (long *)(lVar14 + 0x38);
            *plVar15 = lVar22;
            lVar14 = lVar22;
LAB_0695198c:
            thunk_FUN_03048534(plVar15,lVar14);
          }
          uVar9 = FUN_068b99d4(lVar22,0);
          uVar11 = FUN_068b9a54(lVar22,0);
          local_ec = uVar6;
          uStack_e8 = uVar7;
          local_f8 = local_b0;
          local_f0 = local_a8;
          local_e4 = fVar26;
          if (DAT_073a7620 == (code *)0x0) {
            DAT_073a7620 = (code *)FUN_02fe9220(
                                               "UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)"
                                               );
          }
          uVar12 = (*DAT_073a7620)(fVar25,lVar22,&local_f8,uVar11 & uVar9);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)puVar3);
          }
          uVar18 = FUN_068f8810(uVar12,0,0);
          if ((uVar18 & 1) == 0) {
            iVar8 = FUN_068ba01c(lVar22,0);
            if ((iVar8 != 1) && (iVar8 = FUN_068ba01c(lVar22,0), iVar8 != 2)) goto LAB_06951b14;
            lVar22 = *(long *)puVar5;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar22 = *(long *)puVar5;
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_06951bd0;
            if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_06951bd4;
            *(undefined8 *)(lVar22 + 0x40) = 0;
            thunk_FUN_03048534((undefined8 *)(lVar22 + 0x40),0);
            lVar22 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
            if (lVar22 == 0) goto LAB_06951bd0;
            if (*(uint *)(lVar22 + 0x18) < 3) goto LAB_06951bd4;
            plVar15 = (long *)(lVar22 + 0x48);
            *plVar15 = 0;
            lVar22 = 0;
          }
          else {
            lVar14 = *(long *)puVar5;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar14 = *(long *)puVar5;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_06951bd0;
            if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06951bd4;
            *(undefined8 *)(lVar14 + 0x40) = uVar12;
            thunk_FUN_03048534((undefined8 *)(lVar14 + 0x40),uVar12);
            lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
            if (lVar14 == 0) goto LAB_06951bd0;
            if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_06951bd4;
            plVar15 = (long *)(lVar14 + 0x48);
            *plVar15 = lVar22;
          }
          thunk_FUN_03048534(plVar15,lVar22);
        }
      }
      else {
        uVar11 = 0x80000000;
        if (fVar34 != INFINITY) {
          uVar11 = (int)fVar34;
        }
        if (uVar11 == uVar9) {
          iVar8 = FUN_068c5f24(0);
          iVar10 = FUN_068c5f4c(0);
          puVar4 = System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo;
          if (0 < (int)uVar9) {
            lVar14 = *(long *)System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
              lVar14 = *(long *)puVar4;
            }
            lVar20 = **(long **)(lVar14 + 0xb8);
            if (lVar20 == 0) goto LAB_06951bd0;
            if ((int)uVar9 < *(int *)(lVar20 + 0x18)) {
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
                lVar20 = **(long **)(*(long *)
                                      System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo
                                    + 0xb8);
                if (lVar20 == 0) goto LAB_06951bd0;
              }
              if (*(uint *)(lVar20 + 0x18) <= uVar9) goto LAB_06951bd4;
              lVar14 = *(long *)(lVar20 + (ulong)uVar9 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_06951bd0;
              iVar8 = FUN_068c5634(lVar14,0);
              lVar14 = **(long **)(*(long *)
                                    System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo
                                  + 0xb8);
              if (lVar14 == 0) goto LAB_06951bd0;
              if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06951bd4;
              lVar14 = *(long *)(lVar14 + (ulong)uVar9 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_06951bd0;
              iVar10 = FUN_068c571c(lVar14,0);
            }
          }
          fVar26 = (float)uVar18 / (float)iVar10;
          plVar24 = (long *)System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo;
          if ((((fVar26 <= 1.0) && (0.0 <= fVar26)) &&
              (fVar25 = (float)uVar27 / (float)iVar8, 0.0 <= fVar25)) &&
             (fVar26 = 1.0, uVar31 = uVar27, uVar33 = uVar18, uVar35 = uVar12, fVar25 <= 1.0))
          goto LAB_06951704;
        }
      }
    }
LAB_06951b14:
    uVar18 = (ulong)*(uint *)(lVar16 + 0x18);
    uVar23 = uVar23 + 1;
  } while ((long)uVar23 < (long)(int)*(uint *)(lVar16 + 0x18));
LAB_06951b24:
  lVar16 = 0;
  uVar23 = 0;
  while( true ) {
    lVar22 = *(long *)puVar5;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar22 = *(long *)puVar5;
    }
    puVar21 = *(undefined1 **)(lVar22 + 0xb8);
    if (*(long *)(puVar21 + 0x18) == 0) goto LAB_06951bd0;
    iVar8 = *(int *)(*(long *)(puVar21 + 0x18) + 0x18);
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      puVar21 = *(undefined1 **)(*(long *)puVar5 + 0xb8);
    }
    if ((long)iVar8 <= (long)uVar23) {
      *puVar21 = 0;
      return;
    }
    lVar22 = *(long *)(puVar21 + 0x18);
    if (lVar22 == 0) goto LAB_06951bd0;
    if (*(uint *)(lVar22 + 0x18) <= uVar23) break;
    FUN_06951bd8(uVar23 & 0xffffffff,*(undefined8 *)(lVar22 + lVar16 + 0x20),
                 *(undefined8 *)(lVar22 + lVar16 + 0x28));
    uVar23 = uVar23 + 1;
    lVar16 = lVar16 + 0x10;
  }
  goto LAB_06951bd4;
}


