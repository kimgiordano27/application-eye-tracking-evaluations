/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$get_FlushInProgress
ENTRY_POINT: 08df4b24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__get_FlushInProgress(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  
                    /* try { // try from 08df4b28 to 08ef4b2f has its CatchHandler @ 08df4c78 */
  *(undefined8 *)(unaff_x19 + 0x20) = DAT_01c74e30;
  uVar6 = DAT_01c751e8;
  *(undefined4 *)(unaff_x19 + 0xd4) = 0x3dcccccd;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar6;
  puVar7 = PTR_DAT_09f2dbf0;
  iVar3 = *(int *)(unaff_x19 + 0xac);
  lVar8 = *(long *)PTR_DAT_09f2dbf0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar8 = *(long *)puVar7;
  }
  lVar9 = *(long *)(lVar8 + 0xb8);
  if (iVar3 == *(int *)(lVar9 + 8)) {
    iVar3 = *(int *)(unaff_x19 + 0xa8);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar8 = *(long *)puVar7;
      lVar9 = *(long *)(lVar8 + 0xb8);
    }
    if (iVar3 == *(int *)(lVar9 + 4)) {
      iVar3 = *(int *)(unaff_x19 + 0xa4);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar8 = *(long *)puVar7;
      }
      if (iVar3 == **(int **)(lVar8 + 0xb8)) {
        iVar3 = *(int *)(unaff_x19 + 0xa0);
        *(int *)(unaff_x19 + 0xac) = iVar3;
        puVar7 = PTR_DAT_09fb2970;
        lVar8 = *(long *)PTR_DAT_09fb2970;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar8 = *(long *)puVar7;
        }
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar4 = *(int *)(*(long *)(lVar8 + 0xb8) + 0x18);
        iVar1 = iVar3 >> 1;
        if (iVar3 >> 1 <= iVar4) {
          iVar1 = iVar4;
        }
        iVar3 = iVar1;
        if (iVar1 < 0) {
          iVar3 = iVar1 + 1;
        }
        iVar2 = iVar3 >> 1;
        if (iVar3 >> 1 <= iVar4) {
          iVar2 = iVar4;
        }
        *(int *)(unaff_x19 + 0xa4) = iVar2;
        *(int *)(unaff_x19 + 0xa8) = iVar1;
      }
    }
  }
  uVar5 = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x19 + 0x20) = 9;
  *(undefined4 *)(unaff_x19 + 0x24) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x20) = DAT_01c73ee0;
  *(undefined8 *)(unaff_x19 + 0x20) = DAT_01c73df8;
  *(undefined8 *)(unaff_x19 + 0x20) = DAT_01c740b8;
  return;
}


