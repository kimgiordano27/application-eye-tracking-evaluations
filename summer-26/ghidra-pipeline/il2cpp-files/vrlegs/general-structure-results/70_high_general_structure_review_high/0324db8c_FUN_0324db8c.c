/*
FUNCTION_NAME: FUN_0324db8c
ENTRY_POINT: 0324db8c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_5;strong_file_logging_hits_5
*/


void FUN_0324db8c(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint param_5,
                 uint param_6,uint param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_03cd82c0;
  local_90 = param_2;
  uStack_88 = param_3;
  if ((DAT_0412c7bc & 1) == 0) {
    FUN_01ab69ac(Mono_CSharp_Linq_AQueryClause_TypeInfo);
    FUN_01ab69ac(int_________TypeInfo);
    FUN_01ab69ac(Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_TypeInfo);
    FUN_01ab69ac(System_Linq_Expressions_Interpreter_Instruction_______TypeInfo);
    FUN_01ab69ac(int_______TypeInfo);
    FUN_01ab69ac(System_Text_ASCIIEncoding_TypeInfo);
    FUN_01ab69ac(Mono_Security_ASN1_TypeInfo);
    FUN_01ab69ac(Mono_Security_ASN1_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd82c0);
    FUN_01ab69ac(Mono_CSharp_ATypeNameExpression_TypeInfo);
    DAT_0412c7bc = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar2;
  }
  FUN_03285eb4(*(long *)(lVar7 + 0xb8) + 0x50,0);
  if (((param_7 & 1) == 0) && (0 < *param_4)) {
    if (*param_4 != 1) {
      uStack_68 = uStack_88;
      local_70 = local_90;
      uVar9 = thunk_FUN_01a6ca08(UnityApplicationInsights_ExceptionDetails___TypeInfo);
      uVar9 = thunk_FUN_01a89a98(uVar9,&local_70);
      uVar11 = thunk_FUN_01a6ca08(AWSSignatureV4_S3_Signers_AWS4SignerBase_TypeInfo);
      uVar9 = FUN_025b4d3c(uVar11,uVar9,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
      uVar11 = thunk_FUN_01a89e68();
      FUN_02765308(uVar11,uVar9,0);
      uVar9 = thunk_FUN_01a6ca08(AWSSignatureV4_S3_Signers_AWS4SignerForAuthorizationHeader_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar11,uVar9);
    }
    FUN_021f44ec(param_4,0,&local_70,*(undefined8 *)Mono_Security_ASN1_TypeInfo);
    local_a0 = local_70;
    uStack_98 = uStack_68;
    uVar8 = FUN_0329161c(&local_a0,0);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0)
      goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
      local_70 = local_90;
      uStack_68 = uStack_88;
      local_80 = local_a0;
      uStack_78 = uStack_98;
      FUN_0219b83c(*(long *)(param_1 + 0x30),&local_70,&local_80,
                   *(undefined8 *)System_Text_ASCIIEncoding_TypeInfo);
    }
  }
  puVar2 = int_________TypeInfo;
  if (*(long *)(param_1 + 0x48) != 0) {
    local_70 = local_90;
    uStack_68 = uStack_88;
    FUN_0219eaf8(*(long *)(param_1 + 0x48),&local_70,*(undefined8 *)int_________TypeInfo);
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar6 = FUN_0219b384(*(long *)(param_1 + 0x48),
                           *(undefined8 *)
                            Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_TypeInfo)
      ;
      puVar3 = Mono_Security_ASN1_TypeInfo;
      if (iVar6 < 1) {
LAB_0324dec0:
        puVar4 = Mono_CSharp_ATypeNameExpression_TypeInfo;
        puVar3 = Mono_Security_ASN1_TypeInfo;
        puVar2 = Mono_CSharp_Linq_AQueryClause_TypeInfo;
        if ((param_7 & 1) == 0) {
          FUN_0324e7f4(param_1,local_90,uStack_88,param_6 & 1);
        }
        else if (0 < *param_4) {
          iVar6 = 0;
          do {
            FUN_021f44ec(param_4,iVar6,&local_70,*(undefined8 *)puVar3);
            FUN_0324e7f4(param_1,local_70,uStack_68,param_6 & 1);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *param_4);
        }
        uVar12 = 2;
        if ((param_5 & 1) == 0) {
          uVar12 = 0;
        }
        uVar9 = FUN_03291784(&local_90,0);
        local_70 = CONCAT44(local_70._4_4_,uVar12);
        FUN_01f57ee8(param_1 + 0x220,uVar9,&local_70,*(undefined8 *)puVar4,0,*(undefined8 *)puVar2);
        return;
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar9 = FUN_0219b394(*(long *)(param_1 + 0x48),*(undefined8 *)int_______TypeInfo);
        lVar7 = FUN_01f70920(uVar9,*(undefined8 *)puVar3);
        puVar3 = Mono_Security_ASN1_TypeInfo;
        if (lVar7 != 0) {
          if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
            uVar8 = 0;
            uVar13 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar13 <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              if (*(long *)(param_1 + 0x48) == 0)
              goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
              lVar1 = lVar7 + uVar8 * 0x10;
              uVar9 = *(undefined8 *)(lVar1 + 0x20);
              uVar11 = *(undefined8 *)(lVar1 + 0x28);
              local_80 = uVar9;
              uStack_78 = uVar11;
              FUN_0219b634(*(long *)(param_1 + 0x48),&local_80,&local_70,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_Instruction_______TypeInfo);
              uVar5 = uStack_68;
              if ((param_7 & 1) == 0) {
                uVar10 = FUN_03291a94(local_90,uStack_88,0);
                uVar13 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                                   (uVar5,uVar10,0x3b,0);
                if ((uVar13 & 1) != 0) {
                  if (*(long *)(param_1 + 0x48) == 0)
                  goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
                  local_70 = uVar9;
                  uStack_68 = uVar11;
                  FUN_0219eaf8(*(long *)(param_1 + 0x48),&local_70,*(undefined8 *)puVar2);
                }
              }
              else if (0 < *param_4) {
                iVar6 = 0;
                do {
                  FUN_021f44ec(param_4,iVar6,&local_70,*(undefined8 *)puVar3);
                  uVar13 = FUN_032917d8(uVar9,uVar11,local_70,uStack_68,0);
                  if ((uVar13 & 1) == 0) {
                    FUN_021f44ec(param_4,iVar6,&local_70,*(undefined8 *)puVar3);
                    uVar10 = FUN_03291a94(local_70,uStack_68,0);
                    uVar13 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                                       (uVar5,uVar10,0x3b,0);
                    if ((uVar13 & 1) != 0) goto LAB_0324de48;
                  }
                  else {
LAB_0324de48:
                    if (*(long *)(param_1 + 0x48) == 0)
                    goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
                    local_70 = uVar9;
                    uStack_68 = uVar11;
                    FUN_0219eaf8(*(long *)(param_1 + 0x48),&local_70,*(undefined8 *)puVar2);
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *param_4);
              }
              uVar13 = (ulong)*(uint *)(lVar7 + 0x18);
              uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
          }
          goto LAB_0324dec0;
        }
      }
    }
  }
Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


