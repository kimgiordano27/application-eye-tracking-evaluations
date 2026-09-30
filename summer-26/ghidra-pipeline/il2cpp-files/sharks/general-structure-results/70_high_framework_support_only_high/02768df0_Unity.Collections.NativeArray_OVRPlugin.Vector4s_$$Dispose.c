/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 02768df0
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose
               (long param_1,undefined1 param_2 [16])

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong unaff_x28;
  ulong unaff_x29;
  ulong uVar8;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  uVar6 = param_2._8_8_;
  uVar5 = param_2._0_8_;
  while( true ) {
    lVar1 = unaff_x22 + param_1 * 0x10;
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    *puVar3 = uVar5;
    thunk_FUN_0188fd20(puVar3,0);
    uVar7 = (int)unaff_x28 - 1;
    unaff_x28 = (ulong)uVar7;
    if ((int)uVar7 < unaff_w21) goto LAB_02768e20;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar7) break;
    while( true ) {
      unaff_x28 = (ulong)(int)uVar7;
      lVar1 = unaff_x22 + unaff_x28 * 0x10;
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      uVar6 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar5,uVar6,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) break;
LAB_02768e20:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      do {
        uVar8 = unaff_x29;
                    /* try { // try from 02768e28 to 02868e3b has its CatchHandler @ 02768e48 */
        uVar7 = (int)unaff_x28 + 1;
        if ((uint)uVar4 <= uVar7) goto LAB_02768e78;
        lVar1 = unaff_x22 + (long)(int)uVar7 * 0x10;
                    /* try { // try from 02768e3c to 02868e5f has its CatchHandler @ 02768de8 */
        puVar3 = (undefined8 *)(lVar1 + 0x20);
        *puVar3 = unaff_x23;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x24;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02768e28 with catch @ 02768e48
                        */
        thunk_FUN_0188fd20(puVar3,0);
        if (uVar8 == in_stack_00000000) {
                    /* try { // try from 02768e60 to 02868e77 has its CatchHandler @ 02768eb0 */
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x29 = uVar8 + 1;
        if ((uint)uVar4 <= (uint)unaff_x29) goto LAB_02768e78;
        lVar1 = unaff_x22 + unaff_x29 * 0x10;
        unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
        unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
        unaff_x28 = uVar8;
      } while ((long)uVar8 < in_stack_00000008);
      uVar7 = (uint)uVar8;
      if ((uint)uVar4 <= uVar7) goto LAB_02768e78;
    }
    if ((*(uint *)(unaff_x22 + 0x18) <= uVar7) || (*(uint *)(unaff_x22 + 0x18) <= uVar7 + 1)) break;
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    param_1 = (long)(int)(uVar7 + 1);
  }
LAB_02768e78:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02768e78 to 02868e9f has its CatchHandler @ 02768de8 */
  FUN_017fc5b0();
}


