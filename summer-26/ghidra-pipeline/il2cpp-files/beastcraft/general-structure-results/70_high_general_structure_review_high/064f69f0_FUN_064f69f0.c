/*
FUNCTION_NAME: FUN_064f69f0
ENTRY_POINT: 064f69f0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_5;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x064f6c48) */

void FUN_064f69f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  long *local_78;
  long local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined1 local_40 [16];
  long local_28;
  
  puVar1 = PTR_DAT_06a2ed80;
  if ((DAT_06e9ccb7 & 1) == 0) {
    FUN_02e3ca1c(Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__);
    FUN_02e3ca1c(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__);
    FUN_02e3ca1c(Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
    FUN_02e3ca1c(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
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
    DAT_06e9ccb7 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x1b8);
  local_28 = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_062696b0(uVar8,0,0);
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__ +
                0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    local_40 = FUN_04b9ac08(&local_28,*(undefined8 *)puVar1);
    local_68 = local_40;
    local_70 = 0;
    if (*(long *)(param_1 + 0x1b8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_0391c804(*(long *)(param_1 + 0x1b8),local_28,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_03f2c008(&local_88,local_28,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                );
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
    ;
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    uStack_58 = puStack_80;
    local_60 = local_88;
    local_50 = local_78;
    local_88 = 0;
    puStack_80 = &local_60;
    while (uVar4 = FUN_04fc1198(&local_60,*(undefined8 *)puVar1), plVar3 = local_50,
          (uVar4 & 1) != 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar6 = *local_50;
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
      puVar5 = (undefined8 *)FUN_02e759c0(local_50,*(long *)puVar2,0);
LAB_064f6bd4:
      (*(code *)*puVar5)(plVar3,param_2,puVar5[1]);
    }
    FUN_04fc1194(&local_60,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__);
    lVar6 = local_70;
    System_Collections_ObjectModel_ReadOnlyCollection<IntPtr>__System_Collections_Generic_IList<T>_get_Item
              (local_68,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_registeredSnapshot__
              );
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccbc(lVar6);
    }
  }
  return;
}


