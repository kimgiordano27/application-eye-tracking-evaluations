/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 05ac850c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long in_x9;
  ulong uVar11;
  uint *puVar12;
  int iVar13;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  long lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  uVar4 = (**(code **)(in_x9 + 0x328))(param_1,param_2,*(undefined8 *)(in_x9 + 0x330));
  lVar9 = unaff_x19[2];
  if (lVar9 != 0) {
    uVar4 = uVar4 & 0x7fffffff;
    uVar11 = *(ulong *)(lVar9 + 0x18);
    uVar2 = unaff_w23 - 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uVar4 * 0x65) / uVar2;
    }
    uVar17 = 0;
    uVar10 = (uint)uVar11;
    if (uVar10 != 0) {
      uVar17 = uVar4 / uVar10;
    }
    iVar16 = 0;
    uVar15 = 0xffffffff;
    uVar17 = uVar4 - uVar17 * uVar10;
    do {
      if (uVar15 == 0xffffffff) {
        if ((uint)uVar11 <= uVar17) goto LAB_05ac87e4;
        if (*(long *)(lVar9 + (long)(int)uVar17 * 0x18 + 0x20) == lVar9) {
          uVar15 = uVar17;
          if (-1 < *(int *)(lVar9 + (long)(int)uVar17 * 0x18 + 0x30)) {
            uVar15 = 0xffffffff;
          }
        }
        else {
          uVar15 = 0xffffffff;
        }
      }
      if ((uint)uVar11 <= uVar17) goto LAB_05ac87e4;
      lVar14 = (long)(int)uVar17;
      lVar8 = *(long *)(lVar9 + lVar14 * 0x18 + 0x20);
      if ((lVar8 == 0) ||
         ((uVar10 = *(uint *)(lVar9 + lVar14 * 0x18 + 0x30), lVar8 == lVar9 && (-1 < (int)uVar10))))
      {
        if (uVar15 != 0xffffffff) {
          uVar17 = uVar15;
        }
        thunk_FUN_02fc2c1c();
        lVar9 = unaff_x19[2];
        *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
        if (lVar9 == 0) goto LAB_05ac87e8;
        if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_05ac87e4;
        lVar14 = (long)(int)uVar17;
        *(undefined8 *)(lVar9 + lVar14 * 0x18 + 0x28) = unaff_x21;
        thunk_FUN_03048534();
        lVar9 = unaff_x19[2];
        if (lVar9 == 0) goto LAB_05ac87e8;
        if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_05ac87e4;
        *(undefined8 *)(lVar9 + lVar14 * 0x18 + 0x20) = unaff_x20;
        thunk_FUN_03048534();
        lVar9 = unaff_x19[2];
        if (lVar9 == 0) goto LAB_05ac87e8;
        if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_05ac87e4;
        lVar9 = lVar9 + lVar14 * 0x18;
        goto LAB_05ac8758;
      }
      if (((uVar10 & 0x7fffffff) == uVar4) &&
         (uVar11 = (**(code **)(*unaff_x19 + 0x358))(), (uVar11 & 1) != 0)) {
        if ((unaff_x22 & 1) != 0) {
          lVar9 = unaff_x19[2];
          FUN_02b03c7c(lVar9);
          puVar7 = (undefined8 *)FUN_02f102c8(lVar9,lVar14);
          uVar6 = *puVar7;
          uVar5 = thunk_FUN_03037804(PTR_DAT_06fac5d0);
          uVar5 = FUN_05954c70(uVar5,uVar6);
          thunk_FUN_03037804(PTR_DAT_06f6d8e8);
          uVar6 = thunk_FUN_0301080c();
          FUN_05a64d00(uVar6,uVar5,0);
          uVar5 = thunk_FUN_03037804(PTR_DAT_06faca80);
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar6,uVar5);
        }
        thunk_FUN_02fc2c1c();
        lVar9 = unaff_x19[2];
        *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
        if (lVar9 == 0) goto LAB_05ac87e8;
        if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_05ac87e4;
        *(undefined8 *)(lVar9 + lVar14 * 0x18 + 0x28) = unaff_x21;
        thunk_FUN_03048534();
        goto LAB_05ac8770;
      }
      lVar9 = unaff_x19[2];
      if (uVar15 == 0xffffffff) {
        if (lVar9 == 0) goto LAB_05ac87e8;
        if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_05ac87e4;
        puVar12 = (uint *)(lVar9 + lVar14 * 0x18 + 0x30);
        uVar17 = *puVar12;
        if (-1 < (int)uVar17) {
          *puVar12 = uVar17 | 0x80000000;
          *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
        }
      }
      else if (lVar9 == 0) goto LAB_05ac87e8;
      lVar14 = lVar14 + (ulong)((uVar4 * 0x65 - uVar3 * uVar2) + 1);
      iVar16 = iVar16 + 1;
      uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      iVar1 = 0;
      if (uVar11 != 0) {
        iVar1 = (int)(lVar14 / (long)uVar11);
      }
      iVar13 = (int)*(ulong *)(lVar9 + 0x18);
      uVar17 = (int)lVar14 - iVar1 * iVar13;
    } while (iVar16 < iVar13);
    if (uVar15 == 0xffffffff) {
      thunk_FUN_03037804(PTR_DAT_06f6d640);
      uVar5 = thunk_FUN_0301080c();
      uVar6 = thunk_FUN_03037804(PTR_DAT_06faca78);
      FUN_05aeefcc(uVar5,uVar6,0);
      uVar6 = thunk_FUN_03037804(PTR_DAT_06faca80);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar5,uVar6);
    }
    thunk_FUN_02fc2c1c();
    lVar9 = unaff_x19[2];
    *(undefined1 *)((long)unaff_x19 + 0x2c) = 1;
    if (lVar9 != 0) {
      if (uVar15 < *(uint *)(lVar9 + 0x18)) {
        lVar14 = (long)(int)uVar15;
        *(undefined8 *)(lVar9 + lVar14 * 0x18 + 0x28) = unaff_x21;
        thunk_FUN_03048534();
        lVar9 = unaff_x19[2];
        if (lVar9 == 0) goto LAB_05ac87e8;
        if (uVar15 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + lVar14 * 0x18 + 0x20) = unaff_x20;
          thunk_FUN_03048534();
          lVar9 = unaff_x19[2];
          if (lVar9 == 0) goto LAB_05ac87e8;
          if (uVar15 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + lVar14 * 0x18;
LAB_05ac8758:
            *(uint *)(lVar9 + 0x30) = *(uint *)(lVar9 + 0x30) | uVar4;
            *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + 1;
LAB_05ac8770:
            lVar9 = unaff_x19[5];
            thunk_FUN_02fc2c1c();
            thunk_FUN_02fc2c1c();
            *(int *)(unaff_x19 + 5) = (int)lVar9 + 1;
            thunk_FUN_02fc2c1c();
            *(undefined1 *)((long)unaff_x19 + 0x2c) = 0;
            return;
          }
        }
      }
LAB_05ac87e4:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  }
LAB_05ac87e8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


