/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice
ENTRY_POINT: 01f5eec0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(void)

{
  undefined *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int in_w8;
  undefined8 uVar6;
  int in_w9;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  double dVar7;
  double dVar8;
  undefined8 in_stack_00000020;
  double in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  double in_stack_00000048;
  
  if (in_ZR || in_NG != in_OV) {
    if ((in_w9 != 0x2b) && (in_w9 != 0x2d)) {
LAB_01f5ef98:
      *(int *)(unaff_x21 + 0x10) = in_w8 + -1;
      goto FUN_01f5efa0;
    }
    *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f593dc();
    if ((uVar3 & 1) != 0) goto FUN_01f5efa0;
LAB_01f5f054:
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    puVar1 = PTR_DAT_027c0a78;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    uVar6 = *(undefined8 *)puVar1;
  }
  else {
    if ((in_w9 != 0x5a) && (in_w9 != 0x7a)) goto LAB_01f5ef98;
    uVar2 = *(uint *)(unaff_x19 + 0x24) | 0x100;
    *(uint *)(unaff_x19 + 0x24) = uVar2;
    puVar1 = PTR_DAT_027b1b40;
    lVar4 = *(long *)PTR_DAT_027b1b40;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar4 = *(long *)puVar1;
      uVar2 = *(uint *)(unaff_x19 + 0x24);
    }
    uVar6 = **(undefined8 **)(lVar4 + 0xb8);
    *(uint *)(unaff_x19 + 0x24) = uVar2 | 0x200;
    *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
FUN_01f5efa0:
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f5fd94();
    uVar3 = FUN_01f5ff14();
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar3 = FUN_01f5b434();
      if ((uVar3 & 1) == 0) goto LAB_01f5f054;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f5fd94();
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f5ff14();
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar3 = FUN_01f5b434();
      if ((uVar3 & 1) == 0) goto LAB_01f5f054;
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f59330();
    if ((uVar3 & 1) != 0) goto LAB_01f5f054;
    if (*(int *)(*(long *)PTR_DAT_027be618 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar5 = (long *)FUN_01f2b618(0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar3 = (**(code **)(*plVar5 + 0x2a8))
                      (plVar5,*(undefined4 *)(unaff_x22 + 2),*(undefined4 *)*unaff_x22,
                       ((undefined4 *)*unaff_x22)[1],uStack000000000000003c,uStack0000000000000038,
                       in_stack_00000030._4_4_,0);
    dVar8 = in_stack_00000028;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      dVar8 = dVar8 * DAT_00745958;
      dVar7 = modf(dVar8,&stack0x00000048);
      if (0.0 <= dVar8) {
        if (dVar7 == 0.5) {
          dVar8 = 1.0;
          goto LAB_01f5f194;
        }
        dVar7 = (double)(long)(dVar8 + 0.5);
      }
      else if (dVar7 == -0.5) {
        dVar8 = -1.0;
LAB_01f5f194:
        dVar7 = in_stack_00000048;
        if (((long)in_stack_00000048 & 1U) != 0) {
          dVar7 = in_stack_00000048 + dVar8;
        }
      }
      else {
        dVar7 = (double)(long)(dVar8 + -0.5);
      }
      if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar4 = -0x8000000000000000;
      if (dVar7 != INFINITY) {
        lVar4 = (long)dVar7;
      }
      in_stack_00000020 = FUN_01e727dc(&stack0x00000020,lVar4,0);
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000020;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar2 = FUN_01f5f534();
      goto LAB_01f5f090;
    }
    uVar6 = *(undefined8 *)PTR_DAT_027c0aa8;
    *(undefined4 *)(unaff_x19 + 0x40) = 7;
  }
  uVar2 = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
LAB_01f5f090:
  return uVar2 & 1;
}


