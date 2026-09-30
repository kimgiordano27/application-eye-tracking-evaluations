/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$ThrowInvalidOperationIfDefault
ENTRY_POINT: 065ab41c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x065ab544) */

long System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__ThrowInvalidOperationIfDefault
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000010;
  long in_stack_00000028;
  
code_r0x065ab41c:
                    /* try { // try from 065ab41c to 066ab41f has its CatchHandler @ 065ab428 */
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_065ab410;
LAB_065ab428:
                    /* catch() { ... } // from try @ 065ab41c with catch @ 065ab428 */
                    /* try { // try from 065ab42c to 066ab433 has its CatchHandler @ 065ab450 */
  puVar2 = (undefined8 *)FUN_04980e68(unaff_x22,param_3,0);
  do {
    uVar1 = (*(code *)*puVar2)(unaff_x22,puVar2[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar3 = (long)(int)unaff_w20;
    unaff_w20 = unaff_w20 + 1;
    *(undefined4 *)(unaff_x21 + lVar3 * 4 + 0x20) = uVar1;
    if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *in_stack_00000010;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_065ab3b0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000010,*unaff_x23,0);
LAB_065ab3b0:
    uVar4 = (*(code *)*puVar2)(in_stack_00000010,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000010 == (long *)0x0) goto LAB_065ab4e8;
      lVar3 = *in_stack_00000010;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_065ab4c0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    param_3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x100);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_04980b34(param_3);
    }
    param_1 = *in_stack_00000010;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x22 = in_stack_00000010;
    if (in_x9 == 0) goto LAB_065ab428;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_065ab410:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x065ab41c;
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_065ab4dc;
    }
  }
LAB_065ab4c0:
  puVar2 = (undefined8 *)FUN_04980e68(in_stack_00000010,*(long *)PTR_DAT_0ac09b90,0);
LAB_065ab4dc:
  (*(code *)*puVar2)(in_stack_00000010,puVar2[1]);
LAB_065ab4e8:
  in_stack_00000028 = 0;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_04980b34();
  }
  in_stack_00000028 = unaff_x21;
  thunk_FUN_049ee3d8(&stack0x00000028);
  return in_stack_00000028;
}


