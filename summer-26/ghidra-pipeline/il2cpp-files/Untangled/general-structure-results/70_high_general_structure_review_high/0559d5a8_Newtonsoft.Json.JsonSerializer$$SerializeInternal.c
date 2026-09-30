/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SerializeInternal
ENTRY_POINT: 0559d5a8
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_JsonSerializer__SerializeInternal
          (long param_1,int *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x144);
  if (uVar1 == 0xffffffff) {
    uVar1 = FUN_0559d424(param_1);
  }
  if ((uVar1 >> 3 & 1) == 0) {
LAB_0559d6b0:
    uVar4 = 1;
  }
  else {
    iVar6 = *param_2;
    if (iVar6 < 1000) {
      iVar6 = iVar6 + 5000;
      *param_2 = iVar6;
    }
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 == (long *)0x0) {
LAB_0559d6c8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
    iVar2 = (**(code **)(*plVar5 + 0x268))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x270));
    if (iVar2 <= iVar6) {
      plVar5 = *(long **)(param_1 + 0x78);
      if (plVar5 == (long *)0x0) goto LAB_0559d6c8;
      iVar6 = *param_2;
      uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
                    /* try { // try from 0559d658 to 0569d65b has its CatchHandler @ 0559d700 */
      iVar2 = (**(code **)(*plVar5 + 0x268))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x270));
      if (iVar6 <= iVar2) {
        if ((param_4 & 1) != 0) {
                    /* try { // try from 0559d670 to 0569d687 has its CatchHandler @ 0559d6fc */
          plVar5 = *(long **)(param_1 + 0x78);
          if (plVar5 == (long *)0x0) goto LAB_0559d6c8;
          uVar3 = (**(code **)(*plVar5 + 0x278))(plVar5,*param_2,*(undefined8 *)(*plVar5 + 0x280));
          if ((uVar3 & 1) == 0) {
            iVar6 = *param_3;
            if (iVar6 < 8) {
              if (iVar6 == 7) goto LAB_0559d664;
            }
            else {
              *param_3 = iVar6 + -1;
            }
          }
        }
        goto LAB_0559d6b0;
      }
    }
LAB_0559d664:
    uVar4 = 0;
  }
  return uVar4;
}


