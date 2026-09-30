/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.ICollection<Unity.Serialization.Json.SerializedValueView>.Remove
ENTRY_POINT: 0338ccc4
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


void Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_ICollection<Unity_Serialization_Json_SerializedValueView>_Remove
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  uint unaff_w24;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
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
  
  plVar6 = (long *)__cxa_begin_catch();
  lVar8 = *plVar6;
  __cxa_end_catch();
  FUN_021b51c4(&stack0x00000040,
               *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar8);
  }
  do {
    lVar8 = *(long *)(unaff_x21 + 0x50);
    if (lVar8 == 0) {
LAB_0338cea4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_w24) {
LAB_0338cea8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(long *)(lVar8 + unaff_x25 * 8 + 0x20) == 0) goto LAB_0338cea4;
    Animancer_FadeGroup__get_TargetWeight();
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000050 = in_stack_00000010;
    while (uVar5 = FUN_021b51c8(&stack0x00000040,*unaff_x28), (uVar5 & 1) != 0) {
      FUN_01b7a454(&stack0x00000040,&stack0x00000088,*unaff_x27);
    }
    FUN_021b51c4(&stack0x00000040,
                 *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w24 == 2) {
      if (*(long *)(unaff_x21 + 0x68) != 0) {
        Animancer_FadeGroup__get_TargetWeight();
        puVar2 = System_Runtime_Remoting_IEnvoyInfo_TypeInfo;
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000020 = in_stack_00000000;
        in_stack_00000030 = in_stack_00000010;
        while (uVar5 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
          FUN_01b7a454(&stack0x00000020);
          in_stack_00000018 = in_stack_00000000;
          if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar5 = FUN_0338d0a0(*(long *)(unaff_x19 + 0x10),&stack0x00000018);
          if ((uVar5 & 1) == 0) {
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
          lVar8 = *(long *)(unaff_x19 + 0x28);
          if (lVar8 != 0) {
            lVar7 = *(long *)System_Xml_IDtdInfo_TypeInfo;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            uVar5 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
            if ((uVar5 & 1) == 0) {
              *(undefined4 *)(lVar8 + 0x18) = 0;
            }
            else {
              iVar1 = *(int *)(lVar8 + 0x18);
              *(undefined4 *)(lVar8 + 0x18) = 0;
              if (0 < iVar1) {
                FUN_02793a34(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
              }
            }
            return;
          }
        }
      }
      goto LAB_0338cea4;
    }
    lVar8 = *(long *)(unaff_x21 + 0x60);
    if (lVar8 == 0) goto LAB_0338cea4;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w24) goto LAB_0338cea8;
    unaff_x25 = (long)(int)unaff_w24;
    if (*(long *)(lVar8 + unaff_x25 * 8 + 0x20) == 0) goto LAB_0338cea4;
    Animancer_FadeGroup__get_TargetWeight();
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000050 = in_stack_00000010;
    while (uVar5 = FUN_021b51c8(&stack0x00000040,*unaff_x28), (uVar5 & 1) != 0) {
      FUN_01b7a454(&stack0x00000040,&stack0x00000060,*unaff_x27);
      uVar3 = in_stack_00000060;
      lVar8 = *(long *)(unaff_x20 + 8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_03389790(uVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uStack0000000000000068 = uVar4;
      FUN_01b5f01c(lVar8,&stack0x00000068,*unaff_x29);
      lVar8 = *(long *)(unaff_x20 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      uVar4 = FUN_03389790(uVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uStack000000000000006c = uVar4;
      FUN_01b5f01c(lVar8,(long)&stack0x00000068 + 4,*unaff_x29);
    }
    FUN_021b51c4(&stack0x00000040,
                 *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
    lVar8 = *(long *)(unaff_x21 + 0x58);
    if (lVar8 == 0) goto LAB_0338cea4;
    if (*(uint *)(lVar8 + 0x18) <= unaff_w24) goto LAB_0338cea8;
    if (*(long *)(lVar8 + unaff_x25 * 8 + 0x20) == 0) goto LAB_0338cea4;
    Animancer_FadeGroup__get_TargetWeight();
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000050 = in_stack_00000010;
    while (uVar5 = FUN_021b51c8(&stack0x00000040,*unaff_x28), (uVar5 & 1) != 0) {
      FUN_01b7a454(&stack0x00000040,&stack0x00000070,*unaff_x27);
      uVar3 = in_stack_00000070;
      in_stack_00000038 = in_stack_00000070;
      lVar8 = *(long *)(unaff_x21 + 0x60);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000078 = in_stack_00000070;
      uVar5 = FUN_02216960(lVar8,&stack0x00000078,
                           *(undefined8 *)
                            Unity_Services_Analytics_Internal_IFileSystemCalls_TypeInfo);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar5 = FUN_0338cfc8(*(long *)(unaff_x19 + 0x10),&stack0x00000038);
        if ((uVar5 & 1) == 0) {
          lVar8 = *(long *)(unaff_x20 + 8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar8 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar4 = FUN_03389790(uVar3);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uStack0000000000000080 = uVar4;
          FUN_01b5f01c(lVar8,&stack0x00000080,*unaff_x29);
          lVar8 = *(long *)(unaff_x19 + 0x70);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar8 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar8 = *(long *)(lVar8 + unaff_x25 * 8 + 0x20);
          uVar4 = FUN_03389790(uVar3);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uStack0000000000000084 = uVar4;
          FUN_01b5f01c(lVar8,(long)&stack0x00000080 + 4,*unaff_x29);
        }
      }
    }
    FUN_021b51c4(&stack0x00000040,
                 *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
  } while( true );
}


