/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBSetFoveationLevel
ENTRY_POINT: 05188260
PROGRAM: hellodot-libil2cpp.so
SCORE: 174
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_2;strong_foveation_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05188480) */

void Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar9;
  long *unaff_x23;
  undefined8 uVar10;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
code_r0x05188260:
  if (unaff_x23 != (long *)0x0) {
    lVar6 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_051882b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_065c8a48,0);
LAB_051882b8:
    (*(code *)*puVar3)(unaff_x23,puVar3[1]);
  }
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(unaff_x26);
  }
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar6 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8d08) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto Meta_XR_MetaXRFeature__OnSessionExiting;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8d08,0);
Meta_XR_MetaXRFeature__OnSessionExiting:
  uVar7 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  if ((uVar7 & 1) != 0) {
    lVar6 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06608050) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05187fe0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_06608050,0);
LAB_05187fe0:
    lVar6 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar9 = *(long **)(lVar6 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06607dd0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05188050;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_06607dd0,0);
LAB_05188050:
    unaff_x23 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar4 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8d08) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_051880b8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_065c8d08,0);
LAB_051880b8:
      uVar7 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      if ((uVar7 & 1) == 0) goto LAB_0518825c;
      lVar4 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06607dd8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0518811c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_06607dd8,0);
LAB_0518811c:
      uVar1 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar4 = FUN_034b09b0(uVar10,*(undefined8 *)PTR_DAT_065efb00);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar2 = FUN_034249d8(lVar4,*(undefined8 *)PTR_DAT_066080e0);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_05185be4(lVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                   *(undefined4 *)(lVar6 + 0x10),uVar1,0);
      lVar4 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar4,0);
      uVar1 = FUN_05ef2cb4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar1,uVar1);
      }
      FUN_05f024ac(lVar4,uVar1,0);
      if (*(char *)(unaff_x27 + 0x30f) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x27 + 0x30f) = unaff_w19;
      }
      lVar2 = *(long *)(*unaff_x21 + 0xb8);
      FUN_05f023d8(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                   *(undefined4 *)(lVar2 + 0x14),lVar4,0);
      if (*(char *)(unaff_x29 + 0x311) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x29 + 0x311) = unaff_w19;
      }
      puVar5 = *(undefined4 **)(*unaff_x22 + 0xb8);
      FUN_05f01e3c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar4,0);
      if (*(char *)(unaff_x28 + 0x148) == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum();
        *(undefined1 *)(unaff_x28 + 0x148) = unaff_w19;
      }
      puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
      FUN_05f00f94(*puVar5,puVar5[1],puVar5[2],lVar4,0);
    } while( true );
  }
  if (in_stack_00000008 == (long *)0x0) {
    return;
  }
  lVar6 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 == 0) goto LAB_051883a4;
  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  goto LAB_0518838c;
LAB_0518825c:
  unaff_x26 = 0;
  goto code_r0x05188260;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0518838c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_051883c0;
    }
  }
LAB_051883a4:
  puVar3 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8a48,0);
LAB_051883c0:
  (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  return;
}


