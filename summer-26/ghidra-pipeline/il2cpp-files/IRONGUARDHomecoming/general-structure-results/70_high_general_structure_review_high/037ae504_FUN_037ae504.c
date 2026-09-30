/*
FUNCTION_NAME: FUN_037ae504
ENTRY_POINT: 037ae504
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

void FUN_037ae504(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  
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
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_78._8_8_ = 0;
  local_68 = 0;
  local_78._0_8_ = 0;
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
    local_90 = 0;
    FUN_02ea44e8(&local_90,&local_48,*(undefined8 *)StringLiteral_560);
    local_50 = local_90;
    local_90 = 0;
    FUN_03038ae8(&local_90,&local_58,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__2__
                );
    puVar3 = StringLiteral_561;
    puVar2 = StringLiteral_533;
    puVar1 = 
    Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_2_<CreateVolumeParameterWidget>b__3__
    ;
    local_60 = local_90;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar6 = 0;
      do {
        FUN_030ed4b8(&local_90,param_2,iVar6,*(undefined8 *)puVar3);
        uStack_a8 = uStack_88;
        local_b0 = local_90;
        local_a0 = local_80;
        FUN_037ae3d8(&local_b0,local_48);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_030a7a94(local_58,local_48,*(undefined8 *)puVar1);
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02ea9d90(local_48,*(undefined8 *)puVar2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_2 + 0x18));
    }
    local_90 = 0;
    FUN_03038b78(&local_90,(undefined8 *)(lVar5 + 0x28),*(undefined8 *)StringLiteral_555);
    lVar4 = local_58;
    local_68 = local_90;
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<RTHandle>_TryGetResource__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    local_78 = FUN_0373a57c(0,lVar4,uVar7,0,0);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_Compression_DeflateStream_Flush__);
    FUN_02aaed08(uVar7,lVar5,*(undefined8 *)StringLiteral_562,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResource<ComputeBufferDesc,_ComputeBuffer>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03339f54(local_78,uVar7,*(undefined8 *)StringLiteral_535);
    FUN_03038bd8(&local_68,*(undefined8 *)StringLiteral_554);
    FUN_03038b48(&local_60,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1_<CreateVolumeParameterWidget>b__1__
                );
    FUN_02ea4548(&local_50,*(undefined8 *)StringLiteral_559);
  }
  return;
}


