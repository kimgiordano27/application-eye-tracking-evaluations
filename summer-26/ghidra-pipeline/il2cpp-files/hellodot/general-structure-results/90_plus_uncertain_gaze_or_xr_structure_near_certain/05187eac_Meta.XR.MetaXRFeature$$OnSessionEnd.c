/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 05187eac
PROGRAM: hellodot-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x051882c8) */
/* WARNING: Removing unreachable block (ram,0x05188480) */

void Meta_XR_MetaXRFeature__OnSessionEnd(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  
  if (in_x9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05187eec;
      }
      in_x9 = in_x9 + -1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_05187eec:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_065caa08;
  puVar1 = PTR_DAT_065c9850;
LAB_05187f1c:
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar7 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065c8d08) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto Meta_XR_MetaXRFeature__OnSessionExiting;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065c8d08,0);
Meta_XR_MetaXRFeature__OnSessionExiting:
  uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
  if ((uVar10 & 1) != 0) {
    lVar7 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06608050) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05187fe0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_06608050,0);
LAB_05187fe0:
    lVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar12 = *(long **)(lVar7 + 0x18);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06607dd0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05188050;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_06607dd0,0);
LAB_05188050:
    plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065c8d08) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_051880b8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_065c8d08,0);
LAB_051880b8:
      uVar10 = (*(code *)*puVar3)(plVar12,puVar3[1]);
      if ((uVar10 & 1) == 0) goto LAB_0518825c;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06607dd8) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0518811c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_06607dd8,0);
LAB_0518811c:
      uVar5 = (*(code *)*puVar3)(plVar12,puVar3[1]);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar8 = FUN_034b09b0(uVar13,*(undefined8 *)PTR_DAT_065efb00);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar6 = FUN_034249d8(lVar8,*(undefined8 *)PTR_DAT_066080e0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_05185be4(lVar6,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar7 + 0x10),uVar5,0);
      lVar8 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar8,0);
      uVar5 = FUN_05ef2cb4();
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar5,uVar5);
      }
      FUN_05f024ac(lVar8,uVar5,0);
      if (DAT_06a6730f == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(puVar1);
        DAT_06a6730f = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_05f023d8(*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                   *(undefined4 *)(lVar6 + 0x14),lVar8,0);
      if (DAT_06a67311 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
        DAT_06a67311 = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_05f01e3c(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar8,0);
      if (DAT_06a67148 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(puVar1);
        DAT_06a67148 = '\x01';
      }
      puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_05f00f94(*puVar9,puVar9[1],puVar9[2],lVar8,0);
    } while( true );
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar4;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 == 0) goto LAB_051883a4;
  piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_0518838c;
LAB_0518825c:
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_051882b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_065c8a48,0);
LAB_051882b8:
    (*(code *)*puVar3)(plVar12,puVar3[1]);
  }
  goto LAB_05187f1c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0518838c:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_051883c0;
    }
  }
LAB_051883a4:
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065c8a48,0);
LAB_051883c0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


