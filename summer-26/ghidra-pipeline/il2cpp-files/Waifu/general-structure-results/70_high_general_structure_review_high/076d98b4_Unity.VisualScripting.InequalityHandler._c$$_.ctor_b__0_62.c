/*
FUNCTION_NAME: Unity.VisualScripting.InequalityHandler.<>c$$<.ctor>b__0_62
ENTRY_POINT: 076d98b4
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Unity_VisualScripting_InequalityHandler_<>c__<_ctor>b__0_62(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  undefined1 unaff_w20;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x44c) = unaff_w20;
  if (*(int *)(DAT_083d1a00 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar1 = FUN_076d9288(*(undefined4 *)(*(long *)(DAT_083d1a00 + 0xb8) + 0x10),
                       *(undefined4 *)(*(long *)(DAT_083d1a00 + 0xb8) + 0x14),DAT_08445ab0);
                    /* try { // try from 076d98f8 to 077d9957 has its CatchHandler @ 076d99d0 */
  lVar2 = FUN_076d9338(DAT_084462f0,lVar1);
  lVar3 = FUN_076d9338(DAT_0843c4c8,lVar2);
  if ((lVar1 != 0) && (plVar4 = (long *)FUN_03fa1ab4(lVar1,DAT_0840c5f8), plVar4 != (long *)0x0)) {
    FUN_07ade03c(plVar4,unaff_x22[1],0);
    FUN_07ade400(plVar4,1,0);
    lVar5 = *(long *)(DAT_083d1a00 + 0xb8);
    (**(code **)(*plVar4 + 0x2a8))
              (*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
               *(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),plVar4,
               *(undefined8 *)(*plVar4 + 0x2b0));
    if ((lVar3 != 0) && (plVar4 = (long *)FUN_03fa1ab4(lVar3,DAT_0840c5f8), plVar4 != (long *)0x0))
    {
      FUN_07ade03c(plVar4,*unaff_x22,0);
      FUN_07ade400(plVar4,1,0);
      lVar5 = *(long *)(DAT_083d1a00 + 0xb8);
      (**(code **)(*plVar4 + 0x2a8))
                (*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
                 *(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),plVar4,
                 *(undefined8 *)(*plVar4 + 0x2b0));
      if ((lVar2 != 0) && (lVar2 = FUN_03fa1bc8(lVar2,DAT_0840ccb8), lVar2 != 0)) {
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
        FUN_07a17c9c(**(undefined4 **)(DAT_083d2c48 + 0xb8),
                     (*(undefined4 **)(DAT_083d2c48 + 0xb8))[1],lVar2,0);
        if (DAT_086d8b28 == '\0') {
          FUN_0335b6c8(&DAT_083d2c48,1);
          DataMemoryBarrier(2,3);
          DAT_086d8b28 = '\x01';
        }
        FUN_07a17db8(*(undefined4 *)(*(long *)(DAT_083d2c48 + 0xb8) + 8),
                     *(undefined4 *)(*(long *)(DAT_083d2c48 + 0xb8) + 0xc),lVar2,0);
        lVar2 = FUN_03fa1bc8(lVar3,DAT_0840ccb8);
        if (lVar2 != 0) {
          in_stack_00000008 = NEON_fmov(0x41a00000,4);
          if (DAT_086ef808 == (code *)0x0) {
            DAT_086ef808 = (code *)FUN_033d1b68(
                                               "UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                               );
          }
          (*DAT_086ef808)(lVar2,&stack0x00000008);
          lVar3 = FUN_03fa1ab4(lVar1,DAT_0840c7a8);
          if (lVar3 != 0) {
            UniGLTF_Extensions_VRMC_vrm_animation_GltfDeserializer____humanoid__humanBones_Deserialize_LeftThumbProximal
                      (lVar3,lVar2,0);
            FUN_07c8c96c(lVar3,plVar4,0);
            FUN_076d9608(lVar3);
            return lVar1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


