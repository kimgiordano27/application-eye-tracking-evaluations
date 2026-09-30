/*
FUNCTION_NAME: parseTemplateArg
ENTRY_POINT: 01d1c20c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* (anonymous namespace)::itanium_demangle::AbstractManglingParser<(anonymous
   namespace)::itanium_demangle::ManglingParser<(anonymous namespace)::DefaultAllocator>, (anonymous
   namespace)::DefaultAllocator>::parseTemplateArg() */

void __thiscall
(anonymous_namespace)::itanium_demangle::
AbstractManglingParser<(anonymous_namespace)::itanium_demangle::ManglingParser<(anonymous_namespace)::DefaultAllocator>,(anonymous_namespace)::DefaultAllocator>
::parseTemplateArg(AbstractManglingParser<(anonymous_namespace)::itanium_demangle::ManglingParser<(anonymous_namespace)::DefaultAllocator>,(anonymous_namespace)::DefaultAllocator>
                   *this)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  Node *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pcVar6 = *(char **)this;
  pcVar1 = *(char **)(this + 8);
  if (pcVar1 == pcVar6) {
LAB_01d1c298:
    puVar4 = (undefined8 *)parseType(this);
  }
  else {
    cVar2 = *pcVar6;
    if (cVar2 == 'J') {
      pcVar6 = pcVar6 + 1;
      *(char **)this = pcVar6;
      lVar7 = *(long *)(this + 0x10);
      lVar8 = *(long *)(this + 0x18);
      if (pcVar6 == pcVar1) goto LAB_01d1c328;
      while (*pcVar6 != 'E') {
LAB_01d1c328:
        do {
          local_50 = (Node *)parseTemplateArg(this);
          puVar4 = (undefined8 *)0x0;
          if (local_50 == (Node *)0x0) goto LAB_01d1c2a0;
          PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul>::push_back
                    ((PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul> *)
                     (this + 0x10),&local_50);
          pcVar6 = *(char **)this;
        } while (pcVar6 == *(char **)(this + 8));
      }
      lVar7 = (lVar8 - lVar7 >> 3) * 8;
      *(char **)this = pcVar6 + 1;
      auVar10 = makeNodeArray<(anonymous_namespace)::itanium_demangle::Node**>
                          (this,(Node **)(*(long *)(this + 0x10) + lVar7),*(Node ***)(this + 0x18));
      pvVar9 = *(void **)(this + 0x1330);
      *(long *)(this + 0x18) = *(long *)(this + 0x10) + lVar7;
      lVar7 = *(long *)((long)pvVar9 + 8);
      puVar5 = pvVar9;
      if (0xfef < lVar7 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar5 = pvVar9;
        puVar5[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar7 + 0x20;
      puVar4 = (undefined8 *)((long)puVar5 + lVar7 + 0x10);
      *puVar4 = &
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
      ;
      *(undefined4 *)((long)puVar5 + lVar7 + 0x18) = 0x1010121;
      *(undefined1 (*) [16])((long)puVar5 + lVar7 + 0x20) = auVar10;
      goto LAB_01d1c2a0;
    }
    if (cVar2 == 'L') {
      if (((ulong)((long)pcVar1 - (long)pcVar6) < 2) || (pcVar6[1] != 'Z')) {
        puVar4 = (undefined8 *)parseExprPrimary(this);
        goto LAB_01d1c2a0;
      }
      *(char **)this = pcVar6 + 2;
      puVar4 = (undefined8 *)parseEncoding(this);
    }
    else {
      if (cVar2 != 'X') goto LAB_01d1c298;
      *(char **)this = pcVar6 + 1;
      puVar4 = (undefined8 *)parseExpr(this);
    }
    if (puVar4 != (undefined8 *)0x0) {
      pcVar6 = *(char **)this;
      if ((pcVar6 == *(char **)(this + 8)) || (*pcVar6 != 'E')) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        *(char **)this = pcVar6 + 1;
      }
    }
  }
LAB_01d1c2a0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


