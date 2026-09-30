/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$Seek
ENTRY_POINT: 0880b088
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long UnityWebSocketSharp_Net_RequestStream__Seek(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar9;
  
  FUN_04447ba8(PTR_DAT_09f87a48);
  FUN_04447ba8(PTR_DAT_09f8d620);
  FUN_04447ba8(PTR_DAT_09f211e8);
  FUN_04447ba8(PTR_DAT_09f5ca30);
  *(undefined1 *)(unaff_x20 + 0x4f6) = 1;
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar1 = *unaff_x21;
  }
  uVar2 = FUN_08827cb0((long)unaff_x19 + 0x84,*(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x24),0);
  if ((uVar2 & 1) == 0) {
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar1 = *unaff_x21;
    }
    FUN_08827cc0((long)unaff_x19 + 0x84,*(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x24),1,0);
    lVar1 = unaff_x19[0x1b];
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_07a5629c(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = unaff_x19[0x11];
      uVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
      uVar3 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f5ca30,uVar3,0);
      plVar7 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f211e8,1);
      if (plVar7 == (long *)0x0) {
LAB_0880b40c:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar9 = unaff_x19[0x1b];
      if ((lVar9 != 0) &&
         (lVar8 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar3 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar3,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar7[4] = lVar9;
      thunk_FUN_044bb4b4(plVar7 + 4,lVar9);
      lVar1 = FUN_08809e08(lVar1,uVar3,plVar7,unaff_x19[0x12],1);
      plVar7 = unaff_x19 + 0x16;
      *plVar7 = lVar1;
      thunk_FUN_044bb4b4(plVar7,lVar1);
      uVar2 = FUN_0796af60(*plVar7,0,0);
      if ((uVar2 & 1) == 0) goto LAB_0880b3f4;
      uVar3 = thunk_FUN_044adef4(PTR_DAT_09f20d20);
      uVar3 = FUN_04447c90(uVar3,1);
      uVar4 = (**(code **)(*unaff_x19 + 0x1a8))();
      FUN_03db7f40(uVar3);
      FUN_03dc0bd4(uVar3,uVar4);
      FUN_03db8400(uVar3,0,uVar4);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f8d640);
      uVar4 = System_TimeZoneInfo__TZif_UnixTimeToDateTime(uVar4,uVar3,0);
      thunk_FUN_044adef4(PTR_DAT_09f217f8);
      uVar3 = thunk_FUN_0448520c();
      FUN_0799d598(uVar3,uVar4,0);
    }
    else {
      plVar7 = unaff_x19 + 0x15;
      uVar2 = FUN_0796ac90(*plVar7,0,0);
      if ((uVar2 & 1) != 0) {
        lVar1 = unaff_x19[0x11];
        uVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
        uVar4 = (**(code **)(*unaff_x19 + 0x238))();
        uVar5 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f211e8,0);
        uVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f87a48,0);
        if (lVar1 == 0) goto LAB_0880b40c;
        lVar1 = FUN_07a58c28(lVar1,uVar3,0x1034,0,uVar4,uVar5,uVar6,0);
        *plVar7 = lVar1;
        thunk_FUN_044bb4b4(plVar7,lVar1);
      }
      uVar2 = FUN_0796ac54(*plVar7,0,0);
      if ((uVar2 & 1) != 0) {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_0880b40c;
        lVar1 = (**(code **)(*plVar7 + 0x2b8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x2c0));
        unaff_x19[0x16] = lVar1;
        thunk_FUN_044bb4b4();
      }
      uVar2 = FUN_0796af60(unaff_x19[0x16],0,0);
      if ((uVar2 & 1) == 0) goto LAB_0880b3f4;
      uVar3 = thunk_FUN_044adef4(PTR_DAT_09f20d20);
      uVar3 = FUN_04447c90(uVar3,1);
      plVar7 = (long *)unaff_x19[0x11];
      FUN_03db7f40(plVar7);
      uVar4 = (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0));
      uVar5 = (**(code **)(*unaff_x19 + 0x1a8))();
      uVar6 = thunk_FUN_044adef4(PTR_DAT_09f210e0);
      uVar4 = FUN_078b4f58(uVar4,uVar6,uVar5,0);
      FUN_03db7f40(uVar3);
      FUN_03dc0bd4(uVar3,uVar4);
      FUN_03db8400(uVar3,0,uVar4);
      uVar4 = thunk_FUN_044adef4(PTR_DAT_09f8d640);
      uVar4 = System_TimeZoneInfo__TZif_UnixTimeToDateTime(uVar4,uVar3,0);
      thunk_FUN_044adef4(PTR_DAT_09f20bb0);
      uVar3 = thunk_FUN_0448520c();
      FUN_07a3e070(uVar3,uVar4,0);
    }
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f8d648);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar3,uVar4);
  }
LAB_0880b3f4:
  return unaff_x19[0x16];
}


