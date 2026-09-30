/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler.<>c$$<.ctor>b__0_64
ENTRY_POINT: 076d9988
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_64(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  
  if (param_1 != (long *)0x0) {
                    /* try { // try from 076d998c to 077d998f has its CatchHandler @ 076d99c8 */
                    /* try { // try from 076d9994 to 077d9997 has its CatchHandler @ 076d99c4 */
    FUN_07ade03c(param_1,*unaff_x22,0);
                    /* try { // try from 076d999c to 077d99a7 has its CatchHandler @ 076d99d8 */
    FUN_07ade400(param_1,1,0);
                    /* try { // try from 076d99ac to 077d99af has its CatchHandler @ 076d99c0 */
                    /* try { // try from 076d99b4 to 077d99b7 has its CatchHandler @ 076d99dc */
                    /* try { // try from 076d99b8 to 077d9a07 has its CatchHandler @ 076d938c */
    lVar2 = *(long *)(*(long *)(unaff_x24 + 0xa00) + 0xb8);
                    /* catch() { ... } // from try @ 076d9878 with catch @ 076d99bc */
                    /* catch() { ... } // from try @ 076d99ac with catch @ 076d99c0 */
                    /* catch() { ... } // from try @ 076d9994 with catch @ 076d99c4 */
                    /* catch() { ... } // from try @ 076d998c with catch @ 076d99c8 */
                    /* catch() { ... } // from try @ 076d997c with catch @ 076d99cc */
    (**(code **)(*param_1 + 0x2a8))
              (*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
               *(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),param_1,
               *(undefined8 *)(*param_1 + 0x2b0));
                    /* catch() { ... } // from try @ 076d98f8 with catch @ 076d99d0 */
                    /* catch() { ... } // from try @ 076d987c with catch @ 076d99d4 */
                    /* catch() { ... } // from try @ 076d999c with catch @ 076d99d8 */
                    /* catch() { ... } // from try @ 076d9984 with catch @ 076d99dc
                       catch() { ... } // from try @ 076d99b4 with catch @ 076d99dc */
                    /* catch() { ... } // from try @ 076d9974 with catch @ 076d99e0 */
                    /* catch() { ... } // from try @ 076d9844 with catch @ 076d99e4 */
    if ((unaff_x23 != 0) && (lVar2 = FUN_03fa1bc8(), lVar2 != 0)) {
                    /* catch() { ... } // from try @ 076d996c with catch @ 076d99e8 */
                    /* catch() { ... } // from try @ 076d9964 with catch @ 076d99ec */
      in_stack_00000008 = NEON_fmov(0xc1a00000,4);
      if (DAT_086ef808 == (code *)0x0) {
        DAT_086ef808 = (code *)FUN_033d1b68(
                                           "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                           );
      }
      (*DAT_086ef808)(lVar2,&stack0x00000008);
      if (DAT_086d8912 == '\0') {
        FUN_0335b6c8(&DAT_083d2c48,1);
        DataMemoryBarrier(2,3);
        DAT_086d8912 = '\x01';
      }
      FUN_07a17c9c(**(undefined4 **)(DAT_083d2c48 + 0xb8),(*(undefined4 **)(DAT_083d2c48 + 0xb8))[1]
                   ,lVar2,0);
      if (DAT_086d8b28 == '\0') {
        FUN_0335b6c8(&DAT_083d2c48,1);
        DataMemoryBarrier(2,3);
        DAT_086d8b28 = '\x01';
      }
      FUN_07a17db8(*(undefined4 *)(*(long *)(DAT_083d2c48 + 0xb8) + 8),
                   *(undefined4 *)(*(long *)(DAT_083d2c48 + 0xb8) + 0xc),lVar2,0);
      lVar2 = FUN_03fa1bc8();
      if (lVar2 != 0) {
        in_stack_00000008 = NEON_fmov(0x41a00000,4);
        if (DAT_086ef808 == (code *)0x0) {
          DAT_086ef808 = (code *)FUN_033d1b68(
                                             "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                             );
        }
        (*DAT_086ef808)(lVar2,&stack0x00000008);
        lVar1 = FUN_03fa1ab4();
        if (lVar1 != 0) {
          UniGLTF_Extensions_VRMC_vrm_animation_GltfDeserializer____humanoid__humanBones_Deserialize_LeftThumbProximal
                    (lVar1,lVar2,0);
          FUN_07c8c96c(lVar1,param_1,0);
          FUN_076d9608(lVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


