/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 05187f78
PROGRAM: hellodot-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051882c8) */
/* WARNING: Removing unreachable block (ram,0x05188480) */

void Meta_XR_MetaXRFeature__OnSessionExiting(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x05187f78:
  uVar1 = (*(code *)*param_1)(in_stack_00000008,param_1[1]);
  if ((uVar1 & 1) != 0) {
    lVar5 = *in_stack_00000008;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06608050) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05187fe0;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_06608050,0);
LAB_05187fe0:
    lVar5 = (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar9 = *(long **)(lVar5 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar9;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06607dd0) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05188050;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_06607dd0,0);
LAB_05188050:
    plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar6 = *plVar9;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8d08) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_051880b8;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065c8d08,0);
LAB_051880b8:
      uVar1 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if ((uVar1 & 1) == 0) goto LAB_0518825c;
      lVar6 = *plVar9;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06607dd8) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0518811c;
          }
          uVar1 = uVar1 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_06607dd8,0);
LAB_0518811c:
      uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar6 = FUN_034b09b0(uVar10,*(undefined8 *)PTR_DAT_065efb00);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar4 = FUN_034249d8(lVar6,*(undefined8 *)PTR_DAT_066080e0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_05185be4(lVar4,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar5 + 0x10),uVar3,0);
      lVar6 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar6,0);
      uVar3 = FUN_05ef2cb4();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar3,uVar3);
      }
      FUN_05f024ac(lVar6,uVar3,0);
      if (*(char *)(unaff_x27 + 0x30f) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x27 + 0x30f) = unaff_w19;
      }
      lVar4 = *(long *)(*unaff_x21 + 0xb8);
      FUN_05f023d8(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                   *(undefined4 *)(lVar4 + 0x14),lVar6,0);
      if (*(char *)(unaff_x29 + 0x311) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x29 + 0x311) = unaff_w19;
      }
      puVar7 = *(undefined4 **)(*unaff_x22 + 0xb8);
      FUN_05f01e3c(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar6,0);
      if (*(char *)(unaff_x28 + 0x148) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x28 + 0x148) = unaff_w19;
      }
      puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_05f00f94(*puVar7,puVar7[1],puVar7[2],lVar6,0);
    } while( true );
  }
  if (in_stack_00000008 == (long *)0x0) {
    return;
  }
  lVar5 = *in_stack_00000008;
  uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar1 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_051883c0;
      }
      uVar1 = uVar1 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8a48,0);
LAB_051883c0:
  (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  return;
LAB_0518825c:
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_051882b8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065c8a48,0);
LAB_051882b8:
    (*(code *)*puVar2)(plVar9,puVar2[1]);
  }
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar5 = *in_stack_00000008;
  uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar1 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8d08) {
        param_1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto code_r0x05187f78;
      }
      uVar1 = uVar1 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar1 != 0);
  }
  param_1 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8d08,0);
  goto code_r0x05187f78;
}


