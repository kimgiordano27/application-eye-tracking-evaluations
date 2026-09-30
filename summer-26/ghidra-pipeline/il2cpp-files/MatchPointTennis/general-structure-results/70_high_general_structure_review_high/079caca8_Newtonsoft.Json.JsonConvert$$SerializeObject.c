/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 079caca8
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


long * Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  
  *(undefined1 *)(unaff_x19 + 0x16) = 1;
  plVar2 = (long *)thunk_FUN_04484ef8();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09f21428 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f21428)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar2);
    }
    plVar2[0x17] = 0;
    *(undefined1 *)(plVar2 + 2) = 0;
    thunk_FUN_044bb4b4(plVar2 + 0x17,0);
    uVar3 = (**(code **)(*unaff_x19 + 0x208))();
    if ((uVar3 & 1) != 0) {
      return plVar2;
    }
    lVar4 = (**(code **)(*unaff_x19 + 0x218))();
    if (lVar4 != 0) {
      plVar5 = (long *)FUN_079b8f48(lVar4,0);
      if ((plVar5 == (long *)0x0) || (*plVar5 == *(long *)PTR_DAT_09f40388)) {
        (**(code **)(*plVar2 + 0x228))(plVar2,plVar5,*(undefined8 *)(*plVar2 + 0x230));
        lVar4 = (**(code **)(*unaff_x19 + 0x238))();
        if (lVar4 == 0) goto LAB_079cadec;
        plVar5 = (long *)FUN_07985144(lVar4,0);
        if ((plVar5 == (long *)0x0) || (*plVar5 == *(long *)PTR_DAT_09f402d8)) {
          (**(code **)(*plVar2 + 0x248))(plVar2,plVar5,*(undefined8 *)(*plVar2 + 0x250));
          return plVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar5);
    }
  }
LAB_079cadec:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


