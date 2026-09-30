/*
FUNCTION_NAME: FUN_03287d08
ENTRY_POINT: 03287d08
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_14;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_03287d08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ReceivedMqttPacket>_Create__;
  if ((DAT_04532c58 & 1) == 0) {
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
    DAT_04532c58 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  thunk_FUN_01c21c38();
  lVar3 = *(long *)puVar1;
  if (lVar5 != 0) {
LAB_03288118:
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    thunk_FUN_01c21c38();
    return uVar6;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  thunk_FUN_01c21c38();
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = 0;
  thunk_FUN_01c21c38();
  plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__
                                ,5);
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__;
  lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__)
  ;
  FUN_03284ed8(lVar3,5,0x7e3,5,1,0x7e2,1,0x1f2d,
               *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_direction__,
               *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_get_highValue__,
               *(undefined8 *)PTR_DAT_04237248);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((lVar3 != 0) &&
     (lVar5 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_03288150:
    uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar3;
    lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_03284ed8(lVar3,4,0x7c5,1,8,0x7c4,1,0x1f,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>_GetClosestPowerOfTen__
                 ,*(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
                 *(undefined8 *)I2_Loc_SimpleJSON_JSONArray_<GetEnumerator>d__14_TypeInfo);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_03288150;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar3;
      lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
      FUN_03284ed8(lVar3,3,0x786,0xc,0x19,0x785,1,0x40,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__,
                   *(undefined8 *)Newtonsoft_Json_Linq_JProperty_JPropertyList_TypeInfo);
      if ((lVar3 != 0) &&
         (lVar5 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_03288150;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar3;
        lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
        FUN_03284ed8(lVar3,2,0x778,7,0x1e,0x777,1,0xf,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__
                     ,*(undefined8 *)
                       Method_UnityEngine_UIElements_BaseSlider<int>_RoundToMultipleOf__,
                     *(undefined8 *)PTR_DAT_04237850);
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_03288150;
        if (3 < *(uint *)(plVar4 + 3)) {
          plVar4[7] = lVar3;
          lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
          FUN_03284ed8(lVar3,1,0x74c,1,1,0x74b,1,0x2d,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseSlider<int>_get_clampedDragger__,
                       *(undefined8 *)Method_UnityEngine_UIElements_BaseSlider<int>__ctor__,
                       *(undefined8 *)PTR_DAT_042378a8);
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_03288150;
          if (4 < *(uint *)(plVar4 + 3)) {
            plVar4[8] = lVar3;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            thunk_FUN_01c21c38();
            lVar3 = *(long *)puVar1;
            *(long **)(*(long *)(lVar3 + 0xb8) + 8) = plVar4;
            goto LAB_03288118;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


