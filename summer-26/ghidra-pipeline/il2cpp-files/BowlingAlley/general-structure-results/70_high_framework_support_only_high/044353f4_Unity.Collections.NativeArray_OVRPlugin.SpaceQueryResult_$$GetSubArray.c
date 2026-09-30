/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 044353f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               int param_5,int param_6,long param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  int unaff_w21;
  
                    /* try { // try from 044353f8 to 0453541f has its CatchHandler @ 04435434 */
  param_10 = FUN_0584a884(param_4,param_2,0);
  uVar2 = FUN_0584a794(&param_10,0);
                    /* try { // try from 04435420 to 0453542b has its CatchHandler @ 04434eec */
  lVar3 = FUN_0596f544(uVar2,0);
  lVar4 = *(long *)(param_7 + 0x20);
                    /* try { // try from 0443542c to 04535433 has its CatchHandler @ 04435434 */
  uVar1 = *(ushort *)(lVar4 + 0x135);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044353f8 with catch @ 04435434
                       catch(type#2 @ 00000000) { ... } // from try @ 0443542c with catch @ 04435434
                        */
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(lVar4);
    lVar4 = *(long *)(param_7 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(lVar4);
    lVar4 = *(long *)(param_7 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_032934b8(lVar4);
  }
  FUN_06baa6ec(lVar3 + (param_5 << 5),unaff_x20 + (unaff_w21 << 5),(long)(param_6 << 5),0);
  FUN_0584a898(&param_10,0);
  return;
}


