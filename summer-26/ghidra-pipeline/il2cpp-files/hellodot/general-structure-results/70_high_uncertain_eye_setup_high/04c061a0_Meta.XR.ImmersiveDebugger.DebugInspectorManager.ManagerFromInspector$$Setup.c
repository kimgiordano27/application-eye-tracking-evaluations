/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.ManagerFromInspector$$Setup
ENTRY_POINT: 04c061a0
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c06594) */
/* WARNING: Removing unreachable block (ram,0x04c06330) */
/* WARNING: Removing unreachable block (ram,0x04c065ac) */
/* WARNING: Removing unreachable block (ram,0x04c06338) */
/* WARNING: Removing unreachable block (ram,0x04c06348) */
/* WARNING: Removing unreachable block (ram,0x04c06350) */
/* WARNING: Removing unreachable block (ram,0x04c06364) */
/* WARNING: Removing unreachable block (ram,0x04c0636c) */
/* WARNING: Removing unreachable block (ram,0x04c0638c) */
/* WARNING: Removing unreachable block (ram,0x04c06394) */
/* WARNING: Removing unreachable block (ram,0x04c065c8) */
/* WARNING: Removing unreachable block (ram,0x04c0639c) */
/* WARNING: Removing unreachable block (ram,0x04c065cc) */
/* WARNING: Removing unreachable block (ram,0x04c063b8) */

undefined8 Meta_XR_ImmersiveDebugger_DebugInspectorManager_ManagerFromInspector__Setup(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 unaff_x19;
  long *plVar11;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  char cStack000000000000000c;
  
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c060cc with catch @ 04c061a0
                        */
  AkMIDIEventCallbackInfo__get_byProgramNum();
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c06018 with catch @ 04c061a4
                        */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4fe8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e13b0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4ff0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4ff8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4f78);
  *(undefined1 *)(unaff_x23 + 0x564) = 1;
  lVar4 = thunk_FUN_02cea894(*unaff_x22);
  FUN_04f7383c(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = unaff_x20;
    *(undefined8 *)(lVar4 + 0x18) = unaff_x19;
    plVar11 = *(long **)(unaff_x20 + 0x18);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e1ce8) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_04c06274;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065e1ce8,1);
LAB_04c06274:
      uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
      cStack000000000000000c = '\0';
      FUN_04f951b8(uVar6,&stack0x0000000c,0);
      if (*(long *)(unaff_x20 + 0xa8) == 0) {
        uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4fa8);
        FUN_04678954(uVar7,*(undefined8 *)PTR_DAT_065e4f98);
        *(undefined8 *)(unaff_x20 + 0xa8) = uVar7;
        uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4fe8);
        FUN_037fd770(uVar7,*(undefined8 *)PTR_DAT_065e4fd8);
        *(undefined8 *)(unaff_x20 + 0xa0) = uVar7;
        if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
      }
      uVar9 = FUN_0467ad20();
      puVar2 = PTR_DAT_065e13b0;
      puVar1 = PTR_DAT_065c9598;
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar8 = *(long *)PTR_DAT_065e13b0;
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar8 = *(long *)puVar2;
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)puVar1);
      }
      uVar7 = FUN_04f1385c(uVar7,uVar12,0);
      puVar1 = PTR_DAT_065cc440;
      *(undefined8 *)(lVar4 + 0x28) = uVar7;
      uVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
      FUN_04a48c38(uVar7,lVar4,*(undefined8 *)PTR_DAT_065e4ff8,0);
      if (*(int *)(*(long *)PTR_DAT_065c89a0 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_03533344(uVar7,*(undefined8 *)PTR_DAT_065e4ff0);
      lVar8 = *(long *)(unaff_x20 + 0xa0);
      uVar12 = *(undefined8 *)(lVar4 + 0x28);
      lVar4 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e4fb0);
      FUN_04f7383c(lVar4,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar7;
      *(undefined8 *)(lVar4 + 0x18) = unaff_x21;
      *(undefined8 *)(lVar4 + 0x20) = uVar12;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar13 = FUN_037fd900(lVar8,lVar4,*(undefined8 *)PTR_DAT_065e4fc0);
      if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(0,auVar13._8_8_,auVar13._0_8_);
      }
      FUN_0467928c();
      if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      iVar3 = FUN_04678fbc(*(long *)(unaff_x20 + 0xa8),*(undefined8 *)PTR_DAT_065e4fa0);
      if (100 < iVar3) {
        if (*(long *)(unaff_x20 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar4 = FUN_037fd7b0(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)PTR_DAT_065e4fe0);
        if (*(long *)(unaff_x20 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_037fdfac(*(long *)(unaff_x20 + 0xa0),*(undefined8 *)PTR_DAT_065e4fc8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(long *)(lVar4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        System_Array_EmptyInternalEnumerator<OVRTask_CallbackWithState<OVRAnchor_Tracker_AsyncLock,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRAnchor_Tracker_AsyncLock>>>___ctor
                  (*(long *)(unaff_x20 + 0xa8),*(undefined8 *)(*(long *)(lVar4 + 0x28) + 0x18),
                   *(undefined8 *)PTR_DAT_065e4f88);
      }
      if (cStack000000000000000c != '\0') {
        thunk_FUN_02c6fbb4(uVar6,0);
      }
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


