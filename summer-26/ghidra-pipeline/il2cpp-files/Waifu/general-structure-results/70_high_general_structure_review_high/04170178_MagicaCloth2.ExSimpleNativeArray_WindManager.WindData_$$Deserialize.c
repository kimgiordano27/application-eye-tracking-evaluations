/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<WindManager.WindData>$$Deserialize
ENTRY_POINT: 04170178
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint MagicaCloth2_ExSimpleNativeArray<WindManager_WindData>__Deserialize
               (undefined8 param_1,void *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  byte unaff_w27;
  void *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    memcpy(unaff_x24,param_2,unaff_x23);
    memset(unaff_x28,0,unaff_x23);
    memcpy(unaff_x22,unaff_x28,unaff_x23);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar2 = *unaff_x21;
    *(void **)(unaff_x29 + -0x48) = unaff_x24;
    *(void **)(unaff_x29 + -0x40) = unaff_x22;
    lVar2 = *(long *)(lVar2 + 0x1c0);
    (**(code **)(lVar2 + 0x10))
              (*(undefined8 *)(lVar2 + 8),lVar2,unaff_x21,unaff_x29 + -0x48,unaff_x29 + -0x34);
    uVar1 = 1 << (ulong)((uint)unaff_x19 & 0x1f);
    if ((*(char *)(unaff_x29 + -0x34) == '\0' & (unaff_w27 ^ 0xff)) != 0) break;
    uVar4 = *(uint *)(unaff_x29 + -0xa4);
    uVar1 = uVar1 & unaff_w25;
    unaff_w27 = 1;
    while( true ) {
      while( true ) {
        unaff_w20 = uVar1 | unaff_w20;
        unaff_x19 = unaff_x19 + 1;
        *(long *)(unaff_x29 + -0x90) = *(long *)(unaff_x29 + -0x90) + *(long *)(unaff_x29 + -0x50);
        if (unaff_x26 == unaff_x19) {
          if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
            return unaff_w20;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        if ((uVar4 >> 4 & 1) != 0) break;
        uVar1 = 1 << (ulong)((uint)unaff_x19 & 0x1f) & unaff_w25;
      }
      if ((uVar4 >> 5 & 1) != 0) break;
      uVar3 = *(uint *)(unaff_x29 + -0x58);
      uVar1 = 1 << (ulong)((uint)unaff_x19 & 0x1f);
LAB_04170200:
      uVar1 = uVar1 & uVar3;
    }
    unaff_x21 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x38) + 0x10))();
    param_2 = *(void **)(unaff_x29 + -0x90);
  }
  uVar3 = *(uint *)(unaff_x29 + -0x58);
  uVar4 = *(uint *)(unaff_x29 + -0xa4);
  unaff_w27 = 0;
  goto LAB_04170200;
}


