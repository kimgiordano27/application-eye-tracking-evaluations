/*
FUNCTION_NAME: FUN_035c0e5c
ENTRY_POINT: 035c0e5c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_035c0e5c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_04537cad & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_UxmlFactory<Foldout,_Foldout_UxmlTraits>__ctor__);
    DAT_04537cad = 1;
  }
  iVar1 = thunk_FUN_01c649cc(param_1 + 0x58,0,0);
  if (iVar1 == 0) {
LAB_035c0fc0:
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 == (long *)0x0) {
      return;
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_035c1030;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01c72498(plVar6,*(long *)
                                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                          ,5);
LAB_035c1030:
                    /* WARNING: Could not recover jumptable at 0x035c1044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(plVar6,puVar2[1]);
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar7 = *(long *)PTR_DAT_0422f958;
    lVar3 = *(long *)(lVar7 + 0x38);
    if (lVar3 == 0) {
      FUN_01c723f0(lVar7);
      lVar3 = *(long *)(lVar7 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c72394();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c72394();
    }
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar9 = *(undefined8 *)
               Method_UnityEngine_UIElements_UxmlFactory<Foldout,_Foldout_UxmlTraits>__ctor__;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_035c0f90;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01c72498(plVar6,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1)
      ;
LAB_035c0f90:
      (*(code *)*puVar2)(plVar6,3,uVar9,uVar8,puVar2[1]);
      FUN_035c08c0(param_1);
      FUN_035bfc80(param_1);
      FUN_035c0314(param_1);
      goto LAB_035c0fc0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


