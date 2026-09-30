/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$IsRequestComplete
ENTRY_POINT: 032a4e78
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void Meta_WitAi_Requests_VRequest__IsRequestComplete(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long in_x9;
  int in_w10;
  long unaff_x19;
  undefined8 uVar3;
  uint uStack000000000000000c;
  
  uVar3 = *(undefined8 *)(in_x9 + 0x40);
                    /* try { // try from 032a4e7c to 033a4e93 has its CatchHandler @ 032a4f00 */
  if (in_w10 == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  plVar1 = (long *)FUN_03579868(uVar3,0);
                    /* try { // try from 032a4e94 to 033a4eef has its CatchHandler @ 032a4d30 */
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
    uStack000000000000000c = *(uint *)(unaff_x19 + 0xc) & 0x7fffffff;
    uVar2 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&stack0x0000000c);
    FUN_0340f2f0(*(undefined8 *)
                  Method_Unity_Collections_FixedStringMethods_Append<FixedString32Bytes>__,uVar3,
                 uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


