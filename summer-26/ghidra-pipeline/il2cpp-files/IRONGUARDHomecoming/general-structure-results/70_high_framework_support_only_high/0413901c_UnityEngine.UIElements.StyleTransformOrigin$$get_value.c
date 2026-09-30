/*
FUNCTION_NAME: UnityEngine.UIElements.StyleTransformOrigin$$get_value
ENTRY_POINT: 0413901c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x041390b8) */
/* WARNING: Removing unreachable block (ram,0x041390e0) */
/* WARNING: Removing unreachable block (ram,0x041390f4) */

void UnityEngine_UIElements_StyleTransformOrigin__get_value(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x9;
  int *piVar4;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
code_r0x0413901c:
  puVar1 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
                    /* try { // try from 04139028 to 04239053 has its CatchHandler @ 04138ff0 */
    (*(code *)*puVar1)();
    FUN_04138578();
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0413900c with catch @ 0413903c
                        */
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04138fc8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_04138fc8:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_041390ac;
      lVar2 = *unaff_x21;
                    /* try { // try from 04139054 to 04239057 has its CatchHandler @ 04139084 */
                    /* try { // try from 04139058 to 04239087 has its CatchHandler @ 04138ff0 */
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_04139084;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          in_x9 = (long)*piVar4;
          goto code_r0x0413901c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 04139094 to 0423909f has its CatchHandler @ 04138ff0 */
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_041390a0;
    }
  }
LAB_04139084:
                    /* catch() { ... } // from try @ 04139054 with catch @ 04139084 */
                    /* try { // try from 04139088 to 04239093 has its CatchHandler @ 041390a8 */
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_041390a0:
  (*(code *)*puVar1)();
LAB_041390ac:
  if ((unaff_x20 & 1) != 0) {
    FUN_04138518();
  }
  FUN_0422b58c();
  return;
}


