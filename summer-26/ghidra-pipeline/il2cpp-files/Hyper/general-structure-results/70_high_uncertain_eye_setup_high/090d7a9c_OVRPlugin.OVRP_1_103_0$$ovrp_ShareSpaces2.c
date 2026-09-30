/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_ShareSpaces2
ENTRY_POINT: 090d7a9c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_103_0__ovrp_ShareSpaces2(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  
  do {
    lVar2 = *unaff_x20;
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
    puVar1 = (undefined8 *)FUN_04980e68(unaff_x20,*unaff_x21,1);
LAB_090d7aec:
    (*(code *)*puVar1)(unaff_x20,unaff_x23 + 0x30,puVar1[1]);
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == 0x1a) {
      return 1;
    }
    lVar2 = *(long *)(unaff_x19 + 0xa0);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    unaff_x23 = *(long *)(unaff_x19 + 0x80);
    if (unaff_x23 == 0) break;
    unaff_x20 = *(long **)(lVar2 + unaff_x22 * 8 + 0x20);
  } while (unaff_x20 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


