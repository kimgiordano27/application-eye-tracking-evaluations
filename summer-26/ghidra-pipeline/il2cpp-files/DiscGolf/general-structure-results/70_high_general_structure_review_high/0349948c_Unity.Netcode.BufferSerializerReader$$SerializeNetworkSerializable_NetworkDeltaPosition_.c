/*
FUNCTION_NAME: Unity.Netcode.BufferSerializerReader$$SerializeNetworkSerializable<NetworkDeltaPosition>
ENTRY_POINT: 0349948c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Netcode_BufferSerializerReader__SerializeNetworkSerializable<NetworkDeltaPosition>(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w19;
  long unaff_x20;
  
  FUN_02dcfd74();
  uVar1 = FUN_0550100c();
  if (uVar1 <= unaff_w19) {
    thunk_FUN_02dfd288(&DAT_06b301b0);
    uVar6 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(&DAT_06baaea0);
    FUN_05453f78(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6);
  }
  plVar2 = (long *)thunk_FUN_02dd3048();
  if (plVar2 != (long *)0x0) {
    lVar3 = thunk_FUN_02dd2d7c(**(undefined8 **)(unaff_x20 + 0x38));
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02dd3048(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar6 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,0);
    }
    if (unaff_w19 < *(uint *)(plVar2 + 3)) {
      plVar2[(long)(int)unaff_w19 + 4] = lVar3;
      LeanTween__value(plVar2 + (long)(int)unaff_w19 + 4,lVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  FUN_02d9665c();
  return;
}


