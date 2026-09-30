/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_session_font_id_get
ENTRY_POINT: 0856192c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_session_font_id_get
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong extraout_x1;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong unaff_x25;
  uint unaff_w27;
  undefined4 uVar13;
  undefined4 unaff_s8;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 (*in_stack_00000038) [16];
  long in_stack_00000040;
  long *in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  void *in_stack_000000b0;
  int iStack00000000000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000d8;
  long in_stack_000007f8;
  
code_r0x0856192c:
  FUN_05f650d4(param_1,param_2,param_3,param_4,param_5);
  lVar12 = 0;
  lVar10 = 0;
  uVar6 = 0;
  do {
    memset(&stack0x00000468,0,0x1c8);
    if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar8 = FUN_085620a0(unaff_s8);
    uVar2 = 1 << (ulong)((uint)lVar10 & 0x1f);
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    uVar6 = uVar2 | uVar6;
    memmove((void *)((long)in_stack_000000b0 + lVar12),&stack0x00000468,0x1c8);
    memcpy(&stack0x000000d8,&stack0x00000468,0x1c8);
    memcpy((void *)(in_stack_000000c0 + (long)(int)(in_stack_00000068._4_4_ + (uint)lVar10) * 0xfc),
           &stack0x000001a4,0xfc);
    lVar10 = lVar10 + 1;
    lVar12 = lVar12 + 0x1c8;
  } while (lVar10 != 6);
LAB_08561c20:
  do {
    plVar9 = (long *)(*in_stack_00000048 + unaff_x25 * 0x18);
    plVar9[1] = _iStack00000000000000b8;
    *plVar9 = (long)in_stack_000000b0;
    *(uint *)(plVar9 + 2) = uVar6;
    *(undefined4 *)((long)plVar9 + 0x14) = 0;
    in_stack_000000d8 = 0;
    FUN_089cdde4(&stack0x000000d8,in_stack_00000068._4_4_,_iStack00000000000000b8 & 0xffffffff,0);
    uVar7 = in_stack_000000d8;
    if (*(int *)(*(long *)PTR_DAT_0932ebd0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (unaff_w27 < 3) {
      uVar13 = *(undefined4 *)(&DAT_01be312c + (ulong)unaff_w27 * 4);
    }
    else {
      uVar13 = 0;
    }
    puVar1 = (undefined8 *)(in_stack_00000040 + unaff_x25 * 0x10);
    *puVar1 = uVar7;
    *(undefined4 *)(puVar1 + 1) = uVar13;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    in_stack_00000068._4_4_ = iStack00000000000000b8 + in_stack_00000068._4_4_;
    in_stack_00000058._4_4_ = iStack00000000000000b8 + in_stack_00000058._4_4_;
    do {
      while( true ) {
        while( true ) {
          puVar4 = PTR_DAT_0932ebd8;
          unaff_x25 = unaff_x25 + 1;
          if (unaff_x25 == in_stack_00000050) {
            *(undefined8 *)(*in_stack_00000038 + 8) = 0;
            *(undefined8 *)*in_stack_00000038 = 0;
            *(undefined8 *)(in_stack_00000038[1] + 8) = 0;
            *(undefined8 *)in_stack_00000038[1] = 0;
            auVar14 = FUN_05f672ac(&stack0x000000c0,0,in_stack_00000058._4_4_,*(undefined8 *)puVar4)
            ;
            *in_stack_00000038 = auVar14;
            *(long *)in_stack_00000038[1] = in_stack_00000040;
            *(undefined8 *)(in_stack_00000038[1] + 8) = in_stack_00000020;
            FUN_0840a284(&stack0x000000d4,0);
            if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
              return;
            }
            goto LAB_08561eb8;
          }
          auVar14 = FUN_089fff78();
          uVar7 = FUN_050c7be0(auVar14._0_8_,auVar14._8_8_,unaff_x25 & 0xffffffff,
                               *(undefined8 *)PTR_DAT_0932d890);
          unaff_w27 = FUN_08a08ffc(uVar7,0);
          in_stack_000000b0 = (void *)0x0;
          _iStack00000000000000b8 = 0;
          if (unaff_w27 != 0) break;
          if (in_stack_00000060 == 0) {
            if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            goto LAB_08561eb8;
          }
          if ((*(char *)(in_stack_00000060 + 0x30) != '\0') &&
             (uVar8 = FUN_08523e4c(in_stack_00000030,unaff_x25 & 0xffffffff,0), (uVar8 & 1) != 0)) {
            FUN_05f650d4(&stack0x000000b0,1,2,1,*(undefined8 *)PTR_DAT_0932ebe0);
            memset(&stack0x000002a0,0,0x1c8);
            if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar6 = FUN_085621d8();
            uVar6 = uVar6 & 1;
            memmove(in_stack_000000b0,&stack0x000002a0,0x1c8);
            memcpy(&stack0x000000d8,&stack0x000002a0,0x1c8);
            memcpy((void *)(in_stack_000000c0 + (long)in_stack_00000068._4_4_ * 0xfc),
                   &stack0x000001a4,0xfc);
            goto LAB_08561c20;
          }
        }
        if (unaff_w27 == 1) break;
        if (unaff_w27 != 2) goto LAB_08561c1c;
        if (in_stack_00000060 == 0) {
          if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto LAB_08561eb8;
        }
        if ((*(char *)(in_stack_00000060 + 0x30) != '\0') &&
           (uVar8 = FUN_08523e4c(in_stack_00000030,unaff_x25 & 0xffffffff,0), (uVar8 & 1) != 0)) {
          if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_08523e84(in_stack_00000030,unaff_x25 & 0xffffffff,0,0);
          lVar10 = FUN_08a08f70(uVar7,0);
          if (lVar10 == 0) {
            if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            goto LAB_08561eb8;
          }
          iVar5 = FUN_0899adf8(lVar10,0);
          if (*(int *)(*(long *)PTR_DAT_0932e408 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          unaff_s8 = FUN_085971e8(extraout_x1 >> 0x10 & 0xffff,iVar5 == 2,0);
          param_5 = *(undefined8 *)PTR_DAT_0932ebe0;
          param_1 = &stack0x000000b0;
          param_2 = 6;
          param_3 = 2;
          param_4 = 1;
          goto code_r0x0856192c;
        }
      }
      if (in_stack_00000060 == 0) {
        if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_08561eb8;
      }
    } while (*(char *)(in_stack_00000060 + 0x10) == '\0');
    uVar2 = *(uint *)(in_stack_00000060 + 0x1c);
    FUN_05f650d4(&stack0x000000b0,uVar2,2,1,*(undefined8 *)PTR_DAT_0932ebe0);
    if ((int)uVar2 < 1) {
LAB_08561c1c:
      uVar6 = 0;
    }
    else {
      lVar10 = 0;
      uVar11 = 0;
      uVar6 = 0;
      do {
        memset(&stack0x00000630,0,0x1c8);
        lVar12 = FUN_08a08f70(uVar7,0);
        if (lVar12 == 0) {
          if (*(long *)(in_stack_00000028 + 0x28) == in_stack_000007f8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
LAB_08561eb8:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar13 = FUN_0899a95c(lVar12,0);
        if (*(int *)(*(long *)PTR_DAT_0932d8a8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar8 = FUN_08561ec0(uVar13);
        uVar3 = 1 << (ulong)(uVar11 & 0x1f);
        if ((uVar8 & 1) == 0) {
          uVar3 = 0;
        }
        uVar6 = uVar3 | uVar6;
        memmove((void *)((long)in_stack_000000b0 + lVar10),&stack0x00000630,0x1c8);
        memcpy(&stack0x000000d8,&stack0x00000630,0x1c8);
        memcpy((void *)(in_stack_000000c0 + (long)(int)(in_stack_00000068._4_4_ + uVar11) * 0xfc),
               &stack0x000001a4,0xfc);
        lVar10 = lVar10 + 0x1c8;
        uVar11 = uVar11 + 1;
      } while ((ulong)uVar2 * 0x1c8 - lVar10 != 0);
    }
  } while( true );
}


