/*
FUNCTION_NAME: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$WriteArray
ENTRY_POINT: 02fded98
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;strong_file_logging_hits_6;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArray
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  
  if ((DAT_03ef3984 & 1) == 0) {
    FUN_01c5c92c(PTR_byte___TypeInfo_03cb5e48);
    FUN_01c5c92c(PTR_System_Runtime_Serialization_Formatters_Binary_Converter_TypeInfo_03cbbb08);
    FUN_01c5c92c(PTR_int___TypeInfo_03cb7b90);
    FUN_01c5c92c(PTR_object___TypeInfo_03cb62b8);
    DAT_03ef3984 = 1;
  }
  lVar9 = param_3;
  if (((param_3 == 0) &&
      (lVar9 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                         (param_1,param_2), lVar9 == 0)) ||
     (*(undefined1 *)(lVar9 + 0x39) = 1, param_2 == 0)) goto LAB_02fdf4ac;
  uVar25 = *(undefined8 *)(param_2 + 0x68);
  plVar23 = *(long **)(param_2 + 0x18);
  *(undefined8 *)(lVar9 + 0x18) = uVar25;
  if (plVar23 != (long *)0x0) {
    bVar6 = *(byte *)(*(long *)(PTR_DAT_03cb5cf0 + 0xa0) + 0x130);
    if ((*(byte *)(*plVar23 + 0x130) < bVar6) ||
       (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar6 * 8 + -8) !=
        *(long *)(PTR_DAT_03cb5cf0 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cf54(plVar23);
    }
  }
  plVar10 = *(long **)(param_2 + 0x20);
  if ((plVar10 == (long *)0x0) ||
     (lVar11 = (**(code **)(*plVar10 + 0x408))(plVar10,*(undefined8 *)(*plVar10 + 0x410)),
     lVar11 == 0)) goto LAB_02fdf4ac;
  uVar12 = System_Type__get_IsPrimitive(lVar11,0);
  if ((uVar12 & 1) == 0) {
    lVar24 = System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__Serialize
                       (lVar11,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x70));
    uVar14 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetAssemblyId
                       (param_1,lVar24);
    if (lVar24 == 0) goto LAB_02fdf4ac;
    *(undefined8 *)(lVar24 + 0x70) = uVar14;
    lVar13 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                       (param_1,lVar24);
  }
  else {
    uVar7 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__ToCode(param_1,lVar11);
    lVar13 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                       (param_1,lVar11,0,uVar7,0);
    lVar24 = 0;
  }
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x30) == 0)) goto LAB_02fdf4ac;
  bVar6 = System_Type__get_IsArray(*(long *)(lVar13 + 0x30),0);
  *(undefined8 *)(lVar9 + 0x18) = uVar25;
  *(byte *)(lVar13 + 0x39) = bVar6 & 1;
  *(undefined8 *)(lVar13 + 0x18) = uVar25;
  *(undefined1 *)(lVar9 + 0x39) = 1;
  *(undefined2 *)(lVar13 + 0x3b) = *(undefined2 *)(lVar9 + 0x3b);
  *(undefined1 *)(lVar13 + 0x3d) = *(undefined1 *)(lVar9 + 0x3d);
  puVar3 = PTR_int___TypeInfo_03cb7b90;
  if (plVar23 == (long *)0x0) goto LAB_02fdf4ac;
  uVar8 = System_Array__get_Rank(plVar23,0);
  lVar15 = FUN_01c5ca18(*(undefined8 *)puVar3,uVar8);
  lVar16 = FUN_01c5ca18(*(undefined8 *)puVar3,uVar8);
  lVar17 = FUN_01c5ca18(*(undefined8 *)puVar3,uVar8);
  if (0 < (int)uVar8) {
    uVar12 = 0;
    do {
      uVar7 = System_Array__GetLength(plVar23,uVar12 & 0xffffffff,0);
      if (lVar15 == 0) goto LAB_02fdf4ac;
      if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_02fdf42c;
      *(undefined4 *)(lVar15 + 0x20 + uVar12 * 4) = uVar7;
      uVar7 = System_Array__GetLowerBound(plVar23,uVar12 & 0xffffffff,0);
      if (lVar16 == 0) goto LAB_02fdf4ac;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_02fdf42c;
      *(undefined4 *)(lVar16 + 0x20 + uVar12 * 4) = uVar7;
      uVar7 = System_Array__GetUpperBound(plVar23,uVar12 & 0xffffffff,0);
      if (lVar17 == 0) goto LAB_02fdf4ac;
      if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_02fdf42c;
      *(undefined4 *)(lVar17 + 0x20 + uVar12 * 4) = uVar7;
      uVar12 = uVar12 + 1;
    } while (uVar8 != uVar12);
  }
  puVar3 = PTR_System_Runtime_Serialization_Formatters_Binary_Converter_TypeInfo_03cbbb08;
  lVar18 = *(long *)PTR_System_Runtime_Serialization_Formatters_Binary_Converter_TypeInfo_03cbbb08;
  bVar4 = uVar8 != 1;
  uVar7 = 2;
  if (bVar4) {
    uVar7 = 3;
  }
  uVar21 = 3;
  if (!bVar4) {
    uVar21 = 1;
  }
  bVar5 = *(char *)(lVar13 + 0x39) != '\0';
  iVar1 = *(int *)(lVar18 + 0xe4);
  if (!bVar5) {
    uVar7 = uVar21;
  }
  *(undefined4 *)(lVar13 + 0x40) = uVar7;
  if (iVar1 == 0) {
    thunk_FUN_01cb0d4c();
    lVar18 = *(long *)puVar3;
  }
  lVar19 = *(long *)(lVar18 + 0xb8);
  if ((uVar8 == 1) && (lVar11 == *(long *)(lVar19 + 0x50))) {
    if (lVar16 == 0) goto LAB_02fdf4ac;
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_02fdf42c;
    if (*(int *)(lVar16 + 0x20) == 0) {
      if (lVar15 != 0) {
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_02fdf42c;
        lVar11 = *(long *)(param_1 + 0x40);
        if (lVar11 != 0) {
          uVar7 = *(undefined4 *)(lVar15 + 0x20);
          uVar25 = *(undefined8 *)PTR_byte___TypeInfo_03cb5e48;
          lVar15 = thunk_FUN_01c8fb4c(plVar23,uVar25);
          if (lVar15 != 0) {
            System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteObjectByteArray
                      (lVar11,lVar9,lVar9,lVar24,lVar13,uVar7,0,lVar15,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01c5cf54(plVar23,uVar25);
        }
      }
      goto LAB_02fdf4ac;
    }
  }
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
    lVar19 = *(long *)(*(long *)puVar3 + 0xb8);
  }
  if ((lVar11 == *(long *)(lVar19 + 0xc0)) ||
     (lVar18 = System_Nullable__GetUnderlyingType(lVar11,0), lVar18 != 0)) {
    *(undefined1 *)(lVar9 + 0x3c) = 1;
    *(undefined1 *)(lVar13 + 0x3c) = 1;
  }
  if (*(long *)(param_1 + 0x68) == 0) goto LAB_02fdf4ac;
  if ((*(byte *)(*(long *)(param_1 + 0x68) + 0x10) & 1) != 0) {
    *(undefined1 *)(lVar9 + 0x3b) = 1;
    *(undefined1 *)(lVar13 + 0x3b) = 1;
  }
  if (bVar5 || bVar4) {
    lVar11 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(lVar9 + 0x18) = uVar25;
    if (bVar5 && !bVar4) {
      if (lVar15 == 0) goto LAB_02fdf4ac;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_02fdf42c;
      if (lVar16 == 0) goto LAB_02fdf4ac;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_02fdf42c;
      if (lVar11 == 0) goto LAB_02fdf4ac;
      System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray
                (lVar11,lVar9,lVar9,lVar24,lVar13,*(undefined4 *)(lVar15 + 0x20),
                 *(undefined4 *)(lVar16 + 0x20),0);
      uVar25 = *(undefined8 *)PTR_object___TypeInfo_03cb62b8;
      lVar11 = thunk_FUN_01c8fb4c(plVar23,uVar25);
      if (lVar11 != 0) {
        if (*(int *)(lVar16 + 0x18) != 0) {
          if (lVar17 == 0) goto LAB_02fdf4ac;
          if (*(int *)(lVar17 + 0x18) != 0) {
            lVar24 = (long)*(int *)(lVar16 + 0x20);
            do {
              if (*(int *)(lVar17 + 0x20) + 1 <= lVar24) goto LAB_02fdf268;
              if (*(uint *)(lVar11 + 0x18) <= (uint)lVar24) break;
              System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArrayMember
                        (param_1,param_2,lVar13,*(undefined8 *)(lVar11 + 0x20 + lVar24 * 8));
              lVar24 = lVar24 + 1;
            } while (*(int *)(lVar17 + 0x18) != 0);
          }
        }
        goto LAB_02fdf42c;
      }
      goto LAB_02fdf4b8;
    }
    if (lVar11 == 0) goto LAB_02fdf4ac;
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteRectangleArray
              (lVar11,lVar9,lVar9,lVar24,lVar13,uVar8,lVar15,lVar16,0);
    if (0 < (int)uVar8) {
      if (lVar15 == 0) goto LAB_02fdf4ac;
      iVar1 = *(int *)(lVar15 + 0x18);
      piVar20 = (int *)(lVar15 + 0x20);
      uVar2 = uVar8;
      do {
        if (iVar1 == 0) goto LAB_02fdf42c;
        if (*piVar20 == 0) goto LAB_02fdf308;
        uVar2 = uVar2 - 1;
        piVar20 = piVar20 + 1;
        iVar1 = iVar1 + -1;
      } while (uVar2 != 0);
    }
    System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteRectangle
              (param_1,param_2,uVar8,lVar15,plVar23,lVar13,lVar16);
LAB_02fdf308:
    lVar11 = *(long *)(param_1 + 0x40);
joined_r0x02fdf30c:
    if (lVar11 == 0) goto LAB_02fdf4ac;
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteItemEnd(lVar11,0);
  }
  else {
    if (lVar15 == 0) goto LAB_02fdf4ac;
    if (*(int *)(lVar15 + 0x18) == 0) goto LAB_02fdf42c;
    if (lVar16 == 0) goto LAB_02fdf4ac;
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_02fdf42c;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_02fdf4ac;
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteSingleArray
              (*(long *)(param_1 + 0x40),lVar9,lVar9,lVar24,lVar13,*(undefined4 *)(lVar15 + 0x20),
               *(undefined4 *)(lVar16 + 0x20),plVar23,0);
    uVar7 = *(undefined4 *)(lVar13 + 0x28);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar12 = System_Runtime_Serialization_Formatters_Binary_Converter__IsWriteAsByteArray(uVar7,0);
    if ((uVar12 & 1) == 0) {
LAB_02fdf1ac:
      uVar12 = System_Type__get_IsValueType(lVar11,0);
      lVar11 = 0;
      if ((uVar12 & 1) == 0) {
        uVar25 = *(undefined8 *)PTR_object___TypeInfo_03cb62b8;
        lVar11 = thunk_FUN_01c8fb4c(plVar23,uVar25);
        if (lVar11 == 0) {
LAB_02fdf4b8:
                    /* WARNING: Subroutine does not return */
          FUN_01c5cf54(plVar23,uVar25);
        }
      }
      if (lVar17 == 0) goto LAB_02fdf4ac;
      if ((*(int *)(lVar17 + 0x18) == 0) || (*(int *)(lVar16 + 0x18) == 0)) {
LAB_02fdf42c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      uVar8 = *(uint *)(lVar16 + 0x20);
      iVar1 = *(int *)(lVar17 + 0x20) + 1;
      if ((int)uVar8 < iVar1) {
        lVar24 = (long)iVar1 - (long)(int)uVar8;
        puVar22 = (undefined8 *)(lVar11 + (long)(int)uVar8 * 8 + 0x20);
        do {
          if (lVar11 == 0) {
            uVar25 = System_Array__GetValue(plVar23,uVar8,0);
          }
          else {
            if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_02fdf42c;
            uVar25 = *puVar22;
          }
          System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArrayMember
                    (param_1,param_2,lVar13,uVar25);
          lVar24 = lVar24 + -1;
          puVar22 = puVar22 + 1;
          uVar8 = uVar8 + 1;
        } while (lVar24 != 0);
      }
LAB_02fdf268:
      lVar11 = *(long *)(param_1 + 0x40);
      goto joined_r0x02fdf30c;
    }
    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_02fdf42c;
    if (*(int *)(lVar16 + 0x20) != 0) goto LAB_02fdf1ac;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteObjectEnd
              (*(long *)(param_1 + 0x40),lVar9,lVar9,0);
    if (*(long *)(param_1 + 0xb8) != 0) {
      System_Runtime_Serialization_Formatters_Binary_SerStack__Push
                (*(long *)(param_1 + 0xb8),lVar13);
      if (param_3 != 0) {
        return;
      }
      if (*(long *)(param_1 + 0xb8) != 0) {
        System_Runtime_Serialization_Formatters_Binary_SerStack__Push
                  (*(long *)(param_1 + 0xb8),lVar9);
        return;
      }
    }
  }
LAB_02fdf4ac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


