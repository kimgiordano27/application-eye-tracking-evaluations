/*
FUNCTION_NAME: FUN_05b638dc
ENTRY_POINT: 05b638dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 FUN_05b638dc(long param_1,long param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
                    /* try { // try from 05b638fc to 05c638ff has its CatchHandler @ 05b63988 */
  if ((DAT_06dc220b & 1) == 0) {
                    /* try { // try from 05b6390c to 05c6390f has its CatchHandler @ 05b63984 */
    FUN_02d965b8(OVR_OpenVR_IVRRenderModels__FreeRenderModel_TypeInfo);
    DAT_06dc220b = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar5 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a0f6f8);
    FUN_0544bf54(uVar5,uVar3,0);
    goto LAB_05b63a68;
  }
  if (param_4 < 0) {
LAB_05b639e4:
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar5 = thunk_FUN_02dd3144();
    puVar4 = PTR_DAT_06a0d220;
  }
  else {
    if (-1 < param_3) {
                    /* try { // try from 05b63928 to 05c63933 has its CatchHandler @ 05b63988 */
      if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
                    /* try { // try from 05b63934 to 05c639a3 has its CatchHandler @ 05b63870 */
        if (*(int *)(param_1 + 0xa0) == 0x18) {
          if (*(long *)(param_1 + 400) == *(long *)(param_1 + 0x1a8)) goto LAB_05b639b0;
        }
        else {
          if (*(int *)(param_1 + 0x1fc) != 1) {
            return 0;
          }
          if (*(int *)(param_1 + 0xa0) == 0x19) {
            uVar3 = thunk_FUN_02dfd288(
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateHttpClientResponse>d__4>__
                                      );
            uVar3 = FUN_05bbf93c(uVar3,0);
            thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
            uVar5 = thunk_FUN_02dd3144();
            FUN_054e8008(uVar5,uVar3,0);
            uVar3 = thunk_FUN_02dfd288(
                                      Method_System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_Remove__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar5,uVar3);
          }
          if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x10);
          if (*(int *)(*(long *)OVR_OpenVR_IVRRenderModels__FreeRenderModel_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar2 = FUN_05b74f00(uVar1,0);
          if ((uVar2 & 1) == 0) {
            uVar3 = thunk_FUN_02dfd288(
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Create__
                                      );
            uVar5 = FUN_05b71f6c(param_1,uVar3,0);
            goto LAB_05b63a68;
          }
          uVar2 = FUN_05b636ec(param_1);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
        }
        FUN_05b63af8(param_1);
LAB_05b639b0:
        uVar3 = FUN_05b632ec(param_1,param_2,param_3,param_4);
        return uVar3;
      }
      goto LAB_05b639e4;
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar5 = thunk_FUN_02dd3144();
    puVar4 = PTR_DAT_06a0d1d0;
  }
  uVar3 = thunk_FUN_02dfd288(puVar4);
  FUN_05453f78(uVar5,uVar3,0);
LAB_05b63a68:
  uVar3 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<Collider,_XRInteractableSnapVolume>_Remove__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,uVar3);
}


