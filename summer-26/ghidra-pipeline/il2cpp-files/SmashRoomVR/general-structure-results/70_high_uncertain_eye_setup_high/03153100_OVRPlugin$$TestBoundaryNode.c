/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryNode
ENTRY_POINT: 03153100
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__TestBoundaryNode(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long in_x9;
  long *in_x10;
  int *piVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03153144;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_03153144:
  uVar3 = (*(code *)*puVar2)();
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802b8);
  FUN_028b7004();
  uVar3 = FUN_01ebc520(uVar3,uVar4,*(undefined8 *)PTR_DAT_03d802a8);
  puVar1 = PTR_DAT_03d802f0;
  lVar6 = *(long *)PTR_DAT_03d802f0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar6);
    lVar6 = *(long *)puVar1;
  }
  lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
      lVar6 = *(long *)puVar1;
    }
    uVar4 = **(undefined8 **)(lVar6 + 0xb8);
    lVar8 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802c0);
    FUN_028b6724(lVar8,uVar4,*(undefined8 *)PTR_DAT_03d802e8,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar5 = lVar8;
    thunk_FUN_01b4f09c(plVar5,lVar8);
  }
  FUN_01ec7bf0(uVar3,lVar8,*(undefined8 *)PTR_DAT_03d802b0);
  if (unaff_x21 != 0) {
    FUN_02b59bf0();
    lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802e0);
    FUN_03081994(lVar6,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = unaff_x19;
      thunk_FUN_01b4f09c();
      *(long *)(lVar6 + 0x18) = unaff_x21;
      thunk_FUN_01b4f09c();
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        FUN_025bc5c4();
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


