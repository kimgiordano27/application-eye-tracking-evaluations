/*
FUNCTION_NAME: Bow$$UpdateStringPositions
ENTRY_POINT: 01f61ea0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_15;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void Bow__UpdateStringPositions(undefined8 param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  long lVar15;
  byte *pbVar16;
  long unaff_x21;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  puVar3 = PTR_DAT_04230f30;
  if ((*(byte *)(unaff_x21 + 0x969) & 1) == 0) {
    FUN_01c5d288(System_Collections_Generic_NullableEqualityComparer<T>_var);
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(PTR_DAT_042396c0);
    FUN_01c5d288(PTR_DAT_04239ed0);
    FUN_01c5d288(PTR_DAT_04235e88);
    FUN_01c5d288(PTR_DAT_04239378);
    FUN_01c5d288(System_Data_NameNode_var);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_04239a10);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(System_Nullable<T>_var);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(System_Net_Sockets_NetworkStream_var);
    FUN_01c5d288(System_NonSerializedAttribute_var);
    FUN_01c5d288(System_NullReferenceException_var);
    FUN_01c5d288(System_Globalization_NumberFormatInfo_var);
    FUN_01c5d288(System_Collections_Generic_NullableComparer<T>_var);
    FUN_01c5d288(OVRGazePointer_var);
    FUN_01c5d288(System_Runtime_Remoting_ObjRef_var);
    FUN_01c5d288(PTR_DAT_04239ab8);
    FUN_01c5d288(object_var);
    FUN_01c5d288(PTR_DAT_04230f30);
    FUN_01c5d288(UnityEngine_Object_var);
    FUN_01c5d288(UnityEngine_Rendering_ObjectParameter<T>_var);
    FUN_01c5d288(PTR_DAT_04239ad0);
    FUN_01c5d288(System_ComponentModel_NullableConverter_var);
    FUN_01c5d288(CodeStage_AntiCheat_ObscuredTypes_ObscuredBigInteger_var);
    *(undefined1 *)(unaff_x21 + 0x969) = 1;
  }
  puVar4 = System_Nullable<T>_var;
  puVar5 = PTR_DAT_04239ed0;
  uStack000000000000000c = 0;
  uVar11 = thunk_FUN_03152714(param_1,*(undefined8 *)puVar3,0);
  if ((uVar11 & 1) != 0) {
    uStack000000000000000c = FUN_03d4440c(10000,99999,0);
    param_1 = FUN_032cf308(&stack0x0000000c,0);
  }
  lVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
  FUN_035573d8(lVar12,0);
  lVar15 = **(long **)(*(long *)puVar5 + 0xb8);
  if (lVar15 == 0) goto LAB_01f626cc;
  if (*(int *)(lVar15 + 0x28) == 0x10) {
    bVar7 = true;
  }
  else {
    iVar8 = FUN_02197f80(*(undefined8 *)(lVar15 + 0x50),0);
    bVar7 = iVar8 == 8;
  }
  puVar6 = System_Collections_Generic_NullableComparer<T>_var;
  puVar18 = (undefined8 *)System_NullReferenceException_var;
  puVar19 = (undefined8 *)PTR_DAT_04239ad0;
  puVar4 = PTR_DAT_04239ab8;
  if (param_2 == 0) {
    lVar15 = thunk_FUN_01c496e0(*(undefined8 *)System_Data_NameNode_var);
    FUN_0350971c(lVar15,0);
    puVar2 = PTR_DAT_0422fa08;
    if (**(long **)(*(long *)puVar5 + 0xb8) == 0) goto LAB_01f626cc;
    in_stack_00000008 =
         CONCAT31(in_stack_00000008._1_3_,
                  *(undefined1 *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x2c));
    uVar17 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,&stack0x00000008);
    if (lVar15 == 0) goto LAB_01f626cc;
    FUN_03509824(lVar15,*(undefined8 *)puVar6,uVar17,0);
    if (bVar7) {
LAB_01f62240:
      in_stack_00000008 = 0;
      uVar17 = *(undefined8 *)PTR_DAT_0422fd80;
    }
    else {
      if (**(long **)(*(long *)puVar5 + 0xb8) == 0) goto LAB_01f626cc;
      if (*(char *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x2c) != '\0') goto LAB_01f62240;
      uVar17 = *(undefined8 *)PTR_DAT_0422fd80;
      in_stack_00000008 = 1;
    }
    uVar17 = thunk_FUN_01c49334(uVar17,&stack0x00000008);
    FUN_03509824(lVar15,*(undefined8 *)puVar4,uVar17,0);
    lVar13 = **(long **)(*(long *)puVar5 + 0xb8);
    if (lVar13 == 0) goto LAB_01f626cc;
    iVar8 = *(int *)(lVar13 + 0x28);
    if (iVar8 == 1) {
      lVar13 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
      if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x90), lVar13 == 0)) goto LAB_01f626cc;
      if (*(long *)(lVar13 + 0x18) == 0) {
        uVar17 = *(undefined8 *)puVar3;
      }
      else {
        uVar10 = FUN_03d4440c(0,*(long *)(lVar13 + 0x18),0);
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_01f626c8;
        uVar17 = *(undefined8 *)(lVar13 + (long)(int)uVar10 * 8 + 0x20);
      }
      FUN_03509824(lVar15,*(undefined8 *)System_Net_Sockets_NetworkStream_var,uVar17,0);
      in_stack_00000008 = in_stack_00000008 & 0xffffff00;
      uVar17 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&stack0x00000008);
      FUN_03509824(lVar15,*(undefined8 *)System_NonSerializedAttribute_var,uVar17,0);
      puVar19 = (undefined8 *)PTR_DAT_04239ad0;
    }
    else {
      if (iVar8 == 7) {
        uVar17 = *(undefined8 *)(lVar13 + 0x70);
LAB_01f622f8:
        FUN_03509824(lVar15,*(undefined8 *)System_Net_Sockets_NetworkStream_var,uVar17,0);
        if (**(long **)(*(long *)PTR_DAT_04239a10 + 0xb8) == 0) goto LAB_01f626cc;
        uVar17 = *(undefined8 *)puVar2;
        in_stack_00000008 =
             CONCAT31(in_stack_00000008._1_3_,
                      *(undefined1 *)(**(long **)(*(long *)PTR_DAT_04239a10 + 0xb8) + 0x222));
      }
      else {
        if (iVar8 == 3) {
          uVar17 = *(undefined8 *)(lVar13 + 0x50);
          goto LAB_01f622f8;
        }
        uVar17 = *(undefined8 *)puVar2;
        in_stack_00000008 = in_stack_00000008 & 0xffffff00;
      }
      uVar17 = thunk_FUN_01c49334(uVar17,&stack0x00000008);
      FUN_03509824(lVar15,*(undefined8 *)System_NonSerializedAttribute_var,uVar17,0);
    }
    in_stack_00000008 = CONCAT31(in_stack_00000008._1_3_,bVar7);
    uVar17 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&stack0x00000008);
    FUN_03509824(lVar15,*puVar19,uVar17,0);
    if (lVar12 == 0) goto LAB_01f626cc;
    *(long *)(lVar12 + 0x28) = lVar15;
    lVar13 = **(long **)(*(long *)puVar5 + 0xb8);
    if (lVar13 == 0) goto LAB_01f626cc;
    if (*(char *)(lVar13 + 0x7c) == '\0') {
      uVar17 = *(undefined8 *)puVar2;
      uVar14 = 1;
    }
    else {
      uVar14 = *(undefined1 *)(lVar13 + 0x60);
      uVar17 = *(undefined8 *)puVar2;
    }
    in_stack_00000008 = CONCAT31(in_stack_00000008._1_3_,uVar14);
    uVar17 = thunk_FUN_01c49334(uVar17,&stack0x00000008);
    puVar18 = (undefined8 *)System_NullReferenceException_var;
    FUN_03509824(lVar15,*(undefined8 *)System_NullReferenceException_var,uVar17,0);
  }
  else {
    if (**(long **)(*(long *)puVar5 + 0xb8) == 0) goto LAB_01f626cc;
    if ((*(int *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x28) == 0x10) &&
       (iVar8 = FUN_03d4440c(0,100,0), iVar8 < 0x1e)) {
      uVar17 = *(undefined8 *)System_Collections_Generic_NullableEqualityComparer<T>_var;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar17 = FUN_032e04b8(uVar17,0);
      if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04235e88);
      }
      lVar15 = FUN_03305c08(uVar17,0);
      if (lVar15 == 0) goto LAB_01f626cc;
      uVar9 = FUN_032e9d44(lVar15,0);
      in_stack_00000008 = FUN_03d4440c(1,uVar9,0);
      uVar17 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&stack0x00000008);
      FUN_03509824(param_2,*(undefined8 *)CodeStage_AntiCheat_ObscuredTypes_ObscuredBigInteger_var,
                   uVar17,0);
    }
    if (lVar12 == 0) goto LAB_01f626cc;
    *(long *)(lVar12 + 0x28) = param_2;
  }
  puVar3 = PTR_DAT_042396c0;
  lVar15 = **(long **)(*(long *)puVar5 + 0xb8);
  if (lVar15 != 0) {
    if (*(char *)(lVar15 + 0x2c) == '\0') {
      if (bVar7) {
        lVar15 = *(long *)PTR_DAT_042396c0;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar15 = *(long *)puVar3;
        }
        if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_01f626cc;
        pbVar16 = (byte *)(**(long **)(lVar15 + 0xb8) + 0x32);
      }
      else {
        lVar13 = *(long *)PTR_DAT_042396c0;
        iVar8 = *(int *)(lVar15 + 0x58);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar13 = *(long *)puVar3;
        }
        lVar15 = **(long **)(lVar13 + 0xb8);
        if (lVar15 == 0) goto LAB_01f626cc;
        if (iVar8 == 0x2000) {
          pbVar16 = (byte *)(lVar15 + 0x33);
        }
        else {
          pbVar16 = (byte *)(lVar15 + 0x30);
        }
      }
    }
    else {
      lVar15 = *(long *)PTR_DAT_042396c0;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar15 = *(long *)puVar3;
      }
      if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_01f626cc;
      pbVar16 = (byte *)(**(long **)(lVar15 + 0xb8) + 0x31);
    }
    bVar1 = *pbVar16;
    *(undefined1 *)(lVar12 + 0x11) = 0;
    *(uint *)(lVar12 + 0x14) = (uint)bVar1;
    puVar3 = PTR_DAT_0422fd68;
    if (**(long **)(*(long *)puVar5 + 0xb8) != 0) {
      *(byte *)(lVar12 + 0x10) = *(byte *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x7c) ^ 1;
      *(undefined1 *)(lVar12 + 0x42) = 1;
      lVar15 = FUN_01c5d2fc(*(undefined8 *)puVar3,0xe);
      if (lVar15 != 0) {
        uVar10 = *(uint *)(lVar15 + 0x18);
        if (((((uVar10 != 0) &&
              (*(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)object_var, uVar10 != 1)) &&
             (*(undefined8 *)(lVar15 + 0x28) =
                   *(undefined8 *)System_ComponentModel_NullableConverter_var, 2 < uVar10)) &&
            ((((*(undefined8 *)(lVar15 + 0x30) =
                     *(undefined8 *)UnityEngine_Rendering_ObjectParameter<T>_var, uVar10 != 3 &&
               (*(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)System_Net_Sockets_NetworkStream_var
               , 4 < uVar10)) &&
              ((*(undefined8 *)(lVar15 + 0x40) =
                     *(undefined8 *)System_Globalization_NumberFormatInfo_var, uVar10 != 5 &&
               ((*(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)puVar6, 6 < uVar10 &&
                (*(undefined8 *)(lVar15 + 0x50) =
                      *(undefined8 *)CodeStage_AntiCheat_ObscuredTypes_ObscuredBigInteger_var,
                uVar10 != 7)))))) &&
             (*(undefined8 *)(lVar15 + 0x58) = *(undefined8 *)puVar4, 8 < uVar10)))) &&
           ((((*(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)System_NonSerializedAttribute_var,
              uVar10 != 9 && (*(undefined8 *)(lVar15 + 0x68) = *puVar18, 10 < uVar10)) &&
             (*(undefined8 *)(lVar15 + 0x70) = *puVar19, uVar10 != 0xb)) &&
            ((*(undefined8 *)(lVar15 + 0x78) = *(undefined8 *)System_Runtime_Remoting_ObjRef_var,
             0xc < uVar10 &&
             (*(undefined8 *)(lVar15 + 0x80) = *(undefined8 *)OVRGazePointer_var,
             puVar3 = PTR_DAT_04237a90, uVar10 != 0xd)))))) {
          *(undefined8 *)(lVar15 + 0x88) = *(undefined8 *)UnityEngine_Object_var;
          *(long *)(lVar12 + 0x30) = lVar15;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_0356c9fc(param_1,lVar12,0,param_3,0);
          return;
        }
LAB_01f626c8:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
    }
  }
LAB_01f626cc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


