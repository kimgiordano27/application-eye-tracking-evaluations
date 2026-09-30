/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$WorldToScreenPoint
ENTRY_POINT: 05e6cd6c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */

void UnityEngine_RectTransformUtility__WorldToScreenPoint(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int iVar6;
  undefined8 *unaff_x27;
  float unaff_s8;
  float unaff_s11;
  float fVar7;
  float fVar8;
  float unaff_s14;
  float fVar9;
  float unaff_s15;
  float fVar10;
  long in_stack_00000020;
  float fStack000000000000004c;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000470;
  float in_stack_00000478;
  float in_stack_000004a4;
  float in_stack_000004ac;
  long in_stack_000004e8;
  
  FUN_038e10a8();
  iVar6 = 0;
  unaff_x25[0xd] = unaff_x25[1];
  unaff_x25[0xc] = *unaff_x25;
  unaff_x25[0xf] = unaff_x25[3];
  unaff_x25[0xe] = unaff_x25[2];
  fStack000000000000004c = unaff_s11 + unaff_s14;
  unaff_x25[0x11] = unaff_x25[5];
  unaff_x25[0x10] = unaff_x25[4];
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
  while (uVar3 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
    fVar8 = in_stack_000004a4;
    fVar7 = in_stack_000004ac;
    if (in_stack_000004a4 < unaff_s14) {
      fVar8 = unaff_s14;
      fVar7 = in_stack_000004ac - (unaff_s14 - in_stack_000004a4);
    }
    if (fStack000000000000004c < fVar7 + fVar8) {
      fVar7 = fVar7 - ((fVar7 + fVar8) - fStack000000000000004c);
    }
    uVar5 = *(undefined8 *)((long)unaff_x20 + 0xa8);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c8e378(uVar5,0,0);
    lVar4 = *unaff_x21;
    if (lVar4 == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e6d348;
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_05e6d348;
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e6d348;
    }
    FUN_038e10a8(&stack0x00000430,*(long *)(lVar4 + 0x20),*unaff_x27);
    unaff_x25[7] = unaff_x25[1];
    unaff_x25[6] = *unaff_x25;
    unaff_x25[9] = unaff_x25[3];
    unaff_x25[8] = unaff_x25[2];
    unaff_x25[0xb] = unaff_x25[5];
    unaff_x25[10] = unaff_x25[4];
    while (uVar3 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      fVar10 = in_stack_00000470;
      fVar9 = in_stack_00000478;
      if (in_stack_00000470 < fStack0000000000000074) {
        fVar10 = fStack0000000000000074;
        fVar9 = in_stack_00000478 - (fStack0000000000000074 - in_stack_00000470);
      }
      if (unaff_s15 + unaff_s8 < fVar9 + fVar10) {
        fVar9 = fVar9 - ((fVar9 + fVar10) - (unaff_s15 + unaff_s8));
      }
      memcpy(&stack0x000002e8,unaff_x20,0x138);
      FUN_05e6359c(fVar10,fVar8,fVar9,fVar7,fStack0000000000000074,fStack0000000000000068,
                   uStack000000000000006c,uStack0000000000000070);
      iVar6 = iVar6 + 1;
      unaff_s14 = fStack0000000000000068;
      if ((0x3c < iVar6) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
        if (*(long *)(unaff_x19 + 0x20) == 0) {
          if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_05e6d348;
        }
        uVar2 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*unaff_x24);
        *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar2;
        memcpy(&stack0x000001b0,unaff_x20,0x138);
        FUN_05e618b0();
        iVar6 = 0;
        *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
      }
    }
    FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  }
  FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
  if ((*(long *)((long)unaff_x20 + 0x50) != 0) && (0 < iVar6)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05e6d348;
    }
    uVar2 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*unaff_x24);
    *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar2;
    memcpy(&stack0x00000078,unaff_x20,0x138);
    FUN_05e618b0();
  }
  if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
    return;
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


