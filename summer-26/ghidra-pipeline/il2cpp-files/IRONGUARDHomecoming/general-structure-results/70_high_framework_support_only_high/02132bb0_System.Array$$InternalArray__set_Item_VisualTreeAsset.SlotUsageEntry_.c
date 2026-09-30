/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<VisualTreeAsset.SlotUsageEntry>
ENTRY_POINT: 02132bb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02132d30) */

void System_Array__InternalArray__set_Item<VisualTreeAsset_SlotUsageEntry>(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int in_w8;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    uVar6 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Globalization_Bootstring_Decode__);
    FUN_02e6c0a0(uVar2,uVar6,*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x30),0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8) = uVar2;
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    thunk_FUN_01f51358(*(long *)(lVar1 + 0xb8) + 8,uVar2);
  }
  FUN_02458150();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03ed669c();
  lVar1 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02132d04;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02132d04:
  (*(code *)*puVar3)();
  return;
}


