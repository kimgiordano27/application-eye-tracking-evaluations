/*
FUNCTION_NAME: FUN_034d2b70
ENTRY_POINT: 034d2b70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034d2b70(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 local_50 [16];
  
  if ((DAT_04832d3c & 1) == 0) {
                    /* try { // try from 034d2ba8 to 035d2bd3 has its CatchHandler @ 034d3060 */
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_GetObjectData__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf<IntPtr>__);
    DAT_04832d3c = 1;
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (param_2 == 0) {
                    /* try { // try from 034d2ddc to 035d2def has its CatchHandler @ 034d2fcc */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
                    /* try { // try from 034d2e00 to 035d2e07 has its CatchHandler @ 034d2fd8 */
    FUN_034efd20(uVar3,uVar5,0);
                    /* try { // try from 034d2e0c to 035d2e1b has its CatchHandler @ 034d303c */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf<UnsafeList>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar5);
  }
  auVar7 = ZEXT816(0);
  if (lVar1 == 0) goto LAB_034d2dd4;
  *(long *)(lVar1 + 0x98) = param_2;
  thunk_FUN_01f51358((long *)(lVar1 + 0x98),param_2);
  if (param_3 != 0) {
    param_2 = param_3;
  }
  if ((param_5 & 1) == 0) {
                    /* try { // try from 034d2c40 to 035d2c53 has its CatchHandler @ 034d3054 */
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 034d2c58 to 035d2c63 has its CatchHandler @ 034d3034 */
    param_2 = FUN_034d1098(param_2);
  }
  if (param_4 == 0) {
    if (DAT_048317e1 == '\0') {
                    /* try { // try from 034d2c8c to 035d2c9b has its CatchHandler @ 034d2fd0 */
      thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
      DAT_048317e1 = '\x01';
      if (param_2 == 0) goto LAB_034d2ca4;
LAB_034d2c74:
      uVar3 = FUN_0340ce04(param_2,0);
      uVar6 = *(undefined4 *)(param_2 + 0x10);
    }
    else {
      if (param_2 != 0) goto LAB_034d2c74;
LAB_034d2ca4:
      uVar3 = 0;
      uVar6 = 0;
    }
                    /* try { // try from 034d2cac to 035d2cb3 has its CatchHandler @ 034d2fd4 */
    puVar2 = Method_System_Threading_ExecutionContext_GetObjectData__;
    if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_GetObjectData__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 034d2cc4 to 035d2ccb has its CatchHandler @ 034d301c */
    uVar4 = FUN_034c9e84(uVar3,uVar6,0);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 034d2cf8 to 035d2d0b has its CatchHandler @ 034d3028 */
      if (DAT_04832728 == '\0') {
        thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
                    /* try { // try from 034d2d54 to 035d2d67 has its CatchHandler @ 034d3024 */
        DAT_04832728 = '\x01';
        if (param_2 == 0) goto LAB_034d2d5c;
LAB_034d2d08:
        uVar3 = FUN_0340ce04(param_2,0);
                    /* try { // try from 034d2d14 to 035d2d1f has its CatchHandler @ 034d3000 */
        uVar6 = *(undefined4 *)(param_2 + 0x10);
      }
      else {
        if (param_2 != 0) goto LAB_034d2d08;
LAB_034d2d5c:
        uVar3 = 0;
        uVar6 = 0;
      }
                    /* try { // try from 034d2d6c to 035d2d77 has its CatchHandler @ 034d2ff0 */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      auVar7 = FUN_034c9f00(uVar3,uVar6,0);
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                  + 0xe0) == 0) {
                    /* try { // try from 034d2da0 to 035d2daf has its CatchHandler @ 034d2fb4 */
        thunk_FUN_01ee6d7c();
      }
      local_50 = FUN_034d2e20(auVar7._0_8_,auVar7._8_8_);
    }
    else {
                    /* try { // try from 034d2cd8 to 035d2cdf has its CatchHandler @ 034d2ffc */
      if (DAT_048317e1 == '\0') {
                    /* try { // try from 034d2d28 to 035d2d33 has its CatchHandler @ 034d2ff4 */
        thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
        DAT_048317e1 = '\x01';
      }
      if (param_2 == 0) {
                    /* try { // try from 034d2d38 to 035d2d4b has its CatchHandler @ 034d3004 */
        local_50 = ZEXT816(0);
      }
      else {
                    /* try { // try from 034d2ce4 to 035d2ce7 has its CatchHandler @ 034d2ff8 */
        uVar3 = FUN_0340ce04(param_2,0);
        local_50._8_4_ = *(undefined4 *)(param_2 + 0x10);
        local_50._0_8_ = uVar3;
        local_50._12_4_ = 0;
      }
    }
    param_4 = FUN_026d03c8(local_50,*(undefined8 *)
                                     Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_AlignOf<IntPtr>__
                          );
  }
  auVar7 = local_50;
  if (param_1 != 0) {
    *(long *)(param_1 + 0xa0) = param_4;
    thunk_FUN_01f51358((long *)(param_1 + 0xa0),param_4);
                    /* try { // try from 034d2c14 to 035d2c1b has its CatchHandler @ 034d3050 */
    *(long *)(param_1 + 0x90) = param_2;
    thunk_FUN_01f51358((long *)(param_1 + 0x90),param_2);
                    /* try { // try from 034d2c28 to 035d2c2f has its CatchHandler @ 034d3020 */
                    /* try { // try from 034d2c34 to 035d2c37 has its CatchHandler @ 034d3048 */
    return;
  }
LAB_034d2dd4:
  local_50 = auVar7;
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


