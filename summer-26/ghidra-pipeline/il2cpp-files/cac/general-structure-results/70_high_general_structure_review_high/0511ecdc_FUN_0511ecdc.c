/*
FUNCTION_NAME: FUN_0511ecdc
ENTRY_POINT: 0511ecdc
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0511ecdc(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  
  if ((DAT_09687bf9 & 1) == 0) {
    FUN_03f13384(PTR_DAT_09123c18);
    FUN_03f13384(PTR_DAT_0910cf80);
    DAT_09687bf9 = 1;
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if (iVar5 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    thunk_FUN_03f86000((undefined8 *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f86000((undefined8 *)(param_1 + 0x18),0);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_09123c18 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    puVar4 = PTR_DAT_0910cf80;
    iVar5 = FUN_0744feb4(iVar5,0);
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x118);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f4b260(lVar8);
    }
    lVar8 = FUN_03f13470(lVar8,iVar5);
    lVar6 = FUN_03f13470(*(undefined8 *)puVar4,iVar5);
    iVar11 = *(int *)(param_1 + 0x24);
    if (iVar11 < 1) {
      uVar7 = 0;
    }
    else {
      lVar9 = 0;
      uVar10 = 0;
      uVar7 = 0;
      do {
        lVar12 = *(long *)(param_1 + 0x18);
        if (lVar12 == 0) {
LAB_0511eed8:
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar10)
        goto System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__RemoveRange;
        if (-1 < *(int *)(lVar12 + lVar9 + 0x20)) {
          if (lVar8 == 0) goto LAB_0511eed8;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) {
System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__RemoveRange:
                    /* WARNING: Subroutine does not return */
            FUN_03f13634();
          }
          uVar14 = *(undefined8 *)(lVar12 + lVar9 + 0x20);
          uVar1 = *(undefined4 *)(lVar12 + lVar9 + 0x28);
          lVar12 = lVar8 + (long)(int)uVar7 * 0xc;
          *(undefined8 *)(lVar12 + 0x20) = uVar14;
          *(undefined4 *)(lVar12 + 0x28) = uVar1;
          if (*(uint *)(lVar8 + 0x18) <= uVar7)
          goto System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__RemoveRange
          ;
          if (lVar6 == 0) goto LAB_0511eed8;
          iVar11 = 0;
          iVar13 = (int)uVar14;
          if (iVar5 != 0) {
            iVar11 = iVar13 / iVar5;
          }
          uVar2 = iVar13 - iVar11 * iVar5;
          if (*(uint *)(lVar6 + 0x18) <= uVar2)
          goto System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__RemoveRange
          ;
          lVar12 = lVar6 + (long)(int)uVar2 * 4;
          lVar3 = (long)(int)uVar7;
          uVar7 = uVar7 + 1;
          *(int *)(lVar8 + lVar3 * 0xc + 0x24) = *(int *)(lVar12 + 0x20) + -1;
          *(uint *)(lVar12 + 0x20) = uVar7;
          iVar11 = *(int *)(param_1 + 0x24);
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0xc;
      } while ((long)uVar10 < (long)iVar11);
    }
    *(uint *)(param_1 + 0x24) = uVar7;
    *(long *)(param_1 + 0x18) = lVar8;
    thunk_FUN_03f86000((long *)(param_1 + 0x18),lVar8);
    *(long *)(param_1 + 0x10) = lVar6;
    thunk_FUN_03f86000((long *)(param_1 + 0x10),lVar6);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  return;
}


