/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$MoveNext
ENTRY_POINT: 050c5224
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050c524c) */
/* WARNING: Removing unreachable block (ram,0x050c5384) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__MoveNext
               (long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  void *unaff_x23;
  undefined8 uVar6;
  size_t unaff_x24;
  void *unaff_x27;
  long unaff_x29;
  
  do {
    FUN_0444872c(param_1,param_2);
    iVar1 = FUN_078b1e74(*(undefined8 *)(unaff_x29 + -0x10));
    if (iVar1 == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x38);
      lVar3 = *(long *)(lVar5 + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
        lVar5 = *(long *)(unaff_x19 + 0x38);
      }
      FUN_0444872c(lVar3,*(undefined8 *)(lVar5 + 0x48));
      lVar3 = *(long *)(unaff_x29 + -0x10);
      if (lVar3 != 0) {
        lVar5 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x18);
        uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar6 = FUN_07a4ce38(uVar6,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44(uVar6,uVar6);
        }
        FUN_07442978(lVar5,uVar6,lVar3,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c52dc:
        lVar5 = *(long *)(unaff_x19 + 0x38);
        lVar3 = *(long *)(lVar5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
          lVar5 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_0444872c(lVar3,*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)(unaff_x29 + -0x28));
        if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58))();
    if ((uVar2 & 1) == 0) goto LAB_050c52dc;
    puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
    uVar6 = *puVar4;
    *(void **)(unaff_x29 + -0x10) = unaff_x27;
    (*(code *)puVar4[2])(uVar6);
    memcpy(unaff_x23,unaff_x27,unaff_x24);
    lVar3 = *(long *)(unaff_x19 + 0x38);
    param_1 = *(long *)(lVar3 + 0x38);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_04481fb8();
      lVar3 = *(long *)(unaff_x19 + 0x38);
    }
    param_2 = *(undefined8 *)(lVar3 + 0x40);
  } while( true );
}


