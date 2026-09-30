/*
FUNCTION_NAME: Best.HTTP.Request.Upload.JSonDataStream<object>$$Dispose
ENTRY_POINT: 04449938
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Best_HTTP_Request_Upload_JSonDataStream<object>__Dispose(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  
  *(undefined8 *)(param_1 + 0x28) = unaff_x20;
  thunk_FUN_0329bf60();
  uVar1 = (**(code **)(*unaff_x21 + 0x178))();
  lVar2 = FUN_06842140(uVar1,0);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
    uVar1 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar1,0);
  }
  if (*(uint *)(unaff_x22 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  unaff_x22[6] = lVar2;
  thunk_FUN_0329bf60(unaff_x22 + 6,lVar2);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
  if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar1,0);
  lVar2 = FUN_06842140(uVar1,0);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_0322f04c(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
    uVar1 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar1,0);
  }
  if (3 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[7] = lVar2;
    thunk_FUN_0329bf60(unaff_x22 + 7,lVar2);
    thunk_FUN_03257e30(PTR_DAT_075d8d58);
    uVar1 = FUN_05c8969c();
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar4 = thunk_FUN_0322f148();
    FUN_05d75da4(uVar4,uVar1,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


