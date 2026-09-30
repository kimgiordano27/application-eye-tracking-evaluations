/*
FUNCTION_NAME: OVRManager$$get_vsyncCount
ENTRY_POINT: 027d6840
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


void OVRManager__get_vsyncCount(void)

{
  int iVar1;
  int in_w8;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong uVar6;
  ulong unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  ulong unaff_x29;
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
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_01a58e78();
    }
    unaff_x26 = (unaff_x26 >> 0x20) + unaff_x25 * unaff_x29;
    *(int *)(unaff_x22 + unaff_x28 * 4) = (int)unaff_x26;
    unaff_x28 = (long)unaff_w19;
    unaff_w19 = unaff_w19 + 1;
    lVar4 = unaff_x21;
    if ((long)unaff_x23 < unaff_x28) {
      do {
        if (unaff_x26 >> 0x1f != 0) {
          unaff_w27 = unaff_w27 + 1;
          *(int *)(unaff_x22 + (ulong)unaff_w27 * 4) = (int)(unaff_x26 >> 0x20);
        }
        unaff_x21 = lVar4 + 9;
        if (-10 < lVar4) {
          uVar5 = in_stack_00000020 & 0x3f;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            iVar1 = *(int *)(unaff_x20 + 4);
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar4 = *(long *)(unaff_x20 + 8);
          }
          else {
            lVar4 = *(long *)(unaff_x20 + 8);
            iVar1 = *(int *)(unaff_x20 + 4);
          }
          lVar4 = lVar4 << uVar5;
          if (iVar1 == 0) {
            if (unaff_w27 == 4) {
LAB_027d6a18:
              if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_027d51dc(unaff_x22 + 8,lVar4);
            }
            else {
              if (unaff_w27 == 5) {
LAB_027d69f4:
                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_027d51dc(&stack0x00000044,lVar4);
                goto LAB_027d6a18;
              }
              if (unaff_w27 == 6) {
                if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_027d51dc(&stack0x00000048,lVar4);
                goto LAB_027d69f4;
              }
            }
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_027d51dc((ulong)&stack0x00000038 | 4,lVar4);
            FUN_027d51dc(&stack0x00000038,lVar4);
            uVar2 = 0;
            *(ulong *)(in_stack_00000018 + 8) =
                 CONCAT44(uStack000000000000003c,uStack0000000000000038) >> uVar5;
            goto LAB_027d6a78;
          }
          in_stack_00000030 =
               (undefined4)
               (CONCAT44(*(undefined4 *)(unaff_x20 + 4),*(undefined4 *)(unaff_x20 + 0xc)) >>
               (in_stack_00000008 & 0x3f));
          in_stack_00000028 = lVar4;
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
               (CONCAT44(uStack000000000000003c,uStack0000000000000038) >> uVar5) +
               (((ulong)in_stack_00000040 << (in_stack_00000008 & 0x3f)) << 0x20);
          uVar2 = in_stack_00000040 >> (ulong)(in_stack_00000020 & 0x1f);
LAB_027d6a78:
          *(uint *)(in_stack_00000018 + 4) = uVar2;
          if (*(long *)(in_stack_00000010 + 0x28) != in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        lVar4 = *unaff_x24;
        if (unaff_x21 < -8) {
          uVar5 = 1000000000;
        }
        else {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar4 = *unaff_x24;
          }
          lVar3 = **(long **)(lVar4 + 0xb8);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)-(int)unaff_x21) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          uVar5 = *(uint *)(lVar3 + unaff_x21 * -4 + 0x20);
        }
        uVar6 = (ulong)uStack0000000000000038;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        unaff_x29 = (ulong)uVar5;
        unaff_x26 = uVar6 * unaff_x29;
        uStack0000000000000038 = (uint)unaff_x26;
        lVar4 = unaff_x21;
      } while (unaff_w27 == 0);
      unaff_x23 = (ulong)unaff_w27;
      unaff_w19 = 2;
      unaff_x28 = 1;
    }
    unaff_x25 = (ulong)*(uint *)(unaff_x22 + unaff_x28 * 4);
    in_w8 = *(int *)(*unaff_x24 + 0xe0);
  } while( true );
}


