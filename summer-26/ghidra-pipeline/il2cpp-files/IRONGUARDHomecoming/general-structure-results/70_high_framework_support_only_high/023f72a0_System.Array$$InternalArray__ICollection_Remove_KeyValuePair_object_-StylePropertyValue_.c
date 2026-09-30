/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<object,-StylePropertyValue>>
ENTRY_POINT: 023f72a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023f740c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<object,_StylePropertyValue>>
               (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *unaff_x19;
  size_t unaff_x21;
  void *__src;
  void *__s;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined4 unaff_w26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  uVar6 = unaff_x21 + 0xf & 0x1fffffff0;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f7298 with catch @ 023f72a8
                        */
  __src = (void *)(param_1 - uVar6);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f710c with catch @ 023f72ac
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f70d0 with catch @ 023f72b0
                        */
  __s = (void *)((long)__src - uVar6);
                    /* try { // try from 023f72c8 to 024f72cb has its CatchHandler @ 023f72e0 */
  memset(__s,0,unaff_x21);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 023f72c8 with catch @ 023f72e0 */
    thunk_FUN_01ee6d7c();
  }
  plVar1 = (long *)FUN_03910d44();
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_039109dc(plVar1[3],0);
  puVar3 = (undefined8 *)**(long **)(unaff_x27 + 0x38);
  uVar4 = *puVar3;
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w26;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar2;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x25;
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
  *(void **)(unaff_x29 + -0x18) = __src;
  (*(code *)puVar3[2])(uVar4,puVar3,0,unaff_x29 + -0x38,__src);
  memcpy(__s,__src,unaff_x21);
  lVar5 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023f73a8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar1,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f73a8:
  (*(code *)*puVar3)(plVar1,puVar3[1]);
  memcpy(__src,__s,unaff_x21);
  memcpy(unaff_x19,__src,unaff_x21);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


