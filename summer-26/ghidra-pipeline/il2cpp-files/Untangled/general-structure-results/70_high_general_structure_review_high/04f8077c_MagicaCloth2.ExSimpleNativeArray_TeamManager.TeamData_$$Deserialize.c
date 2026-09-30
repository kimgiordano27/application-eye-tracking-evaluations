/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<TeamManager.TeamData>$$Deserialize
ENTRY_POINT: 04f8077c
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


undefined8
MagicaCloth2_ExSimpleNativeArray<TeamManager_TeamData>__Deserialize
          (long param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    FUN_02eea768(lVar3);
  }
  lVar3 = thunk_FUN_02ef170c();
  if (lVar3 == 0) {
    FUN_05622cbc(2,0);
    return 0;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar3 + 0x40)) {
    puVar1 = (undefined8 *)thunk_FUN_02ef195c();
                    /* WARNING: Could not recover jumptable at 0x04f80800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_2 + 0x1c8))
                      (param_2,*puVar1,puVar1[1],*(undefined8 *)(*param_2 + 0x1d0));
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08440();
}


