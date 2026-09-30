/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_useDynamicLighting
ENTRY_POINT: 01f5ef70
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(long param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  uint in_w8;
  int in_w9;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
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
  
  if (in_w9 == 0) {
    thunk_FUN_01220628();
    param_1 = *unaff_x23;
    in_w8 = *(uint *)(unaff_x19 + 0x24);
  }
  uVar6 = **(undefined8 **)(param_1 + 0xb8);
  *(uint *)(unaff_x19 + 0x24) = in_w8 | 0x200;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f5fd94();
  uVar4 = FUN_01f5ff14();
  if ((uVar4 & 1) == 0) {
LAB_01f5effc:
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5ff14();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f5b434();
      if ((uVar4 & 1) == 0) goto LAB_01f5f054;
    }
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f59330();
    if ((uVar4 & 1) != 0) goto LAB_01f5f054;
    if (*(int *)(*(long *)PTR_DAT_027be618 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar5 = (long *)FUN_01f2b618(0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar4 = (**(code **)(*plVar5 + 0x2a8))
                      (plVar5,*(undefined4 *)(unaff_x22 + 2),*(undefined4 *)*unaff_x22,
                       ((undefined4 *)*unaff_x22)[1],uStack000000000000003c,uStack0000000000000038,
                       in_stack_00000030._4_4_,0);
    dVar8 = in_stack_00000028;
    if ((uVar4 & 1) != 0) {
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
      lVar1 = -0x8000000000000000;
      if (dVar7 != INFINITY) {
        lVar1 = (long)dVar7;
      }
      in_stack_00000020 = FUN_01e727dc(&stack0x00000020,lVar1,0);
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000020;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar3 = FUN_01f5f534();
      goto LAB_01f5f090;
    }
    uVar6 = *(undefined8 *)PTR_DAT_027c0aa8;
    *(undefined4 *)(unaff_x19 + 0x40) = 7;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5b434();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f5fd94();
      goto LAB_01f5effc;
    }
LAB_01f5f054:
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    puVar2 = PTR_DAT_027c0a78;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    uVar6 = *(undefined8 *)puVar2;
  }
  uVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
LAB_01f5f090:
  return uVar3 & 1;
}


