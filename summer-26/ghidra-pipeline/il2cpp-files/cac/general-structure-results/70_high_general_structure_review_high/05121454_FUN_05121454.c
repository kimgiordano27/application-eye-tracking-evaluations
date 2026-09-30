/*
FUNCTION_NAME: FUN_05121454
ENTRY_POINT: 05121454
PROGRAM: cac-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void FUN_05121454(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__System_Collections_ICollection_CopyTo
            (param_1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18));
  if (param_2 == (long *)0x0) {
    thunk_FUN_03f786f8(PTR_DAT_0910e1d8);
    uVar7 = thunk_FUN_03f4e68c();
    uVar8 = thunk_FUN_03f786f8(PTR_DAT_09120978);
    FUN_0740f0b8(uVar7,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar7,param_4);
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f4b260();
  }
  if (*(byte *)(*param_2 + 0x130) < *(byte *)(lVar4 + 0x130)) {
    lVar9 = *(long *)(param_4 + 0x20);
  }
  else {
    lVar9 = *(long *)(param_4 + 0x20);
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4) {
      uVar10 = FUN_051262ac(param_1,param_2,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x48));
      lVar9 = *(long *)(param_4 + 0x20);
      if ((uVar10 & 1) != 0) {
        FUN_051216b8(param_1,param_2,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x58));
        return;
      }
    }
  }
  lVar4 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x60);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f4b260(lVar4);
  }
  plVar5 = (long *)thunk_FUN_03f4e590(param_2,lVar4);
  if (plVar5 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f4b260(lVar4);
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_051215b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f4b594(plVar5,lVar4,0);
LAB_051215b8:
    uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  FUN_05123ff8(param_1,uVar3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70));
  FUN_05122514(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 0x18) / iVar1;
    }
    if (3 < iVar2) {
      FUN_05123e0c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x88));
      return;
    }
  }
  return;
}


