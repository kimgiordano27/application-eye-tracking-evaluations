/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 0744e7e0
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  uint unaff_w24;
  long *plVar5;
  
  do {
                    /* catch() { ... } // from try @ 0744e680 with catch @ 0744e7e0 */
                    /* catch() { ... } // from try @ 0744e798 with catch @ 0744e7e4
                       catch() { ... } // from try @ 0744e7ac with catch @ 0744e7e4 */
    plVar5 = (long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
    plVar1 = (long *)*plVar5;
    if (plVar1 == (long *)0x0) {
LAB_0744e91c:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    plVar1 = (long *)(**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
    if (plVar1 == (long *)0x0) goto LAB_0744e91c;
    uVar2 = (**(code **)(*plVar1 + 0x3f8))(plVar1,*(undefined8 *)(*plVar1 + 0x400));
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)(*plVar1 + 0x408))(plVar1,*(undefined8 *)(*plVar1 + 0x410));
      if ((uVar2 & 1) == 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 0x488))(plVar1,*(undefined8 *)(*plVar1 + 0x490));
        if (plVar1 == (long *)0x0) goto LAB_0744e91c;
      }
    }
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    FUN_07331848();
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
    plVar1 = (long *)*plVar5;
    if (plVar1 == (long *)0x0) goto LAB_0744e91c;
    lVar3 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
    if (lVar3 != 0) {
      FUN_07331848();
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_0744e91c;
      (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
      FUN_07331848();
    }
    uVar4 = *(uint *)(unaff_x20 + 0x18);
    unaff_w24 = unaff_w24 + 1;
    if ((int)uVar4 <= (int)unaff_w24) {
      FUN_07331848();
      return;
    }
    if (unaff_w24 != 0) {
      FUN_07331848();
      uVar4 = *(uint *)(unaff_x20 + 0x18);
    }
  } while (unaff_w24 < uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


