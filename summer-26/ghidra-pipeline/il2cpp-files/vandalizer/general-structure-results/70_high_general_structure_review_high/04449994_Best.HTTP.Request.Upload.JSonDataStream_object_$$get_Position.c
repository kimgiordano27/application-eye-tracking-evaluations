/*
FUNCTION_NAME: Best.HTTP.Request.Upload.JSonDataStream<object>$$get_Position
ENTRY_POINT: 04449994
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_4
*/


void Best_HTTP_Request_Upload_JSonDataStream<object>__get_Position(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  
  if (param_1 == 0) {
    uVar3 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3,0);
  }
  if (*(uint *)(unaff_x22 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  unaff_x22[5] = unaff_x20;
  thunk_FUN_0329bf60();
  uVar3 = (**(code **)(*unaff_x21 + 0x178))();
  lVar1 = FUN_06842140(uVar3,0);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3,0);
  }
  if (*(uint *)(unaff_x22 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  unaff_x22[6] = lVar1;
  thunk_FUN_0329bf60(unaff_x22 + 6,lVar1);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
  if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar3 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar3,0);
  lVar1 = FUN_06842140(uVar3,0);
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_0322f04c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar3,0);
  }
  if (3 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[7] = lVar1;
    thunk_FUN_0329bf60(unaff_x22 + 7,lVar1);
    thunk_FUN_03257e30(PTR_DAT_075d8d58);
    uVar3 = FUN_05c8969c();
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar4 = thunk_FUN_0322f148();
    FUN_05d75da4(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


