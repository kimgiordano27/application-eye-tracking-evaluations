/*
FUNCTION_NAME: FUN_03fb40bc
ENTRY_POINT: 03fb40bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03fb48c0) */
/* WARNING: Removing unreachable block (ram,0x03fb4a4c) */

void FUN_03fb40bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_04583038;
  puVar1 = PTR_DAT_04583030;
  if ((DAT_0483b85b & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04583040);
    thunk_FUN_01efb3a4(PTR_DAT_04583038);
    thunk_FUN_01efb3a4(PTR_DAT_04583048);
    thunk_FUN_01efb3a4(PTR_DAT_04583050);
    thunk_FUN_01efb3a4(PTR_DAT_04583030);
    thunk_FUN_01efb3a4(PTR_DAT_04583058);
    thunk_FUN_01efb3a4(PTR_DAT_04583060);
    thunk_FUN_01efb3a4(PTR_DAT_04583068);
    thunk_FUN_01efb3a4(StringLiteral_3488);
    thunk_FUN_01efb3a4(PTR_DAT_04583070);
    thunk_FUN_01efb3a4(PTR_DAT_04583078);
    thunk_FUN_01efb3a4(PTR_DAT_04583080);
    thunk_FUN_01efb3a4(PTR_DAT_04583088);
    thunk_FUN_01efb3a4(PTR_DAT_04583090);
    thunk_FUN_01efb3a4(PTR_DAT_04583098);
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
    DAT_0483b85b = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_02b6aa68(lVar7,*(undefined8 *)puVar2);
  plVar13 = (long *)(param_1 + 0xa8);
  *plVar13 = lVar7;
  thunk_FUN_01f51358(plVar13,lVar7);
  puVar1 = PTR_DAT_04583110;
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar8 = FUN_03584c44(*(long *)(param_1 + 0x90),0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar5 = PTR_DAT_045830a0;
    puVar4 = PTR_DAT_04583098;
    puVar3 = PTR_DAT_04583060;
    puVar2 = StringLiteral_3488;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
      FUN_02e6c0a0(lVar14,uVar15,*(undefined8 *)PTR_DAT_045830e0,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar9 = lVar14;
      thunk_FUN_01f51358(plVar9,lVar14);
    }
    uVar8 = FUN_0230b6f4(uVar8,lVar14,*(undefined8 *)puVar2);
    uVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
    FUN_02e6c748(uVar15,param_1,*(undefined8 *)puVar4,0);
    uVar8 = FUN_02300e64(uVar8,uVar15,*(undefined8 *)puVar3);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar5 = PTR_DAT_045830d8;
    puVar4 = PTR_DAT_045830a8;
    puVar3 = PTR_DAT_04583090;
    puVar2 = PTR_DAT_04583070;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b8);
      FUN_02e6c748(lVar14,uVar15,*(undefined8 *)PTR_DAT_045830e8,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar9 = lVar14;
      thunk_FUN_01f51358(plVar9,lVar14);
    }
    uVar8 = FUN_02384c6c(uVar8,lVar14,*(undefined8 *)puVar5);
    uVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
    FUN_02e6c0a0(uVar15,param_1,*(undefined8 *)puVar3,0);
    uVar8 = FUN_0230b6f4(uVar8,uVar15,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04583058;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b0);
      FUN_02e6c3f4(lVar14,uVar15,*(undefined8 *)PTR_DAT_045830f0,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar9 = lVar14;
      thunk_FUN_01f51358(plVar9,lVar14);
    }
    uVar8 = FUN_022fbdd0(uVar8,lVar14,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04583068;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_045830b0);
      FUN_02e6c3f4(lVar14,uVar15,*(undefined8 *)PTR_DAT_045830f8,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar9 = lVar14;
      thunk_FUN_01f51358(plVar9,lVar14);
    }
    plVar9 = (long *)FUN_02308494(uVar8,lVar14,*(undefined8 *)puVar2);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_045830c0) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03fb4660;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_045830c0,0);
LAB_03fb4660:
      plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar3 = PTR_DAT_04583100;
      puVar2 = PTR_DAT_04583040;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar18 = 0;
      do {
        lVar7 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fb46dc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_03fb46dc:
        uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_03fb48b4;
          lVar7 = *plVar9;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 == 0) goto LAB_03fb488c;
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_03fb4874;
        }
        lVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04583108);
        FUN_035ac8e8(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(lVar7 + 0x18) = param_1;
        thunk_FUN_01f51358((long *)(lVar7 + 0x18),param_1);
        lVar14 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_045830c8) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03fb4770;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_045830c8,0);
LAB_03fb4770:
        lVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        plVar16 = (long *)(lVar7 + 0x10);
        *plVar16 = lVar14;
        thunk_FUN_01f51358(plVar16);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = FUN_03ee4d14(*plVar16,0);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar17 = *(undefined8 *)(*plVar16 + 0x10);
        uVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_UnityEngine_Rendering_CoreUnsafeUtils_HaveDuplicates__);
        FUN_02e6c748(uVar15,lVar7,*(undefined8 *)puVar3,0);
        lVar7 = FUN_03fe4e90(param_1,uVar8,uVar17,uVar15,0);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = FUN_03ee5e54(*plVar16,0);
        if ((uVar11 & 1) != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03fe3c18(lVar7,0);
        }
        if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2e4(*plVar13,lVar7,*plVar16,*(undefined8 *)puVar2);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_03ee561c(*plVar16,0);
        uVar18 = uVar18 | uVar6;
      } while( true );
    }
  }
  goto LAB_03fb4a44;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03fb4874:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03fb48a8;
    }
  }
LAB_03fb488c:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03fb48a8:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03fb48b4:
  if ((uVar18 & 1) == 0) {
    return;
  }
  lVar7 = FUN_03fe4c98(param_1,*(undefined8 *)(param_1 + 0x90),
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<ulong>__,
                       0);
  if (lVar7 != 0) {
    lVar7 = FUN_03fca980(lVar7,0);
    plVar9 = (long *)(param_1 + 0xa0);
    *plVar9 = lVar7;
    thunk_FUN_01f51358(plVar9,lVar7);
    lVar7 = *plVar9;
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03f74f80(uVar8,0);
    if (lVar7 != 0) {
      FUN_03fe209c(lVar7,uVar8,0);
      if ((*plVar13 != 0) &&
         (lVar7 = FUN_02b6b114(*plVar13,*(undefined8 *)PTR_DAT_04583050), lVar7 != 0)) {
        FUN_0300123c(&local_98,lVar7,*(undefined8 *)PTR_DAT_045830d0);
        puVar2 = PTR_DAT_04583080;
        puVar1 = PTR_DAT_04583048;
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        while( true ) {
          uVar11 = FUN_02ce9cdc(&local_80,*(undefined8 *)puVar2);
          uVar8 = local_70;
          if ((uVar11 & 1) == 0) {
            FUN_02ce9cd8(&local_80,*(undefined8 *)PTR_DAT_04583078);
            return;
          }
          if (*plVar13 == 0) break;
          lVar7 = FUN_02b6b264(*plVar13,local_70,*(undefined8 *)puVar1);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = FUN_03ee561c(lVar7,0);
          if ((uVar11 & 1) != 0) {
            thunk_FUN_03fe9acc(param_1,*(undefined8 *)(param_1 + 0xa0),uVar8,0);
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


