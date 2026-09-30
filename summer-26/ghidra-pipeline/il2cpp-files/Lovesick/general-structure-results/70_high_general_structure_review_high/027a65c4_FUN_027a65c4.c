/*
FUNCTION_NAME: FUN_027a65c4
ENTRY_POINT: 027a65c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_027a65c4(undefined8 param_1,undefined4 param_2,undefined8 param_3,byte *param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *local_40;
  undefined4 local_34;
  
  puVar1 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if ((DAT_03788785 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f28b8);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_03788785 = 1;
  }
  local_40 = (long *)0x0;
  uVar4 = FUN_017bc96c(param_3,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  lVar5 = *(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    local_34 = param_2;
    uVar4 = FUN_0129eff4(lVar5,&local_34,&local_40,*(undefined8 *)PTR_DAT_033f28b8);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (local_40 != (long *)0x0) {
      iVar3 = (**(code **)(*local_40 + 0x3c8))(local_40,*(undefined8 *)(*local_40 + 0x3d0));
      if (iVar3 == 1) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 == 0) goto LAB_027a6704;
        FUN_026d562c(lVar5,param_3,0);
        bVar2 = FUN_027a6708(local_40);
        *param_4 = bVar2 & 1;
      }
      return 1;
    }
  }
LAB_027a6704:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


