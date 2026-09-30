/*
FUNCTION_NAME: Meta.XR.InputActions.InputActionDefinition$$.ctor
ENTRY_POINT: 04f2d934
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04f2dfac) */
/* WARNING: Removing unreachable block (ram,0x04f2e054) */
/* WARNING: Removing unreachable block (ram,0x04f2e070) */
/* WARNING: Removing unreachable block (ram,0x04f2ddac) */

void Meta_XR_InputActions_InputActionDefinition___ctor(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x25;
  undefined1 unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar14;
  float fVar15;
  undefined8 unaff_d9;
  float unaff_s10;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
code_r0x04f2d934:
                    /* try { // try from 04f2d934 to 0502d98b has its CatchHandler @ 04f2d02c */
  puVar5 = (undefined8 *)(param_1 + 0x138);
LAB_04f2d938:
                    /* catch() { ... } // from try @ 04f2d84c with catch @ 04f2d938 */
  uVar4 = (*(code *)*puVar5)(unaff_x21,puVar5[1]);
  plVar12 = in_stack_00000048;
  if ((uVar4 & 1) != 0) {
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar7 = *in_stack_00000048;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_Material>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04f2d9a4;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02b7654c(in_stack_00000048,
                          *(long *)System_Collections_Generic_Dictionary<int,_Material>_TypeInfo,0);
LAB_04f2d9a4:
    lVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar12 = *(long **)(lVar7 + 0x18);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar8 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04f2da14;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02b7654c(plVar12,*(long *)
                                   System_Collections_Generic_Dictionary<Guid,_OVRSceneRoom>_TypeInfo
                          ,0);
LAB_04f2da14:
    plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    uVar11 = unaff_d9;
    fVar15 = unaff_s10;
    do {
      in_stack_00000038 = plVar12;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar8 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f90) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04f2da94;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06312f90,0);
LAB_04f2da94:
      uVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      plVar12 = in_stack_00000038;
      if ((uVar4 & 1) == 0) goto LAB_04f2dc14;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar8 = *in_stack_00000038;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04f2db00;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02b7654c(in_stack_00000038,
                            *(long *)
                             System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TypeInfo,
                            0);
LAB_04f2db00:
      uVar6 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar8 = FUN_032404a4(uVar13,uVar1,*unaff_x27);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar8 = FUN_031d80b0(lVar8,*unaff_x28);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar13 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar3 = *(undefined4 *)(lVar7 + 0x10);
      *(undefined8 *)(lVar8 + 0x68) = uVar6;
      *(undefined1 *)(lVar8 + 0x70) = unaff_w26;
      *(undefined4 *)(lVar8 + 100) = uVar3;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x68),uVar6);
      *(undefined8 *)(lVar8 + 0x50) = uVar13;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x50),uVar13);
      lVar8 = FUN_05c89340(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05c9c840(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                   *(undefined4 *)(unaff_x19 + 0x90),lVar8,0);
      if (*(char *)(unaff_x29 + 0xd9a) == '\0') {
        FUN_02b3c81c();
        *(undefined1 *)(unaff_x29 + 0xd9a) = unaff_w26;
      }
      puVar9 = *(undefined4 **)(*unaff_x20 + 0xb8);
      FUN_05c9c3b0(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar8,0);
      fVar14 = (float)((ulong)uVar11 >> 0x20);
      FUN_05c9b4fc(uVar11,fVar14,fVar15,lVar8,0);
      uVar11 = CONCAT44(fVar14 + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x7c) >> 0x20),
                        (float)uVar11 + (float)*(undefined8 *)(unaff_x19 + 0x7c));
      fVar15 = fVar15 + *(float *)(unaff_x19 + 0x84);
      plVar12 = in_stack_00000038;
    } while( true );
  }
  plVar12 = (long *)*in_stack_00000028;
  if (plVar12 == (long *)0x0) goto LAB_04f2dd9c;
  lVar7 = *plVar12;
  uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar4 == 0) goto LAB_04f2dd74;
  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_04f2dd5c;
LAB_04f2dc14:
  if (in_stack_00000038 != (long *)0x0) {
    lVar7 = *in_stack_00000038;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04f2dc78;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000038,*(long *)PTR_DAT_06312f78,0);
LAB_04f2dc78:
    (*(code *)*puVar5)(plVar12,puVar5[1]);
  }
  unaff_x21 = in_stack_00000048;
  unaff_d9 = CONCAT44((float)((ulong)unaff_d9 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 0x20),
                      (float)unaff_d9 + (float)*(undefined8 *)(unaff_x19 + 0x70));
  unaff_s10 = unaff_s10 + *(float *)(unaff_x19 + 0x78);
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  param_1 = *in_stack_00000048;
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f90) {
        param_1 = param_1 + (long)*piVar10 * 0x10;
        goto code_r0x04f2d934;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000048,*(long *)PTR_DAT_06312f90,0);
  goto LAB_04f2d938;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04f2dd5c:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04f2dd90;
    }
  }
LAB_04f2dd74:
  puVar5 = (undefined8 *)FUN_02b7654c(plVar12,*(long *)PTR_DAT_06312f78,0);
LAB_04f2dd90:
  (*(code *)*puVar5)(plVar12,puVar5[1]);
LAB_04f2dd9c:
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if ((*(long *)(unaff_x19 + 0x30) != 0) &&
     (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x40), plVar12 != (long *)0x0)) {
    lVar7 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar11 = *(undefined8 *)PTR_DAT_06312a80;
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04f2de20;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02b7654c(plVar12,*(long *)
                                   System_Collections_Generic_Dictionary<int,_LogEntry>_TypeInfo,0);
LAB_04f2de20:
    puVar2 = System_Collections_Generic_Dictionary<int,_ManualResetEvent>_TypeInfo;
    in_stack_00000030 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    in_stack_00000028 = &stack0x00000030;
    in_stack_00000020 = 0;
    do {
      plVar12 = in_stack_00000030;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar7 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f90) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04f2dea0;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)PTR_DAT_06312f90,0);
LAB_04f2dea0:
      uVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      plVar12 = in_stack_00000030;
      if ((uVar4 & 1) == 0) {
        if (in_stack_00000030 == (long *)0x0) goto LAB_04f2dfa0;
        lVar7 = *in_stack_00000030;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 == 0) goto LAB_04f2df78;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_04f2df60;
      }
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar7 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04f2df04;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)puVar2,0);
LAB_04f2df04:
      lVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar11 = FUN_04bffdac(uVar11,*(undefined8 *)(lVar7 + 0x18),0);
    } while( true );
  }
  goto LAB_04f2e068;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04f2df60:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto FUN_04f2df94;
    }
  }
LAB_04f2df78:
  puVar5 = (undefined8 *)FUN_02b7654c(in_stack_00000030,*(long *)PTR_DAT_06312f78,0);
FUN_04f2df94:
  (*(code *)*puVar5)(plVar12,puVar5[1]);
LAB_04f2dfa0:
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    plVar12 = *(long **)(unaff_x19 + 0x98);
    uVar3 = FUN_04f26774(*(long *)(unaff_x19 + 0x30),0);
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,uVar3);
    uVar13 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)System_Collections_Generic_Dictionary<int,_int>_TypeInfo,
                        &stack0x00000020);
    uVar11 = FUN_04c0af28(*(undefined8 *)System_Collections_Generic_Dictionary<int,_Panel>_TypeInfo,
                          uVar13,uVar11,0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x558))(plVar12,uVar11,*(undefined8 *)(*plVar12 + 0x560));
      return;
    }
  }
LAB_04f2e068:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


