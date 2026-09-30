/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameSize
ENTRY_POINT: 01a40218
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameSize(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x22;
  uint uVar7;
  
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == **(long **)(in_x11 + 0x9c8)) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_01a40270;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_01a40270:
  (*(code *)*puVar1)();
  uVar7 = 0;
  while (lVar2 = *(long *)(unaff_x19 + 0x98), lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar4 = *(long *)(unaff_x19 + 0x78);
    if (lVar4 == 0) break;
    plVar6 = *(long **)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
    if (plVar6 == (long *)0x0) break;
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_01a40300;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x22,1);
LAB_01a40300:
    (*(code *)*puVar1)(plVar6,lVar4 + 0x30,puVar1[1]);
    uVar7 = uVar7 + 1;
    if (uVar7 == 0x1a) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


