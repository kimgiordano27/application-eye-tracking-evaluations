/*
FUNCTION_NAME: Unity.Mathematics.uint4x3$$op_UnaryNegation
ENTRY_POINT: 02152758
PROGRAM: Lovesick-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Mathematics_uint4x3__op_UnaryNegation(long param_1)

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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  undefined8 uVar112;
  long lVar113;
  long lVar114;
  int iVar115;
  ulong uVar116;
  long unaff_x19;
  long unaff_x20;
  long *plVar117;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long *plVar118;
  long unaff_x25;
  long unaff_x29;
  long in_stack_00000058;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long lStack00000000000001b8;
  long in_stack_00000318;
  long in_stack_00000320;
  long in_stack_00000328;
  long in_stack_00000330;
  
  lStack00000000000001b8 = param_1;
  lVar13 = FUN_02156a64();
  lVar14 = FUN_02156c24();
  lVar15 = FUN_02156de4();
  lVar16 = FUN_02156fa4();
  lVar17 = FUN_02157164();
  lVar18 = FUN_02157324();
  lVar19 = FUN_021574e4();
  lVar20 = FUN_021576a4();
  lVar21 = FUN_02157864();
  lVar22 = FUN_02157a24();
  lVar23 = FUN_02157be4();
  lVar24 = FUN_02157da4();
  lVar25 = FUN_02157f64();
  lVar26 = FUN_02158124();
  lVar27 = FUN_021582e4();
  lVar28 = Unity_Mathematics_Geometry_Plane__Normalize();
  lVar29 = FUN_02158664();
  lVar30 = FUN_02158824();
  lVar31 = FUN_021589e4();
  lVar32 = FUN_02158ba4();
  lVar33 = FUN_02158d64();
  lVar34 = FUN_02158f24();
  lVar35 = FUN_021590e4();
  lVar36 = FUN_021592a4();
  lVar37 = Unity_Mathematics_bool4x3__op_ExclusiveOr();
  lVar38 = FUN_02159624();
  lVar39 = FUN_021597e4();
  lVar40 = FUN_021599a4();
  lVar41 = FUN_02159b64();
  lVar42 = FUN_02159d24();
  lVar43 = FUN_02159ee4();
  lVar44 = FUN_0215a0a4();
  lVar45 = FUN_0215a250();
  lVar46 = FUN_0215a3fc();
  lVar47 = FUN_0215a5a8();
  lVar48 = FUN_0215a754();
  lVar49 = FUN_0215a900();
  lVar50 = FUN_0215aaac();
  lVar51 = FUN_0215ac58();
  lVar52 = FUN_0215ae04();
  lVar53 = FUN_0215afb0();
  lVar54 = FUN_0215b15c();
  lVar55 = Unity_Mathematics_double2__op_Equality();
  lVar56 = Unity_Mathematics_double2__get_yyx();
  lVar57 = FUN_0215b6cc();
  lVar58 = FUN_0215b898();
  lVar59 = FUN_0215ba64();
  lVar60 = FUN_0215bc3c();
  lVar61 = FUN_0215be08();
  lVar62 = FUN_0215bfd4();
  lVar63 = FUN_0215c1ac();
  lVar64 = FUN_0215c378();
  lVar65 = FUN_0215c544();
  lVar66 = FUN_0215c710();
  lVar67 = FUN_0215c8d0();
  lVar68 = FUN_0215ca90();
  lVar69 = FUN_0215cc50();
  lVar70 = FUN_0215ce10();
  lVar71 = FUN_0215cfd0();
  lVar72 = FUN_0215d190();
  lVar73 = FUN_0215d350();
  lVar74 = FUN_0215d510();
  lVar75 = FUN_0215d6d0();
  lVar76 = FUN_0215d890();
  lVar77 = FUN_0215da50();
  lVar78 = FUN_0215dc10();
  lVar79 = FUN_0215ddd0();
  lVar80 = FUN_0215df90();
  lVar81 = FUN_0215e150();
  lVar82 = FUN_0215e310();
  lVar83 = FUN_0215e4d0();
  lVar84 = FUN_0215e690();
  lVar85 = FUN_0215e850();
  lVar86 = FUN_0215ea10();
  lVar87 = FUN_0215ebd0();
  lVar88 = FUN_0215ed90();
  lVar89 = FUN_0215ef50();
  lVar90 = FUN_0215f110();
  lVar91 = FUN_0215f2d0();
  lVar92 = FUN_0215f490();
  lVar93 = FUN_0215f650();
  lVar94 = FUN_0215f810();
  lVar95 = FUN_0215f9d0();
  lVar96 = FUN_0215fb90();
  lVar97 = FUN_0215fd50();
  lVar98 = Unity_Mathematics_double3__get_zzxy();
  lVar99 = FUN_021600d0();
  lVar100 = FUN_02160290();
  lVar101 = FUN_02160450();
  lVar102 = FUN_02160610();
  lVar103 = Unity_Mathematics_double3x2__op_Multiply();
  lVar104 = FUN_02160990();
  lVar105 = FUN_02160b50();
  lVar106 = FUN_02160d10();
  lVar107 = FUN_02160ed0();
  lVar108 = FUN_0216107c();
  lVar109 = FUN_02161228();
  lVar110 = FUN_021613d4();
  lVar111 = FUN_02161580();
  uVar112 = FUN_0216172c();
  FUN_021f605c(&stack0x000004c0,*unaff_x23,0);
  lVar114 = *(long *)(unaff_x19 + 0x140);
  if (lVar114 != 0) {
    if (*(int *)(lVar114 + 0x18) == 0) goto LAB_02155008;
    *(undefined8 *)(lVar114 + 0x28) = 0;
    *(undefined8 *)(lVar114 + 0x20) = 0;
    lVar114 = *(long *)(unaff_x19 + 0x148);
    if (lVar114 != 0) {
      if ((unaff_x25 != 0) && (lVar113 = thunk_FUN_00d6225c(), lVar113 == 0)) goto LAB_0215500c;
      puVar6 = Method_AutoExtensions_CanGetComponent<GrabbableObject>__;
      if (*(int *)(lVar114 + 0x18) == 0) {
LAB_02155008:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(long *)(lVar114 + 0x20) = unaff_x25;
      FUN_021f605c(&stack0x000004b0,*(undefined8 *)puVar6,0);
      lVar114 = *(long *)(unaff_x19 + 0x140);
      if (lVar114 != 0) {
        if (*(uint *)(lVar114 + 0x18) < 2) goto LAB_02155008;
        *(undefined8 *)(lVar114 + 0x38) = 0;
        *(undefined8 *)(lVar114 + 0x30) = 0;
        lVar114 = *(long *)(unaff_x19 + 0x148);
        if (lVar114 != 0) {
          if ((unaff_x25 != 0) && (lVar113 = thunk_FUN_00d6225c(), lVar113 == 0)) goto LAB_0215500c;
          puVar6 = 
          Method_OVRTrackedKeyboardSampleControls_<SetShaderCoroutine>d__19_System_Collections_IEnumerator_Reset__
          ;
          if (*(uint *)(lVar114 + 0x18) < 2) goto LAB_02155008;
          *(long *)(lVar114 + 0x28) = unaff_x25;
          FUN_021f605c(&stack0x000004a0,*(undefined8 *)puVar6,0);
          lVar114 = *(long *)(unaff_x19 + 0x140);
          if (lVar114 != 0) {
            if (*(uint *)(lVar114 + 0x18) < 3) goto LAB_02155008;
            *(undefined8 *)(lVar114 + 0x48) = 0;
            *(undefined8 *)(lVar114 + 0x40) = 0;
            lVar114 = *(long *)(unaff_x19 + 0x148);
            if (lVar114 != 0) {
              if ((unaff_x29 != 0) && (lVar113 = thunk_FUN_00d6225c(), lVar113 == 0))
              goto LAB_0215500c;
              puVar6 = 
              UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_TypeInfo;
              if (*(uint *)(lVar114 + 0x18) < 3) goto LAB_02155008;
              *(long *)(lVar114 + 0x30) = unaff_x29;
              FUN_021f605c(&stack0x00000490,*(undefined8 *)puVar6,0);
              lVar114 = *(long *)(unaff_x19 + 0x140);
              if (lVar114 != 0) {
                if (*(uint *)(lVar114 + 0x18) < 4) goto LAB_02155008;
                *(undefined8 *)(lVar114 + 0x58) = 0;
                *(undefined8 *)(lVar114 + 0x50) = 0;
                plVar118 = *(long **)(unaff_x19 + 0x148);
                if (plVar118 != (long *)0x0) {
                  if ((lVar54 != 0) &&
                     (lVar114 = thunk_FUN_00d6225c(lVar54,*(undefined8 *)(*plVar118 + 0x40)),
                     lVar114 == 0)) goto LAB_0215500c;
                  if (*(uint *)(plVar118 + 3) < 4) goto LAB_02155008;
                  plVar118[7] = lVar54;
                  FUN_021f605c(&stack0x00000480,*(undefined8 *)puVar6,0);
                  lVar114 = *(long *)(unaff_x19 + 0x140);
                  if (lVar114 != 0) {
                    if (*(uint *)(lVar114 + 0x18) < 5) goto LAB_02155008;
                    *(undefined8 *)(lVar114 + 0x68) = 0;
                    *(undefined8 *)(lVar114 + 0x60) = 0;
                    plVar118 = *(long **)(unaff_x19 + 0x148);
                    if (plVar118 != (long *)0x0) {
                      if ((lVar55 != 0) &&
                         (lVar114 = thunk_FUN_00d6225c(lVar55,*(undefined8 *)(*plVar118 + 0x40)),
                         lVar114 == 0)) goto LAB_0215500c;
                      if (*(uint *)(plVar118 + 3) < 5) goto LAB_02155008;
                      plVar118[8] = lVar55;
                      FUN_021f605c(&stack0x00000470,*(undefined8 *)puVar6,0);
                      lVar114 = *(long *)(unaff_x19 + 0x140);
                      if (lVar114 != 0) {
                        if (*(uint *)(lVar114 + 0x18) < 6) goto LAB_02155008;
                        *(undefined8 *)(lVar114 + 0x78) = 0;
                        *(undefined8 *)(lVar114 + 0x70) = 0;
                        plVar118 = *(long **)(unaff_x19 + 0x148);
                        if (plVar118 != (long *)0x0) {
                          if ((lVar56 != 0) &&
                             (lVar114 = thunk_FUN_00d6225c(lVar56,*(undefined8 *)(*plVar118 + 0x40))
                             , lVar114 == 0)) goto LAB_0215500c;
                          if (*(uint *)(plVar118 + 3) < 6) goto LAB_02155008;
                          plVar118[9] = lVar56;
                          FUN_021f605c(&stack0x00000460,*(undefined8 *)puVar6,0);
                          lVar114 = *(long *)(unaff_x19 + 0x140);
                          if (lVar114 != 0) {
                            if (*(uint *)(lVar114 + 0x18) < 7) goto LAB_02155008;
                            *(undefined8 *)(lVar114 + 0x88) = 0;
                            *(undefined8 *)(lVar114 + 0x80) = 0;
                            plVar118 = *(long **)(unaff_x19 + 0x148);
                            if (plVar118 != (long *)0x0) {
                              if ((lVar57 != 0) &&
                                 (lVar114 = thunk_FUN_00d6225c(lVar57,*(undefined8 *)
                                                                       (*plVar118 + 0x40)),
                                 lVar114 == 0)) goto LAB_0215500c;
                              if (*(uint *)(plVar118 + 3) < 7) goto LAB_02155008;
                              plVar118[10] = lVar57;
                              FUN_021f605c(&stack0x00000450,*(undefined8 *)puVar6,0);
                              lVar114 = *(long *)(unaff_x19 + 0x140);
                              if (lVar114 != 0) {
                                if (*(uint *)(lVar114 + 0x18) < 8) goto LAB_02155008;
                                *(undefined8 *)(lVar114 + 0x98) = 0;
                                *(undefined8 *)(lVar114 + 0x90) = 0;
                                plVar118 = *(long **)(unaff_x19 + 0x148);
                                if (plVar118 != (long *)0x0) {
                                  if ((lVar58 != 0) &&
                                     (lVar114 = thunk_FUN_00d6225c(lVar58,*(undefined8 *)
                                                                           (*plVar118 + 0x40)),
                                     lVar114 == 0)) goto LAB_0215500c;
                                  if (*(uint *)(plVar118 + 3) < 8) goto LAB_02155008;
                                  plVar118[0xb] = lVar58;
                                  FUN_021f605c(&stack0x00000440,*(undefined8 *)puVar6,0);
                                  lVar114 = *(long *)(unaff_x19 + 0x140);
                                  if (lVar114 != 0) {
                                    if (*(uint *)(lVar114 + 0x18) < 9) goto LAB_02155008;
                                    *(undefined8 *)(lVar114 + 0xa8) = 0;
                                    *(undefined8 *)(lVar114 + 0xa0) = 0;
                                    plVar118 = *(long **)(unaff_x19 + 0x148);
                                    if (plVar118 != (long *)0x0) {
                                      if ((lVar59 != 0) &&
                                         (lVar114 = thunk_FUN_00d6225c(lVar59,*(undefined8 *)
                                                                               (*plVar118 + 0x40)),
                                         lVar114 == 0)) goto LAB_0215500c;
                                      if (*(uint *)(plVar118 + 3) < 9) goto LAB_02155008;
                                      plVar118[0xc] = lVar59;
                                      FUN_021f605c(&stack0x00000430,*(undefined8 *)puVar6,0);
                                      lVar114 = *(long *)(unaff_x19 + 0x140);
                                      if (lVar114 != 0) {
                                        if (*(uint *)(lVar114 + 0x18) < 10) goto LAB_02155008;
                                        *(undefined8 *)(lVar114 + 0xb8) = 0;
                                        *(undefined8 *)(lVar114 + 0xb0) = 0;
                                        plVar118 = *(long **)(unaff_x19 + 0x148);
                                        if (plVar118 != (long *)0x0) {
                                          if ((lVar60 != 0) &&
                                             (lVar114 = thunk_FUN_00d6225c(lVar60,*(undefined8 *)
                                                                                   (*plVar118 + 0x40
                                                                                   )), lVar114 == 0)
                                             ) goto LAB_0215500c;
                                          if (*(uint *)(plVar118 + 3) < 10) goto LAB_02155008;
                                          plVar118[0xd] = lVar60;
                                          FUN_021f605c(&stack0x00000420,*(undefined8 *)puVar6,0);
                                          lVar114 = *(long *)(unaff_x19 + 0x140);
                                          if (lVar114 != 0) {
                                            if (*(uint *)(lVar114 + 0x18) < 0xb) goto LAB_02155008;
                                            *(undefined8 *)(lVar114 + 200) = 0;
                                            *(undefined8 *)(lVar114 + 0xc0) = 0;
                                            plVar118 = *(long **)(unaff_x19 + 0x148);
                                            if (plVar118 != (long *)0x0) {
                                              if ((lVar61 != 0) &&
                                                 (lVar114 = thunk_FUN_00d6225c(lVar61,*(undefined8 *
                                                                                       )(*plVar118 +
                                                                                        0x40)),
                                                 lVar114 == 0)) goto LAB_0215500c;
                                              if (*(uint *)(plVar118 + 3) < 0xb) goto LAB_02155008;
                                              plVar118[0xe] = lVar61;
                                              FUN_021f605c(&stack0x00000410,*(undefined8 *)puVar6,0)
                                              ;
                                              lVar114 = *(long *)(unaff_x19 + 0x140);
                                              if (lVar114 != 0) {
                                                if (*(uint *)(lVar114 + 0x18) < 0xc)
                                                goto LAB_02155008;
                                                *(undefined8 *)(lVar114 + 0xd8) = 0;
                                                *(undefined8 *)(lVar114 + 0xd0) = 0;
                                                plVar118 = *(long **)(unaff_x19 + 0x148);
                                                if (plVar118 != (long *)0x0) {
                                                  if ((lVar62 != 0) &&
                                                     (lVar114 = thunk_FUN_00d6225c(lVar62,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0xc)
                                                  goto LAB_02155008;
                                                  plVar118[0xf] = lVar62;
                                                  FUN_021f605c(&stack0x00000400,
                                                               *(undefined8 *)puVar6,0);
                                                  lVar114 = *(long *)(unaff_x19 + 0x140);
                                                  if (lVar114 != 0) {
                                                    if (*(uint *)(lVar114 + 0x18) < 0xd)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar114 + 0xe8) = 0;
                                                    *(undefined8 *)(lVar114 + 0xe0) = 0;
                                                    plVar118 = *(long **)(unaff_x19 + 0x148);
                                                    if (plVar118 != (long *)0x0) {
                                                      if ((lVar63 != 0) &&
                                                         (lVar114 = thunk_FUN_00d6225c(lVar63,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0xd)
                                                  goto LAB_02155008;
                                                  plVar118[0x10] = lVar63;
                                                  FUN_021f605c(&stack0x000003f0,
                                                               *(undefined8 *)puVar6,0);
                                                  lVar114 = *(long *)(unaff_x19 + 0x140);
                                                  if (lVar114 != 0) {
                                                    if (*(uint *)(lVar114 + 0x18) < 0xe)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar114 + 0xf8) = 0;
                                                    *(undefined8 *)(lVar114 + 0xf0) = 0;
                                                    plVar118 = *(long **)(unaff_x19 + 0x148);
                                                    if (plVar118 != (long *)0x0) {
                                                      if ((lVar64 != 0) &&
                                                         (lVar114 = thunk_FUN_00d6225c(lVar64,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0xe)
                                                  goto LAB_02155008;
                                                  plVar118[0x11] = lVar64;
                                                  FUN_021f605c(&stack0x000003e0,
                                                               *(undefined8 *)puVar6,0);
                                                  lVar114 = *(long *)(unaff_x19 + 0x140);
                                                  if (lVar114 != 0) {
                                                    if (*(uint *)(lVar114 + 0x18) < 0xf)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar114 + 0x108) = 0;
                                                    *(undefined8 *)(lVar114 + 0x100) = 0;
                                                    plVar118 = *(long **)(unaff_x19 + 0x148);
                                                    if (plVar118 != (long *)0x0) {
                                                      if ((lVar65 != 0) &&
                                                         (lVar114 = thunk_FUN_00d6225c(lVar65,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  puVar6 = StringLiteral_5042;
                                                  if (*(uint *)(plVar118 + 3) < 0xf)
                                                  goto LAB_02155008;
                                                  plVar118[0x12] = lVar65;
                                                  FUN_021f605c(&stack0x000003d0,
                                                               *(undefined8 *)puVar6,0);
                                                  puVar6 = 
                                                  System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_TypeInfo
                                                  ;
                                                  lVar114 = *(long *)(unaff_x19 + 0x138);
                                                  if (lVar114 != 0) {
                                                    if (*(int *)(lVar114 + 0x18) == 0)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar114 + 0x28) = 0;
                                                    *(undefined8 *)(lVar114 + 0x20) = 0;
                                                    FUN_021f605c(&stack0x000003c0,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar6 = OVRPlugin_OVRP_1_37_0_TypeInfo;
                                                    lVar114 = *(long *)(unaff_x19 + 0x138);
                                                    if (lVar114 != 0) {
                                                      if (*(uint *)(lVar114 + 0x18) < 2)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar114 + 0x38) = 0;
                                                      *(undefined8 *)(lVar114 + 0x30) = 0;
                                                      FUN_021f605c(&stack0x000003b0,
                                                                   *(undefined8 *)puVar6,0);
                                                      puVar6 = 
                                                  Method_System_Collections_Generic_List<TrackedPoseDriver_TrackedPose>_get_Count__
                                                  ;
                                                  lVar114 = *(long *)(unaff_x19 + 0x138);
                                                  if (lVar114 != 0) {
                                                    if (*(uint *)(lVar114 + 0x18) < 3)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar114 + 0x48) = 0;
                                                    *(undefined8 *)(lVar114 + 0x40) = 0;
                                                    FUN_021f605c(&stack0x000003a0,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar6 = 
                                                  Method_System_Collections_Generic_LinkedList<WebConnection>_get_Count__
                                                  ;
                                                  lVar114 = *(long *)(unaff_x19 + 0x138);
                                                  if (lVar114 != 0) {
                                                    if (*(uint *)(lVar114 + 0x18) < 4)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar114 + 0x58) = 0;
                                                    *(undefined8 *)(lVar114 + 0x50) = 0;
                                                    FUN_021f605c(&stack0x00000390,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar6 = Method_System_IO_FileStream__ctor__;
                                                    lVar114 = *(long *)(unaff_x19 + 0x138);
                                                    if (lVar114 != 0) {
                                                      if (*(uint *)(lVar114 + 0x18) < 5)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar114 + 0x68) = 0;
                                                      *(undefined8 *)(lVar114 + 0x60) = 0;
                                                      FUN_021f605c(&stack0x00000380,
                                                                   *(undefined8 *)puVar6,0);
                                                      puVar6 = 
                                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>_Dispose__
                                                  ;
                                                  lVar114 = *(long *)(unaff_x19 + 0x138);
                                                  if (lVar114 != 0) {
                                                    if (*(uint *)(lVar114 + 0x18) < 6)
                                                    goto LAB_02155008;
                                                    *(undefined8 *)(lVar114 + 0x78) = 0;
                                                    *(undefined8 *)(lVar114 + 0x70) = 0;
                                                    FUN_021f605c(&stack0x00000370,
                                                                 *(undefined8 *)puVar6,0);
                                                    puVar6 = StringLiteral_3654;
                                                    lVar114 = *(long *)(unaff_x19 + 0x138);
                                                    if (lVar114 != 0) {
                                                      if (*(uint *)(lVar114 + 0x18) < 7)
                                                      goto LAB_02155008;
                                                      *(undefined8 *)(lVar114 + 0x88) = 0;
                                                      *(undefined8 *)(lVar114 + 0x80) = 0;
                                                      plVar118 = (long *)FUN_00da4fb8(*(undefined8 *
                                                                                       )puVar6,0x6e)
                                                      ;
                                                      *(long **)(unaff_x20 + 0x1b8) = plVar118;
                                                      if (plVar118 != (long *)0x0) {
                                                        if ((in_stack_00000058 != 0) &&
                                                           (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000058,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  {
LAB_0215500c:
                                                    uVar112 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da5038(uVar112,0);
                                                  }
                                                  if ((int)plVar118[3] == 0) goto LAB_02155008;
                                                  plVar117 = (long *)(unaff_x20 + 0x1b8);
                                                  plVar118[4] = in_stack_00000058;
                                                  lVar114 = *plVar117;
                                                  if (lVar114 != 0) {
                                                    if ((unaff_x29 != 0) &&
                                                       (lVar113 = thunk_FUN_00d6225c(), lVar113 == 0
                                                       )) goto LAB_0215500c;
                                                    if (*(uint *)(lVar114 + 0x18) < 2)
                                                    goto LAB_02155008;
                                                    *(long *)(lVar114 + 0x28) = unaff_x29;
                                                    plVar118 = (long *)*plVar117;
                                                    if (plVar118 != (long *)0x0) {
                                                      if ((in_stack_00000330 != 0) &&
                                                         (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000330,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 3)
                                                  goto LAB_02155008;
                                                  plVar118[6] = in_stack_00000330;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_00000318 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000318,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 4)
                                                  goto LAB_02155008;
                                                  plVar118[7] = in_stack_00000318;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_00000320 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000320,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 5)
                                                  goto LAB_02155008;
                                                  plVar118[8] = in_stack_00000320;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_00000328 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000328,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 6)
                                                  goto LAB_02155008;
                                                  plVar118[9] = in_stack_00000328;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_00000180 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000180,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 7)
                                                  goto LAB_02155008;
                                                  plVar118[10] = in_stack_00000180;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_00000188 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000188,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 8)
                                                  goto LAB_02155008;
                                                  plVar118[0xb] = in_stack_00000188;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_00000190 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000190,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 9)
                                                  goto LAB_02155008;
                                                  plVar118[0xc] = in_stack_00000190;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_00000198 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_00000198,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 10)
                                                  goto LAB_02155008;
                                                  plVar118[0xd] = in_stack_00000198;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_000001a0 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_000001a0,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0xb)
                                                  goto LAB_02155008;
                                                  plVar118[0xe] = in_stack_000001a0;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((in_stack_000001a8 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  in_stack_000001a8,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0xc)
                                                  goto LAB_02155008;
                                                  plVar118[0xf] = in_stack_000001a8;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lStack00000000000001b8 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(
                                                  lStack00000000000001b8,
                                                  *(undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0xd)
                                                  goto LAB_02155008;
                                                  plVar118[0x10] = lStack00000000000001b8;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar13 != 0) &&
                                                       (lVar114 = thunk_FUN_00d6225c(lVar13,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar114 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0xe)
                                                  goto LAB_02155008;
                                                  plVar118[0x11] = lVar13;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar18 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar18,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0xf)
                                                  goto LAB_02155008;
                                                  plVar118[0x12] = lVar18;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar19 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar19,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x10)
                                                  goto LAB_02155008;
                                                  plVar118[0x13] = lVar19;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar20 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar20,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x11)
                                                  goto LAB_02155008;
                                                  plVar118[0x14] = lVar20;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar21 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar21,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x12)
                                                  goto LAB_02155008;
                                                  plVar118[0x15] = lVar21;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar22 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar22,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x13)
                                                  goto LAB_02155008;
                                                  plVar118[0x16] = lVar22;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar23 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar23,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x14)
                                                  goto LAB_02155008;
                                                  plVar118[0x17] = lVar23;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar24 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar24,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x15)
                                                  goto LAB_02155008;
                                                  plVar118[0x18] = lVar24;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar25 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar25,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x16)
                                                  goto LAB_02155008;
                                                  plVar118[0x19] = lVar25;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar26 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar26,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x17)
                                                  goto LAB_02155008;
                                                  plVar118[0x1a] = lVar26;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar27 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar27,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x18)
                                                  goto LAB_02155008;
                                                  plVar118[0x1b] = lVar27;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar28 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar28,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x19)
                                                  goto LAB_02155008;
                                                  plVar118[0x1c] = lVar28;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar29 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar29,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x1a)
                                                  goto LAB_02155008;
                                                  plVar118[0x1d] = lVar29;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar30 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar30,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x1b)
                                                  goto LAB_02155008;
                                                  plVar118[0x1e] = lVar30;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar31 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar31,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x1c)
                                                  goto LAB_02155008;
                                                  plVar118[0x1f] = lVar31;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar32 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar32,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x1d)
                                                  goto LAB_02155008;
                                                  plVar118[0x20] = lVar32;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar33 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar33,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x1e)
                                                  goto LAB_02155008;
                                                  plVar118[0x21] = lVar33;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar34 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar34,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x1f)
                                                  goto LAB_02155008;
                                                  plVar118[0x22] = lVar34;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar35 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar35,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x20)
                                                  goto LAB_02155008;
                                                  plVar118[0x23] = lVar35;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar36 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar36,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x21)
                                                  goto LAB_02155008;
                                                  plVar118[0x24] = lVar36;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar37 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar37,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x22)
                                                  goto LAB_02155008;
                                                  plVar118[0x25] = lVar37;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar38 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar38,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x23)
                                                  goto LAB_02155008;
                                                  plVar118[0x26] = lVar38;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar39 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar39,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x24)
                                                  goto LAB_02155008;
                                                  plVar118[0x27] = lVar39;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar40 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar40,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x25)
                                                  goto LAB_02155008;
                                                  plVar118[0x28] = lVar40;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar41 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar41,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x26)
                                                  goto LAB_02155008;
                                                  plVar118[0x29] = lVar41;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar42 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar42,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x27)
                                                  goto LAB_02155008;
                                                  plVar118[0x2a] = lVar42;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar43 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar43,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x28)
                                                  goto LAB_02155008;
                                                  plVar118[0x2b] = lVar43;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar44 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar44,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x29)
                                                  goto LAB_02155008;
                                                  plVar118[0x2c] = lVar44;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar45 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar45,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x2a)
                                                  goto LAB_02155008;
                                                  plVar118[0x2d] = lVar45;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar46 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar46,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x2b)
                                                  goto LAB_02155008;
                                                  plVar118[0x2e] = lVar46;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar47 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar47,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x2c)
                                                  goto LAB_02155008;
                                                  plVar118[0x2f] = lVar47;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar48 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar48,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x2d)
                                                  goto LAB_02155008;
                                                  plVar118[0x30] = lVar48;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar49 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar49,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x2e)
                                                  goto LAB_02155008;
                                                  plVar118[0x31] = lVar49;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar50 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar50,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x2f)
                                                  goto LAB_02155008;
                                                  plVar118[0x32] = lVar50;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar51 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar51,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x30)
                                                  goto LAB_02155008;
                                                  plVar118[0x33] = lVar51;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar52 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar52,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x31)
                                                  goto LAB_02155008;
                                                  plVar118[0x34] = lVar52;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar53 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar53,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x32)
                                                  goto LAB_02155008;
                                                  plVar118[0x35] = lVar53;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar54 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar54,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x33)
                                                  goto LAB_02155008;
                                                  plVar118[0x36] = lVar54;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar55 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar55,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x34)
                                                  goto LAB_02155008;
                                                  plVar118[0x37] = lVar55;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar57 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar57,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x35)
                                                  goto LAB_02155008;
                                                  plVar118[0x38] = lVar57;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar58 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar58,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x36)
                                                  goto LAB_02155008;
                                                  plVar118[0x39] = lVar58;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar60 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar60,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x37)
                                                  goto LAB_02155008;
                                                  plVar118[0x3a] = lVar60;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar61 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar61,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x38)
                                                  goto LAB_02155008;
                                                  plVar118[0x3b] = lVar61;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar63 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar63,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x39)
                                                  goto LAB_02155008;
                                                  plVar118[0x3c] = lVar63;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar64 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar64,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x3a)
                                                  goto LAB_02155008;
                                                  plVar118[0x3d] = lVar64;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar65 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar65,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x3b)
                                                  goto LAB_02155008;
                                                  plVar118[0x3e] = lVar65;
                                                  lVar13 = *plVar117;
                                                  if (lVar13 != 0) {
                                                    if ((unaff_x25 != 0) &&
                                                       (lVar18 = thunk_FUN_00d6225c(), lVar18 == 0))
                                                    goto LAB_0215500c;
                                                    if (*(uint *)(lVar13 + 0x18) < 0x3c)
                                                    goto LAB_02155008;
                                                    *(long *)(lVar13 + 0x1f8) = unaff_x25;
                                                    plVar118 = (long *)*plVar117;
                                                    if (plVar118 != (long *)0x0) {
                                                      if ((lVar16 != 0) &&
                                                         (lVar13 = thunk_FUN_00d6225c(lVar16,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x3d)
                                                  goto LAB_02155008;
                                                  plVar118[0x40] = lVar16;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar17 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar17,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x3e)
                                                  goto LAB_02155008;
                                                  plVar118[0x41] = lVar17;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar14 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar14,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x3f)
                                                  goto LAB_02155008;
                                                  plVar118[0x42] = lVar14;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar15 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar15,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x40)
                                                  goto LAB_02155008;
                                                  plVar118[0x43] = lVar15;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar66 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar66,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x41)
                                                  goto LAB_02155008;
                                                  plVar118[0x44] = lVar66;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar67 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar67,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x42)
                                                  goto LAB_02155008;
                                                  plVar118[0x45] = lVar67;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar68 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar68,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x43)
                                                  goto LAB_02155008;
                                                  plVar118[0x46] = lVar68;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar69 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar69,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x44)
                                                  goto LAB_02155008;
                                                  plVar118[0x47] = lVar69;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar70 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar70,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x45)
                                                  goto LAB_02155008;
                                                  plVar118[0x48] = lVar70;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar71 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar71,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x46)
                                                  goto LAB_02155008;
                                                  plVar118[0x49] = lVar71;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar72 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar72,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x47)
                                                  goto LAB_02155008;
                                                  plVar118[0x4a] = lVar72;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar73 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar73,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x48)
                                                  goto LAB_02155008;
                                                  plVar118[0x4b] = lVar73;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar74 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar74,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x49)
                                                  goto LAB_02155008;
                                                  plVar118[0x4c] = lVar74;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar75 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar75,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x4a)
                                                  goto LAB_02155008;
                                                  plVar118[0x4d] = lVar75;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar76 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar76,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x4b)
                                                  goto LAB_02155008;
                                                  plVar118[0x4e] = lVar76;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar77 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar77,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x4c)
                                                  goto LAB_02155008;
                                                  plVar118[0x4f] = lVar77;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar78 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar78,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x4d)
                                                  goto LAB_02155008;
                                                  plVar118[0x50] = lVar78;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar79 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar79,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x4e)
                                                  goto LAB_02155008;
                                                  plVar118[0x51] = lVar79;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar80 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar80,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x4f)
                                                  goto LAB_02155008;
                                                  plVar118[0x52] = lVar80;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar81 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar81,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x50)
                                                  goto LAB_02155008;
                                                  plVar118[0x53] = lVar81;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar82 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar82,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x51)
                                                  goto LAB_02155008;
                                                  plVar118[0x54] = lVar82;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar83 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar83,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x52)
                                                  goto LAB_02155008;
                                                  plVar118[0x55] = lVar83;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar84 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar84,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x53)
                                                  goto LAB_02155008;
                                                  plVar118[0x56] = lVar84;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar94 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar94,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x54)
                                                  goto LAB_02155008;
                                                  plVar118[0x57] = lVar94;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar85 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar85,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x55)
                                                  goto LAB_02155008;
                                                  plVar118[0x58] = lVar85;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar86 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar86,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x56)
                                                  goto LAB_02155008;
                                                  plVar118[0x59] = lVar86;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar87 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar87,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x57)
                                                  goto LAB_02155008;
                                                  plVar118[0x5a] = lVar87;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar88 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar88,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x58)
                                                  goto LAB_02155008;
                                                  plVar118[0x5b] = lVar88;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar89 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar89,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x59)
                                                  goto LAB_02155008;
                                                  plVar118[0x5c] = lVar89;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar90 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar90,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x5a)
                                                  goto LAB_02155008;
                                                  plVar118[0x5d] = lVar90;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar91 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar91,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x5b)
                                                  goto LAB_02155008;
                                                  plVar118[0x5e] = lVar91;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar92 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar92,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x5c)
                                                  goto LAB_02155008;
                                                  plVar118[0x5f] = lVar92;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar93 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar93,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x5d)
                                                  goto LAB_02155008;
                                                  plVar118[0x60] = lVar93;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar95 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar95,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x5e)
                                                  goto LAB_02155008;
                                                  plVar118[0x61] = lVar95;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar96 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar96,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x5f)
                                                  goto LAB_02155008;
                                                  plVar118[0x62] = lVar96;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar97 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar97,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x60)
                                                  goto LAB_02155008;
                                                  plVar118[99] = lVar97;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar98 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar98,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x61)
                                                  goto LAB_02155008;
                                                  plVar118[100] = lVar98;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar99 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar99,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x62)
                                                  goto LAB_02155008;
                                                  plVar118[0x65] = lVar99;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar100 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar100,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 99)
                                                  goto LAB_02155008;
                                                  plVar118[0x66] = lVar100;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar101 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar101,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 100)
                                                  goto LAB_02155008;
                                                  plVar118[0x67] = lVar101;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar102 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar102,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x65)
                                                  goto LAB_02155008;
                                                  plVar118[0x68] = lVar102;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar103 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar103,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x66)
                                                  goto LAB_02155008;
                                                  plVar118[0x69] = lVar103;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar104 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar104,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x67)
                                                  goto LAB_02155008;
                                                  plVar118[0x6a] = lVar104;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar105 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar105,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x68)
                                                  goto LAB_02155008;
                                                  plVar118[0x6b] = lVar105;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar106 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar106,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x69)
                                                  goto LAB_02155008;
                                                  plVar118[0x6c] = lVar106;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar107 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar107,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x6a)
                                                  goto LAB_02155008;
                                                  plVar118[0x6d] = lVar107;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar108 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar108,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x6b)
                                                  goto LAB_02155008;
                                                  plVar118[0x6e] = lVar108;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar109 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar109,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x6c)
                                                  goto LAB_02155008;
                                                  plVar118[0x6f] = lVar109;
                                                  plVar118 = (long *)*plVar117;
                                                  if (plVar118 != (long *)0x0) {
                                                    if ((lVar110 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar110,*(
                                                  undefined8 *)(*plVar118 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  if (*(uint *)(plVar118 + 3) < 0x6d)
                                                  goto LAB_02155008;
                                                  plVar118[0x70] = lVar110;
                                                  plVar117 = (long *)*plVar117;
                                                  if (plVar117 != (long *)0x0) {
                                                    if ((lVar111 != 0) &&
                                                       (lVar13 = thunk_FUN_00d6225c(lVar111,*(
                                                  undefined8 *)(*plVar117 + 0x40)), lVar13 == 0))
                                                  goto LAB_0215500c;
                                                  puVar9 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__
                                                  ;
                                                  puVar7 = 
                                                  Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                                                  ;
                                                  puVar6 = PTR_DAT_033ed1a0;
                                                  if (*(uint *)(plVar117 + 3) < 0x6e)
                                                  goto LAB_02155008;
                                                  plVar117[0x71] = lVar111;
                                                  *(undefined8 *)(unaff_x20 + 0x170) = unaff_x24;
                                                  *(long *)(unaff_x20 + 0x178) = lVar56;
                                                  *(long *)(unaff_x20 + 0x180) = lVar62;
                                                  *(long *)(unaff_x20 + 0x188) = lVar59;
                                                  *(undefined8 *)(unaff_x20 + 400) = uVar112;
                                                  puVar11 = StringLiteral_9728;
                                                  puVar10 = StringLiteral_6114;
                                                  puVar8 = 
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Background>__
                                                  ;
                                                  uVar112 = FUN_00da4fb8(*(undefined8 *)puVar9,0x73)
                                                  ;
                                                  FUN_016a34e8(uVar112,*(undefined8 *)puVar6,0);
                                                  *(undefined8 *)(unaff_x19 + 0x158) = uVar112;
                                                  lVar13 = FUN_00da4fb8(*(undefined8 *)puVar7,0x627)
                                                  ;
                                                  FUN_016a34e8(lVar13,*(undefined8 *)puVar10,0);
                                                  uVar112 = FUN_00da4fb8(*(undefined8 *)puVar11,0x75
                                                                        );
                                                  FUN_016a34e8(uVar112,*(undefined8 *)puVar8,0);
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
                                                  plVar118 = *(long **)(lVar14 + 0x38);
                                                  if (plVar118 == (long *)0x0) {
                                                    FUN_00d59478(lVar14);
                                                    plVar118 = *(long **)(lVar14 + 0x38);
                                                  }
                                                  lVar14 = *plVar118;
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
                                                    *(undefined8 *)(unaff_x19 + 0x168) = uVar112;
                                                    *(uint *)(unaff_x19 + 0xa0) =
                                                         *(uint *)(unaff_x19 + 0xa0) | 0x20;
                                                    return;
                                                  }
                                                  if (lVar15 != 0) {
                                                    iVar115 = 0;
                                                    uVar116 = 0;
                                                    lVar13 = 0x20;
                                                    do {
                                                      if (*(uint *)(lVar15 + 0x18) <= uVar116)
                                                      goto LAB_02155008;
                                                      puVar1 = (undefined4 *)(lVar14 + iVar115);
                                                      uVar4 = *(undefined1 *)((long)puVar1 + 6);
                                                      uVar3 = *puVar1;
                                                      uVar116 = uVar116 + 1;
                                                      puVar2 = (undefined4 *)(lVar15 + lVar13);
                                                      *(undefined2 *)(puVar2 + 1) =
                                                           *(undefined2 *)(puVar1 + 1);
                                                      *(undefined1 *)((long)puVar2 + 6) = uVar4;
                                                      *puVar2 = uVar3;
                                                      if ((long)iVar5 == uVar116) goto LAB_02154fd8;
                                                      lVar15 = *(long *)(unaff_x19 + 0x160);
                                                      lVar13 = lVar13 + 7;
                                                      iVar115 = iVar115 + iVar12;
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


