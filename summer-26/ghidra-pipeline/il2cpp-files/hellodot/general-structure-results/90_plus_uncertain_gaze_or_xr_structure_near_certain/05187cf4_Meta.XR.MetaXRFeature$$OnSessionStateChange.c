/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionStateChange
ENTRY_POINT: 05187cf4
PROGRAM: hellodot-libil2cpp.so
SCORE: 122
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x051882c8) */
/* WARNING: Removing unreachable block (ram,0x05188480) */

void Meta_XR_MetaXRFeature__OnSessionStateChange(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x23;
  long *plVar13;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065efb00);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066080e8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066080f0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066080d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608070);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608078);
  *(undefined1 *)(unaff_x19 + 0x174) = 1;
  uVar3 = FUN_05188564();
  lVar7 = *unaff_x23;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar7);
    lVar7 = *unaff_x23;
  }
  puVar1 = PTR_DAT_06608008;
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar7);
      lVar7 = *unaff_x23;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608020);
    FUN_04a4efb4(lVar11,uVar12,*(undefined8 *)PTR_DAT_066080e8,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar11;
  }
  uVar3 = FUN_033dffb8(uVar3,lVar11,*(undefined8 *)puVar1);
  lVar7 = *unaff_x23;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar7);
    lVar7 = *unaff_x23;
  }
  puVar1 = PTR_DAT_06608010;
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar7);
      lVar7 = *unaff_x23;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608018);
    FUN_04a5701c(lVar11,uVar12,*(undefined8 *)PTR_DAT_066080f0,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = lVar11;
  }
  plVar4 = (long *)FUN_033eb504(uVar3,lVar11,*(undefined8 *)puVar1);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06608038) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05187eec;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_06608038,0);
LAB_05187eec:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar2 = PTR_DAT_065caa08;
  puVar1 = PTR_DAT_065c9850;
LAB_05187f1c:
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8d08) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto Meta_XR_MetaXRFeature__OnSessionExiting;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065c8d08,0);
Meta_XR_MetaXRFeature__OnSessionExiting:
  uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((uVar9 & 1) != 0) {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06608050) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05187fe0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_06608050,0);
LAB_05187fe0:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar13 = *(long **)(lVar7 + 0x18);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06607dd0) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05188050;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_06607dd0,0);
LAB_05188050:
    plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar11 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8d08) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_051880b8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065c8d08,0);
LAB_051880b8:
      uVar9 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if ((uVar9 & 1) == 0) goto LAB_0518825c;
      lVar11 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06607dd8) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0518811c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_06607dd8,0);
LAB_0518811c:
      uVar3 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar11 = FUN_034b09b0(uVar12,*(undefined8 *)PTR_DAT_065efb00);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar6 = FUN_034249d8(lVar11,*(undefined8 *)PTR_DAT_066080e0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_05185be4(lVar6,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar7 + 0x10),uVar3,0);
      lVar11 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar11,0);
      uVar3 = FUN_05ef2cb4();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar3,uVar3);
      }
      FUN_05f024ac(lVar11,uVar3,0);
      if (DAT_06a6730f == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(puVar1);
        DAT_06a6730f = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_05f023d8(*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                   *(undefined4 *)(lVar6 + 0x14),lVar11,0);
      if (DAT_06a67311 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
        DAT_06a67311 = '\x01';
      }
      puVar8 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_05f01e3c(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar11,0);
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(puVar1);
        DAT_06a67148 = '\x01';
      }
      puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_05f00f94(*puVar8,puVar8[1],puVar8[2],lVar11,0);
    } while( true );
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 == 0) goto LAB_051883a4;
  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_0518838c;
LAB_0518825c:
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_051882b8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065c8a48,0);
LAB_051882b8:
    (*(code *)*puVar5)(plVar13,puVar5[1]);
  }
  goto LAB_05187f1c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0518838c:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_051883c0;
    }
  }
LAB_051883a4:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065c8a48,0);
LAB_051883c0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


