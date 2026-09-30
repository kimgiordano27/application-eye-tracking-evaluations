/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AddVectorsDelegate$$EndInvoke
ENTRY_POINT: 0771663c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AddVectorsDelegate__EndInvoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined4 uStack000000000000000c;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xb80));
  FUN_04447ba8(PTR_DAT_09f1e860);
  FUN_04447ba8(PTR_DAT_09f1e858);
  FUN_04447ba8(PTR_DAT_09f1e538);
  FUN_04447ba8(PTR_DAT_09f30b88);
  FUN_04447ba8(PTR_DAT_09f30b90);
  FUN_04447ba8(PTR_DAT_09f30b98);
  FUN_04447ba8(PTR_DAT_09f30ba0);
  FUN_04447ba8(PTR_DAT_09f30ba8);
  *(undefined1 *)(unaff_x20 + 0x12d) = 1;
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    plVar3 = (long *)(unaff_x19 + 0x30);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e858);
      FUN_05bad610(lVar2,*(undefined8 *)PTR_DAT_09f1e860);
      *plVar3 = lVar2;
      thunk_FUN_044bb4b4(plVar3,lVar2);
      lVar2 = *plVar3;
    }
    puVar1 = PTR_DAT_09f30b98;
    lVar6 = *(long *)PTR_DAT_09f30b98;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar6 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar5 = *(undefined8 *)PTR_DAT_09f30ba0;
    if (lVar7 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar6 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30b88);
      FUN_062fafbc(lVar7,uVar8,*(undefined8 *)PTR_DAT_09f30b90,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar3 = lVar7;
      thunk_FUN_044bb4b4(plVar3,lVar7);
    }
    if (lVar2 != 0) {
      uStack000000000000000c = FUN_05baf4c0(lVar2,lVar7,*(undefined8 *)PTR_DAT_09f30b80);
      uVar8 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x0000000c);
      uVar5 = FUN_078ab14c(uVar5,uVar8,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar5,0);
      return;
    }
  }
  else {
    lVar2 = FUN_095259a0();
    puVar1 = PTR_DAT_09f1e538;
    if (lVar2 != 0) {
      plVar3 = (long *)FUN_04d7a1ac(lVar2,*(undefined8 *)PTR_DAT_09f30b70);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar1);
      }
      uVar4 = FUN_0952c404(plVar3,0,0);
      if ((uVar4 & 1) != 0) {
        lVar2 = FUN_095259a0();
        if ((lVar2 == 0) || (lVar2 = FUN_0952a094(lVar2,0), lVar2 == 0)) goto LAB_0771696c;
        uVar5 = thunk_FUN_0953ac24(lVar2,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)puVar1);
        }
        uVar4 = FUN_09531730(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
          lVar2 = FUN_095259a0();
          if (((lVar2 == 0) || (lVar2 = FUN_0952a094(lVar2,0), lVar2 == 0)) ||
             (lVar2 = thunk_FUN_0953ac24(lVar2,0), lVar2 == 0)) goto LAB_0771696c;
          plVar3 = (long *)FUN_04c6bfdc(lVar2,*(undefined8 *)PTR_DAT_09f30b68);
        }
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar4 = FUN_09531730(plVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c33b0(*(undefined8 *)PTR_DAT_09f30ba8,0);
        return;
      }
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x077167d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        return;
      }
    }
  }
LAB_0771696c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


