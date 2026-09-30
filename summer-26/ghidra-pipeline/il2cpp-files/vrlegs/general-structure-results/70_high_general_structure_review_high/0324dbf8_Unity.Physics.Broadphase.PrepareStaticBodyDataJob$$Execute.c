/*
FUNCTION_NAME: Unity.Physics.Broadphase.PrepareStaticBodyDataJob$$Execute
ENTRY_POINT: 0324dbf8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_7;strong_file_logging_hits_5
*/


void Unity_Physics_Broadphase_PrepareStaticBodyDataJob__Execute(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int *unaff_x22;
  ulong unaff_x23;
  uint unaff_w24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_01ab69ac(System_Linq_Expressions_Interpreter_Instruction_______TypeInfo);
  FUN_01ab69ac(int_______TypeInfo);
  FUN_01ab69ac(System_Text_ASCIIEncoding_TypeInfo);
  FUN_01ab69ac(Mono_Security_ASN1_TypeInfo);
  FUN_01ab69ac(Mono_Security_ASN1_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cd82c0);
  FUN_01ab69ac(Mono_CSharp_ATypeNameExpression_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x7bc) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  *(int *)(unaff_x19 + 0x10) = *(int *)(unaff_x19 + 0x10) + 1;
  lVar6 = *unaff_x20;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *unaff_x20;
  }
  FUN_03285eb4(*(long *)(lVar6 + 0xb8) + 0x50,0);
  if (((unaff_x23 & 1) == 0) && (0 < *unaff_x22)) {
    if (*unaff_x22 != 1) {
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000040 = in_stack_00000020;
      uVar8 = thunk_FUN_01a6ca08(UnityApplicationInsights_ExceptionDetails___TypeInfo);
      uVar8 = thunk_FUN_01a89a98(uVar8,&stack0x00000040);
      uVar10 = thunk_FUN_01a6ca08(AWSSignatureV4_S3_Signers_AWS4SignerBase_TypeInfo);
      uVar8 = FUN_025b4d3c(uVar10,uVar8,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
      uVar10 = thunk_FUN_01a89e68();
      FUN_02765308(uVar10,uVar8,0);
      uVar8 = thunk_FUN_01a6ca08(AWSSignatureV4_S3_Signers_AWS4SignerForAuthorizationHeader_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar10,uVar8);
    }
    FUN_021f44ec();
    in_stack_00000010 = in_stack_00000040;
    in_stack_00000018 = in_stack_00000048;
    uVar7 = FUN_0329161c(&stack0x00000010,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0)
      goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = in_stack_00000028;
      in_stack_00000030 = in_stack_00000010;
      in_stack_00000038 = in_stack_00000018;
      FUN_0219b83c(*(long *)(unaff_x19 + 0x30),&stack0x00000040,&stack0x00000030,
                   *(undefined8 *)System_Text_ASCIIEncoding_TypeInfo);
    }
  }
  puVar2 = int_________TypeInfo;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = in_stack_00000028;
    FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*(undefined8 *)int_________TypeInfo);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      iVar5 = FUN_0219b384(*(long *)(unaff_x19 + 0x48),
                           *(undefined8 *)
                            Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_TypeInfo)
      ;
      puVar3 = Mono_Security_ASN1_TypeInfo;
      if (iVar5 < 1) {
LAB_0324dec0:
        puVar3 = Mono_CSharp_ATypeNameExpression_TypeInfo;
        puVar2 = Mono_CSharp_Linq_AQueryClause_TypeInfo;
        if ((unaff_x23 & 1) == 0) {
          FUN_0324e7f4();
        }
        else if (0 < *unaff_x22) {
          iVar5 = 0;
          do {
            FUN_021f44ec();
            FUN_0324e7f4();
            iVar5 = iVar5 + 1;
          } while (iVar5 < *unaff_x22);
        }
        uVar11 = 2;
        if ((unaff_w24 & 1) == 0) {
          uVar11 = 0;
        }
        uVar8 = FUN_03291784(&stack0x00000020,0);
        in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uVar11);
        FUN_01f57ee8(unaff_x19 + 0x220,uVar8,&stack0x00000040,*(undefined8 *)puVar3,0,
                     *(undefined8 *)puVar2);
        return;
      }
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        uVar8 = FUN_0219b394(*(long *)(unaff_x19 + 0x48),*(undefined8 *)int_______TypeInfo);
        lVar6 = FUN_01f70920(uVar8,*(undefined8 *)puVar3);
        if (lVar6 != 0) {
          if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
            uVar7 = 0;
            uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              if (*(long *)(unaff_x19 + 0x48) == 0)
              goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
              lVar1 = lVar6 + uVar7 * 0x10;
              uVar8 = *(undefined8 *)(lVar1 + 0x20);
              uVar10 = *(undefined8 *)(lVar1 + 0x28);
              in_stack_00000030 = uVar8;
              in_stack_00000038 = uVar10;
              FUN_0219b634(*(long *)(unaff_x19 + 0x48),&stack0x00000030,&stack0x00000040,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_Instruction_______TypeInfo);
              uVar4 = in_stack_00000048;
              if ((unaff_x23 & 1) == 0) {
                uVar9 = FUN_03291a94(in_stack_00000020,in_stack_00000028,0);
                uVar12 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                                   (uVar4,uVar9,0x3b,0);
                if ((uVar12 & 1) != 0) {
                  if (*(long *)(unaff_x19 + 0x48) == 0)
                  goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
                  in_stack_00000040 = uVar8;
                  in_stack_00000048 = uVar10;
                  FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*(undefined8 *)puVar2);
                }
              }
              else if (0 < *unaff_x22) {
                iVar5 = 0;
                do {
                  FUN_021f44ec();
                  uVar12 = FUN_032917d8(uVar8,uVar10,in_stack_00000040,in_stack_00000048,0);
                  if ((uVar12 & 1) == 0) {
                    FUN_021f44ec();
                    uVar9 = FUN_03291a94(in_stack_00000040,in_stack_00000048,0);
                    uVar12 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                                       (uVar4,uVar9,0x3b,0);
                    if ((uVar12 & 1) != 0) goto LAB_0324de48;
                  }
                  else {
LAB_0324de48:
                    if (*(long *)(unaff_x19 + 0x48) == 0)
                    goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
                    in_stack_00000040 = uVar8;
                    in_stack_00000048 = uVar10;
                    FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*(undefined8 *)puVar2)
                    ;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *unaff_x22);
              }
              uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
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


