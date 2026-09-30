/*
FUNCTION_NAME: FUN_07521e34
ENTRY_POINT: 07521e34
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x075220a0) */

void FUN_07521e34(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  
  (*(code *)*param_1)();
  FUN_07521738();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_07a4fbac(6,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8(lVar5);
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
                    /* try { // try from 07521e90 to 07621e93 has its CatchHandler @ 07521e9c */
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
                    /* try { // try from 07521e94 to 07621ebf has its CatchHandler @ 07521b24 */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07521e90 with catch @ 07521e9c
                        */
      if (*(long *)(piVar8 + -2) == lVar5) {
                    /* try { // try from 07521ec0 to 07621ec3 has its CatchHandler @ 07521ed0 */
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07521ec8;
      }
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07521df0 with catch @ 07521ea0
                        */
      uVar7 = uVar7 - 1;
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07521d18 with catch @ 07521ea4
                        */
      piVar8 = piVar8 + 4;
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07521d58 with catch @ 07521ea8
                        */
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_07521ec8:
  puVar1 = PTR_DAT_09f1f008;
                    /* catch() { ... } // from try @ 07521ec0 with catch @ 07521ed0 */
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_09f1f018;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07521f40;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_07521f40:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04481fb8(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07521fb8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,lVar5,0);
LAB_07521fb8:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    FUN_07523178();
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
          ;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);

    System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
    :
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}


