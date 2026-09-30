/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<uint>$$Deserialize
ENTRY_POINT: 04f6fc14
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8 MagicaCloth2_ExSimpleNativeArray<uint>__Deserialize(void)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  lVar1 = thunk_FUN_02ef170c();
  if (lVar1 == 0) {
    FUN_05622cbc(2,0);
    return 0;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02eea768(lVar1);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
    puVar2 = (undefined4 *)thunk_FUN_02ef195c();
                    /* WARNING: Could not recover jumptable at 0x04f6fc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*unaff_x19 + 0x1c8))(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08440();
}


