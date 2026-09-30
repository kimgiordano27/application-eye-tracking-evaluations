/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_useDynamicLighting
ENTRY_POINT: 027d6698
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_useDynamicLighting
               (long param_1,long param_2,long param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long in_stack_00000010;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  uint uStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long lStack0000000000000058;
  
  puVar3 = PTR_DAT_03cfca30;
  lStack0000000000000058 = *(long *)(param_1 + 0x28);
  if ((DAT_0412501a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfca30);
    DAT_0412501a = 1;
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar9 = *(uint *)(param_3 + 4);
  if (uVar9 == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar9 = *(uint *)(param_3 + 0xc);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = uVar9 << 0x10;
  if (0xffff < uVar9) {
    uVar11 = uVar9;
  }
  uVar6 = 0x11;
  if (0xffff < uVar9) {
    uVar6 = 1;
  }
  uVar9 = uVar6 | 8;
  uVar2 = uVar11 << 8;
  if (uVar11 >> 0x18 != 0) {
    uVar9 = uVar6;
    uVar2 = uVar11;
  }
  uVar11 = uVar9 | 4;
  uVar6 = uVar2 << 4;
  if (uVar2 >> 0x1c != 0) {
    uVar11 = uVar9;
    uVar6 = uVar2;
  }
  uVar2 = uVar6 << 2;
  uVar9 = uVar11 | 2;
  if (uVar6 >> 0x1e != 0) {
    uVar2 = uVar6;
    uVar9 = uVar11;
  }
  uVar9 = uVar9 + ((int)uVar2 >> 0x1f);
  in_stack_00000038 = *(long *)(param_2 + 8) << ((ulong)uVar9 & 0x3f);
  _uStack0000000000000040 =
       CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0xc)) >>
       ((ulong)(0x20 - uVar9) & 0x3f);
  if (param_4 < 0) {
    uVar11 = 3;
    lVar7 = (long)param_4;
    do {
      lVar4 = *(long *)puVar3;
      if (lVar7 < -8) {
        uVar6 = 1000000000;
      }
      else {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar3;
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
        uVar6 = *(uint *)(lVar5 + lVar7 * -4 + 0x20);
      }
      uVar10 = in_stack_00000038 & 0xffffffff;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = uVar10 * uVar6;
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)uVar10);
      if (uVar11 != 0) {
        iVar8 = 2;
        lVar4 = 1;
        do {
          uVar2 = *(uint *)((long)&stack0x00000038 + lVar4 * 4);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = (uVar10 >> 0x20) + (ulong)uVar2 * (ulong)uVar6;
          *(int *)((long)&stack0x00000038 + lVar4 * 4) = (int)uVar10;
          lVar4 = (long)iVar8;
          iVar8 = iVar8 + 1;
        } while (lVar4 <= (long)(ulong)uVar11);
      }
      if (uVar10 >> 0x1f != 0) {
        uVar11 = uVar11 + 1;
        *(int *)((long)&stack0x00000038 + (ulong)uVar11 * 4) = (int)(uVar10 >> 0x20);
      }
      bVar1 = lVar7 < -9;
      lVar7 = lVar7 + 9;
    } while (bVar1);
  }
  else {
    uVar11 = 3;
  }
  uVar6 = uVar9 & 0x3f;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    iVar8 = *(int *)(param_3 + 4);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar7 = *(long *)(param_3 + 8);
  }
  else {
    lVar7 = *(long *)(param_3 + 8);
    iVar8 = *(int *)(param_3 + 4);
  }
  lVar7 = lVar7 << uVar6;
  if (iVar8 == 0) {
    if (uVar11 == 4) {
LAB_027d6a18:
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d51dc(&stack0x00000040,lVar7);
    }
    else {
      if (uVar11 == 5) {
LAB_027d69f4:
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc((long)&stack0x00000040 + 4,lVar7);
        goto LAB_027d6a18;
      }
      if (uVar11 == 6) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc(&stack0x00000048,lVar7);
        goto LAB_027d69f4;
      }
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d51dc((ulong)&stack0x00000038 | 4,lVar7);
    FUN_027d51dc(&stack0x00000038,lVar7);
    uVar9 = 0;
    *(ulong *)(param_2 + 8) = in_stack_00000038 >> uVar6;
    goto LAB_027d6a78;
  }
  uVar2 = 0x20 - uVar9 & 0x3f;
  uVar10 = (ulong)in_stack_00000030 >> 0x20;
  in_stack_00000030 =
       CONCAT44((int)uVar10,
                (int)(CONCAT44(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 0xc)) >> uVar2
                     ));
  in_stack_00000028 = lVar7;
  if (uVar11 == 4) {
LAB_027d6928:
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d52d0((ulong)&stack0x00000038 | 4,&stack0x00000028);
  }
  else {
    if (uVar11 == 5) {
LAB_027d690c:
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d52d0(&stack0x00000040,&stack0x00000028);
      goto LAB_027d6928;
    }
    if (uVar11 == 6) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027d52d0((long)&stack0x00000040 + 4,&stack0x00000028);
      goto LAB_027d690c;
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_027d52d0(&stack0x00000038,&stack0x00000028);
  *(ulong *)(param_2 + 8) =
       (in_stack_00000038 >> uVar6) + (((_uStack0000000000000040 & 0xffffffff) << uVar2) << 0x20);
  uVar9 = uStack0000000000000040 >> (ulong)(uVar9 & 0x1f);
LAB_027d6a78:
  *(uint *)(param_2 + 4) = uVar9;
  if (*(long *)(in_stack_00000010 + 0x28) == lStack0000000000000058) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


