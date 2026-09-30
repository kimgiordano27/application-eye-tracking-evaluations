/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 04f5ca10
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodePoseStateAtTime(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined4 uVar7;
  
  plVar2 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar1 = System_Runtime_Remoting_IRemotingTypeInfo_var;
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)System_Runtime_Remoting_IRemotingTypeInfo_var) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_04f5ca84;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02b7654c(plVar2,*(long *)System_Runtime_Remoting_IRemotingTypeInfo_var,4);
LAB_04f5ca84:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 04f5caa8 to 0505cbbf has its CatchHandler @ 04f5caa8
                       catch() { ... } // from try @ 04f5caa8 with catch @ 04f5caa8
                       catch() { ... } // from try @ 04f5ccb8 with catch @ 04f5caa8
                       catch() { ... } // from try @ 04f5cd84 with catch @ 04f5caa8
                       catch() { ... } // from try @ 04f5cdd4 with catch @ 04f5caa8 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04f5cae0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f5cae0:
    plVar2 = (long *)(*(code *)*puVar3)();
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04f5cb40;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)puVar1,0);
LAB_04f5cb40:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_04f5cba0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f5cba0:
      (*(code *)*puVar3)(uVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


