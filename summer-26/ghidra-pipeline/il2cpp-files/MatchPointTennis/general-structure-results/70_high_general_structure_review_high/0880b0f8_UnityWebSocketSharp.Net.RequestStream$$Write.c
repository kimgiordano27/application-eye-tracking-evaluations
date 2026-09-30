/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$Write
ENTRY_POINT: 0880b0f8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long UnityWebSocketSharp_Net_RequestStream__Write(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int in_w8;
  long *unaff_x19;
  long lVar8;
  long lVar9;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_08827cc0();
  lVar8 = unaff_x19[0x1b];
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_07a5629c(lVar8,0,0);
  if ((uVar1 & 1) == 0) {
    lVar8 = unaff_x19[0x11];
    uVar2 = (**(code **)(*unaff_x19 + 0x1a8))();
    uVar2 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f5ca30,uVar2,0);
    plVar6 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f211e8,1);
    if (plVar6 == (long *)0x0) {
LAB_0880b40c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = unaff_x19[0x1b];
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_04485110(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar6[4] = lVar9;
    thunk_FUN_044bb4b4(plVar6 + 4,lVar9);
    lVar8 = FUN_08809e08(lVar8,uVar2,plVar6,unaff_x19[0x12],1);
    plVar6 = unaff_x19 + 0x16;
    *plVar6 = lVar8;
    thunk_FUN_044bb4b4(plVar6,lVar8);
    uVar1 = FUN_0796af60(*plVar6,0,0);
    if ((uVar1 & 1) == 0) goto LAB_0880b3f4;
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f20d20);
    uVar2 = FUN_04447c90(uVar2,1);
    uVar3 = (**(code **)(*unaff_x19 + 0x1a8))();
    FUN_03db7f40(uVar2);
    FUN_03dc0bd4(uVar2,uVar3);
    FUN_03db8400(uVar2,0,uVar3);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f8d640);
    uVar3 = System_TimeZoneInfo__TZif_UnixTimeToDateTime(uVar3,uVar2,0);
    thunk_FUN_044adef4(PTR_DAT_09f217f8);
    uVar2 = thunk_FUN_0448520c();
    FUN_0799d598(uVar2,uVar3,0);
  }
  else {
    plVar6 = unaff_x19 + 0x15;
    uVar1 = FUN_0796ac90(*plVar6,0,0);
    if ((uVar1 & 1) != 0) {
      lVar8 = unaff_x19[0x11];
      uVar2 = (**(code **)(*unaff_x19 + 0x1a8))();
      uVar3 = (**(code **)(*unaff_x19 + 0x238))();
      uVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f211e8,0);
      uVar5 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f87a48,0);
      if (lVar8 == 0) goto LAB_0880b40c;
      lVar8 = FUN_07a58c28(lVar8,uVar2,0x1034,0,uVar3,uVar4,uVar5,0);
      *plVar6 = lVar8;
      thunk_FUN_044bb4b4(plVar6,lVar8);
    }
    uVar1 = FUN_0796ac54(*plVar6,0,0);
    if ((uVar1 & 1) != 0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_0880b40c;
      lVar8 = (**(code **)(*plVar6 + 0x2b8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2c0));
      unaff_x19[0x16] = lVar8;
      thunk_FUN_044bb4b4();
    }
    uVar1 = FUN_0796af60(unaff_x19[0x16],0,0);
    if ((uVar1 & 1) == 0) {
LAB_0880b3f4:
      return unaff_x19[0x16];
    }
    uVar2 = thunk_FUN_044adef4(PTR_DAT_09f20d20);
    uVar2 = FUN_04447c90(uVar2,1);
    plVar6 = (long *)unaff_x19[0x11];
    FUN_03db7f40(plVar6);
    uVar3 = (**(code **)(*plVar6 + 0x2e8))(plVar6,*(undefined8 *)(*plVar6 + 0x2f0));
    uVar4 = (**(code **)(*unaff_x19 + 0x1a8))();
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f210e0);
    uVar3 = FUN_078b4f58(uVar3,uVar5,uVar4,0);
    FUN_03db7f40(uVar2);
    FUN_03dc0bd4(uVar2,uVar3);
    FUN_03db8400(uVar2,0,uVar3);
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f8d640);
    uVar3 = System_TimeZoneInfo__TZif_UnixTimeToDateTime(uVar3,uVar2,0);
    thunk_FUN_044adef4(PTR_DAT_09f20bb0);
    uVar2 = thunk_FUN_0448520c();
    FUN_07a3e070(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_044adef4(PTR_DAT_09f8d648);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar2,uVar3);
}


