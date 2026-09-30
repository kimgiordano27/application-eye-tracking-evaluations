/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<KeyValuePair<int,-char>>
ENTRY_POINT: 023a6fcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023a71f4) */
/* WARNING: Removing unreachable block (ram,0x023a7088) */
/* WARNING: Removing unreachable block (ram,0x023a7200) */
/* WARNING: Removing unreachable block (ram,0x023a7250) */
/* WARNING: Removing unreachable block (ram,0x023a7248) */
/* WARNING: Removing unreachable block (ram,0x023a7180) */

void System_Array__InternalArray__ICollection_Contains<KeyValuePair<int,_char>>
               (undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  void *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  int unaff_w25;
  int unaff_w27;
  size_t unaff_x28;
  long unaff_x29;
  
  do {
    (**(code **)(param_2 + 0x10))(*(undefined8 *)(param_2 + 8));
    memcpy(*(void **)(unaff_x29 + -0xf0),unaff_x19,unaff_x28);
    if (unaff_w25 == unaff_w27) {
      *(undefined8 *)(unaff_x29 + -0x28) = 0;
      *(undefined8 *)(unaff_x29 + -0x20) = 0;
      unaff_w27 = unaff_w25 << 1;
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
      *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
      FUN_032f341c(unaff_x29 + -0x28,unaff_w27,2,0,*(undefined8 *)(*unaff_x20 + 0x50));
      uVar6 = *(undefined8 *)(unaff_x29 + -0x28);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x20);
      uVar2 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x98);
      uVar5 = (*(code *)**(undefined8 **)(*unaff_x20 + 0x78))(unaff_x29 + -0xa0);
      (*(code *)**(undefined8 **)(*unaff_x20 + 0x110))(uVar2,uVar4,uVar6,uVar3,uVar5);
      FUN_032f3c24(unaff_x29 + -0xb0,*(undefined8 *)(*unaff_x20 + 0x118));
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar6;
      *(undefined8 *)(unaff_x29 + -0x98) = uVar3;
    }
    iVar1 = unaff_w25 + 1;
    memcpy(unaff_x19,*(void **)(unaff_x29 + -0xf0),*(size_t *)(unaff_x29 + -0xd8));
    puVar7 = *(undefined8 **)(*unaff_x20 + 0x70);
    uVar6 = *puVar7;
    *(int *)(unaff_x29 + -0x14) = unaff_w25;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
    *(void **)(unaff_x29 + -0x20) = unaff_x19;
    (*(code *)puVar7[2])(uVar6,puVar7,unaff_x29 + -0xa0,unaff_x29 + -0x28);
    unaff_x28 = *(size_t *)(unaff_x29 + -0xd8);
    lVar8 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023a6f50;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_023a6f50:
    uVar10 = (*(code *)*puVar7)();
    if ((uVar10 & 1) == 0) break;
    lVar8 = *(long *)(*unaff_x20 + 0xf8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
                    /* try { // try from 023a6f8c to 024a6fa3 has its CatchHandler @ 023a6fb8 */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 023a6e54 with catch @ 023a6f94 */
        if (*(long *)(piVar11 + -2) == lVar8) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023a6f8c with catch @ 023a6fb8
                       catch(type#2 @ 00000000) { ... } // from try @ 023a6fb0 with catch @ 023a6fb8
                        */
                    /* try { // try from 023a6fbc to 024a737f has its CatchHandler @ 023a6fbc
                       catch() { ... } // from try @ 023a6fbc with catch @ 023a6fbc
                       catch() { ... } // from try @ 023a73a4 with catch @ 023a6fbc
                       catch() { ... } // from try @ 023a74e4 with catch @ 023a6fbc
                       catch() { ... } // from try @ 023a7500 with catch @ 023a6fbc
                       catch() { ... } // from try @ 023a7528 with catch @ 023a6fbc
                       catch() { ... } // from try @ 023a7714 with catch @ 023a6fbc */
          lVar8 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_023a6fc4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
                    /* try { // try from 023a6fa4 to 024a6faf has its CatchHandler @ 023a6930 */
      } while (uVar10 != 0);
    }
                    /* try { // try from 023a6fb0 to 024a6fb7 has its CatchHandler @ 023a6fb8 */
    lVar8 = FUN_01ecb238();
LAB_023a6fc4:
    *(void **)(unaff_x29 + -0x28) = unaff_x19;
    param_2 = *(long *)(lVar8 + 8);
    unaff_w25 = iVar1;
  } while( true );
  if (unaff_x22 != (long *)0x0) {
    lVar8 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_023a7168;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_023a7168:
    (*(code *)*puVar7)();
  }
  *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa0);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x50))
            (unaff_x29 + -0xc0,iVar1,*(undefined4 *)(unaff_x29 + -0xe4),0);
  (*(code *)**(undefined8 **)(*unaff_x20 + 0x110))
            (*(undefined8 *)(unaff_x29 + -0xa0),*(undefined8 *)(unaff_x29 + -0x98),
             *(undefined8 *)(unaff_x29 + -0xc0),*(undefined8 *)(unaff_x29 + -0xb8),iVar1);
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x29 + -0xb8);
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0xc0);
  FUN_032f3c24(unaff_x29 + -0xb0,*(undefined8 *)(*unaff_x20 + 0x118));
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -200);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0xd0);
  if (*(long *)(*(long *)(unaff_x29 + -0xe0) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38));
}


