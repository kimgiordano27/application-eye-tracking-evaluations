/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<object,-StyleComplexSelector.PseudoStateData>>
ENTRY_POINT: 023f7690
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f785c) */
/* WARNING: Removing unreachable block (ram,0x023f7788) */
/* WARNING: Removing unreachable block (ram,0x023f7868) */
/* WARNING: Removing unreachable block (ram,0x023f7804) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<object,_StyleComplexSelector_PseudoStateData>>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  long *plVar6;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  long unaff_x28;
  long unaff_x29;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
                    /* try { // try from 023f76a4 to 024f76af has its CatchHandler @ 023f7360 */
      puVar1 = (undefined8 *)FUN_01ecb238();
      goto LAB_023f76c0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
                    /* try { // try from 023f76b0 to 024f76b7 has its CatchHandler @ 023f76b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023f767c with catch @ 023f76b8
                       catch(type#2 @ 00000000) { ... } // from try @ 023f76b0 with catch @ 023f76b8
                        */
                    /* try { // try from 023f76bc to 024f783f has its CatchHandler @ 023f76bc
                       catch() { ... } // from try @ 023f76bc with catch @ 023f76bc
                       catch() { ... } // from try @ 023f78ec with catch @ 023f76bc
                       catch() { ... } // from try @ 023f7944 with catch @ 023f76bc
                       catch() { ... } // from try @ 023f7a88 with catch @ 023f76bc
                       catch() { ... } // from try @ 023f7b38 with catch @ 023f76bc */
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 9) * 0x10 + 0x138);
LAB_023f76c0:
  (*(code *)*puVar1)();
  puVar1 = (undefined8 *)**(undefined8 **)(unaff_x25 + 0x38);
  uVar2 = *puVar1;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
  *(void **)(unaff_x29 + -0x10) = unaff_x21;
  (*(code *)puVar1[2])(uVar2,puVar1,0,unaff_x29 + -0x20);
  memcpy(unaff_x22,unaff_x21,unaff_x20);
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_023f776c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f776c:
    (*(code *)*puVar1)();
  }
  plVar6 = *(long **)(unaff_x29 + -0x28);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_023f77ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f77ec:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


