/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$SetDepthEnabled
ENTRY_POINT: 01436a58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__SetDepthEnabled(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint in_w8;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  unaff_x21[4] = unaff_x19;
  if (*unaff_x22 != 0) {
    lVar2 = thunk_FUN_00d6225c(*unaff_x22,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar2 == 0) goto LAB_01436b50;
    in_w8 = *(uint *)(unaff_x21 + 3);
  }
  if (1 < in_w8) {
    unaff_x21[5] = *unaff_x22;
    if (unaff_x20 == 0) goto LAB_01436c34;
    in_stack_00000008._4_1_ = *(long *)(unaff_x20 + 0x28) != 0;
    if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar2 = FUN_016f5f58((long)&stack0x00000008 + 4,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
LAB_01436b50:
      uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,0);
    }
    puVar1 = System_Collections_Generic_Dictionary<string,_Expression>_TypeInfo;
    uVar6 = *(uint *)(unaff_x21 + 3);
    if (2 < uVar6) {
      unaff_x21[6] = lVar2;
      lVar2 = *(long *)puVar1;
      if (lVar2 != 0) {
        lVar2 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar2 == 0) goto LAB_01436b50;
        uVar6 = *(uint *)(unaff_x21 + 3);
      }
      if (3 < uVar6) {
        unaff_x21[7] = *(long *)puVar1;
        plVar4 = *(long **)(unaff_x20 + 0x20);
        if (plVar4 == (long *)0x0) {
          lVar2 = 0;
        }
        else {
          lVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_00d6225c(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
          goto LAB_01436b50;
        }
        puVar1 = StringLiteral_302;
        if (4 < *(uint *)(unaff_x21 + 3)) {
          unaff_x21[8] = lVar2;
          uVar5 = FUN_01600844();
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar1);
          }
          FUN_02660dac(uVar5,0);
          lVar2 = *(long *)(unaff_x20 + 0x18);
          if (lVar2 == 0) {
LAB_01436c34:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(lVar2 + 0x18) != 0) {
            lVar3 = *(long *)(lVar2 + 0x20);
            if (lVar3 != 0) {
              uVar5 = FUN_015f5b28();
              FUN_0143699c(lVar3,uVar5);
              lVar2 = *(long *)(unaff_x20 + 0x18);
              if (lVar2 == 0) goto LAB_01436c34;
            }
            if (1 < *(uint *)(lVar2 + 0x18)) {
              lVar2 = *(long *)(lVar2 + 0x28);
              if (lVar2 != 0) {
                uVar5 = FUN_015f5b28();
                FUN_0143699c(lVar2,uVar5);
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


