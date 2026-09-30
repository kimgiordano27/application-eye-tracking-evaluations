/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor
ENTRY_POINT: 027d66bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  uint uVar8;
  long unaff_x23;
  ulong uVar9;
  long *unaff_x24;
  uint uVar10;
  long in_stack_00000010;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  uint uStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 027d66c0 to 028d67a3 has its CatchHandler @ 027d6634 */
    FUN_01ab69ac(PTR_DAT_03cfca30);
    *(undefined1 *)(unaff_x19 + 0x1a) = 1;
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = *(uint *)(unaff_x20 + 4);
  if (uVar8 == 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = *(uint *)(unaff_x20 + 0xc);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar10 = uVar8 << 0x10;
  if (0xffff < uVar8) {
    uVar10 = uVar8;
  }
  uVar5 = 0x11;
  if (0xffff < uVar8) {
    uVar5 = 1;
  }
  uVar8 = uVar5 | 8;
  uVar2 = uVar10 << 8;
  if (uVar10 >> 0x18 != 0) {
    uVar8 = uVar5;
    uVar2 = uVar10;
  }
  uVar10 = uVar8 | 4;
  uVar5 = uVar2 << 4;
  if (uVar2 >> 0x1c != 0) {
    uVar10 = uVar8;
    uVar5 = uVar2;
  }
  uVar2 = uVar5 << 2;
  uVar8 = uVar10 | 2;
  if (uVar5 >> 0x1e != 0) {
    uVar2 = uVar5;
    uVar8 = uVar10;
  }
  uVar8 = uVar8 + ((int)uVar2 >> 0x1f);
  in_stack_00000038 = *(long *)(unaff_x23 + 8) << ((ulong)uVar8 & 0x3f);
  _uStack0000000000000040 =
       CONCAT44(*(undefined4 *)(unaff_x23 + 4),*(undefined4 *)(unaff_x23 + 0xc)) >>
       ((ulong)(0x20 - uVar8) & 0x3f);
  if (unaff_w21 < 0) {
    uVar10 = 3;
    lVar6 = (long)unaff_w21;
    do {
      lVar3 = *unaff_x24;
      if (lVar6 < -8) {
        uVar5 = 1000000000;
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
        if (*(uint *)(lVar4 + 0x18) <= (uint)-(int)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar5 = *(uint *)(lVar4 + lVar6 * -4 + 0x20);
      }
      uVar9 = in_stack_00000038 & 0xffffffff;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar9 = uVar9 * uVar5;
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)uVar9);
      if (uVar10 != 0) {
        iVar7 = 2;
        lVar3 = 1;
        do {
          uVar2 = *(uint *)((long)&stack0x00000038 + lVar3 * 4);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar9 = (uVar9 >> 0x20) + (ulong)uVar2 * (ulong)uVar5;
          *(int *)((long)&stack0x00000038 + lVar3 * 4) = (int)uVar9;
          lVar3 = (long)iVar7;
          iVar7 = iVar7 + 1;
        } while (lVar3 <= (long)(ulong)uVar10);
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
  uVar5 = uVar8 & 0x3f;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    iVar7 = *(int *)(unaff_x20 + 4);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar6 = *(long *)(unaff_x20 + 8);
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 8);
    iVar7 = *(int *)(unaff_x20 + 4);
  }
  lVar6 = lVar6 << uVar5;
  if (iVar7 == 0) {
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
        FUN_027d51dc((long)&stack0x00000040 + 4,lVar6);
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
    uVar8 = 0;
    *(ulong *)(unaff_x23 + 8) = in_stack_00000038 >> uVar5;
    goto LAB_027d6a78;
  }
  uVar2 = 0x20 - uVar8 & 0x3f;
  uVar9 = (ulong)in_stack_00000030 >> 0x20;
  in_stack_00000030 =
       CONCAT44((int)uVar9,
                (int)(CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >>
                     uVar2));
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
      FUN_027d52d0((long)&stack0x00000040 + 4,&stack0x00000028);
      goto LAB_027d690c;
    }
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d52d0(&stack0x00000038,&stack0x00000028);
  *(ulong *)(unaff_x23 + 8) =
       (in_stack_00000038 >> uVar5) + (((_uStack0000000000000040 & 0xffffffff) << uVar2) << 0x20);
  uVar8 = uStack0000000000000040 >> (ulong)(uVar8 & 0x1f);
LAB_027d6a78:
  *(uint *)(unaff_x23 + 4) = uVar8;
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000058) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


