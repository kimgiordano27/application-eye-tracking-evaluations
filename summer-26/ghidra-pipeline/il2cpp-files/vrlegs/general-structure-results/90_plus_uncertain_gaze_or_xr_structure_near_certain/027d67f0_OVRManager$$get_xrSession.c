/*
FUNCTION_NAME: OVRManager$$get_xrSession
ENTRY_POINT: 027d67f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__get_xrSession(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar5;
  long *unaff_x24;
  uint unaff_w27;
  long lVar6;
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
  
code_r0x027d67f0:
  if (*(uint *)(param_1 + 0x18) <= (uint)-(int)unaff_x21) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar3 = *(uint *)(param_1 + unaff_x21 * -4 + 0x20);
  lVar2 = unaff_x21;
  do {
    uVar5 = (ulong)uStack0000000000000038;
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar5 = uVar5 * uVar3;
    uStack0000000000000038 = (uint)uVar5;
    if (unaff_w27 != 0) {
      iVar4 = 2;
      lVar6 = 1;
      do {
        uVar1 = *(uint *)(unaff_x22 + lVar6 * 4);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = (uVar5 >> 0x20) + (ulong)uVar1 * (ulong)uVar3;
        *(int *)(unaff_x22 + lVar6 * 4) = (int)uVar5;
        lVar6 = (long)iVar4;
        iVar4 = iVar4 + 1;
      } while (lVar6 <= (long)(ulong)unaff_w27);
    }
    if (uVar5 >> 0x1f != 0) {
      unaff_w27 = unaff_w27 + 1;
      *(int *)(unaff_x22 + (ulong)unaff_w27 * 4) = (int)(uVar5 >> 0x20);
    }
    unaff_x21 = lVar2 + 9;
    if (-10 < lVar2) {
      uVar3 = in_stack_00000020 & 0x3f;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        iVar4 = *(int *)(unaff_x20 + 4);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar2 = *(long *)(unaff_x20 + 8);
      }
      else {
        lVar2 = *(long *)(unaff_x20 + 8);
        iVar4 = *(int *)(unaff_x20 + 4);
      }
      lVar2 = lVar2 << uVar3;
      if (iVar4 == 0) {
        if (unaff_w27 == 4) {
LAB_027d6a18:
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_027d51dc(unaff_x22 + 8,lVar2);
        }
        else {
          if (unaff_w27 == 5) {
LAB_027d69f4:
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_027d51dc(&stack0x00000044,lVar2);
            goto LAB_027d6a18;
          }
          if (unaff_w27 == 6) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_027d51dc(&stack0x00000048,lVar2);
            goto LAB_027d69f4;
          }
        }
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d51dc((ulong)&stack0x00000038 | 4,lVar2);
        FUN_027d51dc(&stack0x00000038,lVar2);
        uVar1 = 0;
        *(ulong *)(in_stack_00000018 + 8) =
             CONCAT44(uStack000000000000003c,uStack0000000000000038) >> uVar3;
        goto LAB_027d6a78;
      }
      in_stack_00000030 =
           (undefined4)
           (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >>
           (in_stack_00000008 & 0x3f));
      in_stack_00000028 = lVar2;
      if (unaff_w27 == 4) {
LAB_027d6928:
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d52d0((ulong)&stack0x00000038 | 4,&stack0x00000028);
      }
      else {
        if (unaff_w27 == 5) {
LAB_027d690c:
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_027d52d0(unaff_x22 + 8,&stack0x00000028);
          goto LAB_027d6928;
        }
        if (unaff_w27 == 6) {
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
           (CONCAT44(uStack000000000000003c,uStack0000000000000038) >> uVar3) +
           (((ulong)in_stack_00000040 << (in_stack_00000008 & 0x3f)) << 0x20);
      uVar1 = in_stack_00000040 >> (ulong)(in_stack_00000020 & 0x1f);
LAB_027d6a78:
      *(uint *)(in_stack_00000018 + 4) = uVar1;
      if (*(long *)(in_stack_00000010 + 0x28) != in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    param_2 = *unaff_x24;
    if (-9 < unaff_x21) break;
    uVar3 = 1000000000;
    lVar2 = unaff_x21;
  } while( true );
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_2 = *unaff_x24;
  }
  param_1 = **(long **)(param_2 + 0xb8);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  goto code_r0x027d67f0;
}


