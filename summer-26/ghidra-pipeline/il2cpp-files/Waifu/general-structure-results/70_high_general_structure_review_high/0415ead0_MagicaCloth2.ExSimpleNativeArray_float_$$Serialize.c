/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<float>$$Serialize
ENTRY_POINT: 0415ead0
PROGRAM: Waifu-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0415ebc8) */
/* WARNING: Removing unreachable block (ram,0x0415ec5c) */
/* WARNING: Removing unreachable block (ram,0x0415ebdc) */

undefined1  [16] MagicaCloth2_ExSimpleNativeArray<float>__Serialize(void)

{
  ulong uVar1;
  undefined1 *unaff_x19;
  long unaff_x20;
  long lVar2;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844ac78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0842ec78,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d42a0,1);
  DataMemoryBarrier(2,3);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    FUN_0338f674();
  }
  if (unaff_x24 != 0) {
    uVar1 = FUN_05db133c();
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 0;
      uVar3 = FUN_0666ec64(DAT_0844ac78);
      if (*(int *)(DAT_083d42a0 + 0xe0) == 0) {
        FUN_033b9870(DAT_083d42a0);
      }
      auVar4 = FUN_0784f81c(uVar3,0);
      return auVar4;
    }
    lVar2 = *(long *)(unaff_x23 + 0x10);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar3 = FUN_0683eca4(uVar3,0);
    if (lVar2 != 0) {
      FUN_0786b56c(lVar2,0,uVar3);
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        FUN_0338f618(lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


