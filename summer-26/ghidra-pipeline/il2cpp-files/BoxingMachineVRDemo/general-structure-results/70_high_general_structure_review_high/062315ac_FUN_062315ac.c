/*
FUNCTION_NAME: FUN_062315ac
ENTRY_POINT: 062315ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


void FUN_062315ac(float param_1,float param_2,long param_3,long param_4,long param_5,uint param_6)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  float fVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 local_1c4;
  undefined8 local_1c0;
  long local_1b0;
  long local_1a0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  if ((DAT_06b8b710 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(PTR_DAT_06789660);
    FUN_02d6084c(Method_System_UInt16_System_IConvertible_ToDateTime__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_UInt16Converter_DeserializeInteger__);
    FUN_02d6084c(Method_System_Data_Common_UInt16Storage_Aggregate__);
    FUN_02d6084c(Method_System_Xml_Ucs4Decoder3412_GetFullChars__);
    FUN_02d6084c(Method_System_Text_UTF8Encoding_GetString__);
    FUN_02d6084c(Method_System_Text_UTF8Encoding_GetChars__);
    FUN_02d6084c(Method_System_Runtime_Diagnostics_DiagnosticTraceBase_ExitOrUnloadEventHandler__);
    FUN_02d6084c(Method_System_UInt32_CompareTo__);
    FUN_02d6084c(Method_System_UInt32_System_IConvertible_ToDateTime__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__);
    FUN_02d6084c(Method_System_UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__);
    DAT_06b8b710 = 1;
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  lVar11 = param_5;
  if ((param_6 & 1) == 0) {
    if (param_4 == 0) goto LAB_062321d8;
    lVar11 = *(long *)(param_4 + 0x58);
  }
  if (lVar11 != 0) {
    uVar10 = *(ulong *)(lVar11 + 0x18);
    if (0 < (int)uVar10) {
      uVar15 = 0;
      fVar24 = 0.0;
      puVar19 = (undefined8 *)Method_System_UInt32_System_IConvertible_ToDateTime__;
      do {
        if ((param_6 & 1) == 0) {
          if ((param_4 == 0) || (lVar11 = *(long *)(param_4 + 0x58), lVar11 == 0))
          goto LAB_062321d8;
          if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_062321d4;
          lVar11 = lVar11 + uVar15 * 0x68;
          uVar18 = *(uint *)(lVar11 + 0x20);
          local_1a0 = *(long *)(lVar11 + 0x28);
          local_1c0 = *(undefined8 *)(lVar11 + 0x30);
          local_1c4 = *(undefined4 *)(lVar11 + 0x80);
          if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_06022b88((uVar18 & 3) == 0,0);
          local_1b0 = 0;
        }
        else {
          if (param_5 == 0) goto LAB_062321d8;
          if (*(uint *)(param_5 + 0x18) <= uVar15) {
LAB_062321d4:
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          lVar11 = *(long *)(param_5 + uVar15 * 0x18 + 0x20);
          if (lVar11 == 0) goto LAB_062321d8;
          local_1b0 = *(long *)(param_5 + uVar15 * 0x18 + 0x30);
          uVar18 = *(int *)(lVar11 + 0x18) << 2;
          local_1c4 = 0;
          local_1c0 = 0;
          local_1a0 = 0;
        }
        if (*(int *)(*(long *)
                      Method_System_UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = UnityEngine_UI_InputField__SendOnValueChangedAndUpdateLabel(0);
        if (0 < (int)uVar18) {
          plVar1 = (long *)(param_5 + uVar15 * 0x18 + 0x20);
          do {
            lVar11 = *(long *)(param_3 + 0x70);
            uVar2 = uVar18;
            if ((int)(uVar5 & 0xfffffffc) <= (int)uVar18) {
              uVar2 = uVar5 & 0xfffffffc;
            }
            uVar8 = local_1c0;
            if ((param_6 & 1) != 0) {
              if (local_1b0 == 0) goto LAB_062321d8;
              uVar8 = *(undefined8 *)(local_1b0 + 0x28);
            }
            if (lVar11 == 0) goto LAB_062321d8;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar14 = *(long *)PTR_DAT_06789660;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_062321d8;
            uVar20 = *(uint *)(lVar11 + 0x18);
            if (uVar20 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar20 + 1;
              puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar20 * 8 + 0x20);
              *puVar13 = uVar8;
              thunk_FUN_02dd37b4(puVar13);
            }
            else {
              FUN_03aac494(lVar11,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *(long *)(param_3 + 0x78);
            uVar6 = local_1c4;
            if ((param_6 & 1) != 0) {
              if (local_1b0 == 0) goto LAB_062321d8;
              uVar6 = FUN_061230a0(local_1b0,0);
            }
            if (lVar11 == 0) goto LAB_062321d8;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar14 = *(long *)
                      Method_Firebase_Firestore_Converters_UInt16Converter_DeserializeInteger__;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_062321d8;
            uVar20 = *(uint *)(lVar11 + 0x18);
            if (uVar20 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar20 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar20 * 4 + 0x20) = uVar6;
            }
            else {
              FUN_03a3aa20(lVar11,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_3 + 0x10) == 0) goto LAB_062321d8;
            FUN_06329a18(*(long *)(param_3 + 0x10),uVar2,((int)uVar2 >> 2) * 6,&local_d0,&local_e0,0
                        );
            if (0 < (int)uVar2) {
              lVar11 = 0;
              uVar23 = 0;
              uVar21 = 0;
              iVar22 = 0;
              puVar16 = (undefined4 *)(local_1a0 + 0x54);
              do {
                uVar20 = (uint)uVar21;
                if ((param_6 & 1) == 0) {
                  if (local_1a0 == 0) goto LAB_062321d8;
                  if (*(uint *)(local_1a0 + 0x18) <= uVar21) goto LAB_062321d4;
                  uVar25 = *(undefined8 *)(puVar16 + -0xd);
                  uVar8 = *(undefined8 *)(puVar16 + -10);
                  uVar6 = puVar16[-8];
                  fVar26 = (float)puVar16[-6];
                  if (*(int *)(*(long *)Method_System_UInt32_CompareTo__ + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  puVar3 = Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__
                  ;
                  fVar9 = 255.0;
                  if (0.0 <= fVar26) {
                    fVar9 = fVar24;
                  }
                  local_c0 = CONCAT44(param_2 + (float)((ulong)uVar25 >> 0x20),
                                      param_1 + (float)uVar25);
                  local_a0 = (int)fVar9 << 8;
                  uStack_b8 = 0;
                  uStack_b4 = (undefined4)uVar8;
                  uStack_b0 = (undefined4)((ulong)uVar8 >> 0x20);
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  local_9c = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  uStack_84 = 0;
                  uStack_8c = 0;
                  uStack_88 = 0;
                  uStack_ac = uVar6;
                  FUN_03db9be8(&local_d0,uVar21 & 0xffffffff,&local_c0,
                               *(undefined8 *)
                                Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__
                              );
                  if ((ulong)*(uint *)(local_1a0 + 0x18) <= uVar21 + 1) goto LAB_062321d4;
                  uStack_ac = *puVar16;
                  local_c0 = CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(puVar16 + -5) >> 0x20
                                                       ),
                                      param_1 + (float)*(undefined8 *)(puVar16 + -5));
                  fVar26 = 255.0;
                  if (0.0 <= (float)puVar16[2]) {
                    fVar26 = fVar24;
                  }
                  uStack_b8 = 0;
                  uStack_b4 = (undefined4)*(undefined8 *)(puVar16 + -2);
                  uStack_b0 = (undefined4)((ulong)*(undefined8 *)(puVar16 + -2) >> 0x20);
                  local_a0 = (int)fVar26 << 8;
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  local_9c = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  uStack_84 = 0;
                  uStack_8c = 0;
                  uStack_88 = 0;
                  FUN_03db9be8(&local_d0,uVar20 + 1,&local_c0,*(undefined8 *)puVar3);
                  if ((ulong)*(uint *)(local_1a0 + 0x18) <= uVar21 + 2) goto LAB_062321d4;
                  uStack_ac = puVar16[8];
                  local_c0 = CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(puVar16 + 3) >> 0x20)
                                      ,param_1 + (float)*(undefined8 *)(puVar16 + 3));
                  fVar26 = 255.0;
                  if (0.0 <= (float)puVar16[10]) {
                    fVar26 = fVar24;
                  }
                  uStack_b8 = 0;
                  uStack_b4 = (undefined4)*(undefined8 *)(puVar16 + 6);
                  uStack_b0 = (undefined4)((ulong)*(undefined8 *)(puVar16 + 6) >> 0x20);
                  local_a0 = (int)fVar26 << 8;
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  local_9c = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  uStack_84 = 0;
                  uStack_8c = 0;
                  uStack_88 = 0;
                  FUN_03db9be8(&local_d0,uVar20 + 2,&local_c0,*(undefined8 *)puVar3);
                  if ((ulong)*(uint *)(local_1a0 + 0x18) <= uVar21 + 3) goto LAB_062321d4;
                  uStack_ac = puVar16[0x10];
                  local_c0 = CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(puVar16 + 0xb) >>
                                                       0x20),
                                      param_1 + (float)*(undefined8 *)(puVar16 + 0xb));
                  fVar26 = 255.0;
                  if (0.0 <= (float)puVar16[0x12]) {
                    fVar26 = fVar24;
                  }
                  uStack_b8 = 0;
                  uStack_b4 = (undefined4)*(undefined8 *)(puVar16 + 0xe);
                  uStack_b0 = (undefined4)((ulong)*(undefined8 *)(puVar16 + 0xe) >> 0x20);
                  local_a0 = (int)fVar26 << 8;
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  local_9c = 0;
                  uStack_94 = 0;
                  uStack_90 = 0;
                  uStack_84 = 0;
                  uStack_8c = 0;
                  uStack_88 = 0;
                  FUN_03db9be8(&local_d0,uVar20 + 3,&local_c0,*(undefined8 *)puVar3);
                  puVar19 = (undefined8 *)Method_System_UInt32_System_IConvertible_ToDateTime__;
                }
                else {
                  if (local_1b0 == 0) goto LAB_062321d8;
                  iVar7 = FUN_061230a0(local_1b0,0);
                  if (iVar7 == 0x11014) {
                    bVar4 = true;
                  }
                  else {
                    iVar7 = FUN_061230a0(local_1b0,0);
                    bVar4 = iVar7 == 0x11018;
                  }
                  if (param_5 == 0) goto LAB_062321d8;
                  if (*(uint *)(param_5 + 0x18) <= uVar15) goto LAB_062321d4;
                  lVar12 = *plVar1;
                  if (lVar12 == 0) goto LAB_062321d8;
                  if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_062321d4;
                  lVar12 = lVar12 + lVar11;
                  uVar25 = *(undefined8 *)(lVar12 + 0x24);
                  uVar6 = *(undefined4 *)(lVar12 + 0x30);
                  uVar8 = *(undefined8 *)(lVar12 + 0x34);
                  fVar26 = *(float *)(lVar12 + 0x40);
                  if (*(int *)(*(long *)Method_System_UInt32_CompareTo__ + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  local_c0 = 0;
                  uStack_b8 = 0;
                  uStack_b4 = 0;
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  uStack_ac = 0;
                  if (bVar4) {
                    uVar6 = FUN_05bda2ec(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                  }
                  uStack_84 = uStack_a8;
                  uStack_88 = uStack_ac;
                  uStack_8c = uStack_b0;
                  uStack_94 = uStack_b8;
                  uStack_b0 = (undefined4)uVar8;
                  uStack_ac = (undefined4)((ulong)uVar8 >> 0x20);
                  fVar17 = 255.0;
                  fVar9 = fVar17;
                  if (0.0 <= fVar26) {
                    fVar9 = 0.0;
                  }
                  local_a0 = (int)fVar9 << 8;
                  uStack_b8 = 0;
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  uStack_90 = uStack_b4;
                  local_9c = local_c0;
                  local_c0 = CONCAT44(param_2 + (float)((ulong)uVar25 >> 0x20),
                                      param_1 + (float)uVar25);
                  uStack_b4 = uVar6;
                  FUN_03db9be8(&local_d0,uVar21 & 0xffffffff,&local_c0,
                               *(undefined8 *)
                                Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__
                              );
                  if (*(uint *)(param_5 + 0x18) <= uVar15) goto LAB_062321d4;
                  lVar12 = *plVar1;
                  if (lVar12 == 0) goto LAB_062321d8;
                  if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_062321d4;
                  lVar12 = lVar12 + lVar11;
                  uVar25 = *(undefined8 *)(lVar12 + 0x44);
                  uVar6 = *(undefined4 *)(lVar12 + 0x50);
                  uVar8 = *(undefined8 *)(lVar12 + 0x54);
                  fVar26 = *(float *)(lVar12 + 0x60);
                  local_c0 = 0;
                  uStack_b8 = 0;
                  uStack_b4 = 0;
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  uStack_ac = 0;
                  if (bVar4) {
                    uVar6 = FUN_05bda2ec(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                  }
                  uStack_84 = uStack_a8;
                  uStack_88 = uStack_ac;
                  uStack_8c = uStack_b0;
                  uStack_94 = uStack_b8;
                  uStack_b0 = (undefined4)uVar8;
                  uStack_ac = (undefined4)((ulong)uVar8 >> 0x20);
                  if (0.0 <= fVar26) {
                    fVar17 = 0.0;
                  }
                  local_a0 = (int)fVar17 << 8;
                  uStack_b8 = 0;
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  uStack_90 = uStack_b4;
                  local_9c = local_c0;
                  local_c0 = CONCAT44(param_2 + (float)((ulong)uVar25 >> 0x20),
                                      param_1 + (float)uVar25);
                  uStack_b4 = uVar6;
                  FUN_03db9be8(&local_d0,uVar20 + 1,&local_c0,
                               *(undefined8 *)
                                Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__
                              );
                  if (*(uint *)(param_5 + 0x18) <= uVar15) goto LAB_062321d4;
                  lVar12 = *plVar1;
                  if (lVar12 == 0) goto LAB_062321d8;
                  if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_062321d4;
                  lVar12 = lVar12 + lVar11;
                  uVar25 = *(undefined8 *)(lVar12 + 100);
                  uVar6 = *(undefined4 *)(lVar12 + 0x70);
                  uVar8 = *(undefined8 *)(lVar12 + 0x74);
                  fVar26 = *(float *)(lVar12 + 0x80);
                  local_c0 = 0;
                  uStack_b8 = 0;
                  uStack_b4 = 0;
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  uStack_ac = 0;
                  if (bVar4) {
                    uVar6 = FUN_05bda2ec(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                  }
                  uStack_84 = uStack_a8;
                  uStack_88 = uStack_ac;
                  uStack_8c = uStack_b0;
                  uStack_94 = uStack_b8;
                  uStack_b0 = (undefined4)uVar8;
                  uStack_ac = (undefined4)((ulong)uVar8 >> 0x20);
                  fVar9 = 255.0;
                  if (0.0 <= fVar26) {
                    fVar9 = 0.0;
                  }
                  local_a0 = (int)fVar9 << 8;
                  uStack_b8 = 0;
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  uStack_90 = uStack_b4;
                  local_9c = local_c0;
                  local_c0 = CONCAT44(param_2 + (float)((ulong)uVar25 >> 0x20),
                                      param_1 + (float)uVar25);
                  uStack_b4 = uVar6;
                  FUN_03db9be8(&local_d0,uVar20 + 2,&local_c0,
                               *(undefined8 *)
                                Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__
                              );
                  if (*(uint *)(param_5 + 0x18) <= uVar15) goto LAB_062321d4;
                  lVar12 = *plVar1;
                  if (lVar12 == 0) goto LAB_062321d8;
                  if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_062321d4;
                  lVar12 = lVar12 + lVar11;
                  uVar25 = *(undefined8 *)(lVar12 + 0x84);
                  uVar6 = *(undefined4 *)(lVar12 + 0x90);
                  uVar8 = *(undefined8 *)(lVar12 + 0x94);
                  fVar26 = *(float *)(lVar12 + 0xa0);
                  local_c0 = 0;
                  uStack_b8 = 0;
                  uStack_b4 = 0;
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  uStack_ac = 0;
                  if (bVar4) {
                    uVar6 = FUN_05bda2ec(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                  }
                  uStack_84 = uStack_a8;
                  uStack_88 = uStack_ac;
                  uStack_8c = uStack_b0;
                  uStack_94 = uStack_b8;
                  uStack_b0 = (undefined4)uVar8;
                  uStack_ac = (undefined4)((ulong)uVar8 >> 0x20);
                  fVar9 = 255.0;
                  if (0.0 <= fVar26) {
                    fVar9 = 0.0;
                  }
                  local_a0 = (int)fVar9 << 8;
                  uStack_b8 = 0;
                  uStack_a8 = 0;
                  uStack_a4 = 0;
                  uStack_90 = uStack_b4;
                  local_9c = local_c0;
                  local_c0 = CONCAT44(param_2 + (float)((ulong)uVar25 >> 0x20),
                                      param_1 + (float)uVar25);
                  uStack_b4 = uVar6;
                  FUN_03db9be8(&local_d0,uVar20 + 3,&local_c0,
                               *(undefined8 *)
                                Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__
                              );
                }
                FUN_03db8b60(&local_e0,iVar22,uVar21 & 0xffffffff,*puVar19);
                FUN_03db8b60(&local_e0,iVar22 + 1,uVar20 | 1,*puVar19);
                FUN_03db8b60(&local_e0,iVar22 + 2,uVar20 | 2,*puVar19);
                FUN_03db8b60(&local_e0,iVar22 + 3,uVar20 | 2,*puVar19);
                FUN_03db8b60(&local_e0,iVar22 + 4,uVar20 | 3,*puVar19);
                FUN_03db8b60(&local_e0,iVar22 + 5,uVar21 & 0xffffffff,*puVar19);
                lVar11 = lVar11 + 0x84;
                uVar21 = uVar21 + 4;
                uVar23 = uVar23 + 1;
                puVar16 = puVar16 + 0x20;
                iVar22 = iVar22 + 6;
              } while ((ulong)((uVar2 - 1 >> 2) + 1) * 0x84 != lVar11);
            }
            lVar11 = *(long *)(param_3 + 0x60);
            if (lVar11 == 0) goto LAB_062321d8;
            lVar12 = *(long *)(lVar11 + 0x10);
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_062321d8;
            uVar20 = *(uint *)(lVar11 + 0x18);
            if (uVar20 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar20 * 0x10;
              *(uint *)(lVar11 + 0x18) = uVar20 + 1;
              *(undefined8 *)(lVar12 + 0x20) = local_d0;
              *(undefined8 *)(lVar12 + 0x28) = uStack_c8;
            }
            else {
              FUN_0398e15c();
            }
            lVar11 = *(long *)(param_3 + 0x68);
            if (lVar11 == 0) goto LAB_062321d8;
            lVar12 = *(long *)(lVar11 + 0x10);
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_062321d8;
            uVar20 = *(uint *)(lVar11 + 0x18);
            if (uVar20 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar20 * 0x10;
              *(uint *)(lVar11 + 0x18) = uVar20 + 1;
              *(undefined8 *)(lVar12 + 0x20) = local_e0;
              *(undefined8 *)(lVar12 + 0x28) = uStack_d8;
            }
            else {
              FUN_0398b994();
            }
            uVar18 = uVar18 - uVar2;
          } while (0 < (int)uVar18);
        }
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_06022b88(uVar18 == 0,0);
        uVar15 = uVar15 + 1;
      } while (uVar15 != (uVar10 & 0xffffffff));
    }
    FUN_06231180(param_3,*(undefined8 *)(param_3 + 0x60),*(undefined8 *)(param_3 + 0x68),
                 *(undefined8 *)(param_3 + 0x70),*(undefined8 *)(param_3 + 0x78));
    lVar11 = *(long *)(param_3 + 0x60);
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      lVar11 = *(long *)(param_3 + 0x68);
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        lVar11 = *(long *)(param_3 + 0x70);
        if (lVar11 != 0) {
          iVar22 = *(int *)(lVar11 + 0x18);
          *(undefined4 *)(lVar11 + 0x18) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (0 < iVar22) {
            FUN_05029664(*(undefined8 *)(lVar11 + 0x10),0,iVar22,0);
          }
          lVar11 = *(long *)(param_3 + 0x78);
          if (lVar11 != 0) {
            *(undefined4 *)(lVar11 + 0x18) = 0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            return;
          }
        }
      }
    }
  }
LAB_062321d8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


