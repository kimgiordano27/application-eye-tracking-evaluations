/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance
ENTRY_POINT: 027d6728
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool in_CY;
  long lVar4;
  uint in_w8;
  long lVar5;
  uint in_w9;
  long lVar6;
  uint uVar7;
  int iVar8;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  ulong uVar9;
  long *unaff_x24;
  uint uVar10;
  ulong uStack0000000000000008;
  long in_stack_00000010;
  ulong uStack0000000000000020;
  long in_stack_00000028;
  undefined4 in_stack_00000030;
  ulong uStack0000000000000038;
  uint uStack0000000000000040;
  long in_stack_00000058;
  
  if (in_CY) {
    in_w9 = 1;
  }
  uVar10 = in_w9 | 8;
  uVar7 = in_w8 << 8;
  if ((in_w8 & 0xff000000) != 0) {
    uVar10 = in_w9;
    uVar7 = in_w8;
  }
  uVar2 = uVar10 | 4;
  uVar3 = uVar7 << 4;
  if (uVar7 >> 0x1c != 0) {
    uVar2 = uVar10;
    uVar3 = uVar7;
  }
  uVar7 = uVar3 << 2;
  uVar10 = uVar2 | 2;
  if (uVar3 >> 0x1e != 0) {
    uVar7 = uVar3;
    uVar10 = uVar2;
  }
  uVar10 = uVar10 + ((int)uVar7 >> 0x1f);
  uStack0000000000000020 = (ulong)uVar10;
  uStack0000000000000038 = *(long *)(unaff_x23 + 8) << (uStack0000000000000020 & 0x3f);
  uStack0000000000000008 = (ulong)(0x20 - uVar10);
  _uStack0000000000000040 =
       CONCAT44(*(undefined4 *)(unaff_x23 + 4),*(undefined4 *)(unaff_x23 + 0xc)) >>
       (uStack0000000000000008 & 0x3f);
  if (unaff_w21 < 0) {
    uVar10 = 3;
    lVar6 = (long)unaff_w21;
    do {
      lVar4 = *unaff_x24;
      if (lVar6 < -8) {
        uVar7 = 1000000000;
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
        if (*(uint *)(lVar5 + 0x18) <= (uint)-(int)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar7 = *(uint *)(lVar5 + lVar6 * -4 + 0x20);
      }
      uVar9 = uStack0000000000000038 & 0xffffffff;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = uVar9 * uVar7;
      uStack0000000000000038 = CONCAT44(uStack0000000000000038._4_4_,(int)uVar9);
      if (uVar10 != 0) {
        iVar8 = 2;
        lVar4 = 1;
        do {
          uVar2 = *(uint *)((long)&stack0x00000038 + lVar4 * 4);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = (uVar9 >> 0x20) + (ulong)uVar2 * (ulong)uVar7;
          *(int *)((long)&stack0x00000038 + lVar4 * 4) = (int)uVar9;
          lVar4 = (long)iVar8;
          iVar8 = iVar8 + 1;
        } while (lVar4 <= (long)(ulong)uVar10);
      }
      if (uVar9 >> 0x1f != 0) {
        uVar10 = uVar10 + 1;
        *(int *)((long)&stack0x00000038 + (ulong)uVar10 * 4) = (int)(uVar9 >> 0x20);
      }
      bVar1 = lVar6 < -9;
      lVar6 = lVar6 + 9;
    } while (bVar1);
  }
  else {
    uVar10 = 3;
  }
  uVar7 = (uint)uStack0000000000000020 & 0x3f;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    iVar8 = *(int *)(unaff_x20 + 4);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = *(long *)(unaff_x20 + 8);
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 8);
    iVar8 = *(int *)(unaff_x20 + 4);
  }
  lVar6 = lVar6 << uVar7;
  if (iVar8 == 0) {
    if (uVar10 == 4) {
LAB_027d6a18:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d51dc(&stack0x00000040,lVar6);
    }
    else {
      if (uVar10 == 5) {
LAB_027d69f4:
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc(&stack0x00000044,lVar6);
        goto LAB_027d6a18;
      }
      if (uVar10 == 6) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc(&stack0x00000048,lVar6);
        goto LAB_027d69f4;
      }
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d51dc((ulong)&stack0x00000038 | 4,lVar6);
    FUN_027d51dc(&stack0x00000038,lVar6);
    uVar10 = 0;
    *(ulong *)(unaff_x23 + 8) = uStack0000000000000038 >> uVar7;
    goto LAB_027d6a78;
  }
  uVar2 = (uint)uStack0000000000000008 & 0x3f;
  in_stack_00000030 =
       (undefined4)
       (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >> uVar2);
  in_stack_00000028 = lVar6;
  if (uVar10 == 4) {
LAB_027d6928:
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d52d0((ulong)&stack0x00000038 | 4,&stack0x00000028);
  }
  else {
    if (uVar10 == 5) {
LAB_027d690c:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d52d0(&stack0x00000040,&stack0x00000028);
      goto LAB_027d6928;
    }
    if (uVar10 == 6) {
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
       (uStack0000000000000038 >> uVar7) +
       (((_uStack0000000000000040 & 0xffffffff) << uVar2) << 0x20);
  uVar10 = uStack0000000000000040 >> (ulong)((uint)uStack0000000000000020 & 0x1f);
LAB_027d6a78:
  *(uint *)(unaff_x23 + 4) = uVar10;
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000058) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


