/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance
ENTRY_POINT: 027d6720
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool in_CY;
  long lVar4;
  uint in_w8;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long unaff_x20;
  int unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  ulong uVar10;
  long *unaff_x24;
  ulong uStack0000000000000008;
  long in_stack_00000010;
  ulong uStack0000000000000020;
  long in_stack_00000028;
  undefined4 in_stack_00000030;
  ulong uStack0000000000000038;
  uint uStack0000000000000040;
  long in_stack_00000058;
  
  if (in_CY) {
    in_w8 = unaff_w22;
  }
  uVar6 = 0x11;
  if (in_CY) {
    uVar6 = 1;
  }
  uVar8 = uVar6 | 8;
  uVar2 = in_w8 << 8;
  if (in_w8 >> 0x18 != 0) {
    uVar8 = uVar6;
    uVar2 = in_w8;
  }
  uVar6 = uVar8 | 4;
  uVar3 = uVar2 << 4;
  if (uVar2 >> 0x1c != 0) {
    uVar6 = uVar8;
    uVar3 = uVar2;
  }
  uVar2 = uVar3 << 2;
  uVar8 = uVar6 | 2;
  if (uVar3 >> 0x1e != 0) {
    uVar2 = uVar3;
    uVar8 = uVar6;
  }
  uVar8 = uVar8 + ((int)uVar2 >> 0x1f);
  uStack0000000000000020 = (ulong)uVar8;
  uStack0000000000000038 = *(long *)(unaff_x23 + 8) << (uStack0000000000000020 & 0x3f);
  uStack0000000000000008 = (ulong)(0x20 - uVar8);
  _uStack0000000000000040 =
       CONCAT44(*(undefined4 *)(unaff_x23 + 4),*(undefined4 *)(unaff_x23 + 0xc)) >>
       (uStack0000000000000008 & 0x3f);
  if (unaff_w21 < 0) {
    uVar6 = 3;
    lVar7 = (long)unaff_w21;
    do {
      lVar4 = *unaff_x24;
      if (lVar7 < -8) {
        uVar8 = 1000000000;
      }
      else {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *unaff_x24;
        }
        lVar5 = **(long **)(lVar4 + 0xb8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar5 + 0x18) <= (uint)-(int)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar8 = *(uint *)(lVar5 + lVar7 * -4 + 0x20);
      }
      uVar10 = uStack0000000000000038 & 0xffffffff;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = uVar10 * uVar8;
      uStack0000000000000038 = CONCAT44(uStack0000000000000038._4_4_,(int)uVar10);
      if (uVar6 != 0) {
        iVar9 = 2;
        lVar4 = 1;
        do {
          uVar2 = *(uint *)((long)&stack0x00000038 + lVar4 * 4);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = (uVar10 >> 0x20) + (ulong)uVar2 * (ulong)uVar8;
          *(int *)((long)&stack0x00000038 + lVar4 * 4) = (int)uVar10;
          lVar4 = (long)iVar9;
          iVar9 = iVar9 + 1;
        } while (lVar4 <= (long)(ulong)uVar6);
      }
      if (uVar10 >> 0x1f != 0) {
        uVar6 = uVar6 + 1;
        *(int *)((long)&stack0x00000038 + (ulong)uVar6 * 4) = (int)(uVar10 >> 0x20);
      }
      bVar1 = lVar7 < -9;
      lVar7 = lVar7 + 9;
    } while (bVar1);
  }
  else {
    uVar6 = 3;
  }
  uVar8 = (uint)uStack0000000000000020 & 0x3f;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    iVar9 = *(int *)(unaff_x20 + 4);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar7 = *(long *)(unaff_x20 + 8);
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 8);
    iVar9 = *(int *)(unaff_x20 + 4);
  }
  lVar7 = lVar7 << uVar8;
  if (iVar9 == 0) {
    if (uVar6 == 4) {
LAB_027d6a18:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d51dc(&stack0x00000040,lVar7);
    }
    else {
      if (uVar6 == 5) {
LAB_027d69f4:
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc(&stack0x00000044,lVar7);
        goto LAB_027d6a18;
      }
      if (uVar6 == 6) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc(&stack0x00000048,lVar7);
        goto LAB_027d69f4;
      }
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d51dc((ulong)&stack0x00000038 | 4,lVar7);
    FUN_027d51dc(&stack0x00000038,lVar7);
    uVar6 = 0;
    *(ulong *)(unaff_x23 + 8) = uStack0000000000000038 >> uVar8;
    goto LAB_027d6a78;
  }
  uVar2 = (uint)uStack0000000000000008 & 0x3f;
  in_stack_00000030 =
       (undefined4)
       (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >> uVar2);
  in_stack_00000028 = lVar7;
  if (uVar6 == 4) {
LAB_027d6928:
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d52d0((ulong)&stack0x00000038 | 4,&stack0x00000028);
  }
  else {
    if (uVar6 == 5) {
LAB_027d690c:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d52d0(&stack0x00000040,&stack0x00000028);
      goto LAB_027d6928;
    }
    if (uVar6 == 6) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d52d0(&stack0x00000044,&stack0x00000028);
      goto LAB_027d690c;
    }
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d52d0(&stack0x00000038,&stack0x00000028);
  *(ulong *)(unaff_x23 + 8) =
       (uStack0000000000000038 >> uVar8) +
       (((_uStack0000000000000040 & 0xffffffff) << uVar2) << 0x20);
  uVar6 = uStack0000000000000040 >> (ulong)((uint)uStack0000000000000020 & 0x1f);
LAB_027d6a78:
  *(uint *)(unaff_x23 + 4) = uVar6;
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000058) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


