/*
FUNCTION_NAME: System.Array.InternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$Dispose
ENTRY_POINT: 042704e4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__Dispose
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 in_w8;
  code *pcVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *puVar5;
  undefined8 unaff_x23;
  undefined8 *__dest;
  long lVar6;
  long unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  *(undefined4 *)(unaff_x29 + -0xc) = in_w8;
  uVar1 = *param_2;
  pcVar3 = (code *)param_2[2];
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
  *(void **)(unaff_x29 + -0x18) = unaff_x22;
  (*pcVar3)(uVar1);
  memcpy(unaff_x28,unaff_x22,unaff_x21);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  memcpy(unaff_x19,unaff_x22,unaff_x21);
  if (lVar6 != 0) {
    puVar5 = *(undefined8 **)(unaff_x29 + -0x40);
    plVar4 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
    puVar2 = (undefined8 *)plVar4[0x17];
    uVar1 = *puVar2;
    if (-1 < *(int *)(*plVar4 + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    pcVar3 = (code *)puVar2[2];
    *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x24);
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
    (*pcVar3)(uVar1,puVar2,lVar6,unaff_x29 + -0x20,unaff_x19);
    lVar6 = *(long *)(unaff_x20 + 0x10);
    memcpy(puVar5,unaff_x27,unaff_x21);
    if (lVar6 != 0) {
      __dest = *(undefined8 **)(unaff_x29 + -0x48);
      plVar4 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
      puVar2 = (undefined8 *)plVar4[0x17];
      uVar1 = *puVar2;
      if (-1 < *(int *)(*plVar4 + 0x28)) {
        puVar5 = (undefined8 *)*puVar5;
      }
      pcVar3 = (code *)puVar2[2];
      *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
      (*pcVar3)(uVar1,puVar2,lVar6,unaff_x29 + -0x20,puVar5);
      lVar6 = *(long *)(unaff_x20 + 0x18);
      memcpy(__dest,unaff_x28,unaff_x21);
      if (lVar6 != 0) {
        puVar5 = *(undefined8 **)(unaff_x29 + -0x50);
        plVar4 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
        puVar2 = (undefined8 *)plVar4[0x18];
        uVar1 = *puVar2;
        if (-1 < *(int *)(*plVar4 + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        pcVar3 = (code *)puVar2[2];
        *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x24);
        *(undefined8 **)(unaff_x29 + -0x20) = __dest;
        *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
        (*pcVar3)(uVar1,puVar2,lVar6,unaff_x29 + -0x20,unaff_x29 + -0xc);
        lVar6 = *(long *)(unaff_x20 + 0x18);
        memcpy(puVar5,unaff_x27,unaff_x21);
        if (lVar6 != 0) {
          plVar4 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
          puVar2 = (undefined8 *)plVar4[0x18];
          uVar1 = *puVar2;
          if (-1 < *(int *)(*plVar4 + 0x28)) {
            puVar5 = (undefined8 *)*puVar5;
          }
          pcVar3 = (code *)puVar2[2];
          *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
          *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
          *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
          (*pcVar3)(uVar1,puVar2,lVar6,unaff_x29 + -0x20,unaff_x29 + -0xc);
          if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
          goto LAB_042706d0;
        }
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


