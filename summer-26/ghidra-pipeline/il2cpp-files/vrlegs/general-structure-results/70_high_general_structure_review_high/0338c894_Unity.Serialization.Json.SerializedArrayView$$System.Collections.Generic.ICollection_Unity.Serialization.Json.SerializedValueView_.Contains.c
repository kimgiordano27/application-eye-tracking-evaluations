/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.ICollection<Unity.Serialization.Json.SerializedValueView>.Contains
ENTRY_POINT: 0338c894
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


long Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_ICollection<Unity_Serialization_Json_SerializedValueView>_Contains
               (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x21;
  uint uVar11;
  long lVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  
  if (param_1 != 0) {
    lVar8 = FUN_021a228c(param_1,param_2,*(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
    FUN_03388dfc();
    *(undefined1 *)(lVar8 + 0x40) = 0;
    puVar5 = UnityEngine_UIElements_IEditableElement_TypeInfo;
    puVar4 = Unity_Services_Economy_IEconomyService_TypeInfo;
    puVar3 = Unity_Properties_IDictionaryPropertyBagVisitor_TypeInfo;
    puVar2 = PTR_DAT_03cbe508;
    if (unaff_x21 != 0) {
      uVar11 = 0;
      do {
        lVar10 = *(long *)(unaff_x21 + 0x60);
        if (lVar10 == 0) goto LAB_0338cea4;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_0338cea8:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar12 = (long)(int)uVar11;
        if (*(long *)(lVar10 + lVar12 * 8 + 0x20) == 0) goto LAB_0338cea4;
        Animancer_FadeGroup__get_TargetWeight();
        in_stack_00000048 = in_stack_00000008;
        in_stack_00000040 = in_stack_00000000;
        in_stack_00000050 = in_stack_00000010;
        while (uVar9 = FUN_021b51c8(&stack0x00000040,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          FUN_01b7a454(&stack0x00000040,&stack0x00000060,*(undefined8 *)puVar5);
          uVar6 = in_stack_00000060;
          lVar10 = *(long *)(lVar8 + 8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_03389790(uVar6);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uStack0000000000000068 = uVar7;
          FUN_01b5f01c(lVar10,&stack0x00000068,*(undefined8 *)puVar2);
          lVar10 = *(long *)(lVar8 + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
          uVar7 = FUN_03389790(uVar6);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uStack000000000000006c = uVar7;
          FUN_01b5f01c(lVar10,(long)&stack0x00000068 + 4,*(undefined8 *)puVar2);
        }
        FUN_021b51c4(&stack0x00000040,
                     *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
        lVar10 = *(long *)(unaff_x21 + 0x58);
        if (lVar10 == 0) goto LAB_0338cea4;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_0338cea8;
        if (*(long *)(lVar10 + lVar12 * 8 + 0x20) == 0) goto LAB_0338cea4;
        Animancer_FadeGroup__get_TargetWeight();
        in_stack_00000048 = in_stack_00000008;
        in_stack_00000040 = in_stack_00000000;
        in_stack_00000050 = in_stack_00000010;
        while (uVar9 = FUN_021b51c8(&stack0x00000040,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          FUN_01b7a454(&stack0x00000040,&stack0x00000070,*(undefined8 *)puVar5);
          uVar6 = in_stack_00000070;
          in_stack_00000038 = in_stack_00000070;
          lVar10 = *(long *)(unaff_x21 + 0x60);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          in_stack_00000078 = in_stack_00000070;
          uVar9 = FUN_02216960(lVar10,&stack0x00000078,
                               *(undefined8 *)
                                Unity_Services_Analytics_Internal_IFileSystemCalls_TypeInfo);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar9 = FUN_0338cfc8(*(long *)(unaff_x19 + 0x10),&stack0x00000038);
            if ((uVar9 & 1) == 0) {
              lVar10 = *(long *)(lVar8 + 8);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = FUN_03389790(uVar6);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uStack0000000000000080 = uVar7;
              FUN_01b5f01c(lVar10,&stack0x00000080,*(undefined8 *)puVar2);
              lVar10 = *(long *)(unaff_x19 + 0x70);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
              uVar7 = FUN_03389790(uVar6);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uStack0000000000000084 = uVar7;
              FUN_01b5f01c(lVar10,(long)&stack0x00000080 + 4,*(undefined8 *)puVar2);
            }
          }
        }
        FUN_021b51c4(&stack0x00000040,
                     *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
        lVar10 = *(long *)(unaff_x21 + 0x50);
        if (lVar10 == 0) goto LAB_0338cea4;
        if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_0338cea8;
        if (*(long *)(lVar10 + lVar12 * 8 + 0x20) == 0) goto LAB_0338cea4;
        Animancer_FadeGroup__get_TargetWeight();
        in_stack_00000048 = in_stack_00000008;
        in_stack_00000040 = in_stack_00000000;
        in_stack_00000050 = in_stack_00000010;
        while (uVar9 = FUN_021b51c8(&stack0x00000040,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          FUN_01b7a454(&stack0x00000040,&stack0x00000088,*(undefined8 *)puVar5);
        }
        FUN_021b51c4(&stack0x00000040,
                     *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
        uVar11 = uVar11 + 1;
      } while (uVar11 != 2);
      if (*(long *)(unaff_x21 + 0x68) != 0) {
        Animancer_FadeGroup__get_TargetWeight();
        puVar2 = System_Runtime_Remoting_IEnvoyInfo_TypeInfo;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000030 = in_stack_00000010;
        while (uVar9 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
          FUN_01b7a454(&stack0x00000020);
          in_stack_00000018 = in_stack_00000000;
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar9 = FUN_0338d0a0(*(long *)(unaff_x19 + 0x10),&stack0x00000018);
          if ((uVar9 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_01b5f01c();
          }
        }
        FUN_021b51c4(&stack0x00000020,
                     *(undefined8 *)Unity_Services_Core_Environments_Internal_IEnvironments_TypeInfo
                    );
        if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
          FUN_0338acd4(*(long *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x28),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x58) + 0x10),0);
          lVar10 = *(long *)(unaff_x19 + 0x28);
          if (lVar10 != 0) {
            lVar12 = *(long *)System_Xml_IDtdInfo_TypeInfo;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
            if ((uVar9 & 1) == 0) {
              *(undefined4 *)(lVar10 + 0x18) = 0;
            }
            else {
              iVar1 = *(int *)(lVar10 + 0x18);
              *(undefined4 *)(lVar10 + 0x18) = 0;
              if (0 < iVar1) {
                FUN_02793a34(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
              }
            }
            return lVar8;
          }
        }
      }
    }
  }
LAB_0338cea4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


