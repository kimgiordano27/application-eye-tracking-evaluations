/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$BeginInvoke
ENTRY_POINT: 06dc7c30
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

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__BeginInvoke
               (undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  
LAB_06dc7c40:
  uVar1 = (*(code *)*param_1)();
  if ((uVar1 & 1) != 0) {
    lVar7 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7c9c;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06dc7c9c:
    uVar3 = (*(code *)*puVar2)();
    plVar4 = *(long **)(unaff_x21 + 0x18);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar7 + 0x18) == 0) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      lVar6 = *(long *)PTR_DAT_08e762a0;
      lVar7 = *(long *)(lVar6 + 0x38);
      if (lVar7 == 0) {
        FUN_03cf12a0(lVar6);
        lVar7 = *(long *)(lVar6 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03cf1244();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0702dc3c(lVar9,uVar3,**(undefined8 **)(lVar7 + 0xb8),0);
    }
    else {
      if ((int)*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar4 = *(long **)(lVar7 + 0x20);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      uVar10 = *unaff_x29;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar10 = FUN_0710fcf0(uVar10,0);
      uVar1 = FUN_0711a11c(uVar5,uVar10,0);
      if (((uVar1 & 1) == 0) && (*(int *)(lVar7 + 0x18) < 3)) {
        if (*(int *)(lVar7 + 0x18) == 1) {
          lVar9 = *(long *)(unaff_x21 + 0x18);
          lVar7 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,1);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if ((unaff_x20 != 0) && (lVar6 = thunk_FUN_03cf5138(), lVar6 == 0)) {
            uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar3,0);
          }
          if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          *(long *)(lVar7 + 0x20) = unaff_x20;
          thunk_FUN_03d233cc();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0702dc3c(lVar9,uVar3,lVar7,0);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_06df94c0(*(undefined8 *)PTR_DAT_08e90d68,0,0);
      }
    }
    lVar7 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          param_1 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7c40;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_03cf1348();
    goto LAB_06dc7c40;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7ea8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06dc7ea8:
    (*(code *)*puVar2)();
  }
  return;
}


