/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$Read
ENTRY_POINT: 03a3bd4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint Unity_Netcode_FallbackSerializer<NativeArray<ulong>>__Read(void)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  lVar2 = thunk_FUN_02dd3048();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02dcfd18(lVar2);
    }
    lVar2 = thunk_FUN_02dd3048();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
LAB_03a3be90:
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0();
      }
      thunk_FUN_02dd328c();
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18(lVar2);
      }
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) goto LAB_03a3be90;
      thunk_FUN_02dd328c();
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      goto LAB_03a3be78;
    }
  }
  FUN_05508fa4(2,0);
  uVar1 = 0;
LAB_03a3be78:
  return uVar1 & 1;
}


