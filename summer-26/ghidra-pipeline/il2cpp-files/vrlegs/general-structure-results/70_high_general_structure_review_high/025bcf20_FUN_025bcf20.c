/*
FUNCTION_NAME: FUN_025bcf20
ENTRY_POINT: 025bcf20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4
*/


ulong FUN_025bcf20(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_04123c5d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cef968);
    FUN_01ab69ac(PTR_DAT_03cc41f8);
    DAT_04123c5d = 1;
  }
  puVar1 = PTR_DAT_03cef968;
  if (param_1 == param_2) {
    if (5 < param_3) {
      Oculus_Platform_CAPI__ovr_Message_GetUserCapabilityArray(0x31,0x2f,0);
    }
    return 1;
  }
  if (param_2 == 0) {
    if (5 < param_3) {
      Oculus_Platform_CAPI__ovr_Message_GetUserCapabilityArray(0x31,0x2f,0);
    }
    return 0;
  }
  switch(param_3) {
  case 0:
    if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    plVar4 = (long *)FUN_0271c4e0(0);
    if (plVar4 == (long *)0x0) goto LAB_025bd160;
    plVar4 = (long *)(**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
    break;
  case 1:
    if (*(int *)(*(long *)PTR_DAT_03cc41f8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    plVar4 = (long *)FUN_0271c4e0(0);
    if (plVar4 == (long *)0x0) goto LAB_025bd160;
    plVar4 = (long *)(**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
    goto joined_r0x025bd0a8;
  case 2:
    lVar3 = *(long *)PTR_DAT_03cef968;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    plVar4 = (long *)**(long **)(lVar3 + 0xb8);
    break;
  case 3:
    lVar3 = *(long *)PTR_DAT_03cef968;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *(long *)puVar1;
    }
    plVar4 = (long *)**(long **)(lVar3 + 0xb8);
joined_r0x025bd0a8:
    if (plVar4 == (long *)0x0) goto LAB_025bd160;
    lVar3 = *plVar4;
    uVar6 = 1;
    goto LAB_025bd0bc;
  case 4:
    if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
      return 0;
    }
    uVar5 = FUN_02780ed8(param_1 + 0x14,param_2 + 0x14,(long)*(int *)(param_1 + 0x10) << 1,0);
    return uVar5;
  case 5:
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != *(int *)(param_2 + 0x10)) {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_03cef968 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar2 = FUN_026efcf8(param_1,0,iVar2,param_2,0,iVar2,0);
    goto System_IO_StreamWriter__Close;
  default:
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar6 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cef970);
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cef978);
    FUN_026a7658(uVar6,uVar7,uVar8,0);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cef9f8);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar7);
  }
  if (plVar4 == (long *)0x0) {
LAB_025bd160:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = *plVar4;
  uVar6 = 0;
LAB_025bd0bc:
  iVar2 = (**(code **)(lVar3 + 0x1a8))(plVar4,param_1,param_2,uVar6,*(undefined8 *)(lVar3 + 0x1b0));
System_IO_StreamWriter__Close:
  return (ulong)(iVar2 == 0);
}


