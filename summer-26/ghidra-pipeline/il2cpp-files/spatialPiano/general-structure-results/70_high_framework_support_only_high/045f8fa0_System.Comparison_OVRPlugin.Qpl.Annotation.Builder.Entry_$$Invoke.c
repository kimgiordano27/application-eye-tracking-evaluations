/*
FUNCTION_NAME: System.Comparison<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 045f8fa0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Comparison<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  void *unaff_x24;
  undefined4 unaff_w25;
  void *unaff_x26;
  long *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  pvVar4 = (void *)thunk_FUN_02f66c64(*(undefined8 *)(unaff_x29 + -0x10),
                                      *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80) +
                                      0x80);
  memcpy(unaff_x28,pvVar4,*(size_t *)(unaff_x29 + -0x18));
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c();
  }
  thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30));
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_045f9060;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02f421d0();
LAB_045f9060:
  uVar1 = (*(code *)*puVar5)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  pvVar4 = (void *)thunk_FUN_02f66c64(*(undefined8 *)(unaff_x29 + -0x10),
                                      *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80) +
                                      0xa0);
  memcpy(unaff_x24,pvVar4,*(size_t *)(unaff_x29 + -0x50));
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c();
  }
  thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_045f9130;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02f421d0();
LAB_045f9130:
  uVar2 = (*(code *)*puVar5)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  pvVar4 = (void *)thunk_FUN_02f66c64(*(undefined8 *)(unaff_x29 + -0x10),
                                      *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80) +
                                      0xc0);
  memcpy(unaff_x26,pvVar4,*(size_t *)(unaff_x29 + -0x48));
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c();
  }
  thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_045f9200;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02f421d0();
LAB_045f9200:
  uVar3 = (*(code *)*puVar5)();
  FUN_050f3e80(*(undefined4 *)(unaff_x29 + -0x5c),unaff_w21,unaff_w25,param_1,uVar1,uVar2,uVar3,0);
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


