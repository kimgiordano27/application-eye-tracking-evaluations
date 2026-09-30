/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch5startPosition
ENTRY_POINT: 059f3c10
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 176
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch5startPosition
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long lVar15;
  undefined8 uVar16;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_1;
  FUN_0624b7dc();
  lVar15 = *(long *)(unaff_x19 + 0x310);
  lVar11 = thunk_FUN_02f45270(*unaff_x21);
  FUN_03a6e09c(lVar11,*unaff_x22);
  puVar2 = Method_System_Nullable<ConstructorHandling>_get_HasValue__;
  if (lVar11 != 0) {
    lVar13 = *(long *)(lVar11 + 0x10);
                    /* try { // try from 059f3c4c to 05af3c97 has its CatchHandler @ 059f4224 */
    lVar14 = *(long *)Method_System_Nullable<ConstructorHandling>_get_HasValue__;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      }
      else {
        FUN_03a6e8d0(lVar11,0,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_059f4900;
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = 1;
                    /* try { // try from 059f3ce0 to 05af3ce7 has its CatchHandler @ 059f41dc */
                    /* try { // try from 059f3ce8 to 05af3cf7 has its CatchHandler @ 059f4214 */
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      }
      else {
                    /* try { // try from 059f3d00 to 05af3d0b has its CatchHandler @ 059f41e0 */
        FUN_03a6e8d0(lVar11,1,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    /* try { // try from 059f3d1c to 05af3d27 has its CatchHandler @ 059f41cc */
        if (lVar13 == 0) goto LAB_059f4900;
      }
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = 2;
      }
      else {
                    /* try { // try from 059f3d54 to 05af3d57 has its CatchHandler @ 059f41a4 */
        FUN_03a6e8d0(lVar11,2,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      puVar2 = Method_System_Nullable<byte>_get_HasValue__;
                    /* try { // try from 059f3d60 to 05af3d67 has its CatchHandler @ 059f41b0 */
      if (lVar15 != 0) {
                    /* try { // try from 059f3d78 to 05af3d7b has its CatchHandler @ 059f4218 */
        FUN_059a764c(lVar15,lVar11,0);
        lVar11 = *(long *)(unaff_x19 + 0x310);
        uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    /* try { // try from 059f3d94 to 05af3de3 has its CatchHandler @ 059f41bc */
        FUN_04832a2c();
        puVar2 = Method_Unity_Collections_NativeArray<InclusiveRange>__ctor__;
        if (lVar11 != 0) {
          FUN_03f56aec(lVar11,uVar12,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<TemplateAsset_UxmlSerializedDataOverride>_GetEnumerator__
                      );
          lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_059b518c(lVar11,0);
          puVar10 = Method_System_Nullable<DateTimeOffset>_get_HasValue__;
          puVar7 = Method_System_Nullable<DateParseHandling>_GetValueOrDefault__;
          puVar6 = Method_System_Nullable<DateFormatHandling>_GetValueOrDefault__;
          puVar5 = Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_GetSubArray__;
          puVar4 = Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_Dispose__;
          puVar3 = PTR_DAT_067db588;
          if (lVar11 != 0) {
            FUN_0623f514(lVar11,*(undefined8 *)Method_System_Nullable<DateTimeOffset>_get_HasValue__
                         ,0);
            FUN_0424c0f4(lVar11,0,*(undefined8 *)puVar4);
            FUN_0424c1c4(lVar11,0xff,*(undefined8 *)puVar5);
            FUN_041f60fc(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar7);
            FUN_041f5d98(lVar11,1,*(undefined8 *)puVar6);
            uVar12 = *(undefined8 *)puVar10;
            *(long *)(unaff_x19 + 0x318) = lVar11;
            FUN_0624193c(lVar11,uVar12,0);
            if (*(long *)(unaff_x19 + 0x2f8) != 0) {
              uStack0000000000000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260);
              FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x318),0);
              lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
              FUN_059b518c(lVar11,0);
              puVar9 = Method_System_Nullable<DateTime>_GetValueOrDefault__;
              puVar3 = PTR_DAT_067cdb48;
              if (lVar11 != 0) {
                FUN_0623f514(lVar11,*(undefined8 *)
                                     Method_System_Nullable<DateTime>_GetValueOrDefault__,0);
                FUN_0424c0f4(lVar11,0,*(undefined8 *)puVar4);
                FUN_0424c1c4(lVar11,0xff,*(undefined8 *)puVar5);
                FUN_041f60fc(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar7);
                FUN_041f5d98(lVar11,1,*(undefined8 *)puVar6);
                uVar12 = *(undefined8 *)puVar9;
                *(long *)(unaff_x19 + 800) = lVar11;
                FUN_0624193c(lVar11,uVar12,0);
                if (*(long *)(unaff_x19 + 0x2f8) != 0) {
                  uStack0000000000000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260);
                  FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 800),0);
                  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                  FUN_059b518c(lVar11,0);
                  puVar3 = Method_System_Nullable<Decimal>__ctor__;
                  puVar2 = Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__;
                  if (lVar11 != 0) {
                    FUN_0623f514(lVar11,*(undefined8 *)
                                         Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__
                                 ,0);
                    FUN_0424c0f4(lVar11,0,*(undefined8 *)puVar4);
                    FUN_0424c1c4(lVar11,0xff,*(undefined8 *)puVar5);
                    FUN_041f60fc(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar7);
                    FUN_041f5d98(lVar11,1,*(undefined8 *)puVar6);
                    uVar12 = *(undefined8 *)puVar2;
                    *(long *)(unaff_x19 + 0x328) = lVar11;
                    FUN_0624193c(lVar11,uVar12,0);
                    if (*(long *)(unaff_x19 + 0x2f8) != 0) {
                      uStack0000000000000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260)
                      ;
                      FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x328),0);
                      uVar12 = thunk_FUN_02f45270(*unaff_x26);
                      FUN_0623f858(uVar12,0);
                      *(undefined8 *)(unaff_x19 + 0x300) = uVar12;
                      puVar4 = 
                      Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>__ctor__;
                      if (*(long *)(unaff_x19 + 0x2f0) != 0) {
                        uStack0000000000000008 =
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
                        FUN_0624b7dc(&stack0x00000008,uVar12,0);
                        lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                        FUN_059b4448(lVar11,0);
                        puVar8 = Method_System_Nullable<DateParseHandling>__ctor__;
                        puVar7 = Method_System_Nullable<DateFormatHandling>_get_HasValue__;
                        puVar6 = 
                        Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__;
                        puVar5 = 
                        Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__;
                        if (lVar11 != 0) {
                          FUN_0623f514(lVar11,*(undefined8 *)puVar10,0);
                          FUN_0424d498(0,lVar11,*(undefined8 *)puVar5);
                          FUN_0424d574(0x3f800000,lVar11,*(undefined8 *)puVar6);
                          FUN_041f8264(lVar11,*(undefined8 *)PTR_DAT_067db588,*(undefined8 *)puVar8)
                          ;
                          FUN_041f7f00(lVar11,1,*(undefined8 *)puVar7);
                          uVar12 = *(undefined8 *)puVar10;
                          *(long *)(unaff_x19 + 0x330) = lVar11;
                          FUN_0624193c(lVar11,uVar12,0);
                          if (*(long *)(unaff_x19 + 0x300) != 0) {
                            uStack0000000000000008 =
                                 *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                            FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x330),0);
                            lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                            FUN_059b4448(lVar11,0);
                            if (lVar11 != 0) {
                              FUN_0623f514(lVar11,*(undefined8 *)puVar9,0);
                              FUN_0424d498(0,lVar11,*(undefined8 *)puVar5);
                              FUN_0424d574(0x3f800000,lVar11,*(undefined8 *)puVar6);
                              FUN_041f8264(lVar11,*(undefined8 *)PTR_DAT_067cdb48,
                                           *(undefined8 *)puVar8);
                              FUN_041f7f00(lVar11,1,*(undefined8 *)puVar7);
                              uVar12 = *(undefined8 *)puVar9;
                              *(long *)(unaff_x19 + 0x338) = lVar11;
                              FUN_0624193c(lVar11,uVar12,0);
                              if (*(long *)(unaff_x19 + 0x300) != 0) {
                                uStack0000000000000008 =
                                     *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                                FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x338),0);
                                lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                FUN_059b4448(lVar11,0);
                                if (lVar11 != 0) {
                                  FUN_0623f514(lVar11,*(undefined8 *)puVar2,0);
                                  FUN_0424d498(0,lVar11,*(undefined8 *)puVar5);
                                  FUN_0424d574(0x3f800000,lVar11,*(undefined8 *)puVar6);
                                  FUN_041f8264(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar8);
                                  FUN_041f7f00(lVar11,1,*(undefined8 *)puVar7);
                                  uVar12 = *(undefined8 *)puVar2;
                                  *(long *)(unaff_x19 + 0x340) = lVar11;
                                  FUN_0624193c(lVar11,uVar12,0);
                                  if (*(long *)(unaff_x19 + 0x300) != 0) {
                                    uStack0000000000000008 =
                                         *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                                    FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x340)
                                                 ,0);
                                    uVar12 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9cb8);
                                    FUN_0623f858(uVar12,0);
                                    *(undefined8 *)(unaff_x19 + 0x308) = uVar12;
                                    if (*(long *)(unaff_x19 + 0x2f0) != 0) {
                                      uStack0000000000000008 =
                                           *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
                                      FUN_0624b7dc(&stack0x00000008,uVar12,0);
                                      lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                      FUN_059b4448(lVar11,0);
                                      puVar3 = Method_System_Nullable<DateTimeOffset>__ctor__;
                                      puVar2 = PTR_DAT_067d7cf0;
                                      if (lVar11 != 0) {
                                        FUN_0623f514(lVar11,*(undefined8 *)
                                                                                                                          
                                                  Method_System_Nullable<DateTimeOffset>__ctor__,0);
                                        FUN_0424d498(0,lVar11,*(undefined8 *)puVar5);
                                        FUN_0424d574(0x3f800000,lVar11,*(undefined8 *)puVar6);
                                        FUN_041f8264(lVar11,*(undefined8 *)puVar2,
                                                     *(undefined8 *)puVar8);
                                        FUN_041f7f00(lVar11,1,*(undefined8 *)puVar7);
                                        uVar12 = *(undefined8 *)puVar3;
                                        *(long *)(unaff_x19 + 0x348) = lVar11;
                                        FUN_0624193c(lVar11,uVar12,0);
                                        if (*(long *)(unaff_x19 + 0x308) != 0) {
                                          uStack0000000000000008 =
                                               *(undefined8 *)(*(long *)(unaff_x19 + 0x308) + 0x260)
                                          ;
                                          FUN_0624b7dc(&stack0x00000008,
                                                       *(undefined8 *)(unaff_x19 + 0x348),0);
                                          lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                          FUN_059b4448(lVar11,0);
                                          puVar3 = 
                                          Method_System_Nullable<Decimal>_GetValueOrDefault__;
                                          puVar2 = PTR_DAT_067d7ce8;
                                          if (lVar11 != 0) {
                                            FUN_0623f514(lVar11,*(undefined8 *)
                                                                                                                                  
                                                  Method_System_Nullable<Decimal>_GetValueOrDefault__
                                                  ,0);
                                            FUN_0424d498(0,lVar11,*(undefined8 *)puVar5);
                                            FUN_0424d574(0x3f800000,lVar11,*(undefined8 *)puVar6);
                                            FUN_041f8264(lVar11,*(undefined8 *)puVar2,
                                                         *(undefined8 *)puVar8);
                                            FUN_041f7f00(lVar11,1,*(undefined8 *)puVar7);
                                            uVar12 = *(undefined8 *)puVar3;
                                            *(long *)(unaff_x19 + 0x350) = lVar11;
                                            FUN_0624193c(lVar11,uVar12,0);
                                            if (*(long *)(unaff_x19 + 0x308) != 0) {
                                              uStack0000000000000008 =
                                                   *(undefined8 *)
                                                    (*(long *)(unaff_x19 + 0x308) + 0x260);
                                              FUN_0624b7dc(&stack0x00000008,
                                                           *(undefined8 *)(unaff_x19 + 0x350),0);
                                              lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                              FUN_059b4448(lVar11,0);
                                              puVar3 = 
                                              Method_System_Nullable<DateTime>_get_HasValue__;
                                              puVar2 = Method_System_Nullable<DateTime>__ctor__;
                                              if (lVar11 != 0) {
                                                FUN_0623f514(lVar11,*(undefined8 *)
                                                                                                                                          
                                                  Method_System_Nullable<DateTime>__ctor__,0);
                                                FUN_0424d498(0,lVar11,*(undefined8 *)puVar5);
                                                FUN_0424d574(0x3f800000,lVar11,*(undefined8 *)puVar6
                                                            );
                                                FUN_041f8264(lVar11,*(undefined8 *)puVar3,
                                                             *(undefined8 *)puVar8);
                                                FUN_041f7f00(lVar11,1,*(undefined8 *)puVar7);
                                                uVar12 = *(undefined8 *)puVar2;
                                                *(long *)(unaff_x19 + 0x358) = lVar11;
                                                FUN_0624193c(lVar11,uVar12,0);
                                                puVar2 = 
                                                Method_Unity_Collections_NativeArray<GPUDrivenMeshLodInfo>_Dispose__
                                                ;
                                                if (*(long *)(unaff_x19 + 0x308) != 0) {
                                                  uStack0000000000000008 =
                                                       *(undefined8 *)
                                                        (*(long *)(unaff_x19 + 0x308) + 0x260);
                                                  FUN_0624b7dc(&stack0x00000008,
                                                               *(undefined8 *)(unaff_x19 + 0x358),0)
                                                  ;
                                                  lVar11 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_059c226c(lVar11,0);
                                                  puVar10 = 
                                                  Method_System_Nullable<DateTimeZoneHandling>_get_HasValue__
                                                  ;
                                                  puVar7 = 
                                                  Method_System_Nullable<DateFormatHandling>__ctor__
                                                  ;
                                                  puVar6 = 
                                                  Method_System_Nullable<Configuration>_get_Value__;
                                                  puVar5 = 
                                                  Method_System_Collections_Generic_List<DataBindingManager_ChangesFromUI>_Add__
                                                  ;
                                                  puVar4 = 
                                                  Method_System_Collections_Generic_List<DataBindingManager_BindingRequest>_get_Item__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_List<BsonReader_ContainerContext>_Add__
                                                  ;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_List<BodyPoseData_JointData>_get_Item__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_0623f514(lVar11,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Nullable<DateTimeZoneHandling>_get_HasValue__
                                                  ,0);
                                                  uVar12 = *(undefined8 *)puVar10;
                                                  *(long *)(unaff_x19 + 0x360) = lVar11;
                                                  FUN_0624193c(lVar11,uVar12,0);
                                                  uStack0000000000000008 =
                                                       *(undefined8 *)(unaff_x19 + 0x260);
                                                  FUN_0624b7dc(&stack0x00000008,
                                                               *(undefined8 *)(unaff_x19 + 0x360),0)
                                                  ;
                                                  FUN_059f310c();
                                                  FUN_059f3234();
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x2e0);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar16,uVar12,*(undefined8 *)puVar3);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x2e8);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_0348800c(uVar16,uVar12,*(undefined8 *)puVar7);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x310);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Nullable<ConstructorHandling>__ctor__
                                                  );
                                                  FUN_04d8cf5c();
                                                  FUN_03436904(uVar16,uVar12,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Nullable<ConstructorHandling>_GetValueOrDefault__
                                                  );
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x318);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(uVar16,uVar12,*(undefined8 *)puVar5);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 800);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(uVar16,uVar12,*(undefined8 *)puVar5);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x328);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(uVar16,uVar12,*(undefined8 *)puVar5);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x330);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar16,uVar12,*(undefined8 *)puVar3);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x338);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar16,uVar12,*(undefined8 *)puVar3);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x340);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar16,uVar12,*(undefined8 *)puVar3);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x348);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar16,uVar12,*(undefined8 *)puVar3);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x350);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar16,uVar12,*(undefined8 *)puVar3);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x358);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar16,uVar12,*(undefined8 *)puVar3);
                                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x2c8);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar16,uVar12,*(undefined8 *)puVar3);
                                                  lVar11 = *(long *)(unaff_x19 + 0x2d0);
                                                  uVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                               PTR_DAT_067c8fb0);
                                                  FUN_05054f60();
                                                  puVar4 = PTR_DAT_067cbf98;
                                                  puVar3 = PTR_DAT_067cbf90;
                                                  puVar2 = PTR_DAT_067cb890;
                                                  if (lVar11 != 0) {
                                                    FUN_0597f210(lVar11,uVar12,0);
                                                    uVar16 = *(undefined8 *)(unaff_x19 + 0x360);
                                                    uVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_04d8cf5c();
                                                    FUN_03436904(uVar16,uVar12,*(undefined8 *)puVar4
                                                                );
                                                    lVar11 = *(long *)(unaff_x19 + 0x310);
                                                    uVar12 = FUN_02f0880c(*(undefined8 *)puVar2,1);
                                                    if (lVar11 != 0) {
                                                      FUN_059a775c(lVar11,uVar12,0);
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
          }
        }
      }
    }
  }
LAB_059f4900:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


