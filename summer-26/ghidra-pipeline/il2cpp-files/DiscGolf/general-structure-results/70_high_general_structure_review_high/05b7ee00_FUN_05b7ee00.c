/*
FUNCTION_NAME: FUN_05b7ee00
ENTRY_POINT: 05b7ee00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_13;frame_or_lifecycle_behavior
*/


void FUN_05b7ee00(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint local_34;
  
  local_34 = 0;
  if ((param_4 & 1) == 0) {
    if (param_2 == 0) {
LAB_05b7f104:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar10 = 0;
      do {
        uVar3 = FUN_053674f8(param_2,iVar10,0);
        uVar5 = FUN_05bbdbc4(param_1 + 0x48,uVar3,0);
        if ((uVar5 & 1) == 0) {
          uVar4 = FUN_053674f8(param_2,iVar10,0);
          uVar1 = uVar4 & 0xffff;
          if (uVar1 < 0x27) {
            if (uVar1 < 0xe) {
              uVar1 = 1 << (ulong)(uVar4 & 0x1f);
              if ((uVar1 & 0x2600) != 0) goto LAB_05b7ef90;
              if ((uVar1 & 0x1800) != 0) goto LAB_05b7ef1c;
            }
            if ((uVar4 & 0xffff) != 0x26) goto LAB_05b7ef1c;
LAB_05b7efb4:
            lVar8 = FUN_05bbfbf4(param_2,iVar10,0);
            uVar6 = thunk_FUN_02dfd288(
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateHttpClientResponse>d__4>__
                                      );
LAB_05b7efd8:
            uVar6 = FUN_05bc0ef0(uVar6,lVar8,0);
                    /* try { // try from 05b7efe0 to 05c7f00f has its CatchHandler @ 05b7f0a4 */
          }
          else {
            if ((uVar1 == 0x5d) || (uVar1 == 0x3c)) goto LAB_05b7efb4;
LAB_05b7ef1c:
            uVar2 = FUN_053674f8(param_2,iVar10,0);
            uVar5 = FUN_05bbc318(uVar2,0);
            if ((uVar5 & 1) == 0) {
                    /* try { // try from 05b7ef7c to 05c7efa3 has its CatchHandler @ 05b7f0a8 */
              uVar2 = FUN_053674f8(param_2,iVar10,0);
              uVar5 = FUN_05bbc328(uVar2,0);
              if ((uVar5 & 1) == 0) goto LAB_05b7ef90;
                    /* try { // try from 05b7f090 to 05c7f093 has its CatchHandler @ 05b7f0a0 */
                    /* try { // try from 05b7f094 to 05c7f097 has its CatchHandler @ 05b7f09c */
              uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fc180);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7f010 with catch @ 05b7f098
                       try { // try from 05b7f098 to 05c7f0c3 has its CatchHandler @ 05b7ed44 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7f094 with catch @ 05b7f09c
                        */
              lVar8 = FUN_02d966a4(uVar6,1);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7f090 with catch @ 05b7f0a0
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7efe0 with catch @ 05b7f0a4
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b7ef7c with catch @ 05b7f0a8
                        */
              local_34 = FUN_053674f8(param_2,iVar10,0);
              local_34 = local_34 & 0xffff;
                    /* try { // try from 05b7f0c4 to 05c7f0c7 has its CatchHandler @ 05b7f0e4 */
              lVar9 = thunk_FUN_02dfd288(PTR_DAT_069fc178);
                    /* try { // try from 05b7f0c8 to 05c7f0e7 has its CatchHandler @ 05b7ed44 */
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar6 = FUN_0547e2f8(0);
                    /* catch() { ... } // from try @ 05b7f0c4 with catch @ 05b7f0e4 */
                    /* try { // try from 05b7f0e8 to 05c7f0ef has its CatchHandler @ 05b7f0f8 */
              uVar7 = thunk_FUN_02dfd288(PTR_DAT_069fc508);
                    /* try { // try from 05b7f0f0 to 05c7f0fb has its CatchHandler @ 05b7ed44 */
              uVar6 = FUN_0550510c(&local_34,uVar7,uVar6,0);
              if (lVar8 != 0) {
                FUN_0297c314(lVar8,uVar6);
                FUN_02978e90(lVar8,0,uVar6);
                uVar6 = thunk_FUN_02dfd288(
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<>c__DisplayClass4_0_<<CreateHttpClientResponse>b__0>d>__
                                          );
                goto LAB_05b7efd8;
              }
              goto LAB_05b7f104;
            }
            iVar10 = iVar10 + 1;
            if (iVar10 < *(int *)(param_2 + 0x10)) {
              uVar2 = FUN_053674f8(param_2,iVar10,0);
              uVar5 = FUN_05bbc328(uVar2,0);
              if ((uVar5 & 1) != 0) goto LAB_05b7ef90;
            }
            uVar6 = thunk_FUN_02dfd288(
                                      SoundManager_<<StopMusic>g__FadeOutMusicRoutine_55_0>d_TypeInfo
                                      );
            uVar6 = FUN_05bbf93c(uVar6,0);
          }
          uVar7 = thunk_FUN_02dfd288(PTR_DAT_069fb9d8);
          uVar7 = FUN_02d966a4(uVar7,2);
                    /* try { // try from 05b7f010 to 05c7f017 has its CatchHandler @ 05b7f098 */
          FUN_02979e58();
                    /* try { // try from 05b7f018 to 05c7f08f has its CatchHandler @ 05b7ed44 */
          FUN_02978e90(uVar7,0,param_3);
          FUN_02978e90(uVar7,1,uVar6);
          uVar6 = thunk_FUN_02dfd288(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateWebRequestAsync>d__3>__
                                    );
          goto LAB_05b7f048;
        }
LAB_05b7ef90:
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_2 + 0x10));
    }
  }
  else {
    uVar5 = FUN_05bbdd30(param_1 + 0x48,param_2,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fc180);
      uVar7 = FUN_02d966a4(uVar6,1);
      FUN_02979e58();
      FUN_0297c314(uVar7,param_3);
      FUN_02978e90(uVar7,0,param_3);
      uVar6 = thunk_FUN_02dfd288(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_HttpClient_<>c__DisplayClass4_0_<<CreateHttpClientResponse>b__0>d>__
                                );
LAB_05b7f048:
      uVar6 = FUN_05bc0ef0(uVar6,uVar7,0);
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar7 = thunk_FUN_02dd3144();
      FUN_05452924(uVar7,uVar6,0);
      uVar6 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<IXRSelectInteractor,_Pose>_set_Item__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,uVar6);
    }
  }
  return;
}


