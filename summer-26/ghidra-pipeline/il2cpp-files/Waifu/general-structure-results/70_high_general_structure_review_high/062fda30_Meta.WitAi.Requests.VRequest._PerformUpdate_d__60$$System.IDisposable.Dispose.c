/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest.<PerformUpdate>d__60$$System.IDisposable.Dispose
ENTRY_POINT: 062fda30
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x062fdfd8) */

void Meta_WitAi_Requests_VRequest_<PerformUpdate>d__60__System_IDisposable_Dispose(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  uint uVar12;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  int iStack00000000000000b0;
  char cStack00000000000000b4;
  ushort uStack00000000000000b6;
  undefined4 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  long in_stack_00000128;
  
  do {
    lVar9 = DAT_083f0cb8;
    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar10 = *(long *)(in_stack_00000030 + 0x10);
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar12 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar12 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar12 + 1;
      *(char *)(lVar10 + (int)uVar12 + 0x20) = (char)unaff_w23;
    }
    else {
      FUN_049b548c(in_stack_00000030,unaff_w23 & 0xff,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = DAT_083f4fa0;
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar10 = *(long *)(in_stack_00000028 + 0x10);
    *(int *)(in_stack_00000028 + 0x1c) = *(int *)(in_stack_00000028 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar12 = *(uint *)(in_stack_00000028 + 0x18);
    if (uVar12 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(in_stack_00000028 + 0x18) = uVar12 + 1;
      *(short *)(lVar10 + (long)(int)uVar12 * 2 + 0x20) = (short)in_stack_00000040._4_4_;
    }
    else {
      FUN_04b5776c(in_stack_00000028,in_stack_00000040._4_4_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = DAT_083f4fa0;
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar10 = *(long *)(in_stack_00000038 + 0x10);
    *(int *)(in_stack_00000038 + 0x1c) = *(int *)(in_stack_00000038 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar12 = *(uint *)(in_stack_00000038 + 0x18);
    if (uVar12 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(in_stack_00000038 + 0x18) = uVar12 + 1;
      *(short *)(lVar10 + (long)(int)uVar12 * 2 + 0x20) = (short)unaff_w22;
    }
    else {
      FUN_04b5776c(in_stack_00000038,unaff_w22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    while( true ) {
      do {
        iVar5 = *(int *)(in_stack_00000050 + 0x18);
        while (iVar5 < 1) {
          uVar6 = FUN_05fc11c0(&stack0x000000d0,DAT_083e6708);
          if ((uVar6 & 1) == 0) {
            if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            uVar7 = FUN_049b6cd4(in_stack_00000030,DAT_083f0cc0);
            in_stack_000000e8 = 0;
            in_stack_000000f0 = 0;
            FUN_04db1a80(&stack0x000000e8,uVar7,4,DAT_083f8d68);
            *(undefined8 *)(unaff_x20 + 0x2a8) = in_stack_000000f0;
            *(undefined8 *)(unaff_x20 + 0x2a0) = in_stack_000000e8;
            if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            uVar7 = FUN_04b58f98(in_stack_00000028,DAT_083f4fb0);
            in_stack_00000090 = 0;
            in_stack_00000098 = 0;
            FUN_04ddc420(&stack0x00000090,uVar7,4,DAT_083f9048);
            *(undefined8 *)(unaff_x20 + 0x2b8) = in_stack_00000098;
            *(undefined8 *)(unaff_x20 + 0x2b0) = in_stack_00000090;
            if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            uVar7 = FUN_04b58f98(in_stack_00000038,DAT_083f4fb0);
            in_stack_00000080 = 0;
            in_stack_00000088 = 0;
            FUN_04ddc420(&stack0x00000080,uVar7,4,DAT_083f9048);
            *(undefined8 *)(unaff_x20 + 0x2c8) = in_stack_00000088;
            *(undefined8 *)(unaff_x20 + 0x2c0) = in_stack_00000080;
            if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            uVar7 = FUN_04b58f98(in_stack_00000058,DAT_083f4fb0);
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            FUN_04ddc420(&stack0x00000070,uVar7,4,DAT_083f9048);
            *(undefined8 *)(unaff_x20 + 0x2d8) = in_stack_00000078;
            *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000070;
            FUN_04d7f124(in_stack_00000018,unaff_x20 + 0x250,unaff_x20 + 0x260,DAT_083f8a30);
            if (in_stack_00000018 == (long *)0x0) goto LAB_062fdf80;
            lVar9 = *in_stack_00000018;
            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar6 == 0) goto LAB_062fdf58;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_062fdf40;
          }
          if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          *(undefined4 *)(in_stack_00000050 + 0x18) = 0;
          *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
          if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c(0,in_stack_000000e0);
          }
          uVar4 = FUN_05cabf14(in_stack_00000020,in_stack_000000e0,DAT_083e1b00);
          FUN_05329278(in_stack_00000050,uVar4,DAT_083fd1b0);
          iVar5 = *(int *)(in_stack_00000050 + 0x18);
        }
        iVar5 = FUN_053291d4(in_stack_00000050,DAT_083fd1a8);
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        bVar1 = *(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) + (long)iVar5);
        if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (*(char *)(unaff_x21 + 0x520) == '\0') {
          FUN_0335b6c8(&DAT_083d2d30,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x21 + 0x520) = 1;
        }
        if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
          FUN_033b9870();
        }
      } while ((bVar1 >> 1 & 1) != 0);
      uVar12 = 0;
      in_stack_000000a8 = in_stack_00000060[1];
      in_stack_000000a0 = *in_stack_00000060;
      cStack00000000000000b4 = '\x01';
      *in_stack_00000048 = 0;
      in_stack_00000048[1] = 0;
      *(undefined4 *)((long)in_stack_00000048 + 0xf) = 0;
      iStack00000000000000b0 = iVar5;
      while( true ) {
        iVar3 = iStack00000000000000b0;
        if (cStack00000000000000b4 == '\x01') {
          cStack00000000000000b4 = '\0';
          if ((*(byte *)(*(long *)(*(long *)(unaff_x29 + 0xa8) + 0x20) + 0x135) & 1) == 0) {
            FUN_0338f618();
          }
          uVar6 = FUN_04eccec8(&stack0x000000a0,iVar3);
        }
        else {
          if ((*(byte *)(*(long *)(*(long *)(unaff_x29 + 0xa8) + 0x20) + 0x135) & 1) == 0) {
            FUN_0338f618();
          }
          uVar6 = FUN_04eccf24(&stack0x000000a0);
        }
        if ((uVar6 & 1) == 0) break;
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        bVar1 = *(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) +
                         (ulong)uStack00000000000000b6);
        if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (DAT_086de4d5 == '\0') {
          FUN_0335b6c8(&DAT_083d2d30,1);
          DataMemoryBarrier(2,3);
          DAT_086de4d5 = '\x01';
        }
        if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar12 = uVar12 | (bVar1 & 2) >> 1;
      }
      if (uVar12 != 0) break;
      in_stack_000000a8 = in_stack_00000060[1];
      in_stack_000000a0 = *in_stack_00000060;
      cStack00000000000000b4 = '\x01';
      *in_stack_00000048 = 0;
      in_stack_00000048[1] = 0;
      *(undefined4 *)((long)in_stack_00000048 + 0xf) = 0;
      iStack00000000000000b0 = iVar5;
      while( true ) {
        iVar5 = iStack00000000000000b0;
        if (cStack00000000000000b4 == '\x01') {
          cStack00000000000000b4 = '\0';
          if ((*(byte *)(*(long *)(*(long *)(unaff_x29 + 0xa8) + 0x20) + 0x135) & 1) == 0) {
            FUN_0338f618();
          }
          uVar6 = FUN_04eccec8(&stack0x000000a0,iVar5);
        }
        else {
          if ((*(byte *)(*(long *)(*(long *)(unaff_x29 + 0xa8) + 0x20) + 0x135) & 1) == 0) {
            FUN_0338f618();
          }
          uVar6 = FUN_04eccf24(&stack0x000000a0);
        }
        if ((uVar6 & 1) == 0) break;
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uVar6 = (ulong)uStack00000000000000b6;
        bVar1 = *(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) + uVar6);
        if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (*(char *)(unaff_x21 + 0x520) == '\0') {
          FUN_0335b6c8(&DAT_083d2d30,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x21 + 0x520) = 1;
        }
        if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((bVar1 >> 1 & 1) == 0) {
          FUN_05329278(in_stack_00000050,uVar6,DAT_083fd1b0);
        }
      }
    }
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    *(undefined4 *)(unaff_x28 + 0x18) = 0;
    *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
    FUN_05329278();
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    in_stack_00000040._4_4_ = *(undefined4 *)(in_stack_00000058 + 0x18);
    if (*(int *)(unaff_x28 + 0x18) < 1) {
      unaff_w23 = 0;
      unaff_w22 = 0;
    }
    else {
      unaff_w22 = 0;
      unaff_w23 = 0;
      do {
        iVar5 = FUN_053291d4();
        lVar9 = DAT_083f4fa0;
        lVar10 = *(long *)(in_stack_00000058 + 0x10);
        *(int *)(in_stack_00000058 + 0x1c) = *(int *)(in_stack_00000058 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        uVar12 = *(uint *)(in_stack_00000058 + 0x18);
        if (uVar12 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(in_stack_00000058 + 0x18) = uVar12 + 1;
          *(short *)(lVar10 + (long)(int)uVar12 * 2 + 0x20) = (short)iVar5;
        }
        else {
          FUN_04b5776c(in_stack_00000058,iVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        bVar1 = *(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) + (long)iVar5);
        if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar6 = FUN_04eccf70(in_stack_00000060,iVar5,DAT_083f97c0);
        if ((uVar6 & 1) != 0) {
          in_stack_000000a8 = in_stack_00000060[1];
          in_stack_000000a0 = *in_stack_00000060;
          cStack00000000000000b4 = '\x01';
          *in_stack_00000048 = 0;
          in_stack_00000048[1] = 0;
          *(undefined4 *)((long)in_stack_00000048 + 0xf) = 0;
          iStack00000000000000b0 = iVar5;
          while( true ) {
            iVar5 = iStack00000000000000b0;
            if (cStack00000000000000b4 == '\x01') {
              cStack00000000000000b4 = '\0';
              if ((*(byte *)(*(long *)(*(long *)(unaff_x29 + 0xa8) + 0x20) + 0x135) & 1) == 0) {
                FUN_0338f618();
              }
              uVar6 = FUN_04eccec8(&stack0x000000a0,iVar5);
            }
            else {
              if ((*(byte *)(*(long *)(*(long *)(unaff_x29 + 0xa8) + 0x20) + 0x135) & 1) == 0) {
                FUN_0338f618();
              }
              uVar6 = FUN_04eccf24(&stack0x000000a0);
            }
            if ((uVar6 & 1) == 0) break;
            if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            bVar2 = *(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x10) +
                             (ulong)uStack00000000000000b6);
            if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
              FUN_033b9870();
            }
            if (*(char *)(unaff_x21 + 0x520) == '\0') {
              FUN_0335b6c8(&DAT_083d2d30,1);
              DataMemoryBarrier(2,3);
              *(undefined1 *)(unaff_x21 + 0x520) = 1;
            }
            if (*(int *)(*(long *)(unaff_x26 + 0xd30) + 0xe0) == 0) {
              FUN_033b9870();
            }
            if ((bVar2 >> 1 & 1) != 0) {
              FUN_05329278();
            }
          }
        }
        unaff_w22 = unaff_w22 + 1;
        unaff_w23 = unaff_w23 | (~(uint)bVar1 & 0x80) >> 7;
      } while (0 < *(int *)(unaff_x28 + 0x18));
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar11 = piVar11 + 4;
    if (uVar6 == 0) break;
LAB_062fdf40:
    if (*(long *)(piVar11 + -2) == DAT_083cc7a8) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_062fdf74;
    }
  }
LAB_062fdf58:
  puVar8 = (undefined8 *)FUN_0338f71c(in_stack_00000018,DAT_083cc7a8,0);
LAB_062fdf74:
  (*(code *)*puVar8)(in_stack_00000018,puVar8[1]);
LAB_062fdf80:
  if (*(long *)(in_stack_00000010 + 0x28) != in_stack_00000128) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


