/*
FUNCTION_NAME: UnityEngine.InputSystem.PlayerInput$$UninstallOnActionTriggeredHook
ENTRY_POINT: 020a8d60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2
*/


void UnityEngine_InputSystem_PlayerInput__UninstallOnActionTriggeredHook
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  uVar1 = (**(code **)(param_1 + 0x1d8))(param_2,*(undefined8 *)(param_1 + 0x1e0));
  if ((uVar1 & 1) == 0) {
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
                    /* try { // try from 020a8e1c to 021a8e1f has its CatchHandler @ 020a8ff0 */
    uVar3 = thunk_FUN_00d62348();
                    /* try { // try from 020a8e20 to 021a8ee7 has its CatchHandler @ 020a891c */
    FUN_00ac2be8();
    uVar4 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<TimelineClip>_get_Item__);
    FUN_017713a8(uVar3,uVar4,0);
    uVar4 = thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_<>c_<FailExpectedType>b__6_0__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar4);
  }
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    FUN_020a8f04();
    if (in_stack_00000008._4_4_ == 0) {
      return;
    }
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Gamepad>__ctor__);
    plVar2 = (long *)thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_020b48c8(plVar2,in_stack_00000008._4_4_,0);
    FUN_00ac2be8(plVar2);
    uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
    uVar4 = thunk_FUN_00d48444(UnityEngine_UIElements_UIR_VectorImageRenderInfo_TypeInfo);
    uVar3 = FUN_015e14fc(uVar4,uVar3,0);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector2>_CopyReplicate__);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
                    /* try { // try from 020a8ee8 to 021a8eef has its CatchHandler @ 020a8fe8 */
    FUN_016c1348(uVar4,uVar3,plVar2,0);
                    /* try { // try from 020a8ef0 to 021a8ef7 has its CatchHandler @ 020a8fe4 */
    uVar3 = thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_<>c_<FailExpectedType>b__6_0__)
    ;
                    /* try { // try from 020a8ef8 to 021a8efb has its CatchHandler @ 020a8fe0 */
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


