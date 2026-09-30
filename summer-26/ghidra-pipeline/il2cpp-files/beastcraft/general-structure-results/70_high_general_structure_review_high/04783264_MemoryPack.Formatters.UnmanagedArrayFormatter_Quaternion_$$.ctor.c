/*
FUNCTION_NAME: MemoryPack.Formatters.UnmanagedArrayFormatter<Quaternion>$$.ctor
ENTRY_POINT: 04783264
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void MemoryPack_Formatters_UnmanagedArrayFormatter<Quaternion>___ctor(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x22;
  void *unaff_x24;
  undefined4 unaff_w25;
  long *unaff_x26;
  size_t unaff_x27;
  undefined4 unaff_w28;
  long unaff_x29;
  
  memcpy(unaff_x22,param_1,unaff_x27);
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_047832dc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02e759c0();
LAB_047832dc:
  uVar1 = (*(code *)*puVar5)();
  pvVar6 = (void *)thunk_FUN_02e9a5a4();
  memcpy(unaff_x24,pvVar6,*(size_t *)(unaff_x29 + -0x38));
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20));
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04783384;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02e759c0();
LAB_04783384:
  uVar2 = (*(code *)*puVar5)();
  pvVar7 = (void *)thunk_FUN_02e9a5a4();
  pvVar6 = *(void **)(unaff_x29 + -0x30);
  memcpy(pvVar6,pvVar7,*(size_t *)(unaff_x29 + -0x28));
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),pvVar6);
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto MemoryPack_Formatters_UnmanagedArrayFormatter<ulong>__Deserialize;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02e759c0();
MemoryPack_Formatters_UnmanagedArrayFormatter<ulong>__Deserialize:
  uVar3 = (*(code *)*puVar5)();
  pvVar7 = (void *)thunk_FUN_02e9a5a4();
  pvVar6 = *(void **)(unaff_x29 + -0x20);
  memcpy(pvVar6,pvVar7,*(size_t *)(unaff_x29 + -0x18));
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30),pvVar6);
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_047834d4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02e759c0();
LAB_047834d4:
  uVar4 = (*(code *)*puVar5)();
  FUN_0561db00(unaff_w28,unaff_w25,uVar1,uVar2,uVar3,uVar4,0);
  if (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


