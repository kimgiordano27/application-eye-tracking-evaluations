/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 05d115e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_chromatic(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long unaff_x24;
  float fVar11;
  undefined4 uVar12;
  float unaff_s8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  float fStack000000000000005c;
  long *in_stack_00000060;
  long *in_stack_00000068;
  
  FUN_02fe925c(PTR_DAT_06fb63e8);
  FUN_02fe925c(PTR_DAT_06fb8790);
  *(undefined1 *)(unaff_x24 + 0x847) = 1;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000058 = 0;
  fStack000000000000005c = 0.0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (*unaff_x19 == 0) goto LAB_05d11a0c;
  *(undefined1 *)(*unaff_x19 + 0x10) = 0;
  if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05d11a0c;
  fVar11 = (float)FUN_06905eb0(*(long *)(unaff_x20 + 0x18),0);
  FUN_05d11a10(unaff_s8 / fVar11,*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000068,&stack0x00000060
               ,&stack0x0000005c);
  fVar11 = fStack000000000000005c;
  uVar3 = in_stack_00000058;
  uVar12 = uStack0000000000000054;
  uStack0000000000000054 = uStack0000000000000010._4_4_;
  uVar2 = uStack0000000000000054;
  in_stack_00000058 = uStack0000000000000010._8_4_;
  uVar4 = in_stack_00000058;
  uStack0000000000000054 = uVar12;
  in_stack_00000058 = uVar3;
  if (0.0 <= fStack000000000000005c) {
    if (1.0 < fStack000000000000005c) {
      if ((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000060 == (long *)0x0))
      goto LAB_05d11a0c;
      (**(code **)(*in_stack_00000060 + 0x1a8))();
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18), lVar6 == 0)) goto LAB_05d11a0c;
      FUN_05cc3cb0(*(undefined8 *)(unaff_x20 + 0x18),lVar6 + 0x20,0);
      plVar10 = in_stack_00000068;
      puVar1 = PTR_DAT_06fb8790;
      in_stack_00000028 = uStack0000000000000008;
      in_stack_00000020 = in_stack_00000000;
      uStack000000000000002c = uStack000000000000000c;
      in_stack_00000030 = uStack0000000000000010;
      lVar6 = *(long *)PTR_DAT_06fb8790;
      uStack0000000000000034 = uVar2;
      in_stack_00000038 = uVar4;
      param_2 = uStack000000000000000c;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar6 = *(long *)puVar1;
      }
      if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar10 == (long *)0x0)) goto LAB_05d11a0c;
      puVar8 = *(undefined4 **)(lVar6 + 0xb8);
      lVar6 = *plVar10;
      puVar5 = &stack0x00000020;
      goto OVRPlugin__get_monoscopic;
    }
    if ((((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000068 == (long *)0x0)) ||
        ((**(code **)(*in_stack_00000068 + 0x1a8))(), *(long *)(unaff_x20 + 0x20) == 0)) ||
       (in_stack_00000060 == (long *)0x0)) goto LAB_05d11a0c;
    (**(code **)(*in_stack_00000060 + 0x1a8))();
  }
  else {
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (in_stack_00000068 == (long *)0x0)) goto LAB_05d11a0c;
    (**(code **)(*in_stack_00000068 + 0x1a8))();
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10), lVar6 == 0)) goto LAB_05d11a0c;
    FUN_05cc3cb0(*(undefined8 *)(unaff_x20 + 0x18),lVar6 + 0x20,0);
    plVar10 = in_stack_00000060;
    puVar1 = PTR_DAT_06fb8790;
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = in_stack_00000000;
    uStack000000000000004c = uStack000000000000000c;
    in_stack_00000050 = uStack0000000000000010;
    lVar6 = *(long *)PTR_DAT_06fb8790;
    uStack0000000000000054 = uVar2;
    in_stack_00000058 = uVar4;
    param_2 = uStack000000000000000c;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar6 = *(long *)puVar1;
    }
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar10 == (long *)0x0)) goto LAB_05d11a0c;
    puVar8 = *(undefined4 **)(lVar6 + 0xb8);
    lVar6 = *plVar10;
    puVar5 = &stack0x00000040;
OVRPlugin__get_monoscopic:
    (**(code **)(lVar6 + 0x1a8))(*puVar8,plVar10,puVar5);
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((lVar6 == 0) || (lVar7 = *(long *)(lVar6 + 0x10), lVar7 == 0)) goto LAB_05d11a0c;
  lVar6 = *(long *)(lVar6 + 0x18);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    if (lVar6 == 0) goto LAB_05d11a0c;
    if (*(char *)(lVar6 + 0x10) != '\0') {
      lVar7 = *unaff_x19;
      if (lVar7 == 0) goto LAB_05d11a0c;
      *(undefined1 *)(lVar7 + 0x10) = 1;
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_05d11a0c;
      FUN_05d11cb4(*(long *)(lVar7 + 0x18),*(undefined8 *)(lVar6 + 0x18),0);
      lVar6 = *unaff_x19;
      if ((lVar6 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05d11a0c;
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x05d11948;
    }
  }
  else {
    if (lVar6 == 0) goto LAB_05d11a0c;
    lVar9 = *unaff_x19;
    if (*(char *)(lVar6 + 0x10) == '\0') {
      if (lVar9 == 0) goto LAB_05d11a0c;
      *(undefined1 *)(lVar9 + 0x10) = 1;
      if (*(long *)(lVar9 + 0x18) == 0) goto LAB_05d11a0c;
      FUN_05d11cb4(*(long *)(lVar9 + 0x18),*(undefined8 *)(lVar7 + 0x18),0);
      lVar6 = *unaff_x19;
      if ((lVar6 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_05d11a0c;
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x05d11948:
      if (lVar7 == 0) goto LAB_05d11a0c;
      FUN_05cc3684(lVar6 + 0x20,lVar7 + 0x20,0);
    }
    else {
      if (lVar9 == 0) goto LAB_05d11a0c;
      *(undefined1 *)(lVar9 + 0x10) = 1;
      if (*(long *)(lVar9 + 0x18) == 0) goto LAB_05d11a0c;
      FUN_05d11cb4(*(long *)(lVar9 + 0x18),*(undefined8 *)(lVar7 + 0x18),0);
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) || (*(long *)(lVar6 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_05d11a0c;
      FUN_05d11d94(fVar11,*(long *)(lVar6 + 0x10) + 0x18,*(long *)(lVar6 + 0x18) + 0x18,
                   *unaff_x19 + 0x18);
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if (((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) ||
         ((*(long *)(lVar6 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_05d11a0c;
      FUN_05cc35b4(fVar11,*(long *)(lVar6 + 0x10) + 0x20,*(long *)(lVar6 + 0x18) + 0x20,
                   *unaff_x19 + 0x20,0);
    }
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if (((lVar6 != 0) && (lVar7 = *(long *)(lVar6 + 0x10), lVar7 != 0)) &&
     (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    lVar9 = *unaff_x19;
    if (*(int *)(*(long *)PTR_DAT_06fb63e8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar12 = FUN_05d11f6c(fVar11,lVar7 + 0x3c,lVar6 + 0x3c);
    if (lVar9 != 0) {
      *(undefined4 *)(lVar9 + 0x3c) = uVar12;
      *(undefined4 *)(lVar9 + 0x40) = param_2;
      *(undefined4 *)(lVar9 + 0x44) = param_3;
      return;
    }
  }
LAB_05d11a0c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


