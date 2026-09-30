/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 050c5018
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050c524c) */
/* WARNING: Removing unreachable block (ram,0x050c5384) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__Dispose(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  long unaff_x19;
  size_t unaff_x20;
  void *__s;
  ulong uVar9;
  void *__s_00;
  size_t unaff_x24;
  long lVar10;
  long lVar11;
  void *__src;
  void *__src_00;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    lVar3 = FUN_04481fb8();
    iVar2 = *(int *)(lVar3 + 0xfc);
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  }
  else {
    iVar2 = (int)unaff_x20;
  }
  lVar10 = (long)&stack0x00000000 - ((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x28) = lVar10;
  uVar1 = *(ushort *)(param_1 + 0x135);
  lVar3 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_04481fb8(param_1);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
    uVar1 = *(ushort *)(lVar3 + 0x135);
  }
  lVar10 = lVar10 - ((ulong)(*(int *)(param_1 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_04481fb8(lVar3);
  }
  lVar11 = lVar10 - ((ulong)(*(int *)(lVar3 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar9 = unaff_x24 + 0xf & 0x1fffffff0;
  __src = (void *)(lVar11 - uVar9);
  uVar8 = unaff_x20 + 0xf & 0x1fffffff0;
  __src_00 = (void *)((long)__src - uVar8);
  __s = (void *)((long)__src_00 - uVar8);
  *(size_t *)(unaff_x29 + -0x30) = unaff_x20;
  memset(__s,0,unaff_x20);
  __s_00 = (void *)((long)__s - uVar9);
  memset(__s_00,0,unaff_x24);
  lVar3 = *(long *)(unaff_x29 + -0x18);
  if (lVar3 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar4 = thunk_FUN_0448520c();
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f27f20);
    FUN_07996cc8(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar4);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1fa18 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *(long *)(unaff_x29 + -0x18);
  }
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))(lVar3);
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x10))(lVar3);
  if (0 < iVar2) {
    puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
    uVar4 = *puVar6;
    *(void **)(unaff_x29 + -0x10) = __src_00;
    (*(code *)puVar6[2])(uVar4,puVar6,lVar3,unaff_x29 + -0x10,__src_00);
    memcpy(__s,__src_00,*(size_t *)(unaff_x29 + -0x30));
    do {
      do {
        uVar8 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58))(__s);
        if ((uVar8 & 1) == 0) goto LAB_050c52dc;
        puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x28);
        uVar4 = *puVar6;
        *(void **)(unaff_x29 + -0x10) = __src;
        (*(code *)puVar6[2])(uVar4,puVar6,__s,unaff_x29 + -0x10,__src);
        memcpy(__s_00,__src,unaff_x24);
        lVar7 = *(long *)(unaff_x19 + 0x38);
        lVar3 = *(long *)(lVar7 + 0x38);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
          lVar7 = *(long *)(unaff_x19 + 0x38);
        }
        FUN_0444872c(lVar3,*(undefined8 *)(lVar7 + 0x40),lVar10,__s_00,0,unaff_x29 + -0x10);
        iVar2 = FUN_078b1e74(*(undefined8 *)(unaff_x29 + -0x10));
      } while (iVar2 != 0);
      lVar7 = *(long *)(unaff_x19 + 0x38);
      lVar3 = *(long *)(lVar7 + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
        lVar7 = *(long *)(unaff_x19 + 0x38);
      }
      FUN_0444872c(lVar3,*(undefined8 *)(lVar7 + 0x48),lVar11,__s_00,0,unaff_x29 + -0x10);
      lVar3 = *(long *)(unaff_x29 + -0x10);
    } while (lVar3 == 0);
    lVar10 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x18);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_07a4ce38(uVar4,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar4,uVar4);
    }
    FUN_07442978(lVar10,uVar4,lVar3,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c52dc:
    lVar10 = *(long *)(unaff_x19 + 0x38);
    lVar3 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
      lVar10 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_0444872c(lVar3,*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(unaff_x29 + -0x28),__s,0,0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


