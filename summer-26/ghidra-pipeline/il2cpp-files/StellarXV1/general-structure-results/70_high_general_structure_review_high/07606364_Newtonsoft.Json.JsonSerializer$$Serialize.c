/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 07606364
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long * Newtonsoft_Json_JsonSerializer__Serialize(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long lVar14;
  ushort uStack000000000000002c;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x19 + 0xd93) = 1;
  puVar5 = PTR_DAT_0928de30;
  uStack000000000000002c = 0;
  if (unaff_x20 == 0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar10 = thunk_FUN_040b4efc();
    uVar7 = thunk_FUN_040dedf8(PTR_DAT_0928bfe0);
    FUN_075ce0d0(uVar10,uVar7,0);
  }
  else {
    if (*(int *)(unaff_x20 + 0x10) == 0) {
      if (*(int *)(*(long *)PTR_DAT_0928de30 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      plVar8 = (long *)FUN_076060c0();
      return plVar8;
    }
    uVar7 = FUN_074eac78();
    plVar8 = (long *)thunk_FUN_040b4efc(*(undefined8 *)puVar5);
    FUN_076bca34(plVar8,0);
    *(undefined1 *)(plVar8 + 0x16) = 1;
    uVar9 = FUN_07607fcc(plVar8,uVar7);
    if ((uVar9 & 1) != 0) {
      uVar9 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
      if ((uVar9 & 1) != 0) {
        uVar7 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        lVar11 = *(long *)puVar5;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar11);
        }
        plVar8 = (long *)FUN_07608774(uVar7);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      }
      puVar12 = (undefined4 *)plVar8[0x12];
      lVar13 = plVar8[9];
      uVar3 = *(undefined4 *)((long)plVar8 + 0x1c);
      uVar1 = *puVar12;
      uVar2 = puVar12[3];
      uVar4 = puVar12[4];
      uVar6 = FUN_076071f0(plVar8);
      lVar11 = plVar8[4];
      lVar14 = plVar8[0xd];
      uStack000000000000002c = (ushort)((uint)uVar4 >> 8) & 0xff;
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0x88) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_075ca614(&stack0x0000002c,0);
      lVar11 = FUN_075fa804(lVar13,0,uVar3,uVar6,(int)lVar11,lVar14,uVar1,uVar2);
      plVar8[0x18] = lVar11;
      thunk_FUN_040ec700();
      return plVar8;
    }
    thunk_FUN_040dedf8(PTR_DAT_0928de30);
    FUN_03b08ec8();
    uVar10 = FUN_0760806c();
  }
  uVar7 = thunk_FUN_040dedf8(PTR_DAT_092d7d00);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar10,uVar7);
}


