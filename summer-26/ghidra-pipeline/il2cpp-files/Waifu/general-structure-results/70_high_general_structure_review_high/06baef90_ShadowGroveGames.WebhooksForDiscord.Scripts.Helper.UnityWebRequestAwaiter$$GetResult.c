/*
FUNCTION_NAME: ShadowGroveGames.WebhooksForDiscord.Scripts.Helper.UnityWebRequestAwaiter$$GetResult
ENTRY_POINT: 06baef90
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void ShadowGroveGames_WebhooksForDiscord_Scripts_Helper_UnityWebRequestAwaiter__GetResult
               (ulong *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong in_x9;
  ulong in_x10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar12;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined4 uVar13;
  char cStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  long *in_stack_00000048;
  undefined4 in_stack_00000050;
  
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = in_x10 | in_x9;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
    in_x10 = *param_1;
  }
  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_079c9e54(DAT_08442cd8);
  if (*(int *)(*(long *)(unaff_x26 + 0x660) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_06bae294();
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(unaff_x26 + 0x660);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
      lVar7 = *(long *)(unaff_x26 + 0x660);
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x1a8);
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870(DAT_083ca458);
    }
    FUN_079ca678(uVar11,0);
  }
  if (*(int *)(*(long *)(unaff_x22 + 0x9c0) + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (DAT_086ed3c8 == (code *)0x0) {
    DAT_086ed3c8 = (code *)FUN_033d1b68("UnityEngine.Application::get_platform()");
  }
  uVar11 = (*DAT_086ed3c8)();
  if (((uint)uVar11 < 0xc) && ((1 << (ulong)((uint)uVar11 & 0x1f) & 0x887U) != 0)) {
    *(undefined1 *)(unaff_x19 + 0x117) = 1;
    FUN_06baaa34(uVar11,0);
    *(undefined1 *)(unaff_x19 + 0x65) = 0;
    if (*(int *)(*(long *)(unaff_x26 + 0x660) + 0xe0) == 0) {
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
               *(undefined4 *)(*(long *)(DAT_083d8b80 + 0xb8) + 4),in_stack_00000040,
               0xffffffffffffffff,*(undefined8 *)(*in_stack_00000048 + 400));
    plVar8 = (long *)FUN_03398188(*(undefined8 *)(unaff_x23 + 0xa10),2);
    if (DAT_086e454f == '\0') {
      FUN_0335b6c8(&DAT_083cf660,1);
      DataMemoryBarrier(2,3);
      DAT_086e454f = '\x01';
    }
    lVar7 = *(long *)(unaff_x26 + 0x660);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
      lVar7 = *(long *)(unaff_x26 + 0x660);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    in_stack_00000050 = FUN_06b650a0(lVar7,0);
    lVar7 = FUN_03398650(DAT_083d1220,&stack0x00000050);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if ((lVar7 != 0) && (lVar9 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
      uVar11 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar11,0);
    }
    if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar10 = plVar8 + 4;
    *plVar10 = lVar7;
    if (*(int *)(unaff_x24 + 0xcd0) != 0) {
      puVar1 = (ulong *)(unaff_x27 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (DAT_086e454f == '\0') {
      FUN_0335b6c8(&DAT_083cf660,1);
      DataMemoryBarrier(2,3);
      DAT_086e454f = '\x01';
    }
    lVar7 = *(long *)(unaff_x26 + 0x660);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
      lVar7 = *(long *)(unaff_x26 + 0x660);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar11 = FUN_06b6504c(lVar7,0);
    if (*(int *)(DAT_083d84a8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = DAT_08438268;
    uVar4 = DAT_084303c8;
    lVar7 = *(long *)(*(long *)(DAT_083d84a8 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(DAT_083d84a8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar12 = **(undefined8 **)(DAT_083d84a8 + 0xb8);
      lVar7 = FUN_03398a84(DAT_083c1b98);
      FUN_043cc540(lVar7,uVar12,DAT_08427cf0,0);
      plVar10 = (long *)(*(long *)(DAT_083d84a8 + 0xb8) + 8);
      *plVar10 = lVar7;
      if (DAT_08908cd0 != 0) {
        puVar1 = (ulong *)(unaff_x27 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    uVar11 = FUN_03f47bec(uVar11,lVar7,DAT_0840a238);
    uVar11 = FUN_03f582c0(uVar11,DAT_0840a900);
    lVar7 = FUN_0666f600(uVar4,uVar11,0);
    if ((lVar7 != 0) && (lVar9 = FUN_0339898c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
      uVar11 = FUN_0334ef60(DAT_086f5c88,"System","ArrayTypeMismatchException",0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar11,0);
    }
    if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    plVar10 = plVar8 + 5;
    *plVar10 = lVar7;
    if (DAT_08908cd0 != 0) {
      puVar1 = (ulong *)(unaff_x27 + ((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_079c9e54(uVar5,plVar8,0);
    if (*(char *)(unaff_x19 + 0x10b) != '\0') {
      if (*(int *)(*(long *)(unaff_x26 + 0x660) + 0xe0) == 0) {
        FUN_033b9870();
      }
      if (DAT_086e454f == '\0') {
        FUN_0335b6c8(&DAT_083cf660,1);
        DataMemoryBarrier(2,3);
        DAT_086e454f = '\x01';
      }
      lVar7 = *(long *)(unaff_x26 + 0x660);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        FUN_033b9870();
        lVar7 = *(long *)(unaff_x26 + 0x660);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_06b647ac(lVar7,0);
    }
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086ed758 == (code *)0x0) {
      DAT_086ed758 = (code *)FUN_033d1b68("UnityEngine.Debug::get_isDebugBuild()");
    }
    uVar6 = (*DAT_086ed758)();
    if ((uVar6 & 1) != 0) {
      uVar11 = FUN_03c89df4(unaff_x19,DAT_08405d98);
      if (*(int *)(*(long *)(unaff_x28 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar6 = FUN_07a119fc(uVar11,0,0);
      if ((uVar6 & 1) != 0) {
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        lVar7 = (*DAT_086ef190)(unaff_x19);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        FUN_03fa1ab4(lVar7,DAT_0840c9e0);
      }
      lVar7 = FUN_03c89df4(unaff_x19,DAT_08405d98);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(unaff_x19 + 0x60);
      if (DAT_086ef160 == (code *)0x0) {
        DAT_086ef160 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_enabled()");
      }
      uVar6 = (*DAT_086ef160)(lVar7);
      if ((uVar6 & 1) == 0) {
        if (DAT_086ef168 == (code *)0x0) {
          DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        }
        (*DAT_086ef168)(lVar7,1);
      }
      if (*(int *)(*(long *)(unaff_x25 + 0x6c8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_06bc2de0(1,0);
    }
    if (*(int *)(*(long *)(unaff_x26 + 0x660) + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (DAT_086e48d6 == '\0') {
      FUN_0335b6c8(&DAT_083cf660,1);
      DataMemoryBarrier(2,3);
      DAT_086e48d6 = '\x01';
    }
    lVar7 = *(long *)(unaff_x26 + 0x660);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
      lVar7 = *(long *)(unaff_x26 + 0x660);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_06baac84(unaff_x19,*(undefined4 *)(lVar7 + 0x18));
    uVar13 = *(undefined4 *)(unaff_x19 + 0x2c);
    if (*(int *)(*(long *)(unaff_x25 + 0x6c8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_06bd1dd4(uVar13,0);
    if (*(char *)(unaff_x19 + 0xf8) != '\0') {
      if (*(int *)(*(long *)(unaff_x25 + 0x6c8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar6 = FUN_06bbb4d4(1,0);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_079c9c0c(DAT_0843acb0,0);
      }
    }
    if (*(char *)(unaff_x19 + 0xf9) != '\0') {
      if (*(int *)(*(long *)(unaff_x26 + 0x660) + 0xe0) == 0) {
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
                 in_stack_00000040,0xffffffffffffffff,*(undefined8 *)(*in_stack_00000048 + 400));
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x6c8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_06bc20cc(0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_079ca678(DAT_0843fc00,0);
      *(undefined1 *)(unaff_x19 + 0x102) = 0;
    }
    else {
      cVar2 = *(char *)(unaff_x19 + 0x102);
      if (*(int *)(*(long *)(unaff_x25 + 0x6c8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_06bc2294(cVar2 != '\0',0);
    }
    if (*(char *)(unaff_x19 + 0x34) != '\0') {
      uVar13 = *(undefined4 *)(unaff_x19 + 0x3c);
      if (DAT_086f40c0 == (code *)0x0) {
        DAT_086f40c0 = (code *)FUN_033d1b68(
                                           "UnityEngine.XR.XRSettings::set_eyeTextureResolutionScale(System.Single)"
                                           );
      }
      (*DAT_086f40c0)(uVar13);
    }
    FUN_06bb08f8(unaff_x19);
    lVar7 = *(long *)(unaff_x26 + 0x660);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
      lVar7 = *(long *)(unaff_x26 + 0x660);
    }
    *(undefined1 *)(*(long *)(lVar7 + 0xb8) + 0x1b0) = 1;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x117) = 0;
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_079ca678(DAT_084499d0,0);
    _cStack0000000000000038 = cStack0000000000000038 != '\0' | 0x30000;
  }
  if ((_cStack0000000000000038 & 0xff) == 0) {
    FUN_06c2ad50(&stack0x00000050,&stack0x00000038);
  }
  return;
}


