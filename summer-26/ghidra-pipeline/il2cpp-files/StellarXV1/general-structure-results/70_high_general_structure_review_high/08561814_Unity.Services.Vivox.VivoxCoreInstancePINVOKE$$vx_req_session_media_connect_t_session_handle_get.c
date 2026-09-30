/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_session_handle_get
ENTRY_POINT: 08561814
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_session_handle_get
               (void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong extraout_x1;
  long *plVar11;
  ulong unaff_x19;
  uint uVar12;
  undefined1 (*unaff_x20) [16];
  long lVar13;
  long unaff_x23;
  ulong unaff_x25;
  int unaff_w26;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  long *in_stack_00000048;
  ulong uStack0000000000000050;
  int iStack000000000000006c;
  void *in_stack_000000b0;
  int iStack00000000000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000d8;
  long in_stack_000007f8;
  
  uStack0000000000000050 = unaff_x19 & 0xffffffff;
  iStack000000000000006c = 0;
  do {
    auVar15 = FUN_089fff78();
    uVar8 = FUN_050c7be0(auVar15._0_8_,auVar15._8_8_,unaff_x25 & 0xffffffff,
                         *(undefined8 *)PTR_DAT_0932d890);
    uVar5 = FUN_08a08ffc(uVar8,0);
    in_stack_000000b0 = (void *)0x0;
    _iStack00000000000000b8 = 0;
    if (uVar5 == 0) {
      if (unaff_x23 == 0) {
        if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_08561eb8;
      }
      if ((*(char *)(unaff_x23 + 0x30) == '\0') ||
         (uVar9 = FUN_08523e4c(in_stack_00000030,unaff_x25 & 0xffffffff,0), (uVar9 & 1) == 0))
      goto LAB_08561cc0;
      FUN_05f650d4(&stack0x000000b0,1,2,1,*(undefined8 *)PTR_DAT_0932ebe0);
      memset(&stack0x000002a0,0,0x1c8);
      if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar7 = FUN_085621d8();
      uVar7 = uVar7 & 1;
      memmove(in_stack_000000b0,&stack0x000002a0,0x1c8);
      memcpy(&stack0x000000d8,&stack0x000002a0,0x1c8);
      memcpy((void *)(in_stack_000000c0 + (long)iStack000000000000006c * 0xfc),&stack0x000001a4,0xfc
            );
LAB_08561c20:
      plVar11 = (long *)(*in_stack_00000048 + unaff_x25 * 0x18);
      plVar11[1] = _iStack00000000000000b8;
      *plVar11 = (long)in_stack_000000b0;
      *(uint *)(plVar11 + 2) = uVar7;
      *(undefined4 *)((long)plVar11 + 0x14) = 0;
      in_stack_000000d8 = 0;
      FUN_089cdde4(&stack0x000000d8,iStack000000000000006c,_iStack00000000000000b8 & 0xffffffff,0);
      uVar8 = in_stack_000000d8;
      if (*(int *)(*(long *)PTR_DAT_0932ebd0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (uVar5 < 3) {
        uVar14 = *(undefined4 *)(&DAT_01be312c + (ulong)uVar5 * 4);
      }
      else {
        uVar14 = 0;
      }
      puVar1 = (undefined8 *)(in_stack_00000040 + unaff_x25 * 0x10);
      *puVar1 = uVar8;
      *(undefined4 *)(puVar1 + 1) = uVar14;
      *(undefined4 *)((long)puVar1 + 0xc) = 0;
      iStack000000000000006c = iStack00000000000000b8 + iStack000000000000006c;
      unaff_w26 = iStack00000000000000b8 + unaff_w26;
    }
    else if (uVar5 == 1) {
      if (unaff_x23 == 0) {
        if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_08561eb8;
      }
      if (*(char *)(unaff_x23 + 0x10) != '\0') {
        uVar2 = *(uint *)(unaff_x23 + 0x1c);
        FUN_05f650d4(&stack0x000000b0,uVar2,2,1,*(undefined8 *)PTR_DAT_0932ebe0);
        if (0 < (int)uVar2) {
          lVar10 = 0;
          uVar12 = 0;
          uVar7 = 0;
          do {
            memset(&stack0x00000630,0,0x1c8);
            lVar13 = FUN_08a08f70(uVar8,0);
            if (lVar13 == 0) {
              if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              goto LAB_08561eb8;
            }
            uVar14 = FUN_0899a95c(lVar13,0);
            if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar9 = FUN_08561ec0(uVar14);
            uVar3 = 1 << (ulong)(uVar12 & 0x1f);
            if ((uVar9 & 1) == 0) {
              uVar3 = 0;
            }
            uVar7 = uVar3 | uVar7;
            memmove((void *)((long)in_stack_000000b0 + lVar10),&stack0x00000630,0x1c8);
            memcpy(&stack0x000000d8,&stack0x00000630,0x1c8);
            memcpy((void *)(in_stack_000000c0 + (long)(int)(iStack000000000000006c + uVar12) * 0xfc)
                   ,&stack0x000001a4,0xfc);
            lVar10 = lVar10 + 0x1c8;
            uVar12 = uVar12 + 1;
          } while ((ulong)uVar2 * 0x1c8 - lVar10 != 0);
          goto LAB_08561c20;
        }
        goto LAB_08561c1c;
      }
    }
    else {
      if (uVar5 != 2) {
LAB_08561c1c:
        uVar7 = 0;
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
         (uVar9 = FUN_08523e4c(in_stack_00000030,unaff_x25 & 0xffffffff,0), (uVar9 & 1) != 0)) {
        if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_08523e84(in_stack_00000030,unaff_x25 & 0xffffffff,0,0);
        lVar10 = FUN_08a08f70(uVar8,0);
        if (lVar10 != 0) {
          iVar6 = FUN_0899adf8(lVar10,0);
          if (*(int *)(*(long *)PTR_DAT_0932e408 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar14 = FUN_085971e8(extraout_x1 >> 0x10 & 0xffff,iVar6 == 2,0);
          FUN_05f650d4(&stack0x000000b0,6,2,1,*(undefined8 *)PTR_DAT_0932ebe0);
          iVar6 = iStack000000000000006c;
          lVar13 = 0;
          lVar10 = 0;
          uVar7 = 0;
          do {
            memset(&stack0x00000468,0,0x1c8);
            if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar9 = FUN_085620a0(uVar14);
            uVar2 = 1 << (ulong)((uint)lVar10 & 0x1f);
            if ((uVar9 & 1) == 0) {
              uVar2 = 0;
            }
            uVar7 = uVar2 | uVar7;
            memmove((void *)((long)in_stack_000000b0 + lVar13),&stack0x00000468,0x1c8);
            memcpy(&stack0x000000d8,&stack0x00000468,0x1c8);
            memcpy((void *)(in_stack_000000c0 + (long)(int)(iVar6 + (uint)lVar10) * 0xfc),
                   &stack0x000001a4,0xfc);
            lVar10 = lVar10 + 1;
            lVar13 = lVar13 + 0x1c8;
          } while (lVar10 != 6);
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
    puVar4 = PTR_DAT_0932ebd8;
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x25 == uStack0000000000000050) {
      *(undefined8 *)(*unaff_x20 + 8) = 0;
      *(undefined8 *)*unaff_x20 = 0;
      *(undefined8 *)(unaff_x20[1] + 8) = 0;
      *(undefined8 *)unaff_x20[1] = 0;
      auVar15 = FUN_05f672ac(&stack0x000000c0,0,unaff_w26,*(undefined8 *)puVar4);
      *unaff_x20 = auVar15;
      *(long *)unaff_x20[1] = in_stack_00000040;
      *(undefined8 *)(unaff_x20[1] + 8) = in_stack_00000020;
      FUN_0840a284(&stack0x000000d4,0);
      if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
        return;
      }
LAB_08561eb8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


