/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 05188044
PROGRAM: hellodot-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05188480) */
/* WARNING: Removing unreachable block (ram,0x051882c8) */

void Meta_XR_MetaXRFeature__OnSessionDestroy(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 uVar9;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x05188044:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_05188050:
  plVar1 = (long *)(*(code *)*puVar2)(unaff_x23,puVar2[1]);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8d08) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_051880b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*(long *)PTR_DAT_065c8d08,0);
LAB_051880b8:
    uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar7 & 1) == 0) break;
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06607dd8) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0518811c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*(long *)PTR_DAT_06607dd8,0);
LAB_0518811c:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar5 = FUN_034b09b0(uVar9,*(undefined8 *)PTR_DAT_065efb00);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = FUN_034249d8(lVar5,*(undefined8 *)PTR_DAT_066080e0);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_05185be4(lVar4,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                 *(undefined4 *)(unaff_x24 + 0x10),uVar3,0);
    lVar5 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar5,0);
    uVar3 = FUN_05ef2cb4();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar3,uVar3);
    }
    FUN_05f024ac(lVar5,uVar3,0);
    if (*(char *)(unaff_x27 + 0x30f) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x27 + 0x30f) = unaff_w19;
    }
    lVar4 = *(long *)(*unaff_x21 + 0xb8);
    FUN_05f023d8(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
                 *(undefined4 *)(lVar4 + 0x14),lVar5,0);
    if (*(char *)(unaff_x29 + 0x311) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x29 + 0x311) = unaff_w19;
    }
    puVar6 = *(undefined4 **)(*unaff_x22 + 0xb8);
    FUN_05f01e3c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
    if (*(char *)(unaff_x28 + 0x148) == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum();
      *(undefined1 *)(unaff_x28 + 0x148) = unaff_w19;
    }
    puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
    FUN_05f00f94(*puVar6,puVar6[1],puVar6[2],lVar5,0);
  } while( true );
  if (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_051882b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*(long *)PTR_DAT_065c8a48,0);
LAB_051882b8:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar5 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8d08) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto Meta_XR_MetaXRFeature__OnSessionExiting;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8d08,0);
Meta_XR_MetaXRFeature__OnSessionExiting:
  uVar7 = (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  if ((uVar7 & 1) == 0) {
    if (in_stack_00000008 == (long *)0x0) {
      return;
    }
    lVar5 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 == 0) goto LAB_051883a4;
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    goto LAB_0518838c;
  }
  lVar5 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06608050) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05187fe0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_06608050,0);
LAB_05187fe0:
  unaff_x24 = (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  unaff_x23 = *(long **)(unaff_x24 + 0x18);
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  param_1 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(in_x10 + -2) == *(long *)PTR_DAT_06607dd0) goto code_r0x05188044;
      uVar7 = uVar7 - 1;
      in_x10 = in_x10 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_06607dd0,0);
  goto LAB_05188050;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0518838c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_051883c0;
    }
  }
LAB_051883a4:
  puVar2 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8a48,0);
LAB_051883c0:
  (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
  return;
}


