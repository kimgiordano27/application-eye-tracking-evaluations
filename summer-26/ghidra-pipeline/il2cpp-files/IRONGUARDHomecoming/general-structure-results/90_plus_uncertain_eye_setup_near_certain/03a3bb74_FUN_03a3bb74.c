/*
FUNCTION_NAME: FUN_03a3bb74
ENTRY_POINT: 03a3bb74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a3bc50) */

undefined8 FUN_03a3bb74(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
                    /* catch() { ... } // from try @ 03a3b404 with catch @ 03a3bb74 */
                    /* catch() { ... } // from try @ 03a3bad0 with catch @ 03a3bb78 */
                    /* catch() { ... } // from try @ 03a3b3f8 with catch @ 03a3bb7c */
                    /* catch() { ... } // from try @ 03a3bac4 with catch @ 03a3bb80 */
                    /* catch() { ... } // from try @ 03a3b7bc with catch @ 03a3bb84 */
                    /* catch() { ... } // from try @ 03a3b770 with catch @ 03a3bb88 */
                    /* catch() { ... } // from try @ 03a3bac0 with catch @ 03a3bb8c */
  if ((DAT_04838c04 & 1) == 0) {
                    /* catch() { ... } // from try @ 03a3b684 with catch @ 03a3bb90
                       catch() { ... } // from try @ 03a3bb2c with catch @ 03a3bb90 */
                    /* catch() { ... } // from try @ 03a3b668 with catch @ 03a3bb94
                       catch() { ... } // from try @ 03a3bb28 with catch @ 03a3bb94 */
                    /* catch() { ... } // from try @ 03a3b654 with catch @ 03a3bb98
                       catch() { ... } // from try @ 03a3bb18 with catch @ 03a3bb98 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch() { ... } // from try @ 03a3b708 with catch @ 03a3bb9c
                       catch() { ... } // from try @ 03a3bb1c with catch @ 03a3bb9c */
    DAT_04838c04 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  FUN_03a3b9b8(param_1);
  plVar2 = (long *)FUN_03442924(0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_03436d88(plVar2,*(undefined8 *)(param_1 + 0x18),0);
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03a3bc28;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_03a3bc28:
  (*(code *)*puVar4)(plVar2,puVar4[1]);
  return uVar3;
}


