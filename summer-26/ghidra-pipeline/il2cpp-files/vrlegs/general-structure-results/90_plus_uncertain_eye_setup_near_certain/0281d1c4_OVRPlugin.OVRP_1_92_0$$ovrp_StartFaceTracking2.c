/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StartFaceTracking2
ENTRY_POINT: 0281d1c4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_92_0__ovrp_StartFaceTracking2(void)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_x9;
  undefined1 (*unaff_x19) [16];
  int unaff_w20;
  int unaff_w25;
  int unaff_w26;
  long *unaff_x28;
  undefined1 auVar8 [16];
  long in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  ushort uStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  
  lVar4 = *(long *)(in_x9 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  pcVar5 = (char *)thunk_FUN_01a59484(&stack0x00000054,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (*pcVar5 == '\0') {
    in_stack_00000058 = 0;
  }
  else {
    FUN_01ba9478(&stack0x00000054,&stack0x00000080,*(undefined8 *)PTR_DAT_03cfe4f8);
    uVar2 = uStack0000000000000080;
    _uStack0000000000000080 = 0;
    in_stack_00000070 = CONCAT44(in_stack_00000070._4_4_,(uint)uVar2);
    FUN_02241190(&stack0x00000080,&stack0x00000070,*(undefined8 *)PTR_DAT_03cc1828);
    in_stack_00000058 = _uStack0000000000000080;
  }
  FUN_01ba9478(&stack0x00000058,&stack0x00000080,*(undefined8 *)PTR_DAT_03cc1820);
  iVar3 = _uStack0000000000000080;
  lVar4 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  pcVar5 = (char *)thunk_FUN_01a59484(&stack0x00000058,
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  if (((-0x1d < unaff_w20) && (0x34 < iVar3)) && (*pcVar5 != '\0')) {
    uVar6 = *(undefined8 *)*unaff_x19;
    uVar7 = *(undefined8 *)(*unaff_x19 + 8);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar8 = FUN_027d3bc8(uVar6,uVar7,0);
    *unaff_x19 = auVar8;
  }
  if (unaff_w20 < 0) {
    if (unaff_w20 + unaff_w26 + 0x1c < 1) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000098 = (*(undefined8 **)(*unaff_x28 + 0xb8))[1];
      in_stack_00000090 = **(undefined8 **)(*unaff_x28 + 0xb8);
      *(undefined8 *)(*unaff_x19 + 8) = in_stack_00000098;
      *(undefined8 *)*unaff_x19 = in_stack_00000090;
      goto OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported;
    }
    uVar6 = *(undefined8 *)*unaff_x19;
    uVar7 = *(undefined8 *)(*unaff_x19 + 8);
    auVar1 = *unaff_x19;
    auVar8 = *unaff_x19;
    if (unaff_w20 < -0x1c) {
      _uStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cf91c(&stack0x00000080,0x10000000,0x3e250261,0x204fce5e,0,0,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      auVar8 = FUN_027d3e50(uVar6,uVar7,_uStack0000000000000080,in_stack_00000088,0);
      *unaff_x19 = auVar8;
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_027cf91c(&stack0x00000070,1,0,0,0,-0x1c - unaff_w20,0);
      uVar6 = in_stack_00000070;
      uVar7 = in_stack_00000078;
    }
    else {
      _uStack0000000000000080 = 0;
      in_stack_00000088 = 0;
      FUN_027cf91c(&stack0x00000080,1,0,0,0,-unaff_w20,0);
      uVar6 = _uStack0000000000000080;
      uVar7 = in_stack_00000088;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        uVar6 = _uStack0000000000000080;
        uVar7 = in_stack_00000088;
        auVar8 = auVar1;
      }
    }
    auVar8 = FUN_027d3da0(auVar8._0_8_,auVar8._8_8_,uVar6,uVar7,0);
    *unaff_x19 = auVar8;
  }
  if (unaff_w25 == 0x2d) {
    uVar6 = *(undefined8 *)*unaff_x19;
    uVar7 = *(undefined8 *)(*unaff_x19 + 8);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar8 = FUN_027d3bc0(uVar6,uVar7,0);
    *unaff_x19 = auVar8;
  }
OVRPlugin_OVRP_1_86_0__ovrp_IsMultimodalHandsControllersSupported:
  if (*(long *)(in_stack_00000048 + 0x28) != in_stack_000000a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


