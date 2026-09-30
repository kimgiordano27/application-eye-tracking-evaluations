/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$.ctor
ENTRY_POINT: 04684ad0
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

int OVRManager_Observable<Int32Enum>___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  int iVar8;
  int iStack000000000000002c;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04684b14;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_031c0d08();
LAB_04684b14:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_070c7c80;
  if (plVar3 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      lVar4 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04684b8c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0);
LAB_04684b8c:
      uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      iStack000000000000002c = iVar8;
      if ((uVar6 & 1) == 0) {
        if (plVar3 == (long *)0x0) {
          return iVar8;
        }
        lVar4 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_04684c8c;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04684c74;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4(lVar4);
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04684c20;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_031c0d08(plVar3,lVar4,0);
LAB_04684c20:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
      iVar8 = iVar8 + 1;
    } while (plVar3 != (long *)0x0);
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
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04684ca8;
    }
  }
LAB_04684c8c:
  puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)PTR_DAT_070c2e88,0);
LAB_04684ca8:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return iStack000000000000002c;
}


