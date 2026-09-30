/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 0411007c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041101bc) */

void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>___ctor(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000078;
  
code_r0x0411007c:
  puVar2 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
                    /* try { // try from 0411008c to 042100cb has its CatchHandler @ 041100dc */
    (*(code *)*puVar2)(&stack0x00000020,unaff_x21,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    if (uVar4 == *(uint *)(lVar3 + 0x18)) {
      FUN_0410e870();
                    /* try { // try from 041100cc to 042100f3 has its CatchHandler @ 04110040 */
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0411008c with catch @ 041100dc
                        */
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
                    /* try { // try from 041100f4 to 0421010b has its CatchHandler @ 04110180 */
    }
    plVar1 = in_stack_00000078;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar3 = lVar3 + (long)(int)uVar4 * 0x20;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000058;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000050;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000068;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000060;
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *in_stack_00000078;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04110000;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000078,*unaff_x22,0);
LAB_04110000:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    unaff_x21 = in_stack_00000078;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000078 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000078;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_04110168;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000078 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    param_1 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          in_x9 = (long)*piVar6;
          goto code_r0x0411007c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(unaff_x21,lVar3,0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04110184;
    }
  }
LAB_04110168:
  puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000078,*(long *)PTR_DAT_069fbff0,0);
LAB_04110184:
  (*(code *)*puVar2)(unaff_x21,puVar2[1]);
  return;
}


