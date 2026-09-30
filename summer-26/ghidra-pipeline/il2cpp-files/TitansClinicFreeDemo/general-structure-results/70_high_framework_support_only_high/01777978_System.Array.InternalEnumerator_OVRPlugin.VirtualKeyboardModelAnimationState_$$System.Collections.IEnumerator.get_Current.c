/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 01777978
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w25;
  uint uVar5;
  
  if (unaff_x20 == 0) {
LAB_01777b18:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
                    /* try { // try from 01777980 to 0187798f has its CatchHandler @ 01777990 */
  if (unaff_w25 < *(uint *)(unaff_x20 + 0x18)) {
                    /* catch() { ... } // from try @ 01777900 with catch @ 01777990
                       catch() { ... } // from try @ 01777980 with catch @ 01777990 */
    uVar1 = *(undefined2 *)(unaff_x20 + (long)(int)unaff_w25 * 2 + 0x20);
                    /* try { // try from 01777994 to 01877997 has its CatchHandler @ 017779a0 */
    uVar5 = unaff_w23 - 1;
                    /* try { // try from 01777998 to 018779a3 has its CatchHandler @ 017776e4 */
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 017778e4 with catch @ 017779a0
                       catch() { ... } // from try @ 01777994 with catch @ 017779a0 */
      FUN_0122e748();
    }
    FUN_0177746c();
    if ((int)uVar5 <= (int)unaff_w19) {
LAB_01777aa8:
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0122e748();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0122e748();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      FUN_0177746c();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_01777b18;
      uVar2 = *(undefined2 *)(unaff_x20 + (long)(int)unaff_w19 * 2 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      iVar3 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar2,uVar1,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar3) {
        do {
          uVar5 = uVar5 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_01777b14;
          uVar2 = *(undefined2 *)(unaff_x20 + (long)(int)uVar5 * 2 + 0x20);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          iVar3 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar2,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar3 < 0);
        if ((int)uVar5 <= (int)unaff_w19) goto LAB_01777aa8;
        lVar4 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0122e748();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0122e748();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0122e748();
        }
        FUN_0177746c();
      }
    }
  }
LAB_01777b14:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


