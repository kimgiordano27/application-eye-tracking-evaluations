/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch5positiony
ENTRY_POINT: 059f3fd0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch5positiony
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    in_stack_00000008 = *(undefined8 *)(param_1 + 0x260);
    FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x328),0);
                    /* try { // try from 059f3ff0 to 05af3ff3 has its CatchHandler @ 059f411c */
    uVar8 = thunk_FUN_02f45270(*unaff_x26);
    FUN_0623f858(uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x300) = uVar8;
    puVar1 = Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>__ctor__;
    if (*(long *)(unaff_x19 + 0x2f0) != 0) {
                    /* try { // try from 059f400c to 05af4013 has its CatchHandler @ 059f412c */
      in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
                    /* try { // try from 059f4018 to 05af4023 has its CatchHandler @ 059f4158 */
      FUN_0624b7dc(&stack0x00000008,uVar8,0);
      lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    /* try { // try from 059f403c to 05af403f has its CatchHandler @ 059f4120 */
      FUN_059b4448(lVar9,0);
      puVar6 = Method_System_Nullable<DateParseHandling>__ctor__;
      puVar5 = Method_System_Nullable<DateFormatHandling>_get_HasValue__;
      puVar3 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__;
      puVar2 = Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__;
      if (lVar9 != 0) {
                    /* try { // try from 059f4058 to 05af405f has its CatchHandler @ 059f4130 */
        FUN_0623f514(lVar9,*unaff_x27,0);
                    /* try { // try from 059f4078 to 05af407b has its CatchHandler @ 059f4128 */
                    /* try { // try from 059f407c to 05af408b has its CatchHandler @ 059f4154 */
        FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
        FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar3);
                    /* try { // try from 059f4098 to 05af409f has its CatchHandler @ 059f4150 */
        FUN_041f8264(lVar9,*(undefined8 *)PTR_DAT_067db588,*(undefined8 *)puVar6);
        FUN_041f7f00(lVar9,1,*(undefined8 *)puVar5);
        uVar8 = *unaff_x27;
                    /* try { // try from 059f40c4 to 05af40d3 has its CatchHandler @ 059f4134 */
        *(long *)(unaff_x19 + 0x330) = lVar9;
        FUN_0624193c(lVar9,uVar8,0);
        if (*(long *)(unaff_x19 + 0x300) != 0) {
          in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                    /* try { // try from 059f40e8 to 05af40eb has its CatchHandler @ 059f4220 */
                    /* try { // try from 059f40ec to 05af40ef has its CatchHandler @ 059f4210 */
          FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x330),0);
                    /* try { // try from 059f40f0 to 05af40f3 has its CatchHandler @ 059f4220 */
                    /* try { // try from 059f40f4 to 05af40f7 has its CatchHandler @ 059f41f4 */
          lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    /* try { // try from 059f40f8 to 05af40fb has its CatchHandler @ 059f41ec */
                    /* try { // try from 059f40fc to 05af40ff has its CatchHandler @ 059f41e4 */
                    /* try { // try from 059f4100 to 05af4103 has its CatchHandler @ 059f39b4 */
          FUN_059b4448(lVar9,0);
                    /* try { // try from 059f4104 to 05af4107 has its CatchHandler @ 059f41a0 */
          if (lVar9 != 0) {
                    /* try { // try from 059f4108 to 05af410f has its CatchHandler @ 059f41bc */
                    /* try { // try from 059f4110 to 05af4113 has its CatchHandler @ 059f4178 */
                    /* try { // try from 059f4114 to 05af4117 has its CatchHandler @ 059f4170 */
            FUN_0623f514(lVar9,*unaff_x28,0);
                    /* try { // try from 059f4118 to 05af411b has its CatchHandler @ 059f4164 */
                    /* catch() { ... } // from try @ 059f3ff0 with catch @ 059f411c
                       try { // try from 059f411c to 05af4247 has its CatchHandler @ 059f39b4 */
                    /* catch() { ... } // from try @ 059f403c with catch @ 059f4120 */
                    /* catch() { ... } // from try @ 059f3fb8 with catch @ 059f4124 */
            FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 059f4078 with catch @ 059f4128 */
                    /* catch() { ... } // from try @ 059f400c with catch @ 059f412c */
                    /* catch() { ... } // from try @ 059f4058 with catch @ 059f4130 */
                    /* catch() { ... } // from try @ 059f40c4 with catch @ 059f4134 */
            FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 059f3fcc with catch @ 059f4144 */
                    /* catch() { ... } // from try @ 059f3fbc with catch @ 059f4148 */
                    /* catch() { ... } // from try @ 059f3f94 with catch @ 059f414c */
            FUN_041f8264(lVar9,*(undefined8 *)PTR_DAT_067cdb48,*(undefined8 *)puVar6);
                    /* catch() { ... } // from try @ 059f4098 with catch @ 059f4150 */
                    /* catch() { ... } // from try @ 059f407c with catch @ 059f4154 */
                    /* catch() { ... } // from try @ 059f4018 with catch @ 059f4158 */
                    /* catch() { ... } // from try @ 059f3ea0 with catch @ 059f415c */
            FUN_041f7f00(lVar9,1,*(undefined8 *)puVar5);
                    /* catch() { ... } // from try @ 059f3f7c with catch @ 059f4160 */
            uVar8 = *unaff_x28;
                    /* catch() { ... } // from try @ 059f4118 with catch @ 059f4164 */
                    /* catch() { ... } // from try @ 059f3df4 with catch @ 059f4168 */
                    /* catch() { ... } // from try @ 059f3e74 with catch @ 059f416c */
            *(long *)(unaff_x19 + 0x338) = lVar9;
                    /* catch() { ... } // from try @ 059f3f10 with catch @ 059f4170
                       catch() { ... } // from try @ 059f4114 with catch @ 059f4170 */
            FUN_0624193c(lVar9,uVar8,0);
                    /* catch() { ... } // from try @ 059f3eec with catch @ 059f4174 */
                    /* catch() { ... } // from try @ 059f4110 with catch @ 059f4178 */
            if (*(long *)(unaff_x19 + 0x300) != 0) {
                    /* catch() { ... } // from try @ 059f3ea4 with catch @ 059f417c */
              in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                    /* catch() { ... } // from try @ 059f3ec4 with catch @ 059f418c */
              FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x338),0);
              lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 059f3b84 with catch @ 059f419c */
                    /* catch() { ... } // from try @ 059f4104 with catch @ 059f41a0 */
                    /* catch() { ... } // from try @ 059f3d54 with catch @ 059f41a4 */
              FUN_059b4448(lVar9,0);
                    /* catch() { ... } // from try @ 059f3e78 with catch @ 059f41a8 */
              if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 059f3a6c with catch @ 059f41ac */
                    /* catch() { ... } // from try @ 059f3d60 with catch @ 059f41b0 */
                FUN_0623f514(lVar9,*unaff_x29,0);
                FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar3);
                FUN_041f8264(lVar9,*unaff_x22,*(undefined8 *)puVar6);
                FUN_041f7f00(lVar9,1,*(undefined8 *)puVar5);
                uVar8 = *unaff_x29;
                *(long *)(unaff_x19 + 0x340) = lVar9;
                FUN_0624193c(lVar9,uVar8,0);
                if (*(long *)(unaff_x19 + 0x300) != 0) {
                  in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                  FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x340),0);
                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9cb8);
                  FUN_0623f858(uVar8,0);
                  *(undefined8 *)(unaff_x19 + 0x308) = uVar8;
                  if (*(long *)(unaff_x19 + 0x2f0) != 0) {
                    in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
                    FUN_0624b7dc(&stack0x00000008,uVar8,0);
                    lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                    FUN_059b4448(lVar9,0);
                    puVar7 = Method_System_Nullable<DateTimeOffset>__ctor__;
                    puVar4 = PTR_DAT_067d7cf0;
                    if (lVar9 != 0) {
                      FUN_0623f514(lVar9,*(undefined8 *)
                                          Method_System_Nullable<DateTimeOffset>__ctor__,0);
                      FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                      FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar3);
                      FUN_041f8264(lVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar6);
                      FUN_041f7f00(lVar9,1,*(undefined8 *)puVar5);
                      uVar8 = *(undefined8 *)puVar7;
                      *(long *)(unaff_x19 + 0x348) = lVar9;
                      FUN_0624193c(lVar9,uVar8,0);
                      if (*(long *)(unaff_x19 + 0x308) != 0) {
                        in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x308) + 0x260);
                        FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x348),0);
                        lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                        FUN_059b4448(lVar9,0);
                        puVar7 = Method_System_Nullable<Decimal>_GetValueOrDefault__;
                        puVar4 = PTR_DAT_067d7ce8;
                        if (lVar9 != 0) {
                          FUN_0623f514(lVar9,*(undefined8 *)
                                              Method_System_Nullable<Decimal>_GetValueOrDefault__,0)
                          ;
                          FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                          FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar3);
                          FUN_041f8264(lVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar6);
                          FUN_041f7f00(lVar9,1,*(undefined8 *)puVar5);
                          uVar8 = *(undefined8 *)puVar7;
                          *(long *)(unaff_x19 + 0x350) = lVar9;
                          FUN_0624193c(lVar9,uVar8,0);
                          if (*(long *)(unaff_x19 + 0x308) != 0) {
                            in_stack_00000008 =
                                 *(undefined8 *)(*(long *)(unaff_x19 + 0x308) + 0x260);
                            FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x350),0);
                            lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                            FUN_059b4448(lVar9,0);
                            puVar4 = Method_System_Nullable<DateTime>_get_HasValue__;
                            puVar1 = Method_System_Nullable<DateTime>__ctor__;
                            if (lVar9 != 0) {
                              FUN_0623f514(lVar9,*(undefined8 *)
                                                  Method_System_Nullable<DateTime>__ctor__,0);
                              FUN_0424d498(0,lVar9,*(undefined8 *)puVar2);
                              FUN_0424d574(0x3f800000,lVar9,*(undefined8 *)puVar3);
                              FUN_041f8264(lVar9,*(undefined8 *)puVar4,*(undefined8 *)puVar6);
                              FUN_041f7f00(lVar9,1,*(undefined8 *)puVar5);
                              uVar8 = *(undefined8 *)puVar1;
                              *(long *)(unaff_x19 + 0x358) = lVar9;
                              FUN_0624193c(lVar9,uVar8,0);
                              puVar1 = 
                              Method_Unity_Collections_NativeArray<GPUDrivenMeshLodInfo>_Dispose__;
                              if (*(long *)(unaff_x19 + 0x308) != 0) {
                                in_stack_00000008 =
                                     *(undefined8 *)(*(long *)(unaff_x19 + 0x308) + 0x260);
                                FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x358),0);
                                lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                FUN_059c226c(lVar9,0);
                                puVar7 = Method_System_Nullable<DateTimeZoneHandling>_get_HasValue__
                                ;
                                puVar4 = Method_System_Nullable<DateFormatHandling>__ctor__;
                                puVar6 = Method_System_Nullable<Configuration>_get_Value__;
                                puVar5 = 
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
                                  uVar8 = *(undefined8 *)puVar7;
                                  *(long *)(unaff_x19 + 0x360) = lVar9;
                                  FUN_0624193c(lVar9,uVar8,0);
                                  in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x260);
                                  FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x360),0
                                              );
                                  FUN_059f310c();
                                  FUN_059f3234();
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x2e0);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                  FUN_04d8cf5c();
                                  FUN_03487f68(uVar10,uVar8,*(undefined8 *)puVar2);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x2e8);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar6);
                                  FUN_04d8cf5c();
                                  FUN_0348800c(uVar10,uVar8,*(undefined8 *)puVar4);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x310);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                            
                                                  Method_System_Nullable<ConstructorHandling>__ctor__
                                                  );
                                  FUN_04d8cf5c();
                                  FUN_03436904(uVar10,uVar8,
                                               *(undefined8 *)
                                                Method_System_Nullable<ConstructorHandling>_GetValueOrDefault__
                                              );
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x318);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                  FUN_04d8cf5c();
                                  FUN_03487ec4(uVar10,uVar8,*(undefined8 *)puVar5);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 800);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                  FUN_04d8cf5c();
                                  FUN_03487ec4(uVar10,uVar8,*(undefined8 *)puVar5);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x328);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                  FUN_04d8cf5c();
                                  FUN_03487ec4(uVar10,uVar8,*(undefined8 *)puVar5);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x330);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                  FUN_04d8cf5c();
                                  FUN_03487f68(uVar10,uVar8,*(undefined8 *)puVar2);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x338);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                  FUN_04d8cf5c();
                                  FUN_03487f68(uVar10,uVar8,*(undefined8 *)puVar2);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x340);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                  FUN_04d8cf5c();
                                  FUN_03487f68(uVar10,uVar8,*(undefined8 *)puVar2);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x348);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                  FUN_04d8cf5c();
                                  FUN_03487f68(uVar10,uVar8,*(undefined8 *)puVar2);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x350);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                  FUN_04d8cf5c();
                                  FUN_03487f68(uVar10,uVar8,*(undefined8 *)puVar2);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x358);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                  FUN_04d8cf5c();
                                  FUN_03487f68(uVar10,uVar8,*(undefined8 *)puVar2);
                                  uVar10 = *(undefined8 *)(unaff_x19 + 0x2c8);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                  FUN_04d8cf5c();
                                  FUN_03487f68(uVar10,uVar8,*(undefined8 *)puVar2);
                                  lVar9 = *(long *)(unaff_x19 + 0x2d0);
                                  uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
                                  FUN_05054f60();
                                  puVar3 = PTR_DAT_067cbf98;
                                  puVar2 = PTR_DAT_067cbf90;
                                  puVar1 = PTR_DAT_067cb890;
                                  if (lVar9 != 0) {
                                    FUN_0597f210(lVar9,uVar8,0);
                                    uVar10 = *(undefined8 *)(unaff_x19 + 0x360);
                                    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                    FUN_04d8cf5c();
                                    FUN_03436904(uVar10,uVar8,*(undefined8 *)puVar3);
                                    lVar9 = *(long *)(unaff_x19 + 0x310);
                                    uVar8 = FUN_02f0880c(*(undefined8 *)puVar1,1);
                                    if (lVar9 != 0) {
                                      FUN_059a775c(lVar9,uVar8,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


