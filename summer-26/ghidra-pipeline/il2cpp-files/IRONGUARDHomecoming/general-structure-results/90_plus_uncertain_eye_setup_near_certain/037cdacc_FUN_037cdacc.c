/*
FUNCTION_NAME: FUN_037cdacc
ENTRY_POINT: 037cdacc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x037ce1e8) */

long FUN_037cdacc(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  
  puVar5 = StringLiteral_1083;
  puVar4 = StringLiteral_1082;
  puVar3 = StringLiteral_1081;
  if ((DAT_048376a9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_1084);
    thunk_FUN_01efb3a4(StringLiteral_1082);
    thunk_FUN_01efb3a4(StringLiteral_1081);
    thunk_FUN_01efb3a4(StringLiteral_1085);
    thunk_FUN_01efb3a4(StringLiteral_1086);
    thunk_FUN_01efb3a4(StringLiteral_1083);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_1087);
    thunk_FUN_01efb3a4(StringLiteral_1088);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ushort>__);
    thunk_FUN_01efb3a4(StringLiteral_1089);
    thunk_FUN_01efb3a4(StringLiteral_1090);
    thunk_FUN_01efb3a4(StringLiteral_1091);
    thunk_FUN_01efb3a4(StringLiteral_1092);
    thunk_FUN_01efb3a4(StringLiteral_1093);
    thunk_FUN_01efb3a4(StringLiteral_1094);
    thunk_FUN_01efb3a4(StringLiteral_1095);
    thunk_FUN_01efb3a4(StringLiteral_1096);
    DAT_048376a9 = 1;
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030f2380(lVar8,*(undefined8 *)puVar4);
  plVar9 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_03a2be28(plVar9,0);
  plVar19 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_1086);
  FUN_03a30434(lVar10,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)StringLiteral_1088;
  thunk_FUN_01f51358();
  *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)StringLiteral_1089;
  thunk_FUN_01f51358();
  *(undefined1 *)(lVar10 + 0x40) = 0;
  FUN_03a304c4(lVar10,1,0);
  *(undefined2 *)(lVar10 + 0x69) = 0x101;
  *(undefined1 *)(lVar10 + 0x6b) = 1;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03a2cdc4(plVar9,lVar10,0);
  FUN_03a2dc04(plVar9,0);
  plVar11 = (long *)FUN_03a2cfd0(plVar9,0);
  plVar12 = (long *)FUN_03a2d064(plVar9,0);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar13 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200));
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
  uVar13 = FUN_03405678(uVar13,uVar14,0);
  iVar6 = FUN_03a2bf84(plVar9,0);
  puVar3 = Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__;
  if (iVar6 == 0) {
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
    FUN_03a14b04(lVar10,*(undefined8 *)
                         Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ushort>__,0);
    lVar22 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_03a14b04(lVar22,*(undefined8 *)StringLiteral_1091,0);
    lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_03a14b04(lVar15,*(undefined8 *)StringLiteral_1095,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = FUN_03a13f0c(lVar10,uVar13,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar23 = 0;
      uVar21 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar21 <= uVar23) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar16 = FUN_03a13f0c(lVar22,*(undefined8 *)(lVar10 + 0x20 + uVar23 * 8),0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (4 < *(int *)(lVar16 + 0x18)) {
          if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar21 = FUN_0340e040(*(long *)(lVar16 + 0x28),*(undefined8 *)StringLiteral_1094,0);
          if ((uVar21 & 1) == 0) {
            if (*(uint *)(lVar16 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar21 = FUN_0340e040(*(long *)(lVar16 + 0x28),*(undefined8 *)StringLiteral_1093,0);
            if ((uVar21 & 1) == 0) goto LAB_037ce0dc;
          }
          if (*(uint *)(lVar16 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar17 = FUN_03a136cc(lVar15,*(undefined8 *)(lVar16 + 0x30),
                                *(undefined8 *)StringLiteral_1092,0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar18 = FUN_03410dc4(lVar17,0x3a,0,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar18 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar13 = *(undefined8 *)(lVar18 + 0x28);
          uVar21 = FUN_0340e600(param_1,uVar13,0);
          if ((uVar21 & 1) == 0) {
            if (*(uint *)(lVar16 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar21 = FUN_0340e040(*(long *)(lVar16 + 0x28),*(undefined8 *)StringLiteral_1094,0);
            if ((uVar21 & 1) == 0) {
              if (*(uint *)(lVar16 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar14 = *(undefined8 *)(lVar16 + 0x48);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar7 = FUN_035022e8(uVar14,0);
            }
            else {
              if (*(uint *)(lVar16 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar14 = *(undefined8 *)(lVar16 + 0x40);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar7 = FUN_035022e8(uVar14,0);
            }
            lVar18 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_1085);
            FUN_035ac8e8(lVar18,0);
            uVar21 = FUN_03412ef4(lVar17,*(undefined8 *)StringLiteral_1092,0);
            if ((uVar21 & 1) == 0) {
              if (*(uint *)(lVar16 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar14 = FUN_03406290(*(undefined8 *)StringLiteral_1087,*(undefined8 *)(lVar16 + 0x28)
                                    ,0);
            }
            else {
              if (*(uint *)(lVar16 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar14 = FUN_03406290(*(undefined8 *)StringLiteral_1090,*(undefined8 *)(lVar16 + 0x28)
                                    ,0);
            }
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(undefined8 *)(lVar18 + 0x28) = uVar14;
            thunk_FUN_01f51358();
            *(undefined8 *)(lVar18 + 0x20) = uVar13;
            thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x20),uVar13);
            uVar13 = FUN_037cda00(uVar7);
            *(undefined8 *)(lVar18 + 0x10) = uVar13;
            thunk_FUN_01f51358();
            *(undefined4 *)(lVar18 + 0x18) = uVar7;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar16 = *(long *)(lVar8 + 0x10);
            lVar17 = *(long *)StringLiteral_1084;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar19 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
              *plVar19 = lVar18;
              thunk_FUN_01f51358(plVar19,lVar18);
            }
            else {
              FUN_030f2bb4(lVar8,lVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
LAB_037ce0dc:
        uVar21 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar23 = uVar23 + 1;
      } while ((long)uVar23 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    lVar10 = 0;
    bVar2 = false;
    plVar19 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (plVar9 == (long *)0x0) goto LAB_037ce160;
  }
  else {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(*(undefined8 *)StringLiteral_1096,0);
    bVar2 = true;
    lVar10 = lVar8;
  }
  lVar22 = *plVar9;
  uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar23 != 0) {
    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == *plVar19) {
        puVar20 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_037ce154;
      }
      uVar23 = uVar23 - 1;
      piVar24 = piVar24 + 4;
    } while (uVar23 != 0);
  }
  puVar20 = (undefined8 *)FUN_01ecb238(plVar9,*plVar19,0);
LAB_037ce154:
  (*(code *)*puVar20)(plVar9,puVar20[1]);
LAB_037ce160:
  if (!bVar2) {
    lVar10 = lVar8;
  }
  return lVar10;
}


