/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get
ENTRY_POINT: 058de0c4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_11
*/


int UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  int extraout_var;
  int extraout_var_00;
  long lVar13;
  byte bVar14;
  undefined4 uVar15;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x28;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_000001e0;
  undefined8 uVar20;
  
  piVar10 = (int *)FUN_037b0144(param_1,*(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
  if ((*(long *)(unaff_x25 + 0x1b8) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x25 + 0x1b8) + 0x188), lVar13 == 0)) goto LAB_058de5b8;
  iVar8 = *piVar10;
  puVar11 = (undefined8 *)FUN_037b9bf0(lVar13,*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
  uVar18 = *puVar11;
  uVar7 = FUN_058ddc20();
  if (iVar8 == 0) {
    if (*(int *)(unaff_x19 + 0x128) == unaff_w20) goto LAB_058ddfc8;
    if (0 < *(int *)(unaff_x19 + 0x138)) {
      iVar8 = 0;
      do {
        iVar6 = FUN_03794e9c((int *)(unaff_x19 + 0x138),iVar8,*unaff_x28);
        if (iVar6 == unaff_w20) {
          *(int *)(unaff_x19 + 0x128) = unaff_w20;
          *(int *)(unaff_x19 + 300) = iVar8;
          FUN_03799508(&stack0x00000010,unaff_x19 + 0x160,iVar8,
                       *(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo);
          if (in_stack_000001e0 != 0) {
            *(undefined4 *)(unaff_x19 + 0x130) = *(undefined4 *)(in_stack_000001e0 + 0x194);
            return iVar8;
          }
          goto LAB_058de5b8;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(unaff_x19 + 0x138));
    }
    puVar4 = OVRPlugin_OVRP_1_45_0_TypeInfo;
    if ((unaff_x24 & 1) == 0) {
      return -1;
    }
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_45_0_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar9 = FUN_058de5bc();
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      bVar5 = FUN_058de5bc();
      iVar8 = 0;
      bVar2 = false;
      bVar14 = bVar5 ^ 1;
      uVar15 = 3;
      if ((bVar5 & 1) == 0) {
        uVar15 = 0;
      }
      goto LAB_058de180;
    }
    iVar8 = 0;
    bVar14 = 0;
    bVar2 = false;
    bVar1 = false;
    uVar15 = 1;
  }
  else {
    unaff_w20 = iVar8 + unaff_w20 * 0x1000000;
    if (*(int *)(unaff_x19 + 0x128) == unaff_w20) goto LAB_058ddfc8;
    if ((unaff_x24 & 1) == 0) {
      return -1;
    }
    bVar14 = 0;
    uVar15 = 2;
    bVar2 = true;
LAB_058de180:
    bVar1 = true;
  }
  fVar17 = (float)((ulong)uVar18 >> 0x20);
  if (((*(int *)(unaff_x19 + 0xcc) == 1 & (bVar14 ^ 0xff)) != 0) ||
     (!bVar1 && *(int *)(unaff_x19 + 0xcc) == 0)) {
    if (*(int *)(unaff_x19 + 300) == -1) {
      uVar7 = FUN_058de68c();
      *(undefined4 *)(unaff_x19 + 300) = uVar7;
    }
    else {
      lVar13 = FUN_058ddbdc();
      lVar13 = *(long *)(lVar13 + 0x1d0);
      if (lVar13 == 0) goto LAB_058de5b8;
      *(undefined8 *)(lVar13 + 0x180) = unaff_x21;
      thunk_FUN_02dd37b4(lVar13 + 0x180);
      *(undefined8 *)(lVar13 + 0x188) = unaff_x22;
      thunk_FUN_02dd37b4(lVar13 + 0x188);
      *(undefined4 *)(lVar13 + 0x194) = uVar15;
      *(int *)(lVar13 + 400) = iVar8;
      *(undefined4 *)(lVar13 + 0xfc) = uVar7;
      *(int *)(lVar13 + 0x100) = unaff_w20;
      *(undefined8 *)(lVar13 + 0x1a4) = 0;
      *(undefined8 *)(lVar13 + 0x1ac) = 0;
      *(undefined8 *)(lVar13 + 0x19c) = 0;
      *(undefined4 *)(lVar13 + 0x1b4) = 0;
    }
    if ((bVar2) &&
       (puVar12 = (undefined1 *)FUN_058ddbdc(),
       fVar16 = (float)*(undefined8 *)(puVar12 + 0x1d8) - (float)uVar18,
       fVar17 = (float)((ulong)*(undefined8 *)(puVar12 + 0x1d8) >> 0x20) - fVar17,
       DAT_01208240 <= fVar16 * fVar16 + fVar17 * fVar17)) {
      *(undefined8 *)(puVar12 + 0x1d8) = uVar18;
      *puVar12 = 1;
    }
    iVar8 = *(int *)(unaff_x19 + 300);
    *(int *)(unaff_x19 + 0x128) = unaff_w20;
    goto RenderGraphCompilationCache__Clear;
  }
  if ((bVar14 & 1) != 0) {
    if (*(int *)(unaff_x19 + 0x128) != -1) {
LAB_058ddfc8:
      return *(int *)(unaff_x19 + 300);
    }
    if ((*(long *)(unaff_x19 + 0x78) == 0) ||
       (lVar13 = FUN_0582a780(*(long *)(unaff_x19 + 0x78),0), lVar13 == 0)) {
      uVar20 = 0;
    }
    else {
      auVar19 = FUN_05814738(lVar13,0);
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_03dc64dc(&stack0x00000010,auVar19._0_8_,auVar19._8_8_,
                   *(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
      uVar20 = in_stack_00000010;
    }
    puVar4 = OVRPlugin_OVRP_1_76_0_TypeInfo;
    if (((char)uVar20 != '\0') &&
       (FUN_03dc650c(&stack0x000002a0,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo),
       0 < extraout_var)) {
      FUN_03dc650c(&stack0x000002a0,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_06768418;
      lVar13 = FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)PTR_DAT_06768418);
      if (lVar13 == 0) goto LAB_058de5b8;
      if (*(long **)(lVar13 + 0x78) != (long *)0x0) {
        lVar13 = **(long **)(lVar13 + 0x78);
        bVar14 = *(byte *)(*(long *)
                            Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo
                          + 0x130);
        if ((*(byte *)(lVar13 + 0x130) < bVar14) ||
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar14 * 8 + -8) !=
            *(long *)Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_TypeInfo)) {
          FUN_03dc650c(&stack0x000002a0,*(undefined8 *)puVar4);
          FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)puVar3);
          goto LAB_058de540;
        }
      }
    }
    if ((*(long *)(unaff_x19 + 0xb8) == 0) ||
       (lVar13 = FUN_0582a780(*(long *)(unaff_x19 + 0xb8),0), lVar13 == 0)) {
      uVar20 = 0;
    }
    else {
      auVar19 = FUN_05814738(lVar13,0);
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_03dc64dc(&stack0x00000010,auVar19._0_8_,auVar19._8_8_,
                   *(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
      uVar20 = in_stack_00000010;
    }
    puVar4 = OVRPlugin_OVRP_1_76_0_TypeInfo;
    if (((char)uVar20 != '\0') &&
       (FUN_03dc650c(&stack0x00000270,*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo),
       0 < extraout_var_00)) {
      FUN_03dc650c(&stack0x00000270,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_06768418;
      lVar13 = FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)PTR_DAT_06768418);
      if (lVar13 == 0) {
LAB_058de5b8:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(lVar13 + 0x78) != 0) {
        FUN_03dc650c(&stack0x00000270,*(undefined8 *)puVar4);
        FUN_03fcdf50(&stack0x00000290,0,*(undefined8 *)puVar3);
      }
    }
  }
LAB_058de540:
  iVar8 = FUN_058de68c();
  if ((bVar2) &&
     (puVar12 = (undefined1 *)FUN_058ddbdc(),
     fVar16 = (float)*(undefined8 *)(puVar12 + 0x1d8) - (float)uVar18,
     fVar17 = (float)((ulong)*(undefined8 *)(puVar12 + 0x1d8) >> 0x20) - fVar17,
     DAT_01208240 <= fVar16 * fVar16 + fVar17 * fVar17)) {
    *(undefined8 *)(puVar12 + 0x1d8) = uVar18;
    *puVar12 = 1;
  }
  *(int *)(unaff_x19 + 0x128) = unaff_w20;
  *(int *)(unaff_x19 + 300) = iVar8;
RenderGraphCompilationCache__Clear:
  *(undefined4 *)(unaff_x19 + 0x130) = uVar15;
  return iVar8;
}


