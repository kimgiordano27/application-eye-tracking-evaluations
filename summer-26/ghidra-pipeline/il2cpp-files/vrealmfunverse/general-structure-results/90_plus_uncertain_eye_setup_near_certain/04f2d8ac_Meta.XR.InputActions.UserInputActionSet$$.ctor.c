/*
FUNCTION_NAME: Meta.XR.InputActions.UserInputActionSet$$.ctor
ENTRY_POINT: 04f2d8ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04f2dfac) */
/* WARNING: Removing unreachable block (ram,0x04f2e054) */
/* WARNING: Removing unreachable block (ram,0x04f2e070) */
/* WARNING: Removing unreachable block (ram,0x04f2ddac) */

void Meta_XR_InputActions_UserInputActionSet___ctor(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 unaff_d9;
  float unaff_s10;
  long lStack0000000000000020;
  undefined8 *puStack0000000000000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *plStack0000000000000048;
  
  puVar5 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
  puVar4 = PTR_DAT_063151a0;
  puVar3 = PTR_DAT_06312cd8;
                    /* catch() { ... } // from try @ 04f2d768 with catch @ 04f2d8ac */
  puVar2 = PTR_DAT_06312520;
                    /* catch() { ... } // from try @ 04f2d6e8 with catch @ 04f2d8b0 */
  lStack0000000000000020 = 0;
  puStack0000000000000028 = param_1;
joined_r0x04f2d8b4:
                    /* catch() { ... } // from try @ 04f2d684 with catch @ 04f2d8b4 */
  plStack0000000000000048 = param_2;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar9 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 04f2d8f4 to 0502d8f7 has its CatchHandler @ 04f2d924 */
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
                    /* try { // try from 04f2d904 to 0502d907 has its CatchHandler @ 04f2d964 */
                    /* try { // try from 04f2d908 to 0502d90b has its CatchHandler @ 04f2d958 */
                    /* try { // try from 04f2d90c to 0502d90f has its CatchHandler @ 04f2d954 */
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f90) {
                    /* try { // try from 04f2d92c to 0502d933 has its CatchHandler @ 04f2da44 */
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_04f2d938;
      }
                    /* try { // try from 04f2d910 to 0502d913 has its CatchHandler @ 04f2d944 */
      uVar12 = uVar12 - 1;
                    /* try { // try from 04f2d914 to 0502d91b has its CatchHandler @ 04f2d940 */
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
                    /* try { // try from 04f2d91c to 0502d91f has its CatchHandler @ 04f2d93c */
                    /* try { // try from 04f2d920 to 0502d92b has its CatchHandler @ 04f2d02c */
                    /* catch() { ... } // from try @ 04f2d8f4 with catch @ 04f2d924 */
  puVar7 = (undefined8 *)FUN_02b7654c(param_2,*(long *)PTR_DAT_06312f90,0);
LAB_04f2d938:
  uVar12 = (*(code *)*puVar7)(param_2,puVar7[1]);
  plVar15 = plStack0000000000000048;
  if ((uVar12 & 1) != 0) {
    if (plStack0000000000000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar9 = *plStack0000000000000048;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_Material>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04f2d9a4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02b7654c(plStack0000000000000048,
                          *(long *)System_Collections_Generic_Dictionary<int,_Material>_TypeInfo,0);
LAB_04f2d9a4:
    lVar9 = (*(code *)*puVar7)(plVar15,puVar7[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar15 = *(long **)(lVar9 + 0x18);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04f2da14;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02b7654c(plVar15,*(long *)
                                   System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_TypeInfo
                          ,0);
LAB_04f2da14:
    plVar15 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
    uVar14 = unaff_d9;
    fVar18 = unaff_s10;
    do {
      in_stack_00000038 = plVar15;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f90) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04f2da94;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c(plVar15,*(long *)PTR_DAT_06312f90,0);
LAB_04f2da94:
      uVar12 = (*(code *)*puVar7)(plVar15,puVar7[1]);
      plVar15 = in_stack_00000038;
      if ((uVar12 & 1) == 0) goto LAB_04f2dc14;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = *in_stack_00000038;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04f2db00;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02b7654c(in_stack_00000038,
                            *(long *)
                             System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TypeInfo,
                            0);
LAB_04f2db00:
      uVar8 = (*(code *)*puVar7)(plVar15,puVar7[1]);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar10 = FUN_032404a4(uVar16,uVar1,*(undefined8 *)puVar4);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar10 = FUN_031d80b0(lVar10,*(undefined8 *)puVar5);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar16 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar6 = *(undefined4 *)(lVar9 + 0x10);
      *(undefined8 *)(lVar10 + 0x68) = uVar8;
      *(undefined1 *)(lVar10 + 0x70) = 1;
      *(undefined4 *)(lVar10 + 100) = uVar6;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x68),uVar8);
      *(undefined8 *)(lVar10 + 0x50) = uVar16;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x50),uVar16);
      lVar10 = FUN_05c89340(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05c9c840(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                   *(undefined4 *)(unaff_x19 + 0x90),lVar10,0);
      if (DAT_066c1d9a == '\0') {
        FUN_02b3c81c(puVar3);
        DAT_066c1d9a = '\x01';
      }
      puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      FUN_05c9c3b0(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar10,0);
      fVar17 = (float)((ulong)uVar14 >> 0x20);
      FUN_05c9b4fc(uVar14,fVar17,fVar18,lVar10,0);
      uVar14 = CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                        (float)uVar14 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
      fVar18 = fVar18 + *(float *)(unaff_x19 + 0x84);
      plVar15 = in_stack_00000038;
    } while( true );
  }
  plVar15 = (long *)*puStack0000000000000028;
  if (plVar15 == (long *)0x0) goto LAB_04f2dd9c;
  lVar9 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 == 0) goto LAB_04f2dd74;
  piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
  goto LAB_04f2dd5c;
LAB_04f2dc14:
  if (in_stack_00000038 != (long *)0x0) {
    lVar9 = *in_stack_00000038;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04f2dc78;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c(in_stack_00000038,*(long *)PTR_DAT_06312f78,0);
LAB_04f2dc78:
    (*(code *)*puVar7)(plVar15,puVar7[1]);
  }
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
  param_2 = plStack0000000000000048;
  goto joined_r0x04f2d8b4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04f2dd5c:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04f2dd90;
    }
  }
LAB_04f2dd74:
  puVar7 = (undefined8 *)FUN_02b7654c(plVar15,*(long *)PTR_DAT_06312f78,0);
LAB_04f2dd90:
  (*(code *)*puVar7)(plVar15,puVar7[1]);
LAB_04f2dd9c:
  if (lStack0000000000000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar15 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar15 != (long *)0x0)) {
    lVar9 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uVar14 = *(undefined8 *)PTR_DAT_06312a80;
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04f2de20;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02b7654c(plVar15,*(long *)
                                   System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo,0);
LAB_04f2de20:
    puVar2 = System_Collections_Generic_Dictionary<int,_ManualResetEvent>_TypeInfo;
    in_stack_00000030 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
    puStack0000000000000028 = &stack0x00000030;
    lStack0000000000000020 = 0;
    do {
      plVar15 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *in_stack_00000030;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f90) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04f2dea0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)PTR_DAT_06312f90,0);
LAB_04f2dea0:
      uVar12 = (*(code *)*puVar7)(plVar15,puVar7[1]);
      plVar15 = in_stack_00000030;
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_04f2dfa0;
        lVar9 = *in_stack_00000030;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar12 == 0) goto LAB_04f2df78;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_04f2df60;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *in_stack_00000030;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04f2df04;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)puVar2,0);
LAB_04f2df04:
      lVar9 = (*(code *)*puVar7)(plVar15,puVar7[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar14 = FUN_04bffdac(uVar14,*(undefined8 *)(lVar9 + 0x18),0);
    } while( true );
  }
  goto LAB_04f2e068;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_04f2df60:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto FUN_04f2df94;
    }
  }
LAB_04f2df78:
  puVar7 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)PTR_DAT_06312f78,0);
FUN_04f2df94:
  (*(code *)*puVar7)(plVar15,puVar7[1]);
LAB_04f2dfa0:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar15 = *(long **)(unaff_x19 + 0x98);
    uVar6 = FUN_04f26774(*(long *)(unaff_x19 + 0x30),0);
    lStack0000000000000020 = CONCAT44(lStack0000000000000020._4_4_,uVar6);
    uVar16 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)System_Collections_Generic_Dictionary<int,_int>_TypeInfo,
                        &stack0x00000020);
    uVar14 = FUN_04c0af28(*(undefined8 *)System_Collections_Generic_Dictionary<int,_Panel>_TypeInfo,
                          uVar16,uVar14,0);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x558))(plVar15,uVar14,*(undefined8 *)(*plVar15 + 0x560));
      return;
    }
  }
LAB_04f2e068:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


