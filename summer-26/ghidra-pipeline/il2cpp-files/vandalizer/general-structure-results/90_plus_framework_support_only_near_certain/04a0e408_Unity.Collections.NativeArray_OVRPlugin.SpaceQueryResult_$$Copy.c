/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 04a0e408
PROGRAM: vandalizer-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w28;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_04a0e434;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
                    /* try { // try from 04a0e414 to 04b0e453 has its CatchHandler @ 04a0e414
                       catch() { ... } // from try @ 04a0e414 with catch @ 04a0e414
                       catch() { ... } // from try @ 04a0e468 with catch @ 04a0e414
                       catch() { ... } // from try @ 04a0e4a4 with catch @ 04a0e414
                       catch() { ... } // from try @ 04a0e4e4 with catch @ 04a0e414 */
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_0322c1e8();
LAB_04a0e434:
        iVar1 = (*(code *)*puVar3)();
        if (iVar1 == 0) {
          return unaff_w25;
        }
                    /* try { // try from 04a0e454 to 04b0e467 has its CatchHandler @ 04a0e474 */
        if (iVar1 < 0) {
          unaff_w20 = unaff_w25 + 1;
        }
        else {
                    /* try { // try from 04a0e468 to 04b0e48b has its CatchHandler @ 04a0e414 */
          unaff_w28 = unaff_w25 - 1;
        }
        if (unaff_w28 < (int)unaff_w20) {
          return ~unaff_w20;
        }
        unaff_w25 = unaff_w20 + ((int)(unaff_w28 - unaff_w20) >> 1);
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        param_3 = **(long **)(lVar2 + 0xc0);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_0322bef4(param_3);
        }
        param_1 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


