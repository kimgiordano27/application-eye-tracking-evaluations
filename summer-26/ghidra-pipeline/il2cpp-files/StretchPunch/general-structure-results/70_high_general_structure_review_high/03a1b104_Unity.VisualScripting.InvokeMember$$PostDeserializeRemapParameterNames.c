/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember$$PostDeserializeRemapParameterNames
ENTRY_POINT: 03a1b104
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_InvokeMember__PostDeserializeRemapParameterNames
               (long *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  
  puVar4 = PTR_DAT_04237138;
  puVar2 = StringLiteral_887;
  if ((DAT_044aade9 & 1) == 0) {
    FUN_01d7d918(PTR_DAT_04236cf8);
    FUN_01d7d918(StringLiteral_887);
    FUN_01d7d918(PTR_DAT_04237138);
    FUN_01d7d918(PTR_DAT_04236d10);
    FUN_01d7d918(PTR_DAT_04237140);
    FUN_01d7d918(PTR_DAT_04236e60);
    FUN_01d7d918(PTR_DAT_04237148);
    DAT_044aade9 = 1;
  }
  lVar5 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  FUN_03a1b3ec();
  param_1[7] = lVar5;
  thunk_FUN_01e10808(param_1 + 7,lVar5);
  lVar5 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  FUN_03a1b3ec();
  param_1[8] = lVar5;
  thunk_FUN_01e10808(param_1 + 8,lVar5);
  lVar5 = FUN_01d7d9bc(*(undefined8 *)puVar2,5);
  param_1[0xc] = lVar5;
  thunk_FUN_01e10808();
  FUN_033d8040(param_1,0);
  param_1[4] = param_3;
  thunk_FUN_01e10808(param_1 + 4,param_3);
  param_1[6] = (long)param_2;
  thunk_FUN_01e10808(param_1 + 6,param_2);
  (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0));
  puVar4 = PTR_DAT_04237148;
  puVar2 = PTR_DAT_04236cf8;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar5 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
  uVar11 = *(undefined8 *)PTR_DAT_04237140;
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04236cf8) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_03a1b298;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01dde8fc(param_2,*(long *)PTR_DAT_04236cf8,0xd);
LAB_03a1b298:
  puVar3 = PTR_DAT_04236d10;
  lVar5 = (*(code *)*puVar6)(param_2,2,uVar11,puVar6[1]);
  param_1[0x10] = lVar5;
  thunk_FUN_01e10808();
  lVar7 = *param_2;
  lVar5 = *(long *)puVar2;
  uVar11 = *(undefined8 *)puVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar5) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_03a1b318;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01dde8fc(param_2,lVar5,0xd);
LAB_03a1b318:
  puVar4 = PTR_DAT_04236e60;
  lVar5 = (*(code *)*puVar6)(param_2,3,uVar11,puVar6[1]);
  param_1[0x11] = lVar5;
  thunk_FUN_01e10808();
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *(long *)puVar3;
  }
  lVar8 = *param_2;
  lVar7 = *(long *)puVar2;
  uVar11 = *(undefined8 *)puVar4;
  uVar1 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 4);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
        goto LAB_03a1b3b4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01dde8fc(param_2,lVar7,0xd);
LAB_03a1b3b4:
  lVar5 = (*(code *)*puVar6)(param_2,uVar1,uVar11,puVar6[1]);
  param_1[0x12] = lVar5;
  thunk_FUN_01e10808(param_1 + 0x12,lVar5);
  return;
}


