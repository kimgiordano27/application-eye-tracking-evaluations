/*
FUNCTION_NAME: FUN_05e8ffe4
ENTRY_POINT: 05e8ffe4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_05e8ffe4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (-1 < *(int *)(param_1 + 0x28) + -0x40000000) {
    uVar9 = FUN_04077840();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar9,param_2);
  }
  uVar2 = *(int *)(param_1 + 0x28) << 1 | 1;
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x88);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_040b1acc();
  }
  plVar5 = (long *)FUN_04077674(lVar4,uVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  while( true ) {
    plVar6 = (long *)thunk_FUN_040d6b00(lVar4,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20
                                                                                     ) + 0xc0) +
                                                                 0x28) + 0x80) + 0xa0);
    lVar4 = *plVar6;
    piVar7 = (int *)thunk_FUN_040d6b00(lVar4,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20)
                                                                          + 0xc0) + 0x28) + 0x80) +
                                             0x20);
    if (plVar5 == (long *)0x0) break;
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = *piVar7 / (int)uVar2;
    }
    uVar1 = *piVar7 - iVar3 * uVar2;
    if (*(uint *)(plVar5 + 3) <= uVar1) {
Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Copy:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    if (lVar4 == 0) break;
    FUN_03b2820c(lVar4,*(long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28) +
                                0x80) + 0x80,plVar5[(long)(int)uVar1 + 4]);
    lVar8 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar8 == 0) {
      uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar9,0);
    }
    if (*(uint *)(plVar5 + 3) <= uVar1)
    goto 
    Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>__Copy;
    plVar5[(long)(int)uVar1 + 4] = lVar4;
    thunk_FUN_040ec700(plVar5 + (long)(int)uVar1 + 4,lVar4);
    if (lVar4 == *(long *)(param_1 + 0x20)) {
      *(long *)(param_1 + 0x18) = (long)plVar5;
      thunk_FUN_040ec700((long *)(param_1 + 0x18),plVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


