/*
FUNCTION_NAME: FUN_027a7388
ENTRY_POINT: 027a7388
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_027a7388(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_28 [8];
  
  local_50 = param_1;
  uStack_4c = param_2;
  local_48 = param_3;
  uStack_44 = param_4;
  if ((DAT_0378878c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_10365);
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<Property>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_Manager_WatchTexture_<>c__DisplayClass0_0_<_ctor>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_AnimatedSnapTurnVisuals_HandleLocomotionPerformed__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<PinchGesture>_set_arSessionOrigin__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_0378878c = 1;
  }
  lVar6 = FUN_026cc3f8(0);
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  puVar2 = System_Collections_Generic_IEnumerable<Property>_TypeInfo;
  if (lVar6 != 0) {
    iVar5 = FUN_026cc440(lVar6,0);
    if (iVar5 == 8) {
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_027a75ac;
      if (0 < *(int *)(**(long **)(lVar6 + 0xb8) + 0x18)) {
        uVar7 = FUN_026884c4(&local_50,0);
        uVar8 = FUN_026884d4(&local_50,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026d91f0(uVar7,uVar8,0);
      }
    }
    puVar4 = StringLiteral_10365;
    uVar1 = *(undefined4 *)
             (*(long *)(*(long *)
                         Method_Meta_XR_ImmersiveDebugger_Manager_WatchTexture_<>c__DisplayClass0_0_<_ctor>b__0__
                       + 0xb8) + 8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026d2acc(uVar1,0,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026db11c(0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar3;
    }
    if ((**(long **)(lVar6 + 0xb8) != 0) && (uVar7 = FUN_026cc3f8(0), param_5 != 0)) {
      FUN_026d55bc(param_5,uVar7,0);
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        if (0 < *(int *)(**(long **)(lVar6 + 0xb8) + 0x18)) {
          FUN_026dad48(0);
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar6 = *(long *)puVar3;
          }
          if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_027a75ac;
          FUN_013b1910(**(long **)(lVar6 + 0xb8),auStack_28,
                       *(undefined8 *)
                        Method_Oculus_Interaction_Locomotion_AnimatedSnapTurnVisuals_HandleLocomotionPerformed__
                      );
        }
        return;
      }
    }
  }
LAB_027a75ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


