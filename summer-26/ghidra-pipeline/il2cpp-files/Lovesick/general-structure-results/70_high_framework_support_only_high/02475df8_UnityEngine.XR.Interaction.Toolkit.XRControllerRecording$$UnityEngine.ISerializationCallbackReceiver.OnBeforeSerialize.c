/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRControllerRecording$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 02475df8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_XRControllerRecording__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
               (void)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar13;
  long *plVar14;
  long *unaff_x25;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
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
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar9 = FUN_026af680(&stack0x000005f0,&stack0x000005c0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x160) == 0) goto LAB_024769ac;
    FUN_0241d78c(&stack0x00000160,*(long *)(unaff_x20 + 0x160),0);
    *(undefined8 *)(unaff_x22 + 0x130) = in_stack_00000180;
    *(undefined8 *)(unaff_x22 + 0x118) = in_stack_00000168;
    *(undefined8 *)(unaff_x22 + 0x110) = in_stack_00000160;
    *(undefined8 *)(unaff_x22 + 0x128) = in_stack_00000178;
    *(undefined8 *)(unaff_x22 + 0x120) = in_stack_00000170;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar14 = (long *)StringLiteral_6235;
  puVar4 = Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x120);
  if (unaff_x19 == 0) goto LAB_024769ac;
  FUN_026acb10();
  puVar5 = Method_UnityEngine_UIElements_EventBase<MouseLeaveWindowEvent>_TypeId__;
  iVar1 = *(int *)(unaff_x20 + 0x154);
  if (*(int *)(unaff_x20 + 0xfc) == 0) {
    if (iVar1 == 1) {
      FUN_0267e30c();
    }
    bVar6 = false;
    bVar3 = false;
    goto LAB_02476450;
  }
  if (*(int *)(unaff_x20 + 0xfc) == 1) {
    bVar6 = *(int *)(unaff_x20 + 0x100) == 2;
  }
  else {
    bVar6 = false;
  }
  FUN_0267ae98(&stack0x000008e0,0,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0244b84c(0);
  FUN_0267ad88(&stack0x000008e0,uVar8,0);
  if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
     (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x48), lVar10 == 0)) goto LAB_024769ac;
  FUN_0267e718(lVar10,0,0);
  plVar14 = (long *)StringLiteral_6235;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
  if (bVar6 || iVar1 == 1) {
    if (iVar1 == 1) {
      if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
         (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x48), lVar10 == 0)) goto LAB_024769ac;
      FUN_0267e30c(lVar10,*(undefined8 *)puVar4,0);
    }
    if (bVar6) {
      if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
         (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x48), lVar10 == 0)) goto LAB_024769ac;
      FUN_0267e30c(lVar10,*(undefined8 *)MB3_MeshBakerRoot_ZSortObjects_ItemComparer_TypeInfo,0);
    }
    if (*(int *)(*plVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026a9508();
    uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x120);
    FUN_026af1a4(&stack0x00000120,*(undefined4 *)(*(long *)(*plVar14 + 0xb8) + 0xbc),0);
    in_stack_00000168 = in_stack_00000128;
    in_stack_00000160 = in_stack_00000120;
    in_stack_00000178 = in_stack_00000138;
    in_stack_00000170 = in_stack_00000130;
    in_stack_00000180 = in_stack_00000140;
    if (*(long *)(unaff_x22 + 0x1c8) == 0) goto LAB_024769ac;
    FUN_02478a20();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026af1a4(&stack0x00000120,*(undefined4 *)(*(long *)(*plVar14 + 0xb8) + 0xbc),0);
    FUN_026acb10();
    FUN_026af1a4(&stack0x00000120,*(undefined4 *)(*(long *)(*plVar14 + 0xb8) + 0xbc),0);
    bVar3 = true;
    uVar13 = in_stack_00000120;
    uVar19 = in_stack_00000128;
    uVar16 = in_stack_00000130;
    uVar18 = in_stack_00000138;
    uVar11 = in_stack_00000140;
  }
  else {
    bVar3 = false;
  }
  if (*(int *)(unaff_x20 + 0xfc) == 1) {
    if (*(int *)(unaff_x20 + 0x100) == 1) {
      FUN_0267e30c();
      bVar6 = false;
    }
    else {
      if (*(int *)(unaff_x20 + 0x100) != 2) goto LAB_02476444;
      if ((*(long *)(unaff_x22 + 0x1c8) == 0) ||
         (lVar10 = *(long *)(*(long *)(unaff_x22 + 0x1c8) + 0x50), lVar10 == 0)) goto LAB_024769ac;
      FUN_0267e718(lVar10,0,0);
      plVar14 = (long *)StringLiteral_6235;
      if (*(int *)(*(long *)StringLiteral_6235 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026a9508();
      FUN_023cb144((float)*(int *)(unaff_x20 + 0xa8),(float)*(int *)(unaff_x20 + 0xac),
                   (float)*(int *)(unaff_x20 + 0xa8),(float)*(int *)(unaff_x20 + 0xac),
                   (float)*(int *)(unaff_x20 + 0xec),(float)*(int *)(unaff_x20 + 0xf0));
      FUN_026af1a4(&stack0x00000120,*(undefined4 *)(*(long *)(*plVar14 + 0xb8) + 0xc0),0);
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
        FUN_0267e30c();
        FUN_023cb388(fVar2);
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar10 = *plVar14;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar10);
        lVar10 = *plVar14;
      }
      FUN_026af1a4(&stack0x00000260,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0xc0),0);
      FUN_026acb10();
      FUN_024324fc();
      bVar6 = true;
      uVar20 = uVar13;
      uVar21 = uVar19;
      uVar15 = uVar16;
      uVar17 = uVar18;
      uVar12 = uVar11;
    }
  }
  else {
LAB_02476444:
    bVar6 = false;
  }
LAB_02476450:
  puVar4 = Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__;
  uVar13 = *(undefined8 *)(unaff_x20 + 0x120);
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<IXRSelectInteractable>_AddRange__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02439678(&stack0x00000260,uVar13,0);
  if (*(long *)(unaff_x20 + 0x120) != 0) {
    uVar9 = FUN_02447430(*(long *)(unaff_x20 + 0x120),0);
    if ((uVar9 & 1) == 0) {
      uVar13 = *(undefined8 *)(unaff_x20 + 0xa0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_02681b9c(uVar13,0,0);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02431098(&stack0x00000260,&stack0x00000920,0);
      }
      else {
        uVar12 = 0;
        uVar21 = 0;
        uVar20 = 0;
        uVar17 = 0;
        uVar15 = 0;
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
      lVar10 = *(long *)(*(long *)puVar5 + 0xb8);
      in_stack_000001a8 = *(undefined8 *)(lVar10 + 0x48);
      in_stack_000001a0 = *(undefined8 *)(lVar10 + 0x40);
      in_stack_000001b8 = *(undefined8 *)(lVar10 + 0x58);
      in_stack_000001b0 = *(undefined8 *)(lVar10 + 0x50);
      in_stack_000001c8 = *(undefined8 *)(lVar10 + 0x68);
      in_stack_000001c0 = *(undefined8 *)(lVar10 + 0x60);
      in_stack_000001d8 = *(undefined8 *)(lVar10 + 0x78);
      in_stack_000001d0 = *(undefined8 *)(lVar10 + 0x70);
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
          in_stack_00000070 = uVar20;
          in_stack_00000078 = uVar21;
          in_stack_00000080 = uVar15;
          in_stack_00000088 = uVar17;
          in_stack_00000090 = uVar12;
          in_stack_00000120 = uVar20;
          in_stack_00000128 = uVar21;
          in_stack_00000130 = uVar15;
          in_stack_00000138 = uVar17;
          in_stack_00000140 = uVar12;
          if (*(long *)(unaff_x20 + 0x160) != 0) {
            in_stack_00000010 = uVar20;
            in_stack_00000018 = uVar21;
            in_stack_00000020 = uVar15;
            in_stack_00000028 = uVar17;
            in_stack_00000030 = uVar12;
            in_stack_00000040 = uVar20;
            in_stack_00000048 = uVar21;
            in_stack_00000050 = uVar15;
            in_stack_00000058 = uVar17;
            in_stack_00000060 = uVar12;
            FUN_02423e70(*(long *)(unaff_x20 + 0x160),&stack0x00000040,&stack0x00000010,0);
            goto joined_r0x02476908;
          }
        }
      }
    }
    else {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02431098(&stack0x00000260,&stack0x00000920,0);
      if (*(long *)(unaff_x20 + 0x120) != 0) {
        uVar9 = FUN_026af680(&stack0x000003a0,&stack0x00000370,0);
        uVar20 = 0x3f800000;
        uVar8 = 0;
        if ((uVar9 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x120) == 0) goto LAB_024769ac;
          if (*(char *)(*(long *)(unaff_x20 + 0x120) + 0x84) == '\0') {
            uVar9 = FUN_0268202c(0);
            bVar7 = (uVar9 & 1) == 0;
            uVar8 = 0x3f800000;
            if (bVar7) {
              uVar8 = 0;
            }
            uVar20 = 0xbf800000;
            if (bVar7) {
              uVar20 = 0x3f800000;
            }
          }
        }
        FUN_026aee48(&stack0x00000260,&stack0x00000340,0,0xffffffff,0xffffffff,0);
        FUN_026aa538();
        FUN_026a8fa4(*(undefined4 *)(unaff_x20 + 0xdc),*(undefined4 *)(unaff_x20 + 0xe0),
                     *(undefined4 *)(unaff_x20 + 0xe4),*(undefined4 *)(unaff_x20 + 0xe8));
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026a991c(0x3f800000,uVar20,0,uVar8);
        if (DAT_03775725 == '\0') {
          thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
          DAT_03775725 = '\x01';
        }
        FUN_026abd54();
joined_r0x02476908:
        if (bVar6) {
          if (*(int *)(*plVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026a95f4();
        }
        if (bVar3) {
          if (*(int *)(*plVar14 + 0xe0) == 0) {
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


