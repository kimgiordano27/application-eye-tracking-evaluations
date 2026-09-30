/*
FUNCTION_NAME: FUN_05d4d3d8
ENTRY_POINT: 05d4d3d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d4d3d8(long param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint local_28;
  uint local_24;
  
  puVar1 = PTR_DAT_069fb9c0;
  if (param_1 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar2 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a0dbf0);
    FUN_0544bf54(uVar2,uVar3,0);
    uVar3 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar2,uVar3);
  }
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 0x18);
    if ((-1 < (int)param_2) && ((int)param_2 < (int)uVar6)) {
      if (param_2 < uVar6) {
        uVar7 = (ulong)param_2;
        *(undefined8 *)(lVar5 + uVar7 * 0x58 + 0x60) = *(undefined8 *)(param_3 + 0x40);
        LeanTween__value();
        lVar5 = *(long *)(param_1 + 0x30);
        if (lVar5 == 0) {
LAB_05d4d4ac:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (param_2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + uVar7 * 0x58 + 0x68) = *(undefined8 *)(param_3 + 0x48);
          LeanTween__value();
          lVar5 = *(long *)(param_1 + 0x30);
          if (lVar5 == 0) goto LAB_05d4d4ac;
          if (param_2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + uVar7 * 0x58 + 0x70) = *(undefined8 *)(param_3 + 0x50);
            LeanTween__value();
            FUN_05d48fac(param_1,0);
            FUN_05d416b8(param_1,1);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
  local_24 = param_2;
  uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&local_24);
  local_28 = uVar6;
  uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48),&local_28);
  uVar4 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_List<OVRTask<OVRSceneManager_Metrics>>_Add__
                            );
  uVar2 = FUN_0536e120(uVar4,uVar2,param_1,uVar3,0);
  thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
  uVar3 = thunk_FUN_02dd3144();
  uVar4 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_List<NativeSlice<ConvertMeshJobData>>_GetEnumerator__
                            );
  FUN_0544f840(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_02dfd288(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar3,uVar2);
}


