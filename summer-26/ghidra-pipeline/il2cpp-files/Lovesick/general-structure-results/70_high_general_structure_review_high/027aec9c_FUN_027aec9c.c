/*
FUNCTION_NAME: FUN_027aec9c
ENTRY_POINT: 027aec9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * FUN_027aec9c(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *local_28;
  
  if ((DAT_037887d2 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_12524);
    thunk_FUN_00d48444(StringLiteral_2196);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_037887d2 = 1;
  }
  puVar2 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  local_28 = (long *)0x0;
  if (param_1 != 0) {
    uVar3 = FUN_02681c0c(param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar2 = StringLiteral_2196;
    uVar4 = FUN_027a707c(uVar3,&local_28);
    if ((uVar4 & 1) != 0) {
      if (local_28 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_12524 + 300);
        if ((bVar1 <= *(byte *)(*local_28 + 300)) &&
           (*(long *)(*(long *)(*local_28 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)StringLiteral_12524)) {
          return local_28;
        }
      }
      uVar3 = FUN_02681c0c(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_027aee38(uVar3);
    }
    if ((param_2 != 0) &&
       (plVar5 = (long *)(**(code **)(param_2 + 0x18))
                                   (*(undefined8 *)(param_2 + 0x40),param_1,
                                    *(undefined8 *)(param_2 + 0x28)), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x1e8))(plVar5,0x101,*(undefined8 *)(*plVar5 + 0x1f0));
      uVar3 = FUN_02681c0c(param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_027aef98(uVar3,plVar5);
      lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),plVar5,*(undefined8 *)(lVar6 + 0x28));
      }
      return plVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


