/*
FUNCTION_NAME: FUN_028485dc
ENTRY_POINT: 028485dc
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


/* WARNING: Removing unreachable block (ram,0x0284877c) */

void FUN_028485dc(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 028485f4 to 02948603 has its CatchHandler @ 02848604 */
  if ((DAT_0483086b & 1) == 0) {
                    /* catch() { ... } // from try @ 02848568 with catch @ 02848604
                       catch() { ... } // from try @ 02848594 with catch @ 02848604
                       catch() { ... } // from try @ 028485f4 with catch @ 02848604 */
                    /* try { // try from 02848608 to 0294860b has its CatchHandler @ 02848614 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 0284860c to 02948617 has its CatchHandler @ 02848374 */
    DAT_0483086b = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02848608 with catch @ 02848614
                        */
  plVar1 = (long *)FUN_02249368(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28))
  ;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1b8))
                    (plVar1,param_1[0x7e],param_2,*(undefined8 *)(*plVar1 + 0x1c0));
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_04224ea4(param_1,0);
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02848744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x838))(param_1,param_2,*(undefined8 *)(*param_1 + 0x840));
      return;
    }
    lVar7 = param_1[0x7e];
    (**(code **)(*param_1 + 0x838))(param_1,param_2,*(undefined8 *)(*param_1 + 0x840));
    lVar6 = param_1[0x7e];
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar1 = (long *)FUN_029e5dc8(lVar7,lVar6,
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
          goto LAB_02848754;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02848754:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  return;
}


