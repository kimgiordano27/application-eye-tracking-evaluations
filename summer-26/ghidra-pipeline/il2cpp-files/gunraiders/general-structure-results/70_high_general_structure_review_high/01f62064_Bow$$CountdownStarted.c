/*
FUNCTION_NAME: Bow$$CountdownStarted
ENTRY_POINT: 01f62064
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_15;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void Bow__CountdownStarted(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *unaff_x27;
  uint in_stack_00000008;
  
  lVar9 = thunk_FUN_01c496e0(*unaff_x21);
  FUN_035573d8(lVar9,0);
  lVar12 = **(long **)(*unaff_x27 + 0xb8);
  if (lVar12 == 0) goto LAB_01f626cc;
  if (*(int *)(lVar12 + 0x28) == 0x10) {
    bVar5 = true;
  }
  else {
    iVar6 = FUN_02197f80(*(undefined8 *)(lVar12 + 0x50),0);
    bVar5 = iVar6 == 8;
  }
  puVar4 = System_Collections_Generic_NullableComparer<T>_var;
  puVar15 = (undefined8 *)System_NullReferenceException_var;
  puVar16 = (undefined8 *)PTR_DAT_04239ad0;
  puVar3 = PTR_DAT_04239ab8;
  if (unaff_x22 == 0) {
    lVar12 = thunk_FUN_01c496e0(*(undefined8 *)System_Data_NameNode_var);
    FUN_0350971c(lVar12,0);
    puVar2 = PTR_DAT_0422fa08;
    if (**(long **)(*unaff_x27 + 0xb8) == 0) goto LAB_01f626cc;
    in_stack_00000008 =
         CONCAT31(in_stack_00000008._1_3_,*(undefined1 *)(**(long **)(*unaff_x27 + 0xb8) + 0x2c));
    uVar14 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,&stack0x00000008);
    if (lVar12 == 0) goto LAB_01f626cc;
    FUN_03509824(lVar12,*(undefined8 *)puVar4,uVar14,0);
    if (bVar5) {
LAB_01f62240:
      in_stack_00000008 = 0;
      uVar14 = *(undefined8 *)PTR_DAT_0422fd80;
    }
    else {
      if (**(long **)(*unaff_x27 + 0xb8) == 0) goto LAB_01f626cc;
      if (*(char *)(**(long **)(*unaff_x27 + 0xb8) + 0x2c) != '\0') goto LAB_01f62240;
      uVar14 = *(undefined8 *)PTR_DAT_0422fd80;
      in_stack_00000008 = 1;
    }
    uVar14 = thunk_FUN_01c49334(uVar14,&stack0x00000008);
    FUN_03509824(lVar12,*(undefined8 *)puVar3,uVar14,0);
    lVar10 = **(long **)(*unaff_x27 + 0xb8);
    if (lVar10 == 0) goto LAB_01f626cc;
    iVar6 = *(int *)(lVar10 + 0x28);
    if (iVar6 == 1) {
      lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_04239378 + 0xb8) + 8);
      if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x90), lVar10 == 0)) goto LAB_01f626cc;
      if (*(long *)(lVar10 + 0x18) == 0) {
        uVar14 = *unaff_x23;
      }
      else {
        uVar8 = FUN_03d4440c(0,*(long *)(lVar10 + 0x18),0);
        if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_01f626c8;
        uVar14 = *(undefined8 *)(lVar10 + (long)(int)uVar8 * 8 + 0x20);
      }
      FUN_03509824(lVar12,*(undefined8 *)System_Net_Sockets_NetworkStream_var,uVar14,0);
      in_stack_00000008 = in_stack_00000008 & 0xffffff00;
      uVar14 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&stack0x00000008);
      FUN_03509824(lVar12,*(undefined8 *)System_NonSerializedAttribute_var,uVar14,0);
      puVar16 = (undefined8 *)PTR_DAT_04239ad0;
    }
    else {
      if (iVar6 == 7) {
        uVar14 = *(undefined8 *)(lVar10 + 0x70);
LAB_01f622f8:
        FUN_03509824(lVar12,*(undefined8 *)System_Net_Sockets_NetworkStream_var,uVar14,0);
        if (**(long **)(*(long *)PTR_DAT_04239a10 + 0xb8) == 0) goto LAB_01f626cc;
        uVar14 = *(undefined8 *)puVar2;
        in_stack_00000008 =
             CONCAT31(in_stack_00000008._1_3_,
                      *(undefined1 *)(**(long **)(*(long *)PTR_DAT_04239a10 + 0xb8) + 0x222));
      }
      else {
        if (iVar6 == 3) {
          uVar14 = *(undefined8 *)(lVar10 + 0x50);
          goto LAB_01f622f8;
        }
        uVar14 = *(undefined8 *)puVar2;
        in_stack_00000008 = in_stack_00000008 & 0xffffff00;
      }
      uVar14 = thunk_FUN_01c49334(uVar14,&stack0x00000008);
      FUN_03509824(lVar12,*(undefined8 *)System_NonSerializedAttribute_var,uVar14,0);
    }
    in_stack_00000008 = CONCAT31(in_stack_00000008._1_3_,bVar5);
    uVar14 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&stack0x00000008);
    FUN_03509824(lVar12,*puVar16,uVar14,0);
    if (lVar9 == 0) goto LAB_01f626cc;
    *(long *)(lVar9 + 0x28) = lVar12;
    lVar10 = **(long **)(*unaff_x27 + 0xb8);
    if (lVar10 == 0) goto LAB_01f626cc;
    if (*(char *)(lVar10 + 0x7c) == '\0') {
      uVar14 = *(undefined8 *)puVar2;
      uVar11 = 1;
    }
    else {
      uVar11 = *(undefined1 *)(lVar10 + 0x60);
      uVar14 = *(undefined8 *)puVar2;
    }
    in_stack_00000008 = CONCAT31(in_stack_00000008._1_3_,uVar11);
    uVar14 = thunk_FUN_01c49334(uVar14,&stack0x00000008);
    puVar15 = (undefined8 *)System_NullReferenceException_var;
    FUN_03509824(lVar12,*(undefined8 *)System_NullReferenceException_var,uVar14,0);
  }
  else {
    if (**(long **)(*unaff_x27 + 0xb8) == 0) goto LAB_01f626cc;
    if ((*(int *)(**(long **)(*unaff_x27 + 0xb8) + 0x28) == 0x10) &&
       (iVar6 = FUN_03d4440c(0,100,0), iVar6 < 0x1e)) {
      uVar14 = *(undefined8 *)System_Collections_Generic_NullableEqualityComparer<T>_var;
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar14 = FUN_032e04b8(uVar14,0);
      if (*(int *)(*(long *)PTR_DAT_04235e88 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04235e88);
      }
      lVar12 = FUN_03305c08(uVar14,0);
      if (lVar12 == 0) goto LAB_01f626cc;
      uVar7 = FUN_032e9d44(lVar12,0);
      in_stack_00000008 = FUN_03d4440c(1,uVar7,0);
      thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&stack0x00000008);
      FUN_03509824();
    }
    if (lVar9 == 0) goto LAB_01f626cc;
    *(long *)(lVar9 + 0x28) = unaff_x22;
  }
  puVar2 = PTR_DAT_042396c0;
  lVar12 = **(long **)(*unaff_x27 + 0xb8);
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0x2c) == '\0') {
      if (bVar5) {
        lVar12 = *(long *)PTR_DAT_042396c0;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar12 = *(long *)puVar2;
        }
        if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_01f626cc;
        pbVar13 = (byte *)(**(long **)(lVar12 + 0xb8) + 0x32);
      }
      else {
        lVar10 = *(long *)PTR_DAT_042396c0;
        iVar6 = *(int *)(lVar12 + 0x58);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar10 = *(long *)puVar2;
        }
        lVar12 = **(long **)(lVar10 + 0xb8);
        if (lVar12 == 0) goto LAB_01f626cc;
        if (iVar6 == 0x2000) {
          pbVar13 = (byte *)(lVar12 + 0x33);
        }
        else {
          pbVar13 = (byte *)(lVar12 + 0x30);
        }
      }
    }
    else {
      lVar12 = *(long *)PTR_DAT_042396c0;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar12 = *(long *)puVar2;
      }
      if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_01f626cc;
      pbVar13 = (byte *)(**(long **)(lVar12 + 0xb8) + 0x31);
    }
    bVar1 = *pbVar13;
    *(undefined1 *)(lVar9 + 0x11) = 0;
    *(uint *)(lVar9 + 0x14) = (uint)bVar1;
    puVar2 = PTR_DAT_0422fd68;
    if (**(long **)(*unaff_x27 + 0xb8) != 0) {
      *(byte *)(lVar9 + 0x10) = *(byte *)(**(long **)(*unaff_x27 + 0xb8) + 0x7c) ^ 1;
      *(undefined1 *)(lVar9 + 0x42) = 1;
      lVar12 = FUN_01c5d2fc(*(undefined8 *)puVar2,0xe);
      if (lVar12 != 0) {
        uVar8 = *(uint *)(lVar12 + 0x18);
        if (((((uVar8 != 0) &&
              (*(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)object_var, uVar8 != 1)) &&
             (*(undefined8 *)(lVar12 + 0x28) =
                   *(undefined8 *)System_ComponentModel_NullableConverter_var, 2 < uVar8)) &&
            ((((*(undefined8 *)(lVar12 + 0x30) =
                     *(undefined8 *)UnityEngine_Rendering_ObjectParameter<T>_var, uVar8 != 3 &&
               (*(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)System_Net_Sockets_NetworkStream_var
               , 4 < uVar8)) &&
              ((*(undefined8 *)(lVar12 + 0x40) =
                     *(undefined8 *)System_Globalization_NumberFormatInfo_var, uVar8 != 5 &&
               ((*(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)puVar4, 6 < uVar8 &&
                (*(undefined8 *)(lVar12 + 0x50) =
                      *(undefined8 *)CodeStage_AntiCheat_ObscuredTypes_ObscuredBigInteger_var,
                uVar8 != 7)))))) &&
             (*(undefined8 *)(lVar12 + 0x58) = *(undefined8 *)puVar3, 8 < uVar8)))) &&
           ((((*(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)System_NonSerializedAttribute_var,
              uVar8 != 9 && (*(undefined8 *)(lVar12 + 0x68) = *puVar15, 10 < uVar8)) &&
             (*(undefined8 *)(lVar12 + 0x70) = *puVar16, uVar8 != 0xb)) &&
            ((*(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)System_Runtime_Remoting_ObjRef_var,
             0xc < uVar8 &&
             (*(undefined8 *)(lVar12 + 0x80) = *(undefined8 *)OVRGazePointer_var,
             puVar3 = PTR_DAT_04237a90, uVar8 != 0xd)))))) {
          *(undefined8 *)(lVar12 + 0x88) = *(undefined8 *)UnityEngine_Object_var;
          *(long *)(lVar9 + 0x30) = lVar12;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_0356c9fc();
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


