/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_session_handle_set
ENTRY_POINT: 0856177c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_session_handle_set
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong extraout_x1;
  long *plVar12;
  int in_w9;
  uint unaff_w19;
  uint uVar13;
  undefined1 (*unaff_x20) [16];
  long lVar14;
  long unaff_x23;
  ulong uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000048;
  int iStack000000000000006c;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  void *in_stack_000000b0;
  int iStack00000000000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long lStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  long in_stack_000007f8;
  
  lStack00000000000000d8 = 0;
  uStack00000000000000e0 = 0;
  FUN_05f66298(&stack0x000000d8,in_w9 << 1,2,1,**(undefined8 **)(param_1 + 0xbe8));
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_000000c8 = uStack00000000000000e0;
  in_stack_000000c0 = lStack00000000000000d8;
  FUN_05f45364(&stack0x00000080,unaff_w19,2,1,*(undefined8 *)PTR_DAT_0932ebf8);
  uVar5 = in_stack_00000088;
  lVar4 = in_stack_00000080;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  FUN_05f72e38(&stack0x00000070,unaff_w19,2,1,*(undefined8 *)PTR_DAT_0932ebf0);
  in_stack_00000048[1] = in_stack_00000078;
  *in_stack_00000048 = in_stack_00000070;
  if ((int)unaff_w19 < 1) {
    iVar16 = 0;
  }
  else {
    uVar15 = 0;
    iVar16 = 0;
    iStack000000000000006c = 0;
    do {
      auVar18 = FUN_089fff78();
      uVar9 = FUN_050c7be0(auVar18._0_8_,auVar18._8_8_,uVar15 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_0932d890);
      uVar6 = FUN_08a08ffc(uVar9,0);
      in_stack_000000b0 = (void *)0x0;
      _iStack00000000000000b8 = 0;
      if (uVar6 == 0) {
        if (unaff_x23 == 0) {
          if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto LAB_08561eb8;
        }
        if ((*(char *)(unaff_x23 + 0x30) == '\0') ||
           (uVar10 = FUN_08523e4c(in_stack_00000030,uVar15 & 0xffffffff,0), (uVar10 & 1) == 0))
        goto LAB_08561cc0;
        FUN_05f650d4(&stack0x000000b0,1,2,1,*(undefined8 *)PTR_DAT_0932ebe0);
        memset(&stack0x000002a0,0,0x1c8);
        if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar8 = FUN_085621d8();
        uVar8 = uVar8 & 1;
        memmove(in_stack_000000b0,&stack0x000002a0,0x1c8);
        memcpy(&stack0x000000d8,&stack0x000002a0,0x1c8);
        memcpy((void *)(in_stack_000000c0 + (long)iStack000000000000006c * 0xfc),&stack0x000001a4,
               0xfc);
LAB_08561c20:
        plVar12 = (long *)(*in_stack_00000048 + uVar15 * 0x18);
        plVar12[1] = _iStack00000000000000b8;
        *plVar12 = (long)in_stack_000000b0;
        *(uint *)(plVar12 + 2) = uVar8;
        *(undefined4 *)((long)plVar12 + 0x14) = 0;
        lStack00000000000000d8 = 0;
        FUN_089cdde4(&stack0x000000d8,iStack000000000000006c,_iStack00000000000000b8 & 0xffffffff,0)
        ;
        lVar11 = lStack00000000000000d8;
        if (*(int *)(*(long *)PTR_DAT_0932ebd0 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        if (uVar6 < 3) {
          uVar17 = *(undefined4 *)(&DAT_01be312c + (ulong)uVar6 * 4);
        }
        else {
          uVar17 = 0;
        }
        plVar12 = (long *)(lVar4 + uVar15 * 0x10);
        *plVar12 = lVar11;
        *(undefined4 *)(plVar12 + 1) = uVar17;
        *(undefined4 *)((long)plVar12 + 0xc) = 0;
        iStack000000000000006c = iStack00000000000000b8 + iStack000000000000006c;
        iVar16 = iStack00000000000000b8 + iVar16;
      }
      else if (uVar6 == 1) {
        if (unaff_x23 == 0) {
          if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto LAB_08561eb8;
        }
        if (*(char *)(unaff_x23 + 0x10) != '\0') {
          uVar1 = *(uint *)(unaff_x23 + 0x1c);
          FUN_05f650d4(&stack0x000000b0,uVar1,2,1,*(undefined8 *)PTR_DAT_0932ebe0);
          if (0 < (int)uVar1) {
            lVar11 = 0;
            uVar13 = 0;
            uVar8 = 0;
            do {
              memset(&stack0x00000630,0,0x1c8);
              lVar14 = FUN_08a08f70(uVar9,0);
              if (lVar14 == 0) {
                if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                goto LAB_08561eb8;
              }
              uVar17 = FUN_0899a95c(lVar14,0);
              if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar10 = FUN_08561ec0(uVar17);
              uVar2 = 1 << (ulong)(uVar13 & 0x1f);
              if ((uVar10 & 1) == 0) {
                uVar2 = 0;
              }
              uVar8 = uVar2 | uVar8;
              memmove((void *)((long)in_stack_000000b0 + lVar11),&stack0x00000630,0x1c8);
              memcpy(&stack0x000000d8,&stack0x00000630,0x1c8);
              memcpy((void *)(in_stack_000000c0 +
                             (long)(int)(iStack000000000000006c + uVar13) * 0xfc),&stack0x000001a4,
                     0xfc);
              lVar11 = lVar11 + 0x1c8;
              uVar13 = uVar13 + 1;
            } while ((ulong)uVar1 * 0x1c8 - lVar11 != 0);
            goto LAB_08561c20;
          }
          goto LAB_08561c1c;
        }
      }
      else {
        if (uVar6 != 2) {
LAB_08561c1c:
          uVar8 = 0;
          goto LAB_08561c20;
        }
        if (unaff_x23 == 0) {
          if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto LAB_08561eb8;
        }
        if ((*(char *)(unaff_x23 + 0x30) != '\0') &&
           (uVar10 = FUN_08523e4c(in_stack_00000030,uVar15 & 0xffffffff,0), (uVar10 & 1) != 0)) {
          if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_08523e84(in_stack_00000030,uVar15 & 0xffffffff,0,0);
          lVar11 = FUN_08a08f70(uVar9,0);
          if (lVar11 != 0) {
            iVar7 = FUN_0899adf8(lVar11,0);
            if (*(int *)(*(long *)PTR_DAT_0932e408 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar17 = FUN_085971e8(extraout_x1 >> 0x10 & 0xffff,iVar7 == 2,0);
            FUN_05f650d4(&stack0x000000b0,6,2,1,*(undefined8 *)PTR_DAT_0932ebe0);
            lVar14 = 0;
            lVar11 = 0;
            uVar8 = 0;
            do {
              memset(&stack0x00000468,0,0x1c8);
              if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
              }
              uVar10 = FUN_085620a0(uVar17);
              uVar1 = 1 << (ulong)((uint)lVar11 & 0x1f);
              if ((uVar10 & 1) == 0) {
                uVar1 = 0;
              }
              uVar8 = uVar1 | uVar8;
              memmove((void *)((long)in_stack_000000b0 + lVar14),&stack0x00000468,0x1c8);
              memcpy(&stack0x000000d8,&stack0x00000468,0x1c8);
              memcpy((void *)(in_stack_000000c0 +
                             (long)(int)(iStack000000000000006c + (uint)lVar11) * 0xfc),
                     &stack0x000001a4,0xfc);
              lVar11 = lVar11 + 1;
              lVar14 = lVar14 + 0x1c8;
            } while (lVar11 != 6);
            goto LAB_08561c20;
          }
          if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto LAB_08561eb8;
        }
      }
LAB_08561cc0:
      uVar15 = uVar15 + 1;
    } while (uVar15 != unaff_w19);
  }
  puVar3 = PTR_DAT_0932ebd8;
  *(undefined8 *)(*unaff_x20 + 8) = 0;
  *(undefined8 *)*unaff_x20 = 0;
  *(undefined8 *)(unaff_x20[1] + 8) = 0;
  *(undefined8 *)unaff_x20[1] = 0;
  auVar18 = FUN_05f672ac(&stack0x000000c0,0,iVar16,*(undefined8 *)puVar3);
  *unaff_x20 = auVar18;
  *(long *)unaff_x20[1] = lVar4;
  *(undefined8 *)(unaff_x20[1] + 8) = uVar5;
  FUN_0840a284(&stack0x000000d4,0);
  if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
    return;
  }
LAB_08561eb8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


