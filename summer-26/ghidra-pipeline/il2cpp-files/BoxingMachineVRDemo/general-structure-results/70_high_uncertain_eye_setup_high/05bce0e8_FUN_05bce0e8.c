/*
FUNCTION_NAME: FUN_05bce0e8
ENTRY_POINT: 05bce0e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05bce30c) */

void FUN_05bce0e8(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  
  if ((DAT_06b81fdb & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067608d0);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>__ctor__
                );
    FUN_02d6084c(
                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                );
    FUN_02d6084c(
                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TryGetValue__
                );
    DAT_06b81fdb = 1;
  }
  puVar2 = PTR_DAT_0675f3d0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  bVar1 = *(byte *)(*(long *)
                     Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                   + 0x130);
  if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(param_2);
  }
  plVar10 = (long *)param_2[4];
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar3 = FUN_0637be50(plVar10,0);
  if (iVar3 == 1) {
    lVar11 = *(long *)(param_1 + 0x10);
    lVar4 = FUN_0637b794(plVar10,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar5 = FUN_0637a5a8(lVar4,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8(uVar5,uVar5);
    }
    FUN_042793e8(lVar11,uVar5,
                 *(undefined8 *)
                  Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>__ctor__
                );
  }
  else {
    uVar5 = thunk_FUN_0637bef4(plVar10,0);
    uVar6 = FUN_0637bd90(plVar10,0);
    uVar5 = FUN_04e8e29c(*(undefined8 *)
                          Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
                         ,uVar5,*(undefined8 *)
                                 Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TryGetValue__
                         ,uVar6,0);
    lVar4 = *(long *)(param_1 + 0x10);
    uVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067608d0);
    FUN_0503de34(uVar6,uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_04279320(lVar4,uVar6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__
                );
  }
  lVar4 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05bce2d8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)puVar2,0);
LAB_05bce2d8:
  (*(code *)*puVar7)(plVar10,puVar7[1]);
  return;
}


