/*
FUNCTION_NAME: FUN_0296d60c
ENTRY_POINT: 0296d60c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0296d7ac) */

void FUN_0296d60c(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 0296d61c to 02a6d61f has its CatchHandler @ 0296d64c */
                    /* try { // try from 0296d620 to 02a6d633 has its CatchHandler @ 0296d654 */
  if ((DAT_04830c8a & 1) == 0) {
                    /* try { // try from 0296d634 to 02a6d643 has its CatchHandler @ 0296d3fc */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830c8a = 1;
  }
                    /* try { // try from 0296d644 to 02a6d647 has its CatchHandler @ 0296d648 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296d644 with catch @ 0296d648
                       try { // try from 0296d648 to 02a6d66b has its CatchHandler @ 0296d3fc */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296d61c with catch @ 0296d64c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296d5ac with catch @ 0296d650
                        */
  plVar1 = (long *)FUN_0249b278(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28))
  ;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0296d620 with catch @ 0296d654
                        */
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1b8))
                    (plVar1,param_1[0x7e],param_2,*(undefined8 *)(*plVar1 + 0x1c0));
                    /* try { // try from 0296d66c to 02a6d683 has its CatchHandler @ 0296d6b8 */
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_04224ea4(param_1,0);
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0296d774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x838))(param_1,param_2,*(undefined8 *)(*param_1 + 0x840));
      return;
    }
                    /* try { // try from 0296d684 to 02a6d6a7 has its CatchHandler @ 0296d3fc */
    lVar7 = param_1[0x7e];
    (**(code **)(*param_1 + 0x838))(param_1,param_2,*(undefined8 *)(*param_1 + 0x840));
    lVar6 = param_1[0x7e];
                    /* try { // try from 0296d6a8 to 02a6d6b7 has its CatchHandler @ 0296d6b8 */
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
                    /* catch() { ... } // from try @ 0296d66c with catch @ 0296d6b8
                       catch() { ... } // from try @ 0296d6a8 with catch @ 0296d6b8 */
                    /* try { // try from 0296d6bc to 02a6d6bf has its CatchHandler @ 0296d6c8 */
    if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 0296d6c0 to 02a6d6cb has its CatchHandler @ 0296d3fc */
      thunk_FUN_01ee6d7c();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0296d6bc with catch @ 0296d6c8
                        */
    plVar1 = (long *)FUN_029e6d38(lVar7,lVar6,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar1,param_1,0);
    (**(code **)(*param_1 + 0x198))(param_1,plVar1,*(undefined8 *)(*param_1 + 0x1a0));
    lVar3 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0296d784;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0296d784:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  return;
}


