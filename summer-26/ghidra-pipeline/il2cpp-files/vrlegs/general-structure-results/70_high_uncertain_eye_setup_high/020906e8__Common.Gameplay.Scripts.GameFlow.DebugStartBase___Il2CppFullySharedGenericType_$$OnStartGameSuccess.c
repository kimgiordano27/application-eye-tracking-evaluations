/*
FUNCTION_NAME: _Common.Gameplay.Scripts.GameFlow.DebugStartBase<__Il2CppFullySharedGenericType>$$OnStartGameSuccess
ENTRY_POINT: 020906e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0209088c) */

uint _Common_Gameplay_Scripts_GameFlow_DebugStartBase<__Il2CppFullySharedGenericType>__OnStartGameSuccess
               (void)

{
  bool bVar1;
  char in_NG;
  char in_OV;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000008;
  
  do {
    if (in_NG == in_OV) {
      lVar6 = 0x28;
      uVar3 = 1;
      do {
        uVar2 = uVar3 - 1;
        if (in_w8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar4 = (long *)(unaff_x21 + (long)(int)uVar2 * 8 + 0x20);
        if (*plVar4 == 0) {
          thunk_FUN_01a4b338();
          *plVar4 = unaff_x20;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4);
          bVar1 = false;
          goto LAB_020907e8;
        }
        if ((uVar2 == in_w8 - 1) && (lVar5 = *unaff_x22, thunk_FUN_01a4b338(), unaff_x21 == lVar5))
        {
          lVar5 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_01a46ff8();
          }
          lVar5 = FUN_01ab6a94(lVar5,*(int *)(unaff_x21 + 0x18) << 1);
          FUN_02794c7c(unaff_x21,lVar5,uVar3,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(long *)(lVar5 + lVar6) = unaff_x20;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          thunk_FUN_01a4b338();
          *unaff_x22 = lVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          bVar1 = false;
          uVar2 = uVar3;
          goto LAB_020907e8;
        }
        in_w8 = *(uint *)(unaff_x21 + 0x18);
        lVar6 = lVar6 + 8;
        bVar1 = (int)uVar3 < (int)in_w8;
        uVar3 = uVar3 + 1;
      } while (bVar1);
    }
    bVar1 = true;
    uVar2 = unaff_w23;
LAB_020907e8:
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x21,0);
    }
    if (!bVar1) {
      return uVar2;
    }
    unaff_x21 = *unaff_x22;
    thunk_FUN_01a4b338();
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(unaff_x21,(long)&stack0x00000008 + 4,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    in_OV = SBORROW4(in_w8,1);
    in_NG = (int)(in_w8 - 1) < 0;
    unaff_w23 = uVar2;
  } while( true );
}


