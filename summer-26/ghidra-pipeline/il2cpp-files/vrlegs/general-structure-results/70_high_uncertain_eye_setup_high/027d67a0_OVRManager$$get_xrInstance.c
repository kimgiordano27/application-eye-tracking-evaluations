/*
FUNCTION_NAME: OVRManager$$get_xrInstance
ENTRY_POINT: 027d67a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_xrInstance(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 in_x10;
  ulong in_x12;
  uint uVar6;
  int iVar7;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong uVar8;
  long *unaff_x24;
  uint uVar9;
  uint uStack0000000000000008;
  long in_stack_00000010;
  long in_stack_00000018;
  uint in_stack_00000020;
  long in_stack_00000028;
  undefined4 in_stack_00000030;
  ulong uStack0000000000000038;
  uint uStack0000000000000040;
  long in_stack_00000058;
  
  uStack0000000000000008 = (uint)in_x10;
                    /* try { // try from 027d67a4 to 028d67a7 has its CatchHandler @ 027d67c4 */
                    /* try { // try from 027d67a8 to 028d67c7 has its CatchHandler @ 027d6634 */
  uStack0000000000000038 = in_x12;
  _uStack0000000000000040 = param_1;
  if (unaff_w21 < 0) {
    uVar9 = 3;
    lVar5 = (long)unaff_w21;
    _uStack0000000000000008 = in_x10;
    do {
      lVar3 = *unaff_x24;
                    /* catch() { ... } // from try @ 027d67a4 with catch @ 027d67c4 */
      if (lVar5 < -8) {
                    /* try { // try from 027d67c8 to 028d67cf has its CatchHandler @ 027d67e4 */
        uVar6 = 1000000000;
                    /* try { // try from 027d67d0 to 028d67db has its CatchHandler @ 027d6634 */
      }
      else {
        if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 027d67dc to 028d67e3 has its CatchHandler @ 027d67e4 */
          thunk_FUN_01a58e78();
          lVar3 = *unaff_x24;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027d67c8 with catch @ 027d67e4
                       catch(type#2 @ 00000000) { ... } // from try @ 027d67dc with catch @ 027d67e4
                        */
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
          uVar2 = *(uint *)(unaff_x22 + lVar3 * 4);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = (uVar8 >> 0x20) + (ulong)uVar2 * (ulong)uVar6;
          *(int *)(unaff_x22 + lVar3 * 4) = (int)uVar8;
          lVar3 = (long)iVar7;
          iVar7 = iVar7 + 1;
        } while (lVar3 <= (long)(ulong)uVar9);
      }
      if (uVar8 >> 0x1f != 0) {
        uVar9 = uVar9 + 1;
        *(int *)(unaff_x22 + (ulong)uVar9 * 4) = (int)(uVar8 >> 0x20);
      }
      bVar1 = lVar5 < -9;
      lVar5 = lVar5 + 9;
    } while (bVar1);
  }
  else {
    uVar9 = 3;
  }
  uVar6 = in_stack_00000020 & 0x3f;
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
      FUN_027d51dc(unaff_x22 + 8,lVar5);
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
    *(ulong *)(in_stack_00000018 + 8) = uStack0000000000000038 >> uVar6;
    goto LAB_027d6a78;
  }
  in_stack_00000030 =
       (undefined4)
       (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >>
       (uStack0000000000000008 & 0x3f));
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
      FUN_027d52d0(unaff_x22 + 8,&stack0x00000028);
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
  *(ulong *)(in_stack_00000018 + 8) =
       (uStack0000000000000038 >> uVar6) +
       (((_uStack0000000000000040 & 0xffffffff) << (uStack0000000000000008 & 0x3f)) << 0x20);
  uVar9 = uStack0000000000000040 >> (ulong)(in_stack_00000020 & 0x1f);
LAB_027d6a78:
  *(uint *)(in_stack_00000018 + 4) = uVar9;
  if (*(long *)(in_stack_00000010 + 0x28) != in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


