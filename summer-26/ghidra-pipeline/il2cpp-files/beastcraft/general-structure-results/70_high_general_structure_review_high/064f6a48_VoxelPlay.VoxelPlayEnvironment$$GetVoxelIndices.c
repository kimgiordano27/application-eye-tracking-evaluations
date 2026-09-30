/*
FUNCTION_NAME: VoxelPlay.VoxelPlayEnvironment$$GetVoxelIndices
ENTRY_POINT: 064f6a48
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x064f6c48) */

void VoxelPlay_VoxelPlayEnvironment__GetVoxelIndices(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
  FUN_02e3ca1c();
  FUN_02e3ca1c(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
  FUN_02e3ca1c(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
  FUN_02e3ca1c(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
              );
  FUN_02e3ca1c(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
              );
  FUN_02e3ca1c(PTR_DAT_06a2ed80);
  FUN_02e3ca1c(
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
              );
  *(undefined1 *)(unaff_x22 + 0xcb7) = 1;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x1b8);
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = (long *)0x0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_062696b0(uVar8,0,0);
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__ +
                0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    _in_stack_00000050 = FUN_04b9ac08(&stack0x00000068,*(undefined8 *)puVar1);
    in_stack_00000028 = &stack0x00000050;
    in_stack_00000020 = 0;
    if (*(long *)(unaff_x20 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_0391c804(*(long *)(unaff_x20 + 0x1b8),in_stack_00000068,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_03f2c008(&stack0x00000008,in_stack_00000068,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                );
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
    ;
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000030;
    while (uVar4 = FUN_04fc1198(&stack0x00000030,*(undefined8 *)puVar1), plVar3 = in_stack_00000040,
          (uVar4 & 1) != 0) {
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar6 = *in_stack_00000040;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_064f6bd4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02e759c0(in_stack_00000040,*(long *)puVar2,0);
LAB_064f6bd4:
      (*(code *)*puVar5)(plVar3);
    }
    FUN_04fc1194(&stack0x00000030,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
    lVar6 = in_stack_00000020;
    System_Collections_ObjectModel_ReadOnlyCollection<IntPtr>__System_Collections_Generic_IList<T>_get_Item
              (in_stack_00000028,
               *(undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
              );
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccbc(lVar6);
    }
  }
  return;
}


