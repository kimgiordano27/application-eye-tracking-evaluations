/*
FUNCTION_NAME: OVRManager$$get_xrApi
ENTRY_POINT: 027d6750
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_xrApi(void)

{
  bool bVar1;
  uint uVar2;
  bool in_ZR;
  long lVar3;
  uint in_w8;
  long lVar4;
  uint in_w9;
  long lVar5;
  uint in_w11;
  uint uVar6;
  int iVar7;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  ulong uVar8;
  long *unaff_x24;
  uint uVar9;
  ulong uStack0000000000000008;
  long in_stack_00000010;
  ulong uStack0000000000000020;
  long in_stack_00000028;
  undefined4 in_stack_00000030;
  ulong uStack0000000000000038;
  uint uStack0000000000000040;
  long in_stack_00000058;
  
  uVar9 = in_w9 | 4;
  if (!in_ZR) {
    uVar9 = in_w9;
    in_w11 = in_w8;
  }
  uVar2 = in_w11 << 2;
  uVar6 = uVar9 | 2;
  if (in_w11 >> 0x1e != 0) {
    uVar2 = in_w11;
    uVar6 = uVar9;
  }
  uVar6 = uVar6 + ((int)uVar2 >> 0x1f);
  uStack0000000000000020 = (ulong)uVar6;
  uStack0000000000000038 = *(long *)(unaff_x23 + 8) << (uStack0000000000000020 & 0x3f);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d66b4 with catch @ 027d6788
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 027d66a0 with catch @ 027d678c
                        */
  uStack0000000000000008 = (ulong)(0x20 - uVar6);
  _uStack0000000000000040 =
       CONCAT44(*(undefined4 *)(unaff_x23 + 4),*(undefined4 *)(unaff_x23 + 0xc)) >>
       (uStack0000000000000008 & 0x3f);
  if (unaff_w21 < 0) {
    uVar9 = 3;
    lVar5 = (long)unaff_w21;
    do {
      lVar3 = *unaff_x24;
      if (lVar5 < -8) {
        uVar6 = 1000000000;
      }
      else {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar3 = *unaff_x24;
        }
        lVar4 = **(long **)(lVar3 + 0xb8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar4 + 0x18) <= (uint)-(int)lVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar6 = *(uint *)(lVar4 + lVar5 * -4 + 0x20);
      }
      uVar8 = uStack0000000000000038 & 0xffffffff;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = uVar8 * uVar6;
      uStack0000000000000038 = CONCAT44(uStack0000000000000038._4_4_,(int)uVar8);
      if (uVar9 != 0) {
        iVar7 = 2;
        lVar3 = 1;
        do {
          uVar2 = *(uint *)((long)&stack0x00000038 + lVar3 * 4);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = (uVar8 >> 0x20) + (ulong)uVar2 * (ulong)uVar6;
          *(int *)((long)&stack0x00000038 + lVar3 * 4) = (int)uVar8;
          lVar3 = (long)iVar7;
          iVar7 = iVar7 + 1;
        } while (lVar3 <= (long)(ulong)uVar9);
      }
      if (uVar8 >> 0x1f != 0) {
        uVar9 = uVar9 + 1;
        *(int *)((long)&stack0x00000038 + (ulong)uVar9 * 4) = (int)(uVar8 >> 0x20);
      }
      bVar1 = lVar5 < -9;
      lVar5 = lVar5 + 9;
    } while (bVar1);
  }
  else {
    uVar9 = 3;
  }
  uVar6 = (uint)uStack0000000000000020 & 0x3f;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    iVar7 = *(int *)(unaff_x20 + 4);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar5 = *(long *)(unaff_x20 + 8);
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 8);
    iVar7 = *(int *)(unaff_x20 + 4);
  }
  lVar5 = lVar5 << uVar6;
  if (iVar7 == 0) {
    if (uVar9 == 4) {
LAB_027d6a18:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d51dc(&stack0x00000040,lVar5);
    }
    else {
      if (uVar9 == 5) {
LAB_027d69f4:
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc(&stack0x00000044,lVar5);
        goto LAB_027d6a18;
      }
      if (uVar9 == 6) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc(&stack0x00000048,lVar5);
        goto LAB_027d69f4;
      }
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d51dc((ulong)&stack0x00000038 | 4,lVar5);
    FUN_027d51dc(&stack0x00000038,lVar5);
    uVar9 = 0;
    *(ulong *)(unaff_x23 + 8) = uStack0000000000000038 >> uVar6;
    goto LAB_027d6a78;
  }
  uVar2 = (uint)uStack0000000000000008 & 0x3f;
  in_stack_00000030 =
       (undefined4)
       (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >> uVar2);
  in_stack_00000028 = lVar5;
  if (uVar9 == 4) {
LAB_027d6928:
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d52d0((ulong)&stack0x00000038 | 4,&stack0x00000028);
  }
  else {
    if (uVar9 == 5) {
LAB_027d690c:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d52d0(&stack0x00000040,&stack0x00000028);
      goto LAB_027d6928;
    }
    if (uVar9 == 6) {
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
       (uStack0000000000000038 >> uVar6) +
       (((_uStack0000000000000040 & 0xffffffff) << uVar2) << 0x20);
  uVar9 = uStack0000000000000040 >> (ulong)((uint)uStack0000000000000020 & 0x1f);
LAB_027d6a78:
  *(uint *)(unaff_x23 + 4) = uVar9;
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000058) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


