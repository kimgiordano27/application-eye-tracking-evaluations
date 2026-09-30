/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ValueTuple<object,-ValueTuple<object,-int>>>
ENTRY_POINT: 023f9658
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


/* WARNING: Removing unreachable block (ram,0x023f98b4) */

void System_Array__InternalArray__ICollection_Remove<ValueTuple<object,_ValueTuple<object,_int>>>
               (void *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *plVar6;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x27;
  long unaff_x29;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023f961c with catch @ 023f9658
                       catch(type#2 @ 00000000) { ... } // from try @ 023f9650 with catch @ 023f9658
                        */
  memcpy(param_1,param_2,param_3);
                    /* try { // try from 023f965c to 024f975b has its CatchHandler @ 023f965c
                       catch() { ... } // from try @ 023f965c with catch @ 023f965c
                       catch() { ... } // from try @ 023f9810 with catch @ 023f965c
                       catch() { ... } // from try @ 023f98e8 with catch @ 023f965c
                       catch() { ... } // from try @ 023f9998 with catch @ 023f965c */
  puVar2 = (undefined8 *)unaff_x19[1];
  uVar1 = *puVar2;
  if (-1 < *(int *)(*unaff_x19 + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
  (*(code *)puVar2[2])(uVar1,puVar2,0,unaff_x29 + -0x20);
  plVar6 = *(long **)(unaff_x29 + -0x30);
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
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_023f9870;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f9870:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


