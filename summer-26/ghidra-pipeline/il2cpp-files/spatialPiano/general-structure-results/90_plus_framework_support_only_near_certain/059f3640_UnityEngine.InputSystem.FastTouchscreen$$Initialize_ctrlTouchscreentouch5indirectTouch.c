/*
FUNCTION_NAME: UnityEngine.InputSystem.FastTouchscreen$$Initialize_ctrlTouchscreentouch5indirectTouch
ENTRY_POINT: 059f3640
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 174
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_FastTouchscreen__Initialize_ctrlTouchscreentouch5indirectTouch(void)

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
  long *unaff_x19;
  long unaff_x20;
  long lVar16;
  long *unaff_x26;
  long in_stack_00000008;
  
  FUN_02f08768();
  FUN_02f08768(Method_Unity_Collections_NativeArray<LightShadowCasterCullingInfo>__ctor__);
  FUN_02f08768(Method_System_Nullable<DateFormatHandling>_GetValueOrDefault__);
                    /* try { // try from 059f3664 to 05af366b has its CatchHandler @ 059f392c */
  FUN_02f08768(Method_System_Nullable<DateFormatHandling>_get_HasValue__);
  FUN_02f08768(Method_System_Nullable<DateParseHandling>__ctor__);
                    /* try { // try from 059f3678 to 05af3683 has its CatchHandler @ 059f3914 */
  FUN_02f08768(Method_System_Nullable<DateParseHandling>_GetValueOrDefault__);
                    /* try { // try from 059f3684 to 05af3693 has its CatchHandler @ 059f3910 */
  FUN_02f08768(Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>__ctor__);
  FUN_02f08768(Method_Unity_Collections_NativeArray<InclusiveRange>__ctor__);
                    /* try { // try from 059f36a0 to 05af36a7 has its CatchHandler @ 059f390c */
  FUN_02f08768(Method_Unity_Collections_NativeArray<GPUDrivenMeshLodInfo>_Dispose__);
                    /* try { // try from 059f36a8 to 05af36bb has its CatchHandler @ 059f3908 */
  FUN_02f08768(PTR_DAT_067c9cb8);
  FUN_02f08768(PTR_DAT_067d7ce8);
  FUN_02f08768(Method_System_Nullable<DateParseHandling>_get_HasValue__);
                    /* try { // try from 059f36cc to 05af36d3 has its CatchHandler @ 059f38f8 */
  FUN_02f08768(Method_System_Nullable<DateTime>__ctor__);
  FUN_02f08768(PTR_DAT_067db588);
                    /* try { // try from 059f36e4 to 05af3723 has its CatchHandler @ 059f391c */
  FUN_02f08768(PTR_DAT_067cdb48);
  FUN_02f08768(PTR_DAT_067d7cf0);
  FUN_02f08768(Method_System_Nullable<DateTime>_GetValueOrDefault__);
  FUN_02f08768(Method_System_Nullable<DateTime>_get_HasValue__);
  FUN_02f08768(Method_System_Nullable<DateTimeOffset>__ctor__);
  FUN_02f08768(Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__);
  FUN_02f08768(Method_System_Nullable<DateTimeOffset>_get_HasValue__);
  FUN_02f08768(Method_System_Nullable<DateTimeZoneHandling>__ctor__);
  FUN_02f08768(Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__);
  FUN_02f08768(Method_System_Nullable<DateTimeZoneHandling>_get_HasValue__);
  FUN_02f08768(Method_System_Nullable<Decimal>__ctor__);
  FUN_02f08768(Method_System_Nullable<Decimal>_GetValueOrDefault__);
  FUN_02f08768(Method_System_Nullable<Decimal>_get_HasValue__);
                    /* try { // try from 059f377c to 05af3783 has its CatchHandler @ 059f3884 */
                    /* try { // try from 059f3784 to 05af37a3 has its CatchHandler @ 059f3880 */
  FUN_02f08768(Method_System_Nullable<DefaultValueHandling>__ctor__);
  FUN_02f08768(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
  FUN_02f08768(Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__);
  FUN_02f08768(Method_System_Nullable<DefaultValueHandling>_get_HasValue__);
                    /* try { // try from 059f37b0 to 05af37b3 has its CatchHandler @ 059f387c */
  *(undefined1 *)(unaff_x20 + 0xec9) = 1;
  puVar2 = Method_System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_Add__;
                    /* try { // try from 059f37c0 to 05af37c3 has its CatchHandler @ 059f3888 */
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
                    /* try { // try from 059f37d4 to 05af37e3 has its CatchHandler @ 059f38a0 */
    thunk_FUN_02f6670c();
  }
  FUN_0623f858();
                    /* try { // try from 059f37e4 to 05af3833 has its CatchHandler @ 059f3380 */
  FUN_0624193c();
  (**(code **)(*unaff_x19 + 0x248))();
  FUN_0623f468();
  plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0597f61c(plVar11,0);
  puVar2 = Method_System_Nullable<DefaultValueHandling>__ctor__;
  if (plVar11 != (long *)0x0) {
                    /* try { // try from 059f3834 to 05af3837 has its CatchHandler @ 059f388c */
                    /* try { // try from 059f3838 to 05af383b has its CatchHandler @ 059f3928 */
                    /* try { // try from 059f383c to 05af383f has its CatchHandler @ 059f3924 */
                    /* try { // try from 059f3840 to 05af3843 has its CatchHandler @ 059f3920 */
                    /* try { // try from 059f3844 to 05af3847 has its CatchHandler @ 059f3380 */
    FUN_0623f514(plVar11,*(undefined8 *)Method_System_Nullable<DefaultValueHandling>__ctor__,0);
    (**(code **)(*plVar11 + 0x248))(plVar11,0,*(undefined8 *)(*plVar11 + 0x250));
    FUN_0623f468(plVar11,1,0);
    uVar13 = *(undefined8 *)puVar2;
    unaff_x19[0x5a] = (long)plVar11;
    FUN_0624193c(plVar11,uVar13,0);
    in_stack_00000008 = unaff_x19[0x4c];
    FUN_0624b7dc(&stack0x00000008,unaff_x19[0x5a],0);
    plVar11 = (long *)thunk_FUN_02f45270(*unaff_x26);
    FUN_0623f858(plVar11,0);
    puVar3 = Method_System_Nullable<DateTimeZoneHandling>__ctor__;
    puVar2 = Method_System_Collections_Generic_List<Painter2D_Painter2DJobData>_get_Item__;
    if (plVar11 != (long *)0x0) {
      FUN_0623f514(plVar11,*(undefined8 *)Method_System_Nullable<DateTimeZoneHandling>__ctor__,0);
      (**(code **)(*plVar11 + 0x248))(plVar11,0,*(undefined8 *)(*plVar11 + 0x250));
      FUN_0623f468(plVar11,1,0);
      uVar13 = *(undefined8 *)puVar3;
      unaff_x19[0x5b] = (long)plVar11;
      FUN_0624193c(plVar11,uVar13,0);
      in_stack_00000008 = unaff_x19[0x4c];
      FUN_0624b7dc(&stack0x00000008,unaff_x19[0x5b],0);
      plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_059814c4(plVar11,0);
      puVar2 = Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__;
      if (plVar11 != (long *)0x0) {
        FUN_0623f514(plVar11,*(undefined8 *)
                              Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__,0);
        (**(code **)(*plVar11 + 0x248))(plVar11,1,*(undefined8 *)(*plVar11 + 0x250));
        FUN_0623f468(plVar11,0,0);
        uVar13 = *(undefined8 *)puVar2;
        unaff_x19[0x5c] = (long)plVar11;
        FUN_0624193c(plVar11,uVar13,0);
        puVar2 = Method_Unity_Collections_NativeArray<LightShadowCasterCullingInfo>__ctor__;
        if (unaff_x19[0x5b] != 0) {
          in_stack_00000008 = *(long *)(unaff_x19[0x5b] + 0x260);
          FUN_0624b7dc(&stack0x00000008,unaff_x19[0x5c],0);
          plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_059b8378(plVar11,0);
          puVar2 = Method_System_Nullable<DefaultValueHandling>_get_HasValue__;
          if (plVar11 != (long *)0x0) {
            FUN_0623f514(plVar11,*(undefined8 *)
                                  Method_System_Nullable<DefaultValueHandling>_get_HasValue__,0);
            (**(code **)(*plVar11 + 0x248))(plVar11,1,*(undefined8 *)(*plVar11 + 0x250));
            FUN_0623f468(plVar11,0,0);
            uVar13 = *(undefined8 *)puVar2;
            unaff_x19[0x5d] = (long)plVar11;
            FUN_0624193c(plVar11,uVar13,0);
            puVar2 = 
            Method_System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_Add__
            ;
            if (unaff_x19[0x5b] != 0) {
              in_stack_00000008 = *(long *)(unaff_x19[0x5b] + 0x260);
              FUN_0624b7dc(&stack0x00000008,unaff_x19[0x5d],0);
              plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar2);
              FUN_0597be54(plVar11,0);
              puVar2 = Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__;
              if (plVar11 != (long *)0x0) {
                FUN_0623f514(plVar11,*(undefined8 *)
                                      Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__
                             ,0);
                (**(code **)(*plVar11 + 0x248))(plVar11,1,*(undefined8 *)(*plVar11 + 0x250));
                FUN_0623f468(plVar11,0,0);
                uVar13 = *(undefined8 *)puVar2;
                unaff_x19[0x59] = (long)plVar11;
                FUN_0624193c(plVar11,uVar13,0);
                in_stack_00000008 = unaff_x19[0x4c];
                FUN_0624b7dc(&stack0x00000008,unaff_x19[0x59],0);
                lVar12 = thunk_FUN_02f45270(*unaff_x26);
                FUN_0623f858(lVar12,0);
                puVar3 = Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__;
                puVar2 = 
                Method_System_Collections_Generic_List<TMP_MaterialManager_MaskingMaterial>_RemoveAt__
                ;
                if (lVar12 != 0) {
                  FUN_0623f514(lVar12,*(undefined8 *)
                                       Method_System_Nullable<DefaultValueHandling>_GetValueOrDefault__
                               ,0);
                  FUN_0623f468(lVar12,1,0);
                  uVar13 = *(undefined8 *)puVar3;
                  unaff_x19[0x5e] = lVar12;
                  FUN_0624193c(lVar12,uVar13,0);
                  in_stack_00000008 = unaff_x19[0x4c];
                  FUN_0624b7dc(&stack0x00000008,unaff_x19[0x5e],0);
                  plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar2);
                  FUN_0598c764(plVar11,0);
                  puVar2 = Method_System_Nullable<Decimal>_get_HasValue__;
                  if (plVar11 != (long *)0x0) {
                    FUN_0623f514(plVar11,*(undefined8 *)
                                          Method_System_Nullable<Decimal>_get_HasValue__,0);
                    FUN_0623f468(plVar11,0,0);
                    (**(code **)(*plVar11 + 0x248))(plVar11,1,*(undefined8 *)(*plVar11 + 0x250));
                    uVar13 = *(undefined8 *)puVar2;
                    unaff_x19[0x62] = (long)plVar11;
                    FUN_0624193c(plVar11,uVar13,0);
                    if (unaff_x19[0x5e] != 0) {
                      in_stack_00000008 = *(long *)(unaff_x19[0x5e] + 0x260);
                      FUN_0624b7dc(&stack0x00000008,unaff_x19[0x62],0);
                      lVar12 = thunk_FUN_02f45270(*unaff_x26);
                      FUN_0623f858(lVar12,0);
                      unaff_x19[0x5f] = lVar12;
                      puVar3 = Method_System_Nullable<DataKey>_get_Value__;
                      puVar2 = Method_System_Nullable<DataKey>__ctor__;
                      if (unaff_x19[0x5e] != 0) {
                        in_stack_00000008 = *(long *)(unaff_x19[0x5e] + 0x260);
                        FUN_0624b7dc(&stack0x00000008,lVar12,0);
                        lVar16 = unaff_x19[0x62];
                        lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                        FUN_03a6e09c(lVar12,*(undefined8 *)puVar2);
                        puVar2 = Method_System_Nullable<ConstructorHandling>_get_HasValue__;
                        if (lVar12 != 0) {
                          lVar14 = *(long *)(lVar12 + 0x10);
                          lVar15 = *(long *)
                                    Method_System_Nullable<ConstructorHandling>_get_HasValue__;
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
                                                     (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                     0x70));
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
                                                     (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                     0x70));
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
                                                     (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                     0x70));
                            }
                            puVar2 = Method_System_Nullable<byte>_get_HasValue__;
                            if (lVar16 != 0) {
                              FUN_059a764c(lVar16,lVar12,0);
                              lVar12 = unaff_x19[0x62];
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
                                puVar7 = 
                                Method_System_Nullable<DateParseHandling>_GetValueOrDefault__;
                                puVar6 = 
                                Method_System_Nullable<DateFormatHandling>_GetValueOrDefault__;
                                puVar5 = 
                                Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_GetSubArray__
                                ;
                                puVar4 = 
                                Method_Unity_Collections_NativeArray<IndirectBufferAllocInfo>_Dispose__
                                ;
                                puVar3 = PTR_DAT_067db588;
                                if (lVar12 != 0) {
                                  FUN_0623f514(lVar12,*(undefined8 *)
                                                                                                              
                                                  Method_System_Nullable<DateTimeOffset>_get_HasValue__
                                               ,0);
                                  FUN_0424c0f4(lVar12,0,*(undefined8 *)puVar4);
                                  FUN_0424c1c4(lVar12,0xff,*(undefined8 *)puVar5);
                                  FUN_041f60fc(lVar12,*(undefined8 *)puVar3,*(undefined8 *)puVar7);
                                  FUN_041f5d98(lVar12,1,*(undefined8 *)puVar6);
                                  uVar13 = *(undefined8 *)puVar10;
                                  unaff_x19[99] = lVar12;
                                  FUN_0624193c(lVar12,uVar13,0);
                                  if (unaff_x19[0x5f] != 0) {
                                    in_stack_00000008 = *(long *)(unaff_x19[0x5f] + 0x260);
                                    FUN_0624b7dc(&stack0x00000008,unaff_x19[99],0);
                                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                    FUN_059b518c(lVar12,0);
                                    puVar9 = Method_System_Nullable<DateTime>_GetValueOrDefault__;
                                    puVar3 = PTR_DAT_067cdb48;
                                    if (lVar12 != 0) {
                                      FUN_0623f514(lVar12,*(undefined8 *)
                                                                                                                      
                                                  Method_System_Nullable<DateTime>_GetValueOrDefault__
                                                  ,0);
                                      FUN_0424c0f4(lVar12,0,*(undefined8 *)puVar4);
                                      FUN_0424c1c4(lVar12,0xff,*(undefined8 *)puVar5);
                                      FUN_041f60fc(lVar12,*(undefined8 *)puVar3,
                                                   *(undefined8 *)puVar7);
                                      FUN_041f5d98(lVar12,1,*(undefined8 *)puVar6);
                                      uVar13 = *(undefined8 *)puVar9;
                                      unaff_x19[100] = lVar12;
                                      FUN_0624193c(lVar12,uVar13,0);
                                      if (unaff_x19[0x5f] != 0) {
                                        in_stack_00000008 = *(long *)(unaff_x19[0x5f] + 0x260);
                                        FUN_0624b7dc(&stack0x00000008,unaff_x19[100],0);
                                        lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                        FUN_059b518c(lVar12,0);
                                        puVar3 = Method_System_Nullable<Decimal>__ctor__;
                                        puVar2 = 
                                        Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__
                                        ;
                                        if (lVar12 != 0) {
                                          FUN_0623f514(lVar12,*(undefined8 *)
                                                                                                                              
                                                  Method_System_Nullable<DateTimeZoneHandling>_GetValueOrDefault__
                                                  ,0);
                                          FUN_0424c0f4(lVar12,0,*(undefined8 *)puVar4);
                                          FUN_0424c1c4(lVar12,0xff,*(undefined8 *)puVar5);
                                          FUN_041f60fc(lVar12,*(undefined8 *)puVar3,
                                                       *(undefined8 *)puVar7);
                                          FUN_041f5d98(lVar12,1,*(undefined8 *)puVar6);
                                          uVar13 = *(undefined8 *)puVar2;
                                          unaff_x19[0x65] = lVar12;
                                          FUN_0624193c(lVar12,uVar13,0);
                                          if (unaff_x19[0x5f] != 0) {
                                            in_stack_00000008 = *(long *)(unaff_x19[0x5f] + 0x260);
                                            FUN_0624b7dc(&stack0x00000008,unaff_x19[0x65],0);
                                            lVar12 = thunk_FUN_02f45270(*unaff_x26);
                                            FUN_0623f858(lVar12,0);
                                            unaff_x19[0x60] = lVar12;
                                            puVar4 = 
                                            Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>__ctor__
                                            ;
                                            if (unaff_x19[0x5e] != 0) {
                                              in_stack_00000008 = *(long *)(unaff_x19[0x5e] + 0x260)
                                              ;
                                              FUN_0624b7dc(&stack0x00000008,lVar12,0);
                                              lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                              FUN_059b4448(lVar12,0);
                                              puVar8 = 
                                              Method_System_Nullable<DateParseHandling>__ctor__;
                                              puVar7 = 
                                              Method_System_Nullable<DateFormatHandling>_get_HasValue__
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
                                                FUN_0424d574(0x3f800000,lVar12,*(undefined8 *)puVar6
                                                            );
                                                FUN_041f8264(lVar12,*(undefined8 *)PTR_DAT_067db588,
                                                             *(undefined8 *)puVar8);
                                                FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7);
                                                uVar13 = *(undefined8 *)puVar10;
                                                unaff_x19[0x66] = lVar12;
                                                FUN_0624193c(lVar12,uVar13,0);
                                                if (unaff_x19[0x60] != 0) {
                                                  in_stack_00000008 =
                                                       *(long *)(unaff_x19[0x60] + 0x260);
                                                  FUN_0624b7dc(&stack0x00000008,unaff_x19[0x66],0);
                                                  lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_059b4448(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    FUN_0623f514(lVar12,*(undefined8 *)puVar9,0);
                                                    FUN_0424d498(0,lVar12,*(undefined8 *)puVar5);
                                                    FUN_0424d574(0x3f800000,lVar12,
                                                                 *(undefined8 *)puVar6);
                                                    FUN_041f8264(lVar12,*(undefined8 *)
                                                                         PTR_DAT_067cdb48,
                                                                 *(undefined8 *)puVar8);
                                                    FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7);
                                                    uVar13 = *(undefined8 *)puVar9;
                                                    unaff_x19[0x67] = lVar12;
                                                    FUN_0624193c(lVar12,uVar13,0);
                                                    if (unaff_x19[0x60] != 0) {
                                                      in_stack_00000008 =
                                                           *(long *)(unaff_x19[0x60] + 0x260);
                                                      FUN_0624b7dc(&stack0x00000008,unaff_x19[0x67],
                                                                   0);
                                                      lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_059b4448(lVar12,0);
                                                      if (lVar12 != 0) {
                                                        FUN_0623f514(lVar12,*(undefined8 *)puVar2,0)
                                                        ;
                                                        FUN_0424d498(0,lVar12,*(undefined8 *)puVar5)
                                                        ;
                                                        FUN_0424d574(0x3f800000,lVar12,
                                                                     *(undefined8 *)puVar6);
                                                        FUN_041f8264(lVar12,*(undefined8 *)puVar3,
                                                                     *(undefined8 *)puVar8);
                                                        FUN_041f7f00(lVar12,1,*(undefined8 *)puVar7)
                                                        ;
                                                        uVar13 = *(undefined8 *)puVar2;
                                                        unaff_x19[0x68] = lVar12;
                                                        FUN_0624193c(lVar12,uVar13,0);
                                                        if (unaff_x19[0x60] != 0) {
                                                          in_stack_00000008 =
                                                               *(long *)(unaff_x19[0x60] + 0x260);
                                                          FUN_0624b7dc(&stack0x00000008,
                                                                       unaff_x19[0x68],0);
                                                          lVar12 = thunk_FUN_02f45270(*(undefined8 *
                                                                                       )
                                                  PTR_DAT_067c9cb8);
                                                  FUN_0623f858(lVar12,0);
                                                  unaff_x19[0x61] = lVar12;
                                                  if (unaff_x19[0x5e] != 0) {
                                                    in_stack_00000008 =
                                                         *(long *)(unaff_x19[0x5e] + 0x260);
                                                    FUN_0624b7dc(&stack0x00000008,lVar12,0);
                                                    lVar12 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar4);
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
                                                  unaff_x19[0x69] = lVar12;
                                                  FUN_0624193c(lVar12,uVar13,0);
                                                  if (unaff_x19[0x61] != 0) {
                                                    in_stack_00000008 =
                                                         *(long *)(unaff_x19[0x61] + 0x260);
                                                    FUN_0624b7dc(&stack0x00000008,unaff_x19[0x69],0)
                                                    ;
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
                                                  unaff_x19[0x6a] = lVar12;
                                                  FUN_0624193c(lVar12,uVar13,0);
                                                  if (unaff_x19[0x61] != 0) {
                                                    in_stack_00000008 =
                                                         *(long *)(unaff_x19[0x61] + 0x260);
                                                    FUN_0624b7dc(&stack0x00000008,unaff_x19[0x6a],0)
                                                    ;
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
                                                  unaff_x19[0x6b] = lVar12;
                                                  FUN_0624193c(lVar12,uVar13,0);
                                                  puVar2 = 
                                                  Method_Unity_Collections_NativeArray<GPUDrivenMeshLodInfo>_Dispose__
                                                  ;
                                                  if (unaff_x19[0x61] != 0) {
                                                    in_stack_00000008 =
                                                         *(long *)(unaff_x19[0x61] + 0x260);
                                                    FUN_0624b7dc(&stack0x00000008,unaff_x19[0x6b],0)
                                                    ;
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
                                                  unaff_x19[0x6c] = lVar12;
                                                  FUN_0624193c(lVar12,uVar13,0);
                                                  in_stack_00000008 = unaff_x19[0x4c];
                                                  FUN_0624b7dc(&stack0x00000008,unaff_x19[0x6c],0);
                                                  FUN_059f310c();
                                                  FUN_059f3234();
                                                  lVar12 = unaff_x19[0x5c];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(lVar12,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = unaff_x19[0x5d];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_0348800c(lVar12,uVar13,*(undefined8 *)puVar7);
                                                  lVar12 = unaff_x19[0x62];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Nullable<ConstructorHandling>__ctor__
                                                  );
                                                  FUN_04d8cf5c();
                                                  FUN_03436904(lVar12,uVar13,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_System_Nullable<ConstructorHandling>_GetValueOrDefault__
                                                  );
                                                  lVar12 = unaff_x19[99];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(lVar12,uVar13,*(undefined8 *)puVar5);
                                                  lVar12 = unaff_x19[100];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(lVar12,uVar13,*(undefined8 *)puVar5);
                                                  lVar12 = unaff_x19[0x65];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487ec4(lVar12,uVar13,*(undefined8 *)puVar5);
                                                  lVar12 = unaff_x19[0x66];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(lVar12,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = unaff_x19[0x67];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(lVar12,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = unaff_x19[0x68];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(lVar12,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = unaff_x19[0x69];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(lVar12,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = unaff_x19[0x6a];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(lVar12,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = unaff_x19[0x6b];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(lVar12,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = unaff_x19[0x59];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04d8cf5c();
                                                  FUN_03487f68(lVar12,uVar13,*(undefined8 *)puVar3);
                                                  lVar12 = unaff_x19[0x5a];
                                                  uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                               PTR_DAT_067c8fb0);
                                                  FUN_05054f60();
                                                  puVar4 = PTR_DAT_067cbf98;
                                                  puVar3 = PTR_DAT_067cbf90;
                                                  puVar2 = PTR_DAT_067cb890;
                                                  if (lVar12 != 0) {
                                                    FUN_0597f210(lVar12,uVar13,0);
                                                    lVar12 = unaff_x19[0x6c];
                                                    uVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_04d8cf5c();
                                                    FUN_03436904(lVar12,uVar13,*(undefined8 *)puVar4
                                                                );
                                                    lVar12 = unaff_x19[0x62];
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


