/*
FUNCTION_NAME: System.EmptyArray<__Il2CppFullySharedGenericType>$$.cctor
ENTRY_POINT: 020adb74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020adc98) */

void System_EmptyArray<__Il2CppFullySharedGenericType>___cctor(void)

{
  void *__s;
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  size_t unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000008;
  
  do {
    __s = (void *)thunk_FUN_01a59484(unaff_x26,
                                     *(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                              0x80) + 0x60);
    memset(__s,0,unaff_x23);
    thunk_FUN_01a4b338();
    if (*(uint *)(unaff_x28 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *unaff_x25 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,0);
    do {
      plVar1 = (long *)thunk_FUN_01a59484(unaff_x24,
                                          *(undefined8 *)
                                           (**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80))
      ;
      unaff_x24 = *plVar1;
      thunk_FUN_01a4b338();
      if (unaff_x24 == 0) {
        if (in_stack_00000008._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0();
        }
        *(undefined8 *)(unaff_x20 + 0x20) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x20 + 0x20),0);
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01a46ff8();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01a46ff8();
        }
        if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_021ee928(**(long **)(lVar2 + 0xb8),unaff_w21,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70));
        return;
      }
      plVar1 = (long *)thunk_FUN_01a59484(unaff_x24,
                                          *(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0)
                                                   + 0x80) + 0x40);
      unaff_x28 = *plVar1;
      thunk_FUN_01a4b338();
    } while (unaff_x28 == 0);
    thunk_FUN_01a4b338();
    FUN_018820a8(unaff_x24,*(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80) + 0x40,
                 0);
    if (*(uint *)(unaff_x28 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x25 = (undefined8 *)(unaff_x28 + unaff_x27 * 8 + 0x20);
    unaff_x26 = *unaff_x25;
    thunk_FUN_01a4b338();
  } while( true );
}


