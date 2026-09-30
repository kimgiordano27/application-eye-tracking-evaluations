/*
FUNCTION_NAME: Unity.Entities.ArchetypeChunkData$$GetPointerToComponentEnabledArrayForArchetype
ENTRY_POINT: 030acecc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void Unity_Entities_ArchetypeChunkData__GetPointerToComponentEnabledArrayForArchetype(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 in_stack_00000008;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x48));
  FUN_01ab69ac(PTR_DAT_03cc51a8);
  FUN_01ab69ac(PTR_DAT_03cbeda8);
  FUN_01ab69ac(PTR_DAT_03cbdf88);
  FUN_01ab69ac(System_Action<BestFitAllocator_Block>_TypeInfo);
  FUN_01ab69ac(System_Action<CoinChallengeClient_CoinChlgPostData>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cd21c0);
  FUN_01ab69ac(PTR_DAT_03cbfd20);
  FUN_01ab69ac(PTR_DAT_03cd7f98);
  *(undefined1 *)(unaff_x21 + 0x5d3) = 1;
  if (unaff_x20 == 0) goto LAB_030ad250;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  uVar5 = FUN_036d3824();
  puVar2 = PTR_DAT_03cc51a8;
  if (lVar8 == 0) goto LAB_030ad250;
  uVar6 = FUN_021e4dc4(lVar8,uVar5,*(undefined8 *)PTR_DAT_03cc51a8);
  if ((uVar6 & 1) == 0) {
    lVar8 = *(long *)(unaff_x19 + 0x10);
    uVar5 = FUN_036d3824();
joined_r0x030ad0e8:
    if (lVar8 != 0) {
      FUN_021e5f08(lVar8,uVar5,*(undefined8 *)PTR_DAT_03cc5048);
      return;
    }
  }
  else {
    uVar5 = FUN_036dc8dc();
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
    }
    uVar6 = FUN_036cee6c(uVar5,0,0);
    if (((uVar6 & 1) != 0) && (iVar4 = FUN_036df53c(), iVar4 == 0)) {
      lVar8 = FUN_036dc8dc();
      if (lVar8 == 0) goto LAB_030ad250;
      uVar5 = FUN_036d3824(lVar8,0);
      uVar7 = FUN_036d3824();
      uVar5 = FUN_025bdc88(uVar5,*(undefined8 *)PTR_DAT_03cbfd20,uVar7,0);
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_030ad250;
      uVar6 = FUN_021e4dc4(*(long *)(unaff_x19 + 0x10),uVar5,*(undefined8 *)puVar2);
      if ((uVar6 & 1) == 0) {
        uVar7 = FUN_036d3824();
        uVar7 = FUN_025be45c(*(undefined8 *)System_Action<BestFitAllocator_Block>_TypeInfo,uVar7,
                             *(undefined8 *)PTR_DAT_03cd7f98,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_036772fc(uVar7,0);
        FUN_036d38d4();
        lVar8 = *(long *)(unaff_x19 + 0x10);
        goto joined_r0x030ad0e8;
      }
    }
    puVar3 = PTR_DAT_03cd21c0;
    puVar1 = PTR_DAT_03cbeda8;
    iVar4 = 100;
    while( true ) {
      uVar5 = FUN_036d3824();
      in_stack_00000008._4_4_ = *(int *)(unaff_x19 + 0x18);
      *(int *)(unaff_x19 + 0x18) = in_stack_00000008._4_4_ + 1;
      uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
      uVar5 = FUN_025be86c(*(undefined8 *)puVar3,uVar5,uVar7,0);
      if (*(long *)(unaff_x19 + 0x10) == 0) break;
      uVar6 = FUN_021e4dc4(*(long *)(unaff_x19 + 0x10),uVar5,*(undefined8 *)puVar2);
      if ((uVar6 & 1) == 0) {
        uVar7 = FUN_036d3824();
        uVar7 = FUN_025be45c(*(undefined8 *)
                              System_Action<CoinChallengeClient_CoinChlgPostData>_TypeInfo,uVar7,
                             *(undefined8 *)PTR_DAT_03cd7f98,uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar7);
        FUN_036d38d4();
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          FUN_021e5f08(*(long *)(unaff_x19 + 0x10),uVar5,*(undefined8 *)PTR_DAT_03cc5048);
          return;
        }
        break;
      }
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
        uVar5 = thunk_FUN_01a89e68();
        FUN_0276e954(uVar5,0);
        uVar7 = thunk_FUN_01a6ca08(System_Action<CoinChallengeClient_GetChlgsTaskPostData>_TypeInfo)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar7);
      }
    }
  }
LAB_030ad250:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


