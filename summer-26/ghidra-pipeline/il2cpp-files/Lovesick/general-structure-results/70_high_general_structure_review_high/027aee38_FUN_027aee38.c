/*
FUNCTION_NAME: FUN_027aee38
ENTRY_POINT: 027aee38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_027aee38(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if ((DAT_037887d5 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_Schema_ParticleContentValidator_CompleteValidation__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Controls_TouchControl_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2196);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_037887d5 = 1;
  }
  puVar3 = StringLiteral_2196;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_027a6fec(param_1);
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar3;
  }
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x18) = 1;
  if (lVar6 != 0) {
    lVar4 = *(long *)Method_System_Xml_Schema_ParticleContentValidator_CompleteValidation__;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    uVar5 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)(lVar6 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
    }
    FUN_027a78c0(*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
    lVar4 = *(long *)(*(long *)puVar3 + 0xb8);
    if (*(long *)(lVar4 + 0x10) != 0) {
      if (*(int *)(*(long *)(lVar4 + 0x10) + 0x18) != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)(*(long *)puVar3 + 0xb8);
      }
      *(undefined1 *)(lVar4 + 8) = 0;
      FUN_027af228();
      FUN_0285a14c(0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


