/*
FUNCTION_NAME: FUN_035c0cb8
ENTRY_POINT: 035c0cb8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_035c0cb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_04537caa & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                );
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<FloatField,_FloatField_UxmlTraits>__ctor__
                );
    DAT_04537caa = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar8 = *(long *)PTR_DAT_0422f958;
    lVar4 = *(long *)(lVar8 + 0x38);
    if (lVar4 == 0) {
      FUN_01c723f0(lVar8);
      lVar4 = *(long *)(lVar8 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    puVar2 = Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SliderDirection>__ctor__;
    puVar1 = 
    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__;
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar9 = **(undefined8 **)(lVar4 + 0xb8);
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar10 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlFactory<FloatField,_FloatField_UxmlTraits>__ctor__
      ;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_035c0df8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar7,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1)
      ;
LAB_035c0df8:
      (*(code *)*puVar3)(plVar7,3,uVar10,uVar9,puVar3[1]);
      FUN_035c08c0(param_1);
      FUN_035c0a7c(param_1);
      uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_03cf63a0(uVar9,param_1,*(undefined8 *)puVar2,0);
      FUN_03cf6164(uVar9,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


