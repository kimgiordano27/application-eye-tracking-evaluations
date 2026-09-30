/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask
ENTRY_POINT: 01f5ee6c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(void)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  double dVar8;
  double dVar9;
  undefined8 in_stack_00000020;
  double in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  double in_stack_00000048;
  
  thunk_FUN_01220628();
  FUN_01f5fd94();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar4 = FUN_01f59330();
  if ((uVar4 & 1) == 0) {
LAB_01f5f0b0:
    if (*(int *)(*(long *)PTR_DAT_027be618 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar6 = (long *)FUN_01f2b618(0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar4 = (**(code **)(*plVar6 + 0x2a8))
                      (plVar6,*(undefined4 *)(unaff_x22 + 2),*(undefined4 *)*unaff_x22,
                       ((undefined4 *)*unaff_x22)[1],uStack000000000000003c,uStack0000000000000038,
                       in_stack_00000030._4_4_,0);
    dVar9 = in_stack_00000028;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      dVar9 = dVar9 * DAT_00745958;
      dVar8 = modf(dVar9,&stack0x00000048);
      if (0.0 <= dVar9) {
        if (dVar8 == 0.5) {
          dVar9 = 1.0;
          goto LAB_01f5f194;
        }
        dVar8 = (double)(long)(dVar9 + 0.5);
      }
      else if (dVar8 == -0.5) {
        dVar9 = -1.0;
LAB_01f5f194:
        dVar8 = in_stack_00000048;
        if (((long)in_stack_00000048 & 1U) != 0) {
          dVar8 = in_stack_00000048 + dVar9;
        }
      }
      else {
        dVar8 = (double)(long)(dVar9 + -0.5);
      }
      if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar5 = -0x8000000000000000;
      if (dVar8 != INFINITY) {
        lVar5 = (long)dVar8;
      }
      in_stack_00000020 = FUN_01e727dc(&stack0x00000020,lVar5,0);
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000020;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar3 = FUN_01f5f534();
      goto LAB_01f5f090;
    }
    uVar7 = *(undefined8 *)PTR_DAT_027c0aa8;
    *(undefined4 *)(unaff_x19 + 0x40) = 7;
  }
  else {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = *(uint *)(unaff_x21 + 2);
    if (*(uint *)(unaff_x21 + 1) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    uVar1 = *(ushort *)(*unaff_x21 + (long)(int)uVar3 * 2);
    if (uVar1 < 0x5a) {
      if ((uVar1 != 0x2b) && (uVar1 != 0x2d)) {
LAB_01f5ef98:
        *(uint *)(unaff_x21 + 2) = uVar3 - 1;
        goto FUN_01f5efa0;
      }
      *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f593dc();
      if ((uVar4 & 1) != 0) goto FUN_01f5efa0;
    }
    else {
      if ((uVar1 != 0x5a) && (uVar1 != 0x7a)) goto LAB_01f5ef98;
      uVar3 = *(uint *)(unaff_x19 + 0x24) | 0x100;
      *(uint *)(unaff_x19 + 0x24) = uVar3;
      puVar2 = PTR_DAT_027b1b40;
      lVar5 = *(long *)PTR_DAT_027b1b40;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar5 = *(long *)puVar2;
        uVar3 = *(uint *)(unaff_x19 + 0x24);
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      *(uint *)(unaff_x19 + 0x24) = uVar3 | 0x200;
      *(undefined8 *)(unaff_x19 + 0x28) = uVar7;
FUN_01f5efa0:
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f5fd94();
      uVar4 = FUN_01f5ff14();
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar4 = FUN_01f5b434();
        if ((uVar4 & 1) == 0) goto LAB_01f5f054;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f5fd94();
      }
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
      if ((uVar4 & 1) == 0) goto LAB_01f5f0b0;
    }
LAB_01f5f054:
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    puVar2 = PTR_DAT_027c0a78;
    *(undefined4 *)(unaff_x19 + 0x40) = 4;
    uVar7 = *(undefined8 *)puVar2;
  }
  uVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
LAB_01f5f090:
  return uVar3 & 1;
}


