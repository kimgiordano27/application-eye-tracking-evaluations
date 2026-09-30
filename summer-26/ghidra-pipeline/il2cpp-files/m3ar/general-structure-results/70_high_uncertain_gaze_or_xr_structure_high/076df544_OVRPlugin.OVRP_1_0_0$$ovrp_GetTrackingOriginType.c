/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingOriginType
ENTRY_POINT: 076df544
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x076df638) */

void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000018;
  
  do {
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_3) {
                    /* try { // try from 076df580 to 077df59b has its CatchHandler @ 076df6b8 */
          puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_0_1_3___cctor;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 076df56c to 077df573 has its CatchHandler @ 076df6bc */
    puVar1 = (undefined8 *)FUN_0406ae20(unaff_x20,param_3,0);
OVRPlugin_OVRP_0_1_3___cctor:
    (*(code *)*puVar1)(unaff_x20,unaff_x21,puVar1[1]);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_076df4a0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x22,0);
LAB_076df4a0:
    uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_076df5e4;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_076df504;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x23,0);
LAB_076df504:
    unaff_x20 = (long *)(*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    unaff_x21 = thunk_FUN_0406deb8(*unaff_x24);
    if ((unaff_x19 == 0) || (FUN_0532a918(), unaff_x20 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x25;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_076df600;
    }
  }
LAB_076df5e4:
  puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076df600:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


