/*
FUNCTION_NAME: FUN_013fbd50
ENTRY_POINT: 013fbd50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 FUN_013fbd50(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if ((DAT_037768fa & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__);
                    /* try { // try from 013fbd84 to 014fbdab has its CatchHandler @ 013fbdcc */
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderGraphPass>__ctor__);
                    /* try { // try from 013fbdac to 014fbdb7 has its CatchHandler @ 013fba98 */
    thunk_FUN_00d48444(StringLiteral_12558);
                    /* try { // try from 013fbdb8 to 014fbdbf has its CatchHandler @ 013fbdcc */
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
                    /* catch() { ... } // from try @ 013fbd40 with catch @ 013fbdc0 */
    thunk_FUN_00d48444(StringLiteral_258);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 013fbd84 with catch @ 013fbdcc
                       catch(type#2 @ 00000000) { ... } // from try @ 013fbdb8 with catch @ 013fbdcc
                        */
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_Vector4>_Clear__);
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlXmlStreamWrapper_set_Position__);
    DAT_037768fa = 1;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (param_1[0x21] != 0) {
    if (*(int *)(param_1[0x21] + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    lVar7 = param_1[0x38];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0268b4e0(lVar7,0,0);
    if ((uVar6 & 1) != 0) {
      iVar5 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
      if (3 < iVar5) {
        lVar8 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
        lVar7 = *(long *)(lVar8 + 0x38);
        if (lVar7 == 0) {
          FUN_00d59478(lVar8);
          lVar7 = *(long *)(lVar8 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        puVar2 = Method_System_Collections_Generic_Dictionary<int,_Vector4>_Clear__;
        lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_00d5941c();
        }
        FUN_013f38b0(*(undefined8 *)puVar2,**(undefined8 **)(lVar7 + 0xb8),0);
      }
      lVar7 = FUN_013fba34(param_1);
      param_1[0x38] = lVar7;
    }
    iVar5 = FUN_013fb778(param_1);
    puVar2 = StringLiteral_302;
    if (param_1[0x21] != 0) {
      if (iVar5 == *(int *)(param_1[0x21] + 0x18)) {
LAB_013fbfd4:
        iVar5 = (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
        puVar1 = Method_System_Data_SqlTypes_SqlXmlStreamWrapper_set_Position__;
        if (4 < iVar5) {
          if (param_1[0x21] == 0)
          goto Meta_WitAi_Requests_VoiceServiceRequestResults__get_StatusCode;
          local_48 = *(undefined4 *)(param_1[0x21] + 0x18);
          uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                     ,&local_48);
          uVar9 = FUN_015f6780(*(undefined8 *)puVar1,uVar9,0);
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar7);
          }
          FUN_02660dac(uVar9,0);
        }
        return 1;
      }
      FUN_013fb7c8(param_1);
      puVar4 = StringLiteral_12558;
      puVar3 = StringLiteral_258;
      lVar7 = param_1[0x21];
      if (lVar7 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(lVar7 + 0x18) <= iVar5) goto LAB_013fbfd4;
          FUN_0132138c(lVar7,iVar5,&local_48,*(undefined8 *)puVar4);
          if (CONCAT44(uStack_44,local_48) != 0) {
            if (param_1[0x21] == 0) break;
            FUN_0132138c(param_1[0x21],iVar5,&local_48,*(undefined8 *)puVar4);
            if (CONCAT44(uStack_44,local_48) == 0) break;
            uVar9 = *(undefined8 *)(CONCAT44(uStack_44,local_48) + 0x18);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_0268b4e0(uVar9,0,0);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_026610e4(*(undefined8 *)puVar3,0);
              return 0;
            }
            if (param_1[0x21] == 0) break;
            FUN_0132138c(param_1[0x21],iVar5,&local_48,*(undefined8 *)puVar4);
            if ((CONCAT44(uStack_44,local_48) == 0) || (param_1[0x21] == 0)) break;
            uVar9 = *(undefined8 *)(CONCAT44(uStack_44,local_48) + 0x18);
            FUN_0132138c(param_1[0x21],iVar5,&local_48,*(undefined8 *)puVar4);
            FUN_013fb650(param_1,uVar9,CONCAT44(uStack_44,local_48));
          }
          lVar7 = param_1[0x21];
          iVar5 = iVar5 + 1;
        } while (lVar7 != 0);
      }
    }
  }
Meta_WitAi_Requests_VoiceServiceRequestResults__get_StatusCode:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


