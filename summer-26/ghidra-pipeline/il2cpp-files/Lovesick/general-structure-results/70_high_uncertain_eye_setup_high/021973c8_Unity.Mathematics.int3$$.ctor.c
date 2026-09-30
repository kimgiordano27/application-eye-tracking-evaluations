/*
FUNCTION_NAME: Unity.Mathematics.int3$$.ctor
ENTRY_POINT: 021973c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Unity_Mathematics_int3___ctor(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 021973cc to 022973cf has its CatchHandler @ 021973f4 */
                    /* try { // try from 021973d0 to 022973e3 has its CatchHandler @ 02197204 */
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_10__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<MeshCollider>__);
                    /* try { // try from 021973e4 to 022973f3 has its CatchHandler @ 02197400 */
    *(undefined1 *)(unaff_x21 + 0x4d6) = 1;
  }
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
                    /* catch() { ... } // from try @ 021973cc with catch @ 021973f4 */
  if (*(long *)(unaff_x22 + 0x480) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* catch() { ... } // from try @ 021973b0 with catch @ 02197400
                       catch() { ... } // from try @ 021973e4 with catch @ 02197400 */
  _in_stack_00000018 = FUN_021a10fc(*(long *)(unaff_x22 + 0x480),0);
  puVar1 = Method_UnityEngine_GameObject_GetComponentInChildren<MeshCollider>__;
  if (in_stack_00000018._12_4_ == 0) {
LAB_02197498:
    uVar3 = 1;
  }
  else {
    if (0 < in_stack_00000018._12_4_) {
      iVar4 = 0;
      do {
        FUN_0138116c(&stack0x00000018,iVar4,&stack0x00000028,*(undefined8 *)puVar1);
        FUN_021f605c(&stack0x00000008,in_stack_00000028,0);
        uVar2 = FUN_021f4ffc();
        if (((uVar2 & 1) != 0) ||
           (uVar2 = FUN_021ef194(unaff_x22 + 0x18,in_stack_00000008,in_stack_00000010),
           (uVar2 & 1) != 0)) goto LAB_02197498;
        iVar4 = iVar4 + 1;
      } while (iVar4 < in_stack_00000020._4_4_);
    }
    uVar3 = 0;
  }
  return uVar3;
}


