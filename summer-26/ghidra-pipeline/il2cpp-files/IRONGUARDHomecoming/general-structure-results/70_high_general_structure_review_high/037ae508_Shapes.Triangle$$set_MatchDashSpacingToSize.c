/*
FUNCTION_NAME: Shapes.Triangle$$set_MatchDashSpacingToSize
ENTRY_POINT: 037ae508
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x037ae858) */
/* WARNING: Removing unreachable block (ram,0x037ae860) */

void Shapes_Triangle__set_MatchDashSpacingToSize
               (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  
  puVar1 = StringLiteral_558;
  if ((DAT_0483755e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Flush__);
    thunk_FUN_01efb3a4(StringLiteral_559);
    thunk_FUN_01efb3a4(StringLiteral_560);
    thunk_FUN_01efb3a4(StringLiteral_533);
    thunk_FUN_01efb3a4(StringLiteral_554);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__1__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
                      );
    thunk_FUN_01efb3a4(StringLiteral_555);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_2_<CreateVolumeParameterWidget>b__3__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<Challenge>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_561);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                      );
    thunk_FUN_01efb3a4(StringLiteral_535);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                      );
    thunk_FUN_01efb3a4(StringLiteral_562);
    thunk_FUN_01efb3a4(StringLiteral_558);
    DAT_0483755e = 1;
  }
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000038 = 0;
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar5,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(lVar5 + 0x10) = param_3;
  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x10),param_3);
  *(undefined8 *)(lVar5 + 0x18) = param_4;
  *(undefined8 *)(lVar5 + 0x20) = param_5;
  if ((param_1 & 1) != 0) {
    in_stack_00000020 = 0;
    FUN_02ea44e8(&stack0x00000020,&stack0x00000068,*(undefined8 *)StringLiteral_560);
    in_stack_00000060 = in_stack_00000020;
    in_stack_00000020 = 0;
    FUN_03038ae8(&stack0x00000020,&stack0x00000058,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
                );
    puVar3 = StringLiteral_561;
    puVar2 = StringLiteral_533;
    puVar1 = 
    Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_2_<CreateVolumeParameterWidget>b__3__
    ;
    in_stack_00000050 = in_stack_00000020;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar6 = 0;
      do {
        FUN_030ed4b8(&stack0x00000020,param_2,iVar6,*(undefined8 *)puVar3);
        FUN_037ae3d8();
        if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_030a7a94(in_stack_00000058,in_stack_00000068,*(undefined8 *)puVar1);
        if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02ea9d90(in_stack_00000068,*(undefined8 *)puVar2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_2 + 0x18));
    }
    in_stack_00000020 = 0;
    FUN_03038b78(&stack0x00000020,(undefined8 *)(lVar5 + 0x28),*(undefined8 *)StringLiteral_555);
    lVar4 = in_stack_00000058;
    in_stack_00000048 = in_stack_00000020;
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    _in_stack_00000038 = FUN_0373a57c(0,lVar4,uVar7,0,0);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_Compression_DeflateStream_Flush__);
    FUN_02aaed08(uVar7,lVar5,*(undefined8 *)StringLiteral_562,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03339f54(&stack0x00000038,uVar7,*(undefined8 *)StringLiteral_535);
    FUN_03038bd8(&stack0x00000048,*(undefined8 *)StringLiteral_554);
    FUN_03038b48(&stack0x00000050,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__1__
                );
    FUN_02ea4548(&stack0x00000060,*(undefined8 *)StringLiteral_559);
  }
  return;
}


