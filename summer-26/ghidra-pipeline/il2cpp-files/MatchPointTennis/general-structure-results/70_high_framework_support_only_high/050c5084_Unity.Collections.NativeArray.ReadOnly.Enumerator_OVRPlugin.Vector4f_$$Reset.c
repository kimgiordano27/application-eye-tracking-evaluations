/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$Reset
ENTRY_POINT: 050c5084
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

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__Reset(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int in_w10;
  long in_x11;
  long unaff_x19;
  size_t unaff_x20;
  long lVar7;
  void *__s;
  ulong uVar8;
  void *__s_00;
  size_t unaff_x24;
  long lVar9;
  long lVar10;
  void *__src;
  void *__src_00;
  long unaff_x29;
  
  lVar9 = in_x11 - ((ulong)(in_w10 + 0x10) + 0xf & 0x1fffffff0);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_04481fb8(param_1);
  }
  lVar10 = lVar9 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar8 = unaff_x24 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar10 - uVar8);
  uVar6 = unaff_x20 + 0xf & 0x1fffffff0;
  __src_00 = (void *)((long)__src - uVar6);
  __s = (void *)((long)__src_00 - uVar6);
  *(size_t *)(unaff_x29 + -0x30) = unaff_x20;
  memset(__s,0,unaff_x20);
  __s_00 = (void *)((long)__s - uVar8);
  memset(__s_00,0,unaff_x24);
  lVar7 = *(long *)(unaff_x29 + -0x18);
  if (lVar7 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar2 = thunk_FUN_0448520c();
    uVar3 = thunk_FUN_044adef4(PTR_DAT_09f27f20);
    FUN_07996cc8(uVar2,uVar3,0);
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
    puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
    uVar2 = *puVar4;
    *(void **)(unaff_x29 + -0x10) = __src_00;
    (*(code *)puVar4[2])(uVar2,puVar4,lVar7,unaff_x29 + -0x10,__src_00);
    memcpy(__s,__src_00,*(size_t *)(unaff_x29 + -0x30));
    do {
      do {
        uVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58))(__s);
        if ((uVar6 & 1) == 0) goto LAB_050c52dc;
        puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
        uVar2 = *puVar4;
        *(void **)(unaff_x29 + -0x10) = __src;
        (*(code *)puVar4[2])(uVar2,puVar4,__s,unaff_x29 + -0x10,__src);
        memcpy(__s_00,__src,unaff_x24);
        lVar5 = *(long *)(unaff_x19 + 0x38);
        lVar7 = *(long *)(lVar5 + 0x38);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
          lVar5 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_0444872c(lVar7,*(undefined8 *)(lVar5 + 0x40),lVar9,__s_00,0,unaff_x29 + -0x10);
        iVar1 = FUN_078b1e74(*(undefined8 *)(unaff_x29 + -0x10));
      } while (iVar1 != 0);
      lVar5 = *(long *)(unaff_x19 + 0x38);
      lVar7 = *(long *)(lVar5 + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04481fb8();
        lVar5 = *(long *)(unaff_x19 + 0x38);
      }
      FUN_0444872c(lVar7,*(undefined8 *)(lVar5 + 0x48),lVar10,__s_00,0,unaff_x29 + -0x10);
      lVar7 = *(long *)(unaff_x29 + -0x10);
    } while (lVar7 == 0);
    lVar9 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x18);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_07a4ce38(uVar2,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar2,uVar2);
    }
    FUN_07442978(lVar9,uVar2,lVar7,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c52dc:
    lVar7 = *(long *)(unaff_x19 + 0x38);
    lVar9 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_04481fb8();
      lVar7 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_0444872c(lVar9,*(undefined8 *)(lVar7 + 0x60),*(undefined8 *)(unaff_x29 + -0x28),__s,0,0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


