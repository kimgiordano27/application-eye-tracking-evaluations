/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 05cd22fc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cd2474) */
/* WARNING: Removing unreachable block (ram,0x05cd2418) */
/* WARNING: Removing unreachable block (ram,0x05cd2480) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(void)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  long *plStack0000000000000030;
  char cStack000000000000004c;
  
  *(undefined1 *)(unaff_x19 + 0x4f9) = 1;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  plStack0000000000000030 = (long *)0x0;
  uVar8 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined1 *)(unaff_x20 + 0x148) = 1;
  cStack000000000000004c = '\0';
  FUN_071e78b0(uVar8,&stack0x0000004c,0);
  cVar1 = *(char *)(unaff_x20 + 0xb0);
  thunk_FUN_03d187c8();
  if (cVar1 == '\0') {
    if (*(long *)(unaff_x20 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_05a3a290(&stack0x00000008,*(long *)(unaff_x20 + 0x110),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x140));
    puVar2 = PTR_DAT_091a14e0;
    uStack0000000000000028 = in_stack_00000010;
    uStack0000000000000020 = in_stack_00000008;
    plStack0000000000000030 = in_stack_00000018;
    while (uVar4 = FUN_06daab3c(&stack0x00000020,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x160)),
          plVar3 = plStack0000000000000030, (uVar4 & 1) != 0) {
      if (plStack0000000000000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = *plStack0000000000000030;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05cd23e0;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plStack0000000000000030,*(long *)puVar2,0);
LAB_05cd23e0:
      (*(code *)*puVar5)(plVar3,puVar5[1]);
    }
    FUN_06daab38(&stack0x00000020,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_076c0384();
    if (*(long *)(unaff_x20 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    FUN_071e01f8(*(long *)(unaff_x20 + 0x128),0);
  }
  if (cStack000000000000004c != '\0') {
    thunk_FUN_03d180a8(uVar8,0);
  }
  return;
}


