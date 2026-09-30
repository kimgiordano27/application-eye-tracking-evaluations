/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$.ctor
ENTRY_POINT: 05e9a8e8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter___ctor(long *param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_x9;
  long unaff_x19;
  undefined8 uVar7;
  long *unaff_x20;
  ushort *unaff_x21;
  ushort *unaff_x22;
  int unaff_w24;
  ushort *in_stack_00000008;
  
  if (*param_1 != **(long **)(in_x9 + 0x890)) {
    param_1 = (long *)0x0;
  }
  sVar1 = *(short *)(unaff_x19 + 0x20);
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    plVar4 = (long *)0x0;
    if (param_1 != (long *)0x0) goto LAB_05e9a988;
LAB_05e9a9dc:
    if (sVar1 == 0) goto LAB_05e9aa38;
  }
  else {
    plVar4 = (long *)FUN_05e9ab94();
    if (plVar4 == (long *)0x0) goto LAB_05e9aaf0;
    iVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x31) != '\0')) {
      uVar5 = (**(code **)(*unaff_x20 + 0x1b8))();
      FUN_03156bd4();
      uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
      FUN_03156bd4(uVar7);
      uVar7 = thunk_FUN_03652da4(uVar7,0);
      uVar6 = thunk_FUN_036aa1c8(PTR_DAT_07a0bc80);
      uVar5 = FUN_05c79db8(uVar6,uVar5,uVar7,0);
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar7 = thunk_FUN_0367fe20();
      FUN_05d84c94(uVar7,uVar5,0);
      uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a17f50);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar7,uVar5);
    }
    FUN_05c9f144(plVar4);
    if (param_1 == (long *)0x0) goto LAB_05e9a9dc;
LAB_05e9a988:
    iVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (iVar3 == 1) {
      if (sVar1 != 0) {
        unaff_w24 = unaff_w24 + 1;
      }
      return unaff_w24;
    }
    if (sVar1 == 0) goto LAB_05e9aa38;
    if (unaff_x19 == 0) goto LAB_05e9aaf0;
  }
  plVar4 = (long *)FUN_05e9ab94();
  if (plVar4 == (long *)0x0) {
LAB_05e9aaf0:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_05c9f144();
  in_stack_00000008 = unaff_x21;
  (**(code **)(*plVar4 + 0x1d8))(plVar4,sVar1,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
  unaff_x21 = in_stack_00000008;
LAB_05e9aa38:
  iVar3 = 0;
LAB_05e9aa3c:
  do {
    if (plVar4 == (long *)0x0) {
      uVar2 = 0;
LAB_05e9aa60:
      if (unaff_x22 <= unaff_x21) {
        return iVar3;
      }
    }
    else {
      uVar2 = FUN_05c9f180(plVar4,0);
      if (uVar2 == 0) goto LAB_05e9aa60;
    }
    if (uVar2 == 0) {
      uVar2 = *unaff_x21;
      unaff_x21 = unaff_x21 + 1;
    }
    if (uVar2 < 0x80) {
      iVar3 = iVar3 + 1;
      goto LAB_05e9aa3c;
    }
    if (plVar4 == (long *)0x0) {
      if (unaff_x19 == 0) {
        plVar4 = (long *)unaff_x20[5];
        if (plVar4 == (long *)0x0) goto LAB_05e9aaf0;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
      }
      else {
        plVar4 = (long *)FUN_05e9ab94();
      }
      if (plVar4 == (long *)0x0) goto LAB_05e9aaf0;
      FUN_05c9f144(plVar4);
    }
    in_stack_00000008 = unaff_x21;
    (**(code **)(*plVar4 + 0x1d8))(plVar4,uVar2,&stack0x00000008,*(undefined8 *)(*plVar4 + 0x1e0));
    unaff_x21 = in_stack_00000008;
  } while( true );
}


