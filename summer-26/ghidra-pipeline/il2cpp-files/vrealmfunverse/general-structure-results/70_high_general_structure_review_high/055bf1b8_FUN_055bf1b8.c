/*
FUNCTION_NAME: FUN_055bf1b8
ENTRY_POINT: 055bf1b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_055bf1b8(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  long local_48;
  
  if ((DAT_066d1834 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo);
    FUN_02b3c81c(
                Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__);
    DAT_066d1834 = 1;
  }
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo;
  local_48 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_054a2250(param_1,0);
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_0558a6f0(uVar3,param_2,0);
    if (lVar2 != 0) {
      uVar4 = FUN_0452f928(lVar2,uVar3,&local_48,
                           *(undefined8 *)
                            UnityEngine_UIElements_BackgroundSize_PropertyBag_XProperty_TypeInfo);
      plVar7 = (long *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
      if ((uVar4 & 1) != 0) {
        if ((local_48 == 0) || (*(long *)(local_48 + 0x30) == 0)) goto LAB_055bf390;
        uVar4 = FUN_0558a954(*(long *)(local_48 + 0x30),0);
        plVar7 = (long *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__;
        if ((uVar4 & 1) == 0) {
          return;
        }
      }
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        uVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                    System_Runtime_Serialization_XmlFormatReaderGenerator_CriticalHelper_TypeInfo
                                  );
        FUN_054c23d0(uVar3,lVar2,param_2,param_4,param_5,param_6,0);
        if (param_3 == (long *)0x0) {
          uVar6 = thunk_FUN_02ba3594(
                                    Method_System_Collections_Generic_Dictionary<int,_TMP_Style>_TryGetValue__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar3,uVar6);
        }
        lVar2 = *param_3;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)
                 Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
               ) {
              puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_055bf364;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02b7654c(param_3,*(long *)
                                       Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_TypeInfo
                              ,1);
LAB_055bf364:
        (*(code *)*puVar5)(param_3,uVar3,0,puVar5[1]);
      }
      return;
    }
  }
LAB_055bf390:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


