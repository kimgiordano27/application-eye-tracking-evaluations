/*
FUNCTION_NAME: TMPro.TextMeshPro$$add_OnPreRenderText
ENTRY_POINT: 066cb144
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_13;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_8
*/


void TMPro_TextMeshPro__add_OnPreRenderText(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int iVar18;
  int iVar19;
  long *plVar20;
  double dVar21;
  double dVar22;
  double unaff_d8;
  double dVar23;
  double dVar24;
  double dVar25;
  double in_stack_00000020;
  double in_stack_00000028;
  undefined8 in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  double in_stack_00000068;
  double in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  double in_stack_00000098;
  double in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  double in_stack_000000c8;
  double in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  double in_stack_000000f8;
  double in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  int iStack0000000000000124;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined8 in_stack_00000130;
  double in_stack_00000138;
  double in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  double in_stack_00000168;
  double in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x30));
  FUN_02fe925c(System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<XRView>_TypeInfo);
  FUN_02fe925c(System_Collections_Generic_List<MetaXRAcousticGeometry_MeshMaterial>_TypeInfo);
  FUN_02fe925c(PTR_DAT_06f6d508);
  *(undefined1 *)(unaff_x22 + 0xd1) = 1;
  _uStack0000000000000128 = 0;
  iStack0000000000000124 = 0;
  lVar10 = thunk_FUN_0301080c(*unaff_x21);
  FUN_0442fab4(lVar10,*unaff_x20);
  plVar20 = (long *)(unaff_x19 + 0x10);
  *plVar20 = lVar10;
  thunk_FUN_03048534(plVar20,lVar10);
  *(double *)(unaff_x19 + 0x30) = unaff_d8;
  uVar11 = FUN_066be420(0);
  puVar5 = PTR_DAT_06f6d508;
  if ((uVar11 & 1) == 0) {
    dVar25 = *(double *)(unaff_x19 + 0x90);
    dVar24 = 0.25;
    if (0.0 < dVar25) {
      if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      dVar24 = ABS(unaff_d8) * 0.25;
      if (dVar25 <= dVar24) {
        dVar24 = *(double *)(unaff_x19 + 0x90);
      }
      else if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
    }
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    dVar25 = acos(1.0 - dVar24 / ABS(unaff_d8));
    dVar24 = DAT_0136c4e8;
    dVar25 = DAT_0136ab28 / dVar25;
    sincos(DAT_0136c4e8 / dVar25,&stack0x00000028,&stack0x00000020);
    *(double *)(unaff_x19 + 0x50) = dVar25 / dVar24;
    *(double *)(unaff_x19 + 0x40) = in_stack_00000028;
    *(double *)(unaff_x19 + 0x48) = in_stack_00000020;
    if (unaff_d8 < 0.0) {
      *(double *)(unaff_x19 + 0x40) = -in_stack_00000028;
    }
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      lVar10 = *(long *)(unaff_x19 + 0x10);
      iVar9 = FUN_066bdc4c(*(long *)(unaff_x19 + 0x88),0);
      if (lVar10 != 0) {
        FUN_0442fe6c(lVar10,iVar9 << 1,
                     *(undefined8 *)
                      System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo);
        puVar5 = System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo;
        lVar10 = *(long *)(unaff_x19 + 0x88);
        if (lVar10 != 0) {
          plVar1 = (long *)(unaff_x19 + 0x20);
          iVar9 = 0;
          plVar2 = (long *)(unaff_x19 + 0x18);
          puVar14 = (undefined8 *)
                    System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
          do {
            iVar8 = FUN_066bdc4c(lVar10,0);
            if (iVar8 <= iVar9) {
              return;
            }
            if (((*(long *)(unaff_x19 + 0x88) == 0) ||
                (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x30), lVar10 == 0)) ||
               (lVar10 = FUN_04430018(lVar10,iVar9,*puVar14), lVar10 == 0)) break;
            *plVar2 = *(long *)(lVar10 + 0x18);
            thunk_FUN_03048534(plVar2);
            if (*plVar2 == 0) break;
            iVar8 = *(int *)(*plVar2 + 0x18);
            if ((iVar8 != 0) &&
               ((0.0 < unaff_d8 || ((2 < iVar8 && (*(int *)(lVar10 + 0x28) == 0)))))) {
              lVar12 = thunk_FUN_0301080c(*(undefined8 *)
                                           System_Collections_Generic_List<XRView>_TypeInfo);
              FUN_043e93e8(lVar12,*(undefined8 *)
                                   System_Collections_Generic_List<XmlAttribute>_TypeInfo);
              *plVar1 = lVar12;
              thunk_FUN_03048534(plVar1,lVar12);
              iVar18 = iVar8 + -1;
              if (iVar18 == 0) {
                if (*(int *)(lVar10 + 0x24) == 0) {
                  if (1.0 <= dVar25) {
                    dVar24 = 0.0;
                    dVar23 = 1.0;
                    iVar8 = 2;
                    do {
                      if (*plVar2 == 0) goto LAB_066cbe70;
                      lVar10 = *plVar1;
                      FUN_043e994c(&stack0x00000160,*plVar2,0,*(undefined8 *)puVar5);
                      if (*plVar2 == 0) goto LAB_066cbe70;
                      dVar21 = dVar23 * unaff_d8 + (double)(long)in_stack_00000168;
                      dVar22 = dVar21 + -0.5;
                      if (0.0 <= dVar21) {
                        dVar22 = dVar21 + 0.5;
                      }
                      lVar12 = -0x8000000000000000;
                      if (dVar22 != INFINITY) {
                        lVar12 = (long)dVar22;
                      }
                      FUN_043e994c(&stack0x00000160,*plVar2,0,*(undefined8 *)puVar5);
                      dVar21 = dVar24 * unaff_d8 + (double)(long)in_stack_00000170;
                      dVar22 = dVar21 + -0.5;
                      if (0.0 <= dVar21) {
                        dVar22 = dVar21 + 0.5;
                      }
                      lVar16 = -0x8000000000000000;
                      if (dVar22 != INFINITY) {
                        lVar16 = (long)dVar22;
                      }
                      in_stack_00000108 = 0;
                      in_stack_00000100 = 0.0;
                      in_stack_00000118 = 0;
                      in_stack_00000110 = 0;
                      in_stack_000000f8 = 0.0;
                      in_stack_000000f0 = 0;
                      FUN_066be1a4(&stack0x000000f0,lVar12,lVar16,0);
                      if (lVar10 == 0) goto LAB_066cbe70;
                      in_stack_00000138 = in_stack_000000f8;
                      in_stack_00000130 = in_stack_000000f0;
                      in_stack_00000148 = in_stack_00000108;
                      in_stack_00000140 = in_stack_00000100;
                      in_stack_00000158 = in_stack_00000118;
                      in_stack_00000150 = in_stack_00000110;
                      lVar12 = *(long *)(lVar10 + 0x10);
                      lVar16 = *(long *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo
                      ;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar12 == 0) goto LAB_066cbe70;
                      uVar3 = *(uint *)(lVar10 + 0x18);
                      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                        lVar12 = lVar12 + (long)(int)uVar3 * 0x30;
                        *(undefined8 *)(lVar12 + 0x38) = in_stack_00000108;
                        *(double *)(lVar12 + 0x30) = in_stack_00000100;
                        *(undefined8 *)(lVar12 + 0x48) = in_stack_00000118;
                        *(undefined8 *)(lVar12 + 0x40) = in_stack_00000110;
                        *(double *)(lVar12 + 0x28) = in_stack_000000f8;
                        *(undefined8 *)(lVar12 + 0x20) = in_stack_000000f0;
                      }
                      else {
                        in_stack_00000168 = in_stack_000000f8;
                        in_stack_00000160 = in_stack_000000f0;
                        in_stack_00000178 = in_stack_00000108;
                        in_stack_00000170 = in_stack_00000100;
                        in_stack_00000188 = in_stack_00000118;
                        in_stack_00000180 = in_stack_00000110;
                        FUN_043e9ce8(lVar10,&stack0x00000160,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                      }
                      dVar21 = (double)iVar8;
                      iVar8 = iVar8 + 1;
                      dVar22 = dVar23 * *(double *)(unaff_x19 + 0x40);
                      dVar23 = dVar23 * *(double *)(unaff_x19 + 0x48) -
                               dVar24 * *(double *)(unaff_x19 + 0x40);
                      dVar24 = dVar24 * *(double *)(unaff_x19 + 0x48) + dVar22;
                    } while (dVar21 <= dVar25);
                  }
                }
                else {
                  dVar23 = -1.0;
                  iVar8 = 4;
                  dVar24 = -1.0;
                  do {
                    if (*plVar2 == 0) goto LAB_066cbe70;
                    lVar10 = *plVar1;
                    FUN_043e994c(&stack0x00000160,*plVar2,0,*(undefined8 *)puVar5);
                    if (*plVar2 == 0) goto LAB_066cbe70;
                    dVar21 = dVar23 * unaff_d8 + (double)(long)in_stack_00000168;
                    dVar22 = dVar21 + -0.5;
                    if (0.0 <= dVar21) {
                      dVar22 = dVar21 + 0.5;
                    }
                    lVar12 = -0x8000000000000000;
                    if (dVar22 != INFINITY) {
                      lVar12 = (long)dVar22;
                    }
                    FUN_043e994c(&stack0x00000160,*plVar2,0,*(undefined8 *)puVar5);
                    dVar21 = dVar24 * unaff_d8 + (double)(long)in_stack_00000170;
                    dVar22 = dVar21 + -0.5;
                    if (0.0 <= dVar21) {
                      dVar22 = dVar21 + 0.5;
                    }
                    lVar16 = -0x8000000000000000;
                    if (dVar22 != INFINITY) {
                      lVar16 = (long)dVar22;
                    }
                    in_stack_00000108 = 0;
                    in_stack_00000100 = 0.0;
                    in_stack_00000118 = 0;
                    in_stack_00000110 = 0;
                    in_stack_000000f8 = 0.0;
                    in_stack_000000f0 = 0;
                    FUN_066be1a4(&stack0x000000f0,lVar12,lVar16,0);
                    if (lVar10 == 0) goto LAB_066cbe70;
                    in_stack_00000138 = in_stack_000000f8;
                    in_stack_00000130 = in_stack_000000f0;
                    in_stack_00000148 = in_stack_00000108;
                    in_stack_00000140 = in_stack_00000100;
                    in_stack_00000158 = in_stack_00000118;
                    in_stack_00000150 = in_stack_00000110;
                    lVar12 = *(long *)(lVar10 + 0x10);
                    lVar16 = *(long *)System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar12 == 0) goto LAB_066cbe70;
                    uVar3 = *(uint *)(lVar10 + 0x18);
                    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                      lVar12 = lVar12 + (long)(int)uVar3 * 0x30;
                      *(undefined8 *)(lVar12 + 0x38) = in_stack_00000108;
                      *(double *)(lVar12 + 0x30) = in_stack_00000100;
                      *(undefined8 *)(lVar12 + 0x48) = in_stack_00000118;
                      *(undefined8 *)(lVar12 + 0x40) = in_stack_00000110;
                      *(double *)(lVar12 + 0x28) = in_stack_000000f8;
                      *(undefined8 *)(lVar12 + 0x20) = in_stack_000000f0;
                    }
                    else {
                      in_stack_00000168 = in_stack_000000f8;
                      in_stack_00000160 = in_stack_000000f0;
                      in_stack_00000178 = in_stack_00000108;
                      in_stack_00000170 = in_stack_00000100;
                      in_stack_00000188 = in_stack_00000118;
                      in_stack_00000180 = in_stack_00000110;
                      FUN_043e9ce8(lVar10,&stack0x00000160,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    if (0.0 <= dVar23) {
                      dVar22 = 1.0;
                      if (0.0 <= dVar24) {
                        dVar23 = -1.0;
                        dVar22 = dVar24;
                      }
                    }
                    else {
                      dVar23 = 1.0;
                      dVar22 = dVar24;
                    }
                    iVar8 = iVar8 + -1;
                    dVar24 = dVar22;
                  } while (iVar8 != 0);
                }
LAB_066cba14:
                lVar10 = *plVar20;
                if (lVar10 == 0) break;
LAB_066cba1c:
                lVar12 = *plVar1;
              }
              else {
                lVar12 = *(long *)(unaff_x19 + 0x28);
                if (lVar12 == 0) break;
                *(undefined4 *)(lVar12 + 0x18) = 0;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                FUN_0437ee50(lVar12,iVar8,
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo
                            );
                if (0 < iVar18) {
                  iVar19 = 1;
                  do {
                    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_066cbe70;
                    lVar12 = *(long *)(unaff_x19 + 0x28);
                    FUN_043e994c(&stack0x00000130,*(long *)(unaff_x19 + 0x18),iVar19 + -1,
                                 *(undefined8 *)puVar5);
                    in_stack_00000168 = in_stack_00000138;
                    in_stack_00000160 = in_stack_00000130;
                    in_stack_00000178 = in_stack_00000148;
                    in_stack_00000170 = in_stack_00000140;
                    in_stack_00000188 = in_stack_00000158;
                    in_stack_00000180 = in_stack_00000150;
                    if (*plVar2 == 0) goto LAB_066cbe70;
                    FUN_043e994c(&stack0x00000130,*plVar2,iVar19,*(undefined8 *)puVar5);
                    in_stack_00000098 = in_stack_00000138;
                    in_stack_00000090 = in_stack_00000130;
                    in_stack_000000a8 = in_stack_00000148;
                    in_stack_000000a0 = in_stack_00000140;
                    in_stack_000000b8 = in_stack_00000158;
                    in_stack_000000b0 = in_stack_00000150;
                    in_stack_000000c8 = in_stack_00000168;
                    in_stack_000000c0 = in_stack_00000160;
                    in_stack_000000d8 = in_stack_00000178;
                    in_stack_000000d0 = in_stack_00000170;
                    in_stack_000000e8 = in_stack_00000188;
                    in_stack_000000e0 = in_stack_00000180;
                    dVar24 = in_stack_00000140;
                    uVar13 = FUN_066cafcc(&stack0x000000c0,&stack0x00000090);
                    if (lVar12 == 0) goto LAB_066cbe70;
                    lVar16 = *(long *)(lVar12 + 0x10);
                    lVar17 = *(long *)
                              System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                    ;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar16 == 0) goto LAB_066cbe70;
                    uVar3 = *(uint *)(lVar12 + 0x18);
                    if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                      lVar16 = lVar16 + (long)(int)uVar3 * 0x10;
                      *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                      *(undefined8 *)(lVar16 + 0x20) = uVar13;
                      *(double *)(lVar16 + 0x28) = dVar24;
                    }
                    else {
                      FUN_0437f300(lVar12,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar19 = iVar19 + 1;
                  } while (iVar8 != iVar19);
                }
                lVar12 = *(long *)(unaff_x19 + 0x28);
                if (*(uint *)(lVar10 + 0x28) < 2) {
                  if (*plVar2 == 0) break;
                  FUN_043e994c(&stack0x00000130,*plVar2,iVar18,*(undefined8 *)puVar5);
                  in_stack_00000168 = in_stack_00000138;
                  in_stack_00000160 = in_stack_00000130;
                  in_stack_00000178 = in_stack_00000148;
                  in_stack_00000170 = in_stack_00000140;
                  in_stack_00000188 = in_stack_00000158;
                  in_stack_00000180 = in_stack_00000150;
                  if (*plVar2 == 0) break;
                  FUN_043e994c(&stack0x00000130,*plVar2,0,*(undefined8 *)puVar5);
                  in_stack_00000038 = in_stack_00000138;
                  in_stack_00000030 = in_stack_00000130;
                  in_stack_00000048 = in_stack_00000148;
                  in_stack_00000040 = in_stack_00000140;
                  in_stack_00000058 = in_stack_00000158;
                  in_stack_00000050 = in_stack_00000150;
                  in_stack_00000068 = in_stack_00000168;
                  in_stack_00000060 = in_stack_00000160;
                  in_stack_00000078 = in_stack_00000178;
                  in_stack_00000070 = in_stack_00000170;
                  in_stack_00000088 = in_stack_00000188;
                  in_stack_00000080 = in_stack_00000180;
                  dVar24 = in_stack_00000140;
                  uVar13 = FUN_066cafcc(&stack0x00000060,&stack0x00000030);
                  if (lVar12 == 0) break;
                }
                else {
                  if (lVar12 == 0) break;
                  FUN_0437effc(lVar12,iVar8 + -2,
                               *(undefined8 *)
                                System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                              );
                  in_stack_00000160 = 0;
                  in_stack_00000168 = 0.0;
                  FUN_066bd8a0(&stack0x00000160,0);
                  uVar13 = in_stack_00000160;
                  dVar24 = in_stack_00000168;
                }
                lVar16 = *(long *)(lVar12 + 0x10);
                lVar17 = *(long *)
                          System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                ;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar16 == 0) break;
                uVar3 = *(uint *)(lVar12 + 0x18);
                if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)uVar3 * 0x10;
                  *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                  *(undefined8 *)(lVar16 + 0x20) = uVar13;
                  *(double *)(lVar16 + 0x28) = dVar24;
                }
                else {
                  FUN_0437f300(lVar12,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                puVar14 = (undefined8 *)
                          System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
                if (*(int *)(lVar10 + 0x28) == 1) {
                  _uStack0000000000000128 = CONCAT44(uStack000000000000012c,iVar18);
                  if (0 < iVar8) {
                    iVar19 = 0;
                    do {
                      FUN_066cbea4();
                      iVar19 = iVar19 + 1;
                    } while (iVar8 != iVar19);
                  }
                  lVar10 = *plVar20;
                  if (lVar10 != 0) {
                    lVar12 = *plVar1;
                    lVar16 = *(long *)(lVar10 + 0x10);
                    lVar17 = *(long *)
                              System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo
                    ;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar16 != 0) {
                      uVar3 = *(uint *)(lVar10 + 0x18);
                      if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                        plVar15 = (long *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                        *plVar15 = lVar12;
                        thunk_FUN_03048534(plVar15);
                      }
                      else {
                        FUN_044302e8(lVar10,lVar12,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar13 = thunk_FUN_0301080c(*(undefined8 *)
                                                   System_Collections_Generic_List<XRView>_TypeInfo)
                      ;
                      FUN_043e93e8(uVar13,*(undefined8 *)
                                           System_Collections_Generic_List<XmlAttribute>_TypeInfo);
                      *(undefined8 *)(unaff_x19 + 0x20) = uVar13;
                      thunk_FUN_03048534(plVar1,uVar13);
                      puVar6 = 
                      System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
                      if (*(long *)(unaff_x19 + 0x28) != 0) {
                        dVar22 = (double)FUN_0437effc(*(long *)(unaff_x19 + 0x28),iVar18,
                                                      *(undefined8 *)
                                                                                                              
                                                  System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                                  );
                        lVar10 = *(long *)(unaff_x19 + 0x28);
                        dVar23 = dVar24;
                        iVar19 = iVar8;
                        if (0 < iVar18) {
                          do {
                            if (lVar10 == 0) goto LAB_066cbe70;
                            dVar21 = (double)FUN_0437effc(lVar10,iVar19 + -2,*(undefined8 *)puVar6);
                            if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_066cbe70;
                            iVar4 = iVar19 + -1;
                            FUN_0437effc(*(long *)(unaff_x19 + 0x28),iVar19 + -2,
                                         *(undefined8 *)puVar6);
                            in_stack_00000160 = 0;
                            in_stack_00000168 = 0.0;
                            FUN_066bd898(-dVar21,-dVar23,&stack0x00000160,0);
                            dVar23 = in_stack_00000168;
                            FUN_0437f054(in_stack_00000160,lVar10,iVar4,
                                         *(undefined8 *)
                                          System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo
                                        );
                            lVar10 = *(long *)(unaff_x19 + 0x28);
                            iVar19 = iVar4;
                          } while (1 < iVar4);
                        }
                        in_stack_00000160 = 0;
                        in_stack_00000168 = 0.0;
                        FUN_066bd898(-dVar22,-dVar24,&stack0x00000160,0);
                        if (lVar10 != 0) {
                          FUN_0437f054(in_stack_00000160,in_stack_00000168,lVar10,0,
                                       *(undefined8 *)
                                        System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo
                                      );
                          _uStack0000000000000128 = _uStack0000000000000128 & 0xffffffff00000000;
                          if (-1 < iVar18) {
                            do {
                              iVar8 = iVar8 + -1;
                              FUN_066cbea4();
                            } while (0 < iVar8);
                          }
                          lVar10 = *plVar20;
                          puVar14 = (undefined8 *)
                                    System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo
                          ;
                          if (lVar10 != 0) goto LAB_066cba1c;
                        }
                      }
                    }
                  }
                  break;
                }
                if (*(int *)(lVar10 + 0x28) == 0) {
                  _uStack0000000000000128 = CONCAT44(iVar18,uStack0000000000000128);
                  if (0 < iVar8) {
                    iVar18 = 0;
                    do {
                      FUN_066cbea4();
                      iVar18 = iVar18 + 1;
                    } while (iVar8 != iVar18);
                  }
                  goto LAB_066cba14;
                }
                iStack0000000000000124 = 0;
                if (1 < iVar18) {
                  iVar19 = 2;
                  do {
                    FUN_066cbea4();
                    iVar19 = iVar19 + 1;
                  } while (iVar8 != iVar19);
                }
                lVar10 = *(long *)(unaff_x19 + 0x28);
                *(undefined8 *)(unaff_x19 + 0x38) = 0;
                puVar6 = 
                System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
                if (lVar10 == 0) break;
                dVar23 = (double)FUN_0437effc(lVar10,iVar18,
                                              *(undefined8 *)
                                               System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                             );
                if (*(long *)(unaff_x19 + 0x28) == 0) break;
                FUN_0437effc(*(long *)(unaff_x19 + 0x28),iVar18,*(undefined8 *)puVar6);
                in_stack_00000160 = 0;
                in_stack_00000168 = 0.0;
                FUN_066bd898(-dVar23,-dVar24,&stack0x00000160,0);
                dVar24 = in_stack_00000168;
                FUN_0437f054(in_stack_00000160,in_stack_00000168,lVar10,iVar18,
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
                TMPro_TextMeshPro__DisableMasking();
                lVar10 = *(long *)(unaff_x19 + 0x28);
                iVar19 = iVar18;
                puVar14 = (undefined8 *)
                          System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                ;
                while( true ) {
                  System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo =
                       (undefined *)puVar14;
                  if (lVar10 == 0) goto LAB_066cbe70;
                  if (iVar19 < 1) break;
                  iVar4 = iVar19 + -1;
                  dVar23 = (double)FUN_0437effc(lVar10,iVar4,*puVar14);
                  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_066cbe70;
                  FUN_0437effc(*(long *)(unaff_x19 + 0x28),iVar4,*puVar14);
                  in_stack_00000160 = 0;
                  in_stack_00000168 = 0.0;
                  FUN_066bd898(-dVar23,-dVar24,&stack0x00000160,0);
                  dVar24 = in_stack_00000168;
                  FUN_0437f054(in_stack_00000160,lVar10,iVar19,
                               *(undefined8 *)
                                System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
                  lVar10 = *(long *)(unaff_x19 + 0x28);
                  iVar19 = iVar4;
                  puVar14 = (undefined8 *)
                            System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                  ;
                }
                dVar23 = (double)FUN_0437effc(lVar10,1,*puVar14);
                if (*(long *)(unaff_x19 + 0x28) == 0) break;
                FUN_0437effc(*(long *)(unaff_x19 + 0x28),1,*puVar14);
                in_stack_00000160 = 0;
                in_stack_00000168 = 0.0;
                FUN_066bd898(-dVar23,-dVar24,&stack0x00000160,0);
                FUN_0437f054(in_stack_00000160,in_stack_00000168,lVar10,0,
                             *(undefined8 *)
                              System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
                iStack0000000000000124 = iVar18;
                if (0 < iVar8 + -2) {
                  do {
                    iVar18 = iVar18 + -1;
                    FUN_066cbea4();
                  } while (1 < iVar18);
                }
                iStack0000000000000124 = 1;
                *(undefined8 *)(unaff_x19 + 0x38) = 0;
                TMPro_TextMeshPro__DisableMasking();
                lVar10 = *(long *)(unaff_x19 + 0x10);
                if (lVar10 == 0) break;
                lVar12 = *(long *)(unaff_x19 + 0x20);
                puVar14 = (undefined8 *)
                          System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
              }
              lVar16 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)
                        System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo
              ;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar16 == 0) break;
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                plVar15 = (long *)(lVar16 + (long)(int)uVar3 * 8 + 0x20);
                *plVar15 = lVar12;
                thunk_FUN_03048534(plVar15);
              }
              else {
                FUN_044302e8(lVar10,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar10 = *(long *)(unaff_x19 + 0x88);
            iVar9 = iVar9 + 1;
          } while (lVar10 != 0);
        }
      }
    }
  }
  else if (*(long *)(unaff_x19 + 0x88) != 0) {
    lVar10 = *(long *)(unaff_x19 + 0x10);
    uVar7 = FUN_066bdc4c(*(long *)(unaff_x19 + 0x88),0);
    if (lVar10 != 0) {
      FUN_0442fe6c(lVar10,uVar7,
                   *(undefined8 *)
                    System_Collections_Generic_List<FocusController_FocusedElement>_TypeInfo);
      puVar6 = System_Collections_Generic_List<EasyTouchTrigger_EasyTouchReceiver>_TypeInfo;
      puVar5 = System_Collections_Generic_List<XRInputSubsystemDescriptor>_TypeInfo;
      lVar10 = *(long *)(unaff_x19 + 0x88);
      if (lVar10 != 0) {
        iVar9 = 0;
        do {
          iVar8 = FUN_066bdc4c(lVar10,0);
          if (iVar8 <= iVar9) {
            return;
          }
          if (((*(long *)(unaff_x19 + 0x88) == 0) ||
              (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x88) + 0x30), lVar10 == 0)) ||
             (lVar10 = FUN_04430018(lVar10,iVar9,*(undefined8 *)puVar5), lVar10 == 0)) break;
          if (*(int *)(lVar10 + 0x28) == 0) {
            lVar12 = *plVar20;
            if (lVar12 == 0) break;
            uVar13 = *(undefined8 *)(lVar10 + 0x18);
            lVar10 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)puVar6;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar10 == 0) break;
            uVar3 = *(uint *)(lVar12 + 0x18);
            if (uVar3 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar3 + 1;
              puVar14 = (undefined8 *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
              *puVar14 = uVar13;
              thunk_FUN_03048534(puVar14);
            }
            else {
              FUN_044302e8(lVar12,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar10 = *(long *)(unaff_x19 + 0x88);
          iVar9 = iVar9 + 1;
        } while (lVar10 != 0);
      }
    }
  }
LAB_066cbe70:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


