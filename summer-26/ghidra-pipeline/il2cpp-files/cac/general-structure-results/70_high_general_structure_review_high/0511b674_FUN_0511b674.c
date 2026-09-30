/*
FUNCTION_NAME: FUN_0511b674
ENTRY_POINT: 0511b674
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_0511b674(long param_1,undefined8 param_2,uint *param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  
  iVar2 = System_Collections_Immutable_ImmutableArray<PEBuilder_Section>___cctor
                    (param_1,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb0));
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) goto LAB_0511b95c;
  uVar15 = *(uint *)(lVar8 + 0x18);
  iVar17 = 0;
  if (uVar15 != 0) {
    iVar17 = iVar2 / (int)uVar15;
  }
  uVar13 = iVar2 - iVar17 * uVar15;
  if (uVar13 < uVar15) {
    lVar16 = *(long *)(param_1 + 0x18);
    uVar15 = *(int *)(lVar8 + (ulong)uVar13 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      if (lVar16 == 0) goto LAB_0511b95c;
      uVar9 = *(undefined8 *)(lVar16 + 0x18);
      iVar17 = 0;
      lVar8 = lVar16 + 0x20;
      do {
        if ((uint)uVar9 <= uVar15) goto LAB_0511b91c;
        if (*(int *)(lVar8 + (ulong)uVar15 * 0xc) == iVar2) {
          plVar14 = *(long **)(param_1 + 0x30);
          if (plVar14 == (long *)0x0) goto LAB_0511b95c;
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
          uVar1 = *(undefined4 *)(lVar8 + (ulong)uVar15 * 0xc + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f4b260(lVar5);
          }
          lVar10 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0511b79c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f4b594(plVar14,lVar5,0);
LAB_0511b79c:
          uVar11 = (*(code *)*puVar3)(plVar14,uVar1,(int)param_2,puVar3[1]);
          if ((uVar11 & 1) != 0) {
            uVar9 = 0;
            goto LAB_0511b8f4;
          }
          uVar9 = *(undefined8 *)(lVar16 + 0x18);
        }
        if ((int)(uint)uVar9 <= iVar17) {
          thunk_FUN_03f786f8(PTR_DAT_09111b70);
          uVar9 = thunk_FUN_03f4e68c();
          uVar4 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                    (uVar9,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar9,param_4);
        }
        if ((uint)uVar9 <= uVar15) goto LAB_0511b91c;
        iVar17 = iVar17 + 1;
        uVar15 = *(uint *)(lVar8 + (ulong)uVar15 * 0xc + 4);
      } while (-1 < (int)uVar15);
    }
    uVar15 = *(uint *)(param_1 + 0x28);
    if ((int)uVar15 < 0) {
      if (lVar16 == 0) goto LAB_0511b95c;
      uVar15 = *(uint *)(param_1 + 0x24);
      uVar7 = *(uint *)(lVar16 + 0x18);
      if (uVar15 == uVar7) {
        FUN_05119e34(param_1,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x1a8));
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_0511b95c;
        uVar15 = *(uint *)(param_1 + 0x24);
        lVar16 = *(long *)(param_1 + 0x18);
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
        *(uint *)(param_1 + 0x24) = uVar15 + 1;
        if (lVar16 == 0) goto LAB_0511b95c;
        iVar17 = 0;
        iVar6 = (int)uVar9;
        if (iVar6 != 0) {
          iVar17 = iVar2 / iVar6;
        }
        uVar13 = iVar2 - iVar17 * iVar6;
        uVar7 = *(uint *)(lVar16 + 0x18);
      }
      else {
        *(uint *)(param_1 + 0x24) = uVar15 + 1;
      }
    }
    else {
      if (lVar16 == 0) goto LAB_0511b95c;
      uVar7 = *(uint *)(lVar16 + 0x18);
      if (uVar7 <= uVar15) goto LAB_0511b91c;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar16 + (ulong)uVar15 * 0xc + 0x24);
    }
    if (uVar15 < uVar7) {
      piVar12 = (int *)(lVar16 + 0x20 + (long)(int)uVar15 * 0xc);
      lVar8 = *(long *)(param_1 + 0x10);
      *piVar12 = iVar2;
      piVar12[2] = (int)param_2;
      if (lVar8 == 0) {
LAB_0511b95c:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      if (uVar13 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (ulong)uVar13 * 4;
        uVar9 = 1;
        *(int *)(lVar16 + 0x20 + (long)(int)uVar15 * 0xc + 4) = *(int *)(lVar8 + 0x20) + -1;
        *(uint *)(lVar8 + 0x20) = uVar15 + 1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
LAB_0511b8f4:
        *param_3 = uVar15;
        return uVar9;
      }
    }
  }
LAB_0511b91c:
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


