/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0276628c
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


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose(void)

{
  char in_NG;
  char in_OV;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar6;
  ulong unaff_x27;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  while( true ) {
    if (in_NG != in_OV) goto LAB_027662a8;
    bVar1 = *(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x27;
    while( true ) {
      if (bVar1) goto LAB_0276631c;
      uVar6 = (uint)unaff_x27;
      lVar8 = unaff_x22 + (long)(int)uVar6 * (long)(int)unaff_x25;
      uVar3 = *(undefined8 *)(lVar8 + 0x30);
      uVar10 = *(undefined8 *)(lVar8 + 0x28);
      uVar9 = *(undefined8 *)(lVar8 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000100 = in_stack_000000c0;
      in_stack_000000e0 = uVar9;
      in_stack_000000e8 = uVar10;
      in_stack_000000f0 = uVar3;
      in_stack_00000110 = in_stack_000000d0;
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) break;
LAB_027662a8:
      uVar5 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar7 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
                    /* try { // try from 027662b0 to 028662f3 has its CatchHandler @ 027662b0
                       catch() { ... } // from try @ 027662b0 with catch @ 027662b0
                       catch() { ... } // from try @ 027663a4 with catch @ 027662b0
                       catch() { ... } // from try @ 027663d4 with catch @ 027662b0
                       catch() { ... } // from try @ 02766448 with catch @ 027662b0 */
        uVar6 = (int)uVar7 + 1;
        if ((uint)uVar5 <= uVar6) goto LAB_0276631c;
        lVar8 = unaff_x22 + (int)uVar6 * unaff_x25;
        *(undefined8 *)(lVar8 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(lVar8 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar8 + 0x20) = in_stack_000000c0;
        thunk_FUN_0188fd20(lVar8 + 0x20,0);
                    /* try { // try from 027662f4 to 028663a3 has its CatchHandler @ 027663a4 */
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar5 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar5 <= (uint)unaff_x26) goto LAB_0276631c;
        lVar8 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_000000d0 = *(undefined8 *)(lVar8 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar8 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar8 + 0x20);
        uVar7 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar5 <= (uint)unaff_x27;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar6) break;
    uVar9 = *(undefined8 *)(lVar8 + 0x28);
    uVar3 = *(undefined8 *)(lVar8 + 0x20);
    if (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1) break;
    lVar4 = unaff_x22 + (int)(uVar6 + 1) * unaff_x25;
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
    *(undefined8 *)(lVar4 + 0x28) = uVar9;
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    thunk_FUN_0188fd20(lVar4 + 0x20,0);
    uVar6 = uVar6 - 1;
    unaff_x27 = (ulong)uVar6;
    in_OV = SBORROW4(uVar6,unaff_w21);
    in_NG = (int)(uVar6 - unaff_w21) < 0;
  }
LAB_0276631c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


