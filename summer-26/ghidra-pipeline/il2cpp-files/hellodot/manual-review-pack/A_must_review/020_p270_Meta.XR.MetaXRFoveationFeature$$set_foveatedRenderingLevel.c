/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 051881fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 142
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_2;strong_foveation_hits_4;frame_or_lifecycle_behavior;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05188480) */
/* WARNING: Removing unreachable block (ram,0x051882c8) */

void Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint in_w8;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar8;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar9;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x051881fc:
  if (in_w8 == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    *(undefined1 *)(unaff_x29 + 0x311) = unaff_w19;
  }
  puVar5 = *(undefined4 **)(*unaff_x22 + 0xb8);
  FUN_05f01e3c(*puVar5,puVar5[1],puVar5[2],puVar5[3],unaff_x25,0);
  if (*(char *)(unaff_x28 + 0x148) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    *(undefined1 *)(unaff_x28 + 0x148) = unaff_w19;
  }
  puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
  FUN_05f00f94(*puVar5,puVar5[1],puVar5[2],unaff_x25,0);
  do {
    lVar4 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8d08) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_051880b8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_065c8d08,0);
LAB_051880b8:
    uVar6 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    if ((uVar6 & 1) != 0) break;
    if (unaff_x23 != (long *)0x0) {
      lVar4 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_051882b8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_065c8a48,0);
LAB_051882b8:
      (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    }
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8d08) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto Meta_XR_MetaXRFeature__OnSessionExiting;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8d08,0);
Meta_XR_MetaXRFeature__OnSessionExiting:
    uVar6 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000008 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000008;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_051883a4;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_0518838c;
    }
    lVar4 = *in_stack_00000008;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06608050) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05187fe0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_06608050,0);
LAB_05187fe0:
    unaff_x24 = (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar8 = *(long **)(unaff_x24 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06607dd0) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05188050;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_06607dd0,0);
LAB_05188050:
    unaff_x23 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  } while( true );
  lVar4 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06607dd8) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0518811c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_06607dd8,0);
LAB_0518811c:
  uVar2 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar4 = FUN_034b09b0(uVar9,*(undefined8 *)PTR_DAT_065efb00);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = FUN_034249d8(lVar4,*(undefined8 *)PTR_DAT_066080e0);
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_05185be4(lVar3,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
               *(undefined4 *)(unaff_x24 + 0x10),uVar2,0);
  unaff_x25 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar4,0);
  uVar2 = FUN_05ef2cb4();
  if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c(uVar2,uVar2);
  }
  FUN_05f024ac(unaff_x25,uVar2,0);
  if (*(char *)(unaff_x27 + 0x30f) == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum();
    *(undefined1 *)(unaff_x27 + 0x30f) = unaff_w19;
  }
  lVar4 = *(long *)(*unaff_x21 + 0xb8);
  FUN_05f023d8(*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
               *(undefined4 *)(lVar4 + 0x14),unaff_x25,0);
  in_w8 = (uint)*(byte *)(unaff_x29 + 0x311);
  goto code_r0x051881fc;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0518838c:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_051883c0;
    }
  }
LAB_051883a4:
  puVar1 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8a48,0);
LAB_051883c0:
  (*(code *)*puVar1)(in_stack_00000008,puVar1[1]);
  return;
}


