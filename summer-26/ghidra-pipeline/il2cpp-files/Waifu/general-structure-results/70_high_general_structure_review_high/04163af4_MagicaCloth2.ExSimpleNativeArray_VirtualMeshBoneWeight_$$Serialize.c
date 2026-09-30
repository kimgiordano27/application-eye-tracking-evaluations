/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<VirtualMeshBoneWeight>$$Serialize
ENTRY_POINT: 04163af4
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 MagicaCloth2_ExSimpleNativeArray<VirtualMeshBoneWeight>__Serialize(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d4368,1);
  DataMemoryBarrier(2,3);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_0338f674();
  }
  in_stack_00000008 = 0;
  if (*(int *)(DAT_083d4368 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar3 = **(long **)(DAT_083d4368 + 0xb8);
  uVar4 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_0683eca4(uVar4,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  uVar1 = FUN_05e4830c(lVar3,uVar4,&stack0x00000008,DAT_083e4860);
  if ((uVar1 & 1) == 0) {
    puVar2 = &DAT_08445548;
  }
  else if (in_stack_00000008._4_4_ < 4) {
    if (in_stack_00000008._4_4_ == 2) {
      puVar2 = &DAT_0844bc70;
    }
    else {
      if (in_stack_00000008._4_4_ != 3) {
LAB_04163c04:
        FUN_033d1ba8(&DAT_083cb470);
        uVar4 = thunk_FUN_03398a84();
        thunk_FUN_06869e3c(uVar4,0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar4);
      }
      puVar2 = &DAT_0844bc78;
    }
  }
  else if (in_stack_00000008._4_4_ == 4) {
    puVar2 = &DAT_0844bc80;
  }
  else {
    if (in_stack_00000008._4_4_ != 0x10) goto LAB_04163c04;
    puVar2 = &DAT_0843fdd0;
  }
  return *puVar2;
}


