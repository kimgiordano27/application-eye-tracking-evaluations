/*
FUNCTION_NAME: Unity.Mathematics.int4$$get_zxzz
ENTRY_POINT: 05b0bba8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_int4__get_zxzz(void)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  char cVar18;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar19;
  int *piVar20;
  int *piVar21;
  long unaff_x25;
  ulong uVar22;
  uint uVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
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
  long in_stack_000000a8;
  
  FUN_02f08768(Method_System_ValueTuple<string[],_OVRFaceExpressions_FaceExpression[]>__ctor__);
  FUN_02f08768(Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
  FUN_02f08768(Method_System_Nullable<XRCameraConfiguration>_get_HasValue__);
  *(undefined1 *)(unaff_x20 + 0x840) = 1;
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
  iVar5 = FUN_05b483f0(&stack0x00000028,0);
  if (iVar5 != 0x444c5441) {
    lVar9 = FUN_05b52a80(in_stack_00000028,0);
    if (lVar9 != 0) {
      iVar5 = *(int *)(lVar9 + 0x14);
      iVar6 = FUN_05b50038(0);
      if (iVar5 != iVar6) {
        FUN_05b58d74();
        goto LAB_05b0bcf8;
      }
      lVar10 = FUN_05abbe04();
      puVar2 = Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__;
      in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
      in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
      lVar11 = FUN_040499dc(&stack0x00000010,0,
                            *(undefined8 *)Method_System_ValueTuple<Vector2[],_Vector2[]>__ctor__);
      if (lVar11 != 0) {
        uVar23 = *(uint *)(lVar11 + 0x14);
        if (*(int *)(*(long *)PTR_DAT_067ca498 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067ca498);
        }
        if (*(long *)(unaff_x19 + 0x1b8) != 0) {
          in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
          uVar13 = *(ulong *)(unaff_x19 + 0x1c8);
          uVar22 = (ulong)*(uint *)(*(long *)(unaff_x19 + 0x1b8) + 0x14);
          piVar20 = (int *)((ulong)uVar23 + lVar10);
          in_stack_00000018 = uVar13;
          iVar5 = FUN_05b52d54(lVar9,0);
          if (iVar5 == 0x38) {
            puVar12 = (undefined8 *)FUN_05b572b0(lVar9,0);
            in_stack_00000088 = puVar12[3];
            in_stack_00000098 = (double)puVar12[5];
            _bStack0000000000000090 = puVar12[4];
            _fStack00000000000000a0 = puVar12[6];
            in_stack_00000080 = (float)puVar12[2];
            uStack0000000000000084 = (undefined4)((ulong)puVar12[2] >> 0x20);
            in_stack_00000078 = (float)puVar12[1];
            fStack000000000000007c = (float)((ulong)puVar12[1] >> 0x20);
            in_stack_00000070 = (int)*puVar12;
            fStack0000000000000074 = (float)((ulong)*puVar12 >> 0x20);
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
            uVar17 = FUN_05b572b0(lVar9,0);
            uVar7 = FUN_05b52d54(lVar9,0);
            FUN_0609bf0c(&stack0x00000070,uVar17,uVar7,0);
          }
          _bStack0000000000000090 = (ushort)bStack0000000000000090;
          FUN_05b5014c(&stack0x00000070,0,0);
          FUN_05b5016c(&stack0x00000070,0,0);
          bVar4 = bStack0000000000000090 == '\x01';
          _bStack0000000000000090 =
               CONCAT44(**(undefined4 **)
                          (*(long *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<InputActionReference>_TryGet__
                          + 0xb8),_bStack0000000000000090);
          uVar23 = (uint)(uVar13 >> 0x20);
          if (bVar4) {
            if (0 < (int)uVar23) {
              uVar8 = 0;
              do {
                uVar13 = FUN_05b50070(piVar20,0);
                if ((uVar13 & 1) != 0) {
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
                  if (piVar20 == (int *)0x0) goto LAB_05b0c230;
                  _bStack0000000000000090 =
                       CONCAT11(*(undefined1 *)((long)piVar20 + 0x21),bStack0000000000000090);
                  uVar13 = FUN_05b50070(uVar22 + lVar10,0);
                  if ((uVar13 & 1) != 0) {
                    FUN_05b500b4(&stack0x00000070,1,0);
                    FUN_0344e594(*(undefined8 *)(unaff_x19 + 0x1b8),&stack0x00000070,0,
                                 in_stack_00000028,
                                 *(undefined8 *)
                                  Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__
                                );
                  }
                  in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
                  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
                  uVar17 = *(undefined8 *)puVar2;
                  uVar16 = (ulong)uVar8;
                  goto FUN_05b0c190;
                }
                uVar8 = uVar8 + 1;
                piVar20 = piVar20 + 0xe;
              } while (uVar23 != uVar8);
            }
          }
          else if (0 < (int)uVar23) {
            uVar16 = 0;
            piVar21 = piVar20;
            do {
              if (piVar21 == (int *)0x0) goto LAB_05b0c230;
              if (*piVar21 == in_stack_00000070) {
                uVar8 = FUN_05b500a8(piVar21,0);
                FUN_05b500b4(&stack0x00000070,uVar8 & 1,0);
                if (fStack000000000000007c * fStack000000000000007c +
                    in_stack_00000080 * in_stack_00000080 < DAT_011afbb8) {
                  fStack000000000000007c =
                       fStack0000000000000074 - (float)*(undefined8 *)(piVar21 + 1);
                  in_stack_00000080 =
                       in_stack_00000078 - (float)((ulong)*(undefined8 *)(piVar21 + 1) >> 0x20);
                }
                _fStack00000000000000a0 = *(undefined8 *)(piVar21 + 0xc);
                fStack000000000000007c =
                     fStack000000000000007c + (float)*(undefined8 *)(piVar21 + 3);
                in_stack_00000080 =
                     in_stack_00000080 + (float)((ulong)*(undefined8 *)(piVar21 + 3) >> 0x20);
                in_stack_00000098 = *(double *)(piVar21 + 10);
                uVar13 = FUN_05b50070(&stack0x00000070,0);
                if ((uVar13 & 1) == 0) {
LAB_05b0bff8:
                  cVar18 = *(char *)((long)piVar21 + 0x21);
                  bVar4 = true;
                }
                else {
                  dVar25 = (double)FUN_05b4c7a4(&stack0x00000028,0);
                  dVar3 = in_stack_00000098;
                  puVar1 = Method_System_Nullable<XRCameraConfiguration>_get_HasValue__;
                  lVar9 = *(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar9 = *(long *)puVar1;
                  }
                  lVar11 = *(long *)(lVar9 + 0xb8);
                  if ((double)*(float *)(lVar11 + 0x18) < dVar25 - dVar3) goto LAB_05b0bff8;
                  fVar24 = fStack0000000000000074 - fStack00000000000000a0;
                  fVar26 = in_stack_00000078 - fStack00000000000000a4;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar11 = *(long *)(*(long *)puVar1 + 0xb8);
                  }
                  if (*(float *)(lVar11 + 0x20) < fVar24 * fVar24 + fVar26 * fVar26)
                  goto LAB_05b0bff8;
                  bVar4 = false;
                  cVar18 = *(char *)((long)piVar21 + 0x21) + '\x01';
                }
                _bStack0000000000000090 = CONCAT11(cVar18,bStack0000000000000090);
                uVar13 = FUN_05b50070(&stack0x00000070,0);
                if ((uVar8 & 1) != 0) {
                  if ((uVar13 & 1) == 0) {
                    puVar12 = (undefined8 *)&stack0x00000070;
                    goto LAB_05b0c164;
                  }
                  FUN_05b500b4(&stack0x00000070,0,0);
                  uVar13 = uVar16 & 0xffffffff;
                  if ((int)uVar23 < 2) {
                    uVar23 = 1;
                  }
                  uVar22 = (ulong)uVar23;
                  goto LAB_05b0c034;
                }
                if (((uVar13 & 1) == 0) ||
                   (uVar13 = FUN_05b500d4(uVar22 + lVar10,0), (uVar13 & 1) == 0)) goto LAB_05b0c17c;
                uVar13 = uVar16 & 0xffffffff;
                if ((int)uVar23 < 2) {
                  uVar23 = 1;
                }
                uVar14 = (ulong)uVar23;
                goto Unity_Mathematics_int4__set_wxyz;
              }
              uVar16 = uVar16 + 1;
              piVar21 = piVar21 + 0xe;
            } while (uVar13 >> 0x20 != uVar16);
          }
          goto LAB_05b0bcf8;
        }
      }
    }
LAB_05b0c230:
    if (*(long *)(unaff_x25 + 0x28) == in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_05b0c244;
  }
  goto LAB_05b0bcf8;
LAB_05b0c034:
  if ((uVar13 == 0) || (uVar14 = FUN_05b5008c(piVar20,0), (uVar14 & 1) == 0)) goto LAB_05b0c048;
  in_stack_00000038 = CONCAT44(fStack000000000000007c,in_stack_00000078);
  in_stack_00000030 = CONCAT44(fStack0000000000000074,in_stack_00000070);
  in_stack_00000040 = CONCAT44(uStack0000000000000084,in_stack_00000080);
  in_stack_00000048 = in_stack_00000088;
  in_stack_00000058 = in_stack_00000098;
  in_stack_00000050 = _bStack0000000000000090;
  in_stack_00000060 = _fStack00000000000000a0;
  FUN_05b4aaf0(&stack0x00000030,2,0);
  FUN_05b500e0(&stack0x00000030,1,0);
  puVar12 = &stack0x00000030;
LAB_05b0c164:
  FUN_0344e594(*(undefined8 *)(unaff_x19 + 0x1b8),puVar12,0,in_stack_00000028,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__);
  goto LAB_05b0c17c;
LAB_05b0c048:
  uVar17 = in_stack_00000028;
  uVar22 = uVar22 - 1;
  uVar13 = uVar13 - 1;
  piVar20 = piVar20 + 0xe;
  if (uVar22 == 0) goto code_r0x05b0c058;
  goto LAB_05b0c034;
code_r0x05b0c058:
  uVar19 = *(undefined8 *)(unaff_x19 + 0x1b8);
  if (bVar4) {
    FUN_0344e594(uVar19,&stack0x00000070,0,in_stack_00000028,
                 *(undefined8 *)
                  Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__)
    ;
    goto Unity_Mathematics_int4__get_wxww;
  }
  if (*(int *)(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  Unity_Mathematics_int4__get_wyzx(uVar19,&stack0x00000070,uVar17);
LAB_05b0c1e0:
  in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
  uVar19 = FUN_040499dc(&stack0x00000010,uVar16 & 0xffffffff,*(undefined8 *)puVar2);
  uVar17 = in_stack_00000028;
  if (*(int *)(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__ + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)Method_System_Nullable<XRCameraConfiguration>_get_HasValue__);
  }
  Unity_Mathematics_int4__get_wyzx(uVar19,&stack0x00000070,uVar17);
  goto LAB_05b0bcf8;
  while( true ) {
    uVar14 = uVar14 - 1;
    uVar13 = uVar13 - 1;
    piVar20 = piVar20 + 0xe;
    if (uVar14 == 0) break;
Unity_Mathematics_int4__set_wxyz:
    if ((uVar13 != 0) && (uVar15 = FUN_05b5008c(piVar20,0), (uVar15 & 1) != 0)) goto LAB_05b0c17c;
  }
  FUN_05b500e0(uVar22 + lVar10,0,0);
  if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05b0c230;
  FUN_0344dbb4(*(undefined8 *)(*(long *)(unaff_x19 + 0x1b8) + 0x1a8),3,0,0,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_OnBatchSaveAsyncComplete__
              );
LAB_05b0c17c:
  if (!bVar4) goto LAB_05b0c1e0;
Unity_Mathematics_int4__get_wxww:
  in_stack_00000018 = *(ulong *)(unaff_x19 + 0x1c8);
  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x1c0);
  uVar17 = *(undefined8 *)puVar2;
  uVar16 = uVar16 & 0xffffffff;
FUN_05b0c190:
  uVar17 = FUN_040499dc(&stack0x00000010,uVar16,uVar17);
  FUN_0344e594(uVar17,&stack0x00000070,0,in_stack_00000028,
               *(undefined8 *)
                Method_UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_TrySaveAnchorsAsync__);
LAB_05b0bcf8:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_000000a8) {
    return;
  }
LAB_05b0c244:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


