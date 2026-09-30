/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<Vector3>$$Duplicate
ENTRY_POINT: 06377fc4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Netcode_FallbackSerializer<Vector3>__Duplicate
          (undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x22;
  
  if ((param_2 != 0) && (param_3 != (long *)0x0)) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03ac4090(lVar2);
    }
    lVar2 = thunk_FUN_03ac73c0();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090(lVar2);
      }
      lVar2 = thunk_FUN_03ac73c0(param_3,lVar2);
      if (lVar2 != 0) {
        lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03ac4090(lVar2);
        }
        if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
          thunk_FUN_03ac7604();
          lVar2 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03ac4090(lVar2);
          }
          if (*(long *)(*param_3 + 0x40) == *(long *)(lVar2 + 0x40)) {
            thunk_FUN_03ac7604(param_3);
                    /* WARNING: Could not recover jumptable at 0x063780e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
            return uVar1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40();
      }
    }
    FUN_0677195c(2,0);
  }
  return 0;
}


