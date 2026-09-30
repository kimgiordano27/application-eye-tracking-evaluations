/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState$$CallActionListeners
ENTRY_POINT: 03a394bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a39758) */

undefined8 UnityEngine_InputSystem_InputActionState__CallActionListeners(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000020;
  
  do {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03a3902c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03a3902c:
    uVar7 = (*(code *)*puVar3)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar7 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01f116d0();
      if (plVar4 == (long *)0x0) {
        return in_stack_00000020;
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_03a39594;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_03a3908c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03a3908c:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)StringLiteral_5859 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_5859
         )) {
                    /* try { // try from 03a395e8 to 03b395f3 has its CatchHandler @ 03a393b0 */
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar4);
      }
    }
    if (unaff_w21 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x03a390e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)((ulong)*(ushort *)(unaff_x22 + unaff_x25 * 2) * 4 + 0x3a38fe0))();
      return uVar5;
    }
  } while( true );
  while( true ) {
                    /* try { // try from 03a39588 to 03b3958b has its CatchHandler @ 03a395a0 */
    uVar7 = uVar7 - 1;
                    /* try { // try from 03a3958c to 03b3958f has its CatchHandler @ 03a39598 */
    piVar8 = piVar8 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a394b4 with catch @ 03a39590
                       try { // try from 03a39590 to 03b395bb has its CatchHandler @ 03a393b0 */
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a3945c with catch @ 03a395a4
                        */
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03a395b0;
    }
  }
LAB_03a39594:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a394b8 with catch @ 03a39594
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a394e4 with catch @ 03a39598
                       catch(type#1 @ 042b3198) { ... } // from try @ 03a3958c with catch @ 03a39598
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a39498 with catch @ 03a3959c
                        */
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a39588 with catch @ 03a395a0
                        */
LAB_03a395b0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
                    /* try { // try from 03a395bc to 03b395bf has its CatchHandler @ 03a395d0 */
                    /* catch() { ... } // from try @ 03a395bc with catch @ 03a395d0 */
                    /* try { // try from 03a395dc to 03b395e7 has its CatchHandler @ 03a395fc */
  return in_stack_00000020;
}


