/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch5startTime
ENTRY_POINT: 059f3a40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 190
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch5startTime
               (undefined8 param_1,undefined8 param_2)

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
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *unaff_x26;
  undefined8 uStack0000000000000008;
  
  puVar16 = *(undefined8 **)(unaff_x20 + 0x548);
  uStack0000000000000008 = param_1;
  FUN_0624b7dc(param_2,*(undefined8 *)(unaff_x19 + 0x2e8),0);
  plVar11 = (long *)thunk_FUN_02f45270(*puVar16);
  FUN_0597be54(plVar11,0);
  puVar2 = Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__;
  if (plVar11 != (long *)0x0) {
                    /* try { // try from 059f3a6c to 05af3a7b has its CatchHandler @ 059f41ac */
    FUN_0623f514(plVar11,*(undefined8 *)
                          Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__,0);
    (**(code **)(*plVar11 + 0x248))(plVar11,1,*(undefined8 *)(*plVar11 + 0x250));
    FUN_0623f468(plVar11,0,0);
                    /* try { // try from 059f3aac to 05af3aaf has its CatchHandler @ 059f41c8 */
    uVar13 = *(undefined8 *)puVar2;
                    /* try { // try from 059f3ab0 to 05af3abf has its CatchHandler @ 059f4200 */
    *(long **)(unaff_x19 + 0x2c8) = plVar11;
    FUN_0624193c(plVar11,uVar13,0);
    uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 0x260);
                    /* try { // try from 059f3ad4 to 05af3ad7 has its CatchHandler @ 059f41c4 */
    FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x2c8),0);
                    /* try { // try from 059f3ad8 to 05af3ae7 has its CatchHandler @ 059f41fc */
    lVar12 = thunk_FUN_02f45270(*unaff_x26);
                    /* try { // try from 059f3ae8 to 05af3af3 has its CatchHandler @ 059f41f8 */
    FUN_0623f858(lVar12,0);
    puVar3 = Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__;
    puVar2 = Method_System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_RemoveAt__;
    if (lVar12 != 0) {
                    /* try { // try from 059f3b08 to 05af3b13 has its CatchHandler @ 059f41f0 */
      FUN_0623f514(lVar12,*(undefined8 *)
                           Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__,0);
      FUN_0623f468(lVar12,1,0);
      uVar13 = *(undefined8 *)puVar3;
      *(long *)(unaff_x19 + 0x2f0) = lVar12;
      FUN_0624193c(lVar12,uVar13,0);
      uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 0x260);
                    /* try { // try from 059f3b38 to 05af3b3b has its CatchHandler @ 059f41c0 */
                    /* try { // try from 059f3b44 to 05af3b4b has its CatchHandler @ 059f41d0 */
      FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x2f0),0);
      plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_0598c764(plVar11,0);
      puVar2 = Method_System_Nullable<Decimal>_get_HasValue__;
      if (plVar11 != (long *)0x0) {
                    /* try { // try from 059f3b64 to 05af3b6f has its CatchHandler @ 059f41e8 */
        FUN_0623f514(plVar11,*(undefined8 *)Method_System_Nullable<Decimal>_get_HasValue__,0);
                    /* try { // try from 059f3b84 to 05af3b8b has its CatchHandler @ 059f419c */
        FUN_0623f468(plVar11,0,0);
        (**(code **)(*plVar11 + 0x248))(plVar11,1,*(undefined8 *)(*plVar11 + 0x250));
        uVar13 = *(undefined8 *)puVar2;
        *(long **)(unaff_x19 + 0x310) = plVar11;
        FUN_0624193c(plVar11,uVar13,0);
        if (*(long *)(unaff_x19 + 0x2f0) != 0) {
          uStack0000000000000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
          FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x310),0);
          uVar13 = thunk_FUN_02f45270(*unaff_x26);
                    /* try { // try from 059f3be8 to 05af3c0f has its CatchHandler @ 059f421c */
          FUN_0623f858(uVar13,0);
          *(undefined8 *)(unaff_x19 + 0x2f8) = uVar13;
          puVar3 = Method_System_Nullable<DataKey>_get_Value__;
          puVar2 = Method_System_Nullable<DataKey>__ctor__;
          if (*(long *)(unaff_x19 + 0x2f0) != 0) {
            uStack0000000000000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
            FUN_0624b7dc(&stack0x00000008,uVar13,0);
            lVar17 = *(long *)(unaff_x19 + 0x310);
            lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
            FUN_03a6e09c(lVar12,*(undefined8 *)puVar2);
            puVar2 = Method_System_Nullable<ConstructorHandling>_get_HasValue__;
            if (lVar12 != 0) {
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar15 = *(long *)Method_System_Nullable<ConstructorHandling>_get_HasValue__;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 != 0) {
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                }
                else {
                  FUN_03a6e8d0(lVar12,0,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  lVar14 = *(long *)(lVar12 + 0x10);
                  lVar15 = *(long *)puVar2;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_059f4900;
                }
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = 1;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                }
                else {
                  FUN_03a6e8d0(lVar12,1,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  lVar14 = *(long *)(lVar12 + 0x10);
                  lVar15 = *(long *)puVar2;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_059f4900;
                }
                uVar1 = *(uint *)(lVar12 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = 2;
                }
                else {
                  FUN_03a6e8d0(lVar12,2,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                puVar2 = Method_System_Nullable<byte>_get_HasValue__;
                if (lVar17 != 0) {
                  FUN_059a764c(lVar17,lVar12,0);
                  lVar12 = *(long *)(unaff_x19 + 0x310);
                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                  FUN_04832a2c();
                  puVar2 = Method_Unity_Collections_NativeArray<InclusiveRange>__ctor__;
                  if (lVar12 != 0) {
                    FUN_03f56aec(lVar12,uVar13,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<TemplateAsset_UxmlSerializedDataOverride>_GetEnumerator__
                                );
                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    FUN_059b518c(lVar12,0);
                    puVar10 = Method_System_Nullable<DateTimeOffset>_get_HasValue__;
                    puVar7 = Method_System_Nullable<DateParseHandling>_GetValueOrDefault__;
                    puVar6 = Method_System_Nullable<DateFormatHandling>_GetValueOrDefault__;
                    puVar5 = 
                    Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_GetSubArray__;
                    puVar4 = Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_Dispose__
                    ;
                    puVar3 = PTR_DAT_067db588;
                    if (lVar12 != 0) {
                      FUN_0623f514(lVar12,*(undefined8 *)
                                           Method_System_Nullable<DateTimeOffset>_get_HasValue__,0);
                      FUN_0424c0f4(lVar12,0,*(undefined8 *)puVar4);
                      FUN_0424c1c4(lVar12,0xff,*(undefined8 *)puVar5);
                      FUN_041f60fc(lVar12,*(undefined8 *)puVar3,*(undefined8 *)puVar7);
                      FUN_041f5d98(lVar12,1,*(undefined8 *)puVar6);
                      uVar13 = *(undefined8 *)puVar10;
                      *(long *)(unaff_x19 + 0x318) = lVar12;
                      FUN_0624193c(lVar12,uVar13,0);
                      if (*(long *)(unaff_x19 + 0x2f8) != 0) {
                        uStack0000000000000008 =
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260);
                        FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x318),0);
                        lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                        FUN_059b518c(lVar12,0);
                        puVar9 = Method_System_Nullable<DateTime>_GetValueOrDefault__;
                        puVar3 = PTR_DAT_067cdb48;
                        if (lVar12 != 0) {
                          FUN_0623f514(lVar12,*(undefined8 *)
                                               Method_System_Nullable<DateTime>_GetValueOrDefault__,
                                       0);
                          FUN_0424c0f4(lVar12,0,*(undefined8 *)puVar4);
                          FUN_0424c1c4(lVar12,0xff,*(undefined8 *)puVar5);
                          FUN_041f60fc(lVar12,*(undefined8 *)puVar3,*(undefined8 *)puVar7);
                          FUN_041f5d98(lVar12,1,*(undefined8 *)puVar6);
                          uVar13 = *(undefined8 *)puVar9;
                          *(long *)(unaff_x19 + 800) = lVar12;
                          FUN_0624193c(lVar12,uVar13,0);
                          if (*(long *)(unaff_x19 + 0x2f8) != 0) {
                            uStack0000000000000008 =
                                 *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260);
                            FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 800),0);
                            lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                            FUN_059b518c(lVar12,0);
                            puVar3 = Method_System_Nullable<Decimal>__ctor__;
                            puVar2 = 
                            Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__;
                            if (lVar12 != 0) {
                              FUN_0623f514(lVar12,*(undefined8 *)
                                                                                                      
                                                  Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__
                                           ,0);
                              FUN_0424c0f4(lVar12,0,*(undefined8 *)puVar4);
                              FUN_0424c1c4(lVar12,0xff,*(undefined8 *)puVar5);
                              FUN_041f60fc(lVar12,*(undefined8 *)puVar3,*(undefined8 *)puVar7);
                              FUN_041f5d98(lVar12,1,*(undefined8 *)puVar6);
                              uVar13 = *(undefined8 *)puVar2;
                              *(long *)(unaff_x19 + 0x328) = lVar12;
                              FUN_0624193c(lVar12,uVar13,0);
                              if (*(long *)(unaff_x19 + 0x2f8) != 0) {
                                uStack0000000000000008 =
                                     *(undefined8 *)(*(long *)(unaff_x19 + 0x2f8) + 0x260);
                                FUN_0624b7dc(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x328),0);
                                uVar13 = thunk_FUN_02f45270(*unaff_x26);
                                FUN_0623f858(uVar13,0);
                                *(undefined8 *)(unaff_x19 + 0x300) = uVar13;
                                puVar4 = 
                                Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>__ctor__
                                ;
                                if (*(long *)(unaff_x19 + 0x2f0) != 0) {
                                  uStack0000000000000008 =
                                       *(undefined8 *)(*(long *)(unaff_x19 + 0x2f0) + 0x260);
                                  FUN_0624b7dc(&stack0x00000008,uVar13,0);
                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                  FUN_059b4448(lVar12,0);
                                  puVar8 = Method_System_Nullable<DateParseHandling>__ctor__;
                                  puVar7 = Method_System_Nullable<DateFormatHandling>_get_HasValue__
                                  ;
                                  puVar6 = 
                                  Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__
                                  ;
                                  puVar5 = 
                                  Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__
                                  ;
                                  if (lVar12 != 0) {
                                    FUN_0623f514(lVar12,*(undefined8 *)puVar10,0);
                                    FUN_0424d498(0,lVar12,*(undefined8 *)puVar5);
                                    FUN_0424d574(0x3f800000,lVar12,*(undefined8 *)puVar6);
                                    FUN_041f8264(lVar12,*(undefined8 *)PTR_DAT_067db588,
                                                 *(undefined8 *)puVar8);
                                    FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7);
                                    uVar13 = *(undefined8 *)puVar10;
                                    *(long *)(unaff_x19 + 0x330) = lVar12;
                                    FUN_0624193c(lVar12,uVar13,0);
                                    if (*(long *)(unaff_x19 + 0x300) != 0) {
                                      uStack0000000000000008 =
                                           *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260);
                                      FUN_0624b7dc(&stack0x00000008,
                                                   *(undefined8 *)(unaff_x19 + 0x330),0);
                                      lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                      FUN_059b4448(lVar12,0);
                                      if (lVar12 != 0) {
                                        FUN_0623f514(lVar12,*(undefined8 *)puVar9,0);
                                        FUN_0424d498(0,lVar12,*(undefined8 *)puVar5);
                                        FUN_0424d574(0x3f800000,lVar12,*(undefined8 *)puVar6);
                                        FUN_041f8264(lVar12,*(undefined8 *)PTR_DAT_067cdb48,
                                                     *(undefined8 *)puVar8);
                                        FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7);
                                        uVar13 = *(undefined8 *)puVar9;
                                        *(long *)(unaff_x19 + 0x338) = lVar12;
                                        FUN_0624193c(lVar12,uVar13,0);
                                        if (*(long *)(unaff_x19 + 0x300) != 0) {
                                          uStack0000000000000008 =
                                               *(undefined8 *)(*(long *)(unaff_x19 + 0x300) + 0x260)
                                          ;
                                          FUN_0624b7dc(&stack0x00000008,
                                                       *(undefined8 *)(unaff_x19 + 0x338),0);
                                          lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                          FUN_059b4448(lVar12,0);
                                          if (lVar12 != 0) {
                                            FUN_0623f514(lVar12,*(undefined8 *)puVar2,0);
                                            FUN_0424d498(0,lVar12,*(undefined8 *)puVar5);
                                            FUN_0424d574(0x3f800000,lVar12,*(undefined8 *)puVar6);
                                            FUN_041f8264(lVar12,*(undefined8 *)puVar3,
                                                         *(undefined8 *)puVar8);
                                            FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7);
                                            uVar13 = *(undefined8 *)puVar2;
                                            *(long *)(unaff_x19 + 0x340) = lVar12;
                                            FUN_0624193c(lVar12,uVar13,0);
                                            if (*(long *)(unaff_x19 + 0x300) != 0) {
                                              uStack0000000000000008 =
                                                   *(undefined8 *)
                                                    (*(long *)(unaff_x19 + 0x300) + 0x260);
                                              FUN_0624b7dc(&stack0x00000008,
                                                           *(undefined8 *)(unaff_x19 + 0x340),0);
                                              uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                           PTR_DAT_067c9cb8);
                                              FUN_0623f858(uVar13,0);
                                              *(undefined8 *)(unaff_x19 + 0x308) = uVar13;
                                              if (*(long *)(unaff_x19 + 0x2f0) != 0) {
                                                uStack0000000000000008 =
                                                     *(undefined8 *)
                                                      (*(long *)(unaff_x19 + 0x2f0) + 0x260);
                                                FUN_0624b7dc(&stack0x00000008,uVar13,0);
                                                lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                                FUN_059b4448(lVar12,0);
                                                puVar3 = 
                                                Method_System_Nullable<DateTimeOffset>__ctor__;
                                                puVar2 = PTR_DAT_067d7cf0;
                                                if (lVar12 != 0) {
                                                  FUN_0623f514(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Nullable<DateTimeOffset>__ctor__,0);
                                                  FUN_0424d498(0,lVar12,*(undefined8 *)puVar5);
                                                  FUN_0424d574(0x3f800000,lVar12,
                                                               *(undefined8 *)puVar6);
                                                  FUN_041f8264(lVar12,*(undefined8 *)puVar2,
                                                               *(undefined8 *)puVar8);
                                                  FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7);
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(long *)(unaff_x19 + 0x348) = lVar12;
                                                  FUN_0624193c(lVar12,uVar13,0);
                                                  if (*(long *)(unaff_x19 + 0x308) != 0) {
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)
                                                          (*(long *)(unaff_x19 + 0x308) + 0x260);
                                                    FUN_0624b7dc(&stack0x00000008,
                                                                 *(undefined8 *)(unaff_x19 + 0x348),
                                                                 0);
                                                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_059b4448(lVar12,0);
                                                    puVar3 = 
                                                  Method_System_Nullable<Decimal>_GetValueOrDefault__
                                                  ;
                                                  puVar2 = PTR_DAT_067d7ce8;
                                                  if (lVar12 != 0) {
                                                    FUN_0623f514(lVar12,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Nullable<Decimal>_GetValueOrDefault__
                                                  ,0);
                                                  FUN_0424d498(0,lVar12,*(undefined8 *)puVar5);
                                                  FUN_0424d574(0x3f800000,lVar12,
                                                               *(undefined8 *)puVar6);
                                                  FUN_041f8264(lVar12,*(undefined8 *)puVar2,
                                                               *(undefined8 *)puVar8);
                                                  FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7);
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(long *)(unaff_x19 + 0x350) = lVar12;
                                                  FUN_0624193c(lVar12,uVar13,0);
                                                  if (*(long *)(unaff_x19 + 0x308) != 0) {
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)
                                                          (*(long *)(unaff_x19 + 0x308) + 0x260);
                                                    FUN_0624b7dc(&stack0x00000008,
                                                                 *(undefined8 *)(unaff_x19 + 0x350),
                                                                 0);
                                                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_059b4448(lVar12,0);
                                                    puVar3 = 
                                                  Method_System_Nullable<DateTime>_get_HasValue__;
                                                  puVar2 = Method_System_Nullable<DateTime>__ctor__;
                                                  if (lVar12 != 0) {
                                                    FUN_0623f514(lVar12,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Nullable<DateTime>__ctor__,0);
                                                  FUN_0424d498(0,lVar12,*(undefined8 *)puVar5);
                                                  FUN_0424d574(0x3f800000,lVar12,
                                                               *(undefined8 *)puVar6);
                                                  FUN_041f8264(lVar12,*(undefined8 *)puVar3,
                                                               *(undefined8 *)puVar8);
                                                  FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7);
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(long *)(unaff_x19 + 0x358) = lVar12;
                                                  FUN_0624193c(lVar12,uVar13,0);
                                                  puVar2 = 
                                                  Method_Unity_Collections_NativeArray<GPUDrivenMeshLodInfo>_Dispose__
                                                  ;
                                                  if (*(long *)(unaff_x19 + 0x308) != 0) {
                                                    uStack0000000000000008 =
                                                         *(undefined8 *)
                                                          (*(long *)(unaff_x19 + 0x308) + 0x260);
                                                    FUN_0624b7dc(&stack0x00000008,
                                                                 *(undefined8 *)(unaff_x19 + 0x358),
                                                                 0);
                                                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar2);
                                                    FUN_059c226c(lVar12,0);
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
                                                  if (lVar12 != 0) {
                                                    FUN_0623f514(lVar12,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Nullable<DateTimeZoneHandling>_get_HasValue__
                                                  ,0);
                                                  uVar13 = *(undefined8 *)puVar10;
                                                  *(long *)(unaff_x19 + 0x360) = lVar12;
                                                  FUN_0624193c(lVar12,uVar13,0);
                                                  uStack0000000000000008 =
                                                       *(undefined8 *)(unaff_x19 + 0x260);
                                                  FUN_0624b7dc(&stack0x00000008,
                                                               *(undefined8 *)(unaff_x19 + 0x360),0)
                                                  ;
                                                  FUN_059f310c();
                                                  FUN_059f3234();
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e0);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar18,uVar13,*(undefined8 *)puVar3);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x2e8);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_0348800c(uVar18,uVar13,*(undefined8 *)puVar7);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x310);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Nullable<ConstructorHandling>__ctor__
                                                  );
                                                  FUN_04d8cf5c();
                                                  FUN_03436904(uVar18,uVar13,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Nullable<ConstructorHandling>_GetValueOrDefault__
                                                  );
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x318);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(uVar18,uVar13,*(undefined8 *)puVar5);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 800);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(uVar18,uVar13,*(undefined8 *)puVar5);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x328);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(uVar18,uVar13,*(undefined8 *)puVar5);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x330);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar18,uVar13,*(undefined8 *)puVar3);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x338);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar18,uVar13,*(undefined8 *)puVar3);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x340);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar18,uVar13,*(undefined8 *)puVar3);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x348);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar18,uVar13,*(undefined8 *)puVar3);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x350);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar18,uVar13,*(undefined8 *)puVar3);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x358);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar18,uVar13,*(undefined8 *)puVar3);
                                                  uVar18 = *(undefined8 *)(unaff_x19 + 0x2c8);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(uVar18,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = *(long *)(unaff_x19 + 0x2d0);
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                               PTR_DAT_067c8fb0);
                                                  FUN_05054f60();
                                                  puVar4 = PTR_DAT_067cbf98;
                                                  puVar3 = PTR_DAT_067cbf90;
                                                  puVar2 = PTR_DAT_067cb890;
                                                  if (lVar12 != 0) {
                                                    FUN_0597f210(lVar12,uVar13,0);
                                                    uVar18 = *(undefined8 *)(unaff_x19 + 0x360);
                                                    uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_04d8cf5c();
                                                    FUN_03436904(uVar18,uVar13,*(undefined8 *)puVar4
                                                                );
                                                    lVar12 = *(long *)(unaff_x19 + 0x310);
                                                    uVar13 = FUN_02f0880c(*(undefined8 *)puVar2,1);
                                                    if (lVar12 != 0) {
                                                      FUN_059a775c(lVar12,uVar13,0);
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
          }
        }
      }
    }
  }
LAB_059f4900:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


