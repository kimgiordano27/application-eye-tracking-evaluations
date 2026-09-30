/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
ENTRY_POINT: 05e9ac4c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference(long *param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *in_x9;
  long unaff_x19;
  undefined8 uVar9;
  undefined1 *unaff_x20;
  ushort *unaff_x21;
  long *unaff_x22;
  ushort *unaff_x23;
  int unaff_w25;
  int unaff_w26;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  ushort *in_stack_00000008;
  
  if (*param_1 != *in_x9) {
    param_1 = (long *)0x0;
  }
  sVar2 = *(short *)(unaff_x19 + 0x20);
  puVar11 = unaff_x20;
  puVar12 = unaff_x21;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    plVar5 = (long *)0x0;
    if (param_1 != (long *)0x0) goto LAB_05e9ace8;
LAB_05e9ad40:
    puVar10 = unaff_x20 + unaff_w25;
    if (sVar2 != 0) goto LAB_05e9ad4c;
LAB_05e9ad98:
    if (plVar5 == (long *)0x0) {
      uVar3 = 0;
LAB_05e9adbc:
      if (unaff_x23 <= puVar12) goto LAB_05e9ae90;
    }
    else {
      uVar3 = FUN_05c9f180(plVar5,0);
      if (uVar3 == 0) goto LAB_05e9adbc;
    }
    if (uVar3 == 0) {
      uVar3 = *puVar12;
      puVar12 = puVar12 + 1;
    }
    if (0x7f < uVar3) {
      if (plVar5 == (long *)0x0) {
        if (unaff_x19 == 0) {
          plVar5 = (long *)unaff_x22[5];
          if (plVar5 == (long *)0x0) goto LAB_05e9af7c;
          plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        }
        else {
          plVar5 = (long *)FUN_05e9ab94();
        }
        if (plVar5 == (long *)0x0) goto LAB_05e9af7c;
        FUN_05c9f144(plVar5);
      }
      in_stack_00000008 = puVar12;
      (**(code **)(*plVar5 + 0x1d8))(plVar5,uVar3,&stack0x00000008,*(undefined8 *)(*plVar5 + 0x1e0))
      ;
      puVar12 = in_stack_00000008;
      goto LAB_05e9ad98;
    }
    if (puVar11 < puVar10) {
      *puVar11 = (char)uVar3;
      puVar11 = puVar11 + 1;
      goto LAB_05e9ad98;
    }
    if ((plVar5 == (long *)0x0) || (*(char *)((long)plVar5 + 0x2a) == '\0')) {
      puVar12 = puVar12 + -1;
    }
    else {
      (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    }
    FUN_05cb0530();
LAB_05e9ae90:
    if (unaff_x19 == 0) goto LAB_05e9aeb8;
    if ((plVar5 != (long *)0x0) && (*(char *)((long)plVar5 + 0x29) == '\0')) {
      *(undefined2 *)(unaff_x19 + 0x20) = 0;
    }
    uVar8 = (long)puVar12 - (long)unaff_x21;
  }
  else {
    plVar5 = (long *)FUN_05e9ab94();
    if (plVar5 == (long *)0x0) goto LAB_05e9af7c;
    iVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if ((0 < iVar4) && (*(char *)(unaff_x19 + 0x31) != '\0')) {
      uVar6 = (**(code **)(*unaff_x22 + 0x1b8))();
      FUN_03156bd4();
      uVar9 = *(undefined8 *)(unaff_x19 + 0x10);
      FUN_03156bd4(uVar9);
      uVar9 = thunk_FUN_03652da4(uVar9,0);
      uVar7 = thunk_FUN_036aa1c8(PTR_DAT_07a0bc80);
      uVar6 = FUN_05c79db8(uVar7,uVar6,uVar9,0);
      thunk_FUN_036aa1c8(PTR_DAT_079f85e8);
      uVar9 = thunk_FUN_0367fe20();
      FUN_05d84c94(uVar9,uVar6,0);
      uVar6 = thunk_FUN_036aa1c8(PTR_DAT_07a17f58);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar9,uVar6);
    }
    FUN_05c9f144(plVar5);
    if (param_1 == (long *)0x0) goto LAB_05e9ad40;
LAB_05e9ace8:
    iVar4 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if (iVar4 != 1) {
LAB_05e9ad20:
      puVar10 = unaff_x20 + unaff_w25;
      if (sVar2 != 0) {
        if (unaff_x19 == 0) goto LAB_05e9af7c;
LAB_05e9ad4c:
        plVar5 = (long *)FUN_05e9ab94();
        if (plVar5 == (long *)0x0) {
LAB_05e9af7c:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_05c9f144();
        in_stack_00000008 = unaff_x21;
        (**(code **)(*plVar5 + 0x1d8))
                  (plVar5,sVar2,&stack0x00000008,*(undefined8 *)(*plVar5 + 0x1e0));
        puVar12 = in_stack_00000008;
      }
      goto LAB_05e9ad98;
    }
    if (param_1[2] == 0) goto LAB_05e9af7c;
    uVar3 = FUN_05c91ffc(param_1[2],0,0);
    if (0x7f < uVar3) goto LAB_05e9ad20;
    if (sVar2 != 0) {
      if (unaff_w25 == 0) {
        FUN_05cb0530();
      }
      unaff_w25 = unaff_w25 + -1;
      *unaff_x20 = (char)uVar3;
      puVar11 = unaff_x20 + 1;
    }
    if (unaff_w25 < unaff_w26) {
      FUN_05cb0530();
      unaff_x23 = unaff_x21 + unaff_w25;
    }
    while (puVar12 < unaff_x23) {
      uVar1 = *puVar12;
      if (0x7f < *puVar12) {
        uVar1 = uVar3;
      }
      *puVar11 = (char)uVar1;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    if (unaff_x19 == 0) goto LAB_05e9aeb8;
    uVar8 = (long)puVar12 - (long)unaff_x21;
    *(undefined2 *)(unaff_x19 + 0x20) = 0;
  }
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  *(int *)(unaff_x19 + 0x34) = (int)(uVar8 >> 1);
LAB_05e9aeb8:
  return (int)puVar11 - (int)unaff_x20;
}


