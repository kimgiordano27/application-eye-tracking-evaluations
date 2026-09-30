/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4s>$$MoveNext
ENTRY_POINT: 050c5128
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

void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__MoveNext(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  void *unaff_x21;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar7 = *(long *)(unaff_x29 + -0x18);
  if (lVar7 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar2 = thunk_FUN_0448520c();
    uVar4 = thunk_FUN_044adef4(PTR_DAT_09f27f20);
    FUN_07996cc8(uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1fa18 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar7 = *(long *)(unaff_x29 + -0x18);
  }
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))(lVar7);
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(lVar7);
  if (0 < iVar1) {
    puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
    uVar2 = *puVar5;
    *(void **)(unaff_x29 + -0x10) = unaff_x28;
    (*(code *)puVar5[2])(uVar2,puVar5,lVar7,unaff_x29 + -0x10);
    memcpy(unaff_x21,unaff_x28,*(size_t *)(unaff_x29 + -0x30));
    do {
      do {
        uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58))();
        if ((uVar3 & 1) == 0) goto LAB_050c52dc;
        puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
        uVar2 = *puVar5;
        *(void **)(unaff_x29 + -0x10) = unaff_x27;
        (*(code *)puVar5[2])(uVar2);
        memcpy(unaff_x23,unaff_x27,unaff_x24);
        lVar6 = *(long *)(unaff_x19 + 0x38);
        lVar7 = *(long *)(lVar6 + 0x38);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
          lVar6 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_0444872c(lVar7,*(undefined8 *)(lVar6 + 0x40));
        iVar1 = FUN_078b1e74(*(undefined8 *)(unaff_x29 + -0x10));
      } while (iVar1 != 0);
      lVar6 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar6 + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04481fb8();
        lVar6 = *(long *)(unaff_x19 + 0x38);
      }
      FUN_0444872c(lVar7,*(undefined8 *)(lVar6 + 0x48));
      lVar7 = *(long *)(unaff_x29 + -0x10);
    } while (lVar7 == 0);
    lVar6 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x18);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_07a4ce38(uVar2,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar2,uVar2);
    }
    FUN_07442978(lVar6,uVar2,lVar7,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c52dc:
    lVar6 = *(long *)(unaff_x19 + 0x38);
    lVar7 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8();
      lVar6 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_0444872c(lVar7,*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(unaff_x29 + -0x28));
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


