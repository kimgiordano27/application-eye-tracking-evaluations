/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<LinkInfo>
ENTRY_POINT: 023fb548
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023fb72c) */

void System_Array__InternalArray__ICollection_Remove<LinkInfo>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *plVar8;
  long unaff_x29;
  
  plVar8 = *(long **)(unaff_x27 + 0xe08);
  do {
    lVar4 = *unaff_x19;
                    /* try { // try from 023fb550 to 024fb557 has its CatchHandler @ 023fb558 */
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fb51c with catch @ 023fb558
                       catch(type#2 @ 00000000) { ... } // from try @ 023fb550 with catch @ 023fb558
                        */
    if (uVar6 != 0) {
                    /* try { // try from 023fb55c to 024fb6ef has its CatchHandler @ 023fb55c
                       catch() { ... } // from try @ 023fb55c with catch @ 023fb55c
                       catch() { ... } // from try @ 023fb79c with catch @ 023fb55c
                       catch() { ... } // from try @ 023fb7f4 with catch @ 023fb55c
                       catch() { ... } // from try @ 023fb918 with catch @ 023fb55c
                       catch() { ... } // from try @ 023fb9c8 with catch @ 023fb55c */
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar8) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023fb598;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023fb598:
    uVar6 = (*(code *)*puVar1)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_023fb6ec;
      lVar4 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_023fb6c4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_023fb60c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238();
LAB_023fb60c:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar1 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x24;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar1;
    (*(code *)puVar3[2])(uVar2);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_023fb6e0;
    }
  }
LAB_023fb6c4:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023fb6e0:
  (*(code *)*puVar1)();
LAB_023fb6ec:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


