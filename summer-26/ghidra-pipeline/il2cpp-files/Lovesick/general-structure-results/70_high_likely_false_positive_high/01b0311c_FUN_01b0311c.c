/*
FUNCTION_NAME: FUN_01b0311c
ENTRY_POINT: 01b0311c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01b0311c(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_MoveNext__
  ;
  if ((DAT_0377d207 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9703);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB_MeshPivotLocation_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0aa0);
    thunk_FUN_00d48444(Method_UnityEngine_XR_InputDevices_GetDevicesAtXRNode__);
    thunk_FUN_00d48444(System_Xml_XmlName___TypeInfo);
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43_TypeInfo
                      );
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_s32__);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_MoveNext__
                      );
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(PTR_DAT_033ef3d0);
    thunk_FUN_00d48444(StringLiteral_3256);
    thunk_FUN_00d48444(StringLiteral_2628);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__);
    thunk_FUN_00d48444(StringLiteral_12112);
    thunk_FUN_00d48444(UnityEngine_ProBuilder_IntVec3_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4065);
    thunk_FUN_00d48444(PTR_DAT_033f1b98);
    thunk_FUN_00d48444(Method_UnityEngine_Vector2Int_get_Item__);
    thunk_FUN_00d48444(StringLiteral_5891);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u32__);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(Method_OVRTask_FromRequest<OVRResult<OVRAnchor_SaveResult>>__);
    thunk_FUN_00d48444(PTR_DAT_033f2b38);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_CreateVirtualizationController<ReusableCollectionItem>__
                      );
    thunk_FUN_00d48444(StringLiteral_5613);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonReader_ReadAsDateTime__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    thunk_FUN_00d48444(StringLiteral_4780);
    DAT_0377d207 = 1;
  }
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 0;
  FUN_01b7a840(&local_78,0x9b83dd9,0,0xffffffffffffffff,0);
  local_80 = local_68;
  uStack_88 = uStack_70;
  local_90 = local_78;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uStack_b8 = uStack_88;
  local_c0 = local_90;
  local_b0 = local_80;
  FUN_01b7a9bc(&local_a8,&local_c0,0);
  puVar5 = System_Data_DataColumnCollection_TypeInfo;
  if (*(int *)(*(long *)System_Data_DataColumnCollection_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377a363 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377a363 = '\x01';
  }
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar5;
  }
  uVar18 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  }
  uVar11 = FUN_02681b9c(uVar18,0,0);
  if ((uVar11 & 1) == 0) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_0377d264 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377d264 = '\x01';
    }
    lVar10 = *(long *)puVar5;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar5;
    }
    **(long **)(lVar10 + 0xb8) = param_1;
    uVar18 = FUN_01b594c8(0);
    if (DAT_0377d265 == '\0') {
      thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
      DAT_0377d265 = '\x01';
    }
    lVar10 = *(long *)puVar5;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar5;
    }
    puVar3 = PTR_DAT_033ea8a0;
    *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20) = uVar18;
    plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar3,9);
    puVar3 = Method_Newtonsoft_Json_JsonReader_ReadAsDateTime__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((*(long *)Method_Newtonsoft_Json_JsonReader_ReadAsDateTime__ != 0) &&
       (lVar10 = thunk_FUN_00d6225c(*(long *)Method_Newtonsoft_Json_JsonReader_ReadAsDateTime__,
                                    *(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0)) {
      uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar18,0);
    }
    if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[4] = *(long *)puVar3;
    lVar10 = FUN_0269e6e8(0);
    if ((lVar10 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
      uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar18,0);
    }
    puVar3 = StringLiteral_5613;
    uVar16 = *(uint *)(plVar12 + 3);
    if (uVar16 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[5] = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar10 == 0) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      uVar16 = *(uint *)(plVar12 + 3);
    }
    puVar4 = PTR_DAT_033f02a8;
    if (uVar16 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[6] = *(long *)puVar3;
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar10 = *(long *)puVar4;
    }
    plVar14 = (long *)**(long **)(lVar10 + 0xb8);
    if (plVar14 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
    }
    puVar3 = StringLiteral_4065;
    uVar16 = *(uint *)(plVar12 + 3);
    if (uVar16 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[7] = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar10 == 0) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      uVar16 = *(uint *)(plVar12 + 3);
    }
    if (uVar16 < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[8] = *(long *)puVar3;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar14 = (long *)FUN_01b131a8(0);
    if (plVar14 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
    }
    puVar3 = StringLiteral_5891;
    uVar16 = *(uint *)(plVar12 + 3);
    if (uVar16 < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[9] = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar10 == 0) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      uVar16 = *(uint *)(plVar12 + 3);
    }
    if (uVar16 < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[10] = *(long *)puVar3;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar14 = (long *)FUN_01b13708(0);
    if (plVar14 == (long *)0x0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
    }
    puVar3 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
    uVar16 = *(uint *)(plVar12 + 3);
    if (uVar16 < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[0xb] = lVar10;
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      lVar10 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar10 == 0) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      uVar16 = *(uint *)(plVar12 + 3);
    }
    if (uVar16 < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[0xc] = *(long *)puVar3;
    uVar18 = FUN_01600844(plVar12,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_01b131a8(0);
    uVar11 = FUN_0179269c(uVar15,**(undefined8 **)(*(long *)puVar4 + 0xb8),0);
    puVar3 = StringLiteral_302;
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(uVar18,0);
    }
    else {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(uVar18,0);
      FUN_02661754(*(undefined8 *)Method_UnityEngine_Vector2Int_get_Item__,0);
    }
    puVar7 = StringLiteral_3033;
    plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar8 = FUN_01b01770();
    local_80 = CONCAT44(local_80._4_4_,uVar8);
    local_90 = *(long *)PTR_DAT_033ef3d0;
    uStack_88 = 0xffffffffffffffff;
    lVar10 = FUN_017a7f78(&local_90,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((lVar10 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
      uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar18,0);
    }
    if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[4] = lVar10;
    local_98 = FUN_01b00340();
    local_a8 = *(undefined8 *)StringLiteral_12112;
    uStack_a0 = 0xffffffffffffffff;
    lVar10 = FUN_017a7f78(&local_a8,0);
    if ((lVar10 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
      uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar18,0);
    }
    if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar12[5] = lVar10;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660fcc(*(undefined8 *)Method_OVRTask_FromRequest<OVRResult<OVRAnchor_SaveResult>>__,
                 plVar12,0);
    iVar9 = FUN_01b00340();
    if (iVar9 == 3) {
      plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar7,2);
      local_90 = FUN_01b00390();
      puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__,
                                  &local_90);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar12[4] = lVar10;
      local_a8 = FUN_01b003e0();
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_a8);
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar12[5] = lVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660fcc(*(undefined8 *)PTR_DAT_033f1b98,plVar12,0);
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01b03004();
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar5;
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x1a8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      FUN_02661754(uVar18,0);
    }
    uVar18 = FUN_0269e8c8(0);
    if (((uint)uVar18 < 0xc) && ((1 << (ulong)((uint)uVar18 & 0x1f) & 0x887U) != 0)) {
      *(undefined1 *)(param_1 + 0x11f) = 1;
      FUN_01affb74(uVar18,0);
      *(undefined1 *)(param_1 + 0x6d) = 0;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01b04518(param_1);
      FUN_01b04a64(param_1);
      FUN_01b04cf4(param_1);
      puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_s32__;
      lVar10 = *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_s32__;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar6;
      }
      FUN_01b7ba7c(&local_90,&local_78,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 4),0);
      plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar7,2);
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = FUN_01aafd28(lVar10,0);
      local_90 = CONCAT44(local_90._4_4_,uVar8);
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo
                                  ,&local_90);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar12[4] = lVar10;
      if (DAT_0377cd82 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377cd82 = '\x01';
      }
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar18 = FUN_01aafcd8(lVar10,0);
      puVar7 = StringLiteral_2628;
      lVar10 = *(long *)StringLiteral_2628;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar7;
      }
      lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar15 = *(undefined8 *)PTR_DAT_033f38b8;
      uVar19 = *(undefined8 *)
                Method_UnityEngine_UIElements_BaseVerticalCollectionView_CreateVirtualizationController<ReusableCollectionItem>__
      ;
      if (lVar13 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar7;
        }
        uVar20 = **(undefined8 **)(lVar10 + 0xb8);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_UnityEngine_XR_InputDevices_GetDevicesAtXRNode__);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_012d239c(lVar13,uVar20,*(undefined8 *)StringLiteral_3256,0);
        *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8) = lVar13;
      }
      uVar18 = FUN_010dcdb8(uVar18,lVar13,
                            *(undefined8 *)DigitalOpus_MB_Core_MB_MeshPivotLocation_TypeInfo);
      uVar18 = FUN_010df6b8(uVar18,*(undefined8 *)PTR_DAT_033f0aa0);
      lVar10 = FUN_01600f98(uVar15,uVar18,0);
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
        uVar18 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar18,0);
      }
      if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar12[5] = lVar10;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660fcc(uVar19,plVar12,0);
      if (*(char *)(param_1 + 0x113) != '\0') {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_0377cd82 == '\0') {
          thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
          DAT_0377cd82 = '\x01';
        }
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar5;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_01aaf4dc(lVar10,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02662014(0);
      puVar7 = StringLiteral_9703;
      if ((uVar11 & 1) != 0) {
        FUN_010c2c5c(param_1,&local_90,*(undefined8 *)StringLiteral_9703);
        lVar10 = local_90;
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_0268b4e0(lVar10,0,0);
        if ((uVar11 & 1) != 0) {
          lVar10 = FUN_0268fd4c(param_1,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_010e5800(lVar10,*(undefined8 *)System_Xml_XmlName___TypeInfo);
        }
        FUN_010c2c5c(param_1,&local_90,*(undefined8 *)puVar7);
        lVar10 = local_90;
        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined4 *)(local_90 + 0x20) = *(undefined4 *)(param_1 + 0x68);
        uVar11 = FUN_02689f60(local_90,0);
        if ((uVar11 & 1) == 0) {
          FUN_02689f9c(lVar10,1,0);
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b1f830(1,0);
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377d266 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377d266 = '\x01';
      }
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01affda8(param_1,*(undefined4 *)(lVar10 + 0x1c));
      uVar8 = *(undefined4 *)(param_1 + 0x24);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01b2fc4c(uVar8,0);
      if (*(char *)(param_1 + 0x100) != '\0') {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_01b17f60(1,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*(undefined8 *)PTR_DAT_033f2b38,0);
        }
      }
      if (*(char *)(param_1 + 0x101) != '\0') {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b04e28();
        lVar10 = *(long *)puVar6;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar6;
        }
        FUN_01b7ba7c(&local_90,&local_78,**(undefined4 **)(lVar10 + 0xb8),0);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_01b1eb34(0);
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02661754(*(undefined8 *)StringLiteral_4780,0);
        *(undefined1 *)(param_1 + 0x10a) = 0;
      }
      else {
        cVar1 = *(char *)(param_1 + 0x10a);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b1ecfc(cVar1 != '\0',0);
      }
      FUN_01b05078(param_1);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar9 = FUN_01b01770();
      if (iVar9 - 9U < 2) {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
        puVar17 = (undefined4 *)(param_1 + 0x3c);
      }
      else {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x40);
        puVar17 = (undefined4 *)(param_1 + 0x44);
      }
      uVar8 = *puVar17;
      *(undefined4 *)(param_1 + 0x34) = uVar8;
      if (*(char *)(param_1 + 0x2c) != '\0') {
        FUN_0289a6c8(uVar8,0);
        plVar12 = (long *)FUN_026ae324(0);
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__ +
                           300);
          if ((bVar2 <= *(byte *)(*plVar12 + 300)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
              *(long *)Method_System_Collections_Generic_List<TMP_Glyph>_get_Item__)) {
            FUN_02405480(*(undefined4 *)(param_1 + 0x34),plVar12,0);
          }
        }
      }
      FUN_01b050ec(param_1);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377d267 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033f02a8);
        DAT_0377d267 = '\x01';
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar4;
      }
      iVar9 = *(int *)(*(long *)(lVar10 + 0xb8) + 0x5d8);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      if (DAT_0377d266 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377d266 = '\x01';
      }
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar10);
        lVar10 = *(long *)puVar5;
      }
      lVar13 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (iVar9 != *(int *)(lVar13 + 0x18)) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar10);
        }
        if (DAT_0377d266 == '\0') {
          thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
          DAT_0377d266 = '\x01';
        }
        lVar10 = *(long *)puVar5;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar10 = *(long *)puVar5;
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar8 = *(undefined4 *)(lVar10 + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01b1a390(uVar8,0);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377d267 == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033f02a8);
        DAT_0377d267 = '\x01';
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar4;
      }
      local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x5d8));
      uVar18 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43_TypeInfo
                                  ,&local_90);
      uVar18 = FUN_015f6780(*(undefined8 *)UnityEngine_ProBuilder_IntVec3_TypeInfo,uVar18,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(uVar18,0);
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar5;
      }
      *(undefined1 *)(*(long *)(lVar10 + 0xb8) + 0x1b4) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x11f) = 0;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshrn_n_u32__,0);
      FUN_01b7a994(&local_90,&local_78,3,0);
    }
  }
  else {
    FUN_02689f9c(param_1,0,0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0268c1d0(param_1,0);
    FUN_01b7a994(&local_90,&local_78,3,0);
  }
  FUN_01b7bcb4(&local_78,0);
  return;
}


