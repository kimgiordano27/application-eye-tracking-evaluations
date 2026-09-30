/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 05758050
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057581a4) */
/* WARNING: Removing unreachable block (ram,0x057581d0) */
/* WARNING: Removing unreachable block (ram,0x05758210) */

void OVRPlugin__GetFaceState(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  
  do {
    if (in_x9 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_05758094;
        }
        in_x9 = in_x9 - 1;
        piVar6 = piVar6 + 4;
      } while (in_x9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_05758094:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
      if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    bVar1 = *(byte *)(*unaff_x27 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(plVar3);
    }
    if (unaff_x22 != 0) {
      FUN_056fd0d8();
    }
    (**(code **)(*unaff_x19 + 0x5d8))();
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*unaff_x23 + 0x178))();
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05758034;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_05758034:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) break;
    param_1 = *unaff_x20;
    param_3 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  plVar3 = (long *)thunk_FUN_02ef170c();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0575818c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x25,0);
LAB_0575818c:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x057581cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x588))();
  return;
}


