/*
FUNCTION_NAME: FUN_02eb90c0
ENTRY_POINT: 02eb90c0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


void FUN_02eb90c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar2 = StringLiteral_6823;
  puVar1 = Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__;
  if ((DAT_03ff0753 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(StringLiteral_6832);
    thunk_FUN_01ad9084(StringLiteral_6823);
    thunk_FUN_01ad9084(StringLiteral_6681);
    DAT_03ff0753 = 1;
  }
  uVar3 = FUN_01b47fd0(*(undefined8 *)puVar1,0x15);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  plVar4 = (long *)FUN_02f100a8(0);
  puVar1 = StringLiteral_6832;
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 02eb9178 to 02fb948b has its CatchHandler @ 02eb9178
                       catch() { ... } // from try @ 02eb9178 with catch @ 02eb9178
                       catch() { ... } // from try @ 02eb9584 with catch @ 02eb9178
                       catch() { ... } // from try @ 02eb95d0 with catch @ 02eb9178
                       catch() { ... } // from try @ 02eb960c with catch @ 02eb9178 */
    (**(code **)(*plVar4 + 0x248))(plVar4,2,*(undefined8 *)(*plVar4 + 0x250));
    if ((param_1 == 0) || (*(int *)(param_1 + 0x10) < 1)) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *(long *)puVar1;
      }
      FUN_0306bccc(*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0,uVar3,0,8,0);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = System_IO_MonoIO__Close(param_1,0);
      (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x200));
      plVar6 = (long *)(**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
      if (plVar6 == (long *)0x0) goto LAB_02eb93e8;
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_6681) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_02eb9278;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)StringLiteral_6681,3);
LAB_02eb9278:
      (*(code *)*puVar7)(plVar6,uVar5,0,8,uVar3,0,puVar7[1]);
    }
    if ((param_1 == 0) || (*(int *)(param_1 + 0x10) < 8)) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *(long *)puVar1;
      }
      FUN_0306bccc(*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),0,uVar3,8,8,0);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = System_IO_MonoIO__Close(param_1,7);
      (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x200));
      plVar6 = (long *)(**(code **)(*plVar4 + 0x278))(plVar4,*(undefined8 *)(*plVar4 + 0x280));
      if (plVar6 == (long *)0x0) goto LAB_02eb93e8;
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar5 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_6681) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_02eb9390;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar6,*(long *)StringLiteral_6681,3);
LAB_02eb9390:
      (*(code *)*puVar7)(plVar6,uVar5,0,8,uVar3,8,puVar7[1]);
    }
    FUN_02f1dc4c(plVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_02eb9554(param_2,uVar3);
    return;
  }
LAB_02eb93e8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


