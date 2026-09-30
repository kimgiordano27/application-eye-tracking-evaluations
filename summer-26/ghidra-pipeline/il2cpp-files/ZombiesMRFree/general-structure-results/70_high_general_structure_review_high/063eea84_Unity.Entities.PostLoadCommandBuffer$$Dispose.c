/*
FUNCTION_NAME: Unity.Entities.PostLoadCommandBuffer$$Dispose
ENTRY_POINT: 063eea84
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Entities_PostLoadCommandBuffer__Dispose(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x20;
  long *plVar14;
  long *unaff_x21;
  long unaff_x22;
  undefined1 unaff_w24;
  undefined *puVar9;
  
  FUN_02fe925c(PTR_DAT_06f9a0f0);
  FUN_02fe925c(PTR_DAT_06f80978);
  FUN_02fe925c(PTR_DAT_06f9e140);
  FUN_02fe925c(PTR_DAT_06f6df38);
  FUN_02fe925c(PTR_DAT_06f9a128);
  *(undefined1 *)(unaff_x22 + 0x53d) = 1;
  puVar3 = PTR_DAT_06f80978;
  FUN_05b32c00();
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
  thunk_FUN_03048534((undefined8 *)(unaff_x20 + 0x20));
  *(undefined1 *)(unaff_x20 + 0x18) = unaff_w24;
  puVar9 = PTR_DAT_06f6df38;
  if (unaff_x21 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_06f744f8;
    lVar10 = *(long *)(lVar11 + 0x38);
    if (lVar10 == 0) {
      FUN_02feb320(lVar11);
      lVar10 = *(long *)(lVar11 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02feb2c4();
    }
    uVar7 = **(undefined8 **)(lVar10 + 0xb8);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  }
  else {
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto Unity_Entities_SharedComponentValues__CopyTo;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8();
Unity_Entities_SharedComponentValues__CopyTo:
    uVar4 = (*(code *)*puVar6)();
    uVar7 = FUN_02fe9340(*(undefined8 *)puVar9,uVar4);
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_063eec20;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_02feb5b8();
LAB_063eec20:
    (*(code *)*puVar6)();
    *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  }
  thunk_FUN_03048534(unaff_x20 + 0x10,uVar7);
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  lVar10 = *unaff_x19;
  bVar1 = *(byte *)(lVar10 + 0x130);
  bVar2 = *(byte *)(*(long *)PTR_DAT_06f9a0f0 + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06f9a0f0)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06f99bf8 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06f99bf8)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06f9e140 + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06f9e140))
      {
        bVar2 = *(byte *)(*(long *)PTR_DAT_06f9a128 + 0x130);
        if (bVar1 < bVar2) {
          return;
        }
        if (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06f9a128)
        {
          return;
        }
        uVar12 = (**(code **)(lVar10 + 0x278))();
        if ((uVar12 & 1) == 0) {
          unaff_x19 = (long *)0x0;
        }
        if ((uVar12 & 1) == 0) {
          thunk_FUN_03037804(PTR_DAT_06f6d8e8);
          uVar7 = thunk_FUN_0301080c();
          puVar9 = PTR_DAT_06fda6b8;
          goto LAB_063eef48;
        }
        if (unaff_x19 == (long *)0x0) goto LAB_063eeee8;
        lVar10 = FUN_05a27134(unaff_x19,0);
        uVar12 = FUN_05a258ec(lVar10,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (lVar10 == 0) goto LAB_063eeee8;
        uVar12 = FUN_05a238e4(lVar10,0);
        if ((uVar12 & 1) != 0) {
          return;
        }
      }
      else {
        uVar12 = FUN_05a238e4();
        if ((uVar12 & 1) != 0) {
          plVar14 = *(long **)(unaff_x20 + 0x10);
          if (plVar14 == (long *)0x0) goto LAB_063eeee8;
          lVar11 = *plVar14;
          lVar10 = *(long *)puVar3;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) goto LAB_063eee50;
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          goto LAB_063eee40;
        }
      }
LAB_063eeeec:
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar7 = thunk_FUN_0301080c();
      puVar9 = PTR_DAT_06fda6a8;
      goto LAB_063eef48;
    }
    uVar12 = FUN_05a238e4();
    if ((uVar12 & 1) != 0) {
      thunk_FUN_03037804(PTR_DAT_06f6d8e8);
      uVar7 = thunk_FUN_0301080c();
      puVar9 = PTR_DAT_06fda6b0;
      goto LAB_063eef48;
    }
    plVar14 = *(long **)(unaff_x20 + 0x10);
    if (plVar14 == (long *)0x0) goto LAB_063eeee8;
    lVar11 = *plVar14;
    lVar10 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) goto LAB_063eee50;
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
LAB_063eee40:
    puVar6 = (undefined8 *)FUN_02feb5b8(plVar14,lVar10,1);
    goto LAB_063eee60;
  }
  uVar12 = FUN_05a23b64();
  if ((uVar12 & 1) == 0) goto LAB_063eeeec;
  plVar14 = *(long **)(unaff_x20 + 0x10);
  if (plVar14 == (long *)0x0) goto LAB_063eeee8;
  lVar10 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_063eeeb8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_02feb5b8(plVar14,*(long *)puVar3,1);
LAB_063eeeb8:
  iVar5 = (*(code *)*puVar6)(plVar14,puVar6[1]);
  if (iVar5 == 0) {
    return;
  }
LAB_063eeec8:
  thunk_FUN_03037804(PTR_DAT_06f6d8e8);
  uVar7 = thunk_FUN_0301080c();
  puVar9 = PTR_DAT_06fda6a0;
LAB_063eef48:
  uVar8 = thunk_FUN_03037804(puVar9);
  FUN_05a64d00(uVar7,uVar8,0);
  uVar8 = thunk_FUN_03037804(PTR_DAT_06fda6c0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar7,uVar8);
LAB_063eee50:
  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
LAB_063eee60:
  iVar5 = (*(code *)*puVar6)(plVar14,puVar6[1]);
  lVar10 = (**(code **)(*unaff_x19 + 600))();
  if (lVar10 == 0) {
LAB_063eeee8:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (iVar5 == *(int *)(lVar10 + 0x18)) {
    return;
  }
  goto LAB_063eeec8;
}


