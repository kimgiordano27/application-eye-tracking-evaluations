/*
FUNCTION_NAME: Unity.Mathematics.uint4x3$$Equals
ENTRY_POINT: 02152fe8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 146
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Mathematics_uint4x3__Equals(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar26;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long *plVar27;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  long in_stack_00000208;
  long in_stack_00000210;
  long in_stack_00000218;
  long in_stack_00000220;
  long in_stack_00000228;
  long in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  long in_stack_00000248;
  long in_stack_00000250;
  long in_stack_00000258;
  long in_stack_00000260;
  long in_stack_00000268;
  long in_stack_00000270;
  long in_stack_00000278;
  long in_stack_00000280;
  long in_stack_00000288;
  long in_stack_00000290;
  long in_stack_00000298;
  long in_stack_000002a0;
  long in_stack_000002a8;
  long in_stack_000002b0;
  long in_stack_000002b8;
  long in_stack_000002c0;
  long in_stack_000002c8;
  long in_stack_000002d0;
  long in_stack_000002d8;
  long in_stack_000002e0;
  long in_stack_000002e8;
  long in_stack_000002f0;
  long in_stack_000002f8;
  long in_stack_00000300;
  long in_stack_00000308;
  long in_stack_00000310;
  long in_stack_00000318;
  long in_stack_00000320;
  long in_stack_00000328;
  long in_stack_00000330;
  long in_stack_00000338;
  long in_stack_00000340;
  long in_stack_00000348;
  long in_stack_00000350;
  long in_stack_00000358;
  long in_stack_00000360;
  long in_stack_00000368;
  
  lVar13 = FUN_02160990();
  lVar14 = FUN_02160b50();
  lVar15 = FUN_02160d10();
  lVar16 = FUN_02160ed0();
  lVar17 = FUN_0216107c();
  lVar18 = FUN_02161228();
  lVar19 = FUN_021613d4();
  lVar20 = FUN_02161580();
  uVar21 = FUN_0216172c();
  FUN_021f605c(&stack0x000004c0,*unaff_x23,0);
  lVar23 = *(long *)(unaff_x19 + 0x140);
  if (lVar23 != 0) {
    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_02155008;
    *(undefined8 *)(lVar23 + 0x28) = 0;
    *(undefined8 *)(lVar23 + 0x20) = 0;
    lVar23 = *(long *)(unaff_x19 + 0x148);
    if (lVar23 != 0) {
      if ((unaff_x25 != 0) && (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0)) goto LAB_0215500c;
      puVar6 = Method_AutoExtensions_CanGetComponent<GrabbableObject>__;
      if (*(int *)(lVar23 + 0x18) == 0) {
LAB_02155008:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(long *)(lVar23 + 0x20) = unaff_x25;
      FUN_021f605c(&stack0x000004b0,*(undefined8 *)puVar6,0);
      lVar23 = *(long *)(unaff_x19 + 0x140);
      if (lVar23 != 0) {
        if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_02155008;
        *(undefined8 *)(lVar23 + 0x38) = 0;
        *(undefined8 *)(lVar23 + 0x30) = 0;
        lVar23 = *(long *)(unaff_x19 + 0x148);
        if (lVar23 != 0) {
          if ((unaff_x25 != 0) && (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0)) goto LAB_0215500c;
          puVar6 = 
          Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
          ;
          if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_02155008;
          *(long *)(lVar23 + 0x28) = unaff_x25;
          FUN_021f605c(&stack0x000004a0,*(undefined8 *)puVar6,0);
          lVar23 = *(long *)(unaff_x19 + 0x140);
          if (lVar23 != 0) {
            if (*(uint *)(lVar23 + 0x18) < 3) goto LAB_02155008;
            *(undefined8 *)(lVar23 + 0x48) = 0;
            *(undefined8 *)(lVar23 + 0x40) = 0;
            lVar23 = *(long *)(unaff_x19 + 0x148);
            if (lVar23 != 0) {
              if ((unaff_x29 != 0) && (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
              goto LAB_0215500c;
              puVar6 = 
              UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_TypeInfo;
              if (*(uint *)(lVar23 + 0x18) < 3) goto LAB_02155008;
              *(long *)(lVar23 + 0x30) = unaff_x29;
              FUN_021f605c(&stack0x00000490,*(undefined8 *)puVar6,0);
              lVar23 = *(long *)(unaff_x19 + 0x140);
              if (lVar23 != 0) {
                if (*(uint *)(lVar23 + 0x18) < 4) goto LAB_02155008;
                *(undefined8 *)(lVar23 + 0x58) = 0;
                *(undefined8 *)(lVar23 + 0x50) = 0;
                lVar23 = *(long *)(unaff_x19 + 0x148);
                if (lVar23 != 0) {
                  if ((unaff_x22 != 0) && (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
                  goto LAB_0215500c;
                  if (*(uint *)(lVar23 + 0x18) < 4) goto LAB_02155008;
                  *(long *)(lVar23 + 0x38) = unaff_x22;
                  FUN_021f605c(&stack0x00000480,*(undefined8 *)puVar6,0);
                  lVar23 = *(long *)(unaff_x19 + 0x140);
                  if (lVar23 != 0) {
                    if (*(uint *)(lVar23 + 0x18) < 5) goto LAB_02155008;
                    *(undefined8 *)(lVar23 + 0x68) = 0;
                    *(undefined8 *)(lVar23 + 0x60) = 0;
                    lVar23 = *(long *)(unaff_x19 + 0x148);
                    if (lVar23 != 0) {
                      if ((unaff_x28 != 0) && (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
                      goto LAB_0215500c;
                      if (*(uint *)(lVar23 + 0x18) < 5) goto LAB_02155008;
                      *(long *)(lVar23 + 0x40) = unaff_x28;
                      FUN_021f605c(&stack0x00000470,*(undefined8 *)puVar6,0);
                      lVar23 = *(long *)(unaff_x19 + 0x140);
                      if (lVar23 != 0) {
                        if (*(uint *)(lVar23 + 0x18) < 6) goto LAB_02155008;
                        *(undefined8 *)(lVar23 + 0x78) = 0;
                        *(undefined8 *)(lVar23 + 0x70) = 0;
                        plVar27 = *(long **)(unaff_x19 + 0x148);
                        if (plVar27 != (long *)0x0) {
                          if ((in_stack_00000348 != 0) &&
                             (lVar23 = thunk_FUN_00d6225c(in_stack_00000348,
                                                          *(undefined8 *)(*plVar27 + 0x40)),
                             lVar23 == 0)) goto LAB_0215500c;
                          if (*(uint *)(plVar27 + 3) < 6) goto LAB_02155008;
                          plVar27[9] = in_stack_00000348;
                          FUN_021f605c(&stack0x00000460,*(undefined8 *)puVar6,0);
                          lVar23 = *(long *)(unaff_x19 + 0x140);
                          if (lVar23 != 0) {
                            if (*(uint *)(lVar23 + 0x18) < 7) goto LAB_02155008;
                            *(undefined8 *)(lVar23 + 0x88) = 0;
                            *(undefined8 *)(lVar23 + 0x80) = 0;
                            lVar23 = *(long *)(unaff_x19 + 0x148);
                            if (lVar23 != 0) {
                              if ((unaff_x27 != 0) && (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
                              goto LAB_0215500c;
                              if (*(uint *)(lVar23 + 0x18) < 7) goto LAB_02155008;
                              *(long *)(lVar23 + 0x50) = unaff_x27;
                              FUN_021f605c(&stack0x00000450,*(undefined8 *)puVar6,0);
                              lVar23 = *(long *)(unaff_x19 + 0x140);
                              if (lVar23 != 0) {
                                if (*(uint *)(lVar23 + 0x18) < 8) goto LAB_02155008;
                                *(undefined8 *)(lVar23 + 0x98) = 0;
                                *(undefined8 *)(lVar23 + 0x90) = 0;
                                lVar23 = *(long *)(unaff_x19 + 0x148);
                                if (lVar23 != 0) {
                                  if ((unaff_x26 != 0) &&
                                     (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
                                  goto LAB_0215500c;
                                  if (*(uint *)(lVar23 + 0x18) < 8) goto LAB_02155008;
                                  *(long *)(lVar23 + 0x58) = unaff_x26;
                                  FUN_021f605c(&stack0x00000440,*(undefined8 *)puVar6,0);
                                  lVar23 = *(long *)(unaff_x19 + 0x140);
                                  if (lVar23 != 0) {
                                    if (*(uint *)(lVar23 + 0x18) < 9) goto LAB_02155008;
                                    *(undefined8 *)(lVar23 + 0xa8) = 0;
                                    *(undefined8 *)(lVar23 + 0xa0) = 0;
                                    plVar27 = *(long **)(unaff_x19 + 0x148);
                                    if (plVar27 != (long *)0x0) {
                                      if ((in_stack_00000340 != 0) &&
                                         (lVar23 = thunk_FUN_00d6225c(in_stack_00000340,
                                                                      *(undefined8 *)
                                                                       (*plVar27 + 0x40)),
                                         lVar23 == 0)) goto LAB_0215500c;
                                      if (*(uint *)(plVar27 + 3) < 9) goto LAB_02155008;
                                      plVar27[0xc] = in_stack_00000340;
                                      FUN_021f605c(&stack0x00000430,*(undefined8 *)puVar6,0);
                                      lVar23 = *(long *)(unaff_x19 + 0x140);
                                      if (lVar23 != 0) {
                                        if (*(uint *)(lVar23 + 0x18) < 10) goto LAB_02155008;
                                        *(undefined8 *)(lVar23 + 0xb8) = 0;
                                        *(undefined8 *)(lVar23 + 0xb0) = 0;
                                        lVar23 = *(long *)(unaff_x19 + 0x148);
                                        if (lVar23 != 0) {
                                          if ((unaff_x21 != 0) &&
                                             (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
                                          goto LAB_0215500c;
                                          if (*(uint *)(lVar23 + 0x18) < 10) goto LAB_02155008;
                                          *(long *)(lVar23 + 0x68) = unaff_x21;
                                          FUN_021f605c(&stack0x00000420,*(undefined8 *)puVar6,0);
                                          lVar23 = *(long *)(unaff_x19 + 0x140);
                                          if (lVar23 != 0) {
                                            if (*(uint *)(lVar23 + 0x18) < 0xb) goto LAB_02155008;
                                            *(undefined8 *)(lVar23 + 200) = 0;
                                            *(undefined8 *)(lVar23 + 0xc0) = 0;
                                            plVar27 = *(long **)(unaff_x19 + 0x148);
                                            if (plVar27 != (long *)0x0) {
                                              if ((in_stack_00000358 != 0) &&
                                                 (lVar23 = thunk_FUN_00d6225c(in_stack_00000358,
                                                                              *(undefined8 *)
                                                                               (*plVar27 + 0x40)),
                                                 lVar23 == 0)) goto LAB_0215500c;
                                              if (*(uint *)(plVar27 + 3) < 0xb) goto LAB_02155008;
                                              plVar27[0xe] = in_stack_00000358;
                                              FUN_021f605c(&stack0x00000410,*(undefined8 *)puVar6,0)
                                              ;
                                              lVar23 = *(long *)(unaff_x19 + 0x140);
                                              if (lVar23 != 0) {
                                                if (*(uint *)(lVar23 + 0x18) < 0xc)
                                                goto LAB_02155008;
                                                *(undefined8 *)(lVar23 + 0xd8) = 0;
                                                *(undefined8 *)(lVar23 + 0xd0) = 0;
                                                plVar27 = *(long **)(unaff_x19 + 0x148);
                                                if (plVar27 != (long *)0x0) {
                                                  if ((in_stack_00000338 != 0) &&
                                                     (lVar23 = thunk_FUN_00d6225c(in_stack_00000338,
                                                                                  *(undefined8 *)
                                                                                   (*plVar27 + 0x40)
                                                                                 ), lVar23 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0xc)
                                                  goto LAB_02155008;
                                                  plVar27[0xf] = in_stack_00000338;
                                                  FUN_021f605c(&stack0x00000400,
                                                               *(undefined8 *)puVar6,0);
                                                  lVar23 = *(long *)(unaff_x19 + 0x140);
                                                  if (lVar23 != 0) {
                                                    if (*(uint *)(lVar23 + 0x18) < 0xd)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar23 + 0xe8) = 0;
                                                    *(undefined8 *)(lVar23 + 0xe0) = 0;
                                                    plVar27 = *(long **)(unaff_x19 + 0x148);
                                                    if (plVar27 != (long *)0x0) {
                                                      if ((in_stack_00000360 != 0) &&
                                                         (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000360,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0xd)
                                                  goto LAB_02155008;
                                                  plVar27[0x10] = in_stack_00000360;
                                                  FUN_021f605c(&stack0x000003f0,
                                                               *(undefined8 *)puVar6,0);
                                                  lVar23 = *(long *)(unaff_x19 + 0x140);
                                                  if (lVar23 != 0) {
                                                    if (*(uint *)(lVar23 + 0x18) < 0xe)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar23 + 0xf8) = 0;
                                                    *(undefined8 *)(lVar23 + 0xf0) = 0;
                                                    plVar27 = *(long **)(unaff_x19 + 0x148);
                                                    if (plVar27 != (long *)0x0) {
                                                      if ((in_stack_00000368 != 0) &&
                                                         (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000368,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0xe)
                                                  goto LAB_02155008;
                                                  plVar27[0x11] = in_stack_00000368;
                                                  FUN_021f605c(&stack0x000003e0,
                                                               *(undefined8 *)puVar6,0);
                                                  lVar23 = *(long *)(unaff_x19 + 0x140);
                                                  if (lVar23 != 0) {
                                                    if (*(uint *)(lVar23 + 0x18) < 0xf)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar23 + 0x108) = 0;
                                                    *(undefined8 *)(lVar23 + 0x100) = 0;
                                                    plVar27 = *(long **)(unaff_x19 + 0x148);
                                                    if (plVar27 != (long *)0x0) {
                                                      if ((in_stack_00000350 != 0) &&
                                                         (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000350,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  puVar6 = StringLiteral_5042;
                                                  if (*(uint *)(plVar27 + 3) < 0xf)
                                                  goto LAB_02155008;
                                                  plVar27[0x12] = in_stack_00000350;
                                                  FUN_021f605c(&stack0x000003d0,
                                                               *(undefined8 *)puVar6,0);
                                                  puVar6 = 
                                                  System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                                                  ;
                                                  lVar23 = *(long *)(unaff_x19 + 0x138);
                                                  if (lVar23 != 0) {
                                                    if (*(int *)(lVar23 + 0x18) == 0)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar23 + 0x28) = 0;
                                                    *(undefined8 *)(lVar23 + 0x20) = 0;
                                                    FUN_021f605c(&stack0x000003c0,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar6 = OVRPlugin_OVRP_1_37_0_TypeInfo;
                                                    lVar23 = *(long *)(unaff_x19 + 0x138);
                                                    if (lVar23 != 0) {
                                                      if (*(uint *)(lVar23 + 0x18) < 2)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar23 + 0x38) = 0;
                                                      *(undefined8 *)(lVar23 + 0x30) = 0;
                                                      FUN_021f605c(&stack0x000003b0,
                                                                   *(undefined8 *)puVar6,0);
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_get_Count__
                                                  ;
                                                  lVar23 = *(long *)(unaff_x19 + 0x138);
                                                  if (lVar23 != 0) {
                                                    if (*(uint *)(lVar23 + 0x18) < 3)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar23 + 0x48) = 0;
                                                    *(undefined8 *)(lVar23 + 0x40) = 0;
                                                    FUN_021f605c(&stack0x000003a0,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_LinkedList<WebConnection>_get_Count__
                                                  ;
                                                  lVar23 = *(long *)(unaff_x19 + 0x138);
                                                  if (lVar23 != 0) {
                                                    if (*(uint *)(lVar23 + 0x18) < 4)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar23 + 0x58) = 0;
                                                    *(undefined8 *)(lVar23 + 0x50) = 0;
                                                    FUN_021f605c(&stack0x00000390,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar6 = Method_System_IO_FileStream__ctor__;
                                                    lVar23 = *(long *)(unaff_x19 + 0x138);
                                                    if (lVar23 != 0) {
                                                      if (*(uint *)(lVar23 + 0x18) < 5)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar23 + 0x68) = 0;
                                                      *(undefined8 *)(lVar23 + 0x60) = 0;
                                                      FUN_021f605c(&stack0x00000380,
                                                                   *(undefined8 *)puVar6,0);
                                                      puVar6 = 
                                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__
                                                  ;
                                                  lVar23 = *(long *)(unaff_x19 + 0x138);
                                                  if (lVar23 != 0) {
                                                    if (*(uint *)(lVar23 + 0x18) < 6)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar23 + 0x78) = 0;
                                                    *(undefined8 *)(lVar23 + 0x70) = 0;
                                                    FUN_021f605c(&stack0x00000370,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar6 = StringLiteral_3654;
                                                    lVar23 = *(long *)(unaff_x19 + 0x138);
                                                    if (lVar23 != 0) {
                                                      if (*(uint *)(lVar23 + 0x18) < 7)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar23 + 0x88) = 0;
                                                      *(undefined8 *)(lVar23 + 0x80) = 0;
                                                      plVar27 = (long *)FUN_00da4fb8(*(undefined8 *)
                                                                                      puVar6,0x6e);
                                                      *(long **)(unaff_x20 + 0x1b8) = plVar27;
                                                      if (plVar27 != (long *)0x0) {
                                                        if ((in_stack_00000058 != 0) &&
                                                           (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000058,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) {
LAB_0215500c:
                                                    uVar21 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da5038(uVar21,0);
                                                  }
                                                  if ((int)plVar27[3] == 0) goto LAB_02155008;
                                                  plVar26 = (long *)(unaff_x20 + 0x1b8);
                                                  plVar27[4] = in_stack_00000058;
                                                  lVar23 = *plVar26;
                                                  if (lVar23 != 0) {
                                                    if ((unaff_x29 != 0) &&
                                                       (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
                                                    goto LAB_0215500c;
                                                    if (*(uint *)(lVar23 + 0x18) < 2)
                                                    goto LAB_02155008;
                                                    *(long *)(lVar23 + 0x28) = unaff_x29;
                                                    plVar27 = (long *)*plVar26;
                                                    if (plVar27 != (long *)0x0) {
                                                      if ((in_stack_00000330 != 0) &&
                                                         (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000330,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 3) goto LAB_02155008;
                                                  plVar27[6] = in_stack_00000330;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000318 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000318,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 4) goto LAB_02155008;
                                                  plVar27[7] = in_stack_00000318;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000320 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000320,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 5) goto LAB_02155008;
                                                  plVar27[8] = in_stack_00000320;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000328 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000328,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 6) goto LAB_02155008;
                                                  plVar27[9] = in_stack_00000328;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000180 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000180,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 7) goto LAB_02155008;
                                                  plVar27[10] = in_stack_00000180;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000188 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000188,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 8) goto LAB_02155008;
                                                  plVar27[0xb] = in_stack_00000188;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000190 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000190,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 9) goto LAB_02155008;
                                                  plVar27[0xc] = in_stack_00000190;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000198 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000198,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 10)
                                                  goto LAB_02155008;
                                                  plVar27[0xd] = in_stack_00000198;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001a0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001a0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0xb)
                                                  goto LAB_02155008;
                                                  plVar27[0xe] = in_stack_000001a0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001a8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001a8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0xc)
                                                  goto LAB_02155008;
                                                  plVar27[0xf] = in_stack_000001a8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001b8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001b8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0xd)
                                                  goto LAB_02155008;
                                                  plVar27[0x10] = in_stack_000001b8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001c8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001c8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0xe)
                                                  goto LAB_02155008;
                                                  plVar27[0x11] = in_stack_000001c8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001b0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001b0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0xf)
                                                  goto LAB_02155008;
                                                  plVar27[0x12] = in_stack_000001b0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001c0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001c0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x10)
                                                  goto LAB_02155008;
                                                  plVar27[0x13] = in_stack_000001c0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001d0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001d0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x11)
                                                  goto LAB_02155008;
                                                  plVar27[0x14] = in_stack_000001d0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001d8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001d8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x12)
                                                  goto LAB_02155008;
                                                  plVar27[0x15] = in_stack_000001d8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001e0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001e0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x13)
                                                  goto LAB_02155008;
                                                  plVar27[0x16] = in_stack_000001e0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001e8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001e8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x14)
                                                  goto LAB_02155008;
                                                  plVar27[0x17] = in_stack_000001e8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001f0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001f0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x15)
                                                  goto LAB_02155008;
                                                  plVar27[0x18] = in_stack_000001f0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000001f8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000001f8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x16)
                                                  goto LAB_02155008;
                                                  plVar27[0x19] = in_stack_000001f8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000200 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000200,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x17)
                                                  goto LAB_02155008;
                                                  plVar27[0x1a] = in_stack_00000200;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000208 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000208,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x18)
                                                  goto LAB_02155008;
                                                  plVar27[0x1b] = in_stack_00000208;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000210 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000210,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x19)
                                                  goto LAB_02155008;
                                                  plVar27[0x1c] = in_stack_00000210;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000218 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000218,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x1a)
                                                  goto LAB_02155008;
                                                  plVar27[0x1d] = in_stack_00000218;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000220 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000220,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x1b)
                                                  goto LAB_02155008;
                                                  plVar27[0x1e] = in_stack_00000220;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000228 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000228,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x1c)
                                                  goto LAB_02155008;
                                                  plVar27[0x1f] = in_stack_00000228;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000230 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000230,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x1d)
                                                  goto LAB_02155008;
                                                  plVar27[0x20] = in_stack_00000230;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000238 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000238,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x1e)
                                                  goto LAB_02155008;
                                                  plVar27[0x21] = in_stack_00000238;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000240 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000240,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x1f)
                                                  goto LAB_02155008;
                                                  plVar27[0x22] = in_stack_00000240;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000248 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000248,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x20)
                                                  goto LAB_02155008;
                                                  plVar27[0x23] = in_stack_00000248;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000250 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000250,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x21)
                                                  goto LAB_02155008;
                                                  plVar27[0x24] = in_stack_00000250;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000258 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000258,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x22)
                                                  goto LAB_02155008;
                                                  plVar27[0x25] = in_stack_00000258;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000260 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000260,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x23)
                                                  goto LAB_02155008;
                                                  plVar27[0x26] = in_stack_00000260;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000268 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000268,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x24)
                                                  goto LAB_02155008;
                                                  plVar27[0x27] = in_stack_00000268;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000270 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000270,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x25)
                                                  goto LAB_02155008;
                                                  plVar27[0x28] = in_stack_00000270;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000278 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000278,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x26)
                                                  goto LAB_02155008;
                                                  plVar27[0x29] = in_stack_00000278;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000280 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000280,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x27)
                                                  goto LAB_02155008;
                                                  plVar27[0x2a] = in_stack_00000280;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000288 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000288,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x28)
                                                  goto LAB_02155008;
                                                  plVar27[0x2b] = in_stack_00000288;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000290 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000290,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x29)
                                                  goto LAB_02155008;
                                                  plVar27[0x2c] = in_stack_00000290;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000298 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000298,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x2a)
                                                  goto LAB_02155008;
                                                  plVar27[0x2d] = in_stack_00000298;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002a0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002a0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x2b)
                                                  goto LAB_02155008;
                                                  plVar27[0x2e] = in_stack_000002a0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002a8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002a8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x2c)
                                                  goto LAB_02155008;
                                                  plVar27[0x2f] = in_stack_000002a8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002b0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002b0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x2d)
                                                  goto LAB_02155008;
                                                  plVar27[0x30] = in_stack_000002b0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002b8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002b8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x2e)
                                                  goto LAB_02155008;
                                                  plVar27[0x31] = in_stack_000002b8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002c0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002c0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x2f)
                                                  goto LAB_02155008;
                                                  plVar27[0x32] = in_stack_000002c0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002c8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002c8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x30)
                                                  goto LAB_02155008;
                                                  plVar27[0x33] = in_stack_000002c8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002d0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002d0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x31)
                                                  goto LAB_02155008;
                                                  plVar27[0x34] = in_stack_000002d0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002d8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002d8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x32)
                                                  goto LAB_02155008;
                                                  plVar27[0x35] = in_stack_000002d8;
                                                  lVar23 = *plVar26;
                                                  if (lVar23 != 0) {
                                                    if ((unaff_x22 != 0) &&
                                                       (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
                                                    goto LAB_0215500c;
                                                    if (*(uint *)(lVar23 + 0x18) < 0x33)
                                                    goto LAB_02155008;
                                                    *(long *)(lVar23 + 0x1b0) = unaff_x22;
                                                    lVar23 = *plVar26;
                                                    if (lVar23 != 0) {
                                                      if ((unaff_x28 != 0) &&
                                                         (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0
                                                         )) goto LAB_0215500c;
                                                      if (*(uint *)(lVar23 + 0x18) < 0x34)
                                                      goto LAB_02155008;
                                                      *(long *)(lVar23 + 0x1b8) = unaff_x28;
                                                      lVar23 = *plVar26;
                                                      if (lVar23 != 0) {
                                                        if ((unaff_x27 != 0) &&
                                                           (lVar22 = thunk_FUN_00d6225c(),
                                                           lVar22 == 0)) goto LAB_0215500c;
                                                        if (*(uint *)(lVar23 + 0x18) < 0x35)
                                                        goto LAB_02155008;
                                                        *(long *)(lVar23 + 0x1c0) = unaff_x27;
                                                        lVar23 = *plVar26;
                                                        if (lVar23 != 0) {
                                                          if ((unaff_x26 != 0) &&
                                                             (lVar22 = thunk_FUN_00d6225c(),
                                                             lVar22 == 0)) goto LAB_0215500c;
                                                          if (*(uint *)(lVar23 + 0x18) < 0x36)
                                                          goto LAB_02155008;
                                                          *(long *)(lVar23 + 0x1c8) = unaff_x26;
                                                          lVar23 = *plVar26;
                                                          if (lVar23 != 0) {
                                                            if ((unaff_x21 != 0) &&
                                                               (lVar22 = thunk_FUN_00d6225c(),
                                                               lVar22 == 0)) goto LAB_0215500c;
                                                            if (*(uint *)(lVar23 + 0x18) < 0x37)
                                                            goto LAB_02155008;
                                                            *(long *)(lVar23 + 0x1d0) = unaff_x21;
                                                            plVar27 = (long *)*plVar26;
                                                            if (plVar27 != (long *)0x0) {
                                                              if ((in_stack_00000358 != 0) &&
                                                                 (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000358,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x38)
                                                  goto LAB_02155008;
                                                  plVar27[0x3b] = in_stack_00000358;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000360 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000360,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x39)
                                                  goto LAB_02155008;
                                                  plVar27[0x3c] = in_stack_00000360;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000368 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000368,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x3a)
                                                  goto LAB_02155008;
                                                  plVar27[0x3d] = in_stack_00000368;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000350 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000350,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x3b)
                                                  goto LAB_02155008;
                                                  plVar27[0x3e] = in_stack_00000350;
                                                  lVar23 = *plVar26;
                                                  if (lVar23 != 0) {
                                                    if ((unaff_x25 != 0) &&
                                                       (lVar22 = thunk_FUN_00d6225c(), lVar22 == 0))
                                                    goto LAB_0215500c;
                                                    if (*(uint *)(lVar23 + 0x18) < 0x3c)
                                                    goto LAB_02155008;
                                                    *(long *)(lVar23 + 0x1f8) = unaff_x25;
                                                    plVar27 = (long *)*plVar26;
                                                    if (plVar27 != (long *)0x0) {
                                                      if ((in_stack_000002f8 != 0) &&
                                                         (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002f8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x3d)
                                                  goto LAB_02155008;
                                                  plVar27[0x40] = in_stack_000002f8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000300 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000300,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x3e)
                                                  goto LAB_02155008;
                                                  plVar27[0x41] = in_stack_00000300;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000308 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000308,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x3f)
                                                  goto LAB_02155008;
                                                  plVar27[0x42] = in_stack_00000308;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000310 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000310,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x40)
                                                  goto LAB_02155008;
                                                  plVar27[0x43] = in_stack_00000310;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002e0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002e0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x41)
                                                  goto LAB_02155008;
                                                  plVar27[0x44] = in_stack_000002e0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002e8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002e8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x42)
                                                  goto LAB_02155008;
                                                  plVar27[0x45] = in_stack_000002e8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000002f0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000002f0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x43)
                                                  goto LAB_02155008;
                                                  plVar27[0x46] = in_stack_000002f0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000060 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000060,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x44)
                                                  goto LAB_02155008;
                                                  plVar27[0x47] = in_stack_00000060;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000068 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000068,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x45)
                                                  goto LAB_02155008;
                                                  plVar27[0x48] = in_stack_00000068;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000070 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000070,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x46)
                                                  goto LAB_02155008;
                                                  plVar27[0x49] = in_stack_00000070;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000078 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000078,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x47)
                                                  goto LAB_02155008;
                                                  plVar27[0x4a] = in_stack_00000078;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000080 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000080,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x48)
                                                  goto LAB_02155008;
                                                  plVar27[0x4b] = in_stack_00000080;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000088 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000088,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x49)
                                                  goto LAB_02155008;
                                                  plVar27[0x4c] = in_stack_00000088;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000090 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000090,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x4a)
                                                  goto LAB_02155008;
                                                  plVar27[0x4d] = in_stack_00000090;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000098 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000098,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x4b)
                                                  goto LAB_02155008;
                                                  plVar27[0x4e] = in_stack_00000098;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000a0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000a0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x4c)
                                                  goto LAB_02155008;
                                                  plVar27[0x4f] = in_stack_000000a0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000a8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000a8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x4d)
                                                  goto LAB_02155008;
                                                  plVar27[0x50] = in_stack_000000a8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000b0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000b0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x4e)
                                                  goto LAB_02155008;
                                                  plVar27[0x51] = in_stack_000000b0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000c0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000c0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x4f)
                                                  goto LAB_02155008;
                                                  plVar27[0x52] = in_stack_000000c0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000c8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000c8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x50)
                                                  goto LAB_02155008;
                                                  plVar27[0x53] = in_stack_000000c8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000d0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000d0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x51)
                                                  goto LAB_02155008;
                                                  plVar27[0x54] = in_stack_000000d0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000d8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000d8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x52)
                                                  goto LAB_02155008;
                                                  plVar27[0x55] = in_stack_000000d8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000e0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000e0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x53)
                                                  goto LAB_02155008;
                                                  plVar27[0x56] = in_stack_000000e0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000b8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000b8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x54)
                                                  goto LAB_02155008;
                                                  plVar27[0x57] = in_stack_000000b8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000e8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000e8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x55)
                                                  goto LAB_02155008;
                                                  plVar27[0x58] = in_stack_000000e8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000f0 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000f0,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x56)
                                                  goto LAB_02155008;
                                                  plVar27[0x59] = in_stack_000000f0;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_000000f8 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_000000f8,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x57)
                                                  goto LAB_02155008;
                                                  plVar27[0x5a] = in_stack_000000f8;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000100 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000100,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x58)
                                                  goto LAB_02155008;
                                                  plVar27[0x5b] = in_stack_00000100;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000108 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000108,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x59)
                                                  goto LAB_02155008;
                                                  plVar27[0x5c] = in_stack_00000108;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000110 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000110,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x5a)
                                                  goto LAB_02155008;
                                                  plVar27[0x5d] = in_stack_00000110;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000118 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000118,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x5b)
                                                  goto LAB_02155008;
                                                  plVar27[0x5e] = in_stack_00000118;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000120 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000120,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x5c)
                                                  goto LAB_02155008;
                                                  plVar27[0x5f] = in_stack_00000120;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000128 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000128,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x5d)
                                                  goto LAB_02155008;
                                                  plVar27[0x60] = in_stack_00000128;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000130 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000130,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x5e)
                                                  goto LAB_02155008;
                                                  plVar27[0x61] = in_stack_00000130;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000138 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000138,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x5f)
                                                  goto LAB_02155008;
                                                  plVar27[0x62] = in_stack_00000138;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000140 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000140,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x60)
                                                  goto LAB_02155008;
                                                  plVar27[99] = in_stack_00000140;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000148 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000148,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x61)
                                                  goto LAB_02155008;
                                                  plVar27[100] = in_stack_00000148;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000150 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000150,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x62)
                                                  goto LAB_02155008;
                                                  plVar27[0x65] = in_stack_00000150;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000158 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000158,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 99)
                                                  goto LAB_02155008;
                                                  plVar27[0x66] = in_stack_00000158;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000160 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000160,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 100)
                                                  goto LAB_02155008;
                                                  plVar27[0x67] = in_stack_00000160;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000168 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000168,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x65)
                                                  goto LAB_02155008;
                                                  plVar27[0x68] = in_stack_00000168;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((in_stack_00000170 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(
                                                  in_stack_00000170,*(undefined8 *)(*plVar27 + 0x40)
                                                  ), lVar23 == 0)) goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x66)
                                                  goto LAB_02155008;
                                                  plVar27[0x69] = in_stack_00000170;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((lVar13 != 0) &&
                                                       (lVar23 = thunk_FUN_00d6225c(lVar13,*(
                                                  undefined8 *)(*plVar27 + 0x40)), lVar23 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x67)
                                                  goto LAB_02155008;
                                                  plVar27[0x6a] = lVar13;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((lVar14 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar14,*(
                                                  undefined8 *)(*plVar27 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x68)
                                                  goto LAB_02155008;
                                                  plVar27[0x6b] = lVar14;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((lVar15 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar15,*(
                                                  undefined8 *)(*plVar27 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x69)
                                                  goto LAB_02155008;
                                                  plVar27[0x6c] = lVar15;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((lVar16 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar16,*(
                                                  undefined8 *)(*plVar27 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x6a)
                                                  goto LAB_02155008;
                                                  plVar27[0x6d] = lVar16;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((lVar17 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar17,*(
                                                  undefined8 *)(*plVar27 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x6b)
                                                  goto LAB_02155008;
                                                  plVar27[0x6e] = lVar17;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((lVar18 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar18,*(
                                                  undefined8 *)(*plVar27 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x6c)
                                                  goto LAB_02155008;
                                                  plVar27[0x6f] = lVar18;
                                                  plVar27 = (long *)*plVar26;
                                                  if (plVar27 != (long *)0x0) {
                                                    if ((lVar19 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar19,*(
                                                  undefined8 *)(*plVar27 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar27 + 3) < 0x6d)
                                                  goto LAB_02155008;
                                                  plVar27[0x70] = lVar19;
                                                  plVar26 = (long *)*plVar26;
                                                  if (plVar26 != (long *)0x0) {
                                                    if ((lVar20 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar20,*(
                                                  undefined8 *)(*plVar26 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  puVar9 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__
                                                  ;
                                                  puVar7 = 
                                                  Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                                                  ;
                                                  puVar6 = PTR_DAT_033ed1a0;
                                                  if (*(uint *)(plVar26 + 3) < 0x6e)
                                                  goto LAB_02155008;
                                                  plVar26[0x71] = lVar20;
                                                  *(undefined8 *)(unaff_x20 + 0x170) = unaff_x24;
                                                  *(long *)(unaff_x20 + 0x178) = in_stack_00000348;
                                                  *(long *)(unaff_x20 + 0x180) = in_stack_00000338;
                                                  *(long *)(unaff_x20 + 0x188) = in_stack_00000340;
                                                  *(undefined8 *)(unaff_x20 + 400) = uVar21;
                                                  puVar11 = StringLiteral_9728;
                                                  puVar10 = StringLiteral_6114;
                                                  puVar8 = 
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Background>__
                                                  ;
                                                  uVar21 = FUN_00da4fb8(*(undefined8 *)puVar9,0x73);
                                                  FUN_016a34e8(uVar21,*(undefined8 *)puVar6,0);
                                                  *(undefined8 *)(unaff_x19 + 0x158) = uVar21;
                                                  lVar13 = FUN_00da4fb8(*(undefined8 *)puVar7,0x627)
                                                  ;
                                                  FUN_016a34e8(lVar13,*(undefined8 *)puVar10,0);
                                                  uVar21 = FUN_00da4fb8(*(undefined8 *)puVar11,0x75)
                                                  ;
                                                  FUN_016a34e8(uVar21,*(undefined8 *)puVar8,0);
                                                  if (DAT_03781303 == '\0') {
                                                    thunk_FUN_00d48444(
                                                  Method_System_Security_Cryptography_RC2Transform__ctor__
                                                  );
                                                  thunk_FUN_00d48444(
                                                  Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_Peek__
                                                  );
                                                  DAT_03781303 = '\x01';
                                                  }
                                                  lVar14 = *(long *)
                                                  Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_Peek__
                                                  ;
                                                  plVar27 = *(long **)(lVar14 + 0x38);
                                                  if (plVar27 == (long *)0x0) {
                                                    FUN_00d59478(lVar14);
                                                    plVar27 = *(long **)(lVar14 + 0x38);
                                                  }
                                                  lVar14 = *plVar27;
                                                  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                                                    lVar14 = FUN_00d5941c();
                                                  }
                                                  if (*(int *)(lVar14 + 0x28) < 0) {
                                                    iVar12 = thunk_FUN_00d42afc();
                                                    iVar12 = iVar12 + -0x10;
                                                  }
                                                  else {
                                                    iVar12 = 8;
                                                  }
                                                  if (lVar13 != 0) {
                                                    iVar5 = 0;
                                                    if (iVar12 != 0) {
                                                      iVar5 = *(int *)(lVar13 + 0x18) / iVar12;
                                                    }
                                                    lVar15 = FUN_00da4fb8(*(undefined8 *)
                                                                                                                                                      
                                                  Method_System_Security_Cryptography_RC2Transform__ctor__
                                                  ,iVar5);
                                                  *(long *)(unaff_x19 + 0x160) = lVar15;
                                                  lVar14 = 0;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    lVar14 = lVar13 + 0x20;
                                                  }
                                                  if (iVar5 < 1) {
LAB_02154fd8:
                                                    *(undefined8 *)(unaff_x19 + 0x168) = uVar21;
                                                    *(uint *)(unaff_x19 + 0xa0) =
                                                         *(uint *)(unaff_x19 + 0xa0) | 0x20;
                                                    return;
                                                  }
                                                  if (lVar15 != 0) {
                                                    iVar24 = 0;
                                                    uVar25 = 0;
                                                    lVar13 = 0x20;
                                                    do {
                                                      if (*(uint *)(lVar15 + 0x18) <= uVar25)
                                                      goto LAB_02155008;
                                                      puVar1 = (undefined4 *)(lVar14 + iVar24);
                                                      uVar4 = *(undefined1 *)((long)puVar1 + 6);
                                                      uVar3 = *puVar1;
                                                      uVar25 = uVar25 + 1;
                                                      puVar2 = (undefined4 *)(lVar15 + lVar13);
                                                      *(undefined2 *)(puVar2 + 1) =
                                                           *(undefined2 *)(puVar1 + 1);
                                                      *(undefined1 *)((long)puVar2 + 6) = uVar4;
                                                      *puVar2 = uVar3;
                                                      if ((long)iVar5 == uVar25) goto LAB_02154fd8;
                                                      lVar15 = *(long *)(unaff_x19 + 0x160);
                                                      lVar13 = lVar13 + 7;
                                                      iVar24 = iVar24 + iVar12;
                                                    } while (lVar15 != 0);
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


