/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$ovrp_GetDesiredEyeTextureFormat
ENTRY_POINT: 06af818c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_11_0__ovrp_GetDesiredEyeTextureFormat
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int in_w8;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  int unaff_w21;
  int unaff_w22;
  
  do {
    iVar3 = unaff_w21 + in_w8;
    *(int *)(unaff_x19 + 0x20) = iVar3;
    if (param_3 == 0) {
LAB_06af8260:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    unaff_w22 = unaff_w22 - unaff_w21;
    iVar4 = (int)*(undefined8 *)(param_3 + 0x18);
    if (iVar4 < iVar3) {
      FUN_033d1ba8(&DAT_083cb470);
      uVar1 = thunk_FUN_03398a84();
      thunk_FUN_06869e3c(uVar1,0);
      uVar2 = FUN_033d1ba8(&DAT_084046b0);
                    /* WARNING: Subroutine does not return */
      FUN_033d1c20(uVar1,uVar2);
    }
    if (iVar3 == iVar4) {
      iVar3 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
    if (unaff_w22 < 1) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(float *)(unaff_x19 + 0x28) =
           *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_012eda28;
      if (lVar5 != 0) {
        if (DAT_086ecea0 == (code *)0x0) {
          DAT_086ecea0 = (code *)FUN_033d1b68("UnityEngine.AudioSource::get_clip()");
        }
        lVar5 = (*DAT_086ecea0)(lVar5);
        if (lVar5 != 0) {
          FUN_079bc05c(lVar5,*(undefined8 *)(unaff_x19 + 0x18),0,0);
          return;
        }
      }
      goto LAB_06af8260;
    }
    unaff_w21 = iVar4 - iVar3;
    if (unaff_w22 <= iVar4 - iVar3) {
      unaff_w21 = unaff_w22;
    }
    FUN_068537e0();
    in_w8 = *(int *)(unaff_x19 + 0x20);
    param_3 = *(long *)(unaff_x19 + 0x18);
  } while( true );
}


