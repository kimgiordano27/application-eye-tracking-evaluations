/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$set_Counter
ENTRY_POINT: 0728367c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_092c1ad0;
  if ((DAT_0988f78b & 1) == 0) {
    FUN_04077588(PTR_DAT_09286040);
    FUN_04077588(PTR_DAT_09285930);
    FUN_04077588(PTR_DAT_092c1ad8);
    FUN_04077588(PTR_DAT_092c1ae0);
    FUN_04077588(PTR_DAT_09285940);
    FUN_04077588(PTR_DAT_092c1ae8);
    FUN_04077588(PTR_DAT_092c1af0);
    FUN_04077588(PTR_DAT_092c1ad0);
    FUN_04077588(PTR_DAT_092c1768);
    DAT_0988f78b = 1;
  }
  lVar2 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_076bca34(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x10),param_2);
    uVar3 = FUN_074e5d94(param_3,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_09286040,1);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined2 *)(lVar4 + 0x20) = 10;
      if (param_3 != 0) {
        uVar5 = FUN_074e93f0(param_3,lVar4,0);
        puVar1 = PTR_DAT_092c1768;
        lVar4 = *(long *)PTR_DAT_092c1768;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar4);
          lVar4 = *(long *)puVar1;
        }
        puVar7 = *(undefined8 **)(lVar4 + 0xb8);
        lVar8 = puVar7[3];
        if (lVar8 == 0) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_040d65a8(lVar4);
            puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          }
          uVar9 = *puVar7;
          lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285940);
          FUN_0568af90(lVar8,uVar9,*(undefined8 *)PTR_DAT_092c1ae8,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
          *plVar6 = lVar8;
          thunk_FUN_040ec700(plVar6,lVar8);
        }
        uVar5 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                          (uVar5,lVar8,*(undefined8 *)PTR_DAT_09285930);
        uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1ae0);
        FUN_0568af90(uVar9,lVar2,*(undefined8 *)PTR_DAT_092c1af0,0);
        uVar5 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                          (uVar5,uVar9,*(undefined8 *)PTR_DAT_092c1ad8);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


