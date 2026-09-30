/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$get_Value
ENTRY_POINT: 04684a78
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

int OVRManager_Observable<Int32Enum>__get_Value(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar7;
  int iVar8;
  undefined8 in_stack_00000028;
  
  uVar2 = FUN_04684710();
  if ((uVar2 & 1) != 0) {
    return in_stack_00000028._4_4_;
  }
  plVar7 = (long *)*unaff_x20;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
  }
  lVar5 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04684b14;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_031c0d08(plVar7,lVar3,0);
LAB_04684b14:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  puVar1 = PTR_DAT_070c7c80;
  if (plVar7 != (long *)0x0) {
    iVar8 = 0;
    do {
      lVar3 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04684b8c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar1,0);
LAB_04684b8c:
      uVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
          return iVar8;
        }
        lVar3 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_04684c8c;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_04684c74;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
      }
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04684c20;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar7,lVar3,0);
LAB_04684c20:
      (*(code *)*puVar4)(plVar7,puVar4[1]);
      iVar8 = iVar8 + 1;
    } while (plVar7 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_04684c74:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04684ca8;
    }
  }
LAB_04684c8c:
  puVar4 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)PTR_DAT_070c2e88,0);
LAB_04684ca8:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return iVar8;
}


