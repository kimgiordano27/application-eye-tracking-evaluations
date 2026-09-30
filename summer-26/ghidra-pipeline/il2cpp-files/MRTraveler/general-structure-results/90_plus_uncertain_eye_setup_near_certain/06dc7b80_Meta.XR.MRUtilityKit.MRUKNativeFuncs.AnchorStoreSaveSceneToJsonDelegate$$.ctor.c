/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$.ctor
ENTRY_POINT: 06dc7b80
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc7f08) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long in_x9;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  long unaff_x21;
  long lVar14;
  undefined8 uVar15;
  
  if (in_x9 != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_06dc7bc0;
      }
      in_x9 = in_x9 + -1;
      piVar13 = piVar13 + 4;
    } while (in_x9 != 0);
  }
  puVar5 = (undefined8 *)FUN_03cf1348();
LAB_06dc7bc0:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_08e90260;
  puVar3 = PTR_DAT_08e811b0;
  puVar2 = PTR_DAT_08e6a290;
  puVar1 = PTR_DAT_08e695f0;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06dc7c40;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_06dc7c40:
    uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_06dc7e8c;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06dc7c9c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar4,0);
LAB_06dc7c9c:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar8 = *(long **)(unaff_x21 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar11 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar11 + 0x18) == 0) {
      lVar14 = *(long *)(unaff_x21 + 0x18);
      lVar10 = *(long *)PTR_DAT_08e762a0;
      lVar11 = *(long *)(lVar10 + 0x38);
      if (lVar11 == 0) {
        FUN_03cf12a0(lVar10);
        lVar11 = *(long *)(lVar10 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03cf1244();
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03cf1244();
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0702dc3c(lVar14,uVar7,**(undefined8 **)(lVar11 + 0xb8),0);
    }
    else {
      if ((int)*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar8 = *(long **)(lVar11 + 0x20);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar9 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
      uVar15 = *(undefined8 *)puVar3;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar15 = FUN_0710fcf0(uVar15,0);
      uVar12 = FUN_0711a11c(uVar9,uVar15,0);
      if (((uVar12 & 1) == 0) && (*(int *)(lVar11 + 0x18) < 3)) {
        if (*(int *)(lVar11 + 0x18) == 1) {
          lVar14 = *(long *)(unaff_x21 + 0x18);
          lVar11 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,1);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if ((unaff_x20 != 0) && (lVar10 = thunk_FUN_03cf5138(), lVar10 == 0)) {
            uVar7 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar7,0);
          }
          if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          *(long *)(lVar11 + 0x20) = unaff_x20;
          thunk_FUN_03d233cc();
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0702dc3c(lVar14,uVar7,lVar11,0);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_06df94c0(*(undefined8 *)PTR_DAT_08e90d68,0,0);
      }
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06dc7ea8;
    }
  }
LAB_06dc7e8c:
  puVar5 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e6a288,0);
LAB_06dc7ea8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


