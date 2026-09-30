/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 066e995c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long *plVar6;
  long unaff_x23;
  ulong unaff_x25;
  
  do {
    if (param_1 <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    plVar6 = *(long **)(unaff_x23 + unaff_x25 * 8 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_066e9a80;
    iVar2 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,iVar2,*(undefined8 *)(*plVar6 + 400));
                    /* try { // try from 066e99a0 to 067e99a3 has its CatchHandler @ 066e99fc */
        if (unaff_x20 == 0) goto LAB_066e9a80;
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_066e9a80;
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_03afed3c();
        }
        else {
          FUN_04de85b0();
        }
        iVar2 = iVar2 + 1;
        iVar3 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      } while (iVar2 < iVar3);
    }
    param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
    unaff_x25 = unaff_x25 + 1;
  } while ((int)unaff_x25 < (int)*(uint *)(unaff_x23 + 0x18));
  if (unaff_x20 != 0) {
    FUN_04de87c0();
    FUN_04dea100();
    return;
  }
LAB_066e9a80:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


