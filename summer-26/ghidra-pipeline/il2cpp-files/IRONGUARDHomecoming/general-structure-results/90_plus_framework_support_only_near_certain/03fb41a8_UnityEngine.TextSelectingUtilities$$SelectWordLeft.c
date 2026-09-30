/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$SelectWordLeft
ENTRY_POINT: 03fb41a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03fb48c0) */
/* WARNING: Removing unreachable block (ram,0x03fb4a4c) */

void UnityEngine_TextSelectingUtilities__SelectWordLeft(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar12;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(PTR_DAT_045830a0);
  thunk_FUN_01efb3a4(StringLiteral_3466);
  thunk_FUN_01efb3a4(PTR_DAT_045830a8);
  thunk_FUN_01efb3a4(PTR_DAT_045830b0);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__);
  thunk_FUN_01efb3a4(PTR_DAT_045830b8);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(PTR_DAT_045830c0);
  thunk_FUN_01efb3a4(PTR_DAT_045830c8);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_045830d0);
  thunk_FUN_01efb3a4(PTR_DAT_045830d8);
  thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
  thunk_FUN_01efb3a4(PTR_DAT_045830e0);
  thunk_FUN_01efb3a4(PTR_DAT_045830e8);
  thunk_FUN_01efb3a4(PTR_DAT_045830f0);
  thunk_FUN_01efb3a4(PTR_DAT_045830f8);
  thunk_FUN_01efb3a4(PTR_DAT_04583100);
  thunk_FUN_01efb3a4(PTR_DAT_04583108);
  thunk_FUN_01efb3a4(PTR_DAT_04583110);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<ulong>__);
  *(undefined1 *)(unaff_x22 + 0x85b) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar6 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_02b6aa68(lVar6,*unaff_x20);
  plVar12 = (long *)(unaff_x19 + 0xa8);
  *plVar12 = lVar6;
  thunk_FUN_01f51358(plVar12,lVar6);
  puVar1 = PTR_DAT_04583110;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    uVar7 = FUN_03584c44(*(long *)(unaff_x19 + 0x90),0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar6);
      lVar6 = *(long *)puVar1;
    }
    puVar4 = PTR_DAT_045830a0;
    puVar3 = PTR_DAT_04583060;
    puVar2 = StringLiteral_3488;
    lVar13 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar13 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar14 = **(undefined8 **)(lVar6 + 0xb8);
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
      FUN_02e6c0a0(lVar13,uVar14,*(undefined8 *)PTR_DAT_045830e0,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar8 = lVar13;
      thunk_FUN_01f51358(plVar8,lVar13);
    }
    uVar7 = FUN_0230b6f4(uVar7,lVar13,*(undefined8 *)puVar2);
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_02e6c748();
    uVar7 = FUN_02300e64(uVar7,uVar14,*(undefined8 *)puVar3);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar6);
      lVar6 = *(long *)puVar1;
    }
    puVar4 = PTR_DAT_045830d8;
    puVar3 = PTR_DAT_045830a8;
    puVar2 = PTR_DAT_04583070;
    lVar13 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar13 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar14 = **(undefined8 **)(lVar6 + 0xb8);
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b8);
      FUN_02e6c748(lVar13,uVar14,*(undefined8 *)PTR_DAT_045830e8,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar8 = lVar13;
      thunk_FUN_01f51358(plVar8,lVar13);
    }
    uVar7 = FUN_02384c6c(uVar7,lVar13,*(undefined8 *)puVar4);
    uVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_02e6c0a0();
    uVar7 = FUN_0230b6f4(uVar7,uVar14,*(undefined8 *)puVar2);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar6);
      lVar6 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04583058;
    lVar13 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
    if (lVar13 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar14 = **(undefined8 **)(lVar6 + 0xb8);
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b0);
      FUN_02e6c3f4(lVar13,uVar14,*(undefined8 *)PTR_DAT_045830f0,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar8 = lVar13;
      thunk_FUN_01f51358(plVar8,lVar13);
    }
    uVar7 = FUN_022fbdd0(uVar7,lVar13,*(undefined8 *)puVar2);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar6);
      lVar6 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04583068;
    lVar13 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
    if (lVar13 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
        lVar6 = *(long *)puVar1;
      }
      uVar14 = **(undefined8 **)(lVar6 + 0xb8);
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b0);
      FUN_02e6c3f4(lVar13,uVar14,*(undefined8 *)PTR_DAT_045830f8,0);
      plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar8 = lVar13;
      thunk_FUN_01f51358(plVar8,lVar13);
    }
    plVar8 = (long *)FUN_02308494(uVar7,lVar13,*(undefined8 *)puVar2);
    if (plVar8 != (long *)0x0) {
      lVar6 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_045830c0) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03fb4660;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_045830c0,0);
LAB_03fb4660:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      puVar3 = PTR_DAT_04583100;
      puVar2 = PTR_DAT_04583040;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar16 = 0;
      do {
        lVar6 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03fb46dc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03fb46dc:
        uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar10 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_03fb48b4;
          lVar6 = *plVar8;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 == 0) goto LAB_03fb488c;
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03fb4874;
        }
        lVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04583108);
        FUN_035ac8e8(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(lVar6 + 0x18) = unaff_x19;
        thunk_FUN_01f51358();
        lVar13 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_045830c8) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03fb4770;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_045830c8,0);
LAB_03fb4770:
        lVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        plVar15 = (long *)(lVar6 + 0x10);
        *plVar15 = lVar13;
        thunk_FUN_01f51358(plVar15);
        if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03ee4d14(*plVar15,0);
        if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__);
        FUN_02e6c748(uVar7,lVar6,*(undefined8 *)puVar3,0);
        lVar6 = FUN_03fe4e90();
        if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar10 = FUN_03ee5e54(*plVar15,0);
        if ((uVar10 & 1) != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03fe3c18(lVar6,0);
        }
        if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2e4(*plVar12,lVar6,*plVar15,*(undefined8 *)puVar2);
        if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar5 = FUN_03ee561c(*plVar15,0);
        uVar16 = uVar16 | uVar5;
      } while( true );
    }
  }
  goto LAB_03fb4a44;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03fb4874:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03fb48a8;
    }
  }
LAB_03fb488c:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03fb48a8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03fb48b4:
  if ((uVar16 & 1) == 0) {
    return;
  }
  lVar6 = FUN_03fe4c98();
  if (lVar6 != 0) {
    lVar6 = FUN_03fca980(lVar6,0);
    plVar8 = (long *)(unaff_x19 + 0xa0);
    *plVar8 = lVar6;
    thunk_FUN_01f51358(plVar8,lVar6);
    lVar6 = *plVar8;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03f74f80(uVar7,0);
    if (lVar6 != 0) {
      FUN_03fe209c(lVar6,uVar7,0);
      if ((*plVar12 != 0) &&
         (lVar6 = FUN_02b6b114(*plVar12,*(undefined8 *)PTR_DAT_04583050), lVar6 != 0)) {
        FUN_0300123c(&stack0x00000008,lVar6,*(undefined8 *)PTR_DAT_045830d0);
        puVar2 = PTR_DAT_04583080;
        puVar1 = PTR_DAT_04583048;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          uVar10 = FUN_02ce9cdc(&stack0x00000020,*(undefined8 *)puVar2);
          if ((uVar10 & 1) == 0) {
            FUN_02ce9cd8(&stack0x00000020,*(undefined8 *)PTR_DAT_04583078);
            return;
          }
          if (*plVar12 == 0) break;
          lVar6 = FUN_02b6b264(*plVar12,in_stack_00000030,*(undefined8 *)puVar1);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar10 = FUN_03ee561c(lVar6,0);
          if ((uVar10 & 1) != 0) {
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


