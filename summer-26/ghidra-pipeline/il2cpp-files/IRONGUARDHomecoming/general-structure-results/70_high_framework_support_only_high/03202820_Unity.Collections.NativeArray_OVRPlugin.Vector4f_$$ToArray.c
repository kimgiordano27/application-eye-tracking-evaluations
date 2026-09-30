/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 03202820
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03202998) */
/* WARNING: Removing unreachable block (ram,0x03202994) */
/* WARNING: Removing unreachable block (ram,0x032029d8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__ToArray(void)

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
  
  do {
    lVar2 = *unaff_x23;
                    /* try { // try from 03202824 to 0330287b has its CatchHandler @ 0320288c */
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0320286c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0320286c:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
                    /* try { // try from 0320287c to 033028a3 has its CatchHandler @ 032027f8 */
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03202824 with catch @ 0320288c
                        */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 032028a4 to 033028bb has its CatchHandler @ 0320298c */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_032028e4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_032028e4:
    (*(code *)*puVar1)();
    FUN_03202308();
  } while( true );
                    /* try { // try from 03202920 to 0330297b has its CatchHandler @ 032027f8 */
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0320297c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0320297c:
                    /* try { // try from 0320297c to 0330298b has its CatchHandler @ 0320298c */
    (*(code *)*puVar1)();
  }
                    /* catch() { ... } // from try @ 032028a4 with catch @ 0320298c
                       catch() { ... } // from try @ 032028dc with catch @ 0320298c
                       catch() { ... } // from try @ 03202908 with catch @ 0320298c
                       catch() { ... } // from try @ 0320297c with catch @ 0320298c */
                    /* try { // try from 03202990 to 03302993 has its CatchHandler @ 0320299c */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


