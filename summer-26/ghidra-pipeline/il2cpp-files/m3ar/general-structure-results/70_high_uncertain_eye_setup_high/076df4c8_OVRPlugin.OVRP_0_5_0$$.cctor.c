/*
FUNCTION_NAME: OVRPlugin.OVRP_0_5_0$$.cctor
ENTRY_POINT: 076df4c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x076df638) */

void OVRPlugin_OVRP_0_5_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000018;
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_076df504;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_0406ae20(unaff_x20,param_3,0);
LAB_076df504:
      plVar2 = (long *)(*(code *)*puVar1)(unaff_x20,puVar1[1]);
      uVar3 = thunk_FUN_0406deb8(*unaff_x24);
      if ((unaff_x19 == 0) || (FUN_0532a918(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto OVRPlugin_OVRP_0_1_3___cctor;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(plVar2,*unaff_x25,0);
OVRPlugin_OVRP_0_1_3___cctor:
      (*(code *)*puVar1)(plVar2,uVar3,puVar1[1]);
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar4 = *in_stack_00000018;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076df4a0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x22,0);
LAB_076df4a0:
      uVar5 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
      if ((uVar5 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) {
          return;
        }
        lVar4 = *in_stack_00000018;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_076df5e4;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_076df5cc;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      param_1 = *in_stack_00000018;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x20 = in_stack_00000018;
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_076df5cc:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076df600;
    }
  }
LAB_076df5e4:
  puVar1 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076df600:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


