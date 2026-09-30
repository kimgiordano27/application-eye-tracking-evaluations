/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$get_Value
ENTRY_POINT: 04684bac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04684ce4) */

int OVRManager_Observable<__Il2CppFullySharedGenericType>__get_Value(ushort *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *in_stack_00000018;
  int iStack000000000000002c;
  
  do {
    if ((*param_1 & 1) == 0) {
      param_2 = FUN_031c09d4();
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x30);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4(lVar2);
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04684c20;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(unaff_x20,lVar2,0);
LAB_04684c20:
    (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    unaff_w21 = unaff_w21 + 1;
    iStack000000000000002c = unaff_w21;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar2 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04684b8c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*unaff_x22,0);
LAB_04684b8c:
    uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return unaff_w21;
      }
      lVar2 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_04684c8c;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_2 = *(long *)(unaff_x19 + 0x20);
    param_1 = (ushort *)(param_2 + 0x135);
    unaff_x20 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04684ca8;
    }
  }
LAB_04684c8c:
  puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*(long *)PTR_DAT_070c2e88,0);
LAB_04684ca8:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return iStack000000000000002c;
}


