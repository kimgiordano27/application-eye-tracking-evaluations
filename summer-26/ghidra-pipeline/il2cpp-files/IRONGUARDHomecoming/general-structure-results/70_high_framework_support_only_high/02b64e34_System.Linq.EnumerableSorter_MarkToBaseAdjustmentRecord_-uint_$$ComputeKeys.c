/*
FUNCTION_NAME: System.Linq.EnumerableSorter<MarkToBaseAdjustmentRecord,-uint>$$ComputeKeys
ENTRY_POINT: 02b64e34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02b6502c) */

void System_Linq_EnumerableSorter<MarkToBaseAdjustmentRecord,_uint>__ComputeKeys
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02b64e68;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02b64e68:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar4 = *plVar3;
                    /* try { // try from 02b64e88 to 02c64e8b has its CatchHandler @ 02b64eac */
                    /* try { // try from 02b64e8c to 02c64e8f has its CatchHandler @ 02b64ea4 */
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 02b64e90 to 02c64e93 has its CatchHandler @ 02b64ea0 */
    if (uVar6 != 0) {
                    /* try { // try from 02b64e94 to 02c64e9b has its CatchHandler @ 02b64eb4 */
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b64da4 with catch @ 02b64e9c
                       try { // try from 02b64e9c to 02c64ecf has its CatchHandler @ 02b64cc0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b64dc4 with catch @ 02b64ea0
                       catch(type#1 @ 042b3198) { ... } // from try @ 02b64e90 with catch @ 02b64ea0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b64e8c with catch @ 02b64ea4
                        */
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b64ed0;
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b64d28 with catch @ 02b64ea8
                        */
        uVar6 = uVar6 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b64e88 with catch @ 02b64eac
                        */
        piVar7 = piVar7 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b64d0c with catch @ 02b64eb0
                        */
      } while (uVar6 != 0);
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b64de8 with catch @ 02b64eb4
                       catch(type#1 @ 042b3198) { ... } // from try @ 02b64e94 with catch @ 02b64eb4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b64e2c with catch @ 02b64eb8
                        */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_02b64ed0:
                    /* try { // try from 02b64ed0 to 02c64ed3 has its CatchHandler @ 02b64ee0 */
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) break;
                    /* catch() { ... } // from try @ 02b64ed0 with catch @ 02b64ee0 */
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
                    /* try { // try from 02b64eec to 02c64ef7 has its CatchHandler @ 02b64f0c */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 02b64ef8 to 02c64f03 has its CatchHandler @ 02b64cc0 */
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar3;
                    /* try { // try from 02b64f04 to 02c64f0b has its CatchHandler @ 02b64f0c */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02b64eec with catch @ 02b64f0c
                       catch(type#2 @ 00000000) { ... } // from try @ 02b64f04 with catch @ 02b64f0c
                        */
                    /* catch() { ... } // from try @ 02b65064 with catch @ 02b64f10
                       catch() { ... } // from try @ 02b650a0 with catch @ 02b64f10
                       catch() { ... } // from try @ 02b65100 with catch @ 02b64f10
                       catch() { ... } // from try @ 02b65154 with catch @ 02b64f10 */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
                    /* try { // try from 02b64f40 to 02c64f4f has its CatchHandler @ 02b6510c */
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b64f48;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar4,0);
LAB_02b64f48:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    FUN_02b65dc4();
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b64fe8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b64fe8:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return;
}


