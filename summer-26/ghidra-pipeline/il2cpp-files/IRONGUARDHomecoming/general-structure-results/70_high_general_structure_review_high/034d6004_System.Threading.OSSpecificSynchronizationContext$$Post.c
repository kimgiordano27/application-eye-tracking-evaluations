/*
FUNCTION_NAME: System.Threading.OSSpecificSynchronizationContext$$Post
ENTRY_POINT: 034d6004
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


long System_Threading_OSSpecificSynchronizationContext__Post(long param_1,long param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_04832dce & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    DAT_04832dce = 1;
  }
  puVar5 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    puVar5 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_BoxData>__
    ;
                    /* try { // try from 034d61d8 to 035d61db has its CatchHandler @ 034d7414 */
                    /* try { // try from 034d61dc to 035d62eb has its CatchHandler @ 034d5824 */
  }
  else {
    if (param_2 != 0) {
      lVar3 = param_2;
      if ((*(int *)(param_1 + 0x10) == 0) || (lVar3 = param_1, *(int *)(param_2 + 0x10) == 0)) {
        return lVar3;
      }
                    /* try { // try from 034d6050 to 035d6057 has its CatchHandler @ 034d76fc */
      lVar3 = *(long *)
               Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
      ;
                    /* try { // try from 034d605c to 035d605f has its CatchHandler @ 034d76f0 */
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *(long *)puVar5;
      }
                    /* try { // try from 034d606c to 035d6073 has its CatchHandler @ 034d61bc */
                    /* try { // try from 034d6078 to 035d607f has its CatchHandler @ 034d6198 */
      iVar2 = FUN_03413064(param_1,**(undefined8 **)(lVar3 + 0xb8),0);
      if (iVar2 == -1) {
        lVar3 = *(long *)puVar5;
                    /* try { // try from 034d6090 to 035d6097 has its CatchHandler @ 034d61b8 */
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *(long *)puVar5;
        }
                    /* try { // try from 034d60a8 to 035d60af has its CatchHandler @ 034d61b0 */
        iVar2 = FUN_03413064(param_2,**(undefined8 **)(lVar3 + 0xb8),0);
                    /* try { // try from 034d60b0 to 035d60bb has its CatchHandler @ 034d61b4 */
        if (iVar2 == -1) {
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = FUN_034e38c0(param_2);
          if ((uVar4 & 1) != 0) {
            return param_2;
          }
                    /* try { // try from 034d60d8 to 035d6147 has its CatchHandler @ 034d78d8 */
          sVar1 = FUN_03409f80(param_1,*(int *)(param_1 + 0x10) + -1,0);
          lVar3 = *(long *)puVar5;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar3);
            lVar3 = *(long *)puVar5;
          }
          lVar8 = *(long *)(lVar3 + 0xb8);
          if (*(short *)(lVar8 + 10) != sVar1) {
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar3);
              lVar3 = *(long *)puVar5;
              lVar8 = *(long *)(lVar3 + 0xb8);
            }
            if (*(short *)(lVar8 + 8) != sVar1) {
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar3);
                lVar3 = *(long *)puVar5;
                lVar8 = *(long *)(lVar3 + 0xb8);
              }
              if (*(short *)(lVar8 + 0x18) != sVar1) {
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(lVar3);
                  lVar8 = *(long *)(*(long *)puVar5 + 0xb8);
                }
                lVar3 = FUN_0340ebc0(param_1,*(undefined8 *)(lVar8 + 0x10),param_2,0);
                return lVar3;
              }
            }
          }
          lVar3 = FUN_03405678(param_1,param_2,0);
          return lVar3;
        }
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<ushort>__
                                );
      FUN_034f6754(uVar6,uVar7,0);
      goto LAB_034d624c;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    puVar5 = 
    Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_CircleData>__;
  }
  uVar7 = thunk_FUN_01efb3a4(puVar5);
  FUN_034efd20(uVar6,uVar7,0);
LAB_034d624c:
  uVar7 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<CommandBuilder_CircleXZData>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


