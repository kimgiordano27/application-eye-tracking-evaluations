/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StopColocationDiscovery
ENTRY_POINT: 090d7a20
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_103_0__ovrp_StopColocationDiscovery(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x21;
  ulong uVar6;
  long lVar7;
  
  piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
      goto LAB_090d7a60;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_090d7a60:
  (*(code *)*puVar1)();
  uVar6 = 0;
  while (lVar2 = *(long *)(unaff_x19 + 0xa0), lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar7 = *(long *)(unaff_x19 + 0x80);
    if (lVar7 == 0) break;
    plVar5 = *(long **)(lVar2 + uVar6 * 8 + 0x20);
    if (plVar5 == (long *)0x0) break;
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_090d7aec;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar5,*unaff_x21,1);
LAB_090d7aec:
    (*(code *)*puVar1)(plVar5,lVar7 + 0x30,puVar1[1]);
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x1a) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


