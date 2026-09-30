/*
FUNCTION_NAME: OVRPlugin$$GetControllerState5
ENTRY_POINT: 031523ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0315257c) */

void OVRPlugin__GetControllerState5(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x24;
  long unaff_x25;
  long *plVar9;
  long unaff_x26;
  long *plVar10;
  long unaff_x27;
  long *plVar11;
  
  plVar9 = *(long **)(unaff_x25 + 0xf98);
  plVar10 = *(long **)(unaff_x26 + 0x250);
  plVar11 = *(long **)(unaff_x27 + 0x538);
  do {
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar9) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03152404;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_03152404:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_03152524;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar10) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03152460;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_03152460:
    lVar3 = (*(code *)*puVar2)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar7 = *(long **)(unaff_x20 + 0x38);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar1 = *(undefined4 *)(lVar3 + 0x14);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar11) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_031524d0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar7,*plVar11,1);
LAB_031524d0:
    (*(code *)*puVar2)(plVar7,uVar8,uVar1,&stack0x00000008,puVar2[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03152540;
    }
  }
LAB_03152524:
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_03152540:
  (*(code *)*puVar2)();
  return;
}


