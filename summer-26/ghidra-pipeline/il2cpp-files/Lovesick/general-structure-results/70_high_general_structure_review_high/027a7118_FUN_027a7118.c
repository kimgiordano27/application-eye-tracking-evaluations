/*
FUNCTION_NAME: FUN_027a7118
ENTRY_POINT: 027a7118
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_027a7118(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0378878b & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<Property>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_Manager_WatchTexture_<>c__DisplayClass0_0_<_ctor>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__);
    thunk_FUN_00d48444(
                      Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_0378878b = 1;
  }
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x3c0) == '\0') {
      uVar6 = FUN_027a72e4(param_3);
      FUN_026da714(uVar6,0);
    }
    else {
      plVar5 = *(long **)(param_3 + 0x388);
      if (plVar5 == (long *)0x0) goto LAB_027a72e0;
      uVar6 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
      FUN_026da6d8(uVar6,0);
    }
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
    ;
    lVar7 = *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
    ;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar1;
    }
    puVar1 = 
    Method_Meta_XR_ImmersiveDebugger_Manager_WatchTexture_<>c__DisplayClass0_0_<_ctor>b__0__;
    if (**(long **)(lVar7 + 0xb8) != 0) {
      FUN_013b1b6c(**(long **)(lVar7 + 0xb8),param_3,
                   *(undefined8 *)
                    Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>_TypeInfo
                  );
      *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = *(undefined4 *)(param_3 + 0x430);
      plVar5 = *(long **)(param_3 + 0x388);
      if (plVar5 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
        if (lVar7 != 0) {
          uVar3 = FUN_02681c0c(lVar7,0);
          *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar3;
          lVar7 = FUN_026cc3f8(0);
          if (lVar7 == 0) {
            FUN_026d5670(param_2,0);
          }
          else {
            lVar7 = FUN_026cc3f8(0);
            if (lVar7 == 0) goto LAB_027a72e0;
            FUN_026d55bc(lVar7,param_2,0);
          }
          puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpminnmqd_f64__;
          puVar1 = System_Collections_Generic_IEnumerable<Property>_TypeInfo;
          uVar4 = FUN_0274aa10(param_3,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar2);
          }
          FUN_026d3570(uVar4 & 1,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026d8ac4(param_1,0);
          FUN_026dae2c(0);
          return;
        }
      }
    }
  }
LAB_027a72e0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


