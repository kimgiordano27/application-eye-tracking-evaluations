/*
FUNCTION_NAME: FUN_05117908
ENTRY_POINT: 05117908
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_05117908(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar4 = System_Collections_Immutable_ImmutableArray<PEBuilder_Section>___cctor
                      (param_1,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
LAB_05117bc0:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar17 = *(uint *)(lVar9 + 0x18);
    iVar15 = 0;
    if (uVar17 != 0) {
      iVar15 = iVar4 / (int)uVar17;
    }
    uVar3 = iVar4 - iVar15 * uVar17;
    if (uVar17 <= uVar3) {
LAB_05117b80:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    uVar17 = *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar17) {
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) goto LAB_05117bc0;
      uVar10 = *(undefined8 *)(lVar9 + 0x18);
      iVar15 = 0;
      lVar1 = lVar9 + 0x20;
      uVar14 = 0xffffffff;
      do {
        if ((uint)uVar10 <= uVar17) goto LAB_05117b80;
        piVar19 = (int *)(lVar1 + (ulong)uVar17 * 0xc);
        uVar18 = (ulong)uVar17;
        if (*piVar19 == iVar4) {
          plVar16 = *(long **)(param_1 + 0x30);
          if (plVar16 == (long *)0x0) goto LAB_05117bc0;
          lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
          uVar2 = *(undefined4 *)(lVar1 + uVar18 * 0xc + 8);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f4b260(lVar7);
          }
          lVar11 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_05117a44;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f4b594(plVar16,lVar7,0);
LAB_05117a44:
          uVar12 = (*(code *)*puVar5)(plVar16,uVar2,(int)param_2,puVar5[1]);
          if ((uVar12 & 1) != 0) {
            if ((int)(uint)uVar14 < 0) {
              uVar8 = *(uint *)(lVar9 + 0x18);
              if (uVar8 <= uVar17) goto LAB_05117b80;
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0) goto LAB_05117bc0;
              if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_05117b80;
              *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar1 + uVar18 * 0xc + 4) + 1;
            }
            else {
              uVar8 = *(uint *)(lVar9 + 0x18);
              if ((uVar8 <= uVar17) || (uVar8 <= (uint)uVar14)) goto LAB_05117b80;
              *(undefined4 *)(lVar1 + uVar14 * 0xc + 4) = *(undefined4 *)(lVar1 + uVar18 * 0xc + 4);
            }
            if (uVar17 < uVar8) {
              iVar4 = *(int *)(param_1 + 0x38);
              uVar2 = *(undefined4 *)(param_1 + 0x28);
              iVar15 = *(int *)(param_1 + 0x20) + -1;
              *piVar19 = -1;
              *(int *)(param_1 + 0x20) = iVar15;
              *(undefined4 *)(lVar1 + uVar18 * 0xc + 4) = uVar2;
              *(int *)(param_1 + 0x38) = iVar4 + 1;
              if (iVar15 == 0) {
                uVar17 = 0xffffffff;
                *(undefined4 *)(param_1 + 0x24) = 0;
              }
              *(uint *)(param_1 + 0x28) = uVar17;
              return 1;
            }
            goto LAB_05117b80;
          }
          uVar10 = *(undefined8 *)(lVar9 + 0x18);
        }
        if ((int)(uint)uVar10 <= iVar15) {
          thunk_FUN_03f786f8(PTR_DAT_09111b70);
          uVar10 = thunk_FUN_03f4e68c();
          uVar6 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                    (uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar10,param_3);
        }
        if ((uint)uVar10 <= uVar17) goto LAB_05117b80;
        iVar15 = iVar15 + 1;
        uVar14 = (ulong)uVar17;
        uVar17 = *(uint *)(lVar1 + uVar18 * 0xc + 4);
      } while (-1 < (int)uVar17);
    }
  }
  return 0;
}


