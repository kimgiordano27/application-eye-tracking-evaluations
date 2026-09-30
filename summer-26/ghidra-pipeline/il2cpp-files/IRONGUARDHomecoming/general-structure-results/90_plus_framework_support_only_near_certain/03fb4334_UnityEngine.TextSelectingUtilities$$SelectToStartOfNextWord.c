/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$SelectToStartOfNextWord
ENTRY_POINT: 03fb4334
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03fb48c0) */
/* WARNING: Removing unreachable block (ram,0x03fb4a4c) */

void UnityEngine_TextSelectingUtilities__SelectToStartOfNextWord(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x24;
  long unaff_x26;
  undefined8 *puVar15;
  uint uVar16;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar15 = *(undefined8 **)(unaff_x26 + 0xa0);
  puVar11 = *(undefined8 **)(unaff_x20 + 0x60);
  if (unaff_x22 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(param_1);
      param_1 = *unaff_x24;
    }
    uVar13 = **(undefined8 **)(param_1 + 0xb8);
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
    FUN_02e6c0a0(uVar5,uVar13,*(undefined8 *)PTR_DAT_045830e0,0);
    puVar6 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *puVar6 = uVar5;
    thunk_FUN_01f51358(puVar6,uVar5);
  }
  uVar5 = FUN_0230b6f4();
  uVar13 = thunk_FUN_01f117cc(*puVar15);
  FUN_02e6c748();
  uVar5 = FUN_02300e64(uVar5,uVar13,*puVar11);
  lVar8 = *unaff_x24;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *unaff_x24;
  }
  puVar3 = PTR_DAT_045830d8;
  puVar2 = PTR_DAT_045830a8;
  puVar1 = PTR_DAT_04583070;
  lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar8);
      lVar8 = *unaff_x24;
    }
    uVar13 = **(undefined8 **)(lVar8 + 0xb8);
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b8);
    FUN_02e6c748(lVar12,uVar13,*(undefined8 *)PTR_DAT_045830e8,0);
    plVar7 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *plVar7 = lVar12;
    thunk_FUN_01f51358(plVar7,lVar12);
  }
  uVar5 = FUN_02384c6c(uVar5,lVar12,*(undefined8 *)puVar3);
  uVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_02e6c0a0();
  uVar5 = FUN_0230b6f4(uVar5,uVar13,*(undefined8 *)puVar1);
  lVar8 = *unaff_x24;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *unaff_x24;
  }
  puVar1 = PTR_DAT_04583058;
  lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
  if (lVar12 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar8);
      lVar8 = *unaff_x24;
    }
    uVar13 = **(undefined8 **)(lVar8 + 0xb8);
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b0);
    FUN_02e6c3f4(lVar12,uVar13,*(undefined8 *)PTR_DAT_045830f0,0);
    plVar7 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x18);
    *plVar7 = lVar12;
    thunk_FUN_01f51358(plVar7,lVar12);
  }
  uVar5 = FUN_022fbdd0(uVar5,lVar12,*(undefined8 *)puVar1);
  lVar8 = *unaff_x24;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *unaff_x24;
  }
  puVar1 = PTR_DAT_04583068;
  lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
  if (lVar12 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar8);
      lVar8 = *unaff_x24;
    }
    uVar13 = **(undefined8 **)(lVar8 + 0xb8);
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b0);
    FUN_02e6c3f4(lVar12,uVar13,*(undefined8 *)PTR_DAT_045830f8,0);
    plVar7 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x20);
    *plVar7 = lVar12;
    thunk_FUN_01f51358(plVar7,lVar12);
  }
  plVar7 = (long *)FUN_02308494(uVar5,lVar12,*(undefined8 *)puVar1);
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_045830c0) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03fb4660;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045830c0,0);
LAB_03fb4660:
    plVar7 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
    puVar3 = PTR_DAT_04583100;
    puVar2 = PTR_DAT_04583040;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar16 = 0;
    do {
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03fb46dc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03fb46dc:
      uVar9 = (*(code *)*puVar11)(plVar7,puVar11[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_03fb48b4;
        lVar8 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_03fb488c;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_03fb4874;
      }
      lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04583108);
      FUN_035ac8e8(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(long *)(lVar8 + 0x18) = unaff_x19;
      thunk_FUN_01f51358();
      lVar12 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_045830c8) {
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03fb4770;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_045830c8,0);
LAB_03fb4770:
      lVar12 = (*(code *)*puVar11)(plVar7,puVar11[1]);
      plVar14 = (long *)(lVar8 + 0x10);
      *plVar14 = lVar12;
      thunk_FUN_01f51358(plVar14);
      if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03ee4d14(*plVar14,0);
      if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__);
      FUN_02e6c748(uVar5,lVar8,*(undefined8 *)puVar3,0);
      lVar8 = FUN_03fe4e90();
      if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar9 = FUN_03ee5e54(*plVar14,0);
      if ((uVar9 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03fe3c18(lVar8,0);
      }
      if (*in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_02b6b2e4(*in_stack_00000000,lVar8,*plVar14,*(undefined8 *)puVar2);
      if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_03ee561c(*plVar14,0);
      uVar16 = uVar16 | uVar4;
    } while( true );
  }
  goto LAB_03fb4a44;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03fb4874:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03fb48a8;
    }
  }
LAB_03fb488c:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar7,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03fb48a8:
  (*(code *)*puVar11)(plVar7,puVar11[1]);
LAB_03fb48b4:
  if ((uVar16 & 1) == 0) {
    return;
  }
  lVar8 = FUN_03fe4c98();
  if (lVar8 != 0) {
    lVar8 = FUN_03fca980(lVar8,0);
    plVar7 = (long *)(unaff_x19 + 0xa0);
    *plVar7 = lVar8;
    thunk_FUN_01f51358(plVar7,lVar8);
    lVar8 = *plVar7;
    uVar5 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03f74f80(uVar5,0);
    if (lVar8 != 0) {
      FUN_03fe209c(lVar8,uVar5,0);
      if ((*in_stack_00000000 != 0) &&
         (lVar8 = FUN_02b6b114(*in_stack_00000000,*(undefined8 *)PTR_DAT_04583050), lVar8 != 0)) {
        FUN_0300123c(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_045830d0);
        puVar2 = PTR_DAT_04583080;
        puVar1 = PTR_DAT_04583048;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          uVar9 = FUN_02ce9cdc(&stack0x00000020,*(undefined8 *)puVar2);
          if ((uVar9 & 1) == 0) {
            FUN_02ce9cd8(&stack0x00000020,*(undefined8 *)PTR_DAT_04583078);
            return;
          }
          if (*in_stack_00000000 == 0) break;
          lVar8 = FUN_02b6b264(*in_stack_00000000,in_stack_00000030,*(undefined8 *)puVar1);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar9 = FUN_03ee561c(lVar8,0);
          if ((uVar9 & 1) != 0) {
            thunk_FUN_03fe9acc();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
  }
LAB_03fb4a44:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


