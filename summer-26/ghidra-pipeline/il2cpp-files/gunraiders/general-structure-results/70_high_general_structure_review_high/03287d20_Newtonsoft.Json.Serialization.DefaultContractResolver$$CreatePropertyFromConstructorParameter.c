/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreatePropertyFromConstructorParameter
ENTRY_POINT: 03287d20
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_7;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_DefaultContractResolver__CreatePropertyFromConstructorParameter(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long unaff_x21;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x21 + 0xb50);
  if ((*(byte *)(unaff_x19 + 0xc58) & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReceivedMqttPacket>_Create__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
    FUN_01c5d288(Newtonsoft_Json_Linq_JProperty_JPropertyList_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
    FUN_01c5d288(PTR_DAT_04237248);
    FUN_01c5d288(I2_Loc_SimpleJSON_JSONArray_<GetEnumerator>d__14_TypeInfo);
    FUN_01c5d288(PTR_DAT_04237850);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseSlider<int>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseSlider<int>_GetClosestPowerOfTen__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseSlider<int>_get_clampedDragger__);
    FUN_01c5d288(PTR_DAT_042378a8);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__);
    FUN_01c5d288(Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__);
    *(undefined1 *)(unaff_x19 + 0xc58) = 1;
  }
  lVar2 = *plVar6;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar2 = *plVar6;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  thunk_FUN_01c21c38();
  lVar2 = *plVar6;
  if (lVar4 != 0) {
LAB_03288118:
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar2 = *plVar6;
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    thunk_FUN_01c21c38();
    return uVar5;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  thunk_FUN_01c21c38();
  *(undefined8 *)(*(long *)(*plVar6 + 0xb8) + 8) = 0;
  thunk_FUN_01c21c38();
  plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__
                                ,5);
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__;
  lVar2 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__)
  ;
  FUN_03284ed8(lVar2,5,0x7e3,5,1,0x7e2,1,0x1f2d);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((lVar2 != 0) &&
     (lVar4 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_03288150:
    uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar2;
    lVar2 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03284ed8(lVar2,4,0x7c5,1,8,0x7c4,1,0x1f);
    if ((lVar2 != 0) &&
       (lVar4 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_03288150;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar2;
      lVar2 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_03284ed8(lVar2,3,0x786,0xc,0x19,0x785,1,0x40);
      if ((lVar2 != 0) &&
         (lVar4 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
      goto LAB_03288150;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar2;
        lVar2 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_03284ed8(lVar2,2,0x778,7,0x1e,0x777,1,0xf);
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_03288150;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar2;
          lVar2 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
          FUN_03284ed8(lVar2,1,0x74c,1,1,0x74b,1,0x2d);
          if ((lVar2 != 0) &&
             (lVar4 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_03288150;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar2;
            if (*(int *)(*plVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            thunk_FUN_01c21c38();
            lVar2 = *plVar6;
            *(long **)(*(long *)(lVar2 + 0xb8) + 8) = plVar3;
            goto LAB_03288118;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


