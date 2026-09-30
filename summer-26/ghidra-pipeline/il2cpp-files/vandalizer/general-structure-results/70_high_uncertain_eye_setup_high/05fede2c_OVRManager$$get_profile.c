/*
FUNCTION_NAME: OVRManager$$get_profile
ENTRY_POINT: 05fede2c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05fedf60) */

undefined8 OVRManager__get_profile(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *piVar4;
  undefined8 *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000080;
  
  do {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_05feddc0;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05feddc0:
      (*(code *)*puVar1)();
      FUN_05fee418();
      lVar2 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_05fede0c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05fede0c:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_05fedef0;
        lVar2 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_05fedec8;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_05fedeb0;
      }
      param_1 = *unaff_x21;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_05fedeb0:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_05fedee4;
    }
  }
LAB_05fedec8:
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05fedee4:
  (*(code *)*puVar1)();
LAB_05fedef0:
  memcpy(&stack0x00000000,&stack0x00000060,0x58);
  unaff_x19[1] = in_stack_00000030;
  *unaff_x19 = in_stack_00000028;
  unaff_x19[3] = in_stack_00000040;
  unaff_x19[2] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000048;
  thunk_FUN_0329bf60();
  return in_stack_00000080;
}


