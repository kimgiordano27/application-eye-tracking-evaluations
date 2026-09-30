/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRControllerRecorder$$GetControllerState
ENTRY_POINT: 02475ca0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder__GetControllerState
               (undefined1 param_1 [16])

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  long unaff_x23;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 uVar22;
  undefined8 uVar23;
  
                    /* try { // try from 02475cb4 to 02575cbb has its CatchHandler @ 02476144 */
                    /* try { // try from 02475cc4 to 02575ccf has its CatchHandler @ 02476140 */
  *(long *)(unaff_x23 + 0x24) = param_1._8_8_;
  *(long *)(unaff_x23 + 0x1c) = param_1._0_8_;
                    /* try { // try from 02475ce0 to 02575ce7 has its CatchHandler @ 0247613c */
                    /* try { // try from 02475cf0 to 02575cfb has its CatchHandler @ 02476138 */
  if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
     (lVar14 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x60), lVar14 == 0)) goto LAB_024769ac;
                    /* try { // try from 02475d0c to 02575d13 has its CatchHandler @ 02476134 */
  FUN_0267e718(lVar14,0,0);
                    /* try { // try from 02475d24 to 02575d33 has its CatchHandler @ 02476040 */
                    /* try { // try from 02475d34 to 02575fc7 has its CatchHandler @ 02475748 */
  FUN_024324fc();
  FUN_0247b9f0();
  FUN_0247ba98();
  memcpy(&stack0x00000648,(void *)(unaff_x20 + 0x10),0x168);
  uVar10 = FUN_0244d010(&stack0x00000648,0);
  if (((uVar10 & 1) != 0) && (*(char *)(unaff_x22 + 0x266) != '\0')) {
    FUN_0267e30c(lVar14,*(undefined8 *)
                         Method_System_Collections_Generic_KeyValuePair<IUIInteractor,_TrackedDeviceGraphicRaycaster>_get_Key__
                 ,0);
  }
  puVar4 = Method_System_Collections_Generic_List<Expression>__ctor__;
  if (*(char *)(unaff_x22 + 0x26a) == '\0') {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Expression>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (unaff_x19 == 0) goto LAB_024769ac;
    FUN_026acb10();
  }
  else {
    if (*(long **)(unaff_x20 + 0x160) == (long *)0x0) goto LAB_024769ac;
    (**(code **)(**(long **)(unaff_x20 + 0x160) + 0x198))(&stack0x00000160);
    uVar10 = FUN_026af680(&stack0x000005f0,&stack0x000005c0,0);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x160) == 0) goto LAB_024769ac;
      FUN_0241d78c(&stack0x00000160,*(long *)(unaff_x20 + 0x160),0);
      *(undefined8 *)(unaff_x22 + 0x130) = in_stack_00000180;
      *(undefined8 *)(unaff_x22 + 0x118) = in_stack_00000168;
      *(undefined8 *)(unaff_x22 + 0x110) = in_stack_00000160;
      *(undefined8 *)(unaff_x22 + 0x128) = in_stack_00000178;
      *(undefined8 *)(unaff_x22 + 0x120) = in_stack_00000170;
    }
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar16 = (long *)StringLiteral_6235;
  puVar5 = Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
  if (unaff_x19 == 0) goto LAB_024769ac;
  FUN_026acb10();
  puVar6 = Method_UnityEngine_UIElements_EventBase<MouseLeaveWindowEvent>_TypeId__;
  iVar1 = *(int *)(unaff_x20 + 0x154);
  if (*(int *)(unaff_x20 + 0xfc) == 0) {
    if (iVar1 == 1) {
      FUN_0267e30c(lVar14,*(undefined8 *)puVar5,0);
    }
    bVar7 = false;
    bVar3 = false;
    goto LAB_02476450;
  }
  if (*(int *)(unaff_x20 + 0xfc) == 1) {
    bVar7 = *(int *)(unaff_x20 + 0x100) == 2;
  }
  else {
    bVar7 = false;
  }
  FUN_0267ae98(&stack0x000008e0,0,0);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_0244b84c(0);
  FUN_0267ad88(&stack0x000008e0,uVar9,0);
  if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
     (lVar11 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x48), lVar11 == 0)) goto LAB_024769ac;
  FUN_0267e718(lVar11,0,0);
  plVar16 = (long *)StringLiteral_6235;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x120);
  if (bVar7 || iVar1 == 1) {
    if (iVar1 == 1) {
      if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x48), lVar11 == 0)) goto LAB_024769ac;
      FUN_0267e30c(lVar11,*(undefined8 *)puVar5,0);
    }
    if (bVar7) {
      if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x48), lVar11 == 0)) goto LAB_024769ac;
      FUN_0267e30c(lVar11,*(undefined8 *)MB3_MeshBakerRoot_ZSortObjects_ItemComparer_TypeInfo,0);
    }
    if (*(int *)(*plVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026a9508();
    uVar13 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x120);
    FUN_026af1a4(&stack0x00000120,*(undefined4 *)(*(long *)(*plVar16 + 0xb8) + 0xbc),0);
    in_stack_00000168 = in_stack_00000128;
    in_stack_00000160 = in_stack_00000120;
    in_stack_00000178 = in_stack_00000138;
    in_stack_00000170 = in_stack_00000130;
    in_stack_00000180 = in_stack_00000140;
    if (*(long *)(unaff_x22 + 0x1c8) == 0) goto LAB_024769ac;
    FUN_02478a20();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026af1a4(&stack0x00000120,*(undefined4 *)(*(long *)(*plVar16 + 0xb8) + 0xbc),0);
    FUN_026acb10();
    FUN_026af1a4(&stack0x00000120,*(undefined4 *)(*(long *)(*plVar16 + 0xb8) + 0xbc),0);
    bVar3 = true;
    uVar15 = in_stack_00000120;
    uVar21 = in_stack_00000128;
    uVar18 = in_stack_00000130;
    uVar20 = in_stack_00000138;
    uVar12 = in_stack_00000140;
  }
  else {
    bVar3 = false;
  }
  if (*(int *)(unaff_x20 + 0xfc) == 1) {
    if (*(int *)(unaff_x20 + 0x100) == 1) {
      FUN_0267e30c(lVar14,*(undefined8 *)
                           Method_System_Collections_Generic_LowLevelList<__Il2CppFullySharedGenericType>_RemoveAll__
                   ,0);
      bVar7 = false;
    }
    else {
      if (*(int *)(unaff_x20 + 0x100) != 2) goto LAB_02476444;
      if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
         (lVar11 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x50), lVar11 == 0)) goto LAB_024769ac;
      FUN_0267e718(lVar11,0,0);
      plVar16 = (long *)StringLiteral_6235;
      if (*(int *)(*(long *)StringLiteral_6235 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026a9508();
      FUN_023cb144((float)*(int *)(unaff_x20 + 0xa8),(float)*(int *)(unaff_x20 + 0xac),
                   (float)*(int *)(unaff_x20 + 0xa8),(float)*(int *)(unaff_x20 + 0xac),
                   (float)*(int *)(unaff_x20 + 0xec),(float)*(int *)(unaff_x20 + 0xf0));
      FUN_026af1a4(&stack0x00000120,*(undefined4 *)(*(long *)(*plVar16 + 0xb8) + 0xc0),0);
      in_stack_00000168 = in_stack_00000128;
      in_stack_00000160 = in_stack_00000120;
      in_stack_00000178 = in_stack_00000138;
      in_stack_00000170 = in_stack_00000130;
      in_stack_00000180 = in_stack_00000140;
      if (*(long *)(unaff_x22 + 0x1c8) == 0) goto LAB_024769ac;
      FUN_02478a20();
      if (0.0 < *(float *)(unaff_x20 + 0x108)) {
        fVar2 = DAT_02940104;
        if (*(char *)(unaff_x20 + 0x104) != '\0') {
          fVar2 = *(float *)(unaff_x20 + 0x108);
        }
        FUN_0267e30c(lVar14,*(undefined8 *)
                             Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<Guid>__,0);
        FUN_023cb388(fVar2);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar14 = *plVar16;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar14);
        lVar14 = *plVar16;
      }
      FUN_026af1a4(&stack0x00000260,*(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0xc0),0);
      FUN_026acb10();
      FUN_024324fc();
      bVar7 = true;
      uVar22 = uVar15;
      uVar23 = uVar21;
      uVar17 = uVar18;
      uVar19 = uVar20;
      uVar13 = uVar12;
    }
  }
  else {
LAB_02476444:
    bVar7 = false;
  }
LAB_02476450:
  puVar5 = Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x120);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02439678(&stack0x00000260,uVar15,0);
  if (*(long *)(unaff_x20 + 0x120) != 0) {
    uVar10 = FUN_02447430(*(long *)(unaff_x20 + 0x120),0);
    if ((uVar10 & 1) == 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + 0xa0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(uVar15,0,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02431098(&stack0x00000260,&stack0x00000920,0);
      }
      else {
        uVar13 = 0;
        uVar23 = 0;
        uVar22 = 0;
        uVar19 = 0;
        uVar17 = 0;
        FUN_026aee74(&stack0x00000260,*(undefined8 *)(unaff_x20 + 0xa0),0);
      }
      puVar4 = PTR_DAT_033ed8c0;
      FUN_026aa538();
      if (DAT_03775725 == '\0') {
        thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
        DAT_03775725 = '\x01';
      }
      puVar5 = System_Xml_Schema_Datatype_byte_TypeInfo;
      in_stack_000001e8 =
           *(undefined8 *)
            (*(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8) + 0x48);
      in_stack_000001e0 =
           *(undefined8 *)
            (*(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8) + 0x40);
      FUN_026a9cbc();
      FUN_026a8fa4(*(undefined4 *)(unaff_x20 + 0xdc),*(undefined4 *)(unaff_x20 + 0xe0),
                   *(undefined4 *)(unaff_x20 + 0xe4),*(undefined4 *)(unaff_x20 + 0xe8));
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02435af8(0);
      if (DAT_03775725 == '\0') {
        thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
        DAT_03775725 = '\x01';
      }
      lVar14 = *(long *)(*(long *)puVar5 + 0xb8);
      in_stack_000001a8 = *(undefined8 *)(lVar14 + 0x48);
      in_stack_000001a0 = *(undefined8 *)(lVar14 + 0x40);
      in_stack_000001b8 = *(undefined8 *)(lVar14 + 0x58);
      in_stack_000001b0 = *(undefined8 *)(lVar14 + 0x50);
      in_stack_000001c8 = *(undefined8 *)(lVar14 + 0x68);
      in_stack_000001c0 = *(undefined8 *)(lVar14 + 0x60);
      in_stack_000001d8 = *(undefined8 *)(lVar14 + 0x78);
      in_stack_000001d0 = *(undefined8 *)(lVar14 + 0x70);
      FUN_026abaf0();
      if (*(long *)(unaff_x20 + 0x90) != 0) {
        FUN_026813d8(&stack0x00000120,*(long *)(unaff_x20 + 0x90),0);
        in_stack_00000178 = in_stack_00000138;
        in_stack_00000170 = in_stack_00000130;
        in_stack_00000188 = in_stack_00000148;
        in_stack_00000180 = in_stack_00000140;
        in_stack_00000168 = in_stack_00000128;
        in_stack_00000160 = in_stack_00000120;
        in_stack_00000198 = in_stack_00000158;
        in_stack_00000190 = in_stack_00000150;
        if (*(long *)(unaff_x20 + 0x90) != 0) {
          FUN_0268136c(&stack0x00000120,*(long *)(unaff_x20 + 0x90),0);
          in_stack_000000b8 = in_stack_00000138;
          in_stack_000000b0 = in_stack_00000130;
          in_stack_000000c8 = in_stack_00000148;
          in_stack_000000c0 = in_stack_00000140;
          in_stack_000000a8 = in_stack_00000128;
          in_stack_000000a0 = in_stack_00000120;
          in_stack_00000118 = in_stack_00000198;
          in_stack_00000110 = in_stack_00000190;
          in_stack_000000d8 = in_stack_00000158;
          in_stack_000000d0 = in_stack_00000150;
          in_stack_000000e8 = in_stack_00000168;
          in_stack_000000e0 = in_stack_00000160;
          in_stack_000000f8 = in_stack_00000178;
          in_stack_000000f0 = in_stack_00000170;
          in_stack_00000108 = in_stack_00000188;
          in_stack_00000100 = in_stack_00000180;
          FUN_026a9cbc();
          in_stack_00000070 = uVar22;
          in_stack_00000078 = uVar23;
          in_stack_00000080 = uVar17;
          in_stack_00000088 = uVar19;
          in_stack_00000090 = uVar13;
          in_stack_00000120 = uVar22;
          in_stack_00000128 = uVar23;
          in_stack_00000130 = uVar17;
          in_stack_00000138 = uVar19;
          in_stack_00000140 = uVar13;
          if (*(long *)(unaff_x20 + 0x160) != 0) {
            in_stack_00000010 = uVar22;
            in_stack_00000018 = uVar23;
            in_stack_00000020 = uVar17;
            in_stack_00000028 = uVar19;
            in_stack_00000030 = uVar13;
            in_stack_00000040 = uVar22;
            in_stack_00000048 = uVar23;
            in_stack_00000050 = uVar17;
            in_stack_00000058 = uVar19;
            in_stack_00000060 = uVar13;
            FUN_02423e70(*(long *)(unaff_x20 + 0x160),&stack0x00000040,&stack0x00000010,0);
            goto joined_r0x02476908;
          }
        }
      }
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02431098(&stack0x00000260,&stack0x00000920,0);
      if (*(long *)(unaff_x20 + 0x120) != 0) {
        uVar10 = FUN_026af680(&stack0x000003a0,&stack0x00000370,0);
        uVar22 = 0x3f800000;
        uVar9 = 0;
        if ((uVar10 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x120) == 0) goto LAB_024769ac;
          if (*(char *)(*(long *)(unaff_x20 + 0x120) + 0x84) == '\0') {
            uVar10 = FUN_0268202c(0);
            bVar8 = (uVar10 & 1) == 0;
            uVar9 = 0x3f800000;
            if (bVar8) {
              uVar9 = 0;
            }
            uVar22 = 0xbf800000;
            if (bVar8) {
              uVar22 = 0x3f800000;
            }
          }
        }
        FUN_026aee48(&stack0x00000260,&stack0x00000340,0,0xffffffff,0xffffffff,0);
        FUN_026aa538();
        FUN_026a8fa4(*(undefined4 *)(unaff_x20 + 0xdc),*(undefined4 *)(unaff_x20 + 0xe0),
                     *(undefined4 *)(unaff_x20 + 0xe4),*(undefined4 *)(unaff_x20 + 0xe8));
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026a991c(0x3f800000,uVar22,0,uVar9);
        if (DAT_03775725 == '\0') {
          thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
          DAT_03775725 = '\x01';
        }
        FUN_026abd54();
joined_r0x02476908:
        if (bVar7) {
          if (*(int *)(*plVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026a95f4();
        }
        if (bVar3) {
          if (*(int *)(*plVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026a95f4();
        }
        return;
      }
    }
  }
LAB_024769ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


