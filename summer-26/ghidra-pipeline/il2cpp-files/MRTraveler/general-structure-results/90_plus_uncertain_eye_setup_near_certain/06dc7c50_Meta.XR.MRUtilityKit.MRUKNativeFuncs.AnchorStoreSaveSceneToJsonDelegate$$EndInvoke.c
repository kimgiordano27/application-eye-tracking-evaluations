/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$EndInvoke
ENTRY_POINT: 06dc7c50
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc7f08) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__EndInvoke(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
  do {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7c9c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7c9c:
    uVar2 = (*(code *)*puVar1)();
    plVar3 = *(long **)(unaff_x21 + 0x18);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar6 + 0x18) == 0) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      lVar5 = *(long *)PTR_DAT_08e762a0;
      lVar6 = *(long *)(lVar5 + 0x38);
      if (lVar6 == 0) {
        FUN_03cf12a0(lVar5);
        lVar6 = *(long *)(lVar5 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0702dc3c(lVar9,uVar2,**(undefined8 **)(lVar6 + 0xb8),0);
    }
    else {
      if ((int)*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar3 = *(long **)(lVar6 + 0x20);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      uVar10 = *unaff_x29;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar10 = FUN_0710fcf0(uVar10,0);
      uVar7 = FUN_0711a11c(uVar4,uVar10,0);
      if (((uVar7 & 1) == 0) && (*(int *)(lVar6 + 0x18) < 3)) {
        if (*(int *)(lVar6 + 0x18) == 1) {
          lVar9 = *(long *)(unaff_x21 + 0x18);
          lVar6 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,1);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if ((unaff_x20 != 0) && (lVar5 = thunk_FUN_03cf5138(), lVar5 == 0)) {
            uVar2 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar2,0);
          }
          if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          *(long *)(lVar6 + 0x20) = unaff_x20;
          thunk_FUN_03d233cc();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0702dc3c(lVar9,uVar2,lVar6,0);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_06df94c0(*(undefined8 *)PTR_DAT_08e90d68,0,0);
      }
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7c40;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7c40:
    uVar7 = (*(code *)*puVar1)();
  } while ((uVar7 & 1) != 0);
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7ea8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7ea8:
    (*(code *)*puVar1)();
  }
  return;
}


