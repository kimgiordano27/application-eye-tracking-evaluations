/*
FUNCTION_NAME: FUN_035c507c
ENTRY_POINT: 035c507c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_035c507c(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_04537cd8 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(Cheese_GOAP_Demo_GOAPDriver_DemoVtol_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseSlider_UxmlTraits<float>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField_UxmlTraits<string>__ctor__);
    DAT_04537cd8 = 1;
  }
  uVar2 = FUN_03d45df0(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_2 == 0) || (plVar6 = *(long **)(param_2 + 0x10), plVar6 == (long *)0x0))
  goto LAB_035c52f0;
  if ((int)plVar6[10] == 1) {
    bVar1 = *(byte *)(*(long *)Cheese_GOAP_Demo_GOAPDriver_DemoVtol_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Cheese_GOAP_Demo_GOAPDriver_DemoVtol_TypeInfo)) {
      FUN_035c52f4(param_1,plVar6);
      *(long **)(param_1 + 0x48) = plVar6;
      return;
    }
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_035c52f0:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar7 = *(long *)PTR_DAT_0422f958;
    lVar4 = *(long *)(lVar7 + 0x38);
    if (lVar4 == 0) {
      FUN_01c723f0(lVar7);
      lVar4 = *(long *)(lVar7 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (plVar6 == (long *)0x0) goto LAB_035c52f0;
    lVar7 = *plVar6;
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
    lVar4 = *(long *)GameAnalyticsSDK_State_GAState_TypeInfo;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar9 = *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider_UxmlTraits<float>__ctor__;
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) goto LAB_035c52a4;
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_035c52f0;
    plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar7 = *(long *)PTR_DAT_0422f958;
    lVar4 = *(long *)(lVar7 + 0x38);
    if (lVar4 == 0) {
      FUN_01c723f0(lVar7);
      lVar4 = *(long *)(lVar7 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (plVar6 == (long *)0x0) goto LAB_035c52f0;
    lVar7 = *plVar6;
    uVar8 = **(undefined8 **)(lVar4 + 0xb8);
    lVar4 = *(long *)GameAnalyticsSDK_State_GAState_TypeInfo;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar9 = *(undefined8 *)Method_UnityEngine_UIElements_BaseField_UxmlTraits<string>__ctor__;
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) goto LAB_035c52a4;
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_01c72498(plVar6,lVar4,1);
LAB_035c52b4:
                    /* WARNING: Could not recover jumptable at 0x035c52d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar6,1,uVar9,uVar8,puVar3[1]);
  return;
LAB_035c52a4:
  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
  goto LAB_035c52b4;
}


