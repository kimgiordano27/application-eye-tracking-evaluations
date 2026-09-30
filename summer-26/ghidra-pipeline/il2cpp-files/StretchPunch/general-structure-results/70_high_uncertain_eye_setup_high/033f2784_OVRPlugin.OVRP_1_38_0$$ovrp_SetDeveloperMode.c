/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_SetDeveloperMode
ENTRY_POINT: 033f2784
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_SetDeveloperMode(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  ulong uVar9;
  long *unaff_x24;
  uint uVar10;
  long in_stack_00000010;
  long in_stack_00000028;
  undefined4 in_stack_00000030;
  ulong in_stack_00000038;
  uint uStack0000000000000040;
  long in_stack_00000058;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar4 = *(uint *)(unaff_x20 + 0xc);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar10 = uVar4 << 0x10;
  if (0xffff < uVar4) {
    uVar10 = uVar4;
  }
  uVar6 = 0x11;
  if (0xffff < uVar4) {
    uVar6 = 1;
  }
  uVar4 = uVar6 | 8;
  uVar2 = uVar10 << 8;
  if (uVar10 >> 0x18 != 0) {
    uVar4 = uVar6;
    uVar2 = uVar10;
  }
  uVar10 = uVar4 | 4;
  uVar6 = uVar2 << 4;
  if (uVar2 >> 0x1c != 0) {
    uVar10 = uVar4;
    uVar6 = uVar2;
  }
  uVar2 = uVar6 << 2;
  uVar4 = uVar10 | 2;
  if (uVar6 >> 0x1e != 0) {
    uVar2 = uVar6;
    uVar4 = uVar10;
  }
  uVar4 = uVar4 + ((int)uVar2 >> 0x1f);
  in_stack_00000038 = *(long *)(unaff_x23 + 8) << ((ulong)uVar4 & 0x3f);
  _uStack0000000000000040 =
       CONCAT44(*(undefined4 *)(unaff_x23 + 4),*(undefined4 *)(unaff_x23 + 0xc)) >>
       ((ulong)(0x20 - uVar4) & 0x3f);
  if (unaff_w21 < 0) {
    uVar10 = 3;
    lVar7 = (long)unaff_w21;
    do {
      lVar3 = *unaff_x24;
      if (lVar7 < -8) {
        uVar6 = 1000000000;
      }
      else {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar3 = *unaff_x24;
        }
        lVar5 = **(long **)(lVar3 + 0xb8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar5 + 0x18) <= (uint)-(int)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        uVar6 = *(uint *)(lVar5 + lVar7 * -4 + 0x20);
      }
      uVar9 = in_stack_00000038 & 0xffffffff;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar9 = uVar9 * uVar6;
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)uVar9);
      if (uVar10 != 0) {
        iVar8 = 2;
        lVar3 = 1;
        do {
          uVar2 = *(uint *)((long)&stack0x00000038 + lVar3 * 4);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = (uVar9 >> 0x20) + (ulong)uVar2 * (ulong)uVar6;
          *(int *)((long)&stack0x00000038 + lVar3 * 4) = (int)uVar9;
          lVar3 = (long)iVar8;
          iVar8 = iVar8 + 1;
        } while (lVar3 <= (long)(ulong)uVar10);
      }
      if (uVar9 >> 0x1f != 0) {
        uVar10 = uVar10 + 1;
        *(int *)((long)&stack0x00000038 + (ulong)uVar10 * 4) = (int)(uVar9 >> 0x20);
      }
      bVar1 = lVar7 < -9;
      lVar7 = lVar7 + 9;
    } while (bVar1);
  }
  else {
    uVar10 = 3;
  }
  uVar6 = uVar4 & 0x3f;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    iVar8 = *(int *)(unaff_x20 + 4);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar7 = *(long *)(unaff_x20 + 8);
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 8);
    iVar8 = *(int *)(unaff_x20 + 4);
  }
  lVar7 = lVar7 << uVar6;
  if (iVar8 == 0) {
    if (uVar10 == 4) {
LAB_033f2aa4:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f1268(&stack0x00000040,lVar7);
    }
    else {
      if (uVar10 == 5) {
LAB_033f2a80:
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f1268((long)&stack0x00000040 + 4,lVar7);
        goto LAB_033f2aa4;
      }
      if (uVar10 == 6) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_033f1268(&stack0x00000048,lVar7);
        goto LAB_033f2a80;
      }
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f1268((ulong)&stack0x00000038 | 4,lVar7);
    FUN_033f1268(&stack0x00000038,lVar7);
    uVar4 = 0;
    *(ulong *)(unaff_x23 + 8) = in_stack_00000038 >> uVar6;
    goto FUN_033f2b04;
  }
  uVar2 = 0x20 - uVar4 & 0x3f;
  in_stack_00000030 =
       (undefined4)
       (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >> uVar2);
  in_stack_00000028 = lVar7;
  if (uVar10 == 4) {
LAB_033f29b4:
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f135c((ulong)&stack0x00000038 | 4,&stack0x00000028);
  }
  else {
    if (uVar10 == 5) {
LAB_033f2998:
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f135c(&stack0x00000040,&stack0x00000028);
      goto LAB_033f29b4;
    }
    if (uVar10 == 6) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f135c((long)&stack0x00000040 + 4,&stack0x00000028);
      goto LAB_033f2998;
    }
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033f135c(&stack0x00000038,&stack0x00000028);
  *(ulong *)(unaff_x23 + 8) =
       (in_stack_00000038 >> uVar6) + (((_uStack0000000000000040 & 0xffffffff) << uVar2) << 0x20);
  uVar4 = uStack0000000000000040 >> (ulong)(uVar4 & 0x1f);
FUN_033f2b04:
  *(uint *)(unaff_x23 + 4) = uVar4;
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000058) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


