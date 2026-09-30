/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<StyleSheetCache.SheetHandleKey,-object>>
ENTRY_POINT: 023f7eb8
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


/* WARNING: Removing unreachable block (ram,0x023f804c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<StyleSheetCache_SheetHandleKey,_object>>
               (void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  
  uVar1 = FUN_03579868();
                    /* try { // try from 023f7ed0 to 024f7ed3 has its CatchHandler @ 023f7edc */
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
      == 0) {
                    /* try { // try from 023f7ed4 to 024f7efb has its CatchHandler @ 023f7b50 */
    thunk_FUN_01ee6d7c();
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f7ed0 with catch @ 023f7edc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f7da8 with catch @ 023f7ee0
                        */
  plVar2 = (long *)FUN_0390bc14(uVar1,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f7d6c with catch @ 023f7ee4
                        */
  lVar3 = *(long *)(*(long *)(unaff_x23 + 0x38) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
                    /* try { // try from 023f7efc to 024f7eff has its CatchHandler @ 023f7f18 */
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
     (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
    FUN_0390f94c(plVar2);
  }
  else {
    FUN_02710938(plVar2);
  }
  lVar3 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 8) * 0x10 + 0x138);
        goto LAB_023f7f8c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_023f7f8c:
  (*(code *)*puVar4)();
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *unaff_x20 = *(undefined8 *)(unaff_x19[3] + 0x18);
  thunk_FUN_01f51358();
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023f8008;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_023f8008:
  (*(code *)*puVar4)();
  return;
}


