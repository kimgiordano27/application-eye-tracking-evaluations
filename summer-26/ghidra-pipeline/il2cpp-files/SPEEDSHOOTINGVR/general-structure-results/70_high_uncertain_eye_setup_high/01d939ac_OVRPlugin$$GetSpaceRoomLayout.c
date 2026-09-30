/*
FUNCTION_NAME: OVRPlugin$$GetSpaceRoomLayout
ENTRY_POINT: 01d939ac
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetSpaceRoomLayout(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  puVar1 = (undefined8 *)FUN_0103c348();
  lVar2 = (*(code *)*puVar1)();
  if ((lVar2 != 0) && (FUN_01cd0fe8(lVar2,0), unaff_x19 != (long *)0x0)) {
    uVar3 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)PTR_DAT_02359970;
      lVar2 = *(long *)(lVar5 + 0x38);
      if (lVar2 == 0) {
        FUN_0103c2a0(lVar5);
        lVar2 = *(long *)(lVar5 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      lVar2 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0103c244();
      }
      plVar4 = (long *)**(long **)(lVar2 + 0xb8);
    }
    else {
      plVar4 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353960,1);
      lVar2 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x20) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01d93e60;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0103c348();
LAB_01d93e60:
      lVar2 = (*(code *)*puVar1)();
      if (plVar4 == (long *)0x0) goto LAB_01d9400c;
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_0103ffe0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
        uVar6 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar6,0);
      }
      if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      plVar4[4] = lVar2;
      thunk_FUN_0106e12c(plVar4 + 4,lVar2);
    }
    return plVar4;
  }
LAB_01d9400c:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


