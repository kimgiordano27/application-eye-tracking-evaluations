/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 027695e0
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w28;
  
  do {
                    /* try { // try from 027695e0 to 02869627 has its CatchHandler @ 027695e0
                       catch() { ... } // from try @ 027695e0 with catch @ 027695e0
                       catch() { ... } // from try @ 0276968c with catch @ 027695e0
                       catch() { ... } // from try @ 027696bc with catch @ 027695e0
                       catch() { ... } // from try @ 02769738 with catch @ 027695e0 */
    lVar3 = **(long **)(param_1 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02769644;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 02769628 to 0286968b has its CatchHandler @ 0276968c */
    puVar2 = (undefined8 *)FUN_0185dba8();
LAB_02769644:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 == 0) {
      return unaff_w25;
    }
    if (iVar1 < 0) {
      unaff_w20 = unaff_w25 + 1;
    }
    else {
      unaff_w28 = unaff_w25 - 1;
    }
    if (unaff_w28 < (int)unaff_w20) {
      return ~unaff_w20;
    }
    unaff_w25 = unaff_w20 + ((int)(unaff_w28 - unaff_w20) >> 1);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    param_1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_0185daa4();
    }
  } while( true );
}


