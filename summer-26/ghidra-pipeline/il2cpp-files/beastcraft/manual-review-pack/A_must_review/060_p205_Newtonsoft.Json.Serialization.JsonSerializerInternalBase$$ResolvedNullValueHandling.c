/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ResolvedNullValueHandling
ENTRY_POINT: 055cd11c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x055cd570) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ResolvedNullValueHandling(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar6;
  uint uVar7;
  int *unaff_x20;
  long *unaff_x21;
  undefined1 auVar8 [16];
  undefined4 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  int iStack0000000000000044;
  undefined4 *in_stack_00000048;
  
  iStack0000000000000044 = *unaff_x20;
  lVar6 = *(long *)(unaff_x20 + 8);
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000028 = 0;
  if (iStack0000000000000044 == 0) {
    _uStack0000000000000030 = *(undefined1 (*) [16])(unaff_x20 + 0xe);
    unaff_x20[0xe] = 0;
    unaff_x20[0xf] = 0;
    unaff_x20[0x10] = 0;
    unaff_x20[0x11] = 0;
    iStack0000000000000044 = -1;
    *unaff_x20 = -1;
LAB_055cd204:
    FUN_0552e790(&stack0x00000030,0);
    auVar8 = _uStack0000000000000030;
  }
  else {
    auVar8 = ZEXT816(0);
    if (iStack0000000000000044 - 4U < 0xfffffffd) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar2 = FUN_055c9924(lVar6);
      *(undefined8 *)(in_stack_00000048 + 0xc) = uVar2;
      thunk_FUN_02ee2be8();
      if (*(long *)(in_stack_00000048 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar3 = FUN_0566d74c(*(long *)(in_stack_00000048 + 0xc),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      _uStack0000000000000030 = FUN_0567a39c(lVar3,0,0);
      uVar4 = FUN_0552e778(&stack0x00000030,0);
      if ((uVar4 & 1) == 0) {
        iStack0000000000000044 = 0;
        *in_stack_00000048 = 0;
        *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _uStack0000000000000030;
        thunk_FUN_02ee2be8(in_stack_00000048 + 0xe,0);
        puVar1 = in_stack_00000048;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*unaff_x21,extraout_x1,in_stack_00000048);
        }
        FUN_0384327c(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a83160);
        return;
      }
      goto LAB_055cd204;
    }
  }
  if ((iStack0000000000000044 == 1) || (iStack0000000000000044 == 2)) {
    iStack0000000000000044 = -1;
    _uStack0000000000000030 = *(undefined1 (*) [16])(in_stack_00000048 + 0xe);
    *(undefined8 *)(in_stack_00000048 + 0xe) = 0;
    *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
    *in_stack_00000048 = 0xffffffff;
LAB_055cd28c:
    FUN_0552e790(&stack0x00000030,0);
LAB_055cd298:
    uVar7 = 0xc;
  }
  else {
    if (iStack0000000000000044 == 3) {
      iStack0000000000000044 = -1;
      _uStack0000000000000030 = *(undefined1 (*) [16])(in_stack_00000048 + 0xe);
      *(undefined8 *)(in_stack_00000048 + 0xe) = 0;
      *(undefined8 *)(in_stack_00000048 + 0x10) = 0;
      *in_stack_00000048 = 0xffffffff;
LAB_055cd258:
      FUN_0552e790(&stack0x00000030,0);
LAB_055cd264:
      uVar7 = 0x13;
      goto LAB_055cd2a0;
    }
    _uStack0000000000000030 = auVar8;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(int *)(lVar6 + 0x44) < 1) {
      plVar5 = *(long **)(lVar6 + 0x28);
      if (*(int *)(lVar6 + 0x3c) < *(int *)(lVar6 + 0x40)) {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        uVar4 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        if ((uVar4 & 1) != 0) {
          FUN_055ca40c(lVar6);
        }
        plVar5 = *(long **)(lVar6 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        uVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        if ((uVar4 & 1) == 0) goto LAB_055cd298;
        plVar5 = *(long **)(lVar6 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar6 = (**(code **)(*plVar5 + 0x2a8))
                          (plVar5,*(undefined8 *)(in_stack_00000048 + 10),
                           *(undefined8 *)(*plVar5 + 0x2b0));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        auVar8 = FUN_0567a39c(lVar6,0,0);
        _uStack0000000000000030 = auVar8;
        uVar4 = FUN_0552e778(&stack0x00000030,0);
        if ((uVar4 & 1) != 0) goto LAB_055cd28c;
        iStack0000000000000044 = 2;
        *in_stack_00000048 = 2;
        *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _uStack0000000000000030;
        thunk_FUN_02ee2be8(in_stack_00000048 + 0xe,0);
        puVar1 = in_stack_00000048;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*unaff_x21,extraout_x1_01,in_stack_00000048);
        }
        FUN_0384327c(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a83160);
      }
      else {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        uVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        if ((uVar4 & 1) == 0) goto LAB_055cd264;
        plVar5 = *(long **)(lVar6 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar6 = (**(code **)(*plVar5 + 0x2a8))
                          (plVar5,*(undefined8 *)(in_stack_00000048 + 10),
                           *(undefined8 *)(*plVar5 + 0x2b0));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        auVar8 = FUN_0567a39c(lVar6,0,0);
        _uStack0000000000000030 = auVar8;
        uVar4 = FUN_0552e778(&stack0x00000030,0);
        if ((uVar4 & 1) != 0) goto LAB_055cd258;
        iStack0000000000000044 = 3;
        *in_stack_00000048 = 3;
        *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _uStack0000000000000030;
        thunk_FUN_02ee2be8(in_stack_00000048 + 0xe,0);
        puVar1 = in_stack_00000048;
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02e9a04c(*unaff_x21,extraout_x1_02,in_stack_00000048);
        }
        FUN_0384327c(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a83160);
      }
    }
    else {
      lVar6 = FUN_055ca6a4(lVar6,*(undefined8 *)(in_stack_00000048 + 10));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      auVar8 = FUN_0567a39c(lVar6,0,0);
      _uStack0000000000000030 = auVar8;
      uVar4 = FUN_0552e778(&stack0x00000030,0);
      if ((uVar4 & 1) != 0) goto LAB_055cd28c;
      iStack0000000000000044 = 1;
      *in_stack_00000048 = 1;
      *(undefined1 (*) [16])(in_stack_00000048 + 0xe) = _uStack0000000000000030;
      thunk_FUN_02ee2be8(in_stack_00000048 + 0xe,0);
      puVar1 = in_stack_00000048;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02e9a04c(*unaff_x21,extraout_x1_00,in_stack_00000048);
      }
      FUN_0384327c(puVar1 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a83160);
    }
    uVar7 = 5;
  }
LAB_055cd2a0:
  if (iStack0000000000000044 < 0) {
    if (*(long *)(in_stack_00000048 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_0566da8c(*(long *)(in_stack_00000048 + 0xc),0);
  }
  if ((uVar7 < 0x14) && ((1 << (ulong)uVar7 & 0x81001U) != 0)) {
    *in_stack_00000048 = 0xfffffffe;
    *(undefined8 *)(in_stack_00000048 + 0xc) = 0;
    thunk_FUN_02ee2be8(in_stack_00000048 + 0xc,0);
    puVar1 = in_stack_00000048;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_0552c984(puVar1 + 2,0);
  }
  return;
}


