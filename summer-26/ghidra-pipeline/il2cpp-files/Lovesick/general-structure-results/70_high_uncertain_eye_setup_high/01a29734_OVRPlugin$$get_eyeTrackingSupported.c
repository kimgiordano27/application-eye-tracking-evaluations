/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 01a29734
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


float OVRPlugin__get_eyeTrackingSupported(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float unaff_s10;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    plVar5 = *(long **)(unaff_x19 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_01a29878;
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_01a29840;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724(plVar5,*unaff_x21,4);
LAB_01a29840:
    in_stack_00000000 = (float)(*(code *)*puVar1)(plVar5,puVar1[1]);
    in_stack_00000000 = unaff_s10 * in_stack_00000000;
  }
  else {
    fVar6 = (float)FUN_02699088(in_stack_00000008._4_4_,uStack0000000000000010,
                                uStack0000000000000014,in_stack_00000018,0);
    plVar5 = *(long **)(unaff_x19 + 0x20);
    if (plVar5 == (long *)0x0) {
LAB_01a29878:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_01a29808;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_00d59724(plVar5,*unaff_x21,4);
LAB_01a29808:
    fVar7 = (float)(*(code *)*puVar1)(plVar5,puVar1[1]);
    in_stack_00000000 = in_stack_00000000 + fVar6 * fVar7;
  }
  return in_stack_00000000;
}


