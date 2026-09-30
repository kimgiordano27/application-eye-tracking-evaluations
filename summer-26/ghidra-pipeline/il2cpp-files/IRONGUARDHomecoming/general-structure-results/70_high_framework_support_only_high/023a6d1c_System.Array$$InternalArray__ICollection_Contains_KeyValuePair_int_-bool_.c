/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<KeyValuePair<int,-bool>>
ENTRY_POINT: 023a6d1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023a6eb8) */
/* WARNING: Removing unreachable block (ram,0x023a7250) */

void System_Array__InternalArray__ICollection_Contains<KeyValuePair<int,_bool>>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  void *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  undefined8 unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023a6d60;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023a6d60:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) break;
    lVar3 = *(long *)(*unaff_x20 + 0xf8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_023a6d14;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_023a6d14:
    *(void **)(unaff_x29 + -0x28) = unaff_x19;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023a6cbc with catch @ 023a6de0
                        */
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023a6ca8 with catch @ 023a6df0
                        */
    memcpy(unaff_x26,unaff_x19,unaff_x28);
    memcpy(unaff_x27,unaff_x26,unaff_x28);
                    /* try { // try from 023a6e10 to 024a6e13 has its CatchHandler @ 023a6e34 */
                    /* try { // try from 023a6e14 to 024a6e27 has its CatchHandler @ 023a6930 */
    puVar1 = *(undefined8 **)(*unaff_x20 + 0x70);
    uVar2 = *puVar1;
    *(int *)(unaff_x29 + -0x14) = unaff_w23;
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x25;
    *(void **)(unaff_x29 + -0x20) = unaff_x27;
                    /* try { // try from 023a6e28 to 024a6e2f has its CatchHandler @ 023a6e30 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023a6e28 with catch @ 023a6e30
                       try { // try from 023a6e30 to 024a6e53 has its CatchHandler @ 023a6930 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023a6e10 with catch @ 023a6e34
                        */
    (*(code *)puVar1[2])(uVar2,puVar1,unaff_x29 + -0x90,unaff_x29 + -0x28);
    unaff_w23 = unaff_w23 + 1;
    param_1 = *unaff_x21;
    param_3 = *unaff_x24;
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
                    /* try { // try from 023a6e54 to 024a6e57 has its CatchHandler @ 023a6f94 */
                    /* try { // try from 023a6e58 to 024a6f8b has its CatchHandler @ 023a6930 */
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023a6ea0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023a6ea0:
    (*(code *)*puVar1)();
  }
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x88);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x90);
  if (*(long *)(*(long *)(unaff_x29 + -0xe0) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38));
  }
  return;
}


