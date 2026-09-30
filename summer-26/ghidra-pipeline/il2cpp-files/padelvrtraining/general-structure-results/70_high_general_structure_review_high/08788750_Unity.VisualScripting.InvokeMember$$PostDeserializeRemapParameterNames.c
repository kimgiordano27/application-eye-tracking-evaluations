/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember$$PostDeserializeRemapParameterNames
ENTRY_POINT: 08788750
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_InvokeMember__PostDeserializeRemapParameterNames(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_03d2d2b0(PTR_DAT_092894c0);
  FUN_03d2d2b0(PTR_DAT_092891f0);
  FUN_03d2d2b0(PTR_DAT_092894c8);
  *(undefined1 *)(unaff_x22 + 0xdb) = 1;
  lVar3 = thunk_FUN_03d2ef40(*unaff_x24);
  FUN_087889dc();
  unaff_x19[7] = lVar3;
  thunk_FUN_03d1023c(unaff_x19 + 7,lVar3);
  lVar3 = thunk_FUN_03d2ef40(*unaff_x24);
  FUN_087889dc();
  unaff_x19[8] = lVar3;
  thunk_FUN_03d1023c(unaff_x19 + 8,lVar3);
  lVar3 = FUN_03d2d394(*unaff_x23,5);
  unaff_x19[0xc] = lVar3;
  thunk_FUN_03d1023c();
  FUN_071bc31c();
  unaff_x19[4] = unaff_x21;
  thunk_FUN_03d1023c();
  unaff_x19[6] = (long)unaff_x20;
  thunk_FUN_03d1023c();
  (**(code **)(*unaff_x19 + 0x2b8))();
  puVar1 = PTR_DAT_09289098;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09289098) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_08788888;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370();
LAB_08788888:
  puVar2 = PTR_DAT_092890b0;
  lVar3 = (*(code *)*puVar4)();
  unaff_x19[0x10] = lVar3;
  thunk_FUN_03d1023c();
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_08788908;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370();
LAB_08788908:
  lVar3 = (*(code *)*puVar4)();
  unaff_x19[0x11] = lVar3;
  thunk_FUN_03d1023c();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_087889a4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370();
LAB_087889a4:
  lVar3 = (*(code *)*puVar4)();
  unaff_x19[0x12] = lVar3;
  thunk_FUN_03d1023c(unaff_x19 + 0x12,lVar3);
  return;
}


