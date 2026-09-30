/*
FUNCTION_NAME: OVRPlugin$$SetDesiredEyeTextureFormat
ENTRY_POINT: 076ca0e0
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076ca218) */

void OVRPlugin__SetDesiredEyeTextureFormat(code *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *in_stack_00000018;
  
  do {
    (*param_1)();
                    /* try { // try from 076ca0ec to 077ca113 has its CatchHandler @ 076ca60c */
    if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    FUN_07067250(0,0,0,0,*(long *)(unaff_x19 + 0x68),unaff_x21,*unaff_x28);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076ca00c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x25,0);
LAB_076ca00c:
    uVar5 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto code_r0x076ca180;
                    /* try { // try from 076ca124 to 077ca127 has its CatchHandler @ 076ca604 */
      lVar4 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_076ca154;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076ca070;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x26,0);
LAB_076ca070:
    unaff_x21 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_076ca0dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076ca0dc:
    param_1 = (code *)*puVar2;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
                    /* try { // try from 076ca13c to 077ca147 has its CatchHandler @ 076ca5f0 */
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076ca170;
    }
  }
LAB_076ca154:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x24,0);
LAB_076ca170:
  (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
code_r0x076ca180:
  uVar1 = FUN_0858dd10();
                    /* try { // try from 076ca194 to 077ca1ab has its CatchHandler @ 076ca600 */
  uVar3 = thunk_FUN_0406deb8(*unaff_x23);
  FUN_076c6a74(uVar3,uVar1);
  lVar4 = *(long *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar1 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  *(undefined4 *)(unaff_x19 + 0x88) = uVar1;
  FUN_076515f0();
  return;
}


