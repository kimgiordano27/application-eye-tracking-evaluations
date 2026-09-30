/*
FUNCTION_NAME: FUN_06286840
ENTRY_POINT: 06286840
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_06286840(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_06bcbe2a & 1) == 0) {
    FUN_02f08768(StringLiteral_172);
    FUN_02f08768(
                Method_UnityEngine_XR_ARFoundation_InternalUtils_SubsystemUtils_TryGetLoadedSubsystem<XRSessionSubsystem>__
                );
    FUN_02f08768(Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>_TypeInfo);
    FUN_02f08768(StringLiteral_4775);
    FUN_02f08768(PTR_DAT_067cc608);
    DAT_06bcbe2a = 1;
  }
  puVar2 = 
  Method_UnityEngine_XR_ARFoundation_InternalUtils_SubsystemUtils_TryGetLoadedSubsystem<XRSessionSubsystem>__
  ;
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x2d8) == '\0') {
      uVar7 = FUN_06383fa0(param_3,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar2);
      }
      FUN_0614980c(uVar7,0);
    }
    else {
      plVar6 = *(long **)(param_3 + 0x298);
      if (plVar6 == (long *)0x0) goto LAB_06286a6c;
      uVar7 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar2);
      }
      FUN_06149730(uVar7,0);
    }
    puVar1 = PTR_DAT_067cc608;
    lVar8 = *(long *)PTR_DAT_067cc608;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar1;
    }
    if (**(long **)(lVar8 + 0xb8) != 0) {
      FUN_042e7cdc(**(long **)(lVar8 + 0xb8),param_3,*(undefined8 *)StringLiteral_4775);
      lVar8 = *(long *)puVar2;
      uVar4 = *(undefined4 *)(param_3 + 0x348);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar8 = *(long *)puVar2;
      }
      plVar6 = *(long **)(param_3 + 0x298);
      *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4) = uVar4;
      if (plVar6 != (long *)0x0) {
        lVar8 = (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
        if (lVar8 != 0) {
          uVar4 = FUN_060f5e80(lVar8,0);
          *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar4;
          lVar8 = FUN_0613ef74(0);
          if (lVar8 == 0) {
            FUN_0613efbc(param_2,0);
          }
          else {
            lVar8 = FUN_0613ef74(0);
            if (lVar8 == 0) goto LAB_06286a6c;
            FUN_0613eec4(lVar8,param_2,0);
          }
          puVar3 = StringLiteral_172;
          puVar1 = Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector4>_TypeInfo;
          uVar5 = FUN_0623bf48(param_3,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)puVar1);
          }
          FUN_06141394(uVar5 & 1,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_06144224(param_1,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_0614a5f0(0);
          return;
        }
      }
    }
  }
LAB_06286a6c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


