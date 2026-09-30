/*
FUNCTION_NAME: FUN_061fa060
ENTRY_POINT: 061fa060
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x061fa990) */

void FUN_061fa060(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,long param_5
                 ,long *param_6,long *param_7,long *param_8,long *param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  float fVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  uint uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  char local_cc [4];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined4 local_84;
  
  puVar8 = Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__;
  local_c8 = param_4;
  if ((DAT_06b8b3e4 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(PTR_DAT_06789660);
    FUN_02d6084c(Method_System_UInt16_System_IConvertible_ToDateTime__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_UInt16Converter_DeserializeInteger__);
    FUN_02d6084c(Method_System_Data_Common_UInt16Storage_Aggregate__);
    FUN_02d6084c(Method_System_UInt32_CompareTo__);
    FUN_02d6084c(Method_System_UInt32_System_IConvertible_ToDateTime__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__);
    FUN_02d6084c(Method_System_Data_Common_UInt32Storage_Aggregate__);
    FUN_02d6084c(Method_System_UInt64_CompareTo__);
    FUN_02d6084c(Method_System_UInt64_System_IConvertible_ToDateTime__);
    FUN_02d6084c(Method_Firebase_Firestore_Converters_UInt64Converter_DeserializeInteger__);
    FUN_02d6084c(Method_System_Data_Common_UInt64Storage_Aggregate__);
    FUN_02d6084c(Method_System_UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__);
    DAT_06b8b3e4 = 1;
  }
  lVar11 = *(long *)puVar8;
  local_cc[0] = '\0';
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *(long *)puVar8;
  }
  uVar22 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x28);
  local_cc[0] = '\0';
  FUN_0506ac34(uVar22,local_cc,0);
  lVar11 = *(long *)puVar8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *(long *)puVar8;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar11 = FUN_03375ce0(lVar11,*(undefined8 *)
                                Method_Firebase_Firestore_Converters_UInt64Converter_DeserializeInteger__
                       );
  *param_6 = lVar11;
  thunk_FUN_02dd37b4();
  lVar11 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x38);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar11 = FUN_03375ce0(lVar11,*(undefined8 *)Method_System_UInt64_CompareTo__);
  *param_7 = lVar11;
  thunk_FUN_02dd37b4();
  lVar11 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x40);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar11 = FUN_03375ce0(lVar11,*(undefined8 *)Method_System_Data_Common_UInt32Storage_Aggregate__);
  *param_8 = lVar11;
  thunk_FUN_02dd37b4();
  lVar11 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x30);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar11 = FUN_03375ce0(lVar11,*(undefined8 *)Method_System_UInt64_System_IConvertible_ToDateTime__)
  ;
  *param_9 = lVar11;
  thunk_FUN_02dd37b4();
  if (local_cc[0] != '\0') {
    thunk_FUN_02d6ec70(uVar22,0);
  }
  if (param_5 != 0) {
    fVar25 = (float)FUN_061c6f70(param_5,0);
    if ((*(long *)(param_5 + 0x4b8) != 0) &&
       (lVar11 = FUN_06163668(*(long *)(param_5 + 0x4b8),0), lVar11 != 0)) {
      bVar5 = *(byte *)(lVar11 + 0x74);
      *(uint *)(param_5 + 0xb8) = *(uint *)(param_5 + 0xb8) & 0xfffffffb | (uint)bVar5 << 2;
      if (param_3 != 0) {
        if (0 < (int)*(ulong *)(param_3 + 0x18)) {
          uVar19 = 0;
          uVar14 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
          fVar26 = 0.0;
          plVar20 = (long *)PTR_DAT_0675e660;
          do {
            if (uVar14 <= uVar19) {
LAB_061fa988:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            lVar15 = param_3 + uVar19 * 0x68;
            lVar11 = *(long *)(lVar15 + 0x28);
            uVar22 = *(undefined8 *)(lVar15 + 0x30);
            uVar21 = *(uint *)(lVar15 + 0x20);
            bVar6 = *(byte *)(lVar15 + 0x7c);
            iVar3 = *(int *)(lVar15 + 0x80);
            if (*(int *)(*plVar20 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_06022b88((uVar21 & 3) == 0,0);
            if (*(int *)(*(long *)
                          Method_System_UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData__
                        + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = UnityEngine_UI_InputField__SendOnValueChangedAndUpdateLabel(0);
            if (0 < (int)uVar21) {
              iVar23 = 0;
              do {
                lVar15 = *param_6;
                uVar2 = uVar21;
                if ((int)(uVar9 & 0xfffffffc) <= (int)uVar21) {
                  uVar2 = uVar9 & 0xfffffffc;
                }
                if (lVar15 == 0) goto LAB_061fa98c;
                lVar16 = *(long *)(lVar15 + 0x10);
                lVar18 = *(long *)PTR_DAT_06789660;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_061fa98c;
                uVar10 = *(uint *)(lVar15 + 0x18);
                if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar10 + 1;
                  puVar17 = (undefined8 *)(lVar16 + (long)(int)uVar10 * 8 + 0x20);
                  *puVar17 = uVar22;
                  thunk_FUN_02dd37b4(puVar17);
                }
                else {
                  FUN_03aac494(lVar15,uVar22,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                lVar15 = *param_9;
                if (lVar15 == 0) goto LAB_061fa98c;
                lVar16 = *(long *)(lVar15 + 0x10);
                lVar18 = *(long *)
                          Method_Firebase_Firestore_Converters_UInt16Converter_DeserializeInteger__;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_061fa98c;
                uVar10 = *(uint *)(lVar15 + 0x18);
                if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar10 + 1;
                  *(int *)(lVar16 + (long)(int)uVar10 * 4 + 0x20) = iVar3;
                }
                else {
                  FUN_03a3aa20(lVar15,iVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                if ((bVar6 & 1) == 0 || bVar5 != 0) {
                  uVar10 = 0;
                }
                else {
                  if (*(int *)(*(long *)Method_System_Data_Common_UInt64Storage_Aggregate__ + 0xe4)
                      == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar14 = FUN_062404c8(param_5,0);
                  if ((uVar14 & 1) == 0) {
                    uVar10 = 0;
                    if ((iVar3 != 0x1015) && (iVar3 != 0x11014)) {
                      if (*(int *)(*(long *)Method_System_Data_Common_UInt64Storage_Aggregate__ +
                                  0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar10 = FUN_06242cb0(param_5,0);
                    }
                  }
                  else {
                    uVar10 = 1;
                  }
                }
                FUN_0632b300(&local_c8,uVar2,((int)uVar2 >> 2) * 6,&local_e0,&local_f0,0);
                if (0 < (int)uVar2) {
                  uVar12 = 0x2000000;
                  if ((uVar10 & 1) == 0) {
                    uVar12 = 0;
                  }
                  if (lVar11 == 0) goto LAB_061fa98c;
                  iVar24 = 0;
                  iVar1 = 0;
                  do {
                    iVar13 = iVar1;
                    uVar10 = iVar23 + iVar13;
                    if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_061fa988;
                    lVar15 = lVar11 + (long)(int)uVar10 * 0x20;
                    uVar28 = *(undefined8 *)(lVar15 + 0x20);
                    uVar27 = *(undefined8 *)(lVar15 + 0x2c);
                    uVar4 = *(undefined4 *)(lVar15 + 0x34);
                    fVar29 = *(float *)(lVar15 + 0x3c);
                    if (*(int *)(*(long *)Method_System_UInt32_CompareTo__ + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    puVar8 = 
                    Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__;
                    fVar7 = 255.0;
                    if (0.0 <= fVar29) {
                      fVar7 = fVar26;
                    }
                    local_c0 = CONCAT44(param_2 + (float)((ulong)uVar28 >> 0x20),
                                        fVar25 + (float)uVar28);
                    local_a0 = uVar12 | (int)fVar7 << 8;
                    local_b8 = 0;
                    local_a8 = 0;
                    local_9c = 0;
                    uStack_94 = 0;
                    local_84 = 0;
                    local_8c = 0;
                    local_b4 = uVar27;
                    local_ac = uVar4;
                    FUN_03db9be8(&local_e0,iVar13,&local_c0,
                                 *(undefined8 *)
                                  Method_Firebase_Firestore_Converters_UInt32Converter_DeserializeInteger__
                                );
                    if (*(uint *)(lVar11 + 0x18) <= uVar10 + 1) goto LAB_061fa988;
                    lVar15 = lVar11 + (long)(iVar23 + iVar13 + 1) * 0x20;
                    local_b4 = *(undefined8 *)(lVar15 + 0x2c);
                    local_ac = *(undefined4 *)(lVar15 + 0x34);
                    fVar29 = 255.0;
                    if (0.0 <= *(float *)(lVar15 + 0x3c)) {
                      fVar29 = fVar26;
                    }
                    local_c0 = CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(lVar15 + 0x20) >>
                                                         0x20),
                                        fVar25 + (float)*(undefined8 *)(lVar15 + 0x20));
                    local_a0 = uVar12 | (int)fVar29 << 8;
                    local_b8 = 0;
                    local_a8 = 0;
                    local_9c = 0;
                    uStack_94 = 0;
                    local_84 = 0;
                    local_8c = 0;
                    FUN_03db9be8(&local_e0,iVar13 + 1,&local_c0,*(undefined8 *)puVar8);
                    if (*(uint *)(lVar11 + 0x18) <= uVar10 + 2) goto LAB_061fa988;
                    lVar15 = lVar11 + (long)(iVar23 + iVar13 + 2) * 0x20;
                    local_b4 = *(undefined8 *)(lVar15 + 0x2c);
                    local_ac = *(undefined4 *)(lVar15 + 0x34);
                    iVar1 = iVar13 + 2;
                    fVar29 = 255.0;
                    if (0.0 <= *(float *)(lVar15 + 0x3c)) {
                      fVar29 = fVar26;
                    }
                    local_c0 = CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(lVar15 + 0x20) >>
                                                         0x20),
                                        fVar25 + (float)*(undefined8 *)(lVar15 + 0x20));
                    local_a0 = uVar12 | (int)fVar29 << 8;
                    local_b8 = 0;
                    local_a8 = 0;
                    local_9c = 0;
                    uStack_94 = 0;
                    local_84 = 0;
                    local_8c = 0;
                    FUN_03db9be8(&local_e0,iVar1,&local_c0,*(undefined8 *)puVar8);
                    if (*(uint *)(lVar11 + 0x18) <= uVar10 + 3) goto LAB_061fa988;
                    lVar15 = lVar11 + (long)(iVar23 + iVar13 + 3) * 0x20;
                    local_b4 = *(undefined8 *)(lVar15 + 0x2c);
                    local_ac = *(undefined4 *)(lVar15 + 0x34);
                    fVar29 = 255.0;
                    if (0.0 <= *(float *)(lVar15 + 0x3c)) {
                      fVar29 = fVar26;
                    }
                    local_c0 = CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(lVar15 + 0x20) >>
                                                         0x20),
                                        fVar25 + (float)*(undefined8 *)(lVar15 + 0x20));
                    local_a0 = uVar12 | (int)fVar29 << 8;
                    local_b8 = 0;
                    local_a8 = 0;
                    local_9c = 0;
                    uStack_94 = 0;
                    local_84 = 0;
                    local_8c = 0;
                    FUN_03db9be8(&local_e0,iVar13 + 3,&local_c0,*(undefined8 *)puVar8);
                    puVar8 = Method_System_UInt32_System_IConvertible_ToDateTime__;
                    FUN_03db8b60(&local_f0,iVar24,iVar13,
                                 *(undefined8 *)
                                  Method_System_UInt32_System_IConvertible_ToDateTime__);
                    FUN_03db8b60(&local_f0,iVar24 + 1,iVar13 + 1,*(undefined8 *)puVar8);
                    FUN_03db8b60(&local_f0,iVar24 + 2,iVar1,*(undefined8 *)puVar8);
                    FUN_03db8b60(&local_f0,iVar24 + 3,iVar1,*(undefined8 *)puVar8);
                    FUN_03db8b60(&local_f0,iVar24 + 4,iVar13 + 3,*(undefined8 *)puVar8);
                    FUN_03db8b60(&local_f0,iVar24 + 5,iVar13,*(undefined8 *)puVar8);
                    iVar24 = iVar24 + 6;
                    iVar1 = iVar13 + 4;
                  } while (iVar13 + 4 < (int)uVar2);
                  iVar23 = iVar23 + iVar13 + 4;
                }
                lVar15 = *param_7;
                if (lVar15 == 0) goto LAB_061fa98c;
                lVar16 = *(long *)(lVar15 + 0x10);
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_061fa98c;
                uVar10 = *(uint *)(lVar15 + 0x18);
                if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar10 * 0x10;
                  *(uint *)(lVar15 + 0x18) = uVar10 + 1;
                  *(undefined8 *)(lVar16 + 0x20) = local_e0;
                  *(undefined8 *)(lVar16 + 0x28) = uStack_d8;
                }
                else {
                  FUN_0398e15c();
                }
                lVar15 = *param_8;
                if (lVar15 == 0) goto LAB_061fa98c;
                lVar16 = *(long *)(lVar15 + 0x10);
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_061fa98c;
                uVar10 = *(uint *)(lVar15 + 0x18);
                if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar10 * 0x10;
                  *(uint *)(lVar15 + 0x18) = uVar10 + 1;
                  *(undefined8 *)(lVar16 + 0x20) = local_f0;
                  *(undefined8 *)(lVar16 + 0x28) = uStack_e8;
                }
                else {
                  FUN_0398b994();
                }
                uVar21 = uVar21 - uVar2;
              } while (0 < (int)uVar21);
            }
            plVar20 = (long *)PTR_DAT_0675e660;
            if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_06022b88(uVar21 == 0,0);
            uVar14 = (ulong)*(uint *)(param_3 + 0x18);
            uVar19 = uVar19 + 1;
          } while ((long)uVar19 < (long)(int)*(uint *)(param_3 + 0x18));
        }
        return;
      }
    }
  }
LAB_061fa98c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


