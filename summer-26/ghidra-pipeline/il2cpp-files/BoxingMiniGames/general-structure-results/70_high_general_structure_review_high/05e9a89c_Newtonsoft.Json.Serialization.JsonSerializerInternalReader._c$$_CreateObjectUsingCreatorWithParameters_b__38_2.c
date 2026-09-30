/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<CreateObjectUsingCreatorWithParameters>b__38_2
ENTRY_POINT: 05e9a89c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<CreateObjectUsingCreatorWithParameters>b__38_2
              (long *param_1,ushort *param_2,int param_3,long param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  short sVar10;
  ushort *puVar11;
  ushort *in_stack_00000008;
  
  if ((DAT_07edf1ce & 1) == 0) {
    FUN_03642964(PTR_DAT_07a0b890);
    DAT_07edf1ce = 1;
  }
  puVar1 = param_2 + param_3;
  in_stack_00000008 = (ushort *)0x0;
  puVar11 = param_2;
  if (param_4 == 0) {
    plVar7 = (long *)param_1[5];
    if (plVar7 != (long *)0x0) {
      plVar4 = (long *)0x0;
      lVar8 = *(long *)PTR_DAT_07a0b890;
      if (*plVar7 == lVar8) {
        sVar10 = 0;
        goto LAB_05e9a98c;
      }
    }
    plVar4 = (long *)0x0;
    goto LAB_05e9aa38;
  }
  plVar7 = *(long **)(param_4 + 0x10);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else if (*plVar7 != *(long *)PTR_DAT_07a0b890) {
    plVar7 = (long *)0x0;
  }
  sVar10 = *(short *)(param_4 + 0x20);
  if (*(long *)(param_4 + 0x18) == 0) {
    plVar4 = (long *)0x0;
    if (plVar7 == (long *)0x0) goto LAB_05e9a9dc;
LAB_05e9a988:
    lVar8 = *plVar7;
LAB_05e9a98c:
    iVar3 = (**(code **)(lVar8 + 0x188))(plVar7,*(undefined8 *)(lVar8 + 400));
    if (iVar3 == 1) {
      if (sVar10 != 0) {
        param_3 = param_3 + 1;
      }
      return param_3;
    }
    if (sVar10 == 0) goto LAB_05e9aa38;
    if (param_4 == 0) goto LAB_05e9aaf0;
  }
  else {
    plVar4 = (long *)FUN_05e9ab94(param_4);
    if (plVar4 == (long *)0x0) goto LAB_05e9aaf0;
    iVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if ((0 < iVar3) && (*(char *)(param_4 + 0x31) != '\0')) {
      uVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      FUN_03156bd4(param_4);
      uVar9 = *(undefined8 *)(param_4 + 0x10);
      FUN_03156bd4(uVar9);
      uVar9 = thunk_FUN_03652da4(uVar9,0);
      uVar6 = thunk_FUN_036aa1c8(PTR_DAT_07a0bc80);
      uVar5 = FUN_05c79db8(uVar6,uVar5,uVar9,0);
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar9 = thunk_FUN_0367fe20();
      FUN_05d84c94(uVar9,uVar5,0);
      uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a17f50);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar9,uVar5);
    }
    FUN_05c9f144(plVar4,param_2,puVar1,param_4,0,0);
    if (plVar7 != (long *)0x0) goto LAB_05e9a988;
LAB_05e9a9dc:
    if (sVar10 == 0) goto LAB_05e9aa38;
  }
  plVar4 = (long *)FUN_05e9ab94(param_4);
  if (plVar4 == (long *)0x0) {
LAB_05e9aaf0:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_05c9f144(plVar4,param_2,puVar1,param_4,0,0);
  in_stack_00000008 = param_2;
  (**(code **)(*plVar4 + 0x1d8))(plVar4,sVar10,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
  puVar11 = in_stack_00000008;
LAB_05e9aa38:
  iVar3 = 0;
LAB_05e9aa3c:
  do {
    if (plVar4 == (long *)0x0) {
      uVar2 = 0;
LAB_05e9aa60:
      if (puVar1 <= puVar11) {
        return iVar3;
      }
    }
    else {
      uVar2 = FUN_05c9f180(plVar4,0);
      if (uVar2 == 0) goto LAB_05e9aa60;
    }
    if (uVar2 == 0) {
      uVar2 = *puVar11;
      puVar11 = puVar11 + 1;
    }
    if (uVar2 < 0x80) {
      iVar3 = iVar3 + 1;
      goto LAB_05e9aa3c;
    }
    if (plVar4 == (long *)0x0) {
      if (param_4 == 0) {
        plVar7 = (long *)param_1[5];
        if (plVar7 == (long *)0x0) goto LAB_05e9aaf0;
        plVar4 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      }
      else {
        plVar4 = (long *)FUN_05e9ab94(param_4);
      }
      if (plVar4 == (long *)0x0) goto LAB_05e9aaf0;
      FUN_05c9f144(plVar4,param_2,puVar1,param_4,0,0);
    }
    in_stack_00000008 = puVar11;
    (**(code **)(*plVar4 + 0x1d8))(plVar4,uVar2,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
    puVar11 = in_stack_00000008;
  } while( true );
}


