/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<TrackerCoroutine>d__134$$System.IDisposable.Dispose
ENTRY_POINT: 08a546f8
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<TrackerCoroutine>d__134__System_IDisposable_Dispose
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 in_w9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000018;
  
  *unaff_x19 = in_w9;
  uStack0000000000000018 = param_1;
  FUN_08c80ec0(&stack0x00000018,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = FUN_08a4ef68();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uStack0000000000000018 = FUN_08df2f04(lVar2,0);
  uVar3 = FUN_08c80df8(&stack0x00000018,0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 4;
    *(undefined8 *)(unaff_x19 + 0x12) = uStack0000000000000018;
    thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
    FUN_053c2288(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    FUN_08c80ec0(&stack0x00000018,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = FUN_08a4f118();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uStack0000000000000018 = FUN_08df2f04(lVar2,0);
    uVar3 = FUN_08c80df8(&stack0x00000018,0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 5;
      *(undefined8 *)(unaff_x19 + 0x12) = uStack0000000000000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
      FUN_053c2288(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_08c80ec0(&stack0x00000018,0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar2 = Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromPrefab>d__80__MoveNext();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uStack0000000000000018 = FUN_08df2f04(lVar2,0);
      uVar3 = FUN_08c80df8(&stack0x00000018,0);
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 6;
        *(undefined8 *)(unaff_x19 + 0x12) = uStack0000000000000018;
        thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
        FUN_053c2288(unaff_x19 + 2,&stack0x00000018);
      }
      else {
        FUN_08c80ec0(&stack0x00000018,0);
        puVar1 = PTR_DAT_0ac4f028;
        *unaff_x19 = 0xfffffffe;
        FUN_0812771c(unaff_x19 + 2,1,*(undefined8 *)puVar1);
      }
    }
  }
  return;
}


