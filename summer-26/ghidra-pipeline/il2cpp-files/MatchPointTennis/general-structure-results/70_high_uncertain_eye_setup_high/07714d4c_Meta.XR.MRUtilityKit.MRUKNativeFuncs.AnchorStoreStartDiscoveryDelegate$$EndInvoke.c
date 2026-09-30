/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartDiscoveryDelegate$$EndInvoke
ENTRY_POINT: 07714d4c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartDiscoveryDelegate__EndInvoke(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000008;
  
  do {
    thunk_FUN_044a54b4(param_1);
    do {
      uVar3 = FUN_0952c404(unaff_x22,0,0);
      if ((uVar3 & 1) != 0) {
LAB_07714df8:
        uVar2 = FUN_07a3b850((long)&stack0x00000008 + 4,0);
        uVar2 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30a58,uVar2,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c6b48(uVar2,0);
        *unaff_x19 = 0;
        thunk_FUN_044bb4b4();
        return;
      }
      unaff_w21 = unaff_w21 + 1;
      lVar4 = *(long *)(unaff_x20 + 0x20);
      in_stack_00000008._4_4_ = unaff_w21;
      if (lVar4 == 0) {
LAB_07714e74:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(int *)(lVar4 + 0x18) <= unaff_w21) {
        if (*unaff_x19 != 0) {
          uVar1 = FUN_094ed840(*unaff_x19,0);
          if (*unaff_x19 != 0) {
            FUN_094ed8f4(*unaff_x19,1,0);
            if (*unaff_x19 != 0) {
              FUN_094ed8f4(*unaff_x19,uVar1 & 1,0);
              return;
            }
          }
        }
        goto LAB_07714e74;
      }
      uVar2 = FUN_05badb74(lVar4,unaff_w21,*unaff_x24);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x23);
      }
      uVar3 = FUN_0952c404(uVar2,0,0);
      if ((uVar3 & 1) != 0) goto LAB_07714df8;
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar4 = FUN_05badb74(*(long *)(unaff_x20 + 0x20),unaff_w21,*unaff_x24), lVar4 == 0))
      goto LAB_07714e74;
      unaff_x22 = FUN_04d7a1ac(lVar4,*unaff_x25);
      param_1 = *unaff_x23;
    } while (*(int *)(param_1 + 0xe4) != 0);
  } while( true );
}


