/*
FUNCTION_NAME: FUN_01e8e424
ENTRY_POINT: 01e8e424
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_01e8e424(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_044a2d57 & 1) == 0) {
    FUN_01d7d918(Field_Unity_VisualScripting_FullSerializer_Internal_fsVersionedType_Ancestors);
    FUN_01d7d918(Field_UnityEngine_XR_ARFoundation_ARPoseDriver_NullablePose_position);
    FUN_01d7d918(Field_UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_row);
    FUN_01d7d918(Field_System_Array_SorterGenericArray_keys);
    FUN_01d7d918(Field_System_Array_SorterObjectArray_keys);
    FUN_01d7d918(Field_Unity_VisualScripting_BinaryOperatorHandler_OperatorQuery_leftType);
    DAT_044a2d57 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_02b23f3c(*(long *)(param_1 + 0x28),
                 *(undefined8 *)Field_UnityEngine_XR_ARFoundation_ARPoseDriver_NullablePose_position
                );
    puVar3 = Field_System_Array_SorterGenericArray_keys;
    puVar2 = Field_UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_row;
    puVar1 = Field_Unity_VisualScripting_FullSerializer_Internal_fsVersionedType_Ancestors;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_0319996c(&local_48,*(long *)(param_1 + 0x18),
                   *(undefined8 *)
                    Field_Unity_VisualScripting_BinaryOperatorHandler_OperatorQuery_leftType);
      while( true ) {
        uVar4 = FUN_02c52b88(&local_48,*(undefined8 *)puVar3);
        if ((uVar4 & 1) == 0) {
          FUN_02c52b84(&local_48,*(undefined8 *)puVar2);
          *(undefined1 *)(param_1 + 0x20) = 1;
          return;
        }
        if (local_38 == 0) break;
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_02b23db4(*(long *)(param_1 + 0x28),*(undefined8 *)(local_38 + 0x10),
                     *(undefined8 *)(local_38 + 0x18),*(undefined8 *)puVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


