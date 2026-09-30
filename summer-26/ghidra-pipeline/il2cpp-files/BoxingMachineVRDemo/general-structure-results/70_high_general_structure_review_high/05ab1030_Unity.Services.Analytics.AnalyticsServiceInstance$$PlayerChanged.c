/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$PlayerChanged
ENTRY_POINT: 05ab1030
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__PlayerChanged
               (long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  puVar1 = PTR_DAT_06761808;
  if ((DAT_06b816a3 & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>__ctor__);
    FUN_02d6084c(PTR_DAT_06762cd8);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>_TryGetValue__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>_set_Item__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>_Remove__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>_TryGetValue__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>_set_Item__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_Future_LoadBundleTaskProgress_Action>_set_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>__ctor__
                );
    FUN_02d6084c(PTR_DAT_06761808);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_ContainsKey__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>__ctor__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_Remove__
                );
    FUN_02d6084c(PTR_DAT_06762d70);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_TryGetValue__
                );
    FUN_02d6084c(PTR_DAT_06761158);
    FUN_02d6084c(PTR_DAT_06761148);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>_Remove__
                );
    DAT_06b816a3 = 1;
  }
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_TryGetValue__
  ;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_Remove__
  ;
  puVar4 = Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>__ctor__;
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>_set_Item__
  ;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>_TryGetValue__;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_0504920c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar9 = FUN_033f7c14(*(undefined8 *)puVar4);
  FUN_0608992c(0);
  uVar10 = *param_2;
  uVar12 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  thunk_FUN_02dd37b4(param_1 + 0x20,0);
  FUN_05ad3420(&stack0x00000008,0);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  in_stack_00000048 = 0;
  FUN_05aca898(&stack0x00000048,param_3,param_4,0);
  in_stack_00000020 = in_stack_00000048;
  in_stack_00000030 = CONCAT31(in_stack_00000030._1_3_,1);
  in_stack_00000008 = 0;
  in_stack_00000028 =
       CONCAT62((int6)(CONCAT44(*(undefined4 *)((long)param_2 + 4),(int)in_stack_00000028) >> 0x10),
                *(undefined2 *)((long)param_2 + 1)) & 0xffffffffffff0101;
  thunk_FUN_02dd37b4(&stack0x00000008,0);
  uVar12 = in_stack_00000008;
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_060a9e44(uVar10,0);
  puVar16 = (undefined8 *)(param_1 + 0x30);
  *puVar16 = uVar10;
  thunk_FUN_02dd37b4(puVar16,uVar10);
  uVar14 = *puVar16;
  uVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_05ad367c(uVar10,&stack0x00000020,uVar14,uVar9,0);
  puVar15 = (undefined8 *)(param_1 + 0x38);
  *puVar15 = uVar10;
  thunk_FUN_02dd37b4(puVar15,uVar10);
  uVar10 = *puVar15;
  uVar14 = *puVar16;
  uVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_05aaec04(uVar9,uVar10,uVar12,uVar14);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x40),uVar9);
  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
  FUN_0605d204(lVar11,0);
  plVar13 = (long *)(param_1 + 0x48);
  *plVar13 = lVar11;
  thunk_FUN_02dd37b4(plVar13,lVar11);
  if (*plVar13 != 0) {
    FUN_034b1920(*plVar13,1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                );
    if (*plVar13 != 0) {
      FUN_034b1920(*plVar13,3,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_Add__
                  );
      if (*plVar13 != 0) {
        FUN_034b1920(*plVar13,3,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                    );
        if (*plVar13 != 0) {
          FUN_034b1830(*plVar13,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_ContainsKey__
                      );
          if (*plVar13 != 0) {
            FUN_034b1920(*plVar13,1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>__ctor__
                        );
            puVar6 = 
            Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>_TryGetValue__;
            puVar5 = Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>__ctor__;
            puVar4 = 
            Method_System_Collections_Generic_Dictionary<int,_Future_LoadBundleTaskProgress_Action>_set_Item__
            ;
            puVar3 = PTR_DAT_06762d70;
            puVar2 = PTR_DAT_06761158;
            puVar1 = PTR_DAT_06761148;
            if (*plVar13 != 0) {
              FUN_034b1830(*plVar13,0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                          );
              uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_043e7948(uVar12,param_1,*(undefined8 *)puVar4,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              puVar8 = 
              Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>_Remove__
              ;
              puVar7 = 
              Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>__ctor__
              ;
              puVar4 = 
              Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>_set_Item__;
              puVar2 = 
              Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>_Remove__;
              puVar1 = PTR_DAT_06762cd8;
              FUN_06080900(uVar12,0);
              uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
              FUN_047daf30(uVar12,param_1,*(undefined8 *)puVar6,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_060a1720(uVar12,0);
              uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
              FUN_047daf30(uVar12,param_1,*(undefined8 *)puVar7,0);
              FUN_060a1908(uVar12,0);
              uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_047daf30(uVar12,param_1,*(undefined8 *)puVar2,0);
              FUN_060a1af0(uVar12,0);
              uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_047daf30(uVar12,param_1,*(undefined8 *)puVar4,0);
              FUN_060a1cd8(uVar12,0);
              FUN_06035944(*(undefined8 *)puVar8,0);
              FUN_05ab0370(param_1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


