/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.AR.GestureTransformationUtility$$LimitTranslation
ENTRY_POINT: 02525d18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility__LimitTranslation
               (void *param_1,void *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar13;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 uStack000000000000008c;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  ulong in_stack_00000280;
  undefined8 in_stack_00000288;
  long *in_stack_00000290;
  ulong in_stack_000004e8;
  long *in_stack_000004f8;
  
  memcpy(param_1,param_2,0x70);
                    /* try { // try from 02525d64 to 02625d73 has its CatchHandler @ 02525fb0 */
  memcpy(&stack0x00000640,&stack0x000006f0,0x70);
  uVar9 = FUN_02546da8();
                    /* try { // try from 02525d88 to 02625d93 has its CatchHandler @ 02525f98 */
  if ((uVar9 & 1) != 0) {
    in_stack_00000268 = *unaff_x20;
                    /* try { // try from 02525db4 to 02625db7 has its CatchHandler @ 02525f74 */
    FUN_01347274(&stack0x000004d0,&stack0x00000268,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadCharsAsync>d__14>__
                );
  }
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__;
  uVar9 = FUN_02546dd8();
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 02525de8 to 02625df7 has its CatchHandler @ 02525fb4 */
    in_stack_000004f8 = (long *)0x0;
                    /* try { // try from 02525e14 to 02625e1f has its CatchHandler @ 02525fa8 */
    in_stack_000004e8 = 0;
    FUN_01347274(&stack0x000004d0,&stack0x00000420,*(undefined8 *)puVar5);
    memcpy(&stack0x000005f0,&stack0x000004d0,0x44);
  }
  uVar9 = FUN_02546de4();
  if ((uVar9 & 1) != 0) {
    in_stack_000004f8 = (long *)0x0;
    in_stack_000004e8 = 0;
    FUN_01347274(&stack0x000004d0,&stack0x000003e0,*(undefined8 *)puVar5);
    memcpy(&stack0x000005a0,&stack0x000004d0,0x44);
  }
  uVar9 = FUN_02546dfc();
  if ((uVar9 & 1) != 0) {
    in_stack_00000268 = unaff_x20[0x17];
    FUN_01347274(&stack0x000004d0,&stack0x00000268,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_GetHashCode__);
  }
  uVar9 = FUN_02546e08();
  if ((uVar9 & 1) != 0) {
    in_stack_00000268 =
         CONCAT44((int)((ulong)in_stack_00000268 >> 0x20),*(undefined4 *)(unaff_x20 + 0x18));
    FUN_01347274(&stack0x000004d0,&stack0x00000268,*unaff_x21);
  }
  uVar9 = FUN_02546e44();
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((uVar9 & 1) != 0) {
    uVar13 = *(undefined8 *)(unaff_x23 + 0x80);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b4e0(uVar13,0,0);
    if (((uVar9 & 1) == 0) || (uVar9 = FUN_025407e0(&stack0x000003b0,0), (uVar9 & 1) == 0)) {
      uVar13 = *(undefined8 *)(unaff_x23 + 0x80);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_02681b9c(uVar13,0,0);
      if (((uVar9 & 1) != 0) && (uVar9 = FUN_025407e0(&stack0x00000350,0), (uVar9 & 1) != 0)) {
        FUN_025403f4(&stack0x00000268,&stack0x00000320,&stack0x000002f0,0);
        *(ulong *)(unaff_x23 + 0x70) = in_stack_00000280;
        *(undefined8 *)(unaff_x23 + 0x68) = in_stack_00000278;
        *(long **)(unaff_x23 + 0x80) = in_stack_00000290;
        *(undefined8 *)(unaff_x23 + 0x78) = in_stack_00000288;
        *(undefined8 *)(unaff_x23 + 0x60) = in_stack_00000270;
        *(undefined8 *)(unaff_x23 + 0x58) = in_stack_00000268;
        in_stack_000004e8 = in_stack_00000280;
        in_stack_000004f8 = in_stack_00000290;
      }
    }
    else {
      FUN_0254021c(&stack0x000004d0,&stack0x00000380,0);
      *(undefined8 *)(unaff_x23 + 0x60) = 0;
      *(undefined8 *)(unaff_x23 + 0x58) = 0;
      *(undefined8 *)(unaff_x23 + 0x70) = 0;
      *(undefined8 *)(unaff_x23 + 0x68) = 0;
      *(undefined8 *)(unaff_x23 + 0x80) = 0;
      *(undefined8 *)(unaff_x23 + 0x78) = 0;
      in_stack_000004e8 = 0;
      in_stack_000004f8 = (long *)0x0;
    }
  }
  puVar5 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<string>__ctor__;
  FUN_02546e50();
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar5;
  }
  lVar10 = **(long **)(lVar10 + 0xb8);
  if (lVar10 != 0) {
    lVar12 = *(long *)Method_System_Collections_Generic_List<SuperTextMesh>__ctor__;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
    }
    else {
      iVar2 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if (0 < iVar2) {
        FUN_0179519c(*(undefined8 *)(lVar10 + 0x10),0,iVar2,0);
      }
    }
    lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    if (lVar10 != 0) {
      lVar12 = *(long *)
                Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
      ;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(lVar10 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        if (0 < iVar2) {
          FUN_0179519c(*(undefined8 *)(lVar10 + 0x10),0,iVar2,0);
        }
      }
      puVar8 = StringLiteral_4747;
      puVar7 = StringLiteral_3541;
      puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__;
      puVar4 = UnityEngine_UIElements_UIR_Allocator2D_TypeInfo;
      puVar3 = System_Collections_Generic_IList<JsonSchemaModel>_TypeInfo;
      if (*(long *)(unaff_x23 + 0x40) != 0) {
        FUN_01323390(*(long *)(unaff_x23 + 0x40),&stack0x000004d0,*(undefined8 *)StringLiteral_983);
        while (uVar9 = FUN_012b894c(&stack0x00000550,*(undefined8 *)puVar7), (uVar9 & 1) != 0) {
          FUN_00cbb534(&stack0x000004d0,&stack0x00000550,*(undefined8 *)puVar4);
          lVar10 = *(long *)(*(long *)puVar3 + 0x20);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          pcVar11 = (char *)thunk_FUN_00d32ed4(&stack0x0000054c,*(undefined8 *)(lVar10 + 0x80));
          if (*pcVar11 != '\0') {
            FUN_00cbb824(&stack0x0000054c,
                         *(undefined8 *)Method_System_IO_Compression_DeflateStream_Write__);
            uVar13 = FUN_017a7f78(&stack0x000004d0,0);
            FUN_01600424(*(undefined8 *)Method_System_Nullable<Data_VolumeBoundsData>_get_HasValue__
                         ,uVar13,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                         ,0);
          }
          lVar10 = *(long *)puVar5;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar5;
          }
          if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((in_stack_000004f8 != (long *)0x0) &&
             (*in_stack_000004f8 !=
              *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(in_stack_000004f8);
          }
          FUN_00bc0bd0(**(long **)(lVar10 + 0xb8),in_stack_000004f8,*(undefined8 *)puVar6);
          lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ac20f0(lVar10,in_stack_000004e8 & 0xffffffff,*(undefined8 *)puVar8);
        }
        FUN_012b8948(&stack0x00000550,*(undefined8 *)StringLiteral_10519);
        if (*(long *)(unaff_x23 + 0x18) != 0) {
          FUN_02549144(*(long *)(unaff_x23 + 0x18),&stack0x00000598,&stack0x00000590,0);
          lVar10 = *(long *)puVar5;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar10 = *(long *)puVar5;
          }
          lVar12 = *(long *)(unaff_x23 + 0x38);
          uVar13 = **(undefined8 **)(lVar10 + 0xb8);
          uVar1 = (*(undefined8 **)(lVar10 + 0xb8))[1];
          memcpy(&stack0x000004d0,&stack0x00000640,0x70);
          memcpy(&stack0x00000268,&stack0x000005f0,0x44);
          memcpy(&stack0x00000220,&stack0x000005a0,0x44);
          if (lVar12 != 0) {
            in_stack_00000070 = in_stack_00000058;
            uStack000000000000008c = in_stack_00000040;
            in_stack_000000b0 = in_stack_00000050;
            in_stack_000000a8 = in_stack_00000048;
            memcpy(&stack0x000000b8,&stack0x000004d0,0x70);
            in_stack_00000130 = in_stack_00000060;
            in_stack_00000138 = 0;
            in_stack_00000148 = 0;
            in_stack_00000140 = 0;
            memcpy(&stack0x00000150,&stack0x00000268,0x44);
            memcpy(&stack0x00000194,&stack0x00000220,0x44);
            in_stack_000001e8 = 0;
            in_stack_000001d8 = uVar13;
            in_stack_000001e0 = uVar1;
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),&stack0x00000070,
                       *(undefined8 *)(lVar12 + 0x28));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


