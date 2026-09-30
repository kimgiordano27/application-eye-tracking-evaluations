/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$ConvertCurrencyToMinorUnits
ENTRY_POINT: 05ab178c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__ConvertCurrencyToMinorUnits
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x19;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_000001b8;
  
  FUN_034b1a10(&stack0x00000028,param_1,0,3,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_get_Item__
              );
  memcpy(&stack0x00000150,&stack0x00000028,0x60);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_034b1ad0(&stack0x00000028,*(long *)(unaff_x19 + 0x48),3,0,1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_MetaOpenXRPassthroughLayer_PassthroughDataContainer>_set_Item__
                );
    in_stack_00000128 = in_stack_00000030;
    in_stack_00000120 = in_stack_00000028;
    in_stack_00000138 = in_stack_00000040;
    in_stack_00000130 = in_stack_00000038;
    in_stack_00000140 = in_stack_00000048;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_034b1ad0(&stack0x00000028,*(long *)(unaff_x19 + 0x48),3,1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_OpenXRProjectionLayer_ProjectionData>_Clear__
                  );
      in_stack_000000f8 = in_stack_00000030;
      in_stack_000000f0 = in_stack_00000028;
      in_stack_00000108 = in_stack_00000040;
      in_stack_00000100 = in_stack_00000038;
      in_stack_00000110 = in_stack_00000048;
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_034b1ad0(&stack0x00000028,*(long *)(unaff_x19 + 0x48),3,0,0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_OpenXRProjectionLayer_ProjectionData>__ctor__
                    );
        puVar2 = 
        Method_System_Collections_Generic_Dictionary<int,_Future_DocumentReference_Action>_Remove__;
        puVar1 = 
        Method_System_Collections_Generic_Dictionary<int,_Future_DocumentReference_Action>__ctor__;
        in_stack_000000c8 = in_stack_00000030;
        in_stack_000000c0 = in_stack_00000028;
        in_stack_000000d8 = in_stack_00000040;
        in_stack_000000d0 = in_stack_00000038;
        in_stack_000000e0 = in_stack_00000048;
        if (*(long *)(unaff_x19 + 0x48) != 0) {
          FUN_034b1ad0(&stack0x00000028,*(long *)(unaff_x19 + 0x48),3,0,1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_OpenXRProjectionLayer_ProjectionData>_Add__
                      );
          in_stack_00000098 = in_stack_00000030;
          in_stack_00000090 = in_stack_00000028;
          in_stack_000000a8 = in_stack_00000040;
          in_stack_000000a0 = in_stack_00000038;
          in_stack_000000b0 = in_stack_00000048;
          in_stack_000001b8 = FUN_05ab1bd0();
          FUN_03d8a9f4(&stack0x000001b8,*(undefined8 *)puVar1);
          in_stack_00000088 = FUN_05ab1c9c();
          FUN_03d8a9f4(&stack0x000001b8,*(undefined8 *)puVar1);
          FUN_05ab1de0();
          FUN_05ab1e54();
          FUN_05ab1f8c();
          FUN_03d8a9f4(&stack0x00000088,*(undefined8 *)puVar1);
          FUN_05ab2004();
          FUN_0605d124(&stack0x00000150,0);
          FUN_0605d0bc(&stack0x00000120,0);
          FUN_0605d0bc(&stack0x000000f0,0);
          FUN_0605d0bc(&stack0x000000c0,0);
          FUN_0605d0bc(&stack0x00000090,0);
          FUN_03d8a8ac(&stack0x000001b8,*(undefined8 *)puVar2);
          FUN_03d8a8ac(&stack0x00000088,*(undefined8 *)puVar2);
          if (*(long *)(unaff_x19 + 0x38) != 0) {
            FUN_05ad48c0(*(long *)(unaff_x19 + 0x38),0);
            if (*(long *)(unaff_x19 + 0x40) != 0) {
              FUN_05aaee24();
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


