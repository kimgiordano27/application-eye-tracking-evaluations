/*
FUNCTION_NAME: FUN_0409d994
ENTRY_POINT: 0409d994
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0409d994(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_04587cd0;
  if ((DAT_0483f181 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04587cd0);
    DAT_0483f181 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = **(long **)(lVar2 + 0xb8);
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x10) != param_1) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar2 = *(long *)puVar1;
        lVar4 = **(long **)(lVar2 + 0xb8);
        if (lVar4 == 0) goto LAB_0409dadc;
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
          if (lVar4 == 0) goto LAB_0409dadc;
        }
        plVar7 = *(long **)(lVar4 + 0x10);
        if (plVar7 == (long *)0x0) goto LAB_0409dadc;
        lVar2 = *plVar7;
                    /* try { // try from 0409da50 to 0419da57 has its CatchHandler @ 0409dcd4 */
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
                    /* try { // try from 0409da6c to 0419da77 has its CatchHandler @ 0409dc48 */
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0409da9c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
                    /* try { // try from 0409da84 to 0419da8b has its CatchHandler @ 0409dc4c */
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
                    /* try { // try from 0409da8c to 0419da97 has its CatchHandler @ 0409dcbc */
LAB_0409da9c:
                    /* try { // try from 0409daa0 to 0419daab has its CatchHandler @ 0409dcd0 */
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        lVar2 = *(long *)puVar1;
      }
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
                    /* try { // try from 0409dab8 to 0419dac3 has its CatchHandler @ 0409dcc8 */
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      plVar7 = (long *)(**(long **)(lVar2 + 0xb8) + 0x10);
      *plVar7 = param_1;
                    /* try { // try from 0409dacc to 0419dad7 has its CatchHandler @ 0409dccc */
      thunk_FUN_01f51358(plVar7,param_1);
      return;
    }
  }
LAB_0409dadc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


