/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 01a4029c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__GetMrcFrameSize(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x22;
  uint unaff_w23;
  
  while (in_x10 != 0) {
    plVar5 = *(long **)(param_1 + (long)(int)unaff_w23 * 8 + 0x20);
    if (plVar5 == (long *)0x0) break;
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_01a40300;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724(plVar5,*unaff_x22,1);
LAB_01a40300:
    (*(code *)*puVar1)(plVar5,in_x10 + 0x30,puVar1[1]);
    unaff_w23 = unaff_w23 + 1;
    if (unaff_w23 == 0x1a) {
      return 1;
    }
    param_1 = *(long *)(unaff_x19 + 0x98);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    in_x10 = *(long *)(unaff_x19 + 0x78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


