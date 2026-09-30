/*
FUNCTION_NAME: FUN_05114d9c
ENTRY_POINT: 05114d9c
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_05114d9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    System_Collections_Immutable_ImmutableArray<MetadataAggregator_RowCounts>__op_Equality
              (param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70));
  }
  iVar1 = FUN_05116f60(param_1,param_2,param_3,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb0));
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_05115100;
  uVar14 = *(uint *)(lVar7 + 0x18);
  iVar16 = 0;
  if (uVar14 != 0) {
    iVar16 = iVar1 / (int)uVar14;
  }
  uVar12 = iVar1 - iVar16 * uVar14;
  if (uVar12 < uVar14) {
    lVar15 = *(long *)(param_1 + 0x18);
    uVar14 = *(int *)(lVar7 + (ulong)uVar12 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      if (lVar15 == 0) goto LAB_05115100;
      uVar8 = *(undefined8 *)(lVar15 + 0x18);
      iVar16 = 0;
      lVar7 = lVar15 + 0x20;
      do {
        if ((uint)uVar8 <= uVar14) goto LAB_051150c0;
        if (*(int *)(lVar7 + (ulong)uVar14 * 0x18) == iVar1) {
          plVar13 = *(long **)(param_1 + 0x30);
          if (plVar13 == (long *)0x0) goto LAB_05115100;
          lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
          lVar9 = lVar7 + (ulong)uVar14 * 0x18;
          uVar8 = *(undefined8 *)(lVar9 + 8);
          uVar3 = *(undefined8 *)(lVar9 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f4b260(lVar4);
          }
          lVar9 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_05114f08;
              }
              uVar11 = uVar11 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar11 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f4b594(plVar13,lVar4,0);
LAB_05114f08:
          uVar11 = (*(code *)*puVar2)(plVar13,uVar8,uVar3,param_2,param_3,puVar2[1]);
          if ((uVar11 & 1) != 0) {
            return 0;
          }
          uVar8 = *(undefined8 *)(lVar15 + 0x18);
        }
        if ((int)(uint)uVar8 <= iVar16) {
          thunk_FUN_03f786f8(PTR_DAT_09111b70);
          uVar8 = thunk_FUN_03f4e68c();
          uVar3 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                    (uVar8,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar8,param_4);
        }
        if ((uint)uVar8 <= uVar14) goto LAB_051150c0;
        iVar16 = iVar16 + 1;
        uVar14 = *(uint *)(lVar7 + (ulong)uVar14 * 0x18 + 4);
      } while (-1 < (int)uVar14);
    }
    uVar14 = *(uint *)(param_1 + 0x28);
    if ((int)uVar14 < 0) {
      if (lVar15 == 0) goto LAB_05115100;
      uVar14 = *(uint *)(param_1 + 0x24);
      uVar6 = *(uint *)(lVar15 + 0x18);
      if (uVar14 == uVar6) {
        FUN_05114b9c(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1a8));
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_05115100;
        uVar14 = *(uint *)(param_1 + 0x24);
        lVar15 = *(long *)(param_1 + 0x18);
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
        *(uint *)(param_1 + 0x24) = uVar14 + 1;
        if (lVar15 == 0) goto LAB_05115100;
        iVar16 = 0;
        iVar5 = (int)uVar8;
        if (iVar5 != 0) {
          iVar16 = iVar1 / iVar5;
        }
        uVar12 = iVar1 - iVar16 * iVar5;
        uVar6 = *(uint *)(lVar15 + 0x18);
      }
      else {
        *(uint *)(param_1 + 0x24) = uVar14 + 1;
      }
    }
    else {
      if (lVar15 == 0) goto LAB_05115100;
      uVar6 = *(uint *)(lVar15 + 0x18);
      if (uVar6 <= uVar14) goto LAB_051150c0;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar15 + (ulong)uVar14 * 0x18 + 0x24);
    }
    if (uVar14 < uVar6) {
      piVar10 = (int *)(lVar15 + 0x20 + (long)(int)uVar14 * 0x18);
      *(undefined8 *)(piVar10 + 4) = param_3;
      *(undefined8 *)(piVar10 + 2) = param_2;
      uVar6 = *(uint *)(lVar15 + 0x18);
      *piVar10 = iVar1;
      if (uVar14 < uVar6) {
        thunk_FUN_03f86000(piVar10 + 2,0);
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) {
LAB_05115100:
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        if ((uVar12 < *(uint *)(lVar7 + 0x18)) && (uVar14 < *(uint *)(lVar15 + 0x18))) {
          lVar7 = lVar7 + (ulong)uVar12 * 4;
          *(int *)(lVar15 + 0x20 + (long)(int)uVar14 * 0x18 + 4) = *(int *)(lVar7 + 0x20) + -1;
          *(uint *)(lVar7 + 0x20) = uVar14 + 1;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
          return 1;
        }
      }
    }
  }
LAB_051150c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


