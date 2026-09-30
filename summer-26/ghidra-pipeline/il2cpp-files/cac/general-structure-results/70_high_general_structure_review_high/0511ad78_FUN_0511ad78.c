/*
FUNCTION_NAME: FUN_0511ad78
ENTRY_POINT: 0511ad78
PROGRAM: cac-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


uint FUN_0511ad78(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  int iVar15;
  
  iVar5 = System_Collections_Immutable_ImmutableArray<PEBuilder_Section>___cctor
                    (param_1,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
LAB_0511af3c:
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  uVar2 = *(uint *)(lVar9 + 0x18);
  iVar15 = 0;
  if (uVar2 != 0) {
    iVar15 = iVar5 / (int)uVar2;
  }
  uVar4 = iVar5 - iVar15 * uVar2;
  if (uVar2 <= uVar4) {
System_Collections_Immutable_ImmutableArray<PEBuilder_Section>__RemoveAtRange:
                    /* WARNING: Subroutine does not return */
    FUN_03f13634();
  }
  uVar2 = *(int *)(lVar9 + (ulong)uVar4 * 4 + 0x20) - 1;
  if (-1 < (int)uVar2) {
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 == 0) goto LAB_0511af3c;
    uVar10 = *(undefined8 *)(lVar9 + 0x18);
    iVar15 = 0;
    lVar1 = lVar9 + 0x20;
    do {
      if ((uint)uVar10 <= uVar2)
      goto System_Collections_Immutable_ImmutableArray<PEBuilder_Section>__RemoveAtRange;
      if (*(int *)(lVar1 + (ulong)uVar2 * 0xc) == iVar5) {
        plVar14 = *(long **)(param_1 + 0x30);
        if (plVar14 == (long *)0x0) goto LAB_0511af3c;
        lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
        uVar3 = *(undefined4 *)(lVar1 + (ulong)uVar2 * 0xc + 8);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f4b260(lVar8);
        }
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0511ae98;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f4b594(plVar14,lVar8,0);
LAB_0511ae98:
        uVar12 = (*(code *)*puVar6)(plVar14,uVar3,param_2 & 0xffffffff,puVar6[1]);
        if ((uVar12 & 1) != 0) {
          return uVar2;
        }
        uVar10 = *(undefined8 *)(lVar9 + 0x18);
      }
      if ((int)(uint)uVar10 <= iVar15) {
        thunk_FUN_03f786f8(PTR_DAT_09111b70);
        uVar10 = thunk_FUN_03f4e68c();
        uVar7 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
        Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                  (uVar10,uVar7,0);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar10,param_3);
      }
      if ((uint)uVar10 <= uVar2)
      goto System_Collections_Immutable_ImmutableArray<PEBuilder_Section>__RemoveAtRange;
      iVar15 = iVar15 + 1;
      uVar2 = *(uint *)(lVar1 + (ulong)uVar2 * 0xc + 4);
    } while (-1 < (int)uVar2);
  }
  return 0xffffffff;
}


