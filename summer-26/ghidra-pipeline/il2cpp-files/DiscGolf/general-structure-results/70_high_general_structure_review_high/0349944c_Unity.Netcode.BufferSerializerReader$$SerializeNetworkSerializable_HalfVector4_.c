/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerReader$$SerializeNetworkSerializable<HalfVector4>
ENTRY_POINT: 0349944c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerReader__SerializeNetworkSerializable<HalfVector4>
               (undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_02d965b8(&DAT_06b2f250);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_02dcfd74(param_4);
    }
  }
  uVar1 = FUN_0550100c(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_02dfd288(&DAT_06b301b0);
    uVar6 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(&DAT_06baaea0);
    FUN_05453f78(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_02dd3048(param_1,*(undefined8 *)PTR_DAT_069fc180);
  if (plVar2 == (long *)0x0) {
    FUN_02d9665c(param_1,param_2,param_3);
    return;
  }
  uStack_48 = param_3[1];
  local_50 = *param_3;
  local_40 = param_3[2];
  lVar3 = thunk_FUN_02dd2d7c(**(undefined8 **)(param_4 + 0x38),&local_50);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_02dd3048(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    LeanTween__value(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


