/*
FUNCTION_NAME: MemoryPack.Formatters.UnmanagedArrayFormatter<Quaternion>$$Deserialize
ENTRY_POINT: 0478321c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void MemoryPack_Formatters_UnmanagedArrayFormatter<Quaternion>__Deserialize(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x22;
  void *unaff_x24;
  long *unaff_x26;
  size_t unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  
  puVar6 = (undefined8 *)FUN_02e759c0();
  uVar1 = (*(code *)*puVar6)();
  pvVar7 = (void *)thunk_FUN_02e9a5a4();
  memcpy(unaff_x22,pvVar7,unaff_x27);
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_047832dc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02e759c0();
LAB_047832dc:
  uVar2 = (*(code *)*puVar6)();
  pvVar7 = (void *)thunk_FUN_02e9a5a4();
  memcpy(unaff_x24,pvVar7,*(size_t *)(unaff_x29 + -0x38));
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20));
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_04783384;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02e759c0();
LAB_04783384:
  uVar3 = (*(code *)*puVar6)();
  pvVar8 = (void *)thunk_FUN_02e9a5a4();
  pvVar7 = *(void **)(unaff_x29 + -0x30);
  memcpy(pvVar7,pvVar8,*(size_t *)(unaff_x29 + -0x28));
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),pvVar7);
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto MemoryPack_Formatters_UnmanagedArrayFormatter<ulong>__Deserialize;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02e759c0();
MemoryPack_Formatters_UnmanagedArrayFormatter<ulong>__Deserialize:
  uVar4 = (*(code *)*puVar6)();
  pvVar8 = (void *)thunk_FUN_02e9a5a4();
  pvVar7 = *(void **)(unaff_x29 + -0x20);
  memcpy(pvVar7,pvVar8,*(size_t *)(unaff_x29 + -0x18));
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30),pvVar7);
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x26) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_047834d4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02e759c0();
LAB_047834d4:
  uVar5 = (*(code *)*puVar6)();
  FUN_0561db00(unaff_w28,uVar1,uVar2,uVar3,uVar4,uVar5,0);
  if (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


