/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$IsTypeSupported
ENTRY_POINT: 052e3ec0
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__IsTypeSupported(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x23;
  undefined8 *puVar6;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  puVar1 = PTR_DAT_06d01e20;
  puVar6 = *(undefined8 **)(unaff_x23 + 0x8d0);
  FUN_037f26f8();
  FUN_037f26f8();
  lVar4 = in_stack_00000018;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(lVar4,0);
  lVar4 = in_stack_00000010;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(lVar4,0);
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000010 == 0) goto LAB_052e415c;
      uVar5 = *(undefined8 *)(in_stack_00000010 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066cd30c(uVar5,0);
      if ((uVar2 & 1) != 0) {
        if (in_stack_00000010 == 0) goto LAB_052e415c;
        in_stack_00000018 = *(long *)(in_stack_00000010 + 0x20);
      }
    }
  }
  lVar3 = FUN_0528cb7c(0);
  lVar4 = in_stack_00000018;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0xb4) != '\0') {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066cd30c(lVar4,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = FUN_06741378();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar1);
        }
        uVar2 = FUN_066cd30c(uVar5,0);
        if ((uVar2 & 1) != 0) {
          lVar4 = FUN_06741378();
          if (lVar4 == 0) goto LAB_052e415c;
          FUN_037f26f8(lVar4,&stack0x00000018,*puVar6);
        }
      }
    }
    lVar3 = FUN_0528cb7c(0);
    lVar4 = in_stack_00000018;
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0xb5) != '\0') {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar2 = FUN_066cd30c(lVar4,0);
        if ((uVar2 & 1) == 0) {
          in_stack_00000018 = FUN_037f1cb8();
        }
      }
      lVar4 = in_stack_00000018;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066cd30c(lVar4,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (in_stack_00000018 != 0) {
        if (*(char *)(in_stack_00000018 + 0x130) != '\0') {
          if (*(long *)(in_stack_00000018 + 0x128) == 0) goto LAB_052e415c;
          uVar2 = FUN_05241d74();
          if ((uVar2 & 1) == 0) {
            return;
          }
        }
        if (*(long *)(unaff_x20 + 0x88) != 0) {
          uVar2 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                            (*(long *)(unaff_x20 + 0x88),in_stack_00000018,&stack0x00000008,
                             *(undefined8 *)PTR_DAT_06d3da70);
          if ((uVar2 & 1) == 0) {
            lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3c618);
            FUN_05241680(lVar4,*(undefined8 *)PTR_DAT_06d3c8b8);
            in_stack_00000008 = lVar4;
            if (*(long *)(unaff_x20 + 0x88) == 0) goto LAB_052e415c;
            FUN_04c74618(*(long *)(unaff_x20 + 0x88),in_stack_00000018,lVar4,
                         *(undefined8 *)PTR_DAT_06d3da78);
          }
          if ((in_stack_00000008 != 0) &&
             ((*(int *)(in_stack_00000008 + 0x20) != 0 || (FUN_052e1f94(), in_stack_00000008 != 0)))
             ) {
            FUN_05242864();
            return;
          }
        }
      }
    }
  }
LAB_052e415c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


