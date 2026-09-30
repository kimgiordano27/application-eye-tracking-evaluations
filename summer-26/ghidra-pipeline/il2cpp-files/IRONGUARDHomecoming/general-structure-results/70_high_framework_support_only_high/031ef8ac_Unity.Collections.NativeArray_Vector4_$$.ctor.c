/*
FUNCTION_NAME: Unity.Collections.NativeArray<Vector4>$$.ctor
ENTRY_POINT: 031ef8ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031ef9b4) */
/* WARNING: Removing unreachable block (ram,0x031ef9b0) */
/* WARNING: Removing unreachable block (ram,0x031ef9f4) */

void Unity_Collections_NativeArray<Vector4>___ctor(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    param_2 = FUN_01ecaf44(param_2);
    do {
      lVar2 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
                    /* try { // try from 031ef8d0 to 032ef8f7 has its CatchHandler @ 031efab4 */
          if (*(long *)(piVar4 + -2) == param_2) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_031ef83c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031ef83c:
      (*(code *)*puVar1)();
                    /* try { // try from 031ef910 to 032ef973 has its CatchHandler @ 031efabc */
      FUN_031ef324();
      lVar2 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_031ef888;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031ef888:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x23 == (long *)0x0) goto LAB_031ef9a4;
        lVar2 = *unaff_x23;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_031ef97c;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_031ef964;
      }
      param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    } while ((*(byte *)(param_2 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_031ef964:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_031ef998;
    }
  }
LAB_031ef97c:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031ef998:
  (*(code *)*puVar1)();
LAB_031ef9a4:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


