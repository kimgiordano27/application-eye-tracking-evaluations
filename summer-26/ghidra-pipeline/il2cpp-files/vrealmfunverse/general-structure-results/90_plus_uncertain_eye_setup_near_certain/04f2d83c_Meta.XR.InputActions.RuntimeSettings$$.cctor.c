/*
FUNCTION_NAME: Meta.XR.InputActions.RuntimeSettings$$.cctor
ENTRY_POINT: 04f2d83c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04f2dfac) */
/* WARNING: Removing unreachable block (ram,0x04f2e054) */
/* WARNING: Removing unreachable block (ram,0x04f2e070) */
/* WARNING: Removing unreachable block (ram,0x04f2ddac) */

void Meta_XR_InputActions_RuntimeSettings___cctor(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 unaff_d9;
  float unaff_s10;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
  plVar7 = (long *)FUN_031bf830();
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
                    /* try { // try from 04f2d84c to 0502d853 has its CatchHandler @ 04f2d938 */
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
                    /* try { // try from 04f2d860 to 0502d863 has its CatchHandler @ 04f2d8c4 */
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 04f2d868 to 0502d86b has its CatchHandler @ 04f2d8c0 */
                    /* try { // try from 04f2d870 to 0502d873 has its CatchHandler @ 04f2d8bc */
        if (*(long *)(piVar14 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_long>_TypeInfo) {
                    /* catch() { ... } // from try @ 04f2d888 with catch @ 04f2d890 */
                    /* catch() { ... } // from try @ 04f2d734 with catch @ 04f2d894
                       catch() { ... } // from try @ 04f2d79c with catch @ 04f2d894 */
                    /* catch() { ... } // from try @ 04f2d680 with catch @ 04f2d898 */
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04f2d89c;
        }
        uVar13 = uVar13 - 1;
                    /* try { // try from 04f2d878 to 0502d87b has its CatchHandler @ 04f2d8a8 */
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
                    /* try { // try from 04f2d880 to 0502d883 has its CatchHandler @ 04f2d8a0 */
                    /* try { // try from 04f2d888 to 0502d88b has its CatchHandler @ 04f2d890 */
    puVar8 = (undefined8 *)
             FUN_02b7654c(plVar7,*(long *)System_Collections_Generic_Dictionary<int,_long>_TypeInfo,
                          0);
                    /* try { // try from 04f2d88c to 0502d8f3 has its CatchHandler @ 04f2d02c */
LAB_04f2d89c:
                    /* catch() { ... } // from try @ 04f2d6b4 with catch @ 04f2d89c */
                    /* catch() { ... } // from try @ 04f2d880 with catch @ 04f2d8a0 */
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar5 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
    puVar4 = PTR_DAT_063151a0;
    puVar3 = PTR_DAT_06312cd8;
    puVar2 = PTR_DAT_06312520;
    in_stack_00000028 = &stack0x00000048;
    in_stack_00000020 = 0;
joined_r0x04f2d8b4:
    in_stack_00000048 = plVar7;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f90) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04f2d938;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f90,0);
LAB_04f2d938:
    uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    plVar7 = in_stack_00000048;
    if ((uVar13 & 1) != 0) {
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *in_stack_00000048;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<int,_Material>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04f2d9a4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02b7654c(in_stack_00000048,
                            *(long *)System_Collections_Generic_Dictionary<int,_Material>_TypeInfo,0
                           );
LAB_04f2d9a4:
      lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      plVar7 = *(long **)(lVar10 + 0x18);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_TypeInfo) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04f2da14;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_02b7654c(plVar7,*(long *)
                                    System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_TypeInfo
                            ,0);
LAB_04f2da14:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar15 = unaff_d9;
      fVar18 = unaff_s10;
      do {
        in_stack_00000038 = plVar7;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f90) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04f2da94;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f90,0);
LAB_04f2da94:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        plVar7 = in_stack_00000038;
        if ((uVar13 & 1) == 0) goto LAB_04f2dc14;
        if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar11 = *in_stack_00000038;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04f2db00;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_02b7654c(in_stack_00000038,
                              *(long *)
                               System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TypeInfo
                              ,0);
LAB_04f2db00:
        uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
        uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar11 = FUN_032404a4(uVar16,uVar1,*(undefined8 *)puVar4);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar11 = FUN_031d80b0(lVar11,*(undefined8 *)puVar5);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar16 = *(undefined8 *)(unaff_x19 + 0x28);
        uVar6 = *(undefined4 *)(lVar10 + 0x10);
        *(undefined8 *)(lVar11 + 0x68) = uVar9;
        *(undefined1 *)(lVar11 + 0x70) = 1;
        *(undefined4 *)(lVar11 + 100) = uVar6;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x68),uVar9);
        *(undefined8 *)(lVar11 + 0x50) = uVar16;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x50),uVar16);
        lVar11 = FUN_05c89340(lVar11,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05c9c840(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                     *(undefined4 *)(unaff_x19 + 0x90),lVar11,0);
        if (DAT_066c1d9a == '\0') {
          FUN_02b3c81c(puVar3);
          DAT_066c1d9a = '\x01';
        }
        puVar12 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_05c9c3b0(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar11,0);
        fVar17 = (float)((ulong)uVar15 >> 0x20);
        FUN_05c9b4fc(uVar15,fVar17,fVar18,lVar11,0);
        uVar15 = CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                          (float)uVar15 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
        fVar18 = fVar18 + *(float *)(unaff_x19 + 0x84);
        plVar7 = in_stack_00000038;
      } while( true );
    }
    plVar7 = (long *)*in_stack_00000028;
    if (plVar7 == (long *)0x0) goto LAB_04f2dd9c;
    lVar10 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 == 0) goto LAB_04f2dd74;
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_04f2dd5c;
  }
  goto LAB_04f2e068;
LAB_04f2dc14:
  if (in_stack_00000038 != (long *)0x0) {
    lVar10 = *in_stack_00000038;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04f2dc78;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(in_stack_00000038,*(long *)PTR_DAT_06312f78,0);
LAB_04f2dc78:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
  plVar7 = in_stack_00000048;
  goto joined_r0x04f2d8b4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_04f2dd5c:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04f2dd90;
    }
  }
LAB_04f2dd74:
  puVar8 = (undefined8 *)FUN_02b7654c(plVar7,*(long *)PTR_DAT_06312f78,0);
LAB_04f2dd90:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_04f2dd9c:
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar7 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar7 != (long *)0x0)) {
    lVar10 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    uVar15 = *(undefined8 *)PTR_DAT_06312a80;
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04f2de20;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02b7654c(plVar7,*(long *)
                                  System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo,0);
LAB_04f2de20:
    puVar2 = System_Collections_Generic_Dictionary<int,_ManualResetEvent>_TypeInfo;
    in_stack_00000030 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    in_stack_00000028 = &stack0x00000030;
    in_stack_00000020 = 0;
    do {
      plVar7 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *in_stack_00000030;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f90) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04f2dea0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)PTR_DAT_06312f90,0);
LAB_04f2dea0:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      plVar7 = in_stack_00000030;
      if ((uVar13 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_04f2dfa0;
        lVar10 = *in_stack_00000030;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_04f2df78;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_04f2df60;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *in_stack_00000030;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04f2df04;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)puVar2,0);
LAB_04f2df04:
      lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar15 = FUN_04bffdac(uVar15,*(undefined8 *)(lVar10 + 0x18),0);
    } while( true );
  }
  goto LAB_04f2e068;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_04f2df60:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto FUN_04f2df94;
    }
  }
LAB_04f2df78:
  puVar8 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)PTR_DAT_06312f78,0);
FUN_04f2df94:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_04f2dfa0:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar7 = *(long **)(unaff_x19 + 0x98);
    uVar6 = FUN_04f26774(*(long *)(unaff_x19 + 0x30),0);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar6);
    uVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)System_Collections_Generic_Dictionary<int,_int>_TypeInfo,
                        &stack0x00000020);
    uVar15 = FUN_04c0af28(*(undefined8 *)System_Collections_Generic_Dictionary<int,_Panel>_TypeInfo,
                          uVar16,uVar15,0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x558))(plVar7,uVar15,*(undefined8 *)(*plVar7 + 0x560));
      return;
    }
  }
LAB_04f2e068:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


