/*
FUNCTION_NAME: Shapes.ProceduralTree$$BranchFrom
ENTRY_POINT: 037cdb38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x037ce1e8) */

long Shapes_ProceduralTree__BranchFrom(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x28;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xdb8));
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
                    /* try { // try from 037cdbdc to 038cddb7 has its CatchHandler @ 037cdbdc
                       catch() { ... } // from try @ 037cdbdc with catch @ 037cdbdc
                       catch() { ... } // from try @ 037cddf8 with catch @ 037cdbdc
                       catch() { ... } // from try @ 037cde40 with catch @ 037cdbdc
                       catch() { ... } // from try @ 037cde70 with catch @ 037cdbdc */
  thunk_FUN_01efb3a4(StringLiteral_1093);
  thunk_FUN_01efb3a4(StringLiteral_1094);
  thunk_FUN_01efb3a4(StringLiteral_1095);
  thunk_FUN_01efb3a4(StringLiteral_1096);
  *(undefined1 *)(unaff_x21 + 0x6a9) = 1;
  lVar6 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_030f2380(lVar6,*unaff_x19);
  plVar7 = (long *)thunk_FUN_01f117cc(*unaff_x20);
  FUN_03a2be28(plVar7,0);
  plVar17 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_1086);
  FUN_03a30434(lVar8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)StringLiteral_1088;
  thunk_FUN_01f51358();
  *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)StringLiteral_1089;
  thunk_FUN_01f51358();
  *(undefined1 *)(lVar8 + 0x40) = 0;
  FUN_03a304c4(lVar8,1,0);
  *(undefined2 *)(lVar8 + 0x69) = 0x101;
  *(undefined1 *)(lVar8 + 0x6b) = 1;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03a2cdc4(plVar7,lVar8,0);
  FUN_03a2dc04(plVar7,0);
  plVar9 = (long *)FUN_03a2cfd0(plVar7,0);
  plVar10 = (long *)FUN_03a2d064(plVar7,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
  uVar11 = FUN_03405678(uVar11,uVar12,0);
  iVar4 = FUN_03a2bf84(plVar7,0);
  puVar3 = Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__;
  if (iVar4 == 0) {
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
    FUN_03a14b04(lVar8,*(undefined8 *)
                        Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ushort>__,0);
    lVar20 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
                    /* try { // try from 037cddb8 to 038cddbf has its CatchHandler @ 037cde20 */
                    /* try { // try from 037cddcc to 038cddf7 has its CatchHandler @ 037cde24 */
    FUN_03a14b04(lVar20,*(undefined8 *)StringLiteral_1091,0);
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_03a14b04(lVar13,*(undefined8 *)StringLiteral_1095,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 037cddf8 to 038cde3b has its CatchHandler @ 037cdbdc */
    lVar8 = FUN_03a13f0c(lVar8,uVar11,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar21 = 0;
      uVar19 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 037cddb8 with catch @ 037cde20
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 037cddcc with catch @ 037cde24
                        */
      do {
        if (uVar19 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
                    /* try { // try from 037cde3c to 038cde3f has its CatchHandler @ 037cde60 */
                    /* try { // try from 037cde40 to 038cde67 has its CatchHandler @ 037cdbdc */
        lVar14 = FUN_03a13f0c(lVar20,*(undefined8 *)(lVar8 + 0x20 + uVar21 * 8),0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (4 < *(int *)(lVar14 + 0x18)) {
          if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
                    /* catch() { ... } // from try @ 037cde3c with catch @ 037cde60 */
                    /* try { // try from 037cde68 to 038cde6f has its CatchHandler @ 037cde84 */
                    /* try { // try from 037cde70 to 038cde7b has its CatchHandler @ 037cdbdc */
          uVar19 = FUN_0340e040(*(long *)(lVar14 + 0x28),*(undefined8 *)StringLiteral_1094,0);
          if ((uVar19 & 1) == 0) {
                    /* try { // try from 037cde7c to 038cde83 has its CatchHandler @ 037cde84 */
            if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 037cde68 with catch @ 037cde84
                       catch(type#2 @ 00000000) { ... } // from try @ 037cde7c with catch @ 037cde84
                        */
            if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar19 = FUN_0340e040(*(long *)(lVar14 + 0x28),*(undefined8 *)StringLiteral_1093,0);
            if ((uVar19 & 1) == 0) goto LAB_037ce0dc;
          }
          if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar15 = FUN_03a136cc(lVar13,*(undefined8 *)(lVar14 + 0x30),
                                *(undefined8 *)StringLiteral_1092,0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar16 = FUN_03410dc4(lVar15,0x3a,0,0);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar16 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar11 = *(undefined8 *)(lVar16 + 0x28);
          uVar19 = FUN_0340e600(unaff_x28,uVar11,0);
          if ((uVar19 & 1) == 0) {
            if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(long *)(lVar14 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar19 = FUN_0340e040(*(long *)(lVar14 + 0x28),*(undefined8 *)StringLiteral_1094,0);
            if ((uVar19 & 1) == 0) {
              if (*(uint *)(lVar14 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar12 = *(undefined8 *)(lVar14 + 0x48);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar5 = FUN_035022e8(uVar12,0);
            }
            else {
              if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar12 = *(undefined8 *)(lVar14 + 0x40);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar5 = FUN_035022e8(uVar12,0);
            }
            lVar16 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_1085);
            FUN_035ac8e8(lVar16,0);
            uVar19 = FUN_03412ef4(lVar15,*(undefined8 *)StringLiteral_1092,0);
            if ((uVar19 & 1) == 0) {
              if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar12 = FUN_03406290(*(undefined8 *)StringLiteral_1087,*(undefined8 *)(lVar14 + 0x28)
                                    ,0);
            }
            else {
              if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar12 = FUN_03406290(*(undefined8 *)StringLiteral_1090,*(undefined8 *)(lVar14 + 0x28)
                                    ,0);
            }
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(undefined8 *)(lVar16 + 0x28) = uVar12;
            thunk_FUN_01f51358();
            *(undefined8 *)(lVar16 + 0x20) = uVar11;
            thunk_FUN_01f51358((undefined8 *)(lVar16 + 0x20),uVar11);
            uVar11 = FUN_037cda00(uVar5);
            *(undefined8 *)(lVar16 + 0x10) = uVar11;
            thunk_FUN_01f51358();
            *(undefined4 *)(lVar16 + 0x18) = uVar5;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = *(long *)(lVar6 + 0x10);
            lVar15 = *(long *)StringLiteral_1084;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar17 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
              *plVar17 = lVar16;
              thunk_FUN_01f51358(plVar17,lVar16);
            }
            else {
              FUN_030f2bb4(lVar6,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
LAB_037ce0dc:
        uVar19 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar21 = uVar21 + 1;
      } while ((long)uVar21 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    lVar8 = 0;
    bVar2 = false;
    plVar17 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (plVar7 == (long *)0x0) goto LAB_037ce160;
  }
  else {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(*(undefined8 *)StringLiteral_1096,0);
    bVar2 = true;
    lVar8 = lVar6;
  }
  lVar20 = *plVar7;
  uVar21 = (ulong)*(ushort *)(lVar20 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) == *plVar17) {
        puVar18 = (undefined8 *)(lVar20 + (long)*piVar22 * 0x10 + 0x138);
        goto LAB_037ce154;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar18 = (undefined8 *)FUN_01ecb238(plVar7,*plVar17,0);
LAB_037ce154:
  (*(code *)*puVar18)(plVar7,puVar18[1]);
LAB_037ce160:
  if (!bVar2) {
    lVar8 = lVar6;
  }
  return lVar8;
}


