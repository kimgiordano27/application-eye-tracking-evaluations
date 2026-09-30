/*
FUNCTION_NAME: MemoryPack.Formatters.UnmanagedFormatter<Vector4>$$Deserialize
ENTRY_POINT: 0478549c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void MemoryPack_Formatters_UnmanagedFormatter<Vector4>__Deserialize(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long in_x11;
  undefined8 in_x12;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  *(long *)(unaff_x29 + -0x18) = in_x11;
  *(undefined8 *)(unaff_x29 + -0x28) = in_x12;
  *(ulong *)(unaff_x29 + -0x20) = (long)&stack0x00000000 - (in_x11 + 0xfU & 0x1fffffff0);
  pvVar7 = (void *)thunk_FUN_02e9a5a4();
  memcpy(unaff_x24,pvVar7,unaff_x22);
  thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
  puVar1 = PTR_DAT_06a6ccf0;
  if (unaff_x19 == (long *)0x0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
  }
  else {
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a6ccf0) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_04785550;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02e759c0();
LAB_04785550:
    uVar2 = (*(code *)*puVar8)();
    *(undefined4 *)(unaff_x29 + -0x4c) = uVar2;
    pvVar7 = (void *)thunk_FUN_02e9a5a4();
    memcpy(unaff_x26,pvVar7,unaff_x23);
    thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_047855fc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02e759c0();
LAB_047855fc:
    uVar2 = (*(code *)*puVar8)();
    *(undefined4 *)(unaff_x29 + -0x50) = uVar2;
    pvVar7 = (void *)thunk_FUN_02e9a5a4();
    memcpy(unaff_x28,pvVar7,unaff_x25);
    thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_047856a4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02e759c0();
LAB_047856a4:
    uVar2 = (*(code *)*puVar8)();
    pvVar7 = (void *)thunk_FUN_02e9a5a4();
    memcpy(unaff_x27,pvVar7,*(size_t *)(unaff_x29 + -0x48));
    thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20));
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0478574c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02e759c0();
LAB_0478574c:
    uVar3 = (*(code *)*puVar8)();
    pvVar9 = (void *)thunk_FUN_02e9a5a4();
    pvVar7 = *(void **)(unaff_x29 + -0x40);
    memcpy(pvVar7,pvVar9,*(size_t *)(unaff_x29 + -0x38));
    thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),pvVar7)
    ;
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_047857f4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02e759c0();
LAB_047857f4:
    uVar4 = (*(code *)*puVar8)();
    pvVar9 = (void *)thunk_FUN_02e9a5a4();
    pvVar7 = *(void **)(unaff_x29 + -0x30);
    memcpy(pvVar7,pvVar9,*(size_t *)(unaff_x29 + -0x28));
    thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30),pvVar7)
    ;
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0478589c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02e759c0();
LAB_0478589c:
    uVar5 = (*(code *)*puVar8)();
    pvVar9 = (void *)thunk_FUN_02e9a5a4();
    pvVar7 = *(void **)(unaff_x29 + -0x20);
    memcpy(pvVar7,pvVar9,*(size_t *)(unaff_x29 + -0x18));
    thunk_FUN_02e786f0(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38),pvVar7)
    ;
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_04785944;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02e759c0();
LAB_04785944:
    uVar6 = (*(code *)*puVar8)();
    FUN_0561db2c(*(undefined4 *)(unaff_x29 + -0x4c),*(undefined4 *)(unaff_x29 + -0x50),uVar2,uVar3,
                 uVar4,uVar5,uVar6,0);
    if (*(long *)(*(long *)(unaff_x29 + -0x10) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


