/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode$$op_Implicit
ENTRY_POINT: 05703750
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05703cf0) */
/* WARNING: Removing unreachable block (ram,0x05703da4) */
/* WARNING: Removing unreachable block (ram,0x05703e40) */

void OVRSimpleJSON_JSONNode__op_Implicit(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *unaff_x19;
  undefined8 uVar12;
  undefined4 *puVar13;
  int iVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long in_stack_00000000;
  int *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  int *in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  int *in_stack_00000050;
  long *in_stack_00000058;
  int in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined1 *in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_000000f0;
  int *in_stack_000000f8;
  long *in_stack_00000100;
  int iStack000000000000010c;
  long in_stack_00000110;
  int *in_stack_00000118;
  long *in_stack_00000120;
  undefined4 *in_stack_00000138;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Xml_Schema_AllElementsContentValidator_TypeInfo);
  FUN_02d965b8(Unity_Services_Relay_Models_AllocationRequest_TypeInfo);
  FUN_02d965b8(Unity_Collections_Allocator_TypeInfo);
  FUN_02d965b8(Unity_Collections_AllocatorManager_TypeInfo);
  FUN_02d965b8(Unity_Services_Wire_Internal_AlreadySubscribedException_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xbdc) = 1;
  puVar3 = UnityEngine_Rendering_VertexAttributeDescriptor___TypeInfo;
  iStack000000000000010c = *unaff_x19;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = (int *)0x0;
  in_stack_00000100 = (long *)0x0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = (undefined1 *)0x0;
  in_stack_000000c0 = (undefined8 *)0x0;
  in_stack_00000090 = 0;
  in_stack_00000098 = (undefined1 *)0x0;
  in_stack_000000a0 = (undefined8 *)0x0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000068 = 0;
  if (iStack000000000000010c == 0) {
LAB_05703a20:
    in_stack_00000110 = 0;
    in_stack_00000120 = (long *)&stack0x00000138;
    in_stack_00000118 = &stack0x0000010c;
LAB_05703a2c:
    in_stack_00000048 = 0;
    in_stack_00000058 = (long *)&stack0x00000138;
    in_stack_00000050 = &stack0x0000010c;
LAB_05703a38:
    in_stack_00000040 = (long *)&stack0x00000138;
    in_stack_00000038 = &stack0x0000010c;
    in_stack_00000030 = 0;
    iStack000000000000010c = -1;
    _in_stack_00000080 = *(undefined1 (*) [16])(in_stack_00000138 + 0x18);
    *(undefined8 *)(in_stack_00000138 + 0x18) = 0;
    *(undefined8 *)(in_stack_00000138 + 0x1a) = 0;
    *in_stack_00000138 = 0xffffffff;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 10);
    if (lVar9 == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar8 = thunk_FUN_02dd3144();
      uVar12 = thunk_FUN_02dfd288(PTR_DAT_06a0e6b0);
      FUN_0544bf54(uVar8,uVar12,0);
      uVar12 = thunk_FUN_02dfd288(UnityEngine_Android_AndroidScreenLayoutDirection_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar12);
    }
    if (*(long *)(unaff_x19 + 0xc) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar8 = thunk_FUN_02dd3144();
      uVar12 = thunk_FUN_02dfd288(UnityEngine_XR_ARCore_ARCoreFaceRegion_TypeInfo);
      FUN_0544bf54(uVar8,uVar12,0);
      uVar12 = thunk_FUN_02dfd288(UnityEngine_Android_AndroidScreenLayoutDirection_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar8,uVar12);
    }
    in_stack_00000110 = 0;
    uVar8 = *(undefined8 *)UnityEngine_Android_AndroidOrientation_TypeInfo;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    FUN_03bb078c(&stack0x00000110,&stack0x000000e8,uVar8);
    *(long *)(in_stack_00000138 + 0x10) = in_stack_00000110;
    LeanTween__value(in_stack_00000138 + 0x10,0);
    in_stack_00000118 = &stack0x0000010c;
    in_stack_00000110 = 0;
    in_stack_00000120 = (long *)&stack0x00000138;
    if (iStack000000000000010c == 0) goto LAB_05703a20;
    in_stack_00000048 = 0;
    FUN_03bb078c(&stack0x00000048,&stack0x000000e0,
                 *(undefined8 *)UnityEngine_Android_AndroidNavigationHidden_TypeInfo);
    *(long *)(in_stack_00000138 + 0x12) = in_stack_00000048;
    LeanTween__value(in_stack_00000138 + 0x12,0);
    uVar8 = in_stack_000000e8;
    lVar9 = in_stack_000000e0;
    puVar2 = PTR_DAT_06a0d0a8;
    in_stack_00000050 = &stack0x0000010c;
    in_stack_00000048 = 0;
    in_stack_00000058 = (long *)&stack0x00000138;
    if (iStack000000000000010c == 0) goto LAB_05703a2c;
    uVar12 = *(undefined8 *)(in_stack_00000138 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_06a0d0a8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_056fe314(uVar12,uVar8,lVar9,0);
    in_stack_00000030 = 0;
    in_stack_00000038 = (int *)0x0;
    FUN_04808e60(&stack0x00000030,&stack0x000000d8,&stack0x000000d0,
                 *(undefined8 *)Unity_Services_Wire_Internal_AlreadySubscribedException_TypeInfo);
    *(int **)(in_stack_00000138 + 0x16) = in_stack_00000038;
    *(long *)(in_stack_00000138 + 0x14) = in_stack_00000030;
    LeanTween__value(in_stack_00000138 + 0x14,0);
    in_stack_00000038 = &stack0x0000010c;
    in_stack_00000030 = 0;
    in_stack_00000040 = (long *)&stack0x00000138;
    if (iStack000000000000010c == 0) goto LAB_05703a38;
    if (in_stack_000000e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_03bff8a8(&stack0x00000018,in_stack_000000e0,
                 *(undefined8 *)Oculus_Platform_AndroidPlatform_TypeInfo);
    puVar5 = UnityEngine_Android_AndroidKeyboard_TypeInfo;
    puVar4 = Microsoft_CSharp_RuntimeBinder_Semantics_AggregateSymbol_TypeInfo;
    in_stack_000000c0 = in_stack_00000028;
    in_stack_000000b8 = in_stack_00000020;
    in_stack_000000b0 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000028 = &stack0x000000b0;
    in_stack_00000020 = (undefined1 *)&stack0x0000010c;
    while (uVar7 = FUN_0514450c(&stack0x000000b0,*(undefined8 *)puVar5), uVar8 = in_stack_000000e8,
          lVar9 = in_stack_000000d8, puVar6 = in_stack_000000c0, (uVar7 & 1) != 0) {
      uVar15 = *(undefined8 *)(in_stack_00000138 + 10);
      uVar12 = *(undefined8 *)(in_stack_00000138 + 0xe);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      auVar16 = FUN_056fe9a4(uVar15,uVar8,(ulong)puVar6 & 0xffffffff,uVar12,0);
      if (lVar9 == 0) {
LAB_05703d90:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_05703d90;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined1 (*) [16])(lVar10 + (long)(int)uVar1 * 0x10 + 0x20) = auVar16;
      }
      else {
        FUN_03ef77a0(lVar9,auVar16._0_8_,auVar16._8_8_,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    if (iStack000000000000010c < 0) {
      FUN_05144508(in_stack_00000028,*(undefined8 *)UnityEngine_AndroidJavaRunnableProxy_TypeInfo);
    }
    _in_stack_00000070 =
         FUN_0376a32c(in_stack_000000d8,in_stack_000000d0,
                      *(undefined8 *)Unity_Collections_Allocator_TypeInfo);
    if (*(int *)(*(long *)Unity_Services_Relay_Models_AllocationRequest_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Unity_Services_Relay_Models_AllocationRequest_TypeInfo);
    }
    _in_stack_00000080 =
         FUN_04384368(&stack0x00000070,
                      *(undefined8 *)System_Xml_Schema_AllElementsContentValidator_TypeInfo);
    uVar7 = FUN_040c0684(&stack0x00000080,
                         *(undefined8 *)System_Security_Cryptography_AesTransform_TypeInfo);
    if ((uVar7 & 1) == 0) {
      iStack000000000000010c = 0;
      *in_stack_00000138 = 0;
      uVar8 = *(undefined8 *)UnityEngine_AndroidReflection_TypeInfo;
      *(undefined1 (*) [16])(in_stack_00000138 + 0x18) = _in_stack_00000080;
      FUN_033688e8(in_stack_00000138 + 2,&stack0x00000080,in_stack_00000138,uVar8);
      iVar14 = 0x10;
      goto OVRSimpleJSON_JSONNode__ReadVector4;
    }
  }
  lVar9 = FUN_040c0784(&stack0x00000080,*(undefined8 *)System_Security_Cryptography_Aes_TypeInfo);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_03fb6fa8(&stack0x00000018,lVar9,
               *(undefined8 *)Microsoft_CSharp_RuntimeBinder_Semantics_AggregateType_TypeInfo);
  puVar4 = System_AggregateException_TypeInfo;
  puVar2 = PTR_DAT_06a00f70;
  in_stack_00000098 = in_stack_00000020;
  in_stack_00000090 = in_stack_00000018;
  in_stack_000000a0 = in_stack_00000028;
  in_stack_00000020 = (undefined1 *)&stack0x0000010c;
  in_stack_00000018 = 0;
  in_stack_00000028 = &stack0x00000090;
  do {
    uVar7 = FUN_0514478c(&stack0x00000090,*(undefined8 *)puVar4);
    puVar6 = in_stack_000000a0;
    if ((uVar7 & 1) == 0) {
      iVar14 = 0x14;
      goto LAB_05703b20;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_0576856c((ulong)puVar6 & 0xffffffff,0);
  } while ((uVar7 & 1) != 0);
  FUN_03767334(*(undefined8 *)(in_stack_00000138 + 10),(ulong)puVar6 & 0xffffffff,
               *(undefined8 *)puVar3);
  iVar14 = 0x13;
  in_stack_000000f8 = in_stack_00000008;
  in_stack_000000f0 = in_stack_00000000;
  in_stack_00000100 = in_stack_00000010;
LAB_05703b20:
  if (iStack000000000000010c < 0) {
    FUN_05144788(in_stack_00000028,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_AffordanceStateShortcuts_TypeInfo
                );
  }
  if ((iVar14 == 0x14) || (iVar14 == 0)) {
    iVar14 = 0x15;
  }
OVRSimpleJSON_JSONNode__ReadVector4:
  if (*in_stack_00000038 < 0) {
    FUN_04808f10(*in_stack_00000040 + 0x50,
                 *(undefined8 *)Unity_Collections_AllocatorManager_TypeInfo);
  }
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if ((iVar14 == 0x15) || (iVar14 == 0)) {
    uVar8 = *(undefined8 *)puVar3;
    *(undefined8 *)(in_stack_00000138 + 0x14) = 0;
    *(undefined8 *)(in_stack_00000138 + 0x16) = 0;
    FUN_03767334(&stack0x00000030,*(undefined8 *)(in_stack_00000138 + 10),0,uVar8);
    iVar14 = 0x13;
    in_stack_000000f8 = in_stack_00000038;
    in_stack_000000f0 = in_stack_00000030;
    in_stack_00000100 = in_stack_00000040;
  }
  if (*in_stack_00000050 < 0) {
    FUN_03bb07f0(*in_stack_00000058 + 0x48,
                 *(undefined8 *)UnityEngine_Android_AndroidNavigation_TypeInfo);
  }
  if (in_stack_00000048 == 0) {
    if (*in_stack_00000118 < 0) {
      FUN_03bb07f0(*in_stack_00000120 + 0x40,
                   *(undefined8 *)UnityEngine_Android_AndroidLocale_TypeInfo);
    }
    puVar3 = UnityEngine_Android_AndroidHardwareKeyboardHidden_TypeInfo;
    if (in_stack_00000110 == 0) {
      if (iVar14 == 0x13) {
        *in_stack_00000138 = 0xfffffffe;
        in_stack_00000118 = in_stack_000000f8;
        in_stack_00000110 = in_stack_000000f0;
        in_stack_00000120 = in_stack_00000100;
        FUN_0435ecc8(in_stack_00000138 + 2,&stack0x00000110,*(undefined8 *)puVar3);
      }
      else if (iVar14 == 0) {
        uVar12 = *(undefined8 *)(&stack0x00000060 + (long)(in_stack_00000068 + -1) * 8);
        puVar13 = in_stack_00000138 + 2;
        *in_stack_00000138 = 0xfffffffe;
        uVar8 = thunk_FUN_02dfd288(UnityEngine_AndroidJavaObject_TypeInfo);
        FUN_0435ebf8(puVar13,uVar12,uVar8);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


