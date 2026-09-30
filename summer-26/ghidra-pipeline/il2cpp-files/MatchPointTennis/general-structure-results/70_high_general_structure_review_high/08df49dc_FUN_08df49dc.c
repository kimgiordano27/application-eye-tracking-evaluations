/*
FUNCTION_NAME: FUN_08df49dc
ENTRY_POINT: 08df49dc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_08df49dc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  if ((DAT_0a53243b & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fb2970);
    FUN_04447ba8(PTR_DAT_09f2dbf0);
    DAT_0a53243b = 1;
  }
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 < 3) {
    *(undefined4 *)(param_1 + 0x20) = 3;
    *(int *)(param_1 + 0x24) = iVar9;
    *(bool *)(param_1 + 0xe0) = *(int *)(param_1 + 0x120) == 2;
LAB_08df4a84:
    uVar6 = DAT_01c74c08;
    *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x128);
                    /* try { // try from 08df4aa4 to 08ef4aab has its CatchHandler @ 08df4ca4 */
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 300);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
LAB_08df4ab0:
    if (*(int *)(param_1 + 0x28) == 0) {
      plVar10 = *(long **)(param_1 + 0x38);
                    /* try { // try from 08df4ac4 to 08ef4acb has its CatchHandler @ 08df4c7c */
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08df4c54 to 08ef4c57 has its CatchHandler @ 08df4cb4 */
        FUN_04447e44();
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
                    /* try { // try from 08df4c5c to 08ef4c5f has its CatchHandler @ 08df4cb4 */
        uVar6 = thunk_FUN_04491d98();
                    /* try { // try from 08df4c60 to 08ef4c63 has its CatchHandler @ 08df4ca8 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08df4c64 to 08ef4c6b has its CatchHandler @ 08df4718 */
        FUN_04447d10(uVar6,0);
      }
                    /* try { // try from 08df4ae4 to 08ef4aeb has its CatchHandler @ 08df4c74 */
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08df4c58 to 08ef4c5b has its CatchHandler @ 08df4cac */
        FUN_04447e4c();
      }
      plVar10[4] = lVar5;
      thunk_FUN_044bb4b4(plVar10 + 4,lVar5);
      uVar7 = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      uVar7 = 4;
    }
                    /* try { // try from 08df4b04 to 08ef4b1b has its CatchHandler @ 08df4c80 */
    *(undefined4 *)(param_1 + 0x20) = 5;
    *(undefined4 *)(param_1 + 0x24) = uVar7;
LAB_08df4b08:
    *(undefined4 *)(param_1 + 0x20) = 6;
    iVar9 = 4;
    if (*(int *)(param_1 + 0x154) != 2) {
      iVar9 = *(int *)(param_1 + 0x154) + 1;
    }
    *(int *)(param_1 + 0xb8) = iVar9;
Unity_Services_Analytics_Internal_Dispatcher__get_FlushInProgress:
    *(undefined8 *)(param_1 + 0x20) = DAT_01c74e30;
LAB_08df4b30:
    uVar6 = DAT_01c751e8;
    *(undefined4 *)(param_1 + 0xd4) = 0x3dcccccd;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
LAB_08df4b48:
    puVar4 = PTR_DAT_09f2dbf0;
    iVar9 = *(int *)(param_1 + 0xac);
    lVar5 = *(long *)PTR_DAT_09f2dbf0;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar5 = *(long *)puVar4;
    }
    lVar8 = *(long *)(lVar5 + 0xb8);
    if (iVar9 == *(int *)(lVar8 + 8)) {
      iVar9 = *(int *)(param_1 + 0xa8);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar5 = *(long *)puVar4;
        lVar8 = *(long *)(lVar5 + 0xb8);
      }
      if (iVar9 == *(int *)(lVar8 + 4)) {
        iVar9 = *(int *)(param_1 + 0xa4);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar5 = *(long *)puVar4;
        }
        if (iVar9 == **(int **)(lVar5 + 0xb8)) {
          iVar9 = *(int *)(param_1 + 0xa0);
          *(int *)(param_1 + 0xac) = iVar9;
          puVar4 = PTR_DAT_09fb2970;
          lVar5 = *(long *)PTR_DAT_09fb2970;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar5 = *(long *)puVar4;
          }
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
          }
          iVar3 = *(int *)(*(long *)(lVar5 + 0xb8) + 0x18);
          iVar1 = iVar9 >> 1;
          if (iVar9 >> 1 <= iVar3) {
            iVar1 = iVar3;
          }
          iVar9 = iVar1;
          if (iVar1 < 0) {
            iVar9 = iVar1 + 1;
          }
          iVar2 = iVar9 >> 1;
          if (iVar9 >> 1 <= iVar3) {
            iVar2 = iVar3;
          }
          *(int *)(param_1 + 0xa4) = iVar2;
          *(int *)(param_1 + 0xa8) = iVar1;
        }
      }
    }
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 9;
    *(undefined4 *)(param_1 + 0x24) = uVar7;
LAB_08df4c24:
    *(undefined8 *)(param_1 + 0x20) = DAT_01c73ee0;
  }
  else {
    if (iVar9 == 3) goto LAB_08df4a84;
    if (iVar9 < 5) goto LAB_08df4ab0;
    if (iVar9 == 6) goto Unity_Services_Analytics_Internal_Dispatcher__get_FlushInProgress;
    if (iVar9 == 5) goto LAB_08df4b08;
    if (iVar9 < 8) goto LAB_08df4b30;
    if (iVar9 == 9) goto LAB_08df4c24;
    if (iVar9 == 8) goto LAB_08df4b48;
    if (10 < iVar9) {
      if (iVar9 != 0xb) {
        return;
      }
      goto LAB_08df4c3c;
    }
  }
  *(undefined8 *)(param_1 + 0x20) = DAT_01c73df8;
LAB_08df4c3c:
  *(undefined8 *)(param_1 + 0x20) = DAT_01c740b8;
  return;
}


