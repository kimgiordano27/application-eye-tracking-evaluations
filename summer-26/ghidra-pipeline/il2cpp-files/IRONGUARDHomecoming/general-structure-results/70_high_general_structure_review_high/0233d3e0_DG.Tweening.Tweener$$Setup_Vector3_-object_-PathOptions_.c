/*
FUNCTION_NAME: DG.Tweening.Tweener$$Setup<Vector3,-object,-PathOptions>
ENTRY_POINT: 0233d3e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0233d674) */

void DG_Tweening_Tweener__Setup<Vector3,_object,_PathOptions>
               (long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *__s;
  ulong __n;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar10;
  void *__s_00;
  ulong uVar11;
  long alStack_30 [3];
  undefined8 *puStack_18;
  undefined1 auStack_c [4];
  long lStack_8;
  undefined *puVar3;
  
  alStack_30[1] = tpidr_el0;
  lStack_8 = *(long *)(alStack_30[1] + 0x28);
  lVar6 = *(long *)(param_3 + 0x38);
  if (lVar6 == 0) {
    FUN_01ecafa0(param_3);
    lVar6 = *(long *)(param_3 + 0x38);
  }
  uVar5 = *(uint *)(*(long *)(lVar6 + 0x10) + 0xfc);
  uVar11 = (ulong)uVar5;
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0x28) + 0xfc);
  if ((*(byte *)(*(long *)(lVar6 + 0x10) + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
    uVar5 = *(uint *)(lVar6 + 0xfc);
  }
  alStack_30[2] = (long)alStack_30 - ((ulong)(uVar5 + 0x10) + 0xf & 0x1fffffff0);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)(alStack_30[2] - uVar10);
  __dest = (undefined8 *)((long)__src - uVar10);
  uVar8 = uVar11 + 0xf & 0x1fffffff0;
  puVar9 = (undefined8 *)((long)__dest - uVar8);
  __s = (void *)((long)puVar9 - uVar8);
  memset(__s,0,uVar11);
  __s_00 = (void *)((long)__s - uVar10);
  memset(__s_00,0,__n);
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar1 = thunk_FUN_01f117cc();
    puVar3 = Method_Drawing_CommandBuilder_Reserve<CommandBuilder_LineWidthData>__;
  }
  else {
    if (param_2 != 0) {
      puVar4 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 8);
      puStack_18 = puVar9;
      (*(code *)puVar4[2])(*puVar4,puVar4,param_2,&puStack_18,puVar9);
      memcpy(__s,puVar9,uVar11);
      while (uVar11 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x38) + 0x38))(__s),
            (uVar11 & 1) != 0) {
        puVar9 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x18);
        puStack_18 = __src;
        (*(code *)puVar9[2])(*puVar9,puVar9,__s,&puStack_18,__src);
        memcpy(__s_00,__src,__n);
        memcpy(__dest,__s_00,__n);
        puStack_18 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x28) + 0x28)) {
          puStack_18 = (undefined8 *)*__dest;
        }
        puVar9 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x30);
        (*(code *)puVar9[2])(*puVar9,puVar9,param_1,&puStack_18,auStack_c);
      }
      lVar7 = *(long *)(param_3 + 0x38);
      lVar6 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
        lVar7 = *(long *)(param_3 + 0x38);
      }
      FUN_01f09244(lVar6,*(undefined8 *)(lVar7 + 0x40),alStack_30[2],__s,0,0);
      if (*(long *)(alStack_30[1] + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar1 = thunk_FUN_01f117cc();
    puVar3 = Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__;
  }
  uVar2 = thunk_FUN_01efb3a4(puVar3);
  FUN_034efd20(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1,param_3);
}


