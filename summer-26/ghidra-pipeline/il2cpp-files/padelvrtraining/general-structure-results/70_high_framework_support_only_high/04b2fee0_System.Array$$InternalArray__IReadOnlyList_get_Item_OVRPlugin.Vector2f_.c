/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector2f>
ENTRY_POINT: 04b2fee0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector2f>
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
                    /* try { // try from 04b2fef0 to 04c2ff07 has its CatchHandler @ 04b2ff48 */
  if ((*(long *)(param_3 + 0x38) == 0) &&
     (FUN_03d2d2b0(PTR_DAT_091a50e8), *(long *)(param_3 + 0x38) == 0)) {
                    /* try { // try from 04b2ff08 to 04c2ff37 has its CatchHandler @ 04b2fd48 */
    FUN_03d8f2c8(param_3);
  }
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  iVar3 = thunk_FUN_03d9e884(param_1,0);
  if (iVar3 < 2) {
    uVar4 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(param_1,0);
    puVar1 = PTR_DAT_091a50e8;
                    /* try { // try from 04b2ff38 to 04c2ff47 has its CatchHandler @ 04b2ff48 */
    if ((int)uVar4 < 1) {
      bVar2 = false;
    }
    else {
                    /* catch() { ... } // from try @ 04b2fef0 with catch @ 04b2ff48
                       catch() { ... } // from try @ 04b2ff38 with catch @ 04b2ff48 */
      uVar8 = 0;
                    /* try { // try from 04b2ff4c to 04c2ff4f has its CatchHandler @ 04b2ff58 */
                    /* try { // try from 04b2ff50 to 04c2ff5b has its CatchHandler @ 04b2fd48 */
      bVar2 = true;
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04b2ff4c with catch @ 04b2ff58
                        */
                    /* try { // try from 04b2ff5c to 04c2ff93 has its CatchHandler @ 04b2ff5c
                       catch() { ... } // from try @ 04b2ff5c with catch @ 04b2ff5c
                       catch() { ... } // from try @ 04b300b8 with catch @ 04b2ff5c
                       catch() { ... } // from try @ 04b3011c with catch @ 04b2ff5c
                       catch() { ... } // from try @ 04b30164 with catch @ 04b2ff5c */
        memcpy(&stack0x00000020,(void *)((long)param_1 + uVar8 * *(uint *)(*param_1 + 0x104) + 0x20)
               ,(ulong)*(uint *)(*param_1 + 0x104));
        uVar5 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03db619c(*(long *)puVar1);
        }
        uVar6 = FUN_07f171d4(param_2,uVar5,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        if ((uVar6 & 1) != 0) {
          return bVar2;
        }
        uVar8 = uVar8 + 1;
        bVar2 = uVar8 < uVar4;
      } while (uVar4 != uVar8);
    }
    return bVar2;
  }
                    /* try { // try from 04b2fffc to 04c3000b has its CatchHandler @ 04b300e4 */
  thunk_FUN_03d1e194(PTR_DAT_091f9158);
  uVar5 = thunk_FUN_03d2ef40();
  uVar7 = thunk_FUN_03d1e194(PTR_DAT_091f9160);
  FUN_071895f4(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar5,param_3);
}


