/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 04270538
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int in_w8;
  long *plVar3;
  code *pcVar4;
  undefined8 *unaff_x19;
  long lVar5;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *__dest;
  undefined8 *__dest_00;
  long unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  uVar1 = *param_2;
  if (-1 < in_w8) {
    unaff_x19 = (undefined8 *)*unaff_x19;
  }
  pcVar4 = (code *)param_2[2];
  *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x24);
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
  (*pcVar4)(uVar1);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  memcpy(unaff_x22,unaff_x27,unaff_x21);
  if (lVar5 != 0) {
    __dest_00 = *(undefined8 **)(unaff_x29 + -0x48);
    plVar3 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
    puVar2 = (undefined8 *)plVar3[0x17];
    uVar1 = *puVar2;
    if (-1 < *(int *)(*plVar3 + 0x28)) {
      unaff_x22 = (undefined8 *)*unaff_x22;
    }
    pcVar4 = (code *)puVar2[2];
    *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*pcVar4)(uVar1,puVar2,lVar5,unaff_x29 + -0x20,unaff_x22);
    lVar5 = *(long *)(unaff_x20 + 0x18);
    memcpy(__dest_00,unaff_x28,unaff_x21);
    if (lVar5 != 0) {
      __dest = *(undefined8 **)(unaff_x29 + -0x50);
      plVar3 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
      puVar2 = (undefined8 *)plVar3[0x18];
      uVar1 = *puVar2;
      if (-1 < *(int *)(*plVar3 + 0x28)) {
        __dest_00 = (undefined8 *)*__dest_00;
      }
      pcVar4 = (code *)puVar2[2];
      *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x24);
      *(undefined8 **)(unaff_x29 + -0x20) = __dest_00;
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
      (*pcVar4)(uVar1,puVar2,lVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
      lVar5 = *(long *)(unaff_x20 + 0x18);
      memcpy(__dest,unaff_x27,unaff_x21);
      if (lVar5 != 0) {
        plVar3 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
        puVar2 = (undefined8 *)plVar3[0x18];
        uVar1 = *puVar2;
        if (-1 < *(int *)(*plVar3 + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        pcVar4 = (code *)puVar2[2];
        *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
        *(undefined8 **)(unaff_x29 + -0x20) = __dest;
        *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
        (*pcVar4)(uVar1,puVar2,lVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
        if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
        goto LAB_042706d0;
      }
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_042706d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


