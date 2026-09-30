/*
FUNCTION_NAME: FUN_01f6a2b8
ENTRY_POINT: 01f6a2b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_01f6a2b8(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  int iVar24;
  long *plVar25;
  int iVar26;
  
  if ((DAT_03780428 & 1) == 0) {
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
                    /* try { // try from 01f6a2f8 to 0206a2ff has its CatchHandler @ 01f6a31c */
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__);
                    /* try { // try from 01f6a300 to 0206a303 has its CatchHandler @ 01f6a318 */
                    /* try { // try from 01f6a304 to 0206a307 has its CatchHandler @ 01f69f24 */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
                    /* try { // try from 01f6a308 to 0206a30b has its CatchHandler @ 01f6a314 */
                    /* try { // try from 01f6a30c to 0206a34f has its CatchHandler @ 01f69f24 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
                    /* catch() { ... } // from try @ 01f6a308 with catch @ 01f6a314 */
                    /* catch() { ... } // from try @ 01f6a300 with catch @ 01f6a318 */
                    /* catch() { ... } // from try @ 01f6a2f8 with catch @ 01f6a31c */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
                    /* catch() { ... } // from try @ 01f6a238 with catch @ 01f6a320 */
                    /* catch() { ... } // from try @ 01f6a21c with catch @ 01f6a324 */
                    /* catch() { ... } // from try @ 01f6a1fc with catch @ 01f6a328 */
    thunk_FUN_00d48444(System_Func<LocalizationData,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 01f6a1d8 with catch @ 01f6a32c */
                    /* catch() { ... } // from try @ 01f6a1e8 with catch @ 01f6a330 */
    DAT_03780428 = 1;
  }
                    /* catch() { ... } // from try @ 01f6a18c with catch @ 01f6a334 */
  if (param_1 == 0) {
    return 0;
  }
                    /* catch() { ... } // from try @ 01f6a130 with catch @ 01f6a338 */
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    return param_1;
  }
  iVar6 = FUN_016047a8(param_1,0x5f,0);
  puVar4 = Method_System_Collections_Generic_List<Type>_Add__;
                    /* try { // try from 01f6a350 to 0206a353 has its CatchHandler @ 01f6a3e0 */
  if (iVar6 < 0) {
    return param_1;
  }
  lVar8 = *(long *)Method_System_Collections_Generic_List<Type>_Add__;
                    /* try { // try from 01f6a364 to 0206a3cb has its CatchHandler @ 01f6a3e8 */
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
  thunk_FUN_00d8e500();
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    if (lVar8 == 0) goto LAB_01f6abd8;
    FUN_020217f0(lVar8,*(undefined8 *)System_Func<LocalizationData,_bool>_TypeInfo,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    thunk_FUN_00d8e500();
    lVar9 = *(long *)puVar4;
    *(long *)(*(long *)(lVar9 + 0xb8) + 0x20) = lVar8;
  }
  else {
    lVar9 = *(long *)puVar4;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
  thunk_FUN_00d8e500();
  if ((lVar8 == 0) ||
     (lVar8 = FUN_02020340(lVar8,param_1,iVar6,0),
     plVar25 = (long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__,
     lVar8 == 0)) goto LAB_01f6abd8;
  plVar10 = (long *)FUN_0201e4d8(lVar8,0);
  if (plVar10 == (long *)0x0) {
LAB_01f6a4c4:
    iVar6 = -1;
  }
  else {
    lVar8 = *plVar10;
    uVar22 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *plVar25) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_01f6a474;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar10,*plVar25,0);
LAB_01f6a474:
    uVar22 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if ((uVar22 & 1) == 0) goto LAB_01f6a4c4;
    lVar8 = *plVar10;
    uVar22 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == *plVar25) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar23 + 1) * 0x10 + 0x138);
          goto LAB_01f6a4e0;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar10,*plVar25,1);
LAB_01f6a4e0:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar12 == (long *)0x0) goto LAB_01f6abd8;
    bVar3 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__ + 300);
    if ((*(byte *)(*plVar12 + 300) < bVar3) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__)) {
LAB_01f6abdc:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    iVar6 = (int)plVar12[2];
  }
  lVar8 = *(long *)puVar4;
  iVar26 = 0;
  iVar24 = 0;
  plVar12 = (long *)0x0;
  while( true ) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar4;
    }
    if ((iVar2 + 1) - *(int *)(*(long *)(lVar8 + 0xb8) + 0x10) <= iVar26) break;
    if (iVar26 == iVar6) {
      if (plVar10 == (long *)0x0) goto LAB_01f6abd8;
      lVar8 = *plVar10;
      uVar22 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar22 != 0) {
        piVar23 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == *plVar25) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar23 * 0x10 + 0x138);
            goto LAB_01f6a5d0;
          }
          uVar22 = uVar22 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar22 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar10,*plVar25,0);
LAB_01f6a5d0:
      uVar22 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      iVar6 = iVar26;
      if ((uVar22 & 1) != 0) {
        lVar8 = *plVar10;
        uVar22 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *plVar25) {
              puVar11 = (undefined8 *)(lVar8 + (long)(*piVar23 + 1) * 0x10 + 0x138);
              goto LAB_01f6a634;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724(plVar10,*plVar25,1);
LAB_01f6a634:
        plVar13 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar13 == (long *)0x0) goto LAB_01f6abd8;
        bVar3 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__ + 300);
        if ((*(byte *)(*plVar13 + 300) < bVar3) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsliq_n_s16__)) goto LAB_01f6abdc;
        iVar6 = (int)plVar13[2];
      }
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                            );
        if (plVar12 == (long *)0x0) goto LAB_01f6abd8;
        FUN_0160aab0(plVar12,iVar2 + 0x14,0);
      }
      FUN_0160c56c(plVar12,param_1,iVar24,iVar26 - iVar24,0);
      sVar5 = FUN_015fa29c(param_1,iVar26 + 6,0);
      if (sVar5 == 0x5f) {
        lVar8 = *(long *)puVar4;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar4;
        }
        iVar24 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x10);
        uVar7 = FUN_015fa29c(param_1,iVar26 + 2,0);
        if ((uVar7 & 0xffff) < 0x3a) {
          iVar14 = uVar7 - 0x30;
        }
        else {
          iVar14 = -0x41;
          if (0x46 < (uVar7 & 0xffff)) {
            iVar14 = -0x61;
          }
          iVar14 = uVar7 + iVar14 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 3,0);
        if ((uVar7 & 0xffff) < 0x3a) {
          iVar15 = uVar7 - 0x30;
        }
        else {
          iVar15 = -0x41;
          if (0x46 < (uVar7 & 0xffff)) {
            iVar15 = -0x61;
          }
          iVar15 = uVar7 + iVar15 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 4,0);
        if ((uVar7 & 0xffff) < 0x3a) {
          iVar16 = uVar7 - 0x30;
        }
        else {
          iVar16 = -0x41;
          if (0x46 < (uVar7 & 0xffff)) {
            iVar16 = -0x61;
          }
          iVar16 = uVar7 + iVar16 + 10;
        }
        iVar24 = iVar24 + iVar26;
        uVar7 = FUN_015fa29c(param_1,iVar26 + 5,0);
        if ((uVar7 & 0xffff) < 0x3a) {
          iVar17 = uVar7 - 0x30;
        }
        else {
          iVar17 = -0x41;
          if (0x46 < (uVar7 & 0xffff)) {
            iVar17 = -0x61;
          }
          iVar17 = uVar7 + iVar17 + 10;
        }
        FUN_0160cd0c(plVar12,iVar15 * 0x100 + iVar14 * 0x1000 + iVar16 * 0x10 + iVar17,0);
        lVar8 = *(long *)puVar4;
        iVar26 = iVar26 + *(int *)(*(long *)(lVar8 + 0xb8) + 0x10) + -1;
      }
      else {
        uVar7 = FUN_015fa29c(param_1,iVar26 + 2,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        uVar7 = uVar7 & 0xffff;
        if (uVar7 < 0x3a) {
          iVar14 = uVar7 - 0x30;
        }
        else {
          iVar14 = -0x41;
          if (0x46 < uVar7) {
            iVar14 = -0x61;
          }
          iVar14 = uVar7 + iVar14 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 3,0);
        uVar7 = uVar7 & 0xffff;
        if (uVar7 < 0x3a) {
          iVar15 = uVar7 - 0x30;
        }
        else {
          iVar15 = -0x41;
          if (0x46 < uVar7) {
            iVar15 = -0x61;
          }
          iVar15 = uVar7 + iVar15 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 4,0);
        uVar7 = uVar7 & 0xffff;
        if (uVar7 < 0x3a) {
          iVar16 = uVar7 - 0x30;
        }
        else {
          iVar16 = -0x41;
          if (0x46 < uVar7) {
            iVar16 = -0x61;
          }
          iVar16 = uVar7 + iVar16 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 5,0);
        uVar7 = uVar7 & 0xffff;
        if (uVar7 < 0x3a) {
          iVar17 = uVar7 - 0x30;
        }
        else {
          iVar17 = -0x41;
          if (0x46 < uVar7) {
            iVar17 = -0x61;
          }
          iVar17 = uVar7 + iVar17 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 6,0);
        uVar7 = uVar7 & 0xffff;
        if (uVar7 < 0x3a) {
          iVar18 = uVar7 - 0x30;
        }
        else {
          iVar18 = -0x41;
          if (0x46 < uVar7) {
            iVar18 = -0x61;
          }
          iVar18 = uVar7 + iVar18 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 7,0);
        uVar7 = uVar7 & 0xffff;
        if (uVar7 < 0x3a) {
          iVar19 = uVar7 - 0x30;
        }
        else {
          iVar19 = -0x41;
          if (0x46 < uVar7) {
            iVar19 = -0x61;
          }
          iVar19 = uVar7 + iVar19 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 8,0);
        uVar7 = uVar7 & 0xffff;
        if (uVar7 < 0x3a) {
          iVar20 = uVar7 - 0x30;
        }
        else {
          iVar20 = -0x41;
          if (0x46 < uVar7) {
            iVar20 = -0x61;
          }
          iVar20 = uVar7 + iVar20 + 10;
        }
        uVar7 = FUN_015fa29c(param_1,iVar26 + 9,0);
        plVar25 = (long *)
                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        uVar7 = uVar7 & 0xffff;
        if (uVar7 < 0x3a) {
          iVar21 = uVar7 - 0x30;
        }
        else {
          iVar21 = -0x41;
          if (0x46 < uVar7) {
            iVar21 = -0x61;
          }
          iVar21 = uVar7 + iVar21 + 10;
        }
        iVar21 = iVar15 * 0x1000000 + iVar14 * 0x10000000 + iVar16 * 0x100000 + iVar17 * 0x10000 +
                 iVar18 * 0x1000 + iVar19 * 0x100 + iVar20 * 0x10 + iVar21;
        uVar7 = iVar21 - 0x10000;
        if (iVar21 < 0x10000) {
          lVar8 = *(long *)puVar4;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar8 = *(long *)puVar4;
          }
          iVar24 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x10);
LAB_01f6ab18:
          iVar24 = iVar26 + 4 + iVar24;
          FUN_0160cd0c(plVar12,iVar21,0);
        }
        else if (iVar21 < 0x110000) {
          lVar8 = *(long *)puVar4;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar8 = *(long *)puVar4;
          }
          uVar1 = iVar21 - 0xfc01;
          if (-1 < (int)uVar7) {
            uVar1 = uVar7;
          }
          iVar24 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x10);
          iVar21 = (uVar7 - (uVar1 & 0xfffffc00)) + -0x2400;
          FUN_0160cd0c(plVar12,(uVar1 >> 10) - 0x2800,0);
          goto LAB_01f6ab18;
        }
        lVar8 = *(long *)puVar4;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar8 = *(long *)puVar4;
        }
        iVar26 = iVar26 + 3 + *(int *)(*(long *)(lVar8 + 0xb8) + 0x10);
      }
    }
    iVar26 = iVar26 + 1;
  }
  if (iVar24 == 0) {
    return param_1;
  }
  if (iVar2 - iVar24 == 0 || iVar2 < iVar24) {
    if (plVar12 != (long *)0x0) goto LAB_01f6abac;
  }
  else if (plVar12 != (long *)0x0) {
    FUN_0160c56c(plVar12,param_1,iVar24,iVar2 - iVar24,0);
LAB_01f6abac:
                    /* WARNING: Could not recover jumptable at 0x01f6abd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    return lVar8;
  }
LAB_01f6abd8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


