/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$add_FlushStarted
ENTRY_POINT: 08df4b38
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Analytics_Internal_Dispatcher__add_FlushStarted(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0xd4) = 0x3dcccccd;
                    /* try { // try from 08df4b44 to 08ef4b47 has its CatchHandler @ 08df4c98 */
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  puVar6 = PTR_DAT_09f2dbf0;
  iVar3 = *(int *)(unaff_x19 + 0xac);
                    /* try { // try from 08df4b54 to 08ef4b5f has its CatchHandler @ 08df4c9c */
  lVar7 = *(long *)PTR_DAT_09f2dbf0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 08df4b60 to 08ef4b6f has its CatchHandler @ 08df4c94 */
    thunk_FUN_044a54b4();
    lVar7 = *(long *)puVar6;
  }
  lVar8 = *(long *)(lVar7 + 0xb8);
                    /* try { // try from 08df4b74 to 08ef4b83 has its CatchHandler @ 08df4c88 */
  if (iVar3 == *(int *)(lVar8 + 8)) {
    iVar3 = *(int *)(unaff_x19 + 0xa8);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar7 = *(long *)puVar6;
      lVar8 = *(long *)(lVar7 + 0xb8);
    }
    if (iVar3 == *(int *)(lVar8 + 4)) {
      iVar3 = *(int *)(unaff_x19 + 0xa4);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar6;
      }
      if (iVar3 == **(int **)(lVar7 + 0xb8)) {
        iVar3 = *(int *)(unaff_x19 + 0xa0);
        *(int *)(unaff_x19 + 0xac) = iVar3;
        puVar6 = PTR_DAT_09fb2970;
        lVar7 = *(long *)PTR_DAT_09fb2970;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar6;
        }
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar4 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x18);
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


