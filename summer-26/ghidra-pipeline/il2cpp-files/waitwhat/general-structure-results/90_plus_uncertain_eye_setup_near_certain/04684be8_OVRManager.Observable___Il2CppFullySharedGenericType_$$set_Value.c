/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 04684be8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04684ce4) */

int OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value
              (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *in_stack_00000018;
  int iStack000000000000002c;
  
  do {
    piVar4 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_04684c20;
      }
      in_x9 = in_x9 - 1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_031c0d08(unaff_x20,param_3,0);
LAB_04684c20:
      (*(code *)*puVar1)(unaff_x20,puVar1[1]);
      unaff_w21 = unaff_w21 + 1;
      iStack000000000000002c = unaff_w21;
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar2 = *in_stack_00000018;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_04684b8c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*unaff_x22,0);
LAB_04684b8c:
      uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
      if ((uVar3 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) {
          return unaff_w21;
        }
        lVar2 = *in_stack_00000018;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_04684c8c;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_04684c74;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      param_3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_031c09d4(param_3);
      }
      param_1 = *in_stack_00000018;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x20 = in_stack_00000018;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_04684c74:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04684ca8;
    }
  }
LAB_04684c8c:
  puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*(long *)PTR_DAT_070c2e88,0);
LAB_04684ca8:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return iStack000000000000002c;
}


