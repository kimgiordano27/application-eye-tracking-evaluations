/*
FUNCTION_NAME: FUN_0140cb88
ENTRY_POINT: 0140cb88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0140cb88(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if ((DAT_0377693c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Collections_Generic_List<MatAndTransformToMerged>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Object_Instantiate<Mesh>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderGraphPass>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12558);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__);
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_ValueFixup_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_108_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>__ctor__
                      );
    DAT_0377693c = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (plVar6 = (long *)FUN_013eae18(*(long *)(param_1 + 0x18),0), plVar6 != (long *)0x0)) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x24) * 0x10 + 0x138);
          goto LAB_0140cc94;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)
                                  Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                          ,0x24);
LAB_0140cc94:
    iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar2 = Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>__ctor__
    ;
    if (iVar4 != 1) {
      return;
    }
    if (3 < *(int *)(param_1 + 0x10)) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar2,0);
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x1c0), lVar8 != 0)) {
      auVar15 = FUN_0266a9e0(lVar8,0);
      puVar3 = OVRPlugin_OVRP_1_108_0_TypeInfo;
      puVar2 = System_Runtime_Serialization_Formatters_Binary_ValueFixup_TypeInfo;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x1c0), lVar8 != 0)) {
        auVar16 = FUN_0266ab0c(lVar8,0);
        local_68 = 0;
        uStack_60 = 0;
        FUN_01342490(&local_68,auVar15._0_8_,auVar15._8_8_,4,*(undefined8 *)puVar2);
        *(undefined8 *)(param_1 + 0x68) = uStack_60;
        *(long *)(param_1 + 0x60) = local_68;
        local_78 = 0;
        uStack_70 = 0;
        FUN_01342490(&local_78,auVar16._0_8_,auVar16._8_8_,4,*(undefined8 *)puVar3);
        *(undefined8 *)(param_1 + 0x58) = uStack_70;
        *(undefined8 *)(param_1 + 0x50) = local_78;
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_0129a9f4(*(long *)(param_1 + 0x48),
                       *(undefined8 *)
                        System_Collections_Generic_List<MatAndTransformToMerged>_TypeInfo);
          puVar2 = StringLiteral_12558;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x108), lVar8 != 0)) {
            FUN_0132138c(lVar8,0,&local_58,*(undefined8 *)StringLiteral_12558);
            puVar3 = Method_UnityEngine_Object_Instantiate<Mesh>__;
            if (*(long *)(param_1 + 0x48) != 0) {
              lVar8 = CONCAT44(uStack_54,local_58);
              local_58 = 0;
              FUN_01299e64(*(long *)(param_1 + 0x48),lVar8,&local_58,
                           *(undefined8 *)Method_UnityEngine_Object_Instantiate<Mesh>__);
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 != 0) {
                lVar12 = 0;
                iVar13 = 0;
                iVar14 = 0;
                iVar4 = 0;
                while (*(long *)(lVar9 + 0x1c0) != 0) {
                  iVar5 = FUN_02665480(*(long *)(lVar9 + 0x1c0),0);
                  if (iVar5 <= lVar12) {
                    return;
                  }
                  if (lVar8 == 0) break;
                  if (iVar14 < *(int *)(lVar8 + 0x30)) {
                    lVar9 = *(long *)(param_1 + 0x18);
                  }
                  else {
                    if ((*(long *)(param_1 + 0x18) == 0) ||
                       (lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x108), lVar8 == 0)) break;
                    iVar4 = iVar4 + 1;
                    FUN_0132138c(lVar8,iVar4,&local_68,*(undefined8 *)puVar2);
                    lVar8 = local_68;
                    if (*(long *)(param_1 + 0x48) == 0) break;
                    local_68 = CONCAT44(local_68._4_4_,iVar13);
                    FUN_01299e64(*(long *)(param_1 + 0x48),lVar8,&local_68,*(undefined8 *)puVar3);
                    lVar9 = *(long *)(param_1 + 0x18);
                    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x108) == 0)) break;
                    if (iVar4 == *(int *)(*(long *)(lVar9 + 0x108) + 0x18) + -1) {
                      return;
                    }
                    iVar14 = 0;
                  }
                  iVar14 = iVar14 + 1;
                  pbVar1 = (byte *)(*(long *)(param_1 + 0x50) + lVar12);
                  lVar12 = lVar12 + 1;
                  iVar13 = iVar13 + (uint)*pbVar1;
                  if (lVar9 == 0) break;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


