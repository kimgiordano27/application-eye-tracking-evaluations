/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequestOptions$$set_RequestId
ENTRY_POINT: 013fbe04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_10
*/


undefined8 Meta_WitAi_Requests_VoiceServiceRequestOptions__set_RequestId(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined4 in_w8;
  long *unaff_x19;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  *(undefined4 *)(unaff_x19 + 0x20) = in_w8;
  lVar6 = unaff_x19[0x38];
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    iVar4 = (**(code **)(*unaff_x19 + 0x4f8))();
    if (3 < iVar4) {
      lVar7 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
      lVar6 = *(long *)(lVar7 + 0x38);
      if (lVar6 == 0) {
        FUN_00d59478(lVar7);
        lVar6 = *(long *)(lVar7 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar1 = Method_System_Collections_Generic_Dictionary<int,_Vector4>_Clear__;
      lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_00d5941c();
      }
      FUN_013f38b0(*(undefined8 *)puVar1,**(undefined8 **)(lVar6 + 0xb8),0);
    }
    lVar6 = FUN_013fba34();
    unaff_x19[0x38] = lVar6;
  }
  iVar4 = FUN_013fb778();
  puVar1 = StringLiteral_302;
  if (unaff_x19[0x21] != 0) {
    if (iVar4 == *(int *)(unaff_x19[0x21] + 0x18)) {
LAB_013fbfd4:
      iVar4 = (**(code **)(*unaff_x19 + 0x4f8))();
      puVar2 = Method_System_Data_SqlTypes_SqlXmlStreamWrapper_set_Position__;
      if (4 < iVar4) {
        if (unaff_x19[0x21] == 0)
        goto Meta_WitAi_Requests_VoiceServiceRequestResults__get_StatusCode;
        uStack0000000000000008 = *(undefined4 *)(unaff_x19[0x21] + 0x18);
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000008);
        uVar8 = FUN_015f6780(*(undefined8 *)puVar2,uVar8,0);
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar6);
        }
        FUN_02660dac(uVar8,0);
      }
      return 1;
    }
    FUN_013fb7c8();
    puVar3 = StringLiteral_12558;
    puVar2 = StringLiteral_258;
    lVar6 = unaff_x19[0x21];
    if (lVar6 != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(lVar6 + 0x18) <= iVar4) goto LAB_013fbfd4;
        FUN_0132138c(lVar6,iVar4,&stack0x00000008,*(undefined8 *)puVar3);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          if (unaff_x19[0x21] == 0) break;
          FUN_0132138c(unaff_x19[0x21],iVar4,&stack0x00000008,*(undefined8 *)puVar3);
          if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) break;
          uVar8 = *(undefined8 *)(CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x18);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = FUN_0268b4e0(uVar8,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026610e4(*(undefined8 *)puVar2,0);
            return 0;
          }
          if (((unaff_x19[0x21] == 0) ||
              (FUN_0132138c(unaff_x19[0x21],iVar4,&stack0x00000008,*(undefined8 *)puVar3),
              CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0)) ||
             (unaff_x19[0x21] == 0)) break;
          FUN_0132138c(unaff_x19[0x21],iVar4,&stack0x00000008,*(undefined8 *)puVar3);
          FUN_013fb650();
        }
        lVar6 = unaff_x19[0x21];
        iVar4 = iVar4 + 1;
      } while (lVar6 != 0);
    }
  }
Meta_WitAi_Requests_VoiceServiceRequestResults__get_StatusCode:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


