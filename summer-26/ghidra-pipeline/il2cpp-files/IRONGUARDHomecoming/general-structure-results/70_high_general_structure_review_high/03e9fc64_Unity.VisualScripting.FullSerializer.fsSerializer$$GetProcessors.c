/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$GetProcessors
ENTRY_POINT: 03e9fc64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__GetProcessors(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  int iVar7;
  undefined8 *unaff_x21;
  
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                    );
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                    );
  *(undefined1 *)(unaff_x19 + 0xb2b) = 1;
  plVar4 = (long *)thunk_FUN_01f117cc(*unaff_x21);
  FUN_03416d98(plVar4,0);
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 03e9fca4 to 03f9fcaf has its CatchHandler @ 03e9fdcc */
                    /* try { // try from 03e9fcb0 to 03f9fcdb has its CatchHandler @ 03e9fb8c */
    FUN_03418748(plVar4,*(undefined8 *)
                         Method_Unity_VisualScripting_StaticFunctionInvoker<Vector2,_Vector2,_Vector2>__ctor__
                 ,0);
    puVar3 = StringLiteral_3369;
    puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__;
    puVar1 = 
    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
    ;
    if ((*(long *)(unaff_x20 + 0x10) != 0) &&
       (lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x18), lVar6 != 0)) {
      if (0 < *(int *)(lVar6 + 0x18)) {
                    /* try { // try from 03e9fcdc to 03f9fd0f has its CatchHandler @ 03e9fdd0 */
        iVar7 = 0;
        do {
          if (iVar7 != 0) {
            FUN_03418748(plVar4,*(undefined8 *)puVar1,0);
          }
          uVar5 = FUN_030f28e4(lVar6,iVar7,*(undefined8 *)puVar3);
          FUN_034191b8(plVar4,uVar5,0);
          iVar7 = iVar7 + 1;
                    /* try { // try from 03e9fd28 to 03f9fd2f has its CatchHandler @ 03e9fdc8 */
        } while (iVar7 < *(int *)(lVar6 + 0x18));
      }
      FUN_03418748(plVar4,*(undefined8 *)puVar2,0);
                    /* try { // try from 03e9fd48 to 03f9fd67 has its CatchHandler @ 03e9fdc4 */
                    /* WARNING: Could not recover jumptable at 0x03e9fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


