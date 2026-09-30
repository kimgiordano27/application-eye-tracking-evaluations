/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$ToDisplayStrings
ENTRY_POINT: 06556804
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__ToDisplayStrings(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x25;
  
  iVar1 = (**(code **)(param_1 + 0x138))();
  if (iVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c(lVar2);
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&stack0x0000001c);
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_065568c8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370();
LAB_065568c8:
    iVar1 = (*(code *)*puVar3)();
    if (iVar1 == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c(lVar2);
      }
      thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18),&stack0x0000001c);
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06556988;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370();
LAB_06556988:
      (*(code *)*puVar3)();
    }
  }
  return;
}


