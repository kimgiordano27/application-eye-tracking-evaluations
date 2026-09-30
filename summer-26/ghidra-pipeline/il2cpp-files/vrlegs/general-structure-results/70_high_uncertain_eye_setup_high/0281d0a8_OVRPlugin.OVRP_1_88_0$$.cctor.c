/*
FUNCTION_NAME: OVRPlugin.OVRP_1_88_0$$.cctor
ENTRY_POINT: 0281d0a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_OVRP_1_88_0___cctor(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  int unaff_w25;
  int unaff_w26;
  long *unaff_x28;
  undefined1 auVar9 [16];
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  ushort uStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  
  *(undefined8 *)*unaff_x19 = param_1;
  *(undefined8 *)(*unaff_x19 + 8) = param_2;
  if (unaff_w20 < 1) {
    in_stack_00000050._4_4_ = in_stack_00000068._4_4_;
    lVar5 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    pcVar6 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    if (*pcVar6 == '\0') {
      in_stack_00000058 = 0;
    }
    else {
      FUN_01ba9478((long)&stack0x00000050 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8);
      uVar2 = uStack0000000000000080;
      _uStack0000000000000080 = 0;
      in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar2);
      FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
      in_stack_00000058 = _uStack0000000000000080;
    }
    FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
    iVar3 = _uStack0000000000000080;
    lVar5 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01a46ff8();
    }
    pcVar6 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
    if (((-0x1d < unaff_w20) && (0x34 < iVar3)) && (*pcVar6 != '\0')) {
      uVar7 = *(undefined8 *)*unaff_x19;
      uVar8 = *(undefined8 *)(*unaff_x19 + 8);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar9 = FUN_027d3bc8(uVar7,uVar8,0);
      *unaff_x19 = auVar9;
    }
    if (-1 < unaff_w20) goto LAB_0281d598;
    if (0 < unaff_w20 + unaff_w26 + 0x1c) {
      uVar7 = *(undefined8 *)*unaff_x19;
      uVar8 = *(undefined8 *)(*unaff_x19 + 8);
      auVar1 = *unaff_x19;
      auVar9 = *unaff_x19;
      if (unaff_w20 < -0x1c) {
        _uStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar9 = FUN_027d3e50(uVar7,uVar8,_uStack0000000000000080,in_stack_00000088,0);
        *unaff_x19 = auVar9;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - unaff_w20,0);
        uVar7 = in_stack_00000070;
        uVar8 = in_stack_00000078;
      }
      else {
        _uStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,-unaff_w20,0);
        uVar7 = _uStack0000000000000080;
        uVar8 = in_stack_00000088;
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar7 = _uStack0000000000000080;
          uVar8 = in_stack_00000088;
          auVar9 = auVar1;
        }
      }
      goto LAB_0281d58c;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    in_stack_00000098 = (*(undefined8 **)(*unaff_x28 + 0xb8))[1];
    in_stack_00000090 = **(undefined8 **)(*unaff_x28 + 0xb8);
    *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000098;
    *(undefined8 *)*unaff_x19 = in_stack_00000090;
  }
  else {
    if (0x1d < unaff_w20 + unaff_w26) {
LAB_0281d54c:
      uVar7 = 2;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
    if (unaff_w20 + unaff_w26 == 0x1d) {
      if (unaff_w20 < 2) {
        _uStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,0x99999999,0x99999999,0x19999999,0,0,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = FUN_027d432c();
        if ((uVar4 & 1) != 0) {
          in_stack_00000050._4_4_ = in_stack_00000068._4_4_;
          lVar5 = *(long *)(*(long *)PTR_DAT_03cfe4f0 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01a46ff8();
          }
          pcVar6 = (char *)thunk_FUN_01a59484((long)&stack0x00000050 + 4,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
          if (*pcVar6 == '\0') {
            in_stack_00000058 = 0;
          }
          else {
            FUN_01ba9478((long)&stack0x00000050 + 4,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8
                        );
            uVar2 = uStack0000000000000080;
            _uStack0000000000000080 = 0;
            in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar2);
            FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
            in_stack_00000058 = _uStack0000000000000080;
          }
          FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
          iVar3 = _uStack0000000000000080;
          lVar5 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01a46ff8();
          }
          pcVar6 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                              *(undefined8 *)
                                               (*(long *)(*(long *)(lVar5 + 0xc0) + 8) + 0x80));
          if ((0x35 < iVar3) && (*pcVar6 != '\0')) goto LAB_0281d54c;
        }
      }
      else {
        _uStack0000000000000080 = 0;
        in_stack_00000088 = 0;
        FUN_027cf91c(&stack0x00000080,1,0,0,0,unaff_w20 + -1,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar9 = FUN_027d3e50();
        *unaff_x19 = auVar9;
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        FUN_027cf91c(&stack0x00000070,0x99999999,0x99999999,0x19999999,0,0,0);
        uVar4 = FUN_027d4568(auVar9._0_8_,auVar9._8_8_,in_stack_00000070,in_stack_00000078,0);
        if ((uVar4 & 1) != 0) goto LAB_0281d54c;
      }
      auVar1 = *unaff_x19;
      auVar9 = *unaff_x19;
      _uStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cee20(&stack0x00000080,10,0);
      uVar7 = _uStack0000000000000080;
      uVar8 = in_stack_00000088;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar7 = _uStack0000000000000080;
        uVar8 = in_stack_00000088;
        auVar9 = auVar1;
      }
LAB_0281d58c:
      auVar9 = FUN_027d3da0(auVar9._0_8_,auVar9._8_8_,uVar7,uVar8,0);
    }
    else {
      _uStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cf91c(&stack0x00000080,1,0,0,0,unaff_w20,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar9 = FUN_027d3e50();
    }
    *unaff_x19 = auVar9;
LAB_0281d598:
    if (unaff_w25 == 0x2d) {
      uVar7 = *(undefined8 *)*unaff_x19;
      uVar8 = *(undefined8 *)(*unaff_x19 + 8);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar9 = FUN_027d3bc0(uVar7,uVar8,0);
      *unaff_x19 = auVar9;
      uVar7 = 1;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
  }
  uVar7 = 1;
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
  if (*(long *)(in_stack_00000048 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


