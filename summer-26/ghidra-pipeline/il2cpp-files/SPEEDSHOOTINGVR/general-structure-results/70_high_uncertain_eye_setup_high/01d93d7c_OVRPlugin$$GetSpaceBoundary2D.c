/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 01d93d7c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetSpaceBoundary2D(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  FUN_01cd0fe8();
  if (unaff_x19 != (long *)0x0) {
    uVar1 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar1 & 1) == 0) {
      lVar4 = *(long *)PTR_DAT_02359970;
      lVar6 = *(long *)(lVar4 + 0x38);
      if (lVar6 == 0) {
        FUN_0103c2a0(lVar4);
        lVar6 = *(long *)(lVar4 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar6 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244();
      }
      plVar2 = (long *)**(long **)(lVar6 + 0xb8);
    }
    else {
      plVar2 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353960,1);
      lVar6 = *unaff_x21;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x20) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01d93e60;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348();
LAB_01d93e60:
      lVar6 = (*(code *)*puVar3)();
      if (plVar2 == (long *)0x0) goto LAB_01d9400c;
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_0103ffe0(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar5,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar2[4] = lVar6;
      thunk_FUN_0106e12c(plVar2 + 4,lVar6);
    }
    return plVar2;
  }
LAB_01d9400c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


