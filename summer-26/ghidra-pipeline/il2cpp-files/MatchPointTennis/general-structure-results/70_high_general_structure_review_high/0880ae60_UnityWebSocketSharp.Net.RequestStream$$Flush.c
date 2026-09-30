/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$Flush
ENTRY_POINT: 0880ae60
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


long UnityWebSocketSharp_Net_RequestStream__Flush(void)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x19;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x22;
  
  FUN_08827cc0();
  plVar3 = (long *)(**(code **)(*unaff_x19 + 0x198))();
  puVar2 = PTR_DAT_09f1e5b8;
  uVar8 = *(undefined8 *)PTR_DAT_09f8d638;
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)(PTR_DAT_09f1e5b8 + 0xe0));
  }
  uVar8 = FUN_07a4ce38(uVar8,0);
  if (plVar3 == (long *)0x0) goto LAB_0880b058;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1d8))(plVar3,uVar8,*(undefined8 *)(*plVar3 + 0x1e0));
  if (plVar3 == (long *)0x0) {
    lVar7 = *unaff_x22;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *unaff_x22;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    unaff_x19[0x13] = lVar7;
  }
  else {
    lVar7 = *plVar3;
    bVar1 = *(byte *)(*(long *)PTR_DAT_09f87bc8 + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f87bc8)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4();
    }
    lVar7 = (**(code **)(lVar7 + 0x1a8))(plVar3,*(undefined8 *)(lVar7 + 0x1b0));
    plVar3 = unaff_x19 + 0x13;
    *plVar3 = lVar7;
    thunk_FUN_044bb4b4(plVar3,lVar7);
    if (*plVar3 == 0) goto LAB_0880b044;
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x238))();
    if (plVar4 == (long *)0x0) goto LAB_0880b058;
    uVar5 = (**(code **)(*plVar4 + 0x5a8))(plVar4,*(undefined8 *)(*plVar4 + 0x5b0));
    if ((uVar5 & 1) == 0) goto LAB_0880b044;
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x238))();
    if (plVar4 == (long *)0x0) {
LAB_0880b058:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar8 = (**(code **)(*plVar4 + 0x918))(plVar4,*(undefined8 *)(*plVar4 + 0x920));
    if (*plVar3 == 0) goto LAB_0880b058;
    uVar6 = thunk_FUN_04457f54(*plVar3,0);
    lVar7 = *(long *)(puVar2 + 0xe0);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar7);
    }
    uVar5 = FUN_07a5629c(uVar8,uVar6,0);
    if ((uVar5 & 1) == 0) goto LAB_0880b044;
    uVar8 = (**(code **)(*unaff_x19 + 0x238))();
    lVar7 = *(long *)(puVar2 + 0x98);
    lVar9 = unaff_x19[0x13];
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar7);
    }
    lVar7 = FUN_07a725e8(uVar8,lVar9,0);
    *plVar3 = lVar7;
  }
  thunk_FUN_044bb4b4(unaff_x19 + 0x13,lVar7);
LAB_0880b044:
  return unaff_x19[0x13];
}


