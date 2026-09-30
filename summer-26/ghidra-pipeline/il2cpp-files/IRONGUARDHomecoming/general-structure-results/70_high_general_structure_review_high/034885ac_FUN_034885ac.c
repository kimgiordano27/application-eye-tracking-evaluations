/*
FUNCTION_NAME: FUN_034885ac
ENTRY_POINT: 034885ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_034885ac(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_04832abf & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StateUnit_Start__);
    DAT_04832abf = 1;
  }
  if ((0 < param_4) && (0 < param_2)) {
    if (param_3 != 0) {
      lVar2 = thunk_FUN_01f117cc(*(undefined8 *)Method_Unity_VisualScripting_StateUnit_Start__);
      FUN_035ac8e8(lVar2,0);
      *(long *)(lVar2 + 0x10) = param_4;
      *(long *)(lVar2 + 0x18) = param_3;
      thunk_FUN_01f51358((long *)(lVar2 + 0x18),param_3);
      *(undefined4 *)(lVar2 + 0x20) = 1;
      FUN_03487f44(param_1,lVar2,param_2,param_4);
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_ConstantBuffer_Set<Hammersley_Hammersley2dSeq64>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01efb3a4(Method_System_IO_Stream_BeginWriteInternal__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar5);
  }
  puVar1 = Method_Unity_VisualScripting_StaticActionInvoker_Invoke__;
  if (0 < param_2) {
    puVar1 = Method_Unity_VisualScripting_StaticActionInvoker_<CreateDelegate>b__7_0__;
  }
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_StaticActionInvoker_Invoke__);
  uVar5 = FUN_035ac8e0(uVar5,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  FUN_034f3578(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_01efb3a4(Method_System_IO_Stream_BeginWriteInternal__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


