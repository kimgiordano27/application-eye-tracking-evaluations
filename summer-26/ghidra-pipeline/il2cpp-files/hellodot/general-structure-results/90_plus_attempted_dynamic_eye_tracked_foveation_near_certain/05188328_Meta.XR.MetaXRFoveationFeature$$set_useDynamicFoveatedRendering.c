/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05188328
PROGRAM: hellodot-libil2cpp.so
SCORE: 174
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;telemetry;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;telemetry_or_network_hits_2;strong_foveation_hits_8;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05188558) */
/* WARNING: Removing unreachable block (ram,0x05188460) */

void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  long lVar10;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000008;
  
  if (param_2 == 1) {
    plVar4 = (long *)__cxa_begin_catch(param_1);
    lVar10 = *plVar4;
    __cxa_end_catch();
Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel:
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
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02cbedc4(lVar10);
    }
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar10 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8d08) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
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
      lVar10 = *in_stack_00000008;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06608050) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05187fe0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_06608050,0);
LAB_05187fe0:
      lVar10 = (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar4 = *(long **)(lVar10 + 0x18);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06607dd0) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05188050;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_06607dd0,0);
LAB_05188050:
      unaff_x23 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar6 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8d08) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
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
        lVar6 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06607dd8) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0518811c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_06607dd8,0);
LAB_0518811c:
        uVar1 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        lVar6 = FUN_034b09b0(uVar9,*(undefined8 *)PTR_DAT_065efb00);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar2 = FUN_034249d8(lVar6,*(undefined8 *)PTR_DAT_066080e0);
        if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_05185be4(lVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x28),
                     *(undefined4 *)(lVar10 + 0x10),uVar1,0);
        lVar6 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar6,0);
        uVar1 = FUN_05ef2cb4();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(uVar1,uVar1);
        }
        FUN_05f024ac(lVar6,uVar1,0);
        if (*(char *)(unaff_x27 + 0x30f) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x27 + 0x30f) = unaff_w19;
        }
        lVar2 = *(long *)(*unaff_x21 + 0xb8);
        FUN_05f023d8(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                     *(undefined4 *)(lVar2 + 0x14),lVar6,0);
        if (*(char *)(unaff_x29 + 0x311) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x29 + 0x311) = unaff_w19;
        }
        puVar5 = *(undefined4 **)(*unaff_x22 + 0xb8);
        FUN_05f01e3c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar6,0);
        if (*(char *)(unaff_x28 + 0x148) == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum();
          *(undefined1 *)(unaff_x28 + 0x148) = unaff_w19;
        }
        puVar5 = *(undefined4 **)(*unaff_x21 + 0xb8);
        FUN_05f00f94(*puVar5,puVar5[1],puVar5[2],lVar6,0);
      } while( true );
    }
    lVar10 = 0;
    goto code_r0x05188368;
  }
  if (unaff_x23 != (long *)0x0) {
    lVar10 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x05188450;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
code_r0x05188450:
    (*(code *)*puVar3)();
  }
  if (param_2 != 1) {
    if (in_stack_00000008 != (long *)0x0) {
      lVar10 = *in_stack_00000008;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x05188540;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8a48,0);
code_r0x05188540:
      (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d846d4(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar10 = *plVar4;
  __cxa_end_catch();
code_r0x05188368:
  if (in_stack_00000008 != (long *)0x0) {
    lVar6 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_051883c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(in_stack_00000008,*(long *)PTR_DAT_065c8a48,0);
LAB_051883c0:
    (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(lVar10);
  }
  return;
LAB_0518825c:
  lVar10 = 0;
  goto Meta_XR_MetaXRFoveationFeature__FBSetFoveationLevel;
}


