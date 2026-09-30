/*
FUNCTION_NAME: FUN_0350a49c
ENTRY_POINT: 0350a49c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


long FUN_0350a49c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_04832fb1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_BuddyAllocator_GetNativeArray<ulong>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_FullSerializer_fsSerializer_SetDefaultStorageType__
                      );
    DAT_04832fb1 = 1;
  }
  lVar2 = FUN_034f7c14(param_1,0);
  puVar1 = Method_Unity_VisualScripting_FullSerializer_fsSerializer_SetDefaultStorageType__;
  if ((*(char *)(param_1 + 0xa0) != '\0') || (lVar4 = lVar2, *(long *)(param_1 + 0x98) != 0)) {
    uVar3 = FUN_0350a360(param_1);
    lVar4 = FUN_033f0c40(*(undefined8 *)puVar1,uVar3,0);
    if (lVar2 != 0) {
      uVar3 = FUN_035b04c8(0);
      lVar2 = FUN_0340ebc0(lVar2,uVar3,lVar4,0);
      return lVar2;
    }
  }
  return lVar4;
}


