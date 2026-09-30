/*
FUNCTION_NAME: EyesControl_ReadUnprocessedValueFromState_mD478FD5500858CF7DDD3A8D74B94BCEF2FCB9F63
ENTRY_POINT: 0386efa0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_11;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_14
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void EyesControl_ReadUnprocessedValueFromState_mD478FD5500858CF7DDD3A8D74B94BCEF2FCB9F63
               (void *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 *param_6,
               void *param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735 *pIVar5;
  InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770 *pIVar6;
  InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A *pIVar7;
  undefined4 uVar8;
  float fVar9;
  Eyes_t239151DFDE1BB47589CEBD22261A793F142B211D aEStack_84 [76];
  undefined8 local_38;
  void *local_30;
  EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 *local_28;
  
  puVar3 = StringLiteral_16740;
  puVar2 = StringLiteral_16738;
  puVar1 = StringLiteral_15326;
  local_38 = param_8;
  local_30 = param_7;
  local_28 = param_6;
  if ((EyesControl_ReadUnprocessedValueFromState_mD478FD5500858CF7DDD3A8D74B94BCEF2FCB9F63::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16738);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    EyesControl_ReadUnprocessedValueFromState_mD478FD5500858CF7DDD3A8D74B94BCEF2FCB9F63::
    s_Il2CppMethodInitialized = 1;
  }
  memset(aEStack_84,0,0x4c);
  il2cpp_codegen_initobj(aEStack_84,0x4c);
  pIVar5 = (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735 *)
           EyesControl_get_leftEyePosition_m30F92C8A2393461FC8B42EF72602EDAD5DA14F22_inline
                     (local_28,(MethodInfo *)0x0);
  pvVar4 = local_30;
  NullCheck(pIVar5);
  uVar8 = InputControl_1_ReadUnprocessedValueFromStateWithCaching_m6D6B82BF15CACF94356CDBE87B5376D927AEDCF8
                    (pIVar5,pvVar4,*(MethodInfo **)puVar2);
  Eyes_set_leftEyePosition_m60D6E591243B8850368ED72D61F7B1EF96B6E4CD_inline(uVar8,aEStack_84,0);
  pIVar6 = (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770 *)
           EyesControl_get_leftEyeRotation_m0B5EA6878345A4A442C9B0255E93AB26EF2BB613_inline
                     (local_28,(MethodInfo *)0x0);
  pvVar4 = local_30;
  NullCheck(pIVar6);
  uVar8 = InputControl_1_ReadUnprocessedValueFromStateWithCaching_mA06180DC56B2C1C9EBD7AF548FE9A545D212B2CA
                    (pIVar6,pvVar4,*(MethodInfo **)puVar3);
  Eyes_set_leftEyeRotation_m79F3A667DD3BEA9E05A83E7FD67D7111107F1702_inline(uVar8,aEStack_84,0);
  pIVar5 = (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735 *)
           EyesControl_get_rightEyePosition_mB656BC310A2A2A7D4A2F01AF51FF1A17B43839DB_inline
                     (local_28,(MethodInfo *)0x0);
  pvVar4 = local_30;
  NullCheck(pIVar5);
  uVar8 = InputControl_1_ReadUnprocessedValueFromStateWithCaching_m6D6B82BF15CACF94356CDBE87B5376D927AEDCF8
                    (pIVar5,pvVar4,*(MethodInfo **)puVar2);
  Eyes_set_rightEyePosition_m1DF29775F1736285668E84601AC5377B1C840D51_inline(uVar8,aEStack_84,0);
  pIVar6 = (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770 *)
           EyesControl_get_rightEyeRotation_m36CA5BE97D9B87836B916E67F041DD6381442E4A_inline
                     (local_28,(MethodInfo *)0x0);
  pvVar4 = local_30;
  NullCheck(pIVar6);
  uVar8 = InputControl_1_ReadUnprocessedValueFromStateWithCaching_mA06180DC56B2C1C9EBD7AF548FE9A545D212B2CA
                    (pIVar6,pvVar4,*(MethodInfo **)puVar3);
  Eyes_set_rightEyeRotation_m73DE8BA956BC3BE56C92EC7EEAD3947B882914C9_inline
            (uVar8,param_3,param_4,param_5,aEStack_84,0);
  pIVar5 = (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735 *)
           EyesControl_get_fixationPoint_mED8557F3D952CE273C0C2423019B2F9567568642_inline
                     (local_28,(MethodInfo *)0x0);
  pvVar4 = local_30;
  NullCheck(pIVar5);
  uVar8 = InputControl_1_ReadUnprocessedValueFromStateWithCaching_m6D6B82BF15CACF94356CDBE87B5376D927AEDCF8
                    (pIVar5,pvVar4,*(MethodInfo **)puVar2);
  Eyes_set_fixationPoint_mB4F0997BF2BAD798F1F24AE588104119F53F717E_inline
            (uVar8,param_3,param_4,aEStack_84,0);
  pIVar7 = (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A *)
           EyesControl_get_leftEyeOpenAmount_m51766C0F6617225434B327DF0233EFF8081E7529_inline
                     (local_28,(MethodInfo *)0x0);
  pvVar4 = local_30;
  NullCheck(pIVar7);
  fVar9 = (float)InputControl_1_ReadUnprocessedValueFromStateWithCaching_mBDFAD5316708DE0C2334405A1AD6C4F48250B4F5
                           (pIVar7,pvVar4,*(MethodInfo **)puVar1);
  Eyes_set_leftEyeOpenAmount_m7A8E473AF4E6967E0781CBDFD8A4149E6CDD0FD7_inline
            (aEStack_84,fVar9,(MethodInfo *)0x0);
  pIVar7 = (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A *)
           EyesControl_get_rightEyeOpenAmount_m91926BDB6ACA8E71186BFDF84D4BA45381638F0C_inline
                     (local_28,(MethodInfo *)0x0);
  pvVar4 = local_30;
  NullCheck(pIVar7);
  fVar9 = (float)InputControl_1_ReadUnprocessedValueFromStateWithCaching_mBDFAD5316708DE0C2334405A1AD6C4F48250B4F5
                           (pIVar7,pvVar4,*(MethodInfo **)puVar1);
  Eyes_set_rightEyeOpenAmount_m07708F99AF3AEB590909D7018C12E9C4F3E292DE_inline
            (aEStack_84,fVar9,(MethodInfo *)0x0);
  memcpy(param_1,aEStack_84,0x4c);
  return;
}


