/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_zxyz
ENTRY_POINT: 05b0bb44
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


void Unity_Mathematics_int4__get_zxyz(long param_1,undefined8 param_2)

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
  undefined8 uVar18;
  char cVar19;
  undefined8 uVar20;
  int *piVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  double in_stack_00000058;
  undefined8 in_stack_00000060;
  int in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  float fStack000000000000007c;
  float in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined8 in_stack_00000088;
  byte bStack0000000000000090;
  undefined6 uStack0000000000000092;
  double in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  long lStack00000000000000a8;
  
  lVar1 = tpidr_el0;
  lStack00000000000000a8 = *(long *)(lVar1 + 0x28);
  uStack0000000000000028 = param_2;
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
  _fStack00000000000000a0 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0.0;
  in_stack_00000050 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0.0;
  uStack0000000000000084 = 0;
  in_stack_00000098 = 0.0;
  _bStack0000000000000090 = 0;
  in_stack_00000078 = 0.0;
  fStack000000000000007c = 0.0;
  in_stack_00000070 = 0;
  fStack0000000000000074 = 0.0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  iVar6 = FUN_05b483f0(&stack0x00000028,0);
  if (iVar6 != 0x444c5441) {
    lVar10 = FUN_05b52a80(uStack0000000000000028,0);
    if (lVar10 != 0) {
      iVar6 = *(int *)(lVar10 + 0x14);
      iVar7 = FUN_05b50038(0);
      if (iVar6 != iVar7) {
        FUN_05b58d74(param_1,uStack0000000000000028,0,0);
        goto LAB_05b0bcf8;
      }
      lVar11 = FUN_05abbe04(param_1,0);
      puVar3 = Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__;
      in_stack_00000018 = *(ulong *)(param_1 + 0x1c8);
      in_stack_00000010 = *(undefined8 *)(param_1 + 0x1c0);
      lVar12 = FUN_040499dc(&stack0x00000010,0,
                            *(undefined8 *)Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
      if (lVar12 != 0) {
        uVar24 = *(uint *)(lVar12 + 0x14);
        if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067ca498);
        }
        if (*(long *)(param_1 + 0x1b8) != 0) {
          in_stack_00000010 = *(undefined8 *)(param_1 + 0x1c0);
          uVar14 = *(ulong *)(param_1 + 0x1c8);
          uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + 0x14);
          piVar21 = (int *)((ulong)uVar24 + lVar11);
          in_stack_00000018 = uVar14;
          iVar6 = FUN_05b52d54(lVar10,0);
          if (iVar6 == 0x38) {
            puVar13 = (undefined8 *)FUN_05b572b0(lVar10,0);
            in_stack_00000088 = puVar13[3];
            in_stack_00000098 = (double)puVar13[5];
            _bStack0000000000000090 = puVar13[4];
            _fStack00000000000000a0 = puVar13[6];
            in_stack_00000080 = (float)puVar13[2];
            uStack0000000000000084 = (undefined4)((ulong)puVar13[2] >> 0x20);
            in_stack_00000078 = (float)puVar13[1];
            fStack000000000000007c = (float)((ulong)puVar13[1] >> 0x20);
            in_stack_00000070 = (int)*puVar13;
            fStack0000000000000074 = (float)((ulong)*puVar13 >> 0x20);
          }
          else {
            _fStack00000000000000a0 = 0;
            in_stack_00000088 = 0;
            in_stack_00000080 = 0.0;
            uStack0000000000000084 = 0;
            in_stack_00000098 = 0.0;
            _bStack0000000000000090 = 0;
            in_stack_00000078 = 0.0;
            fStack000000000000007c = 0.0;
            in_stack_00000070 = 0;
            fStack0000000000000074 = 0.0;
            uVar18 = FUN_05b572b0(lVar10,0);
            uVar8 = FUN_05b52d54(lVar10,0);
            FUN_0609bf0c(&stack0x00000070,uVar18,uVar8,0);
          }
          _bStack0000000000000090 = (ushort)bStack0000000000000090;
          FUN_05b5014c(&stack0x00000070,0,0);
          FUN_05b5016c(&stack0x00000070,0,0);
          bVar5 = bStack0000000000000090 == '\x01';
          _bStack0000000000000090 =
               CONCAT44(**(undefined4 **)
                          (*(long *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<InputActionReference>_TryGet__
                          + 0xb8),_bStack0000000000000090);
          uVar24 = (uint)(uVar14 >> 0x20);
          if (bVar5) {
            if (0 < (int)uVar24) {
              uVar9 = 0;
              do {
                uVar14 = FUN_05b50070(piVar21,0);
                if ((uVar14 & 1) != 0) {
                  if (DAT_06bb435f == '\0') {
                    FUN_02f08768(PTR_DAT_067c9848);
                    DAT_06bb435f = '\x01';
                  }
                  fStack000000000000007c =
                       (float)**(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8);
                  in_stack_00000080 =
                       (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8) >> 0x20);
                  in_stack_00000098 = (double)FUN_05b4c7a4(&stack0x00000028,0);
                  _fStack00000000000000a0 = CONCAT44(in_stack_00000078,fStack0000000000000074);
                  FUN_05b500b4(&stack0x00000070,0,0);
                  FUN_05b500e0(&stack0x00000070,0,0);
                  FUN_05b5012c(&stack0x00000070,0,0);
                  if (piVar21 == (int *)0x0) goto LAB_05b0c230;
                  _bStack0000000000000090 =
                       CONCAT11(*(undefined1 *)((long)piVar21 + 0x21),bStack0000000000000090);
                  uVar14 = FUN_05b50070(uVar23 + lVar11,0);
                  if ((uVar14 & 1) != 0) {
                    FUN_05b500b4(&stack0x00000070,1,0);
                    FUN_0344e594(*(undefined8 *)(param_1 + 0x1b8),&stack0x00000070,0,
                                 uStack0000000000000028,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__
                                );
                  }
                  in_stack_00000018 = *(ulong *)(param_1 + 0x1c8);
                  in_stack_00000010 = *(undefined8 *)(param_1 + 0x1c0);
                  uVar18 = *(undefined8 *)puVar3;
                  uVar17 = (ulong)uVar9;
                  goto FUN_05b0c190;
                }
                uVar9 = uVar9 + 1;
                piVar21 = piVar21 + 0xe;
              } while (uVar24 != uVar9);
            }
          }
          else if (0 < (int)uVar24) {
            uVar17 = 0;
            piVar22 = piVar21;
            do {
              if (piVar22 == (int *)0x0) goto LAB_05b0c230;
              if (*piVar22 == in_stack_00000070) {
                uVar9 = FUN_05b500a8(piVar22,0);
                FUN_05b500b4(&stack0x00000070,uVar9 & 1,0);
                if (fStack000000000000007c * fStack000000000000007c +
                    in_stack_00000080 * in_stack_00000080 < DAT_011afbb8) {
                  fStack000000000000007c =
                       fStack0000000000000074 - (float)*(undefined8 *)(piVar22 + 1);
                  in_stack_00000080 =
                       in_stack_00000078 - (float)((ulong)*(undefined8 *)(piVar22 + 1) >> 0x20);
                }
                _fStack00000000000000a0 = *(undefined8 *)(piVar22 + 0xc);
                fStack000000000000007c =
                     fStack000000000000007c + (float)*(undefined8 *)(piVar22 + 3);
                in_stack_00000080 =
                     in_stack_00000080 + (float)((ulong)*(undefined8 *)(piVar22 + 3) >> 0x20);
                in_stack_00000098 = *(double *)(piVar22 + 10);
                uVar14 = FUN_05b50070(&stack0x00000070,0);
                if ((uVar14 & 1) == 0) {
LAB_05b0bff8:
                  cVar19 = *(char *)((long)piVar22 + 0x21);
                  bVar5 = true;
                }
                else {
                  dVar26 = (double)FUN_05b4c7a4(&stack0x00000028,0);
                  dVar4 = in_stack_00000098;
                  puVar2 = Method_System_Nullable<XRCameraConfiguration>_get_HasValue__;
                  lVar10 = *(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar10 = *(long *)puVar2;
                  }
                  lVar12 = *(long *)(lVar10 + 0xb8);
                  if ((double)*(float *)(lVar12 + 0x18) < dVar26 - dVar4) goto LAB_05b0bff8;
                  fVar25 = fStack0000000000000074 - fStack00000000000000a0;
                  fVar27 = in_stack_00000078 - fStack00000000000000a4;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar12 = *(long *)(*(long *)puVar2 + 0xb8);
                  }
                  if (*(float *)(lVar12 + 0x20) < fVar25 * fVar25 + fVar27 * fVar27)
                  goto LAB_05b0bff8;
                  bVar5 = false;
                  cVar19 = *(char *)((long)piVar22 + 0x21) + '\x01';
                }
                _bStack0000000000000090 = CONCAT11(cVar19,bStack0000000000000090);
                uVar14 = FUN_05b50070(&stack0x00000070,0);
                if ((uVar9 & 1) != 0) {
                  if ((uVar14 & 1) == 0) {
                    puVar13 = (undefined8 *)&stack0x00000070;
                    goto LAB_05b0c164;
                  }
                  FUN_05b500b4(&stack0x00000070,0,0);
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
    if (*(long *)(lVar1 + 0x28) == lStack00000000000000a8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_05b0c244;
  }
  goto LAB_05b0bcf8;
LAB_05b0c034:
  if ((uVar14 == 0) || (uVar15 = FUN_05b5008c(piVar21,0), (uVar15 & 1) == 0)) goto LAB_05b0c048;
  in_stack_00000038 = CONCAT44(fStack000000000000007c,in_stack_00000078);
  in_stack_00000030 = CONCAT44(fStack0000000000000074,in_stack_00000070);
  in_stack_00000040 = CONCAT44(uStack0000000000000084,in_stack_00000080);
  in_stack_00000048 = in_stack_00000088;
  in_stack_00000058 = in_stack_00000098;
  in_stack_00000050 = _bStack0000000000000090;
  in_stack_00000060 = _fStack00000000000000a0;
  FUN_05b4aaf0(&stack0x00000030,2,0);
  FUN_05b500e0(&stack0x00000030,1,0);
  puVar13 = &stack0x00000030;
LAB_05b0c164:
  FUN_0344e594(*(undefined8 *)(param_1 + 0x1b8),puVar13,0,uStack0000000000000028,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__);
  goto LAB_05b0c17c;
LAB_05b0c048:
  uVar18 = uStack0000000000000028;
  uVar23 = uVar23 - 1;
  uVar14 = uVar14 - 1;
  piVar21 = piVar21 + 0xe;
  if (uVar23 == 0) goto code_r0x05b0c058;
  goto LAB_05b0c034;
code_r0x05b0c058:
  uVar20 = *(undefined8 *)(param_1 + 0x1b8);
  if (bVar5) {
    FUN_0344e594(uVar20,&stack0x00000070,0,uStack0000000000000028,
                 *(undefined8 *)
                  Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__)
    ;
    goto Unity_Mathematics_int4__get_wxww;
  }
  if (*(int *)(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  Unity_Mathematics_int4__get_wyzx(uVar20,&stack0x00000070,uVar18);
LAB_05b0c1e0:
  in_stack_00000018 = *(ulong *)(param_1 + 0x1c8);
  in_stack_00000010 = *(undefined8 *)(param_1 + 0x1c0);
  uVar20 = FUN_040499dc(&stack0x00000010,uVar17 & 0xffffffff,*(undefined8 *)puVar3);
  uVar18 = uStack0000000000000028;
  if (*(int *)(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__ + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__);
  }
  Unity_Mathematics_int4__get_wyzx(uVar20,&stack0x00000070,uVar18);
  goto LAB_05b0bcf8;
  while( true ) {
    uVar15 = uVar15 - 1;
    uVar14 = uVar14 - 1;
    piVar21 = piVar21 + 0xe;
    if (uVar15 == 0) break;
Unity_Mathematics_int4__set_wxyz:
    if ((uVar14 != 0) && (uVar16 = FUN_05b5008c(piVar21,0), (uVar16 & 1) != 0)) goto LAB_05b0c17c;
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
  in_stack_00000018 = *(ulong *)(param_1 + 0x1c8);
  in_stack_00000010 = *(undefined8 *)(param_1 + 0x1c0);
  uVar18 = *(undefined8 *)puVar3;
  uVar17 = uVar17 & 0xffffffff;
FUN_05b0c190:
  uVar18 = FUN_040499dc(&stack0x00000010,uVar17,uVar18);
  FUN_0344e594(uVar18,&stack0x00000070,0,uStack0000000000000028,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__);
LAB_05b0bcf8:
  if (*(long *)(lVar1 + 0x28) == lStack00000000000000a8) {
    return;
  }
LAB_05b0c244:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


