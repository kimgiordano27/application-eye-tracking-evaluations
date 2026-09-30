/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$.cctor
ENTRY_POINT: 033f2908
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0___cctor(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar7;
  long *unaff_x24;
  uint unaff_w27;
  uint in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  uint in_stack_00000020;
  long in_stack_00000028;
  undefined4 in_stack_00000030;
  uint uStack0000000000000038;
  undefined4 uStack000000000000003c;
  uint in_stack_00000040;
  long in_stack_00000058;
  
  while (lVar4 = unaff_x21 + 9, in_NG != in_OV) {
    lVar1 = *unaff_x24;
    if (lVar4 < -8) {
      uVar5 = 1000000000;
    }
    else {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar1 = *unaff_x24;
      }
      lVar3 = **(long **)(lVar1 + 0xb8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar3 + 0x18) <= (uint)-(int)lVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar5 = *(uint *)(lVar3 + lVar4 * -4 + 0x20);
    }
    uVar7 = (ulong)uStack0000000000000038;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar7 = uVar7 * uVar5;
    uStack0000000000000038 = (uint)uVar7;
    if (unaff_w27 != 0) {
      iVar6 = 2;
      lVar1 = 1;
      do {
        uVar2 = *(uint *)(unaff_x22 + lVar1 * 4);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar7 = (uVar7 >> 0x20) + (ulong)uVar2 * (ulong)uVar5;
        *(int *)(unaff_x22 + lVar1 * 4) = (int)uVar7;
        lVar1 = (long)iVar6;
        iVar6 = iVar6 + 1;
      } while (lVar1 <= (long)(ulong)unaff_w27);
    }
    if (uVar7 >> 0x1f != 0) {
      unaff_w27 = unaff_w27 + 1;
      *(int *)(unaff_x22 + (ulong)unaff_w27 * 4) = (int)(uVar7 >> 0x20);
    }
    in_OV = SCARRY8(lVar4,9);
    in_NG = unaff_x21 + 0x12 < 0;
    unaff_x21 = lVar4;
  }
  uVar5 = in_stack_00000020 & 0x3f;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    iVar6 = *(int *)(unaff_x20 + 4);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar4 = *(long *)(unaff_x20 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 8);
    iVar6 = *(int *)(unaff_x20 + 4);
  }
  lVar4 = lVar4 << uVar5;
  if (iVar6 == 0) {
    if (unaff_w27 == 4) {
LAB_033f2aa4:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f1268(unaff_x22 + 8,lVar4);
    }
    else {
      if (unaff_w27 == 5) {
LAB_033f2a80:
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f1268(&stack0x00000044,lVar4);
        goto LAB_033f2aa4;
      }
      if (unaff_w27 == 6) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f1268(&stack0x00000048,lVar4);
        goto LAB_033f2a80;
      }
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f1268((ulong)&stack0x00000038 | 4,lVar4);
    FUN_033f1268(&stack0x00000038,lVar4);
    uVar2 = 0;
    *(ulong *)(in_stack_00000018 + 8) =
         CONCAT44(uStack000000000000003c,uStack0000000000000038) >> uVar5;
    goto FUN_033f2b04;
  }
  in_stack_00000030 =
       (undefined4)
       (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >>
       (in_stack_00000008 & 0x3f));
  in_stack_00000028 = lVar4;
  if (unaff_w27 == 4) {
LAB_033f29b4:
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f135c((ulong)&stack0x00000038 | 4,&stack0x00000028);
  }
  else {
    if (unaff_w27 == 5) {
LAB_033f2998:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f135c(unaff_x22 + 8,&stack0x00000028);
      goto LAB_033f29b4;
    }
    if (unaff_w27 == 6) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f135c(&stack0x00000044,&stack0x00000028);
      goto LAB_033f2998;
    }
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033f135c(&stack0x00000038,&stack0x00000028);
  *(ulong *)(in_stack_00000018 + 8) =
       (CONCAT44(uStack000000000000003c,uStack0000000000000038) >> uVar5) +
       (((ulong)in_stack_00000040 << (in_stack_00000008 & 0x3f)) << 0x20);
  uVar2 = in_stack_00000040 >> (ulong)(in_stack_00000020 & 0x1f);
FUN_033f2b04:
  *(uint *)(in_stack_00000018 + 4) = uVar2;
  if (*(long *)(in_stack_00000010 + 0x28) != in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


