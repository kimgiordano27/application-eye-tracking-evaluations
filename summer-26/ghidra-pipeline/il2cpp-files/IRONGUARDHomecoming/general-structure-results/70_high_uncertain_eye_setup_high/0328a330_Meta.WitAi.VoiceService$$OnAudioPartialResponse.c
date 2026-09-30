/*
FUNCTION_NAME: Meta.WitAi.VoiceService$$OnAudioPartialResponse
ENTRY_POINT: 0328a330
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0328a4b8) */
/* WARNING: Removing unreachable block (ram,0x0328a4b4) */
/* WARNING: Removing unreachable block (ram,0x0328a4fc) */

void Meta_WitAi_VoiceService__OnAudioPartialResponse(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0328a378;
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0328a2e4 with catch @ 0328a350
                       try { // try from 0328a350 to 0338a367 has its CatchHandler @ 0328a298 */
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
                    /* try { // try from 0328a368 to 0338a37f has its CatchHandler @ 0328a3f8 */
LAB_0328a378:
                    /* try { // try from 0328a380 to 0338a3e7 has its CatchHandler @ 0328a298 */
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
                    /* try { // try from 0328a3e8 to 0338a3f7 has its CatchHandler @ 0328a3f8 */
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0328a32c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0328a32c:
                    /* catch() { ... } // from try @ 0328a368 with catch @ 0328a3f8
                       catch() { ... } // from try @ 0328a3e8 with catch @ 0328a3f8 */
                    /* try { // try from 0328a3fc to 0338a3ff has its CatchHandler @ 0328a408 */
    (*(code *)*puVar1)(&stack0x00000020);
                    /* try { // try from 0328a400 to 0338a40b has its CatchHandler @ 0328a298 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0328a3fc with catch @ 0328a408
                        */
    FUN_03289db8();
    param_1 = *unaff_x23;
  } while( true );
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0328a49c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0328a49c:
    (*(code *)*puVar1)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


