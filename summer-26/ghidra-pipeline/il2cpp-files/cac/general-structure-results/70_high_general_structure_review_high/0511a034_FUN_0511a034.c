/*
FUNCTION_NAME: FUN_0511a034
ENTRY_POINT: 0511a034
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 FUN_0511a034(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  uint uVar17;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_05119d58(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70));
  }
  iVar2 = System_Collections_Immutable_ImmutableArray<PEBuilder_Section>___cctor
                    (param_1,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xb0));
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_0511a33c;
  uVar17 = *(uint *)(lVar6 + 0x18);
  iVar16 = 0;
  if (uVar17 != 0) {
    iVar16 = iVar2 / (int)uVar17;
  }
  uVar14 = iVar2 - iVar16 * uVar17;
  if (uVar14 < uVar17) {
    lVar12 = *(long *)(param_1 + 0x18);
    uVar17 = *(int *)(lVar6 + (ulong)uVar14 * 4 + 0x20) - 1;
    if (-1 < (int)uVar17) {
      if (lVar12 == 0) goto LAB_0511a33c;
      uVar7 = *(undefined8 *)(lVar12 + 0x18);
      iVar16 = 0;
      lVar6 = lVar12 + 0x20;
      do {
        if ((uint)uVar7 <= uVar17) goto LAB_0511a2fc;
        if (*(int *)(lVar6 + (ulong)uVar17 * 0xc) == iVar2) {
          plVar15 = *(long **)(param_1 + 0x30);
          if (plVar15 == (long *)0x0) goto LAB_0511a33c;
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
          uVar1 = *(undefined4 *)(lVar6 + (ulong)uVar17 * 0xc + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f4b260(lVar5);
          }
          lVar8 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0511a184;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f4b594(plVar15,lVar5,0);
LAB_0511a184:
          uVar11 = (*(code *)*puVar3)(plVar15,uVar1,param_2,puVar3[1]);
          if ((uVar11 & 1) != 0) {
            return 0;
          }
          uVar7 = *(undefined8 *)(lVar12 + 0x18);
        }
        if ((int)(uint)uVar7 <= iVar16) {
          thunk_FUN_03f786f8(PTR_DAT_09111b70);
          uVar7 = thunk_FUN_03f4e68c();
          uVar4 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
          Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer
                    (uVar7,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar7,param_3);
        }
        if ((uint)uVar7 <= uVar17) goto LAB_0511a2fc;
        iVar16 = iVar16 + 1;
        uVar17 = *(uint *)(lVar6 + (ulong)uVar17 * 0xc + 4);
      } while (-1 < (int)uVar17);
    }
    uVar17 = *(uint *)(param_1 + 0x28);
    if ((int)uVar17 < 0) {
      if (lVar12 == 0) goto LAB_0511a33c;
      uVar17 = *(uint *)(param_1 + 0x24);
      uVar10 = *(uint *)(lVar12 + 0x18);
      if (uVar17 == uVar10) {
        FUN_05119e34(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1a8));
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_0511a33c;
        uVar17 = *(uint *)(param_1 + 0x24);
        lVar12 = *(long *)(param_1 + 0x18);
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
        *(uint *)(param_1 + 0x24) = uVar17 + 1;
        if (lVar12 == 0) goto LAB_0511a33c;
        iVar16 = 0;
        iVar9 = (int)uVar7;
        if (iVar9 != 0) {
          iVar16 = iVar2 / iVar9;
        }
        uVar14 = iVar2 - iVar16 * iVar9;
        uVar10 = *(uint *)(lVar12 + 0x18);
      }
      else {
        *(uint *)(param_1 + 0x24) = uVar17 + 1;
      }
    }
    else {
      if (lVar12 == 0) goto LAB_0511a33c;
      uVar10 = *(uint *)(lVar12 + 0x18);
      if (uVar10 <= uVar17) goto LAB_0511a2fc;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar12 + (ulong)uVar17 * 0xc + 0x24);
    }
    if (uVar17 < uVar10) {
      piVar13 = (int *)(lVar12 + 0x20 + (long)(int)uVar17 * 0xc);
      lVar6 = *(long *)(param_1 + 0x10);
      *piVar13 = iVar2;
      piVar13[2] = param_2;
      if (lVar6 == 0) {
LAB_0511a33c:
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      if (uVar14 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (ulong)uVar14 * 4;
        *(int *)(lVar12 + 0x20 + (long)(int)uVar17 * 0xc + 4) = *(int *)(lVar6 + 0x20) + -1;
        *(uint *)(lVar6 + 0x20) = uVar17 + 1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_0511a2fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


