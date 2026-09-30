/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 03cb5944
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cb5aa0) */
/* WARNING: Removing unreachable block (ram,0x03cb5a9c) */
/* WARNING: Removing unreachable block (ram,0x03cb5ae4) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_000000a8;
  
code_r0x03cb5944:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar2 = (*(code *)*puVar3)(unaff_x23,puVar3[1]), plVar1 = in_stack_000000a8,
        (uVar2 & 1) != 0) {
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c(lVar4);
    }
    lVar5 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 03cb5990 to 03db5993 has its CatchHandler @ 03cb59ac */
    if (uVar2 != 0) {
                    /* try { // try from 03cb5994 to 03db5997 has its CatchHandler @ 03cb59a8 */
                    /* try { // try from 03cb5998 to 03db59cf has its CatchHandler @ 03cb54d8 */
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03cb59d0;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar1,lVar4,0);
LAB_03cb59d0:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
    memcpy(&stack0x00000058,&stack0x00000000,0x48);
    FUN_03cb53a8();
    unaff_x23 = in_stack_000000a8;
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_1 = *in_stack_000000a8;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          in_x9 = (long)*piVar6;
          goto code_r0x03cb5944;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(in_stack_000000a8,*unaff_x24,0);
  }
  if (in_stack_000000a8 != (long *)0x0) {
    lVar4 = *in_stack_000000a8;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03cb5a84;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(in_stack_000000a8,*(long *)PTR_DAT_067c91b0,0);
LAB_03cb5a84:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


