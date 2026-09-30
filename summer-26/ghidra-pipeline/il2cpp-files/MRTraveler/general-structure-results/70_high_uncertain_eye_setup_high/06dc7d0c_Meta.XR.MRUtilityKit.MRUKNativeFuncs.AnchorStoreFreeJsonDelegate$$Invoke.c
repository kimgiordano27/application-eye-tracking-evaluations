/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreFreeJsonDelegate$$Invoke
ENTRY_POINT: 06dc7d0c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dc7f08) */

void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreFreeJsonDelegate__Invoke
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar8;
  undefined8 unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
code_r0x06dc7d0c:
  uVar3 = FUN_0710fcf0(param_1,param_2);
  uVar4 = FUN_0711a11c(unaff_x24,uVar3,0);
  if (((uVar4 & 1) == 0) && (*(int *)(unaff_x23 + 0x18) < 3)) {
    if (*(int *)(unaff_x23 + 0x18) == 1) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      lVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,1);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((unaff_x20 != 0) && (lVar6 = thunk_FUN_03cf5138(), lVar6 == 0)) {
        uVar3 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar3,0);
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(long *)(lVar5 + 0x20) = unaff_x20;
      thunk_FUN_03d233cc();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0702dc3c(lVar8,unaff_x22,lVar5,0);
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_06df94c0(*(undefined8 *)PTR_DAT_08e90d68,0,0);
  }
  do {
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06dc7c40;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7c40:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar5 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 == 0) goto LAB_06dc7e8c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_06dc7e74;
    }
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06dc7c9c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7c9c:
    unaff_x22 = (*(code *)*puVar1)();
    plVar2 = *(long **)(unaff_x21 + 0x18);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x23 = (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(unaff_x23 + 0x18) != 0) break;
    lVar8 = *(long *)(unaff_x21 + 0x18);
    lVar6 = *(long *)PTR_DAT_08e762a0;
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_03cf12a0(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0702dc3c(lVar8,unaff_x22,**(undefined8 **)(lVar5 + 0xb8),0);
  } while( true );
  if ((int)*(long *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  plVar2 = *(long **)(unaff_x23 + 0x20);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  unaff_x24 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
  param_1 = *unaff_x29;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  param_2 = 0;
  goto code_r0x06dc7d0c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
LAB_06dc7e74:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06dc7ea8;
    }
  }
LAB_06dc7e8c:
  puVar1 = (undefined8 *)FUN_03cf1348();
LAB_06dc7ea8:
  (*(code *)*puVar1)();
  return;
}


