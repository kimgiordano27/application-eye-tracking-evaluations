/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetVersion
ENTRY_POINT: 076df7f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076df998) */

void OVRPlugin_OVRP_1_1_0___ovrp_GetVersion(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *in_stack_00000018;
  
code_r0x076df7f4:
  puVar2 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(unaff_x20,puVar2[1]), (uVar1 & 1) != 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
                    /* try { // try from 076df824 to 077df857 has its CatchHandler @ 076df824
                       catch() { ... } // from try @ 076df824 with catch @ 076df824
                       catch() { ... } // from try @ 076df974 with catch @ 076df824
                       catch() { ... } // from try @ 076dfa54 with catch @ 076df824
                       catch() { ... } // from try @ 076dfab4 with catch @ 076df824
                       catch() { ... } // from try @ 076dfb54 with catch @ 076df824 */
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076df860;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x23,0);
LAB_076df860:
    plVar3 = (long *)(*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    uVar4 = thunk_FUN_0406deb8(*unaff_x24);
    if ((unaff_x19 == 0) || (FUN_0532a918(), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *plVar3;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_076df7a8;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar3,*unaff_x25,1);
LAB_076df7a8:
    (*(code *)*puVar2)(plVar3,uVar4,puVar2[1]);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_1 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x20 = in_stack_00000018;
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          in_x9 = (long)*piVar6;
          goto code_r0x076df7f4;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x22,0);
  }
  if (in_stack_00000018 != (long *)0x0) {
    lVar5 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076df960;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076df960:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


