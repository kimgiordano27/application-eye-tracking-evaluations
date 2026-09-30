/*
FUNCTION_NAME: FUN_0295c944
ENTRY_POINT: 0295c944
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0295c944(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
                    /* try { // try from 0295c960 to 02a5c987 has its CatchHandler @ 0295c9e4 */
  if ((DAT_04830c12 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04830c12 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    plVar7 = (long *)param_1[5];
    if (plVar7 == (long *)0x0) goto LAB_0295cb8c;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 0295c9b0 to 02a5c9b3 has its CatchHandler @ 0295c9e0 */
                    /* try { // try from 0295c9b4 to 02a5c9c7 has its CatchHandler @ 0295c9e8 */
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 0295c9c8 to 02a5c9d7 has its CatchHandler @ 0295c7b8 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 0295c9d8 to 02a5c9db has its CatchHandler @ 0295c9dc */
        if (*(long *)(piVar6 + -2) == lVar3) {
                    /* try { // try from 0295ca00 to 02a5ca17 has its CatchHandler @ 0295ca58 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295ca04;
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295c9d8 with catch @ 0295c9dc
                       try { // try from 0295c9dc to 02a5c9ff has its CatchHandler @ 0295c7b8 */
        uVar5 = uVar5 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295c9b0 with catch @ 0295c9e0
                        */
        piVar6 = piVar6 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295c960 with catch @ 0295c9e4
                        */
      } while (uVar5 != 0);
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0295c9b4 with catch @ 0295c9e8
                        */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0295ca04:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    param_1[8] = lVar3;
                    /* try { // try from 0295ca18 to 02a5ca47 has its CatchHandler @ 0295c7b8 */
    thunk_FUN_01f51358(param_1 + 8,lVar3);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  do {
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_0295cb8c;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 0295ca48 to 02a5ca57 has its CatchHandler @ 0295ca58 */
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295ca80;
        }
                    /* catch() { ... } // from try @ 0295ca00 with catch @ 0295ca58
                       catch() { ... } // from try @ 0295ca48 with catch @ 0295ca58 */
        uVar5 = uVar5 - 1;
                    /* try { // try from 0295ca5c to 02a5ca5f has its CatchHandler @ 0295ca68 */
        piVar6 = piVar6 + 4;
                    /* try { // try from 0295ca60 to 02a5ca6b has its CatchHandler @ 0295c7b8 */
      } while (uVar5 != 0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0295ca5c with catch @ 0295ca68
                        */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0295ca80:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        return 0;
      }
      goto LAB_0295cb8c;
    }
    plVar7 = (long *)param_1[8];
    if (plVar7 == (long *)0x0) goto LAB_0295cb8c;
    lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0295cb00;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,lVar3,0);
LAB_0295cb00:
    auVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar3 = param_1[6];
  } while ((lVar3 != 0) &&
          (uVar5 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),auVar8._0_8_,auVar8._8_8_,
                              *(undefined8 *)(lVar3 + 0x28)), (uVar5 & 1) == 0));
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    auVar8 = (**(code **)(lVar3 + 0x18))
                       (*(undefined8 *)(lVar3 + 0x40),auVar8._0_8_,auVar8._8_8_,
                        *(undefined8 *)(lVar3 + 0x28));
    *(undefined1 (*) [16])(param_1 + 3) = auVar8;
    return 1;
  }
LAB_0295cb8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


