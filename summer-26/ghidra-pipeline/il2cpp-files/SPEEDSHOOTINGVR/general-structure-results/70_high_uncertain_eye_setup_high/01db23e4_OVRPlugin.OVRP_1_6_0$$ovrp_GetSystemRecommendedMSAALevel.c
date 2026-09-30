/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetSystemRecommendedMSAALevel
ENTRY_POINT: 01db23e4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db2378) */
/* WARNING: Removing unreachable block (ram,0x01db2490) */
/* WARNING: Removing unreachable block (ram,0x01db249c) */
/* WARNING: Removing unreachable block (ram,0x01db2444) */

undefined4 OVRPlugin_OVRP_1_6_0__ovrp_GetSystemRecommendedMSAALevel(ulong param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  int unaff_w20;
  undefined4 uVar6;
  long *unaff_x25;
  long *unaff_x26;
  long *in_stack_00000008;
  
  do {
    if ((param_1 & 1) == 0) {
      uVar6 = 0;
LAB_01db245c:
      FUN_01db1014();
      return uVar6;
    }
    iVar1 = thunk_FUN_01027034(0);
    if (0x1d < iVar1 - unaff_w20) {
LAB_01db2434:
      uVar6 = 1;
      goto LAB_01db245c;
    }
    FUN_01db1b64();
    if (in_stack_00000008 == (long *)0x0) {
      return 1;
    }
    FUN_01db1014();
    if (in_stack_00000008 == (long *)0x0) goto LAB_01db2434;
    lVar2 = *unaff_x25;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar2 = *unaff_x25;
    }
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 5) == '\0') {
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar2 = *in_stack_00000008;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_01db23d0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348(in_stack_00000008,*unaff_x26,0);
LAB_01db23d0:
      (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    }
    else {
      FUN_00fdc1e0(1);
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar2 = *in_stack_00000008;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_01db234c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348(in_stack_00000008,*unaff_x26,0);
LAB_01db234c:
      (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
      FUN_00fdc1e0(0);
    }
    in_stack_00000008 = (long *)0x0;
    param_1 = FUN_01012ff8();
  } while( true );
}


