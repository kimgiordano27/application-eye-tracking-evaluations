/*
FUNCTION_NAME: System.Predicate<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 0436ad58
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0436b030) */
/* WARNING: Removing unreachable block (ram,0x0436b120) */

void System_Predicate<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c8;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  uVar3 = FUN_04d2ae54();
  if ((uVar3 & 1) != 0) {
    in_stack_00000028 = unaff_x20[1];
    in_stack_00000020 = *unaff_x20;
    uVar7 = thunk_FUN_02dfd288(PTR_DAT_069ff848);
    uVar7 = thunk_FUN_02dd2d7c(uVar7,&stack0x00000020);
    uVar8 = thunk_FUN_02dfd288(PTR_DAT_06a0fe58);
    uVar7 = FUN_0536388c(uVar8,uVar7,0);
    thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
    uVar8 = thunk_FUN_02dd3144();
    FUN_054e8008(uVar8,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,in_stack_000000c8);
  }
  in_stack_00000098 = unaff_x20[1];
  in_stack_00000090 = *unaff_x20;
  in_stack_00000058 = &stack0x00000090;
  lVar4 = *(long *)(in_stack_000000c8 + 0x20);
  in_stack_00000050 = &stack0x000000c8;
  in_stack_00000048 = 0;
  if ((unaff_x21 & 1) == 0) {
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    lVar4 = FUN_03763c54(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x210));
    lVar5 = *(long *)(in_stack_000000c8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar5 = *(long *)(in_stack_000000c8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = *unaff_x20;
    uVar8 = unaff_x20[1];
    lVar6 = *(long *)(in_stack_000000c8 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02dcfd18();
    }
    FUN_04d2ac48(lVar5,uVar7,uVar8,lVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x218));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((*(ushort *)(*(long *)(in_stack_000000c8 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    in_stack_00000068 = *(undefined8 *)(lVar4 + 0x68);
    in_stack_00000060 = *(undefined8 *)(lVar4 + 0x60);
    in_stack_00000078 = *(undefined8 *)(lVar4 + 0x78);
    in_stack_00000070 = *(undefined8 *)(lVar4 + 0x70);
    in_stack_00000080 = *(undefined8 *)(lVar4 + 0x80);
  }
  else {
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar4 = *(long *)(in_stack_000000c8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = *unaff_x20;
    uVar8 = unaff_x20[1];
    lVar5 = *(long *)(in_stack_000000c8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    FUN_04d16b8c(lVar4,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x1f8));
    uVar2 = in_stack_000000b8;
    uVar8 = in_stack_000000b0;
    uVar7 = in_stack_000000a8;
    in_stack_00000040 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    if ((*(byte *)(*(long *)(in_stack_000000c8 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    in_stack_00000030 = uVar8;
    in_stack_00000028 = uVar7;
    in_stack_00000038 = uVar2;
    LeanTween__value(&stack0x00000030,0);
    in_stack_00000020 = 0;
    LeanTween__value(&stack0x00000020,0);
    in_stack_00000040 = CONCAT53(in_stack_00000040._3_5_,0x10000);
    in_stack_00000080 = in_stack_00000040;
    in_stack_00000060 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000028;
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000038;
  }
  lVar4 = *(long *)(in_stack_000000c8 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  lVar4 = thunk_FUN_02de709c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x228));
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar1 = in_stack_00000058;
  lVar4 = *(long *)(in_stack_000000c8 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  FUN_0436be5c(puVar1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x228));
  unaff_x19[4] = in_stack_00000080;
  unaff_x19[1] = in_stack_00000068;
  *unaff_x19 = in_stack_00000060;
  unaff_x19[3] = in_stack_00000078;
  unaff_x19[2] = in_stack_00000070;
  return;
}


