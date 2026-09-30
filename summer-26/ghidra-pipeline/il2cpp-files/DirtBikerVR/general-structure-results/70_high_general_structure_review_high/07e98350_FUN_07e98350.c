/*
FUNCTION_NAME: FUN_07e98350
ENTRY_POINT: 07e98350
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_07e98350(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_80 [72];
  undefined1 local_38;
  
  if ((DAT_0899ab07 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Create__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_SetException__
                );
    DAT_0899ab07 = 1;
  }
  local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x5c);
    if (iVar1 != 0) {
      lVar3 = FUN_07e98468(param_1,param_2);
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_SetException__
      ;
      if (lVar3 == 0) goto LAB_07e98464;
      iVar1 = iVar1 + -1;
      Unity_Collections_NativeArray<IndirectInstanceInfo>__get_Length
                (auStack_80,lVar3,iVar1,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Create__
                );
      memcpy(&local_d0,auStack_80,0x48);
      memcpy(auStack_80,&local_d0,0x48);
      local_38 = 1;
      FUN_05007d24(lVar3,iVar1,auStack_80,*(undefined8 *)puVar2);
    }
    return;
  }
LAB_07e98464:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


