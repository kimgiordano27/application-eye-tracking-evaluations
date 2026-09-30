/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundary2D
ENTRY_POINT: 05680cec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05680f84) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin__GetSpaceBoundary2D(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 unaff_w19;
  undefined4 uVar10;
  long *plVar11;
  long *unaff_x21;
  undefined1 uStack000000000000001c;
  long lStack0000000000000038;
  
  lStack0000000000000038 = 0;
  uStack000000000000001c = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar2 = FUN_05681688();
  if (lVar2 != 0) {
    FUN_062feb1c(lVar2,0);
  }
  lStack0000000000000038 = lVar2;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_05681520(unaff_w19);
  lVar2 = *unaff_x21;
  lVar7 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar7 != 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    uVar4 = (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),uVar3 & 0xffffffff,
                       *(undefined8 *)(lVar7 + 0x28));
    if ((uVar4 & 1) == 0) goto LAB_05680f54;
    lVar2 = *unaff_x21;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *unaff_x21;
  }
  pcVar8 = *(char **)(lVar2 + 0xb8);
  if (*(long *)(pcVar8 + 0x10) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      pcVar8 = *(char **)(*unaff_x21 + 0xb8);
    }
    puVar1 = PTR_DAT_069fb930;
    if ((char)uVar3 < *pcVar8) goto LAB_05680f54;
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06db4dfe == '\0') {
      FUN_02d965b8(PTR_DAT_069fb930);
      DAT_06db4dfe = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_069fd2e8;
    plVar11 = *(long **)(*(long *)(lVar2 + 0xb8) + 8);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fd2e8) {
          puVar6 = (undefined8 *)(lVar2 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_05680eac;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fd2e8,2);
LAB_05680eac:
    uVar4 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    if ((uVar4 & 1) == 0) goto LAB_05680f54;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (((uint)uVar3 & 0xff) < 5) {
      uVar10 = *(undefined4 *)(&DAT_011558ec + (uVar3 & 0xff) * 4);
    }
    else {
      uVar10 = 4;
    }
    lVar2 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar2 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_05680f40;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar1,3);
LAB_05680f40:
    uVar3 = (*(code *)*puVar6)(plVar11,uVar10,puVar6[1]);
    if ((uVar3 & 1) == 0) goto LAB_05680f54;
  }
  uVar5 = FUN_056a975c(&stack0x00000020,0);
  uStack000000000000001c = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_056817a8(uVar5,&stack0x0000001c);
LAB_05680f54:
  if (lStack0000000000000038 != 0) {
    FUN_062feba4(lStack0000000000000038,0);
  }
  return;
}


