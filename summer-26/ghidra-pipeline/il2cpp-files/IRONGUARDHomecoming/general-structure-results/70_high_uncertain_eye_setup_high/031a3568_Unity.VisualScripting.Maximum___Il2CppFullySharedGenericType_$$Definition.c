/*
FUNCTION_NAME: Unity.VisualScripting.Maximum<__Il2CppFullySharedGenericType>$$Definition
ENTRY_POINT: 031a3568
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


/* WARNING: Removing unreachable block (ram,0x031a362c) */
/* WARNING: Removing unreachable block (ram,0x031a3628) */
/* WARNING: Removing unreachable block (ram,0x031a3670) */

void Unity_VisualScripting_Maximum<__Il2CppFullySharedGenericType>__Definition(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  do {
    (*in_x9)(&stack0x00000030);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031a3508 with catch @ 031a3590
                       try { // try from 031a3590 to 032a35a7 has its CatchHandler @ 031a34bc */
    FUN_031a2f3c();
    lVar2 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 031a35a8 to 032a35bf has its CatchHandler @ 031a3638 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031a34ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031a34ec:
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
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031a3564;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031a3564:
    in_x9 = (code *)*puVar1;
  } while( true );
  if (unaff_x23 != (long *)0x0) {
                    /* try { // try from 031a35c0 to 032a3627 has its CatchHandler @ 031a34bc */
    lVar2 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031a3610;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031a3610:
    (*(code *)*puVar1)();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a363c with catch @ 031a3648
                        */
                    /* try { // try from 031a364c to 032a394f has its CatchHandler @ 031a364c
                       catch() { ... } // from try @ 031a364c with catch @ 031a364c
                       catch() { ... } // from try @ 031a3a30 with catch @ 031a364c
                       catch() { ... } // from try @ 031a3af8 with catch @ 031a364c
                       catch() { ... } // from try @ 031a3ba4 with catch @ 031a364c */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


