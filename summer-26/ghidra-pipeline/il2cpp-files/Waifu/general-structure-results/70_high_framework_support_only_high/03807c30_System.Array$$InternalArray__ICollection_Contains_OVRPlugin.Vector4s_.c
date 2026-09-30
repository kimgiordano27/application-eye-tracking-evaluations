/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4s>
ENTRY_POINT: 03807c30
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4s>(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w23;
  int unaff_w24;
  long unaff_x25;
  long lVar6;
  
  FUN_0338f674();
  if (unaff_x25 == 0) {
    FUN_033d1ba8(&DAT_083c8a10);
    uVar4 = thunk_FUN_03398a84();
    uVar5 = FUN_033d1ba8(&DAT_0844fcf0);
    FUN_0677f140(uVar4,uVar5,0);
  }
  else if ((unaff_w24 < 0) || (unaff_w23 < 0)) {
    puVar1 = &DAT_08453df8;
    if (-1 < unaff_w23) {
      puVar1 = &DAT_08454c18;
    }
    uVar5 = FUN_0335b6c8(puVar1,1);
    FUN_033d1ba8(&DAT_083c8a18);
    uVar4 = thunk_FUN_03398a84();
    uVar3 = FUN_033d1ba8(&DAT_08441cd8);
    FUN_06782c1c(uVar4,uVar5,uVar3,0);
  }
  else {
    if (unaff_w24 <= *(int *)(unaff_x25 + 0x18) - unaff_w23) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0338f618();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      FUN_045c81a4();
      return;
    }
    FUN_033d1ba8(&DAT_083c8a08);
    uVar4 = thunk_FUN_03398a84();
    uVar5 = FUN_033d1ba8(&DAT_084426a8);
    FUN_067863a4(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar4);
}


