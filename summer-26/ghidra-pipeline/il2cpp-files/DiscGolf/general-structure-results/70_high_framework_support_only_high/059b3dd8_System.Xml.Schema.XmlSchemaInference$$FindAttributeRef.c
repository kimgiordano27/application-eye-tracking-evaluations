/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaInference$$FindAttributeRef
ENTRY_POINT: 059b3dd8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_14;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_20
*/


/* WARNING: Removing unreachable block (ram,0x059b3ec0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Xml_Schema_XmlSchemaInference__FindAttributeRef(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long *unaff_x26;
  long in_stack_00000050;
  int *in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000f0;
  undefined4 *in_stack_000000f8;
  
  plVar8 = *(long **)(in_stack_000000f8 + 0xe);
                    /* try { // try from 059b3de4 to 05ab3deb has its CatchHandler @ 059b3ee0 */
  uVar6 = FUN_04330580(&stack0x000000d0,**(undefined8 **)(in_x9 + 0xe98));
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860(uVar6,uVar6);
  }
                    /* try { // try from 059b3df8 to 05ab3dff has its CatchHandler @ 059b3edc */
  (**(code **)(*plVar8 + 0x228))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x230));
  lVar11 = *(long *)(in_stack_000000f8 + 0xe);
  uVar9 = *(undefined8 *)(in_stack_000000f8 + 0x18);
  uVar6 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
  FUN_03b78e40(uVar6,uVar9,*(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined8 *)(lVar11 + 0x188) = uVar6;
  LeanTween__value(lVar11 + 0x188,uVar6);
  plVar8 = *(long **)(in_stack_000000f8 + 0xe);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = (**(code **)(*plVar8 + 0x308))(plVar8,*(undefined8 *)(*plVar8 + 0x310));
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059b3f14 to 05ab3f17 has its CatchHandler @ 059b3f24 */
    FUN_02d96860();
  }
  _in_stack_000000a0 = FUN_0481d044(lVar11,0,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
  uVar4 = FUN_04b88f80(&stack0x000000a0,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
  if ((uVar4 & 1) == 0) {
    in_stack_000000f0._4_4_ = 1;
    *in_stack_000000f8 = 1;
    *(undefined1 (*) [16])(in_stack_000000f8 + 0x20) = _in_stack_000000a0;
    LeanTween__value(in_stack_000000f8 + 0x20,0);
    puVar3 = in_stack_000000f8;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x26,extraout_x1_00,in_stack_000000f8);
    }
    FUN_031e7840(puVar3 + 2,&stack0x000000a0,in_stack_000000f8,
                 *(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo);
  }
  else {
    uVar6 = FUN_04b88fc8(&stack0x000000a0,*(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
    *(undefined8 *)(in_stack_000000f8 + 0x1e) = uVar6;
    LeanTween__value();
    if (in_stack_000000f0._4_4_ == 2) {
      in_stack_000000f0._4_4_ = -1;
      _in_stack_000000c0 = *(undefined1 (*) [16])(in_stack_000000f8 + 0x1a);
      *(undefined8 *)(in_stack_000000f8 + 0x1a) = 0;
      *(undefined8 *)(in_stack_000000f8 + 0x1c) = 0;
      *in_stack_000000f8 = 0xffffffff;
LAB_059b3798:
      FUN_05410190(&stack0x000000c0,0);
      uVar10 = 0x20;
    }
    else {
      if (*(long *)(in_stack_000000f8 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *(long *)(*(long *)(in_stack_000000f8 + 0xc) + 0x38);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = FUN_059b6b30(lVar11,*(undefined8 *)(in_stack_000000f8 + 0x1e),0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      _in_stack_000000c0 = FUN_0555c350(lVar11,0,0);
      uVar4 = FUN_05410178(&stack0x000000c0,0);
      if ((uVar4 & 1) != 0) goto LAB_059b3798;
      in_stack_000000f0._4_4_ = 2;
      *in_stack_000000f8 = 2;
      *(undefined1 (*) [16])(in_stack_000000f8 + 0x1a) = _in_stack_000000c0;
      LeanTween__value(in_stack_000000f8 + 0x1a,0);
      puVar3 = in_stack_000000f8;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x26,extraout_x1,in_stack_000000f8);
      }
      FUN_032003e0(puVar3 + 2,&stack0x000000c0,in_stack_000000f8,
                   *(undefined8 *)OVRPlugin_OVRP_1_46_0_TypeInfo);
      uVar10 = 0x1c;
    }
    if ((in_stack_000000f0._4_4_ < 0) &&
       (plVar8 = *(long **)(in_stack_000000f8 + 0x1e), plVar8 != (long *)0x0)) {
      lVar11 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_059b39e4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_069fbff0,0);
LAB_059b39e4:
      (*(code *)*puVar5)(plVar8,puVar5[1]);
    }
    if ((uVar10 | 0x20) != 0x20) goto LAB_059b3b6c;
    *(undefined8 *)(in_stack_000000f8 + 0x1e) = 0;
    LeanTween__value(in_stack_000000f8 + 0x1e,0);
    plVar8 = *(long **)(in_stack_000000f8 + 0xe);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059b3ec8 to 05ab3ecb has its CatchHandler @ 059b3ee8 */
      FUN_02d96860();
    }
    lVar11 = (**(code **)(*plVar8 + 0x318))(plVar8,*(undefined8 *)(*plVar8 + 800));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059b3ecc to 05ab3ecf has its CatchHandler @ 059b3ee4 */
      FUN_02d96860();
    }
    _in_stack_00000090 = FUN_0481d044(lVar11,0,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
    uVar4 = FUN_04b88f80(&stack0x00000090,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
    if ((uVar4 & 1) != 0) {
      plVar8 = (long *)FUN_04b88fc8(&stack0x00000090,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
      if (plVar8 == (long *)0x0) {
        *(undefined8 *)(in_stack_000000f8 + 0x10) = 0;
      }
      else {
        lVar11 = *(long *)OVRPlugin_OVRP_1_58_0_TypeInfo;
        bVar1 = *(byte *)(lVar11 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
LAB_059b3ae0:
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar8);
        }
        *(long **)(in_stack_000000f8 + 0x10) = plVar8;
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar11))
        goto LAB_059b3ae0;
      }
      LeanTween__value(in_stack_000000f8 + 0x10,plVar8);
      *(undefined8 *)(in_stack_000000f8 + 0x18) = 0;
      LeanTween__value(in_stack_000000f8 + 0x18,0);
      uVar10 = 0x23;
      goto LAB_059b3b6c;
    }
    in_stack_000000f0._4_4_ = 3;
    *in_stack_000000f8 = 3;
    *(undefined1 (*) [16])(in_stack_000000f8 + 0x24) = _in_stack_00000090;
    LeanTween__value(in_stack_000000f8 + 0x24,0);
    puVar3 = in_stack_000000f8;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x26,extraout_x1_01,in_stack_000000f8);
    }
    FUN_031e7840(puVar3 + 2,&stack0x00000090,in_stack_000000f8,
                 *(undefined8 *)OVRPlugin_OVRP_1_47_0_TypeInfo);
  }
  uVar10 = 0x1c;
LAB_059b3b6c:
  if (*in_stack_00000058 < 0) {
    FUN_0554d088(*in_stack_00000060 + 0x48,0);
  }
  puVar3 = in_stack_000000f8;
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if ((uVar10 == 0x23) || (uVar10 == 0)) {
    *(undefined8 *)(in_stack_000000f8 + 0x14) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x16) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x12) = 0;
    if (*(int *)(*(long *)PTR_DAT_06a0d410 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_0554ab48(puVar3 + 10,0);
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar6 = FUN_059b21e0(uVar4,*(undefined8 *)(in_stack_000000f8 + 0x10),
                           *(undefined8 *)(in_stack_000000f8 + 0xc),
                           *(undefined8 *)(in_stack_000000f8 + 10));
    }
    else {
      lVar11 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo);
      FUN_047e8068(lVar11,*(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_047e83a0(lVar11,*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo);
      if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      in_stack_00000088 =
           FUN_0481d028(*(long *)(lVar11 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo);
      uVar4 = FUN_047e6248(&stack0x00000088,*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo);
      if ((uVar4 & 1) == 0) {
        in_stack_000000f0._4_4_ = 4;
        *in_stack_000000f8 = 4;
        *(undefined8 *)(in_stack_000000f8 + 0x28) = in_stack_00000088;
        LeanTween__value(in_stack_000000f8 + 0x28,0);
        puVar3 = in_stack_000000f8;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02df485c(*unaff_x26,extraout_x1_02,in_stack_000000f8);
        }
        FUN_031f3ca8(puVar3 + 2,&stack0x00000088,in_stack_000000f8,
                     *(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
        return;
      }
      uVar6 = FUN_047e6288(&stack0x00000088,*(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo);
    }
    puVar2 = OVRPlugin_OVRP_1_49_0_TypeInfo;
    *in_stack_000000f8 = 0xfffffffe;
    *(undefined8 *)(in_stack_000000f8 + 0xe) = 0;
    LeanTween__value(in_stack_000000f8 + 0xe,0);
    *(undefined8 *)(in_stack_000000f8 + 0x10) = 0;
    LeanTween__value(in_stack_000000f8 + 0x10,0);
    puVar3 = in_stack_000000f8;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(puVar3 + 2,uVar6,*(undefined8 *)puVar2);
  }
  return;
}


