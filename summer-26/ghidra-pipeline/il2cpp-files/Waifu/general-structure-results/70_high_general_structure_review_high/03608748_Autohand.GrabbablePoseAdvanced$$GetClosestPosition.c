/*
FUNCTION_NAME: Autohand.GrabbablePoseAdvanced$$GetClosestPosition
ENTRY_POINT: 03608748
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Autohand_GrabbablePoseAdvanced__GetClosestPosition(void)

{
  int iVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *unaff_x19;
  long *plVar10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  do {
    FUN_033b9870();
    do {
      uVar5 = FUN_06b59e20(&stack0x00000108,0);
      if (((uVar5 & 1) != 0) && (unaff_x19[0x14] != 2)) {
        uVar8 = FUN_03398a84(DAT_083c4ce0);
        FUN_04aaae6c(uVar8,DAT_083f2fc0);
        puVar9 = (undefined8 *)(unaff_x19 + 0x16);
        *puVar9 = uVar8;
        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
          puVar2 = (ulong *)(unaff_x24 + ((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = *puVar2 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar8 = *puVar9;
        }
        if (*(int *)(DAT_083cf700 + 0xe0) == 0) {
          FUN_033b9870();
        }
        auVar11 = FUN_06b5a5d0(&stack0x00000108,uVar8,0);
        if (*(int *)(DAT_083c5f60 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if ((*(byte *)(*(long *)(DAT_083fb020 + 0x20) + 0x135) & 1) == 0) {
          FUN_0338f618();
        }
        _in_stack_00000070 = auVar11;
        uVar7 = FUN_05631534(&stack0x00000070,DAT_083de9f8);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined1 (*) [16])(unaff_x19 + 0x18) = _in_stack_00000070;
          if (*(int *)(DAT_083c8be0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          FUN_03c2fb8c(unaff_x19 + 2,&stack0x00000070);
          return;
        }
        FUN_0563161c(&stack0x00000010,&stack0x00000070,DAT_083de9f0);
        in_stack_00000088 = in_stack_00000018;
        in_stack_00000080 = in_stack_00000010;
        in_stack_00000090 = in_stack_00000020;
        uVar7 = FUN_04f2ff4c(&stack0x00000080,DAT_083fada0);
        if ((uVar7 & 1) != 0) {
          if (unaff_x19[0x14] == 0) {
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            lVar6 = *(long *)(unaff_x22 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
          }
          else {
            if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            lVar6 = *(long *)(unaff_x22 + 0x18);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          plVar10 = (long *)(unaff_x19 + 0x16);
          if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          in_stack_00000018 = 0;
          in_stack_00000010 = 0;
          _uStack0000000000000028 = 0;
          in_stack_00000020 = 0;
          in_stack_00000030 = 0;
          FUN_05fd295c(&stack0x00000010,*plVar10,
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083f2fe8 + 0x20) + 0xc0) + 0x138));
          uVar8 = DAT_012e2fc0;
          in_stack_00000048 = in_stack_00000018;
          in_stack_00000040 = in_stack_00000010;
          in_stack_00000058 = _uStack0000000000000028;
          in_stack_00000050 = in_stack_00000020;
          in_stack_00000060 = in_stack_00000030;
          while( true ) {
            uVar7 = FUN_05fd29d0(&stack0x00000040,DAT_083e6dc8);
            if ((uVar7 & 1) == 0) break;
            in_stack_00000020 = in_stack_00000060;
            in_stack_00000018 = in_stack_00000058;
            in_stack_00000010 = in_stack_00000050;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_033d1d3c();
            }
            in_stack_000000c8 = in_stack_00000058;
            in_stack_000000c0 = in_stack_00000050;
            in_stack_000000d0 = in_stack_00000060;
            uVar7 = FUN_04aabd3c(lVar6,&stack0x000000c0,DAT_083f2fe0);
            if ((uVar7 & 1) != 0) {
              in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x12);
              in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
              in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0xe);
              if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_033d1d3c(0,unaff_x19[0xc]);
              }
              in_stack_000000f8 = uVar8;
              in_stack_000000e0 = in_stack_00000010;
              in_stack_000000e8 = in_stack_00000018;
              in_stack_000000f0 = in_stack_00000020;
              FUN_048e0044(*(long *)(unaff_x19 + 8),unaff_x19[0xc],&stack0x000000e0,DAT_083ef608);
            }
          }
          *(undefined8 *)(unaff_x19 + 0xe) = 0;
          *(undefined8 *)(unaff_x19 + 0x10) = 0;
          *(undefined8 *)(unaff_x19 + 0x12) = 0;
          *plVar10 = 0;
          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
            puVar2 = (ulong *)(unaff_x24 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = *puVar2 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
      }
      do {
        iVar1 = unaff_x19[0xc] + 1;
        unaff_x19[0xc] = iVar1;
        lVar6 = *(long *)(unaff_x19 + 8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (*(int *)(lVar6 + 0x18) <= iVar1) {
          *unaff_x19 = 0xfffffffe;
          if (*(int *)(DAT_083c8be0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          FUN_06734760(unaff_x19 + 2,0);
          return;
        }
        FUN_048dfff8(&stack0x00000010,lVar6,iVar1,DAT_083ef600);
        in_stack_000000a8 = in_stack_00000018;
        in_stack_000000a0 = in_stack_00000010;
        in_stack_000000b0 = in_stack_00000020;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000020;
        *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
        *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000010;
        unaff_x19[0x14] = uStack0000000000000028;
        if (*(int *)(DAT_083cf588 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar7 = System_Linq_Enumerable_WhereSelectListIterator<QRCodeGenerator_AlignmentPattern,_object>__Select<Matrix4x4>
                          (unaff_x19 + 0xe,&stack0x00000108,DAT_08413560);
      } while ((uVar7 & 1) == 0);
    } while (*(int *)(DAT_083cf700 + 0xe0) != 0);
  } while( true );
}


