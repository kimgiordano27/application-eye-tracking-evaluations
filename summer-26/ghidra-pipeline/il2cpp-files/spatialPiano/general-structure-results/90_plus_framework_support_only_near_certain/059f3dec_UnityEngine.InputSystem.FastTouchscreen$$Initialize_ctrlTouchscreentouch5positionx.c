/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch5positionx
ENTRY_POINT: 059f3dec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 200
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch5positionx(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 *puVar12;
  long unaff_x25;
  undefined8 *puVar13;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *puVar14;
  undefined8 in_stack_00000008;
  
  puVar2 = Method_System_Nullable<DateParseHandling>_GetValueOrDefault__;
  puVar1 = Method_System_Nullable<DateFormatHandling>_GetValueOrDefault__;
  puVar14 = *(undefined8 **)(unaff_x27 + 0x5b0);
                    /* try { // try from 059f3df4 to 05af3e03 has its CatchHandler @ 059f4168 */
  puVar13 = *(undefined8 **)(unaff_x25 + 0xd80);
  puVar12 = *(undefined8 **)(unaff_x24 + 0xd88);
                    /* try { // try from 059f3e1c to 05af3e23 has its CatchHandler @ 059f41bc */
  FUN_0623f514();
  FUN_0424c0f4();
  FUN_0424c1c4();
  FUN_041f60fc();
  FUN_041f5d98();
  *(undefined8 *)(unaff_x19 + 0x318) = unaff_x20;
  FUN_0624193c();
                    /* try { // try from 059f3e74 to 05af3e77 has its CatchHandler @ 059f416c */
                    /* try { // try from 059f3e78 to 05af3e87 has its CatchHandler @ 059f41a8 */
  if (*(long *)(unaff_x19 + 0x2f8) != 0) {
    in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260);
    FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x318),0);
    lVar9 = thunk_FUN_02f45270(*unaff_x22);
                    /* try { // try from 059f3ea0 to 05af3ea3 has its CatchHandler @ 059f415c */
                    /* try { // try from 059f3ea4 to 05af3eaf has its CatchHandler @ 059f417c */
    FUN_059b518c(lVar9,0);
    puVar4 = Method_System_Nullable<DateTime>_GetValueOrDefault__;
    puVar3 = PTR_DAT_067cdb48;
    if (lVar9 != 0) {
                    /* try { // try from 059f3ec4 to 05af3eeb has its CatchHandler @ 059f418c */
      FUN_0623f514(lVar9,*(undefined8 *)Method_System_Nullable<DateTime>_GetValueOrDefault__,0);
      FUN_0424c0f4(lVar9,0,*puVar13);
      FUN_0424c1c4(lVar9,0xff,*puVar12);
                    /* try { // try from 059f3eec to 05af3efb has its CatchHandler @ 059f4174 */
      FUN_041f60fc(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
      FUN_041f5d98(lVar9,1,*(undefined8 *)puVar1);
      uVar10 = *(undefined8 *)puVar4;
                    /* try { // try from 059f3f10 to 05af3f1f has its CatchHandler @ 059f4170 */
      *(long *)(unaff_x19 + 800) = lVar9;
      FUN_0624193c(lVar9,uVar10,0);
                    /* try { // try from 059f3f20 to 05af3f7b has its CatchHandler @ 059f39b4 */
      if (*(long *)(unaff_x19 + 0x2f8) != 0) {
        in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260);
        FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 800),0);
        lVar9 = thunk_FUN_02f45270(*unaff_x22);
        FUN_059b518c(lVar9,0);
        puVar6 = Method_System_Nullable<Decimal>__ctor__;
        puVar3 = Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__;
        if (lVar9 != 0) {
          FUN_0623f514(lVar9,*(undefined8 *)
                              Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__,0);
                    /* try { // try from 059f3f7c to 05af3f83 has its CatchHandler @ 059f4160 */
          FUN_0424c0f4(lVar9,0,*puVar13);
                    /* try { // try from 059f3f94 to 05af3f9b has its CatchHandler @ 059f414c */
          FUN_0424c1c4(lVar9,0xff,*puVar12);
          FUN_041f60fc(lVar9,*(undefined8 *)puVar6,*(undefined8 *)puVar2);
          FUN_041f5d98(lVar9,1,*(undefined8 *)puVar1);
                    /* try { // try from 059f3fb8 to 05af3fbb has its CatchHandler @ 059f4124 */
          uVar10 = *(undefined8 *)puVar3;
                    /* try { // try from 059f3fbc to 05af3fcb has its CatchHandler @ 059f4148 */
          *(long *)(unaff_x19 + 0x328) = lVar9;
          FUN_0624193c(lVar9,uVar10,0);
                    /* try { // try from 059f3fcc to 05af3fd7 has its CatchHandler @ 059f4144 */
          if (*(long *)(unaff_x19 + 0x2f8) != 0) {
            in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260);
            FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x328),0);
            uVar10 = thunk_FUN_02f45270(*unaff_x26);
            FUN_0623f858(uVar10,0);
            *(undefined8 *)(unaff_x19 + 0x300) = uVar10;
            puVar1 = Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>__ctor__;
            if (*(long *)(unaff_x19 + 0x2f0) != 0) {
              in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
              FUN_0624b7dc(&stack0x00000008,uVar10,0);
              lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
              FUN_059b4448(lVar9,0);
              puVar8 = Method_System_Nullable<DateParseHandling>__ctor__;
              puVar7 = Method_System_Nullable<DateFormatHandling>_get_HasValue__;
              puVar5 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__;
              puVar2 = Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__;
              if (lVar9 != 0) {
                FUN_0623f514(lVar9,*puVar14,0);
                FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar5);
                FUN_041f8264(lVar9,*(undefined8 *)PTR_DAT_067db588,*(undefined8 *)puVar8);
                FUN_041f7f00(lVar9,1,*(undefined8 *)puVar7);
                uVar10 = *puVar14;
                *(long *)(unaff_x19 + 0x330) = lVar9;
                FUN_0624193c(lVar9,uVar10,0);
                if (*(long *)(unaff_x19 + 0x300) != 0) {
                  in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                  FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x330),0);
                  lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                  FUN_059b4448(lVar9,0);
                  if (lVar9 != 0) {
                    FUN_0623f514(lVar9,*(undefined8 *)puVar4,0);
                    FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                    FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar5);
                    FUN_041f8264(lVar9,*(undefined8 *)PTR_DAT_067cdb48,*(undefined8 *)puVar8);
                    FUN_041f7f00(lVar9,1,*(undefined8 *)puVar7);
                    uVar10 = *(undefined8 *)puVar4;
                    *(long *)(unaff_x19 + 0x338) = lVar9;
                    FUN_0624193c(lVar9,uVar10,0);
                    if (*(long *)(unaff_x19 + 0x300) != 0) {
                      in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                      FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x338),0);
                      lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                      FUN_059b4448(lVar9,0);
                      if (lVar9 != 0) {
                        FUN_0623f514(lVar9,*(undefined8 *)puVar3,0);
                        FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                        FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar5);
                        FUN_041f8264(lVar9,*(undefined8 *)puVar6,*(undefined8 *)puVar8);
                        FUN_041f7f00(lVar9,1,*(undefined8 *)puVar7);
                        uVar10 = *(undefined8 *)puVar3;
                        *(long *)(unaff_x19 + 0x340) = lVar9;
                        FUN_0624193c(lVar9,uVar10,0);
                        if (*(long *)(unaff_x19 + 0x300) != 0) {
                          in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                          FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x340),0);
                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9cb8);
                          FUN_0623f858(uVar10,0);
                          *(undefined8 *)(unaff_x19 + 0x308) = uVar10;
                          if (*(long *)(unaff_x19 + 0x2f0) != 0) {
                            in_stack_00000008 =
                                 *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
                            FUN_0624b7dc(&stack0x00000008,uVar10,0);
                            lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                            FUN_059b4448(lVar9,0);
                            puVar4 = Method_System_Nullable<DateTimeOffset>__ctor__;
                            puVar3 = PTR_DAT_067d7cf0;
                            if (lVar9 != 0) {
                              FUN_0623f514(lVar9,*(undefined8 *)
                                                  Method_System_Nullable<DateTimeOffset>__ctor__,0);
                              FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                              FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar5);
                              FUN_041f8264(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar8);
                              FUN_041f7f00(lVar9,1,*(undefined8 *)puVar7);
                              uVar10 = *(undefined8 *)puVar4;
                              *(long *)(unaff_x19 + 0x348) = lVar9;
                              FUN_0624193c(lVar9,uVar10,0);
                              if (*(long *)(unaff_x19 + 0x308) != 0) {
                                in_stack_00000008 =
                                     *(undefined8 *)(*(long *)(unaff_x19 + 0x308) + 0x260);
                                FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x348),0);
                                lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                FUN_059b4448(lVar9,0);
                                puVar4 = Method_System_Nullable<Decimal>_GetValueOrDefault__;
                                puVar3 = PTR_DAT_067d7ce8;
                                if (lVar9 != 0) {
                                  FUN_0623f514(lVar9,*(undefined8 *)
                                                                                                            
                                                  Method_System_Nullable<Decimal>_GetValueOrDefault__
                                               ,0);
                                  FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                                  FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar5);
                                  FUN_041f8264(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar8);
                                  FUN_041f7f00(lVar9,1,*(undefined8 *)puVar7);
                                  uVar10 = *(undefined8 *)puVar4;
                                  *(long *)(unaff_x19 + 0x350) = lVar9;
                                  FUN_0624193c(lVar9,uVar10,0);
                                  if (*(long *)(unaff_x19 + 0x308) != 0) {
                                    in_stack_00000008 =
                                         *(undefined8 *)(*(long *)(unaff_x19 + 0x308) + 0x260);
                                    FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x350)
                                                 ,0);
                                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                    FUN_059b4448(lVar9,0);
                                    puVar3 = Method_System_Nullable<DateTime>_get_HasValue__;
                                    puVar1 = Method_System_Nullable<DateTime>__ctor__;
                                    if (lVar9 != 0) {
                                      FUN_0623f514(lVar9,*(undefined8 *)
                                                          Method_System_Nullable<DateTime>__ctor__,0
                                                  );
                                      FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                                      FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar5);
                                      FUN_041f8264(lVar9,*(undefined8 *)puVar3,*(undefined8 *)puVar8
                                                  );
                                      FUN_041f7f00(lVar9,1,*(undefined8 *)puVar7);
                                      uVar10 = *(undefined8 *)puVar1;
                                      *(long *)(unaff_x19 + 0x358) = lVar9;
                                      FUN_0624193c(lVar9,uVar10,0);
                                      puVar1 = 
                                      Method_Unity_Collections_NativeArray<GPUDrivenMeshLodInfo>_Dispose__
                                      ;
                                      if (*(long *)(unaff_x19 + 0x308) != 0) {
                                        in_stack_00000008 =
                                             *(undefined8 *)(*(long *)(unaff_x19 + 0x308) + 0x260);
                                        FUN_0624b7dc(&stack0x00000008,
                                                     *(undefined8 *)(unaff_x19 + 0x358),0);
                                        lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                        FUN_059c226c(lVar9,0);
                                        puVar7 = 
                                        Method_System_Nullable<DateTimeZoneHandling>_get_HasValue__;
                                        puVar5 = Method_System_Nullable<DateFormatHandling>__ctor__;
                                        puVar6 = Method_System_Nullable<Configuration>_get_Value__;
                                        puVar4 = 
                                        Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__
                                        ;
                                        puVar3 = 
                                        Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Item__
                                        ;
                                        puVar2 = 
                                        Method_System_Collections_Generic_List<BsonReader_ContainerContext>_Add__
                                        ;
                                        puVar1 = 
                                        Method_System_Collections_Generic_List<BodyPoseData_JointData>_get_Item__
                                        ;
                                        if (lVar9 != 0) {
                                          FUN_0623f514(lVar9,*(undefined8 *)
                                                                                                                            
                                                  Method_System_Nullable<DateTimeZoneHandling>_get_HasValue__
                                                  ,0);
                                          uVar10 = *(undefined8 *)puVar7;
                                          *(long *)(unaff_x19 + 0x360) = lVar9;
                                          FUN_0624193c(lVar9,uVar10,0);
                                          in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x260);
                                          FUN_0624b7dc(&stack0x00000008,
                                                       *(undefined8 *)(unaff_x19 + 0x360),0);
                                          FUN_059f310c();
                                          FUN_059f3234();
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x2e0);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c();
                                          FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar2);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x2e8);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                          FUN_04d8cf5c();
                                          FUN_0348800c(uVar11,uVar10,*(undefined8 *)puVar5);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x310);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Nullable<ConstructorHandling>__ctor__
                                                  );
                                          FUN_04d8cf5c();
                                          FUN_03436904(uVar11,uVar10,
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Nullable<ConstructorHandling>_GetValueOrDefault__
                                                  );
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x318);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                          FUN_04d8cf5c();
                                          FUN_03487ec4(uVar11,uVar10,*(undefined8 *)puVar4);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 800);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                          FUN_04d8cf5c();
                                          FUN_03487ec4(uVar11,uVar10,*(undefined8 *)puVar4);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x328);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                          FUN_04d8cf5c();
                                          FUN_03487ec4(uVar11,uVar10,*(undefined8 *)puVar4);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x330);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c();
                                          FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar2);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x338);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c();
                                          FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar2);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x340);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c();
                                          FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar2);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x348);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c();
                                          FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar2);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x350);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c();
                                          FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar2);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x358);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c();
                                          FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar2);
                                          uVar11 = *(undefined8 *)(unaff_x19 + 0x2c8);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c();
                                          FUN_03487f68(uVar11,uVar10,*(undefined8 *)puVar2);
                                          lVar9 = *(long *)(unaff_x19 + 0x2d0);
                                          uVar10 = thunk_FUN_02f45270(*(undefined8 *)
                                                                       PTR_DAT_067c8fb0);
                                          FUN_05054f60();
                                          puVar3 = PTR_DAT_067cbf98;
                                          puVar2 = PTR_DAT_067cbf90;
                                          puVar1 = PTR_DAT_067cb890;
                                          if (lVar9 != 0) {
                                            FUN_0597f210(lVar9,uVar10,0);
                                            uVar11 = *(undefined8 *)(unaff_x19 + 0x360);
                                            uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                            FUN_04d8cf5c();
                                            FUN_03436904(uVar11,uVar10,*(undefined8 *)puVar3);
                                            lVar9 = *(long *)(unaff_x19 + 0x310);
                                            uVar10 = FUN_02f0880c(*(undefined8 *)puVar1,1);
                                            if (lVar9 != 0) {
                                              FUN_059a775c(lVar9,uVar10,0);
                                              FUN_059f4904();
                                              FUN_059f2820(0,0,0,0);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


