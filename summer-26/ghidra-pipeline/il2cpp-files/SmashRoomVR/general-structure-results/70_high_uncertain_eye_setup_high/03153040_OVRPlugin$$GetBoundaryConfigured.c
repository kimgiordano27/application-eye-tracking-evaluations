/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryConfigured
ENTRY_POINT: 03153040
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetBoundaryConfigured(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar10;
  long *in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    lVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802d8);
    FUN_02b591b0(lVar2,*(undefined8 *)PTR_DAT_03d802d0);
    puVar1 = StringLiteral_2238;
    lVar3 = *(long *)StringLiteral_2238;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_01acfdbc();
    if (lVar3 != 0) {
      uVar5 = FUN_025bddd0(lVar3,uVar4,&stack0x00000008,*(undefined8 *)PTR_DAT_03d80298);
      plVar8 = in_stack_00000008;
      if ((in_stack_00000008 != (long *)0x0) && ((uVar5 & 1) != 0)) {
        lVar3 = *in_stack_00000008;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2240) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03153144;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ae9f78(in_stack_00000008,*(long *)StringLiteral_2240,0);
LAB_03153144:
        uVar4 = (*(code *)*puVar6)(plVar8);
        uVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802b8);
        FUN_028b7004();
        uVar4 = FUN_01ebc520(uVar4,uVar7,*(undefined8 *)PTR_DAT_03d802a8);
        puVar1 = PTR_DAT_03d802f0;
        lVar3 = *(long *)PTR_DAT_03d802f0;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar3);
          lVar3 = *(long *)puVar1;
        }
        lVar10 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (lVar10 == 0) {
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar3);
            lVar3 = *(long *)puVar1;
          }
          uVar7 = **(undefined8 **)(lVar3 + 0xb8);
          lVar10 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802c0);
          FUN_028b6724(lVar10,uVar7,*(undefined8 *)PTR_DAT_03d802e8,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          *plVar8 = lVar10;
          thunk_FUN_01b4f09c(plVar8,lVar10);
        }
        uVar4 = FUN_01ec7bf0(uVar4,lVar10,*(undefined8 *)PTR_DAT_03d802b0);
        if (lVar2 == 0) goto LAB_031532dc;
        FUN_02b59bf0(lVar2,uVar4,*(undefined8 *)PTR_DAT_03d802c8);
      }
      lVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d802e0);
      FUN_03081994(lVar3,0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = unaff_x19;
        thunk_FUN_01b4f09c();
        *(long *)(lVar3 + 0x18) = lVar2;
        thunk_FUN_01b4f09c((long *)(lVar3 + 0x18),lVar2);
        if (*(long *)(unaff_x20 + 0x10) != 0) {
          FUN_025bc5c4();
          return lVar3;
        }
      }
    }
  }
  else if (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar2 = FUN_025bc544();
    return lVar2;
  }
LAB_031532dc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


