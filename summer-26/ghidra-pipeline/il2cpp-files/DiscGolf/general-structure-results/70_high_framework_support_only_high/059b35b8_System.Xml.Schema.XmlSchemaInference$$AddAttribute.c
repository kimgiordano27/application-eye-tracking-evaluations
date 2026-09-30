/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaInference$$AddAttribute
ENTRY_POINT: 059b35b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x059b3ec0) */
/* WARNING: Removing unreachable block (ram,0x059b3d68) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Xml_Schema_XmlSchemaInference__AddAttribute(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long lVar9;
  ulong uVar10;
  long in_x9;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  uint uVar13;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar14 [16];
  long in_stack_00000038;
  int *in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  int *in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 *in_stack_000000f8;
  
code_r0x059b35b8:
  puVar6 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
LAB_059b35c0:
  (*(code *)*puVar6)(unaff_x22,puVar6[1]);
LAB_059b35cc:
  plVar7 = in_stack_000000e8;
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(unaff_x21);
  }
  if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *in_stack_000000e8;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x25) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_059b338c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(in_stack_000000e8,*unaff_x25,0);
LAB_059b338c:
  uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
  plVar7 = in_stack_000000e8;
  puVar2 = OVRPlugin_OVRP_1_3_0_TypeInfo;
  if ((uVar10 & 1) != 0) {
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *in_stack_000000e8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_059b33f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(in_stack_000000e8,*unaff_x26,0);
LAB_059b33f0:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (extraout_x1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *extraout_x1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_059b3454;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(extraout_x1,*unaff_x27,0);
LAB_059b3454:
    plVar7 = (long *)(*(code *)*puVar6)(extraout_x1,puVar6[1]);
    do {
      in_stack_000000e0 = plVar7;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x25) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_059b34c0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar7,*unaff_x25,0);
LAB_059b34c0:
      uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      plVar7 = in_stack_000000e0;
      if ((uVar10 & 1) == 0) goto LAB_059b3558;
      if (in_stack_000000e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar9 = *in_stack_000000e0;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x29) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_059b3524;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(in_stack_000000e0,*unaff_x29,0);
LAB_059b3524:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05ced510();
      plVar7 = in_stack_000000e0;
    } while( true );
  }
                    /* try { // try from 059b3948 to 05ab394b has its CatchHandler @ 059b39ec */
                    /* try { // try from 059b394c to 05ab3957 has its CatchHandler @ 059b39e8 */
  if ((-1 < *in_stack_00000040) || (plVar7 = (long *)*in_stack_00000048, plVar7 == (long *)0x0))
  goto LAB_059b3d58;
                    /* try { // try from 059b3958 to 05ab39b7 has its CatchHandler @ 059b3720 */
  lVar9 = *plVar7;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 == 0) goto LAB_059b3990;
  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
  goto LAB_059b3978;
LAB_059b3558:
  unaff_x21 = 0;
  if ((-1 < in_stack_000000f0._4_4_) || (unaff_x22 = (long *)*unaff_x23, unaff_x22 == (long *)0x0))
  goto LAB_059b35cc;
  param_1 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x28) {
        in_x9 = (long)*piVar11;
        goto code_r0x059b35b8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(unaff_x22,*unaff_x28,0);
  goto LAB_059b35c0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_059b3978:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_059b3d4c;
    }
  }
LAB_059b3990:
  puVar6 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff0,0);
LAB_059b3d4c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_059b3d58:
  if (in_stack_00000038 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (*(long *)(in_stack_000000f8 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = FUN_059b1d4c();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
                    /* try { // try from 059b3d80 to 05ab3dab has its CatchHandler @ 059b3ef0 */
  uVar5 = FUN_059b44f8();
  if ((uVar5 < 0x100) || ((uVar5 & 0xff) == 0)) {
    if (*(long *)(in_stack_000000f8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_059b24d8();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    _in_stack_000000d0 = FUN_059b4660();
    if ((in_stack_000000d0 & 0xff) != 0) {
      plVar7 = *(long **)(in_stack_000000f8 + 0xe);
      uVar8 = FUN_04330580(&stack0x000000d0,*(undefined8 *)PTR_DAT_06a0de98);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar8,uVar8);
      }
      (**(code **)(*plVar7 + 0x228))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x230));
      goto LAB_059b369c;
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar8 = thunk_FUN_02dd3144();
      uVar12 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_72_0_TypeInfo);
      FUN_054e8008(uVar8,uVar12,0);
      uVar12 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_71_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar12);
    }
    if (*(long *)(in_stack_000000f8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_059b4788();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    _in_stack_000000c0 = FUN_0555c350(lVar9,0,0);
    uVar10 = FUN_05410178(&stack0x000000c0,0);
    if ((uVar10 & 1) != 0) {
      FUN_05410190(&stack0x000000c0,0);
      if (*(long *)(in_stack_000000f8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar7 = *(long **)(in_stack_000000f8 + 0xe);
      lVar9 = FUN_059b24d8();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      _in_stack_000000b0 = FUN_059b4660();
      uVar8 = FUN_04330580(&stack0x000000b0,*(undefined8 *)PTR_DAT_06a0de98);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar8,uVar8);
      }
      (**(code **)(*plVar7 + 0x228))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x230));
      goto LAB_059b369c;
    }
    in_stack_000000f0._4_4_ = 0;
    *in_stack_000000f8 = 0;
    *(undefined1 (*) [16])(in_stack_000000f8 + 0x1a) = _in_stack_000000c0;
    LeanTween__value(in_stack_000000f8 + 0x1a,0);
    puVar4 = in_stack_000000f8;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2,extraout_x1_04,in_stack_000000f8);
    }
    FUN_032003e0(puVar4 + 2,&stack0x000000c0,in_stack_000000f8,
                 *(undefined8 *)OVRPlugin_OVRP_1_46_0_TypeInfo);
  }
  else {
    if (*(long *)(in_stack_000000f8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05c17684(*(long *)(in_stack_000000f8 + 0xe),1,0);
LAB_059b369c:
    lVar9 = *(long *)(in_stack_000000f8 + 0xe);
    uVar12 = *(undefined8 *)(in_stack_000000f8 + 0x18);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_03b78e40(uVar8,uVar12,*(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined8 *)(lVar9 + 0x188) = uVar8;
    LeanTween__value(lVar9 + 0x188,uVar8);
    plVar7 = *(long **)(in_stack_000000f8 + 0xe);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = (**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    _in_stack_000000a0 = FUN_0481d044(lVar9,0,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
                    /* try { // try from 059b3720 to 05ab384f has its CatchHandler @ 059b3720
                       catch() { ... } // from try @ 059b3720 with catch @ 059b3720
                       catch() { ... } // from try @ 059b38a0 with catch @ 059b3720
                       catch() { ... } // from try @ 059b3958 with catch @ 059b3720
                       catch() { ... } // from try @ 059b39bc with catch @ 059b3720
                       catch() { ... } // from try @ 059b39cc with catch @ 059b3720
                       catch() { ... } // from try @ 059b39e8 with catch @ 059b3720
                       catch() { ... } // from try @ 059b3a1c with catch @ 059b3720
                       catch() { ... } // from try @ 059b3a4c with catch @ 059b3720
                       catch() { ... } // from try @ 059b3a90 with catch @ 059b3720 */
    uVar10 = FUN_04b88f80(&stack0x000000a0,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
    if ((uVar10 & 1) == 0) {
                    /* try { // try from 059b38dc to 05ab38e3 has its CatchHandler @ 059b3a00 */
      in_stack_000000f0._4_4_ = 1;
      *in_stack_000000f8 = 1;
      *(undefined1 (*) [16])(in_stack_000000f8 + 0x20) = _in_stack_000000a0;
      LeanTween__value(in_stack_000000f8 + 0x20,0);
      puVar4 = in_stack_000000f8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 059b3910 to 05ab3923 has its CatchHandler @ 059b39f4 */
        thunk_FUN_02df485c(*(long *)puVar2,extraout_x1_01,in_stack_000000f8);
      }
                    /* try { // try from 059b3924 to 05ab392f has its CatchHandler @ 059b39f0 */
      FUN_031e7840(puVar4 + 2,&stack0x000000a0,in_stack_000000f8,
                   *(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo);
    }
    else {
      uVar8 = FUN_04b88fc8(&stack0x000000a0,*(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
      *(undefined8 *)(in_stack_000000f8 + 0x1e) = uVar8;
      LeanTween__value();
      if (in_stack_000000f0._4_4_ == 2) {
        in_stack_000000f0._4_4_ = -1;
        _in_stack_000000c0 = *(undefined1 (*) [16])(in_stack_000000f8 + 0x1a);
        *(undefined8 *)(in_stack_000000f8 + 0x1a) = 0;
        *(undefined8 *)(in_stack_000000f8 + 0x1c) = 0;
        *in_stack_000000f8 = 0xffffffff;
LAB_059b3798:
        FUN_05410190(&stack0x000000c0,0);
        uVar13 = 0x20;
      }
      else {
        if (*(long *)(in_stack_000000f8 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar9 = *(long *)(*(long *)(in_stack_000000f8 + 0xc) + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar9 = FUN_059b6b30(lVar9,*(undefined8 *)(in_stack_000000f8 + 0x1e),0);
                    /* try { // try from 059b3850 to 05ab3857 has its CatchHandler @ 059b3a5c */
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar14 = FUN_0555c350(lVar9,0,0);
                    /* try { // try from 059b3860 to 05ab387b has its CatchHandler @ 059b38b8 */
        _in_stack_000000c0 = auVar14;
        uVar10 = FUN_05410178(&stack0x000000c0,0);
        if ((uVar10 & 1) != 0) goto LAB_059b3798;
        in_stack_000000f0._4_4_ = 2;
        *in_stack_000000f8 = 2;
        *(undefined1 (*) [16])(in_stack_000000f8 + 0x1a) = _in_stack_000000c0;
                    /* try { // try from 059b388c to 05ab3893 has its CatchHandler @ 059b38a4 */
        LeanTween__value(in_stack_000000f8 + 0x1a,0);
        puVar4 = in_stack_000000f8;
                    /* try { // try from 059b3898 to 05ab389f has its CatchHandler @ 059b38ac */
                    /* try { // try from 059b38a0 to 05ab38db has its CatchHandler @ 059b3720 */
                    /* catch() { ... } // from try @ 059b388c with catch @ 059b38a4 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 059b3898 with catch @ 059b38ac */
          thunk_FUN_02df485c(*(long *)puVar2,extraout_x1_00,in_stack_000000f8);
        }
                    /* catch() { ... } // from try @ 059b3860 with catch @ 059b38b8 */
        FUN_032003e0(puVar4 + 2,&stack0x000000c0,in_stack_000000f8,
                     *(undefined8 *)OVRPlugin_OVRP_1_46_0_TypeInfo);
        uVar13 = 0x1c;
      }
      if ((in_stack_000000f0._4_4_ < 0) &&
         (plVar7 = *(long **)(in_stack_000000f8 + 0x1e), plVar7 != (long *)0x0)) {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_059b39e4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff0,0);
LAB_059b39e4:
                    /* catch() { ... } // from try @ 059b394c with catch @ 059b39e8
                       try { // try from 059b39e8 to 05ab3a17 has its CatchHandler @ 059b3720 */
                    /* catch() { ... } // from try @ 059b3948 with catch @ 059b39ec */
        (*(code *)*puVar6)(plVar7,puVar6[1]);
      }
                    /* catch() { ... } // from try @ 059b3924 with catch @ 059b39f0 */
                    /* catch() { ... } // from try @ 059b3910 with catch @ 059b39f4 */
      if ((uVar13 | 0x20) != 0x20) goto LAB_059b3b6c;
                    /* catch() { ... } // from try @ 059b38dc with catch @ 059b3a00 */
      *(undefined8 *)(in_stack_000000f8 + 0x1e) = 0;
      LeanTween__value(in_stack_000000f8 + 0x1e,0);
      plVar7 = *(long **)(in_stack_000000f8 + 0xe);
                    /* try { // try from 059b3a18 to 05ab3a1b has its CatchHandler @ 059b3a3c */
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 059b3a1c to 05ab3a2b has its CatchHandler @ 059b3720 */
      lVar9 = (**(code **)(*plVar7 + 0x318))(plVar7,*(undefined8 *)(*plVar7 + 800));
                    /* try { // try from 059b3a2c to 05ab3a3b has its CatchHandler @ 059b3a40 */
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* catch() { ... } // from try @ 059b3a18 with catch @ 059b3a3c */
                    /* catch() { ... } // from try @ 059b3a2c with catch @ 059b3a40 */
      _in_stack_00000090 = FUN_0481d044(lVar9,0,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
                    /* try { // try from 059b3a48 to 05ab3a4b has its CatchHandler @ 059b3a98 */
                    /* try { // try from 059b3a4c to 05ab3a7b has its CatchHandler @ 059b3720 */
                    /* catch() { ... } // from try @ 059b39d0 with catch @ 059b3a50 */
                    /* catch() { ... } // from try @ 059b39c8 with catch @ 059b3a54 */
                    /* catch() { ... } // from try @ 059b39b8 with catch @ 059b3a58 */
                    /* catch() { ... } // from try @ 059b3850 with catch @ 059b3a5c */
      uVar10 = FUN_04b88f80(&stack0x00000090,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
      if ((uVar10 & 1) != 0) {
        plVar7 = (long *)FUN_04b88fc8(&stack0x00000090,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo
                                     );
                    /* try { // try from 059b3a7c to 05ab3a7f has its CatchHandler @ 059b3a84 */
        if (plVar7 == (long *)0x0) {
          *(undefined8 *)(in_stack_000000f8 + 0x10) = 0;
        }
        else {
                    /* catch() { ... } // from try @ 059b3a7c with catch @ 059b3a84 */
                    /* try { // try from 059b3a88 to 05ab3a8f has its CatchHandler @ 059b3a98 */
          lVar9 = *(long *)OVRPlugin_OVRP_1_58_0_TypeInfo;
                    /* try { // try from 059b3a90 to 05ab3a9b has its CatchHandler @ 059b3720 */
          bVar1 = *(byte *)(lVar9 + 0x130);
                    /* catch() { ... } // from try @ 059b3a48 with catch @ 059b3a98
                       catch() { ... } // from try @ 059b3a88 with catch @ 059b3a98 */
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
LAB_059b3ae0:
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar7);
          }
          *(long **)(in_stack_000000f8 + 0x10) = plVar7;
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != lVar9))
          goto LAB_059b3ae0;
        }
        LeanTween__value(in_stack_000000f8 + 0x10,plVar7);
        *(undefined8 *)(in_stack_000000f8 + 0x18) = 0;
        LeanTween__value(in_stack_000000f8 + 0x18,0);
        uVar13 = 0x23;
        goto LAB_059b3b6c;
      }
      in_stack_000000f0._4_4_ = 3;
      *in_stack_000000f8 = 3;
      *(undefined1 (*) [16])(in_stack_000000f8 + 0x24) = _in_stack_00000090;
      LeanTween__value(in_stack_000000f8 + 0x24,0);
      puVar4 = in_stack_000000f8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar2,extraout_x1_02,in_stack_000000f8);
      }
      FUN_031e7840(puVar4 + 2,&stack0x00000090,in_stack_000000f8,
                   *(undefined8 *)OVRPlugin_OVRP_1_47_0_TypeInfo);
    }
  }
  uVar13 = 0x1c;
LAB_059b3b6c:
  if (*in_stack_00000058 < 0) {
    FUN_0554d088(*in_stack_00000060 + 0x48,0);
  }
  puVar4 = in_stack_000000f8;
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if ((uVar13 == 0x23) || (uVar13 == 0)) {
    *(undefined8 *)(in_stack_000000f8 + 0x14) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x16) = 0;
    *(undefined8 *)(in_stack_000000f8 + 0x12) = 0;
    if (*(int *)(*(long *)PTR_DAT_06a0d410 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_0554ab48(puVar4 + 10,0);
    if ((uVar10 & 1) == 0) {
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar8 = FUN_059b21e0(uVar10,*(undefined8 *)(in_stack_000000f8 + 0x10),
                           *(undefined8 *)(in_stack_000000f8 + 0xc),
                           *(undefined8 *)(in_stack_000000f8 + 10));
    }
    else {
      lVar9 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo);
      FUN_047e8068(lVar9,*(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_047e83a0(lVar9,*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo);
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      in_stack_00000088 =
           FUN_0481d028(*(long *)(lVar9 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo);
      uVar10 = FUN_047e6248(&stack0x00000088,*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo);
      if ((uVar10 & 1) == 0) {
        in_stack_000000f0._4_4_ = 4;
        *in_stack_000000f8 = 4;
        *(undefined8 *)(in_stack_000000f8 + 0x28) = in_stack_00000088;
        LeanTween__value(in_stack_000000f8 + 0x28,0);
        puVar4 = in_stack_000000f8;
                    /* try { // try from 059b3d18 to 05ab3d3f has its CatchHandler @ 059b3ef4 */
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar2,extraout_x1_03,in_stack_000000f8);
        }
        FUN_031f3ca8(puVar4 + 2,&stack0x00000088,in_stack_000000f8,
                     *(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
        return;
      }
                    /* try { // try from 059b3c54 to 05ab3d17 has its CatchHandler @ 059b3c54
                       catch() { ... } // from try @ 059b3c54 with catch @ 059b3c54
                       catch() { ... } // from try @ 059b3e14 with catch @ 059b3c54
                       catch() { ... } // from try @ 059b3ed0 with catch @ 059b3c54
                       catch() { ... } // from try @ 059b3f30 with catch @ 059b3c54 */
      uVar8 = FUN_047e6288(&stack0x00000088,*(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo);
    }
    puVar3 = OVRPlugin_OVRP_1_49_0_TypeInfo;
    *in_stack_000000f8 = 0xfffffffe;
    *(undefined8 *)(in_stack_000000f8 + 0xe) = 0;
    LeanTween__value(in_stack_000000f8 + 0xe,0);
    *(undefined8 *)(in_stack_000000f8 + 0x10) = 0;
    LeanTween__value(in_stack_000000f8 + 0x10,0);
    puVar4 = in_stack_000000f8;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(puVar4 + 2,uVar8,*(undefined8 *)puVar3);
  }
  return;
}


