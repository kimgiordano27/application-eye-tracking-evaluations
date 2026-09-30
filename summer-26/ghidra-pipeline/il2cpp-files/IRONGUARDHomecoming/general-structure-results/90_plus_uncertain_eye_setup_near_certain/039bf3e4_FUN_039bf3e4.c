/*
FUNCTION_NAME: FUN_039bf3e4
ENTRY_POINT: 039bf3e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x039bf630) */

void FUN_039bf3e4(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
                    /* try { // try from 039bf3e4 to 03abf3e7 has its CatchHandler @ 039bf3f0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 039bf358 with catch @ 039bf3e8
                       try { // try from 039bf3e8 to 03abf40b has its CatchHandler @ 039bf300 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 039bf378 with catch @ 039bf3ec
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 039bf3e4 with catch @ 039bf3f0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 039bf3a4 with catch @ 039bf3f4
                       catch(type#1 @ 042b3198) { ... } // from try @ 039bf3cc with catch @ 039bf3f4
                        */
  if ((DAT_04838846 & 1) == 0) {
                    /* try { // try from 039bf40c to 03abf423 has its CatchHandler @ 039bf4b0 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_4863);
                    /* try { // try from 039bf424 to 03abf49b has its CatchHandler @ 039bf300 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_4864);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IPointerDownHandler>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_5409);
    DAT_04838846 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 != (long *)0x0) {
    if (*param_2 != *(long *)StringLiteral_5409) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    if (param_2[2] != 0) {
      plVar5 = (long *)FUN_0265d924(param_2[2],*(undefined8 *)StringLiteral_4864);
      puVar3 = StringLiteral_4863;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
                    /* try { // try from 039bf4ac to 03abf4b3 has its CatchHandler @ 039bf300 */
        lVar8 = *plVar5;
                    /* catch() { ... } // from try @ 039bf40c with catch @ 039bf4b0
                       catch() { ... } // from try @ 039bf49c with catch @ 039bf4b0 */
                    /* try { // try from 039bf4b4 to 03abf4b7 has its CatchHandler @ 039bf4c0 */
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 039bf4b8 to 03abf4c3 has its CatchHandler @ 039bf300 */
        if (uVar9 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039bf4b4 with catch @ 039bf4c0
                        */
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_039bf4f8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_039bf4f8:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) goto LAB_039bf580;
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_039bf554;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_039bf554:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        FUN_039b5ad0(param_1,uVar7);
        FUN_039b5de0(param_1,uVar7);
      } while( true );
    }
  }
  goto LAB_039bf620;
LAB_039bf580:
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_039bf5d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_039bf5d4:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (param_2[2] != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    uVar4 = FUN_0265d6c4(param_2[2],
                         *(undefined8 *)
                          Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IPointerDownHandler>__
                        );
    if (lVar8 != 0) {
      FUN_039acf5c(lVar8,uVar4);
      return;
    }
  }
LAB_039bf620:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


