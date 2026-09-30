/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 01bbf5f4
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint in_w8;
  uint uVar12;
  int in_w9;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long *unaff_x20;
  int iVar16;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  int *piVar17;
  int unaff_w27;
  uint unaff_w28;
  ulong unaff_x29;
  long in_stack_00000000;
  long *in_stack_00000008;
  
  do {
    iVar16 = in_w9 << (ulong)(in_w8 & 0x1f);
    iVar9 = unaff_w27 * -0x10;
    do {
      lVar15 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_06e62878 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      sVar8 = FUN_01bbab78(unaff_w23);
      if (lVar15 == 0) goto LAB_01bbf848;
      if (*(uint *)(lVar15 + 0x18) <= (uint)(int)sVar8) goto LAB_01bbf844;
      unaff_w23 = unaff_w23 + 0x80;
      uVar5 = (ushort)iVar9;
      unaff_w27 = unaff_w27 + iVar16;
      iVar9 = iVar9 + iVar16 * -0x10;
      *(ushort *)(lVar15 + (long)sVar8 * 2 + 0x20) = (ushort)unaff_x29 | uVar5;
      puVar7 = PTR_DAT_06e179e8;
      puVar6 = PTR_DAT_06d95f40;
    } while (unaff_w23 < unaff_w24);
    do {
      unaff_x29 = unaff_x29 - 1;
      if (unaff_x29 < 10) {
        iVar16 = 0;
        goto LAB_01bbf680;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_x29) goto LAB_01bbf844;
      unaff_w24 = unaff_w28 & 0x1ff80;
      unaff_w28 = unaff_w28 -
                  (*(int *)(unaff_x22 + unaff_x29 * 4 + 0x20) <<
                  (ulong)(0x10U - (int)unaff_x29 & 0x1f));
      unaff_w23 = unaff_w28 & 0x1ff80;
    } while (unaff_w24 <= unaff_w23);
    in_w8 = (int)unaff_x29 + 0x17;
    in_w9 = 1;
  } while( true );
LAB_01bbf680:
  lVar15 = *in_stack_00000008;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar13 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
        puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_01bbf6cc;
      }
      uVar13 = uVar13 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar13 != 0);
  }
  puVar11 = (undefined8 *)FUN_015c2a80(in_stack_00000008,*(long *)puVar7,0);
LAB_01bbf6cc:
  iVar9 = (*(code *)*puVar11)(in_stack_00000008,puVar11[1]);
  if (iVar9 <= iVar16) {
    return;
  }
  lVar15 = *in_stack_00000008;
  uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar13 != 0) {
    piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
        puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_01bbf72c;
      }
      uVar13 = uVar13 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar13 != 0);
  }
  puVar11 = (undefined8 *)FUN_015c2a80(in_stack_00000008,*(long *)puVar6,0);
LAB_01bbf72c:
  uVar10 = (*(code *)*puVar11)(in_stack_00000008,iVar16,puVar11[1]);
  uVar2 = uVar10 & 0xff;
  if ((uVar10 & 0xff) != 0) {
    if (*(uint *)(in_stack_00000000 + 0x18) <= uVar2) {
LAB_01bbf844:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    piVar17 = (int *)(in_stack_00000000 + (ulong)uVar2 * 4 + 0x20);
    iVar9 = *piVar17;
    if (*(int *)(*(long *)PTR_DAT_06e62878 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    sVar8 = FUN_01bbab78(iVar9);
    lVar15 = *unaff_x20;
    uVar12 = (uint)sVar8;
    uVar5 = (ushort)uVar2 | (ushort)(iVar16 << 4);
    iVar3 = 1 << (ulong)(uVar10 & 0x1f);
    if (uVar2 < 10) {
      if (lVar15 == 0) goto LAB_01bbf848;
      uVar10 = *(uint *)(lVar15 + 0x18);
      do {
        if (uVar10 <= uVar12) goto LAB_01bbf844;
        lVar1 = (long)(int)uVar12;
        uVar12 = uVar12 + iVar3;
        *(ushort *)(lVar15 + lVar1 * 2 + 0x20) = uVar5;
      } while ((int)uVar12 < 0x200);
    }
    else {
      if (lVar15 == 0) {
LAB_01bbf848:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar10 = *(uint *)(lVar15 + 0x18);
      if (uVar10 <= (uVar12 & 0x1ff)) goto LAB_01bbf844;
      uVar14 = (uint)*(short *)(lVar15 + (ulong)(uVar12 & 0x1ff) * 2 + 0x20);
      do {
        uVar4 = -((int)uVar14 >> 4) | (int)uVar12 >> 9;
        if (uVar10 <= uVar4) goto LAB_01bbf844;
        uVar12 = uVar12 + iVar3;
        *(ushort *)(lVar15 + (long)(int)uVar4 * 2 + 0x20) = uVar5;
      } while ((int)uVar12 < 1 << (ulong)(uVar14 & 0xf));
    }
    if (*(uint *)(in_stack_00000000 + 0x18) <= uVar2) goto LAB_01bbf844;
    *piVar17 = iVar9 + (1 << (ulong)(0x10 - uVar2 & 0x1f));
  }
  iVar16 = iVar16 + 1;
  goto LAB_01bbf680;
}


