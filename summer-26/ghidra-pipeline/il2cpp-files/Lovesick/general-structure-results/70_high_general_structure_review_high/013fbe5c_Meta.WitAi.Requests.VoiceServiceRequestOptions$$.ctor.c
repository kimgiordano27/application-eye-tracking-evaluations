/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequestOptions$$.ctor
ENTRY_POINT: 013fbe5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8
*/


undefined8 Meta_WitAi_Requests_VoiceServiceRequestOptions___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x22;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if (param_1 == 0) {
    FUN_00d59478();
    param_1 = *(long *)(unaff_x20 + 0x38);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_Vector4>_Clear__;
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  FUN_013f38b0(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar5 = FUN_013fba34();
  unaff_x19[0x38] = lVar5;
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
        uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&stack0x00000008);
        uVar7 = FUN_015f6780(*(undefined8 *)puVar2,uVar7,0);
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar5);
        }
        FUN_02660dac(uVar7,0);
      }
      return 1;
    }
    FUN_013fb7c8();
    puVar3 = StringLiteral_12558;
    puVar2 = StringLiteral_258;
    lVar5 = unaff_x19[0x21];
    if (lVar5 != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(lVar5 + 0x18) <= iVar4) goto LAB_013fbfd4;
        FUN_0132138c(lVar5,iVar4,&stack0x00000008,*(undefined8 *)puVar3);
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) != 0) {
          if (unaff_x19[0x21] == 0) break;
          FUN_0132138c(unaff_x19[0x21],iVar4,&stack0x00000008,*(undefined8 *)puVar3);
          if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) break;
          uVar7 = *(undefined8 *)(CONCAT44(uStack000000000000000c,uStack0000000000000008) + 0x18);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_0268b4e0(uVar7,0,0);
          if ((uVar6 & 1) != 0) {
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
        lVar5 = unaff_x19[0x21];
        iVar4 = iVar4 + 1;
      } while (lVar5 != 0);
    }
  }
Meta_WitAi_Requests_VoiceServiceRequestResults__get_StatusCode:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


