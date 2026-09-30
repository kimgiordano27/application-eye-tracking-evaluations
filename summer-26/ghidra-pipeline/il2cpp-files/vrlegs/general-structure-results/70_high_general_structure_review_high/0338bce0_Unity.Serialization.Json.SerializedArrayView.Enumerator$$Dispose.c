/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView.Enumerator$$Dispose
ENTRY_POINT: 0338bce0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void Unity_Serialization_Json_SerializedArrayView_Enumerator__Dispose(void)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x19;
  undefined8 uVar13;
  undefined8 uVar14;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  undefined8 *unaff_x28;
  long in_stack_00000000;
  uint in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  
code_r0x0338bce0:
  iVar8 = unaff_w25;
  if (unaff_w27 == -1) {
    do {
      iVar8 = unaff_w26;
      lVar10 = *(long *)(unaff_x19 + 0x80);
      if (lVar10 == 0) goto LAB_0338bee0;
      if (*(int *)(lVar10 + 0x18) + -1 <= iVar8) {
        unaff_w27 = -1;
        break;
      }
      unaff_w26 = iVar8 + 1;
      lVar10 = FUN_021a228c(lVar10,unaff_w26,*(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
      if (*(char *)(lVar10 + 0x40) == '\0') {
        unaff_w27 = -1;
      }
      else {
        if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
        lVar10 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),unaff_w26,
                              *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
        unaff_w27 = *(int *)(lVar10 + 0x24);
      }
    } while (unaff_w27 == -1);
    iVar8 = iVar8 + 1;
  }
  puVar3 = PTR_DAT_03cbdee0;
  lVar10 = *(long *)(unaff_x19 + 0x80);
  if (lVar10 != 0) {
    if ((iVar8 == *(int *)(lVar10 + 0x18)) &&
       (lVar10 = FUN_021a228c(lVar10,unaff_w25,*(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo)
       , unaff_w27 = iVar8, *(char *)(lVar10 + 0x1e) == '\0')) {
      uVar13 = *(undefined8 *)(unaff_x19 + 0x20);
      FUN_018748a8(uVar13);
      uVar11 = thunk_FUN_01a6ca08(Unity_Services_Economy_IEconomyPlayerInventoryApiClient_TypeInfo);
      lVar10 = FUN_0199976c(uVar13,unaff_w25,uVar11);
      uVar11 = thunk_FUN_01a6ca08(UnityEngine_EventSystems_IEventSystemHandler_TypeInfo);
      in_stack_00000008 = unaff_w20;
      uVar13 = thunk_FUN_01a6ca08(Unity_Properties_IExcludePropertyAdapter_TypeInfo);
      uVar13 = thunk_FUN_01a89a98(uVar13,&stack0x00000008);
      FUN_018748a8(lVar10);
      uVar14 = *(undefined8 *)(lVar10 + 0x10);
      uVar12 = thunk_FUN_01a6ca08(UnityEngine_UIElements_IExperimentalFeatures_TypeInfo);
      uVar11 = FUN_025be8b0(uVar12,uVar13,uVar11,uVar14,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
      uVar13 = thunk_FUN_01a89e68();
      FUN_0276a4a8(uVar13,uVar11,0);
      uVar11 = thunk_FUN_01a6ca08(UnityEngine_IExposedPropertyTable_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar13,uVar11);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar8 = FUN_0276c0cc(0,unaff_w27 + -1,0);
    puVar4 = System_Xml_IDtdAttributeInfo_TypeInfo;
    lVar10 = *(long *)(unaff_x19 + 0x80);
    if (lVar10 != 0) {
      while( true ) {
        lVar10 = FUN_021a228c(lVar10,iVar8,*(undefined8 *)puVar4);
        if (*(char *)(lVar10 + 0x1c) == '\0') break;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iVar8 = FUN_0276c0cc(0,iVar8 + -1,0);
        lVar10 = *(long *)(unaff_x19 + 0x80);
        if (lVar10 == 0) goto LAB_0338bee0;
      }
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        lVar10 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar8,*(undefined8 *)puVar4);
LAB_0338be38:
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) {
LAB_0338bee4:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar10 = *(long *)(lVar10 + in_stack_00000000 * 8 + 0x20);
          if (lVar10 != 0) {
            in_stack_00000008 = unaff_w22;
            FUN_01b5f01c(lVar10,&stack0x00000008,*(undefined8 *)PTR_DAT_03cbe508);
            bVar2 = 0;
            do {
              if ((!(bool)(unaff_w24 == -1 & bVar2)) && (((unaff_w23 ^ 1) & 1) == 0)) {
                if (*(long *)(unaff_x19 + 0x10) == 0) break;
                Unity_Serialization_Json_SerializedMemberView__Name
                          (*(long *)(unaff_x19 + 0x10),unaff_w20,unaff_w22);
              }
              do {
                unaff_w22 = unaff_w22 + 1;
                if (*(int *)(unaff_x21 + 0x18) <= unaff_w22) {
                  do {
                    unaff_w20 = unaff_w20 + 1;
                    if (unaff_w20 == 2) {
                      return;
                    }
                    lVar10 = *(long *)(unaff_x19 + 0x78);
                    if (lVar10 == 0) goto LAB_0338bee0;
                    if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_0338bee4;
                    in_stack_00000000 = (long)(int)unaff_w20;
                    unaff_x21 = *(long *)(lVar10 + in_stack_00000000 * 8 + 0x20);
                    if (unaff_x21 == 0) goto LAB_0338bee0;
                  } while (*(int *)(unaff_x21 + 0x18) < 1);
                  unaff_w22 = 0;
                }
                puVar9 = (undefined8 *)FUN_021a228c(unaff_x21,unaff_w22,*unaff_x28);
                in_stack_00000030 = puVar9[2];
                in_stack_00000028 = puVar9[1];
                in_stack_00000020 = *puVar9;
                if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0338bee0;
                unaff_w23 = FUN_0338c01c(*(long *)(unaff_x19 + 0x10),unaff_w20,unaff_w22);
                uVar5 = in_stack_00000030;
              } while (((unaff_w23 & 1) == 0) && ((in_stack_00000030 & 0x100000000) != 0));
              unaff_w24 = FUN_0338aa1c();
              if (unaff_w24 != -1) {
                if (*(long *)(unaff_x19 + 0x80) == 0) break;
                lVar10 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),unaff_w24,*(undefined8 *)puVar4);
                lVar10 = *(long *)(lVar10 + 8);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_0338bee4;
                lVar10 = *(long *)(lVar10 + in_stack_00000000 * 8 + 0x20);
                if (lVar10 == 0) break;
                in_stack_00000008 = unaff_w22;
                FUN_01b5f01c(lVar10,&stack0x00000008,*(undefined8 *)PTR_DAT_03cbe508);
              }
              uVar6 = FUN_0338a938();
              uVar7 = FUN_0338ab10();
              if (((uVar5 & 0x100000000) != 0) || (unaff_w24 != -1)) {
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                unaff_w25 = FUN_0276c0cc(uVar7,uVar6,0);
                if (unaff_w25 != -1) goto code_r0x0338bca0;
              }
              bVar2 = 1;
            } while( true );
          }
        }
      }
    }
  }
LAB_0338bee0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
code_r0x0338bca0:
  if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
  lVar10 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),unaff_w25,*(undefined8 *)puVar4);
  if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
  cVar1 = *(char *)(lVar10 + 0x40);
  lVar10 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),unaff_w25,*(undefined8 *)puVar4);
  if (cVar1 != '\0') goto code_r0x0338bcd8;
  goto LAB_0338be38;
code_r0x0338bcd8:
  unaff_w27 = *(int *)(lVar10 + 0x24);
  unaff_w26 = unaff_w25;
  goto code_r0x0338bce0;
}


