/*
FUNCTION_NAME: Niantic.Platform.Analytics.Telemetry.V1.TelemetryKey$$set_Value
ENTRY_POINT: 04fd9f3c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Niantic_Platform_Analytics_Telemetry_V1_TelemetryKey__set_Value(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined1 auVar7 [16];
  undefined4 uStack000000000000001c;
  
  lVar1 = (**(code **)(param_1 + 0x248))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(*unaff_x20 + 0x248))();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar1 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar3 = FUN_04db8e94(lVar1,*(undefined8 *)PTR_DAT_065fe1d8,4,0);
    if ((uVar3 & 1) != 0) {
      lVar1 = FUN_04fbbce0();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar7 = FUN_04fa5130(lVar1,0,0);
      uVar3 = FUN_04e5bb90();
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar7;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_03361e68(unaff_x19 + 2);
      }
      else {
        FUN_04e5bbac();
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        plVar2 = (long *)(**(code **)(*unaff_x20 + 0x248))();
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar4 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
        uVar3 = thunk_FUN_04db8ae0(uVar4,*(undefined8 *)PTR_DAT_065fe1d0,0);
        if ((uVar3 & 1) == 0) goto LAB_04fda124;
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)PTR_DAT_065c84d8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04e5a1e4(unaff_x19 + 2,0);
      }
      return;
    }
  }
LAB_04fda124:
  lVar1 = thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar4 = FUN_04ef45ec(0);
  uStack000000000000001c = 1;
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065fe178);
  uVar5 = thunk_FUN_02cea4e8(uVar5,&stack0x0000001c);
  uVar6 = thunk_FUN_02c7737c(PTR_DAT_065fe1c0);
  FUN_05017038(uVar6,uVar4,uVar5,0);
  uVar4 = FUN_04fbd0d4();
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065fed28);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar4,uVar5);
}


