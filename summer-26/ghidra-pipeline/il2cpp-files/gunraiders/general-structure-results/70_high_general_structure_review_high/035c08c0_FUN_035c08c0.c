/*
FUNCTION_NAME: FUN_035c08c0
ENTRY_POINT: 035c08c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_035c08c0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_04537cab & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<DoubleField,_DoubleField_UxmlTraits>__ctor__
                );
    DAT_04537cab = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar6 = *(long *)PTR_DAT_0422f958;
    lVar2 = *(long *)(lVar6 + 0x38);
    if (lVar2 == 0) {
      FUN_01c723f0(lVar6);
      lVar2 = *(long *)(lVar6 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01c72394();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar2 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01c72394();
    }
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar7 = **(undefined8 **)(lVar2 + 0xb8);
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar8 = *(undefined8 *)
               Method_UnityEngine_UIElements_UxmlFactory<DoubleField,_DoubleField_UxmlTraits>__ctor__
      ;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar1 = (undefined8 *)(lVar6 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_035c09e0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01c72498(plVar5,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1)
      ;
LAB_035c09e0:
      (*(code *)*puVar1)(plVar5,3,uVar8,uVar7,puVar1[1]);
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) ==
                *(long *)
                 Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__)
            {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
              goto LAB_035c0a58;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01c72498(plVar5,*(long *)
                                      Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SelectionType>__ctor__
                              ,3);
LAB_035c0a58:
        (*(code *)*puVar1)(plVar5,puVar1[1]);
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


