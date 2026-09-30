/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 087eb978
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x087ebb30) */

long * UnityWebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  
  do {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_087eb9c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_087eb9c8:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(plVar4);
    }
    if (plVar4[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(long *)(plVar4[2] + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar7 = FUN_078b2e3c();
    if ((uVar7 & 1) != 0) goto LAB_087eba40;
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_087eb968;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_087eb968:
    uVar7 = (*(code *)*puVar3)();
  } while ((uVar7 & 1) != 0);
  plVar4 = (long *)0x0;
LAB_087eba40:
  puVar2 = PTR_DAT_09f1f008;
  plVar5 = (long *)thunk_FUN_04485110();
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_087ebaa8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_087ebaa8:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
  }
  return plVar4;
}


