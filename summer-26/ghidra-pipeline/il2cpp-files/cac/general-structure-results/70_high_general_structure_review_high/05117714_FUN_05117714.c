/*
FUNCTION_NAME: FUN_05117714
ENTRY_POINT: 05117714
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_05117714(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar4 = System_Collections_Immutable_ImmutableArray<PEBuilder_Section>___cctor
                      (param_1,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_051178f0:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar15 = *(uint *)(lVar8 + 0x18);
    iVar14 = 0;
    if (uVar15 != 0) {
      iVar14 = iVar4 / (int)uVar15;
    }
    uVar3 = iVar4 - iVar14 * uVar15;
    if (uVar15 <= uVar3) {
LAB_051178b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    uVar15 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) goto LAB_051178f0;
      uVar9 = *(undefined8 *)(lVar8 + 0x18);
      iVar14 = 0;
      lVar1 = lVar8 + 0x20;
      do {
        if ((uint)uVar9 <= uVar15) goto LAB_051178b0;
        if (*(int *)(lVar1 + (ulong)uVar15 * 0xc) == iVar4) {
          plVar13 = *(long **)(param_1 + 0x30);
          if (plVar13 == (long *)0x0) goto LAB_051178f0;
          lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
          uVar2 = *(undefined4 *)(lVar1 + (ulong)uVar15 * 0xc + 8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f4b260(lVar7);
          }
          lVar10 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_05117840;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f4b594(plVar13,lVar7,0);
LAB_05117840:
          uVar11 = (*(code *)*puVar5)(plVar13,uVar2,param_2 & 0xffffffff,puVar5[1]);
          if ((uVar11 & 1) != 0) {
            return 1;
          }
          uVar9 = *(undefined8 *)(lVar8 + 0x18);
        }
        if ((int)(uint)uVar9 <= iVar14) {
          thunk_FUN_03f786f8(PTR_DAT_09111b70);
          uVar9 = thunk_FUN_03f4e68c();
          uVar6 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                    (uVar9,uVar6,0);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar9,param_3);
        }
        if ((uint)uVar9 <= uVar15) goto LAB_051178b0;
        iVar14 = iVar14 + 1;
        uVar15 = *(uint *)(lVar1 + (ulong)uVar15 * 0xc + 4);
      } while (-1 < (int)uVar15);
    }
  }
  return 0;
}


