/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 02e04e0c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e04f64) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_x9;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    if (in_x9 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02e04e4c;
        }
        in_x9 = in_x9 - 1;
        piVar5 = piVar5 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_01c72498();
LAB_02e04e4c:
                    /* try { // try from 02e04e58 to 02f04e5b has its CatchHandler @ 02e04e7c */
    (*(code *)*puVar1)(&stack0x00000020);
                    /* try { // try from 02e04e5c to 02f04e63 has its CatchHandler @ 02e04e80 */
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
                    /* try { // try from 02e04e64 to 02f04e67 has its CatchHandler @ 02e04bbc */
    lVar2 = *(long *)(unaff_x21 + 0x10);
                    /* try { // try from 02e04e68 to 02f04e6b has its CatchHandler @ 02e04e74 */
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
                    /* try { // try from 02e04e6c to 02f04e9f has its CatchHandler @ 02e04bbc */
    uVar3 = *(uint *)(unaff_x21 + 0x18);
                    /* catch(type#1 @ 04025298) { ... } // from try @ 02e04e68 with catch @ 02e04e74
                        */
    if (uVar3 == *(uint *)(lVar2 + 0x18)) {
      FUN_02e03548();
      lVar2 = *(long *)(unaff_x21 + 0x10);
      uVar3 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar2 = lVar2 + (long)(int)uVar3 * 0x20;
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar2 + 0x38) = in_stack_00000058;
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000050;
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02e04dd4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01c72498();
LAB_02e04dd4:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01c72394(param_3);
    }
    param_1 = *unaff_x19;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02e04f2c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01c72498();
LAB_02e04f2c:
    (*(code *)*puVar1)();
  }
  return;
}


