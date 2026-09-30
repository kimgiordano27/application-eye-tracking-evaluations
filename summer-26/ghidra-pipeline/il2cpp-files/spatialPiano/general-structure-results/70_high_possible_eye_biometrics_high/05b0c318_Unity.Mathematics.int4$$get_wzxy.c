/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_wzxy
ENTRY_POINT: 05b0c318
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_int4__get_wzxy(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  char cVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  int iStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar1 = tpidr_el0;
  lStack_78 = *(long *)(lVar1 + 0x28);
  uStack_f8 = param_2;
  if ((DAT_06bc2840 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_OnBatchSaveAsyncComplete__
                );
    FUN_02f08768(Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<InputActionReference>_TryGet__
                );
    FUN_02f08768(Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__);
    FUN_02f08768(Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
    FUN_02f08768(Method_System_Nullable<XRCameraConfiguration>_get_HasValue__);
    DAT_06bc2840 = 1;
  }
  uStack_80 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  dStack_c8 = 0.0;
  uStack_d0 = 0;
  uStack_98 = 0;
  fStack_a0 = 0.0;
  uStack_9c = 0;
  dStack_88 = 0.0;
  uStack_90 = 0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  iStack_b0 = 0;
  fStack_ac = 0.0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  iVar6 = FUN_05b483f0(&uStack_f8,0);
  if (iVar6 != 0x444c5441) {
    lVar10 = FUN_05b52a80(uStack_f8,0);
    if (lVar10 != 0) {
      iVar6 = *(int *)(lVar10 + 0x14);
      iVar7 = FUN_05b50038(0);
      if (iVar6 != iVar7) {
        FUN_05b58d74(param_1,uStack_f8,0,0);
        goto LAB_05b0bcf8;
      }
      lVar11 = FUN_05abbe04(param_1,0);
      puVar3 = Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__;
      uStack_108 = *(ulong *)(param_1 + 0x1c8);
      uStack_110 = *(undefined8 *)(param_1 + 0x1c0);
      lVar12 = FUN_040499dc(&uStack_110,0,
                            *(undefined8 *)Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
      if (lVar12 != 0) {
        uVar24 = *(uint *)(lVar12 + 0x14);
        if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067ca498);
        }
        if (*(long *)(param_1 + 0x1b8) != 0) {
          uStack_110 = *(undefined8 *)(param_1 + 0x1c0);
          uVar14 = *(ulong *)(param_1 + 0x1c8);
          uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + 0x14);
          piVar18 = (int *)((ulong)uVar24 + lVar11);
          uStack_108 = uVar14;
          iVar6 = FUN_05b52d54(lVar10,0);
          if (iVar6 == 0x38) {
            puVar13 = (undefined8 *)FUN_05b572b0(lVar10,0);
            uStack_98 = puVar13[3];
            dStack_88 = (double)puVar13[5];
            uStack_90 = puVar13[4];
            uStack_80 = puVar13[6];
            fStack_a0 = (float)puVar13[2];
            uStack_9c = (undefined4)((ulong)puVar13[2] >> 0x20);
            fStack_a8 = (float)puVar13[1];
            fStack_a4 = (float)((ulong)puVar13[1] >> 0x20);
            iStack_b0 = (int)*puVar13;
            fStack_ac = (float)((ulong)*puVar13 >> 0x20);
          }
          else {
            uStack_80 = 0;
            uStack_98 = 0;
            fStack_a0 = 0.0;
            uStack_9c = 0;
            dStack_88 = 0.0;
            uStack_90 = 0;
            fStack_a8 = 0.0;
            fStack_a4 = 0.0;
            iStack_b0 = 0;
            fStack_ac = 0.0;
            uVar19 = FUN_05b572b0(lVar10,0);
            uVar8 = FUN_05b52d54(lVar10,0);
            FUN_0609bf0c(&iStack_b0,uVar19,uVar8,0);
          }
          uStack_90._0_2_ = (ushort)(byte)uStack_90;
          FUN_05b5014c(&iStack_b0,0,0);
          FUN_05b5016c(&iStack_b0,0,0);
          bVar5 = (byte)uStack_90 == '\x01';
          uStack_90 = CONCAT44(**(undefined4 **)
                                 (*(long *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<InputActionReference>_TryGet__
                                 + 0xb8),(undefined4)uStack_90);
          uVar24 = (uint)(uVar14 >> 0x20);
          if (bVar5) {
            if (0 < (int)uVar24) {
              uVar9 = 0;
              do {
                uVar14 = FUN_05b50070(piVar18,0);
                if ((uVar14 & 1) != 0) {
                  if (DAT_06bb435f == '\0') {
                    FUN_02f08768(PTR_DAT_067c9848);
                    DAT_06bb435f = '\x01';
                  }
                  fStack_a4 = (float)**(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8);
                  fStack_a0 = (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8) >>
                                     0x20);
                  dStack_88 = (double)FUN_05b4c7a4(&uStack_f8,0);
                  uStack_80 = CONCAT44(fStack_a8,fStack_ac);
                  FUN_05b500b4(&iStack_b0,0,0);
                  FUN_05b500e0(&iStack_b0,0,0);
                  FUN_05b5012c(&iStack_b0,0,0);
                  if (piVar18 == (int *)0x0) goto LAB_05b0c230;
                  uStack_90._0_2_ = CONCAT11(*(undefined1 *)((long)piVar18 + 0x21),(byte)uStack_90);
                  uVar14 = FUN_05b50070(uVar23 + lVar11,0);
                  if ((uVar14 & 1) != 0) {
                    FUN_05b500b4(&iStack_b0,1,0);
                    FUN_0344e594(*(undefined8 *)(param_1 + 0x1b8),&iStack_b0,0,uStack_f8,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__
                                );
                  }
                  uStack_108 = *(ulong *)(param_1 + 0x1c8);
                  uStack_110 = *(undefined8 *)(param_1 + 0x1c0);
                  uVar19 = *(undefined8 *)puVar3;
                  uVar17 = (ulong)uVar9;
                  goto FUN_05b0c190;
                }
                uVar9 = uVar9 + 1;
                piVar18 = piVar18 + 0xe;
              } while (uVar24 != uVar9);
            }
          }
          else if (0 < (int)uVar24) {
            uVar17 = 0;
            piVar22 = piVar18;
            do {
              if (piVar22 == (int *)0x0) goto LAB_05b0c230;
              if (*piVar22 == iStack_b0) {
                uVar9 = FUN_05b500a8(piVar22,0);
                FUN_05b500b4(&iStack_b0,uVar9 & 1,0);
                if (fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0 < DAT_011afbb8) {
                  fStack_a4 = fStack_ac - (float)*(undefined8 *)(piVar22 + 1);
                  fStack_a0 = fStack_a8 - (float)((ulong)*(undefined8 *)(piVar22 + 1) >> 0x20);
                }
                uStack_80 = *(undefined8 *)(piVar22 + 0xc);
                fStack_a4 = fStack_a4 + (float)*(undefined8 *)(piVar22 + 3);
                fStack_a0 = fStack_a0 + (float)((ulong)*(undefined8 *)(piVar22 + 3) >> 0x20);
                dStack_88 = *(double *)(piVar22 + 10);
                uVar14 = FUN_05b50070(&iStack_b0,0);
                if ((uVar14 & 1) == 0) {
LAB_05b0bff8:
                  cVar20 = *(char *)((long)piVar22 + 0x21);
                  bVar5 = true;
                }
                else {
                  dVar26 = (double)FUN_05b4c7a4(&uStack_f8,0);
                  dVar4 = dStack_88;
                  puVar2 = Method_System_Nullable<XRCameraConfiguration>_get_HasValue__;
                  lVar10 = *(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar10 = *(long *)puVar2;
                  }
                  lVar12 = *(long *)(lVar10 + 0xb8);
                  if ((double)*(float *)(lVar12 + 0x18) < dVar26 - dVar4) goto LAB_05b0bff8;
                  fVar25 = fStack_ac - (float)uStack_80;
                  fVar27 = fStack_a8 - uStack_80._4_4_;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar12 = *(long *)(*(long *)puVar2 + 0xb8);
                  }
                  if (*(float *)(lVar12 + 0x20) < fVar25 * fVar25 + fVar27 * fVar27)
                  goto LAB_05b0bff8;
                  bVar5 = false;
                  cVar20 = *(char *)((long)piVar22 + 0x21) + '\x01';
                }
                uStack_90._0_2_ = CONCAT11(cVar20,(byte)uStack_90);
                uVar14 = FUN_05b50070(&iStack_b0,0);
                if ((uVar9 & 1) != 0) {
                  if ((uVar14 & 1) == 0) {
                    piVar18 = &iStack_b0;
                    goto LAB_05b0c164;
                  }
                  FUN_05b500b4(&iStack_b0,0,0);
                  uVar14 = uVar17 & 0xffffffff;
                  if ((int)uVar24 < 2) {
                    uVar24 = 1;
                  }
                  uVar23 = (ulong)uVar24;
                  goto LAB_05b0c034;
                }
                if (((uVar14 & 1) == 0) ||
                   (uVar14 = FUN_05b500d4(uVar23 + lVar11,0), (uVar14 & 1) == 0)) goto LAB_05b0c17c;
                uVar14 = uVar17 & 0xffffffff;
                if ((int)uVar24 < 2) {
                  uVar24 = 1;
                }
                uVar15 = (ulong)uVar24;
                goto Unity_Mathematics_int4__set_wxyz;
              }
              uVar17 = uVar17 + 1;
              piVar22 = piVar22 + 0xe;
            } while (uVar14 >> 0x20 != uVar17);
          }
          goto LAB_05b0bcf8;
        }
      }
    }
LAB_05b0c230:
    if (*(long *)(lVar1 + 0x28) == lStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_05b0c244;
  }
  goto LAB_05b0bcf8;
LAB_05b0c034:
  if ((uVar14 == 0) || (uVar15 = FUN_05b5008c(piVar18,0), (uVar15 & 1) == 0)) goto LAB_05b0c048;
  uStack_e8 = CONCAT44(fStack_a4,fStack_a8);
  uStack_f0 = CONCAT44(fStack_ac,iStack_b0);
  uStack_e0 = CONCAT44(uStack_9c,fStack_a0);
  uStack_d8 = uStack_98;
  dStack_c8 = dStack_88;
  uStack_d0 = uStack_90;
  uStack_c0 = uStack_80;
  FUN_05b4aaf0(&uStack_f0,2,0);
  FUN_05b500e0(&uStack_f0,1,0);
  piVar18 = (int *)&uStack_f0;
LAB_05b0c164:
  FUN_0344e594(*(undefined8 *)(param_1 + 0x1b8),piVar18,0,uStack_f8,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__);
  goto LAB_05b0c17c;
LAB_05b0c048:
  uVar19 = uStack_f8;
  uVar23 = uVar23 - 1;
  uVar14 = uVar14 - 1;
  piVar18 = piVar18 + 0xe;
  if (uVar23 == 0) goto code_r0x05b0c058;
  goto LAB_05b0c034;
code_r0x05b0c058:
  uVar21 = *(undefined8 *)(param_1 + 0x1b8);
  if (bVar5) {
    FUN_0344e594(uVar21,&iStack_b0,0,uStack_f8,
                 *(undefined8 *)
                  Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__)
    ;
    goto Unity_Mathematics_int4__get_wxww;
  }
  if (*(int *)(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  Unity_Mathematics_int4__get_wyzx(uVar21,&iStack_b0,uVar19);
LAB_05b0c1e0:
  uStack_108 = *(ulong *)(param_1 + 0x1c8);
  uStack_110 = *(undefined8 *)(param_1 + 0x1c0);
  uVar21 = FUN_040499dc(&uStack_110,uVar17 & 0xffffffff,*(undefined8 *)puVar3);
  uVar19 = uStack_f8;
  if (*(int *)(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__ + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__);
  }
  Unity_Mathematics_int4__get_wyzx(uVar21,&iStack_b0,uVar19);
  goto LAB_05b0bcf8;
  while( true ) {
    uVar15 = uVar15 - 1;
    uVar14 = uVar14 - 1;
    piVar18 = piVar18 + 0xe;
    if (uVar15 == 0) break;
Unity_Mathematics_int4__set_wxyz:
    if ((uVar14 != 0) && (uVar16 = FUN_05b5008c(piVar18,0), (uVar16 & 1) != 0)) goto LAB_05b0c17c;
  }
  FUN_05b500e0(uVar23 + lVar11,0,0);
  if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_05b0c230;
  FUN_0344dbb4(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x1a8),3,0,0,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_OnBatchSaveAsyncComplete__
              );
LAB_05b0c17c:
  if (!bVar5) goto LAB_05b0c1e0;
Unity_Mathematics_int4__get_wxww:
  uStack_108 = *(ulong *)(param_1 + 0x1c8);
  uStack_110 = *(undefined8 *)(param_1 + 0x1c0);
  uVar19 = *(undefined8 *)puVar3;
  uVar17 = uVar17 & 0xffffffff;
FUN_05b0c190:
  uVar19 = FUN_040499dc(&uStack_110,uVar17,uVar19);
  FUN_0344e594(uVar19,&iStack_b0,0,uStack_f8,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__);
LAB_05b0bcf8:
  if (*(long *)(lVar1 + 0x28) == lStack_78) {
    return;
  }
LAB_05b0c244:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


