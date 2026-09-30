/*
FUNCTION_NAME: OVRPlugin$$GetFaceStateInternal
ENTRY_POINT: 033ce424
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetFaceStateInternal(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long *plVar5;
  long *plVar6;
  long *unaff_x23;
  uint uVar7;
  
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*unaff_x23);
  }
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    plVar5 = *(long **)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar6 = *(long **)(param_1 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_033ce58c;
        bVar1 = *(byte *)(*unaff_x23 + 0x130);
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plVar6);
        }
        uVar3 = FUN_033ab798(plVar6,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
          if ((uVar3 & 1) != 0) {
            uVar3 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
            if ((uVar3 & 0xc) == 0) goto LAB_033ce4e4;
          }
          plVar5 = plVar6;
        }
LAB_033ce4e4:
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar2);
    }
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar4 = *unaff_x23;
    }
    if (plVar5 == *(long **)(*(long *)(lVar4 + 0xb8) + 0x10)) {
      uVar2 = (**(code **)(*unaff_x19 + 0x478))();
      if ((uVar2 >> 3 & 1) != 0) {
        lVar4 = *unaff_x23;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar4 = *unaff_x23;
        }
        plVar5 = (long *)**(undefined8 **)(lVar4 + 0xb8);
      }
    }
    return plVar5;
  }
LAB_033ce58c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


