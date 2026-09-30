/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 02766050
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(void)

{
  uint uVar1;
  int iVar2;
  uint in_w8;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  uint uVar6;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  
  do {
    uVar6 = unaff_w28;
    if (in_w8 <= unaff_w29) {
LAB_02766118:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
    if (in_w8 <= unaff_w25 + unaff_w24) goto LAB_02766118;
    lVar3 = unaff_x19 + (int)(unaff_w25 + unaff_w24) * unaff_x26;
                    /* try { // try from 02766094 to 028660db has its CatchHandler @ 02766094
                       catch() { ... } // from try @ 02766094 with catch @ 02766094
                       catch() { ... } // from try @ 02766134 with catch @ 02766094
                       catch() { ... } // from try @ 02766164 with catch @ 02766094
                       catch() { ... } // from try @ 027661e0 with catch @ 02766094 */
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(lVar3 + 0x28) = uVar7;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    thunk_FUN_0188fd20(lVar3 + 0x20,0);
    if (unaff_w27 < (int)uVar6) {
LAB_027660b4:
      if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
                    /* try { // try from 027660dc to 02866133 has its CatchHandler @ 02766134 */
        lVar3 = unaff_x19 + (long)(int)unaff_w29 * 0x18;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000120;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000118;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000110;
        thunk_FUN_0188fd20(lVar3 + 0x20,0);
        return;
      }
      goto LAB_02766118;
    }
    unaff_w28 = uVar6 * 2;
    iVar2 = (int)unaff_x26;
    if ((int)unaff_w28 < unaff_w23) {
      uVar1 = unaff_w28 + in_stack_00000008._4_4_;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) goto LAB_02766118;
      lVar3 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)iVar2;
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      uVar9 = *(undefined8 *)(lVar3 + 0x28);
      uVar7 = *(undefined8 *)(lVar3 + 0x20);
      if (*(uint *)(unaff_x19 + 0x18) <= uVar1) goto LAB_02766118;
      lVar3 = unaff_x19 + (long)(int)uVar1 * (long)iVar2;
      uVar4 = *(undefined8 *)(lVar3 + 0x30);
      uVar10 = *(undefined8 *)(lVar3 + 0x28);
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      if (unaff_x21 == 0) goto LAB_0276611c;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      in_stack_00000130 = uVar8;
      in_stack_00000138 = uVar10;
      in_stack_00000140 = uVar4;
      in_stack_00000150 = uVar7;
      in_stack_00000158 = uVar9;
      in_stack_00000160 = uVar5;
      uVar1 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                         *(undefined8 *)(unaff_x21 + 0x28));
      unaff_w28 = unaff_w28 | uVar1 >> 0x1f;
    }
    unaff_w29 = unaff_w25 + unaff_w28;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_02766118;
    unaff_x22 = unaff_x19 + (long)(int)unaff_w29 * (long)iVar2;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    if (unaff_x21 == 0) {
LAB_0276611c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_00000158 = in_stack_00000118;
    in_stack_00000150 = in_stack_00000110;
    in_stack_00000160 = in_stack_00000120;
    in_stack_00000130 = uVar7;
    in_stack_00000138 = uVar9;
    in_stack_00000140 = uVar5;
    iVar2 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000150,&stack0x00000130,
                       *(undefined8 *)(unaff_x21 + 0x28));
    if (-1 < iVar2) {
      unaff_w29 = unaff_w25 + uVar6;
      goto LAB_027660b4;
    }
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    unaff_w24 = uVar6;
  } while( true );
}


