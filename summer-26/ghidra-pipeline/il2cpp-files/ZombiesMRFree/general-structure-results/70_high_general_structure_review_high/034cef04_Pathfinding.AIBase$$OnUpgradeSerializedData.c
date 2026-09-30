/*
FUNCTION_NAME: Pathfinding.AIBase$$OnUpgradeSerializedData
ENTRY_POINT: 034cef04
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Pathfinding_AIBase__OnUpgradeSerializedData(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x530));
  FUN_02fe925c(PTR_DAT_06f80538);
  FUN_02fe925c(PTR_DAT_06f80540);
  FUN_02fe925c(PTR_DAT_06f80548);
  FUN_02fe925c(PTR_DAT_06f80550);
  FUN_02fe925c(PTR_DAT_06f7db40);
  FUN_02fe925c(PTR_DAT_06f80558);
                    /* try { // try from 034cef58 to 035cef73 has its CatchHandler @ 034cf688 */
  FUN_02fe925c(PTR_DAT_06f80560);
  FUN_02fe925c(PTR_DAT_06f80568);
  FUN_02fe925c(PTR_DAT_06f7daf8);
  FUN_02fe925c(PTR_DAT_06f80570);
  FUN_02fe925c(PTR_DAT_06f80578);
  FUN_02fe925c(PTR_DAT_06f7c6c8);
  FUN_02fe925c(PTR_DAT_06f7c958);
  FUN_02fe925c(PTR_DAT_06f80580);
  FUN_02fe925c(PTR_DAT_06f80588);
  FUN_02fe925c(PTR_DAT_06f80590);
  FUN_02fe925c(PTR_DAT_06f80598);
  FUN_02fe925c(PTR_DAT_06f7c4f8);
  FUN_02fe925c(PTR_DAT_06f805a0);
  FUN_02fe925c(PTR_DAT_06f7cce0);
  FUN_02fe925c(PTR_DAT_06f805a8);
  FUN_02fe925c(PTR_DAT_06f7c518);
  FUN_02fe925c(PTR_DAT_06f805b0);
  FUN_02fe925c(PTR_DAT_06f7c520);
  FUN_02fe925c(PTR_DAT_06f805b8);
  FUN_02fe925c(PTR_DAT_06f805c0);
  FUN_02fe925c(PTR_DAT_06f7c5e8);
  FUN_02fe925c(PTR_DAT_06f805c8);
  FUN_02fe925c(PTR_DAT_06f7c530);
  FUN_02fe925c(PTR_DAT_06f7d310);
  *(undefined1 *)(unaff_x21 + 0xf99) = 1;
  if (unaff_x20 != (long *)0x0) {
    if (*unaff_x20 != *(long *)PTR_DAT_06f80548) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
    FUN_06b71620();
    puVar1 = PTR_DAT_06f7c4d0;
    if (unaff_x19 != (long *)0x0) {
      lVar5 = *unaff_x19;
      lVar8 = *(long *)PTR_DAT_06f80530;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf124;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf124:
      puVar2 = PTR_DAT_06f80520;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b71720();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf1c0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf1c0:
      puVar1 = PTR_DAT_06f80528;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b717a0();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf25c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf25c:
      puVar2 = PTR_DAT_06f7daf0;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b71820();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf2f8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf2f8:
      puVar1 = PTR_DAT_06f7d1d0;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b718a0();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf394;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf394:
      puVar3 = PTR_DAT_06f80500;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b71920();
      puVar2 = PTR_DAT_06f7c4d0;
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf438;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf438:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b719a0();
      lVar8 = *(long *)puVar3;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf4cc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf4cc:
      puVar1 = PTR_DAT_06f80510;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b71a20();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto Pathfinding_AILerp__get_position;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
Pathfinding_AILerp__get_position:
      puVar2 = PTR_DAT_06f7c4c8;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b71aa0();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf604;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf604:
      puVar1 = PTR_DAT_06f7c4b0;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      uVar9 = FUN_06b71b20();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto Pathfinding_AILerp__Pathfinding_IAstarAI_set_maxSpeed;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
Pathfinding_AILerp__Pathfinding_IAstarAI_set_maxSpeed:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))(uVar9);
      FUN_06b71c20();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf734;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf734:
      puVar3 = PTR_DAT_06f804f0;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b71ca0();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf7d0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf7d0:
      puVar4 = PTR_DAT_06f804f8;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      uVar9 = FUN_06b71d5c();
      lVar8 = *(long *)puVar3;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf86c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf86c:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))(uVar9);
      FUN_06b71de4();
      lVar8 = *(long *)puVar4;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cf900;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cf900:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      uVar9 = FUN_06b71e64();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto Pathfinding_AILerp__set_remainingDistance;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
Pathfinding_AILerp__set_remainingDistance:
      puVar2 = PTR_DAT_06f80540;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))(uVar9);
      FUN_06b71eec();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfa30;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfa30:
      puVar4 = PTR_DAT_06f80538;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b716a0();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfacc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfacc:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b71f6c();
      lVar8 = *(long *)puVar4;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfb60;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfb60:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      uVar9 = FUN_06b71fec();
      lVar8 = *(long *)puVar3;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfbf4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfbf4:
      puVar2 = PTR_DAT_06f80508;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))(uVar9);
      FUN_06b72074();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfc90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfc90:
      puVar3 = PTR_DAT_06f80518;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b7211c();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfd2c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfd2c:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b722d8();
      puVar2 = PTR_DAT_06f7c4d0;
      lVar8 = *(long *)puVar3;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfdc8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfdc8:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_06b723ac();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfe5c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfe5c:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_068f524c();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cfef0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cfef0:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_068f62b0();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034cff84;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034cff84:
      puVar1 = PTR_DAT_06f7c4b8;
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_068fc8bc();
      lVar8 = *(long *)puVar2;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034d0020;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034d0020:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
      (**(code **)(lVar5 + 8))();
      FUN_068fd700();
      lVar8 = *(long *)puVar1;
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_034d00ac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar5 = FUN_02feb5b8();
LAB_034d00ac:
      lVar5 = thunk_FUN_02fffafc(*(undefined8 *)(lVar5 + 8),lVar8);
                    /* WARNING: Could not recover jumptable at 0x034d00e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


