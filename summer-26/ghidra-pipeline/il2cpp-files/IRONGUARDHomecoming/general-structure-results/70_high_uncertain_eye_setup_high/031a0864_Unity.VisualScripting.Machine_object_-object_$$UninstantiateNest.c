/*
FUNCTION_NAME: Unity.VisualScripting.Machine<object,-object>$$UninstantiateNest
ENTRY_POINT: 031a0864
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031a0954) */
/* WARNING: Removing unreachable block (ram,0x031a0950) */
/* WARNING: Removing unreachable block (ram,0x031a0998) */

void Unity_VisualScripting_Machine<object,_object>__UninstantiateNest
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
code_r0x031a0864:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_031a0858;
LAB_031a0870:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031a0814 with catch @ 031a0894
                       try { // try from 031a0894 to 032a08ab has its CatchHandler @ 031a07c8 */
    (*(code *)*puVar1)(&stack0x00000030);
                    /* try { // try from 031a08ac to 032a08c3 has its CatchHandler @ 031a093c */
                    /* try { // try from 031a08c4 to 032a092b has its CatchHandler @ 031a07c8 */
    FUN_031a0264();
                    /* try { // try from 031a07c8 to 032a0813 has its CatchHandler @ 031a07c8
                       catch() { ... } // from try @ 031a07c8 with catch @ 031a07c8
                       catch() { ... } // from try @ 031a0894 with catch @ 031a07c8
                       catch() { ... } // from try @ 031a08c4 with catch @ 031a07c8
                       catch() { ... } // from try @ 031a0944 with catch @ 031a07c8 */
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_031a0814;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031a0814:
                    /* try { // try from 031a0814 to 032a0893 has its CatchHandler @ 031a0894 */
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_031a0944;
      lVar2 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_031a091c;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_031a0870;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_031a0858:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x031a0864;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* try { // try from 031a092c to 032a093b has its CatchHandler @ 031a093c */
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_031a0938;
    }
  }
LAB_031a091c:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031a0938:
                    /* catch() { ... } // from try @ 031a08ac with catch @ 031a093c
                       catch() { ... } // from try @ 031a092c with catch @ 031a093c */
                    /* try { // try from 031a0940 to 032a0943 has its CatchHandler @ 031a094c */
  (*(code *)*puVar1)();
LAB_031a0944:
                    /* try { // try from 031a0944 to 032a094f has its CatchHandler @ 031a07c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a0940 with catch @ 031a094c
                        */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


