/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 07606d38
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonConvert__SerializeXmlNode(ulong param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_0928de30);
    FUN_04077588(PTR_DAT_092a6460);
    FUN_04077588(PTR_DAT_092d5ee0);
    *(undefined1 *)(unaff_x20 + 0xd85) = 1;
  }
  if ((char)unaff_x19[0x16] == '\0') {
    FUN_0407dc5c();
    *(undefined1 *)(unaff_x19 + 0x16) = 1;
  }
  plVar2 = (long *)thunk_FUN_040b4bf0();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0928de30 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0928de30)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar2);
    }
    plVar2[0x17] = 0;
    *(undefined1 *)(plVar2 + 2) = 0;
    thunk_FUN_040ec700(plVar2 + 0x17,0);
    uVar3 = (**(code **)(*unaff_x19 + 0x218))();
    if ((uVar3 & 1) != 0) {
      return plVar2;
    }
    lVar4 = (**(code **)(*unaff_x19 + 0x228))();
    if (lVar4 != 0) {
      plVar5 = (long *)FUN_075f51e4(lVar4,0);
      if ((plVar5 == (long *)0x0) || (*plVar5 == *(long *)PTR_DAT_092d5ee0)) {
        (**(code **)(*plVar2 + 0x238))(plVar2,plVar5,*(undefined8 *)(*plVar2 + 0x240));
        lVar4 = (**(code **)(*unaff_x19 + 0x248))();
        if (lVar4 == 0) goto LAB_07606ec0;
        plVar5 = (long *)FUN_075c187c(lVar4,0);
        if ((plVar5 == (long *)0x0) || (*plVar5 == *(long *)PTR_DAT_092a6460)) {
          (**(code **)(*plVar2 + 600))(plVar2,plVar5,*(undefined8 *)(*plVar2 + 0x260));
          return plVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar5);
    }
  }
LAB_07606ec0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


