/*
FUNCTION_NAME: ShadowGroveGames.WebhooksForDiscord.Scripts.DiscordWebhook.<SendHttpRequestAsync>d__26$$MoveNext
ENTRY_POINT: 06bae4cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void ShadowGroveGames_WebhooksForDiscord_Scripts_DiscordWebhook_<SendHttpRequestAsync>d__26__MoveNext
               (undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar15;
  undefined1 unaff_w21;
  undefined8 uVar16;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  char cStack0000000000000038;
  undefined4 uStack000000000000003c;
  ulong in_stack_00000040;
  long *in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  long *in_stack_00000060;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08427cf0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d84a8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d25e8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d84d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08430420,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844ceb0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08442cd8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08430470,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084499d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084303c8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08447188,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0843acb0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08438268,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08430428,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844b478,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08430a60,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0843fc00,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x89c) = unaff_w21;
  _cStack0000000000000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = (long *)0x0;
  FUN_06c2b11c(&stack0x00000038,0x9b83dd9,0,0xffffffffffffffff,0);
  in_stack_00000060 = in_stack_00000048;
  in_stack_00000058 = in_stack_00000040;
  in_stack_00000050 = _cStack0000000000000038;
  if (*(int *)(DAT_083cf778 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_06c2b280(&stack0x00000020);
  if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086e1bc9 == '\0') {
    FUN_0335b6c8(&DAT_083cf660,1);
    DataMemoryBarrier(2,3);
    DAT_086e1bc9 = '\x01';
  }
  if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar15 = **(undefined8 **)(DAT_083cf660 + 0xb8);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870(DAT_083cf7d8);
  }
  uVar7 = FUN_07a0d2c4(uVar15,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086e48d4 == '\0') {
      FUN_0335b6c8(&DAT_083cf660,1);
      DataMemoryBarrier(2,3);
      DAT_086e48d4 = '\x01';
    }
    if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
      FUN_033b9870();
    }
    **(long **)(DAT_083cf660 + 0xb8) = unaff_x19;
    if (DAT_08908cd0 != 0) {
      uVar7 = *(ulong *)(DAT_083cf660 + 0xb8);
      puVar1 = &DAT_0873ccb0 + (uVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (uVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar15 = FUN_06c0a954(0);
    if (DAT_086e48d5 == '\0') {
      FUN_0335b6c8(&DAT_083cf660,1);
      DataMemoryBarrier(2,3);
      DAT_086e48d5 = '\x01';
    }
    if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
      FUN_033b9870();
    }
    puVar13 = (undefined8 *)(*(long *)(DAT_083cf660 + 0xb8) + 0x20);
    *puVar13 = uVar15;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar8 = FUN_03398188(DAT_083c7c90,9);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    puVar13 = (undefined8 *)(lVar8 + 0x20);
    *puVar13 = DAT_0844b478;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)(DAT_083c89c0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086ed368 == (code *)0x0) {
      DAT_086ed368 = (code *)FUN_033d1b68("UnityEngine.Application::get_unityVersion()");
    }
    uVar15 = (*DAT_086ed368)();
    if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    puVar13 = (undefined8 *)(lVar8 + 0x28);
    *puVar13 = uVar15;
    if (DAT_08908cd0 == 0) {
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06baf7c8;
      *(undefined8 *)(lVar8 + 0x30) = DAT_08430428;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(uint *)(lVar8 + 0x18) < 3) {
LAB_06baf7c8:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar13 = (undefined8 *)(lVar8 + 0x30);
      *puVar13 = DAT_08430428;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar9 = (long *)**(long **)(DAT_083cf6c8 + 0xb8);
    uVar15 = 0;
    if (plVar9 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    puVar13 = (undefined8 *)(lVar8 + 0x38);
    *puVar13 = uVar15;
    if (DAT_08908cd0 == 0) {
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_06baf7d0;
      *(undefined8 *)(lVar8 + 0x40) = DAT_08430420;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(uint *)(lVar8 + 0x18) < 5) {
LAB_06baf7d0:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar13 = (undefined8 *)(lVar8 + 0x40);
      *puVar13 = DAT_08430420;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar9 = (long *)FUN_06bb6318(0);
    uVar15 = 0;
    if (plVar9 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    puVar13 = (undefined8 *)(lVar8 + 0x48);
    *puVar13 = uVar15;
    if (DAT_08908cd0 == 0) {
      if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_06baf7d8;
      *(undefined8 *)(lVar8 + 0x50) = DAT_08430470;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(uint *)(lVar8 + 0x18) < 7) {
LAB_06baf7d8:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar13 = (undefined8 *)(lVar8 + 0x50);
      *puVar13 = DAT_08430470;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    plVar9 = (long *)FUN_06bb69ec(0);
    uVar15 = 0;
    if (plVar9 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
    }
    if (*(uint *)(lVar8 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    puVar13 = (undefined8 *)(lVar8 + 0x58);
    *puVar13 = uVar15;
    if (DAT_08908cd0 == 0) {
      if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_06baf7e0;
      *(undefined8 *)(lVar8 + 0x60) = DAT_08430a60;
    }
    else {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(uint *)(lVar8 + 0x18) < 9) {
LAB_06baf7e0:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar13 = (undefined8 *)(lVar8 + 0x60);
      *puVar13 = DAT_08430a60;
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar13 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar15 = FUN_0666ee4c(lVar8,0);
    if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar10 = FUN_06bb6318(0);
    uVar7 = FUN_06850508(uVar10,**(undefined8 **)(DAT_083cf6c8 + 0xb8),0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_079c9c0c(uVar15,0);
    }
    else {
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_079ca678(uVar15,0);
      FUN_079ca678(DAT_0844ceb0,0);
    }
    plVar9 = (long *)FUN_03398188(DAT_083c7a10,2);
    if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_06bac5dc();
    in_stack_00000060 = (long *)CONCAT44(in_stack_00000060._4_4_,uVar5);
    in_stack_00000050 = DAT_083d84d0;
    in_stack_00000058 = 0xffffffffffffffff;
    lVar8 = FUN_06868764(&stack0x00000050,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if ((lVar8 != 0) && (lVar11 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    {
      uVar15 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar15,0);
    }
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar14 = plVar9 + 4;
    *plVar14 = lVar8;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    in_stack_00000030 = FUN_06bab05c();
    in_stack_00000020 = DAT_083d84d8;
    in_stack_00000028 = 0xffffffffffffffff;
    lVar8 = FUN_06868764(&stack0x00000020,0);
    if ((lVar8 != 0) && (lVar11 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    {
      uVar15 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar15,0);
    }
    if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar14 = plVar9 + 5;
    *plVar14 = lVar8;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_079c9e54(DAT_08447188,plVar9,0);
    iVar6 = FUN_06bab05c();
    if (iVar6 == 3) {
      plVar9 = (long *)FUN_03398188(DAT_083c7a10,2);
      in_stack_00000050 = FUN_06bab0b0();
      lVar8 = FUN_03398650(DAT_083d25e8,&stack0x00000050);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((lVar8 != 0) &&
         (lVar11 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar15 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar15,0);
      }
      if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar14 = plVar9 + 4;
      *plVar14 = lVar8;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      in_stack_00000020 = FUN_06bab104();
      lVar8 = FUN_03398650(DAT_083d25e8,&stack0x00000020);
      if ((lVar8 != 0) &&
         (lVar11 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar15 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar15,0);
      }
      if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar14 = plVar9 + 5;
      *plVar14 = lVar8;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_079c9e54(DAT_08442cd8,plVar9,0);
    }
    if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar7 = FUN_06bae294();
    if ((uVar7 & 1) != 0) {
      if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar15 = *(undefined8 *)(*(long *)(DAT_083cf660 + 0xb8) + 0x1a8);
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870(DAT_083ca458);
      }
      FUN_079ca678(uVar15,0);
    }
    if (*(int *)(DAT_083c89c0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086ed3c8 == (code *)0x0) {
      DAT_086ed3c8 = (code *)FUN_033d1b68("UnityEngine.Application::get_platform()");
    }
    uVar15 = (*DAT_086ed3c8)();
    if (((uint)uVar15 < 0xc) && ((1 << (ulong)((uint)uVar15 & 0x1f) & 0x887U) != 0)) {
      *(undefined1 *)(unaff_x19 + 0x117) = 1;
      FUN_06baaa34(uVar15,0);
      *(undefined1 *)(unaff_x19 + 0x65) = 0;
      if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_06bafab4();
      FUN_06bb015c();
      FUN_06bb04ec();
      if (*(int *)(DAT_083d8b80 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      (**(code **)(*in_stack_00000048 + 0x188))
                (in_stack_00000048,uStack000000000000003c,
                 *(undefined4 *)(*(long *)(DAT_083d8b80 + 0xb8) + 4),in_stack_00000040 & 0xffffffff,
                 0xffffffffffffffff,*(undefined8 *)(*in_stack_00000048 + 400));
      plVar9 = (long *)FUN_03398188(DAT_083c7a10,2);
      if (DAT_086e454f == '\0') {
        FUN_0335b6c8(&DAT_083cf660,1);
        DataMemoryBarrier(2,3);
        DAT_086e454f = '\x01';
      }
      if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar8 = *(long *)(*(long *)(DAT_083cf660 + 0xb8) + 8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar5 = FUN_06b650a0(lVar8,0);
      in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar5);
      lVar8 = FUN_03398650(DAT_083d1220,&stack0x00000050);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if ((lVar8 != 0) &&
         (lVar11 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar15 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar15,0);
      }
      if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar14 = plVar9 + 4;
      *plVar14 = lVar8;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (DAT_086e454f == '\0') {
        FUN_0335b6c8(&DAT_083cf660,1);
        DataMemoryBarrier(2,3);
        DAT_086e454f = '\x01';
      }
      if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar8 = *(long *)(*(long *)(DAT_083cf660 + 0xb8) + 8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar15 = FUN_06b6504c(lVar8,0);
      if (*(int *)(DAT_083d84a8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar3 = DAT_08438268;
      uVar10 = DAT_084303c8;
      lVar8 = *(long *)(*(long *)(DAT_083d84a8 + 0xb8) + 8);
      if (lVar8 == 0) {
        if (*(int *)(DAT_083d84a8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar16 = **(undefined8 **)(DAT_083d84a8 + 0xb8);
        lVar8 = FUN_03398a84(DAT_083c1b98);
        FUN_043cc540(lVar8,uVar16,DAT_08427cf0,0);
        plVar14 = (long *)(*(long *)(DAT_083d84a8 + 0xb8) + 8);
        *plVar14 = lVar8;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      uVar15 = FUN_03f47bec(uVar15,lVar8,DAT_0840a238);
      uVar15 = FUN_03f582c0(uVar15,DAT_0840a900);
      lVar8 = FUN_0666f600(uVar10,uVar15,0);
      if ((lVar8 != 0) &&
         (lVar11 = FUN_0339898c(lVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
        uVar15 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
        FUN_033d1c20(uVar15,0);
      }
      if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      plVar14 = plVar9 + 5;
      *plVar14 = lVar8;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar14 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_079c9e54(uVar3,plVar9,0);
      if (*(char *)(unaff_x19 + 0x10b) != '\0') {
        if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (DAT_086e454f == '\0') {
          FUN_0335b6c8(&DAT_083cf660,1);
          DataMemoryBarrier(2,3);
          DAT_086e454f = '\x01';
        }
        if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
          FUN_033b9870();
        }
        lVar8 = *(long *)(*(long *)(DAT_083cf660 + 0xb8) + 8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        FUN_06b647ac(lVar8,0);
      }
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (DAT_086ed758 == (code *)0x0) {
        DAT_086ed758 = (code *)FUN_033d1b68("UnityEngine.Debug::get_isDebugBuild()");
      }
      uVar7 = (*DAT_086ed758)();
      if ((uVar7 & 1) != 0) {
        uVar15 = FUN_03c89df4(unaff_x19,DAT_08405d98);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar7 = FUN_07a119fc(uVar15,0,0);
        if ((uVar7 & 1) != 0) {
          if (DAT_086ef190 == (code *)0x0) {
            DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          }
          lVar8 = (*DAT_086ef190)(unaff_x19);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          FUN_03fa1ab4(lVar8,DAT_0840c9e0);
        }
        lVar8 = FUN_03c89df4(unaff_x19,DAT_08405d98);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(unaff_x19 + 0x60);
        if (DAT_086ef160 == (code *)0x0) {
          DAT_086ef160 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_enabled()");
        }
        uVar7 = (*DAT_086ef160)(lVar8);
        if ((uVar7 & 1) == 0) {
          if (DAT_086ef168 == (code *)0x0) {
            DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)"
                                               );
          }
          (*DAT_086ef168)(lVar8,1);
        }
        if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_06bc2de0(1,0);
      }
      if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (DAT_086e48d6 == '\0') {
        FUN_0335b6c8(&DAT_083cf660,1);
        DataMemoryBarrier(2,3);
        DAT_086e48d6 = '\x01';
      }
      if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar8 = *(long *)(*(long *)(DAT_083cf660 + 0xb8) + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_06baac84(unaff_x19,*(undefined4 *)(lVar8 + 0x18));
      uVar5 = *(undefined4 *)(unaff_x19 + 0x2c);
      if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_06bd1dd4(uVar5,0);
      if (*(char *)(unaff_x19 + 0xf8) != '\0') {
        if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar7 = FUN_06bbb4d4(1,0);
        if ((uVar7 & 1) == 0) {
          if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
            FUN_033b9870();
          }
          FUN_079c9c0c(DAT_0843acb0,0);
        }
      }
      if (*(char *)(unaff_x19 + 0xf9) != '\0') {
        if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_06bb066c();
        if (*(int *)(DAT_083d8b80 + 0xe0) == 0) {
          FUN_033b9870();
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        (**(code **)(*in_stack_00000048 + 0x188))
                  (in_stack_00000048,uStack000000000000003c,**(undefined4 **)(DAT_083d8b80 + 0xb8),
                   in_stack_00000040 & 0xffffffff,0xffffffffffffffff,
                   *(undefined8 *)(*in_stack_00000048 + 400));
      }
      if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar7 = FUN_06bc20cc(0);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_079ca678(DAT_0843fc00,0);
        *(undefined1 *)(unaff_x19 + 0x102) = 0;
      }
      else {
        cVar2 = *(char *)(unaff_x19 + 0x102);
        if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_06bc2294(cVar2 != '\0',0);
      }
      if (*(char *)(unaff_x19 + 0x34) != '\0') {
        uVar5 = *(undefined4 *)(unaff_x19 + 0x3c);
        if (DAT_086f40c0 == (code *)0x0) {
          DAT_086f40c0 = (code *)FUN_033d1b68(
                                             "UnityEngine.XR.XRSettings::set_eyeTextureResolutionScale(System.Single)"
                                             );
        }
        (*DAT_086f40c0)(uVar5);
      }
      FUN_06bb08f8(unaff_x19);
      if (*(int *)(DAT_083cf660 + 0xe0) == 0) {
        FUN_033b9870();
      }
      *(undefined1 *)(*(long *)(DAT_083cf660 + 0xb8) + 0x1b0) = 1;
      uVar12 = _cStack0000000000000038;
      goto LAB_06baf784;
    }
    *(undefined1 *)(unaff_x19 + 0x117) = 0;
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_079ca678(DAT_084499d0,0);
  }
  else {
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
    (*DAT_086ef168)();
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_07a12670();
  }
  bVar4 = cStack0000000000000038 != '\0';
  _cStack0000000000000038 = CONCAT44(uStack000000000000003c,(uint)bVar4) | 0x30000;
  uVar12 = (uint)bVar4;
LAB_06baf784:
  if ((uVar12 & 0xff) == 0) {
    FUN_06c2ad50(&stack0x00000050,&stack0x00000038);
  }
  return;
}


