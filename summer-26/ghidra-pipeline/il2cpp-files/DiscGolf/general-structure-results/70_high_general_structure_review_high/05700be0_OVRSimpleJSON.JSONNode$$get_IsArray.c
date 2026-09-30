/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode$$get_IsArray
ENTRY_POINT: 05700be0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05700f5c) */
/* WARNING: Removing unreachable block (ram,0x05701058) */
/* WARNING: Removing unreachable block (ram,0x05701320) */
/* WARNING: Removing unreachable block (ram,0x05701314) */

void OVRSimpleJSON_JSONNode__get_IsArray(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x19;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  int *unaff_x20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  int *in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  int *in_stack_00000040;
  long *in_stack_00000048;
  int in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined1 *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  int iStack00000000000000dc;
  undefined4 *in_stack_000000e8;
  
  FUN_02d965b8(
              UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_AffordanceStateShortcuts_TypeInfo
              );
  FUN_02d965b8(System_AggregateException_TypeInfo);
  FUN_02d965b8(System_Data_AggregateNode_TypeInfo);
  FUN_02d965b8(Microsoft_CSharp_RuntimeBinder_Semantics_AggregateSymbol_TypeInfo);
  FUN_02d965b8(Microsoft_CSharp_RuntimeBinder_Semantics_AggregateType_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a00f70);
  FUN_02d965b8(System_Data_AggregateType_TypeInfo);
  FUN_02d965b8(Mono_Security_Interface_Alert_TypeInfo);
  FUN_02d965b8(Mono_Security_Interface_AlertDescription_TypeInfo);
  FUN_02d965b8(Mono_Security_Interface_AlertLevel_TypeInfo);
  FUN_02d965b8(AlertViewHUD_TypeInfo);
  FUN_02d965b8(System_Xml_Schema_AllElementsContentValidator_TypeInfo);
  FUN_02d965b8(Unity_Services_Relay_Models_AllocationRequest_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a0d050);
  FUN_02d965b8(Unity_Collections_Allocator_TypeInfo);
  FUN_02d965b8(UnityEngine_UIElements_UIR_Allocator2D_TypeInfo);
  FUN_02d965b8(Unity_Collections_AllocatorManager_TypeInfo);
  FUN_02d965b8(Unity_Services_Wire_Internal_AlreadySubscribedException_TypeInfo);
  FUN_02d965b8(UnityEngine_XR_ARCore_ARCoreLoader_TypeInfo);
  FUN_02d965b8(Unity_Services_Wire_Internal_AlreadyUnsubscribedException_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xbca) = 1;
  iStack00000000000000dc = *unaff_x20;
  lVar15 = *(long *)(unaff_x20 + 10);
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  auVar19 = ZEXT816(0);
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  auVar18 = ZEXT816(0);
  in_stack_000000a8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = (undefined1 *)0x0;
  in_stack_00000070 = (undefined8 *)0x0;
  in_stack_00000058 = 0;
  if (iStack00000000000000dc == 0) {
    _in_stack_000000c0 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
    unaff_x20[0x10] = 0;
    unaff_x20[0x11] = 0;
    unaff_x20[0x12] = 0;
    unaff_x20[0x13] = 0;
    iStack00000000000000dc = -1;
    *unaff_x20 = -1;
LAB_05700da0:
    _in_stack_000000b0 = auVar18;
    uVar12 = FUN_040c0d88(&stack0x000000c0,*(undefined8 *)System_Net_Sockets_AddressFamily_TypeInfo)
    ;
    *(undefined8 *)(in_stack_000000e8 + 0xe) = uVar12;
    LeanTween__value(in_stack_000000e8 + 0xe,0);
    in_stack_00000040 = &stack0x000000dc;
    in_stack_00000038 = 0;
    in_stack_00000048 = (long *)&stack0x000000e8;
    auVar18 = _in_stack_000000b0;
    auVar19 = _in_stack_000000c0;
    if (iStack00000000000000dc == 1) goto OVRSimpleJSON_JSONNode__GetValueOrDefault;
    in_stack_00000020 = 0;
    in_stack_00000028 = (int *)0x0;
    FUN_04808e60(&stack0x00000020,&stack0x000000a8,in_stack_000000e8 + 0x14,
                 *(undefined8 *)Unity_Services_Wire_Internal_AlreadySubscribedException_TypeInfo);
    *(int **)(in_stack_000000e8 + 0x18) = in_stack_00000028;
    *(long *)(in_stack_000000e8 + 0x16) = in_stack_00000020;
    LeanTween__value(in_stack_000000e8 + 0x16,0);
    lVar10 = in_stack_000000a8;
    in_stack_00000028 = &stack0x000000dc;
    in_stack_00000020 = 0;
    in_stack_00000030 = (long *)&stack0x000000e8;
    if (iStack00000000000000dc == 1) goto LAB_05700df0;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    auVar18 = FUN_056ff990(lVar15,*(undefined1 *)(in_stack_000000e8 + 0xc));
    if (lVar10 == 0) {
LAB_0570132c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = *(long *)(lVar10 + 0x10);
    lVar14 = *(long *)Microsoft_CSharp_RuntimeBinder_Semantics_AggregateSymbol_TypeInfo;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_0570132c;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      *(undefined1 (*) [16])(lVar15 + (long)(int)uVar1 * 0x10 + 0x20) = auVar18;
    }
    else {
      FUN_03ef77a0(lVar10,auVar18._0_8_,auVar18._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    _in_stack_00000080 =
         FUN_0376a32c(in_stack_000000a8,*(undefined8 *)(in_stack_000000e8 + 0x14),
                      *(undefined8 *)Unity_Collections_Allocator_TypeInfo);
    if (*(int *)(*(long *)Unity_Services_Relay_Models_AllocationRequest_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Unity_Services_Relay_Models_AllocationRequest_TypeInfo);
    }
    _in_stack_00000090 =
         FUN_04384368(&stack0x00000080,
                      *(undefined8 *)System_Xml_Schema_AllElementsContentValidator_TypeInfo);
    uVar11 = FUN_040c0684(&stack0x00000090,
                          *(undefined8 *)System_Security_Cryptography_AesTransform_TypeInfo);
    if ((uVar11 & 1) == 0) {
      iStack00000000000000dc = 1;
      *in_stack_000000e8 = 1;
      uVar12 = *(undefined8 *)Mono_Security_Interface_AlertDescription_TypeInfo;
      *(undefined1 (*) [16])(in_stack_000000e8 + 0x1a) = _in_stack_00000090;
      FUN_03367b24(in_stack_000000e8 + 2,&stack0x00000090,in_stack_000000e8,uVar12);
      auVar18 = ZEXT816(0);
      iVar17 = 5;
      goto LAB_05701060;
    }
  }
  else {
    if (iStack00000000000000dc != 1) {
      _in_stack_000000b0 = FUN_05700154(lVar15);
      if (*(int *)(*(long *)PTR_DAT_06a0d050 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a0d050);
      }
      _in_stack_000000c0 = FUN_043915bc(&stack0x000000b0,*(undefined8 *)AlertViewHUD_TypeInfo);
      uVar11 = FUN_040c0c88(&stack0x000000c0,
                            *(undefined8 *)
                             UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_AffordanceStateData_TypeInfo
                           );
      auVar18 = _in_stack_000000b0;
      if ((uVar11 & 1) == 0) {
        iStack00000000000000dc = 0;
        *in_stack_000000e8 = 0;
        uVar12 = *(undefined8 *)Mono_Security_Interface_Alert_TypeInfo;
        *(undefined1 (*) [16])(in_stack_000000e8 + 0x10) = _in_stack_000000c0;
        FUN_03367ca0(in_stack_000000e8 + 2,&stack0x000000c0,in_stack_000000e8,uVar12);
        return;
      }
      goto LAB_05700da0;
    }
OVRSimpleJSON_JSONNode__GetValueOrDefault:
    in_stack_00000038 = 0;
    in_stack_00000048 = (long *)&stack0x000000e8;
    in_stack_00000040 = &stack0x000000dc;
    _in_stack_000000b0 = auVar18;
    _in_stack_000000c0 = auVar19;
LAB_05700df0:
    in_stack_00000030 = (long *)&stack0x000000e8;
    in_stack_00000028 = &stack0x000000dc;
    in_stack_00000020 = 0;
    iStack00000000000000dc = -1;
    _in_stack_00000090 = *(undefined1 (*) [16])(in_stack_000000e8 + 0x1a);
    *(undefined8 *)(in_stack_000000e8 + 0x1a) = 0;
    *(undefined8 *)(in_stack_000000e8 + 0x1c) = 0;
    *in_stack_000000e8 = 0xffffffff;
  }
  FUN_040c0784(&stack0x00000090,*(undefined8 *)System_Security_Cryptography_Aes_TypeInfo);
  puVar6 = Microsoft_CSharp_RuntimeBinder_Semantics_AggregateType_TypeInfo;
  if (*(long *)(in_stack_000000e8 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_03fb6fa8(&stack0x00000008,*(long *)(in_stack_000000e8 + 0x14),
               *(undefined8 *)Microsoft_CSharp_RuntimeBinder_Semantics_AggregateType_TypeInfo);
  puVar8 = Unity_Services_Wire_Internal_AlreadyUnsubscribedException_TypeInfo;
  puVar7 = UnityEngine_UIElements_UIR_Allocator2D_TypeInfo;
  puVar5 = System_AggregateException_TypeInfo;
  puVar4 = UnityEngine_XR_ARCore_ARCoreLoader_TypeInfo;
  puVar3 = PTR_DAT_06a00f70;
  puVar2 = PTR_DAT_069fb930;
  in_stack_00000068 = in_stack_00000010;
  in_stack_00000060 = in_stack_00000008;
  in_stack_00000070 = in_stack_00000018;
  in_stack_00000010 = (undefined1 *)&stack0x000000dc;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000060;
  while( true ) {
    uVar11 = FUN_0514478c(&stack0x00000060,*(undefined8 *)puVar5);
    puVar9 = in_stack_00000070;
    if ((uVar11 & 1) == 0) break;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_0576856c((ulong)puVar9 & 0xffffffff,0);
    if ((uVar11 & 1) == 0) {
      in_stack_00000000._4_1_ = *(undefined1 *)(in_stack_000000e8 + 0xc);
      uVar12 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar4,(long)&stack0x00000000 + 4);
      uVar13 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar7);
      uVar12 = FUN_0536e0dc(*(undefined8 *)puVar8,uVar12,uVar13,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630bbe4(uVar12,0);
    }
  }
  if (iStack00000000000000dc < 0) {
    FUN_05144788(in_stack_00000018,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_AffordanceStateShortcuts_TypeInfo
                );
  }
  if (*(long *)(in_stack_000000e8 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_03fb6fa8(&stack0x00000008,*(long *)(in_stack_000000e8 + 0x14),*(undefined8 *)puVar6);
  in_stack_00000060 = in_stack_00000008;
  in_stack_00000070 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000018 = &stack0x00000060;
  in_stack_00000068 = in_stack_00000010;
  in_stack_00000010 = (undefined1 *)&stack0x000000dc;
  do {
    uVar11 = FUN_0514478c(&stack0x00000060,*(undefined8 *)puVar5);
    puVar9 = in_stack_00000070;
    if ((uVar11 & 1) == 0) {
      auVar18 = ZEXT816(0);
      iVar17 = 0xf;
      goto LAB_05701004;
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_0576856c((ulong)puVar9 & 0xffffffff,0);
  } while ((uVar11 & 1) != 0);
  auVar18 = FUN_03767208((ulong)puVar9 & 0xffffffff,
                         *(undefined8 *)System_Data_AggregateType_TypeInfo);
  iVar17 = 0xe;
LAB_05701004:
  if (iStack00000000000000dc < 0) {
    FUN_05144788(in_stack_00000018,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_AffordanceStateShortcuts_TypeInfo
                );
  }
  if ((iVar17 == 0xf) || (iVar17 == 0)) {
    auVar19 = FUN_03767208(0,*(undefined8 *)System_Data_AggregateType_TypeInfo);
    iVar17 = 0xe;
    auVar18._8_8_ = auVar19._8_8_ & 0xffffffff;
    auVar18._0_8_ = auVar19._0_8_;
  }
LAB_05701060:
  if (*in_stack_00000028 < 0) {
    FUN_04808f10(*in_stack_00000030 + 0x58,
                 *(undefined8 *)Unity_Collections_AllocatorManager_TypeInfo);
  }
  if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (*in_stack_00000040 < 0) {
    lVar15 = *(long *)(*in_stack_00000048 + 0x38);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(int *)(lVar15 + 0x14) = *(int *)(lVar15 + 0x14) + -1;
  }
  puVar6 = Mono_Security_Interface_AlertLevel_TypeInfo;
  if (in_stack_00000038 == 0) {
    if (iVar17 == 0xe) {
      *in_stack_000000e8 = 0xfffffffe;
      FUN_0435e91c(in_stack_000000e8 + 2,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,
                   *(undefined8 *)puVar6);
    }
    else if (iVar17 == 0) {
      uVar13 = *(undefined8 *)(&stack0x00000050 + (long)(in_stack_00000058 + -1) * 8);
      puVar16 = in_stack_000000e8 + 2;
      *in_stack_000000e8 = 0xfffffffe;
      uVar12 = thunk_FUN_02dfd288(UnityEngine_InputSystem_AmbientTemperatureSensor_TypeInfo);
      FUN_0435e84c(puVar16,uVar13,uVar12);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


