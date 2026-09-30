/*
FUNCTION_NAME: System.Linq.Enumerable.WhereArrayIterator<InputControlLayout.ControlItem>$$Where
ENTRY_POINT: 0283c70c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0283c884) */

void System_Linq_Enumerable_WhereArrayIterator<InputControlLayout_ControlItem>__Where
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  code *in_x11;
  long unaff_x19;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long lStack0000000000000080;
  long lStack0000000000000088;
  long lStack0000000000000090;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  
  lStack0000000000000080 = param_3;
  uVar1 = (*in_x11)(param_4,&stack0x000000a0,&stack0x00000080,*(undefined8 *)(param_1 + 0x1c0));
  if ((uVar1 & 1) == 0) {
    lVar5 = unaff_x20[0x80];
    lVar8 = unaff_x20[0x7f];
    lVar7 = unaff_x20[0x7e];
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 0283c760 to 0293c767 has its CatchHandler @ 0283c8e8 */
      lVar2 = FUN_01ecaf44();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
                    /* try { // try from 0283c76c to 0293c773 has its CatchHandler @ 0283c8e4 */
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 0283c778 to 0293c783 has its CatchHandler @ 0283c8e0 */
    in_stack_000000a8 = in_stack_00000068;
    in_stack_000000a0 = in_stack_00000060;
    in_stack_000000b0 = in_stack_00000070;
    lStack0000000000000080 = lVar7;
    lStack0000000000000088 = lVar8;
    lStack0000000000000090 = lVar5;
    plVar3 = (long *)FUN_029e4ab8(&stack0x000000a0,&stack0x00000080,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar3);
    in_stack_000000b0 = unaff_x20[0x80];
    in_stack_000000a8 = unaff_x20[0x7f];
    in_stack_000000a0 = unaff_x20[0x7e];
    (**(code **)(*unaff_x20 + 0x838))();
    (**(code **)(*unaff_x20 + 0x198))();
    lVar2 = *plVar3;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0283c85c;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0283c85c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


