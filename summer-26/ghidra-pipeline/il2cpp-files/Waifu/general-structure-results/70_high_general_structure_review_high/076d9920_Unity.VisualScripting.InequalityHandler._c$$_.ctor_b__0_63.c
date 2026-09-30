/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler.<>c$$<.ctor>b__0_63
ENTRY_POINT: 076d9920
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_63(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)FUN_03fa1ab4();
  if (plVar1 != (long *)0x0) {
    FUN_07ade03c(plVar1,unaff_x22[1],0);
    FUN_07ade400(plVar1,1,0);
                    /* try { // try from 076d995c to 077d995f has its CatchHandler @ 076d99f4 */
    lVar3 = *(long *)(*(long *)(unaff_x24 + 0xa00) + 0xb8);
                    /* try { // try from 076d9964 to 077d9967 has its CatchHandler @ 076d99ec */
                    /* try { // try from 076d996c to 077d996f has its CatchHandler @ 076d99e8 */
                    /* try { // try from 076d9974 to 077d9977 has its CatchHandler @ 076d99e0 */
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
               *(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),plVar1,
               *(undefined8 *)(*plVar1 + 0x2b0));
                    /* try { // try from 076d997c to 077d997f has its CatchHandler @ 076d99cc */
                    /* try { // try from 076d9984 to 077d9987 has its CatchHandler @ 076d99dc */
    if ((param_1 != 0) &&
       (plVar1 = (long *)FUN_03fa1ab4(param_1,*(undefined8 *)(unaff_x25 + 0x5f8)),
       plVar1 != (long *)0x0)) {
      FUN_07ade03c(plVar1,*unaff_x22,0);
      FUN_07ade400(plVar1,1,0);
      lVar3 = *(long *)(*(long *)(unaff_x24 + 0xa00) + 0xb8);
      (**(code **)(*plVar1 + 0x2a8))
                (*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                 *(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),plVar1,
                 *(undefined8 *)(*plVar1 + 0x2b0));
      if ((unaff_x23 != 0) && (lVar3 = FUN_03fa1bc8(), lVar3 != 0)) {
        in_stack_00000008 = NEON_fmov(0xc1a00000,4);
        if (DAT_086ef808 == (code *)0x0) {
          DAT_086ef808 = (code *)FUN_033d1b68(
                                             "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                             );
        }
        (*DAT_086ef808)(lVar3,&stack0x00000008);
        if (DAT_086d8912 == '\0') {
          FUN_0335b6c8(&DAT_083d2c48,1);
          DataMemoryBarrier(2,3);
          DAT_086d8912 = '\x01';
        }
        FUN_07a17c9c(**(undefined4 **)(DAT_083d2c48 + 0xb8),
                     (*(undefined4 **)(DAT_083d2c48 + 0xb8))[1],lVar3,0);
        if (DAT_086d8b28 == '\0') {
          FUN_0335b6c8(&DAT_083d2c48,1);
          DataMemoryBarrier(2,3);
          DAT_086d8b28 = '\x01';
        }
        FUN_07a17db8(*(undefined4 *)(*(long *)(DAT_083d2c48 + 0xb8) + 8),
                     *(undefined4 *)(*(long *)(DAT_083d2c48 + 0xb8) + 0xc),lVar3,0);
        lVar3 = FUN_03fa1bc8(param_1,DAT_0840ccb8);
        if (lVar3 != 0) {
          in_stack_00000008 = NEON_fmov(0x41a00000,4);
          if (DAT_086ef808 == (code *)0x0) {
            DAT_086ef808 = (code *)FUN_033d1b68(
                                               "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                               );
          }
          (*DAT_086ef808)(lVar3,&stack0x00000008);
          lVar2 = FUN_03fa1ab4();
          if (lVar2 != 0) {
            UniGLTF_Extensions_VRMC_vrm_animation_GltfDeserializer____humanoid__humanBones_Deserialize_LeftThumbProximal
                      (lVar2,lVar3,0);
            FUN_07c8c96c(lVar2,plVar1,0);
            FUN_076d9608(lVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


