/*
FUNCTION_NAME: FUN_0569bb38
ENTRY_POINT: 0569bb38
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


uint FUN_0569bb38(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(5);
  }
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    plVar9 = *(long **)(param_1 + 0x30);
    lVar12 = *(long *)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
      if (param_2 != (long *)0x0) {
        uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
        uVar3 = *(uint *)(lVar14 + 0x18);
        uVar2 = uVar2 & 0x7fffffff;
        iVar13 = 0;
        if (uVar3 != 0) {
          iVar13 = (int)uVar2 / (int)uVar3;
        }
        uVar10 = uVar2 - iVar13 * uVar3;
        if (uVar3 <= uVar10) goto LAB_0569be20;
        iVar13 = *(int *)(lVar14 + (ulong)uVar10 * 4 + 0x20);
        plVar9 = (long *)FUN_03b1c798(*(undefined8 *)
                                       (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
        if (lVar12 != 0) {
          uVar3 = *(uint *)(lVar12 + 0x18);
          uVar10 = iVar13 - 1;
          if (uVar3 <= uVar10) {
            return uVar10;
          }
          iVar13 = 0;
          lVar14 = lVar12 + 0x20;
          do {
            if (*(uint *)(lVar14 + (long)(int)uVar10 * 0xa8) == uVar2) {
              if (plVar9 == (long *)0x0) break;
              uVar7 = (**(code **)(*plVar9 + 0x1b8))
                                (plVar9,*(undefined8 *)(lVar14 + (long)(int)uVar10 * 0xa8 + 8),
                                 param_2,*(undefined8 *)(*plVar9 + 0x1c0));
              if ((uVar7 & 1) != 0) {
                return uVar10;
              }
              uVar3 = *(uint *)(lVar12 + 0x18);
            }
            if (uVar3 <= uVar10) goto LAB_0569be20;
            uVar10 = *(uint *)(lVar14 + (long)(int)uVar10 * 0xa8 + 4);
            if ((int)uVar3 <= iVar13) {
              FUN_05e39b64(0);
            }
            uVar3 = *(uint *)(lVar12 + 0x18);
            iVar13 = iVar13 + 1;
            if (uVar3 <= uVar10) {
              return uVar10;
            }
          } while( true );
        }
      }
LAB_0569be24:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0569bccc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar9,lVar5,1);
LAB_0569bccc:
    uVar3 = (*(code *)*puVar4)(plVar9,param_2,puVar4[1]);
    uVar2 = *(uint *)(lVar14 + 0x18);
    uVar3 = uVar3 & 0x7fffffff;
    iVar13 = 0;
    if (uVar2 != 0) {
      iVar13 = (int)uVar3 / (int)uVar2;
    }
    uVar10 = uVar3 - iVar13 * uVar2;
    if (uVar2 <= uVar10) {
LAB_0569be20:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (lVar12 == 0) goto LAB_0569be24;
    uVar1 = *(uint *)(lVar12 + 0x18);
    uVar2 = *(int *)(lVar14 + (ulong)uVar10 * 4 + 0x20) - 1;
    if (uVar2 < uVar1) {
      iVar13 = 0;
      lVar14 = lVar12 + 0x20;
      do {
        if (*(uint *)(lVar14 + (long)(int)uVar2 * 0xa8) == uVar3) {
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
          uVar11 = *(undefined8 *)(lVar14 + (long)(int)uVar2 * 0xa8 + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0367c9fc(lVar5);
          }
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>__RemoveRange;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_0367cd30(plVar9,lVar5,0);
UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>__RemoveRange:
          uVar7 = (*(code *)*puVar4)(plVar9,uVar11,param_2,puVar4[1]);
          if ((uVar7 & 1) != 0) {
            return uVar2;
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
        }
        if (uVar1 <= uVar2) goto LAB_0569be20;
        uVar2 = *(uint *)(lVar14 + (long)(int)uVar2 * 0xa8 + 4);
        if ((int)uVar1 <= iVar13) {
          FUN_05e39b64(0);
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        iVar13 = iVar13 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return uVar2;
}


