/*
FUNCTION_NAME: Unity.Properties.TypeTraits<SerializedValueView>$$get_IsArray
ENTRY_POINT: 04bb04cc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Properties_TypeTraits<SerializedValueView>__get_IsArray(long param_1)

{
  void *__src;
  ushort uVar1;
  long lVar2;
  long lVar3;
  void *unaff_x19;
  long *unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  code *pcVar4;
  void *unaff_x25;
  long unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  while( true ) {
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02feb2c4();
    }
    FUN_02fe920c(param_1,unaff_x25);
    unaff_x26 = unaff_x26 + -1;
    if (unaff_x26 == 0) break;
    lVar2 = *unaff_x20;
    uVar1 = *(ushort *)(lVar2 + 0x135);
    lVar3 = lVar2;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_02feb2c4(lVar2);
      uVar1 = *(ushort *)(*unaff_x20 + 0x135);
      lVar3 = *unaff_x20;
    }
    pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_02feb2c4(lVar3);
    }
    unaff_x25 = (void *)(*pcVar4)();
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    __src = unaff_x19;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      __src = unaff_x27;
    }
    memcpy(unaff_x22,__src,unaff_x21);
    memcpy(unaff_x25,unaff_x22,unaff_x21);
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
    }
    param_1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0xa8) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


