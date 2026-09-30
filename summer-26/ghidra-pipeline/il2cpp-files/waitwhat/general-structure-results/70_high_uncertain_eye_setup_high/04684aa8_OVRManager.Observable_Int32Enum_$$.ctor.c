/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$.ctor
ENTRY_POINT: 04684aa8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04684ce4) */

int OVRManager_Observable<Int32Enum>___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  int iVar8;
  int iStack000000000000002c;
  
  lVar2 = FUN_031c09d4();
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04684b14;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_031c0d08();
LAB_04684b14:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_070c7c80;
  if (plVar4 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      lVar2 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04684b8c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar1,0);
LAB_04684b8c:
      uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      iStack000000000000002c = iVar8;
      if ((uVar6 & 1) == 0) {
        if (plVar4 == (long *)0x0) {
          return iVar8;
        }
        lVar2 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 == 0) goto LAB_04684c8c;
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_04684c74;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4(lVar2);
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04684c20;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar4,lVar2,0);
LAB_04684c20:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      iVar8 = iVar8 + 1;
    } while (plVar4 != (long *)0x0);
  }
  iStack000000000000002c = iVar8;
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04684c74:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04684ca8;
    }
  }
LAB_04684c8c:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)PTR_DAT_070c2e88,0);
LAB_04684ca8:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return iStack000000000000002c;
}


