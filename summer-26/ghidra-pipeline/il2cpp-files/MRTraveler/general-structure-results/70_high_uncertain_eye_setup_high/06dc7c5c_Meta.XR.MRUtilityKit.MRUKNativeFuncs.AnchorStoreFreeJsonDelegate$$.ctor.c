/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreFreeJsonDelegate$$.ctor
ENTRY_POINT: 06dc7c5c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc7f08) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreFreeJsonDelegate___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong in_x9;
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
    if (in_x9 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7c9c;
        }
        in_x9 = in_x9 - 1;
        piVar8 = piVar8 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7c9c:
    uVar2 = (*(code *)*puVar1)();
    plVar3 = *(long **)(unaff_x21 + 0x18);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      lVar7 = *(long *)PTR_DAT_08e762a0;
      lVar4 = *(long *)(lVar7 + 0x38);
      if (lVar4 == 0) {
        FUN_03cf12a0(lVar7);
        lVar4 = *(long *)(lVar7 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar4 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03cf1244();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0702dc3c(lVar9,uVar2,**(undefined8 **)(lVar4 + 0xb8),0);
    }
    else {
      if ((int)*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      plVar3 = *(long **)(lVar4 + 0x20);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      uVar10 = *unaff_x29;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar10 = FUN_0710fcf0(uVar10,0);
      uVar6 = FUN_0711a11c(uVar5,uVar10,0);
      if (((uVar6 & 1) == 0) && (*(int *)(lVar4 + 0x18) < 3)) {
        if (*(int *)(lVar4 + 0x18) == 1) {
          lVar9 = *(long *)(unaff_x21 + 0x18);
          lVar4 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,1);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          if ((unaff_x20 != 0) && (lVar7 = thunk_FUN_03cf5138(), lVar7 == 0)) {
            uVar2 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
            FUN_03c8f9fc(uVar2,0);
          }
          if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          *(long *)(lVar4 + 0x20) = unaff_x20;
          thunk_FUN_03d233cc();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_0702dc3c(lVar9,uVar2,lVar4,0);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_06df94c0(*(undefined8 *)PTR_DAT_08e90d68,0,0);
      }
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7c40;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7c40:
    uVar6 = (*(code *)*puVar1)();
    if ((uVar6 & 1) == 0) break;
    param_1 = *unaff_x19;
    param_3 = *unaff_x27;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06dc7ea8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7ea8:
    (*(code *)*puVar1)();
  }
  return;
}


