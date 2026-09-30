/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$Setup
ENTRY_POINT: 056a2fe0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__Setup(undefined8 param_1,long param_2)

{
  void *__src;
  long lVar1;
  undefined8 *puVar2;
  ushort *in_x9;
  int *piVar3;
  long *unaff_x19;
  long unaff_x20;
  ulong uVar4;
  long unaff_x24;
  long unaff_x29;
  
  uVar4 = (ulong)*(uint *)(**(long **)(param_2 + 0xc0) + 0xfc);
  if ((*in_x9 & 1) == 0) {
    FUN_03775678(param_1);
  }
  __src = (void *)thunk_FUN_03799158();
  memcpy(&stack0x00000000 + -(uVar4 + 0xf & 0x1fffffff0),__src,uVar4);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  thunk_FUN_037784fc(**(undefined8 **)(lVar1 + 0xc0),&stack0x00000000 + -(uVar4 + 0xf & 0x1fffffff0)
                    );
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar1 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_07d96160) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar3 + 1) * 0x10 + 0x138);
        goto LAB_056a30c0;
      }
      uVar4 = uVar4 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_056a30c0:
  (*(code *)*puVar2)();
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


