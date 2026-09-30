/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Allocate
ENTRY_POINT: 02766170
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Allocate(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar9;
  ulong unaff_x27;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  while (uVar9 = unaff_x26, uVar4 = (uint)param_1, (uint)uVar9 < uVar4) {
    lVar7 = unaff_x22 + uVar9 * unaff_x25;
    uVar8 = *(undefined8 *)(lVar7 + 0x30);
    uVar12 = *(undefined8 *)(lVar7 + 0x28);
    uVar10 = *(undefined8 *)(lVar7 + 0x20);
    if (unaff_x23 <= (long)unaff_x27) {
      bVar2 = uVar4 <= (uint)unaff_x27;
      while( true ) {
        if (bVar2) goto LAB_0276631c;
        uVar4 = (uint)unaff_x27;
        lVar7 = unaff_x22 + (long)(int)uVar4 * (long)(int)unaff_x25;
        uVar5 = *(undefined8 *)(lVar7 + 0x30);
        uVar13 = *(undefined8 *)(lVar7 + 0x28);
        uVar11 = *(undefined8 *)(lVar7 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
                    /* try { // try from 027661c8 to 028661d7 has its CatchHandler @ 027661d8 */
                    /* catch() { ... } // from try @ 0276614c with catch @ 027661d8
                       catch() { ... } // from try @ 027661c8 with catch @ 027661d8 */
                    /* try { // try from 027661dc to 028661df has its CatchHandler @ 027661e8 */
                    /* try { // try from 027661e0 to 028661eb has its CatchHandler @ 02766094 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027661dc with catch @ 027661e8
                        */
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        in_stack_000000e0 = uVar11;
        in_stack_000000e8 = uVar13;
        in_stack_000000f0 = uVar5;
        in_stack_00000100 = uVar10;
        in_stack_00000108 = uVar12;
        in_stack_00000110 = uVar8;
        iVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar3) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar4) goto LAB_0276631c;
        uVar11 = *(undefined8 *)(lVar7 + 0x28);
        uVar5 = *(undefined8 *)(lVar7 + 0x20);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar4 + 1) goto LAB_0276631c;
        lVar6 = unaff_x22 + (int)(uVar4 + 1) * unaff_x25;
        *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar7 + 0x30);
        *(undefined8 *)(lVar6 + 0x28) = uVar11;
        *(undefined8 *)(lVar6 + 0x20) = uVar5;
        thunk_FUN_0188fd20(lVar6 + 0x20,0);
        uVar4 = uVar4 - 1;
        unaff_x27 = (ulong)uVar4;
        if ((int)uVar4 < unaff_w21) break;
        bVar2 = *(uint *)(unaff_x22 + 0x18) <= uVar4;
      }
      uVar4 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar1 = (int)unaff_x27 + 1;
    if (uVar4 <= uVar1) break;
    lVar7 = unaff_x22 + (int)uVar1 * unaff_x25;
    *(undefined8 *)(lVar7 + 0x30) = uVar8;
    *(undefined8 *)(lVar7 + 0x28) = uVar12;
    *(undefined8 *)(lVar7 + 0x20) = uVar10;
    thunk_FUN_0188fd20(lVar7 + 0x20,0);
    if (uVar9 == unaff_x24) {
      return;
    }
    param_1 = *(undefined8 *)(unaff_x22 + 0x18);
    unaff_x27 = uVar9;
    unaff_x26 = uVar9 + 1;
  }
LAB_0276631c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


