/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$ApplicationPaused
ENTRY_POINT: 05ab1188
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__ApplicationPaused(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar9;
  undefined4 unaff_w21;
  undefined8 uVar10;
  undefined4 unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *puVar11;
  long unaff_x26;
  undefined8 *puVar12;
  long unaff_x27;
  undefined8 *puVar13;
  long unaff_x28;
  undefined8 *puVar14;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 uStack0000000000000020;
  ulong uStack0000000000000028;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000048;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_Remove__
  ;
  puVar14 = *(undefined8 **)(unaff_x28 + 0xda8);
  puVar13 = *(undefined8 **)(unaff_x27 + 0xd98);
  puVar11 = *(undefined8 **)(unaff_x24 + 0xde8);
  puVar12 = *(undefined8 **)(unaff_x26 + 0xda0);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  FUN_0504920c();
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_033f7c14(*puVar14);
  FUN_0608992c(0);
  uVar6 = *unaff_x20;
  uVar8 = unaff_x20[2];
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x20[1];
  *(undefined8 *)(unaff_x19 + 0x18) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar8;
  thunk_FUN_02dd37b4(unaff_x19 + 0x20,0);
  FUN_05ad3420(&stack0x00000008,0);
  uStack0000000000000028 = in_stack_00000010;
  uStack0000000000000020 = in_stack_00000008;
  uStack0000000000000030 = in_stack_00000018;
  in_stack_00000048 = 0;
  FUN_05aca898(&stack0x00000048,unaff_w22,unaff_w21,0);
  uStack0000000000000020 = in_stack_00000048;
  uStack0000000000000030 = CONCAT31(uStack0000000000000030._1_3_,1);
  in_stack_00000008 = 0;
  uStack0000000000000028 =
       CONCAT62((int6)(CONCAT44(*(undefined4 *)((long)unaff_x20 + 4),(int)uStack0000000000000028) >>
                      0x10),*(undefined2 *)((long)unaff_x20 + 1)) & 0xffffffffffff0101;
  thunk_FUN_02dd37b4(&stack0x00000008,0);
  uVar8 = in_stack_00000008;
  uVar6 = thunk_FUN_02d9d534(*puVar13);
  FUN_060a9e44(uVar6,0);
  puVar13 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar13 = uVar6;
  thunk_FUN_02dd37b4(puVar13,uVar6);
  uVar10 = *puVar13;
  uVar6 = thunk_FUN_02d9d534(*puVar11);
  FUN_05ad367c(uVar6,&stack0x00000020,uVar10,uVar5,0);
  puVar11 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar11 = uVar6;
  thunk_FUN_02dd37b4(puVar11,uVar6);
  uVar6 = *puVar11;
  uVar10 = *puVar13;
  uVar5 = thunk_FUN_02d9d534(*puVar12);
  FUN_05aaec04(uVar5,uVar6,uVar8,uVar10);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x19 + 0x40),uVar5);
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0605d204(lVar7,0);
  plVar9 = (long *)(unaff_x19 + 0x48);
  *plVar9 = lVar7;
  thunk_FUN_02dd37b4(plVar9,lVar7);
  if (*plVar9 != 0) {
    FUN_034b1920(*plVar9,1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                );
    if (*plVar9 != 0) {
      FUN_034b1920(*plVar9,3,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_Add__
                  );
      if (*plVar9 != 0) {
        FUN_034b1920(*plVar9,3,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                    );
        if (*plVar9 != 0) {
          FUN_034b1830(*plVar9,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_ContainsKey__
                      );
          if (*plVar9 != 0) {
            FUN_034b1920(*plVar9,1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>__ctor__
                        );
            puVar4 = Method_System_Collections_Generic_Dictionary<int,_Future_Query_Action>__ctor__;
            puVar3 = PTR_DAT_06762d70;
            puVar2 = PTR_DAT_06761158;
            puVar1 = PTR_DAT_06761148;
            if (*plVar9 != 0) {
              FUN_034b1830(*plVar9,0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                          );
              uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_043e7948();
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              puVar2 = 
              Method_System_Collections_Generic_Dictionary<int,_Future_QuerySnapshot_Action>_Remove__
              ;
              puVar1 = PTR_DAT_06762cd8;
              FUN_06080900(uVar8,0);
              uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
              FUN_047daf30();
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_060a1720(uVar8,0);
              uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
              FUN_047daf30();
              FUN_060a1908(uVar8,0);
              uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_047daf30();
              FUN_060a1af0(uVar8,0);
              uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
              FUN_047daf30();
              FUN_060a1cd8(uVar8,0);
              FUN_06035944(*(undefined8 *)puVar2,0);
              FUN_05ab0370();
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


