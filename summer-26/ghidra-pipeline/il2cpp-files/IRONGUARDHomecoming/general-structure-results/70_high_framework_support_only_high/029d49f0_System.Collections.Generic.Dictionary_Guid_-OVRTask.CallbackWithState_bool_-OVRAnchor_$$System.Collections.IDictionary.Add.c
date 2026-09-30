/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-OVRAnchor>>$$System.Collections.IDictionary.Add
ENTRY_POINT: 029d49f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x029d4c10) */
/* WARNING: Removing unreachable block (ram,0x029d4c60) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_OVRAnchor>>__System_Collections_IDictionary_Add
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x27;
  int unaff_w28;
  undefined1 auVar7 [16];
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
                    /* try { // try from 029d4a28 to 02ad4a33 has its CatchHandler @ 029d4cd4 */
          puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_029d4a34;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 029d4a18 to 02ad4a27 has its CatchHandler @ 029d4cc4 */
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d4a34:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_029d4c04;
      lVar2 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto LAB_029d4bdc;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
                    /* try { // try from 029d4a54 to 02ad4a5b has its CatchHandler @ 029d4cc8 */
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_029d4ab8;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 029d4a94 to 02ad4abf has its CatchHandler @ 029d4cd8 */
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d4ab8:
    auVar7 = (*(code *)*puVar1)();
    if (unaff_x23 == 0) {
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      unaff_x23 = FUN_01f08890(lVar2,4);
LAB_029d4b64:
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else if (unaff_w20 == *(uint *)(unaff_x23 + 0x18)) {
      if ((int)(unaff_w20 + unaff_w28) < 0) {
        FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910();
      }
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
                    /* try { // try from 029d4af4 to 02ad4b23 has its CatchHandler @ 029d4cdc */
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = FUN_01f08890(lVar2,unaff_w20 << 1);
                    /* try { // try from 029d4b24 to 02ad4cab has its CatchHandler @ 029d48e4 */
      FUN_0358d498(unaff_x23,0,lVar2,0,unaff_w20,0);
      unaff_x23 = lVar2;
      goto LAB_029d4b64;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    pauVar3 = (undefined1 (*) [16])(unaff_x23 + (long)(int)unaff_w20 * 0x10 + 0x20);
    *pauVar3 = auVar7;
    thunk_FUN_01f51358(pauVar3,0);
    unaff_w20 = unaff_w20 + 1;
    param_1 = *unaff_x21;
    param_3 = *unaff_x27;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_029d4bf8;
    }
  }
LAB_029d4bdc:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d4bf8:
  (*(code *)*puVar1)();
LAB_029d4c04:
  *unaff_x19 = unaff_x23;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


