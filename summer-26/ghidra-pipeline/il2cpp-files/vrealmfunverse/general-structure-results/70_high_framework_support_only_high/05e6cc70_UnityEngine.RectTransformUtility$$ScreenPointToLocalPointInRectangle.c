/*
FUNCTION_NAME: UnityEngine.RectTransformUtility$$ScreenPointToLocalPointInRectangle
ENTRY_POINT: 05e6cc70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_16;weak_vector_component_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x05e6cfec) */
/* WARNING: Removing unreachable block (ram,0x05e6cff0) */
/* WARNING: Removing unreachable block (ram,0x05e6d25c) */
/* WARNING: Removing unreachable block (ram,0x05e6d270) */
/* WARNING: Removing unreachable block (ram,0x05e6d080) */
/* WARNING: Removing unreachable block (ram,0x05e6d288) */
/* WARNING: Removing unreachable block (ram,0x05e6d298) */

void UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  long unaff_x19;
  void *unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *unaff_x25;
  int iVar9;
  float unaff_s11;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s15;
  float fVar13;
  long in_stack_00000020;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000470;
  float in_stack_00000478;
  float in_stack_000004a4;
  float in_stack_000004ac;
  long in_stack_000004e8;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_87__;
  if ((param_1 == 0) || (*(long *)(in_x9 + 0x20) == 0)) {
LAB_05e6d1e4:
    lVar6 = *(long *)(in_stack_00000020 + 0x28);
  }
  else {
    if (1 < *(int *)(*(long *)(in_x9 + 0x20) + 0x18) * *(int *)(param_1 + 0x18)) {
      uVar7 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar5 = FUN_05c8e378(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
        plVar8 = (long *)(unaff_x19 + 0x20);
        lVar6 = *plVar8;
        if (lVar6 == 0) {
          lVar6 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_89__);
          FUN_03abe564(lVar6,8,4,3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_88__);
          *plVar8 = lVar6;
          thunk_FUN_02bb0e9c(plVar8,lVar6);
          lVar6 = *plVar8;
        }
        *(long *)((long)unaff_x20 + 0x50) = lVar6;
        thunk_FUN_02bb0e9c();
        if (*plVar8 == 0) goto LAB_05e6d1e4;
        uVar4 = FUN_03abe980(*plVar8,*(undefined8 *)puVar3);
        *(undefined4 *)((long)unaff_x20 + 0x58) = uVar4;
      }
    }
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_81__;
    lVar6 = *unaff_x21;
    if (lVar6 == 0) goto LAB_05e6d1e4;
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) {
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      goto LAB_05e6d348;
    }
    if (*(long *)(lVar6 + 0x28) == 0) goto LAB_05e6d1e4;
    FUN_038e10a8(&stack0x00000430,*(long *)(lVar6 + 0x28),
                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_81__);
    iVar9 = 0;
    unaff_x25[0xd] = unaff_x25[1];
    unaff_x25[0xc] = *unaff_x25;
    unaff_x25[0xf] = unaff_x25[3];
    unaff_x25[0xe] = unaff_x25[2];
    unaff_x25[0x11] = unaff_x25[5];
    unaff_x25[0x10] = unaff_x25[4];
    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_77__;
    while (uVar5 = FUN_0476420c(&stack0x00000490,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
      fVar11 = in_stack_000004a4;
      fVar10 = in_stack_000004ac;
      if (in_stack_000004a4 < fStack0000000000000068) {
        fVar11 = fStack0000000000000068;
        fVar10 = in_stack_000004ac - (fStack0000000000000068 - in_stack_000004a4);
      }
      if (unaff_s11 + fStack0000000000000068 < fVar10 + fVar11) {
        fVar10 = fVar10 - ((fVar10 + fVar11) - (unaff_s11 + fStack0000000000000068));
      }
      uVar7 = *(undefined8 *)((long)unaff_x20 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c8e378(uVar7,0,0);
      lVar6 = *unaff_x21;
      if (lVar6 == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_05e6d348;
      }
      if (*(long *)(lVar6 + 0x20) == 0) {
        if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        goto LAB_05e6d348;
      }
      FUN_038e10a8(&stack0x00000430,*(long *)(lVar6 + 0x20),*(undefined8 *)puVar2);
      unaff_x25[7] = unaff_x25[1];
      unaff_x25[6] = *unaff_x25;
      unaff_x25[9] = unaff_x25[3];
      unaff_x25[8] = unaff_x25[2];
      unaff_x25[0xb] = unaff_x25[5];
      unaff_x25[10] = unaff_x25[4];
      while (uVar5 = FUN_0476420c(&stack0x00000460,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        fVar13 = in_stack_00000470;
        fVar12 = in_stack_00000478;
        if (in_stack_00000470 < fStack0000000000000074) {
          fVar13 = fStack0000000000000074;
          fVar12 = in_stack_00000478 - (fStack0000000000000074 - in_stack_00000470);
        }
        if (unaff_s15 + fStack0000000000000074 < fVar12 + fVar13) {
          fVar12 = fVar12 - ((fVar12 + fVar13) - (unaff_s15 + fStack0000000000000074));
        }
        memcpy(&stack0x000002e8,unaff_x20,0x138);
        FUN_05e6359c(fVar13,fVar11,fVar12,fVar10,fStack0000000000000074,fStack0000000000000068,
                     uStack000000000000006c,uStack0000000000000070);
        iVar9 = iVar9 + 1;
        if ((0x3c < iVar9) && (*(long *)((long)unaff_x20 + 0x50) != 0)) {
          if (*(long *)(unaff_x19 + 0x20) == 0) {
            if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            goto LAB_05e6d348;
          }
          uVar4 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3);
          *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar4;
          memcpy(&stack0x000001b0,unaff_x20,0x138);
          FUN_05e618b0();
          iVar9 = 0;
          *(undefined4 *)((long)unaff_x20 + 0x58) = *(undefined4 *)((long)unaff_x20 + 0x5c);
        }
      }
      FUN_04764208(&stack0x00000460,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    }
    FUN_04764208(&stack0x00000490,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_76__);
    if ((*(long *)((long)unaff_x20 + 0x50) == 0) || (iVar9 < 1)) {
LAB_05e6d0c4:
      if (*(long *)(in_stack_00000020 + 0x28) == in_stack_000004e8) {
        return;
      }
      goto LAB_05e6d348;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar4 = FUN_03abe980(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3);
      *(undefined4 *)((long)unaff_x20 + 0x5c) = uVar4;
      memcpy(&stack0x00000078,unaff_x20,0x138);
      FUN_05e618b0();
      goto LAB_05e6d0c4;
    }
    lVar6 = *(long *)(in_stack_00000020 + 0x28);
  }
  if (lVar6 == in_stack_000004e8) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e6d348:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


