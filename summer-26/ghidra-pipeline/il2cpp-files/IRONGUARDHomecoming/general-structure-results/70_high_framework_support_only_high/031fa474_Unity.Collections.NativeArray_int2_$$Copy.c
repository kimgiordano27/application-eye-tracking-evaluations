/*
FUNCTION_NAME: Unity.Collections.NativeArray<int2>$$Copy
ENTRY_POINT: 031fa474
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031fa5dc) */
/* WARNING: Removing unreachable block (ram,0x031fa5d8) */
/* WARNING: Removing unreachable block (ram,0x031fa620) */

void Unity_Collections_NativeArray<int2>__Copy(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x031fa474:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
                    /* try { // try from 031fa47c to 032fa49f has its CatchHandler @ 031fa300 */
  if (in_x9 != 0) goto LAB_031fa468;
LAB_031fa480:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
                    /* try { // try from 031fa4a0 to 032fa4b7 has its CatchHandler @ 031fa550 */
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_031fa5cc;
      lVar3 = *unaff_x23;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_031fa5a4;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* try { // try from 031fa4b8 to 032fa4cb has its CatchHandler @ 031fa300 */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
                    /* try { // try from 031fa4cc to 032fa4e3 has its CatchHandler @ 031fa550 */
    lVar4 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031fa450;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031fa450:
    (*(code *)*puVar1)(&stack0x00000020);
    FUN_031f9edc();
    param_1 = *unaff_x23;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_031fa480;
                    /* try { // try from 031fa464 to 032fa47b has its CatchHandler @ 031fa550 */
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_031fa468:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x031fa474;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_031fa5c0;
    }
  }
LAB_031fa5a4:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031fa5c0:
  (*(code *)*puVar1)();
LAB_031fa5cc:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


