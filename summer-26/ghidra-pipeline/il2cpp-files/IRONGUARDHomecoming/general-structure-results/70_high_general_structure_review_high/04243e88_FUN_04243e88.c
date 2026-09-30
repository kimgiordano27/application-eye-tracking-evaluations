/*
FUNCTION_NAME: FUN_04243e88
ENTRY_POINT: 04243e88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_04243e88(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar5 = PTR_DAT_04591c38;
  puVar4 = PTR_DAT_04591c30;
  puVar2 = PTR_DAT_04591c28;
  puVar3 = PTR_DAT_0458c348;
  if ((DAT_04841332 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04591c40);
    thunk_FUN_01efb3a4(PTR_DAT_04591c38);
    thunk_FUN_01efb3a4(PTR_DAT_04591c48);
    thunk_FUN_01efb3a4(PTR_DAT_04591c30);
    thunk_FUN_01efb3a4(PTR_DAT_04588b40);
    thunk_FUN_01efb3a4(PTR_DAT_04588d98);
    thunk_FUN_01efb3a4(PTR_DAT_04591c50);
    thunk_FUN_01efb3a4(PTR_DAT_04591c18);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458c348);
    thunk_FUN_01efb3a4(PTR_DAT_04591c28);
    thunk_FUN_01efb3a4(PTR_DAT_04591c58);
    thunk_FUN_01efb3a4(PTR_DAT_04591c60);
    thunk_FUN_01efb3a4(PTR_DAT_04591c68);
    thunk_FUN_01efb3a4(PTR_DAT_04591c70);
    thunk_FUN_01efb3a4(PTR_DAT_04591c78);
    thunk_FUN_01efb3a4(PTR_DAT_04591c80);
    thunk_FUN_01efb3a4(PTR_DAT_04591c88);
    DAT_04841332 = 1;
  }
  uVar13 = *(undefined8 *)puVar2;
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_02b2f85c(lVar7,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_04841431 == '\0') {
    thunk_FUN_01efb3a4(PTR_DAT_0458c348);
    DAT_04841431 = '\x01';
  }
  puVar5 = PTR_DAT_04591c80;
  puVar4 = PTR_DAT_04591c60;
  puVar2 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar3;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_0340ebc0(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar9 = System_Threading_OSSpecificSynchronizationContext__Post(uVar14,uVar9,0);
  puVar2 = PTR_DAT_04591c40;
  if (lVar7 == 0) goto LAB_04244440;
  FUN_02b300fc(lVar7,10,uVar9,*(undefined8 *)PTR_DAT_04591c40);
  if (DAT_04841431 == '\0') {
    thunk_FUN_01efb3a4(PTR_DAT_0458c348);
    DAT_04841431 = '\x01';
  }
  puVar5 = PTR_DAT_04591c70;
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar3;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_0340ebc0(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar4,0);
  uVar9 = System_Threading_OSSpecificSynchronizationContext__Post(uVar14,uVar9,0);
  FUN_02b300fc(lVar7,0x16,uVar9,*(undefined8 *)puVar2);
  if (DAT_04841431 == '\0') {
    thunk_FUN_01efb3a4(PTR_DAT_0458c348);
    DAT_04841431 = '\x01';
  }
  puVar5 = PTR_DAT_04591c58;
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar3;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_0340ebc0(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar4,0);
  uVar9 = System_Threading_OSSpecificSynchronizationContext__Post(uVar14,uVar9,0);
  FUN_02b300fc(lVar7,0x28,uVar9,*(undefined8 *)puVar2);
  if (DAT_04841431 == '\0') {
    thunk_FUN_01efb3a4(PTR_DAT_0458c348);
    DAT_04841431 = '\x01';
  }
  puVar5 = PTR_DAT_04591c78;
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar3;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_0340ebc0(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar4,0);
  uVar9 = System_Threading_OSSpecificSynchronizationContext__Post(uVar14,uVar9,0);
  FUN_02b300fc(lVar7,0x29,uVar9,*(undefined8 *)puVar2);
  if (DAT_04841431 == '\0') {
    thunk_FUN_01efb3a4(PTR_DAT_0458c348);
    DAT_04841431 = '\x01';
  }
  puVar5 = PTR_DAT_04591c68;
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar3;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar9 = FUN_0340ebc0(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar4,0);
  uVar9 = System_Threading_OSSpecificSynchronizationContext__Post(uVar14,uVar9,0);
  FUN_02b300fc(lVar7,0x17,uVar9,*(undefined8 *)puVar2);
  if (DAT_04841431 == '\0') {
    thunk_FUN_01efb3a4(PTR_DAT_0458c348);
    DAT_04841431 = '\x01';
  }
  puVar5 = PTR_DAT_04591c88;
  puVar2 = PTR_DAT_04591c18;
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar3;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar13 = FUN_0340ebc0(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar4,0);
  uVar13 = System_Threading_OSSpecificSynchronizationContext__Post(uVar9,uVar13,0);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar8);
    lVar8 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04591c48;
  lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar12 == 0) goto LAB_04244440;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  uVar6 = (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
  uVar9 = FUN_02b3005c(lVar7,uVar6,*(undefined8 *)puVar3);
  puVar3 = PTR_DAT_04588b40;
  if (lVar8 == 0) goto LAB_04244440;
  plVar10 = (long *)(**(code **)(lVar8 + 0x18))
                              (*(undefined8 *)(lVar8 + 0x40),uVar9,*(undefined8 *)(lVar8 + 0x28));
  if (plVar10 == (long *)0x0) {
LAB_04244358:
    plVar10 = (long *)0x0;
  }
  else {
    lVar7 = *(long *)puVar3;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if (*(byte *)(*plVar10 + 0x130) < bVar1) goto LAB_04244358;
    if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
      plVar10 = (long *)0x0;
    }
  }
  lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar7 == 0) goto LAB_04244440;
  plVar11 = (long *)(**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),uVar13,*(undefined8 *)(lVar7 + 0x28));
  if (plVar11 == (long *)0x0) {
LAB_042443b4:
    plVar11 = (long *)0x0;
  }
  else {
    lVar7 = *(long *)puVar3;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_042443b4;
    if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
      plVar11 = (long *)0x0;
    }
  }
  lVar7 = FUN_04243d44();
  puVar3 = PTR_DAT_04591c50;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) {
    FUN_030f2938(*(long *)(lVar7 + 0x30),0,plVar10,*(undefined8 *)PTR_DAT_04591c50);
    lVar7 = FUN_04243d44();
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar7 + 0x30);
      lVar7 = FUN_04243d44();
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) && (lVar8 != 0)) {
        FUN_030f2938(lVar8,*(int *)(*(long *)(lVar7 + 0x30) + 0x18) + -1,plVar11,
                     *(undefined8 *)puVar3);
        return;
      }
    }
  }
LAB_04244440:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


