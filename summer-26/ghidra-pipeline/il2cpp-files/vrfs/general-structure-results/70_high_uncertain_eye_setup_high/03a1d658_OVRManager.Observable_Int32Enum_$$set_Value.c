/*
FUNCTION_NAME: OVRManager.Observable<Int32Enum>$$set_Value
ENTRY_POINT: 03a1d658
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<Int32Enum>__set_Value(void)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long unaff_x21;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  *(undefined1 *)(unaff_x21 + 0xcce) = in_w8;
  if (*(int *)((long)unaff_x20 + 0xc) != 0) {
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(int *)((long)unaff_x20 + 0xc) != *(int *)(*unaff_x20 + 0x20) + 1) goto LAB_03a1d684;
  }
  FUN_031dbb18(0);
LAB_03a1d684:
  lVar5 = unaff_x20[5];
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  if ((int)lVar5 == 1) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000018 = lVar1;
    in_stack_00000020 = lVar2;
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790();
    }
    thunk_FUN_015d01b0(lVar5,&stack0x00000018);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *(ushort *)(lVar5 + 0x132);
    if ((uVar3 & 1) == 0) {
      FUN_015c2790(lVar5);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar5 + 0x132);
    }
    in_stack_00000048 = unaff_x20[4];
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    puVar4 = PTR_DAT_06da6188;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790();
    }
    thunk_FUN_015d01b0(lVar5,&stack0x00000048);
    FUN_03f035c4();
    lVar5 = *(long *)puVar4;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *(ushort *)(lVar5 + 0x132);
    if ((uVar3 & 1) == 0) {
      FUN_015c2790();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar5 + 0x132);
    }
    lVar6 = unaff_x20[4];
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000018 = 0;
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_015c2790();
    }
    FUN_04e91978(&stack0x00000018,lVar1,lVar2,lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 8));
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790();
    }
    lVar5 = **(long **)(lVar5 + 0xc0);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790();
    }
  }
  thunk_FUN_015d01b0(lVar5);
  return;
}


