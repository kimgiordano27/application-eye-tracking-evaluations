/*
FUNCTION_NAME: FUN_06b89530
ENTRY_POINT: 06b89530
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_3;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


void FUN_06b89530(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  
  if ((DAT_0756022d & 1) == 0) {
    FUN_03188a78(UnityEngine_UIElements_InlineStyleAccessPropertyBag_AlignSelfProperty_TypeInfo);
    FUN_03188a78(System_Xml_XmlEncodedRawTextWriter_TypeInfo);
    FUN_03188a78(PTR_DAT_07118610);
    FUN_03188a78(System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_03188a78(Method_System_Collections_Generic_HashSet<Collider>_RemoveWhere__);
    FUN_03188a78(PTR_DAT_070c2498);
    FUN_03188a78(PTR_DAT_070c24d0);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_Dispose__
                );
    FUN_03188a78(Method_System_Collections_Generic_HashSet<Collider>_get_Count__);
                    /* try { // try from 06b895e4 to 06c898b3 has its CatchHandler @ 06b895e4
                       catch() { ... } // from try @ 06b895e4 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b898e8 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b899bc with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89b44 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89cb8 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89d6c with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89db4 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89df4 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89e34 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89e60 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89e88 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89ebc with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89efc with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89f20 with catch @ 06b895e4
                       catch() { ... } // from try @ 06b89f60 with catch @ 06b895e4 */
    FUN_03188a78(Method_Oculus_Platform_Models_DeserializableList<Destination>_get_NextUrl__);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
                );
    FUN_03188a78(PTR_DAT_070f4d30);
    DAT_0756022d = 1;
  }
  puVar7 = Method_System_Collections_Generic_HashSet<Collider>_get_Count__;
  puVar6 = Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_Dispose__
  ;
  puVar4 = Method_Oculus_Platform_Models_DeserializableList<Destination>_get_NextUrl__;
  puVar3 = UnityEngine_UIElements_InlineStyleAccessPropertyBag_AlignSelfProperty_TypeInfo;
  puVar2 = System_Xml_XmlEncodedRawTextWriter_TypeInfo;
  if (param_4 != 0) {
    if (0 < *(int *)(param_4 + 0x18)) {
      iVar15 = 0;
      do {
        lVar10 = FUN_042e47a4(param_4,iVar15,*(undefined8 *)puVar7);
        if (lVar10 == 0) goto LAB_06b8986c;
        lVar16 = *(long *)(param_1 + 0x70);
        plVar11 = (long *)FUN_069a3adc(lVar10,0);
        if (lVar16 == 0) goto LAB_06b8986c;
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)0x0;
        }
        else if (*plVar11 != *(long *)PTR_DAT_070f4d30) {
          plVar11 = (long *)0x0;
        }
        lVar13 = *(long *)(lVar16 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_06b8986c;
        uVar1 = *(uint *)(lVar16 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar16 + 0x18) = uVar1 + 1;
          *(long **)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = plVar11;
        }
        else {
          FUN_042e4a64(lVar16,plVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (param_5 == 0) goto LAB_06b8986c;
        uVar8 = FUN_042847a8(param_5,iVar15,*(undefined8 *)puVar6);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)puVar4);
        }
        uVar12 = FUN_06abbfa4(uVar8,0);
        uVar8 = 0;
        if ((uVar12 & 1) == 0) {
          lVar16 = *(long *)(param_1 + 0x70);
          if ((lVar16 == 0) ||
             (lVar16 = FUN_042e47a4(lVar16,*(int *)(lVar16 + 0x18) + -1,
                                    *(undefined8 *)PTR_DAT_070c24d0), lVar16 == 0))
          goto LAB_06b8986c;
          iVar9 = FUN_069b2424(lVar16,0);
          puVar5 = 
          Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
          ;
          if (iVar9 == 1) {
            lVar16 = *(long *)
                      Method_System_Collections_Generic_Dictionary<ParameterExpression,_LocalVariable>_TryGetValue__
            ;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar16 = *(long *)puVar5;
            }
            uVar8 = thunk_FUN_069a6238(lVar10,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x6c),0);
          }
        }
        lVar10 = *(long *)(param_1 + 0x78);
        if (lVar10 == 0) goto LAB_06b8986c;
        lVar16 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar3;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_06b8986c;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
        }
        else {
          FUN_04363a0c(uVar8,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_4 + 0x18));
    }
    FUN_06b89870(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x70));
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 != 0) {
      iVar15 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar15) {
        FUN_0595236c(*(undefined8 *)(lVar10 + 0x10),0,iVar15,0);
      }
      lVar10 = *(long *)(param_1 + 0x78);
      if (lVar10 != 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        return;
      }
    }
  }
LAB_06b8986c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


