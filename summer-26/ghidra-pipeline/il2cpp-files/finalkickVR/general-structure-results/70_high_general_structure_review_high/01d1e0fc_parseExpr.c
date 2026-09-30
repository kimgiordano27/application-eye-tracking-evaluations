/*
FUNCTION_NAME: parseExpr
ENTRY_POINT: 01d1e0fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_9
*/


/* (anonymous namespace)::itanium_demangle::AbstractManglingParser<(anonymous
   namespace)::itanium_demangle::ManglingParser<(anonymous namespace)::DefaultAllocator>, (anonymous
   namespace)::DefaultAllocator>::parseExpr() */

undefined8 * __thiscall
(anonymous_namespace)::itanium_demangle::
AbstractManglingParser<(anonymous_namespace)::itanium_demangle::ManglingParser<(anonymous_namespace)::DefaultAllocator>,(anonymous_namespace)::DefaultAllocator>
::parseExpr(AbstractManglingParser<(anonymous_namespace)::itanium_demangle::ManglingParser<(anonymous_namespace)::DefaultAllocator>,(anonymous_namespace)::DefaultAllocator>
            *this)

{
  char *pcVar1;
  char cVar2;
  AbstractManglingParser<(anonymous_namespace)::itanium_demangle::ManglingParser<(anonymous_namespace)::DefaultAllocator>,(anonymous_namespace)::DefaultAllocator>
  AVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined **ppuVar15;
  uint uVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined1 uVar19;
  undefined8 *puVar20;
  long *plVar21;
  void *pvVar22;
  undefined8 *puVar23;
  PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul> *this_00;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  Node *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pcVar17 = *(char **)this;
  pcVar13 = *(char **)(this + 8);
  uVar9 = (long)pcVar13 - (long)pcVar17;
  if (uVar9 < 2) goto LAB_01d1e138;
  cVar2 = *pcVar17;
  if (cVar2 == 'g') {
    if (pcVar17[1] == 's') {
      pcVar17 = pcVar17 + 2;
      uVar9 = (long)pcVar13 - (long)pcVar17;
      *(char **)this = pcVar17;
      if (uVar9 < 2) goto LAB_01d1e138;
      uVar19 = 1;
    }
    else {
      uVar19 = 0;
    }
    cVar2 = *pcVar17;
  }
  else {
    uVar19 = 0;
  }
  switch(cVar2) {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
RootMotion_FinalIK_IKSolverVR__set_rootBone:
    puVar10 = (undefined8 *)parseUnresolvedName(this);
    goto LAB_01d1fa74;
  default:
    puVar10 = (undefined8 *)0x0;
    if ((10 < uVar9) && (cVar2 == 'u')) {
      if (((pcVar17[1] == '8') &&
          ((((pcVar17[2] == '_' && (pcVar17[3] == '_')) && (pcVar17[4] == 'u')) &&
           ((pcVar17[5] == 'u' && (pcVar17[6] == 'i')))))) &&
         ((pcVar17[7] == 'd' &&
          (((pcVar17[8] == 'o' && (pcVar17[9] == 'f')) && (pcVar17[10] == 't')))))) {
        *(char **)this = pcVar17 + 0xb;
        lVar6 = parseType(this);
      }
      else {
        if (((((pcVar17[1] != '8') || (pcVar17[2] != '_')) || (pcVar17[3] != '_')) ||
            ((pcVar17[4] != 'u' || (pcVar17[5] != 'u')))) ||
           ((((pcVar17[6] != 'i' || ((pcVar17[7] != 'd' || (pcVar17[8] != 'o')))) ||
             (pcVar17[9] != 'f')) || (pcVar17[10] != 'z')))) goto LAB_01d1e138;
        *(char **)this = pcVar17 + 0xb;
        lVar6 = parseExpr(this);
      }
      if (lVar6 == 0) goto LAB_01d1e138;
      puVar20 = *(undefined8 **)(this + 0x1330);
      lVar11 = puVar20[1];
      puVar10 = puVar20;
      if (0xfef < lVar11 + 0x20U) {
        puVar10 = malloc(0x1000);
        if (puVar10 == (void *)0x0) goto LAB_01d200bc;
        lVar11 = 0;
        *puVar10 = puVar20;
        puVar10[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar10;
      }
      uVar16 = 0x140;
      lVar5 = lVar11 + 0x20;
      lVar11 = (long)puVar10 + lVar11;
      ppuVar15 = &Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__;
LAB_01d1f5dc:
      puVar10[1] = lVar5;
      puVar10 = (undefined8 *)(lVar11 + 0x10);
      *puVar10 = ppuVar15;
      *(uint *)(lVar11 + 0x18) = uVar16 | 0x1010000;
      *(long *)(lVar11 + 0x20) = lVar6;
    }
    break;
  case 'L':
    puVar10 = (undefined8 *)parseExprPrimary(this);
    goto LAB_01d1fa74;
  case 'T':
    puVar10 = (undefined8 *)parseTemplateParam(this);
    goto LAB_01d1fa74;
  case 'a':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'N':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_009f28d0;
      break;
    default:
      goto code_r0x01d1e140;
    case 'S':
      puVar7 = &DAT_00a2356b;
      goto LAB_01d1fa64;
    case 'a':
      puVar7 = &DAT_00a6cc1c;
      *(char **)this = pcVar17 + 2;
      break;
    case 'd':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar5 = lVar11 + 0x30;
        lVar11 = (long)puVar10 + lVar11;
        puVar7 = &DAT_00a76894;
        goto LAB_01d1f894;
      }
      goto LAB_01d1e138;
    case 'n':
      puVar7 = &DAT_00a76894;
LAB_01d1fa64:
      *(char **)this = pcVar17 + 2;
      puVar8 = puVar7 + 1;
      goto LAB_01d1fa6c;
    case 't':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseType(this);
      goto joined_r0x01d1f3fc;
    case 'z':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
joined_r0x01d1f3fc:
      if (lVar6 == 0) goto LAB_01d1e138;
      pvVar22 = *(void **)(this + 0x1330);
      lVar11 = *(long *)((long)pvVar22 + 8);
      puVar20 = pvVar22;
      if (0xfef < lVar11 + 0x40U) {
        puVar20 = malloc(0x1000);
        if (puVar20 == (void *)0x0) {
LAB_01d200bc:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar11 = 0;
        *puVar20 = pvVar22;
        puVar20[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar20;
      }
      *(long *)((long)puVar20 + 8) = lVar11 + 0x40;
      pcVar17 = "alignof (";
      puVar10 = (undefined8 *)((long)puVar20 + lVar11 + 0x10);
      *puVar10 = &
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
      ;
      *(undefined4 *)((long)puVar20 + lVar11 + 0x18) = 0x1010134;
      pcVar13 = "";
LAB_01d1f694:
      puVar10[2] = pcVar17;
      puVar10[3] = pcVar13;
      puVar10[4] = lVar6;
LAB_01d1f6a0:
      puVar10[5] = &DAT_00a8abaa;
      puVar10[6] = &DAT_00a8abab;
      goto code_r0x01d1e140;
    }
    goto LAB_01d1f340;
  case 'c':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'c':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseType(this);
      if ((lVar6 == 0) || (lVar11 = parseExpr(this), lVar11 == 0)) goto LAB_01d1e138;
      pvVar22 = *(void **)(this + 0x1330);
      lVar5 = *(long *)((long)pvVar22 + 8);
      puVar10 = pvVar22;
      if (0xfef < lVar5 + 0x30U) {
        puVar10 = malloc(0x1000);
        if (puVar10 == (void *)0x0) goto LAB_01d200bc;
        lVar5 = 0;
        *puVar10 = pvVar22;
        puVar10[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar10;
      }
      pcVar17 = "const_cast";
      *(long *)((long)puVar10 + 8) = lVar5 + 0x30;
      puVar10 = (undefined8 *)((long)puVar10 + lVar5 + 0x10);
      *puVar10 = &
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePostValueAsync>d__4>__
      ;
      pcVar13 = "";
LAB_01d1f818:
      *(undefined4 *)(puVar10 + 1) = 0x1010135;
      puVar10[2] = pcVar17;
      puVar10[3] = pcVar13;
      puVar10[4] = lVar6;
      puVar10[5] = lVar11;
      break;
    case 'l':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        lVar11 = *(long *)(this + 0x10);
        lVar5 = *(long *)(this + 0x18);
        while( true ) {
          pcVar17 = *(char **)this;
          if ((pcVar17 != *(char **)(this + 8)) && (*pcVar17 == 'E')) {
            lVar11 = (lVar5 - lVar11 >> 3) * 8;
            *(char **)this = pcVar17 + 1;
            auVar24 = makeNodeArray<(anonymous_namespace)::itanium_demangle::Node**>
                                (this,(Node **)(*(long *)(this + 0x10) + lVar11),
                                 *(Node ***)(this + 0x18));
            puVar20 = *(undefined8 **)(this + 0x1330);
            *(long *)(this + 0x18) = *(long *)(this + 0x10) + lVar11;
            lVar11 = puVar20[1];
            puVar10 = puVar20;
            if (0xfef < lVar11 + 0x30U) {
              puVar10 = malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
              lVar11 = 0;
              *puVar10 = puVar20;
              puVar10[1] = 0;
              *(undefined8 **)(this + 0x1330) = puVar10;
            }
            uVar16 = 0x137;
            lVar5 = lVar11 + 0x30;
            lVar11 = (long)puVar10 + lVar11;
            ppuVar15 = &
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<ReadCharsAsync>d__14>__
            ;
            goto LAB_01d20000;
          }
          local_60 = (Node *)parseExpr(this);
          if (local_60 == (Node *)0x0) break;
          PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul>::push_back
                    ((PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul> *)
                     (this + 0x10),&local_60);
        }
      }
      goto LAB_01d1e138;
    case 'm':
      puVar7 = &DAT_009e67b6;
      goto LAB_01d1fa64;
    case 'o':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar5 = lVar11 + 0x30;
        lVar11 = (long)puVar10 + lVar11;
        puVar7 = &DAT_00a76896;
        goto LAB_01d1f894;
      }
      goto LAB_01d1e138;
    case 'v':
      AVar3 = this[0x308];
      *(char **)this = pcVar17 + 2;
      this[0x308] = (AbstractManglingParser<(anonymous_namespace)::itanium_demangle::ManglingParser<(anonymous_namespace)::DefaultAllocator>,(anonymous_namespace)::DefaultAllocator>
                     )0x0;
      lVar6 = parseType(this);
      this[0x308] = AVar3;
      if (lVar6 == 0) goto LAB_01d1e138;
      pcVar17 = *(char **)this;
      if ((pcVar17 == *(char **)(this + 8)) || (*pcVar17 != '_')) {
        local_60 = (Node *)parseExpr(this);
        if (local_60 == (Node *)0x0) goto LAB_01d1e138;
        pvVar22 = *(void **)(this + 0x1330);
        lVar11 = *(long *)((long)pvVar22 + 8);
        puVar10 = pvVar22;
        if (0xfef < lVar11 + 0x10U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = pvVar22;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        *(long *)((long)puVar10 + 8) = lVar11 + 0x10;
        plVar21 = (long *)((long)puVar10 + lVar11 + 0x10);
        *plVar21 = (long)local_60;
        pvVar22 = *(void **)(this + 0x1330);
        lVar11 = *(long *)((long)pvVar22 + 8);
        puVar20 = pvVar22;
        if (0xfef < lVar11 + 0x30U) {
          puVar20 = malloc(0x1000);
          if (puVar20 == (void *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar20 = pvVar22;
          puVar20[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar20;
        }
        *(long *)((long)puVar20 + 8) = lVar11 + 0x30;
        puVar10 = (undefined8 *)((long)puVar20 + lVar11 + 0x10);
        *puVar10 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_SetException__
        ;
        *(undefined4 *)((long)puVar20 + lVar11 + 0x18) = 0x101013c;
        *(long *)((long)puVar20 + lVar11 + 0x20) = lVar6;
        *(long **)((long)puVar20 + lVar11 + 0x28) = plVar21;
        *(undefined8 *)((long)puVar20 + lVar11 + 0x30) = 1;
      }
      else {
        pcVar17 = pcVar17 + 1;
        *(char **)this = pcVar17;
        lVar11 = *(long *)(this + 0x10);
        lVar5 = *(long *)(this + 0x18);
        if (pcVar17 == *(char **)(this + 8)) goto LAB_01d1ed8c;
        while (*pcVar17 != 'E') {
LAB_01d1ed8c:
          do {
            local_60 = (Node *)parseExpr(this);
            if (local_60 == (Node *)0x0) goto LAB_01d1e138;
            PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul>::push_back
                      ((PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul> *)
                       (this + 0x10),&local_60);
            pcVar17 = *(char **)this;
          } while (pcVar17 == *(char **)(this + 8));
        }
        lVar11 = (lVar5 - lVar11 >> 3) * 8;
        *(char **)this = pcVar17 + 1;
        auVar24 = makeNodeArray<(anonymous_namespace)::itanium_demangle::Node**>
                            (this,(Node **)(*(long *)(this + 0x10) + lVar11),
                             *(Node ***)(this + 0x18));
        puVar20 = *(undefined8 **)(this + 0x1330);
        *(long *)(this + 0x18) = *(long *)(this + 0x10) + lVar11;
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        uVar16 = 0x13c;
        lVar5 = lVar11 + 0x30;
        lVar11 = (long)puVar10 + lVar11;
        ppuVar15 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_SetException__
        ;
LAB_01d20000:
        puVar10[1] = lVar5;
        puVar10 = (undefined8 *)(lVar11 + 0x10);
        *puVar10 = ppuVar15;
        *(uint *)(lVar11 + 0x18) = uVar16 | 0x1010000;
        *(long *)(lVar11 + 0x20) = lVar6;
        *(undefined1 (*) [16])(lVar11 + 0x28) = auVar24;
      }
    }
    break;
  case 'd':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'V':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_009c4b64;
      goto LAB_01d1f340;
    case 'a':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 == 0) goto LAB_01d1e138;
      pvVar22 = *(void **)(this + 0x1330);
      lVar11 = *(long *)((long)pvVar22 + 8);
      puVar20 = pvVar22;
      if (0xfef < lVar11 + 0x20U) {
        puVar20 = malloc(0x1000);
        if (puVar20 == (void *)0x0) goto LAB_01d200bc;
        lVar11 = 0;
        *puVar20 = pvVar22;
        puVar20[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar20;
      }
      *(long *)((long)puVar20 + 8) = lVar11 + 0x20;
      puVar10 = (undefined8 *)((long)puVar20 + lVar11 + 0x10);
      *puVar10 = &
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<GeoIPResponse>_Start<ConsentTracker_<CheckGeoIP>d__19>__
      ;
      *(undefined4 *)((long)puVar20 + lVar11 + 0x18) = 0x1010139;
      *(long *)((long)puVar20 + lVar11 + 0x20) = lVar6;
      *(undefined1 *)((long)puVar20 + lVar11 + 0x28) = uVar19;
      *(undefined1 *)((long)puVar20 + lVar11 + 0x29) = 1;
      break;
    case 'c':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseType(this);
      if ((lVar6 != 0) && (lVar11 = parseExpr(this), lVar11 != 0)) {
        pvVar22 = *(void **)(this + 0x1330);
        lVar5 = *(long *)((long)pvVar22 + 8);
        puVar10 = pvVar22;
        if (0xfef < lVar5 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar5 = 0;
          *puVar10 = pvVar22;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        pcVar17 = "dynamic_cast";
        *(long *)((long)puVar10 + 8) = lVar5 + 0x30;
        puVar10 = (undefined8 *)((long)puVar10 + lVar5 + 0x10);
        *puVar10 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePostValueAsync>d__4>__
        ;
        pcVar13 = "";
        goto LAB_01d1f818;
      }
      goto LAB_01d1e138;
    case 'e':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar5 = lVar11 + 0x30;
        lVar11 = (long)puVar10 + lVar11;
        puVar7 = &DAT_009e02f0;
        goto LAB_01d1f894;
      }
      goto LAB_01d1e138;
    case 'l':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 == 0) goto LAB_01d1e138;
      pvVar22 = *(void **)(this + 0x1330);
      lVar11 = *(long *)((long)pvVar22 + 8);
      puVar20 = pvVar22;
      if (0xfef < lVar11 + 0x20U) {
        puVar20 = malloc(0x1000);
        if (puVar20 == (void *)0x0) goto LAB_01d200bc;
        lVar11 = 0;
        *puVar20 = pvVar22;
        puVar20[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar20;
      }
      *(long *)((long)puVar20 + 8) = lVar11 + 0x20;
      puVar10 = (undefined8 *)((long)puVar20 + lVar11 + 0x10);
      *puVar10 = &
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<GeoIPResponse>_Start<ConsentTracker_<CheckGeoIP>d__19>__
      ;
      *(undefined4 *)((long)puVar20 + lVar11 + 0x18) = 0x1010139;
      *(long *)((long)puVar20 + lVar11 + 0x20) = lVar6;
      *(undefined1 *)((long)puVar20 + lVar11 + 0x28) = uVar19;
      *(undefined1 *)((long)puVar20 + lVar11 + 0x29) = 0;
      break;
    case 'n':
      goto RootMotion_FinalIK_IKSolverVR__set_rootBone;
    case 's':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if ((lVar6 == 0) || (lVar11 = parseExpr(this), lVar11 == 0)) goto LAB_01d1e138;
      puVar20 = *(undefined8 **)(this + 0x1330);
      lVar5 = puVar20[1];
      puVar10 = puVar20;
      if (0xfef < lVar5 + 0x30U) {
        puVar10 = malloc(0x1000);
        if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
        lVar5 = 0;
        *puVar10 = puVar20;
        puVar10[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar10;
      }
      lVar12 = (long)puVar10 + lVar5;
      puVar18 = &UNK_00a164a9;
LAB_01d1f9ac:
      puVar10[1] = lVar5 + 0x30;
      puVar10 = (undefined8 *)(lVar12 + 0x10);
      *puVar10 = &
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetStateMachine__
      ;
      puVar14 = puVar18 + 2;
LAB_01d1fa44:
      *(undefined4 *)(puVar10 + 1) = 0x1010133;
      puVar10[2] = lVar6;
      puVar10[3] = puVar18;
      puVar10[4] = puVar14;
      puVar10[5] = lVar11;
      break;
    case 't':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if ((lVar6 != 0) && (lVar11 = parseExpr(this), lVar11 != 0)) {
        pvVar22 = *(void **)(this + 0x1330);
        lVar5 = *(long *)((long)pvVar22 + 8);
        puVar10 = pvVar22;
        if (0xfef < lVar5 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar5 = 0;
          *puVar10 = pvVar22;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        puVar18 = &DAT_0099be61;
        *(long *)((long)puVar10 + 8) = lVar5 + 0x30;
        puVar10 = (undefined8 *)((long)puVar10 + lVar5 + 0x10);
        *puVar10 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetStateMachine__
        ;
        puVar14 = &DAT_0099be62;
        goto LAB_01d1fa44;
      }
      goto LAB_01d1e138;
    case 'v':
      puVar7 = &DAT_0099e6d9;
      goto LAB_01d1fa64;
    }
    break;
  case 'e':
    cVar2 = pcVar17[1];
    if (cVar2 == 'O') {
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a0ab9e;
    }
    else {
      if (cVar2 != 'q') {
        if (cVar2 == 'o') {
          puVar7 = &DAT_00a293fb;
          goto LAB_01d1fa64;
        }
        goto LAB_01d1e138;
      }
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a0aba1;
    }
    goto LAB_01d1f340;
  case 'f':
    if ((pcVar17[1] == 'p') ||
       (((2 < uVar9 && (pcVar17[1] == 'L')) && ((byte)pcVar17[2] - 0x30 < 10)))) {
      puVar10 = (undefined8 *)parseFunctionParam(this);
    }
    else {
      puVar10 = (undefined8 *)parseFoldExpr(this);
    }
    goto LAB_01d1fa74;
  case 'g':
    if (pcVar17[1] == 't') {
      puVar7 = &DAT_00a0aba4;
      goto LAB_01d1fa64;
    }
    if (pcVar17[1] == 'e') {
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00999e52;
      goto LAB_01d1f340;
    }
    goto LAB_01d1e138;
  case 'i':
    if (pcVar17[1] != 'l') {
      if (pcVar17[1] == 'x') {
        *(char **)this = pcVar17 + 2;
        lVar6 = parseExpr(this);
        if ((lVar6 != 0) && (lVar11 = parseExpr(this), lVar11 != 0)) {
          pvVar22 = *(void **)(this + 0x1330);
          lVar5 = *(long *)((long)pvVar22 + 8);
          puVar20 = pvVar22;
          if (0xfef < lVar5 + 0x20U) {
            puVar20 = malloc(0x1000);
            if (puVar20 == (void *)0x0) goto LAB_01d200bc;
            lVar5 = 0;
            *puVar20 = pvVar22;
            puVar20[1] = 0;
            *(undefined8 **)(this + 0x1330) = puVar20;
          }
          *(long *)((long)puVar20 + 8) = lVar5 + 0x20;
          puVar10 = (undefined8 *)((long)puVar20 + lVar5 + 0x10);
          *puVar10 = &
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JRaw>_SetResult__
          ;
          *(undefined4 *)((long)puVar20 + lVar5 + 0x18) = 0x1010130;
          *(long *)((long)puVar20 + lVar5 + 0x20) = lVar6;
          *(long *)((long)puVar20 + lVar5 + 0x28) = lVar11;
          break;
        }
      }
      goto LAB_01d1e138;
    }
    pcVar17 = pcVar17 + 2;
    *(char **)this = pcVar17;
    lVar6 = *(long *)(this + 0x10);
    lVar11 = *(long *)(this + 0x18);
    if (pcVar17 == pcVar13) goto LAB_01d1e9a8;
    while (*pcVar17 != 'E') {
LAB_01d1e9a8:
      do {
        local_60 = (Node *)parseBracedExpr(this);
        if (local_60 == (Node *)0x0) goto LAB_01d1e138;
        PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul>::push_back
                  ((PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul> *)
                   (this + 0x10),&local_60);
        pcVar17 = *(char **)this;
      } while (pcVar17 == *(char **)(this + 8));
    }
    lVar6 = (lVar11 - lVar6 >> 3) * 8;
    *(char **)this = pcVar17 + 1;
    auVar24 = makeNodeArray<(anonymous_namespace)::itanium_demangle::Node**>
                        (this,(Node **)(*(long *)(this + 0x10) + lVar6),*(Node ***)(this + 0x18));
    pvVar22 = *(void **)(this + 0x1330);
    *(long *)(this + 0x18) = *(long *)(this + 0x10) + lVar6;
    lVar6 = *(long *)((long)pvVar22 + 8);
    puVar20 = pvVar22;
    if (0xfef < lVar6 + 0x30U) {
      puVar20 = malloc(0x1000);
      if (puVar20 == (void *)0x0) goto LAB_01d200bc;
      lVar6 = 0;
      *puVar20 = pvVar22;
      puVar20[1] = 0;
      *(undefined8 **)(this + 0x1330) = puVar20;
    }
    *(long *)((long)puVar20 + 8) = lVar6 + 0x30;
    puVar10 = (undefined8 *)((long)puVar20 + lVar6 + 0x10);
    *puVar10 = &
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
    ;
    *(undefined4 *)((long)puVar20 + lVar6 + 0x18) = 0x101013d;
    *(undefined8 *)((long)puVar20 + lVar6 + 0x20) = 0;
    *(undefined1 (*) [16])((long)puVar20 + lVar6 + 0x28) = auVar24;
    break;
  case 'l':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'S':
      puVar7 = &UNK_00a34b21;
LAB_01d1f0f4:
      *(char **)this = pcVar17 + 2;
      puVar8 = puVar7 + 3;
      goto LAB_01d1fa6c;
    default:
      goto code_r0x01d1e140;
    case 'e':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a5a15b;
      break;
    case 's':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a4760f;
      break;
    case 't':
      puVar7 = &DAT_0099007c;
      goto LAB_01d1fa64;
    }
    goto LAB_01d1f340;
  case 'm':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'I':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_009c4b67;
      goto LAB_01d1f340;
    case 'L':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_009e926a;
      goto LAB_01d1f340;
    case 'i':
      puVar7 = &DAT_009ce1d7;
      goto LAB_01d1fa64;
    case 'l':
      puVar7 = &DAT_009e02f0;
      goto LAB_01d1fa64;
    case 'm':
      pcVar1 = pcVar17 + 2;
      *(char **)this = pcVar1;
      if ((pcVar1 == pcVar13) || (*pcVar1 != '_')) {
        lVar6 = parseExpr(this);
        if (lVar6 == 0) goto LAB_01d1e138;
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar5 = (long)puVar10 + lVar11;
        puVar7 = &DAT_00a8abac;
LAB_01d1fb04:
        puVar10[1] = lVar11 + 0x30;
        puVar10 = (undefined8 *)(lVar5 + 0x10);
        *puVar10 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
        ;
        *(undefined4 *)(lVar5 + 0x18) = 0x1010131;
        *(long *)(lVar5 + 0x20) = lVar6;
        *(undefined **)(lVar5 + 0x28) = puVar7;
        *(undefined **)(lVar5 + 0x30) = puVar7 + 2;
      }
      else {
        *(char **)this = pcVar17 + 3;
        lVar6 = parseExpr(this);
        if (lVar6 == 0) goto LAB_01d1e138;
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar5 = (long)puVar10 + lVar11;
        puVar7 = &DAT_00a8abac;
LAB_01d1f188:
        puVar10[1] = lVar11 + 0x30;
        puVar10 = (undefined8 *)(lVar5 + 0x10);
        *puVar10 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
        ;
        puVar8 = puVar7 + 2;
LAB_01d1f8a0:
        *(undefined4 *)(puVar10 + 1) = 0x101013a;
        puVar10[2] = puVar7;
        puVar10[3] = puVar8;
        puVar10[4] = lVar6;
      }
    }
    break;
  case 'n':
    cVar2 = pcVar17[1];
    puVar10 = (undefined8 *)0x0;
    switch(cVar2) {
    case 'a':
    case 'w':
      if ((cVar2 == 'w') || (cVar2 == 'a')) {
        pcVar17 = pcVar17 + 2;
        *(char **)this = pcVar17;
        this_00 = (PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul> *)
                  (this + 0x10);
        lVar6 = *(long *)this_00;
        lVar11 = *(long *)(this + 0x18);
        if (pcVar17 == pcVar13) goto LAB_01d1e370;
        while (*pcVar17 != '_') {
LAB_01d1e370:
          do {
            local_60 = (Node *)parseExpr(this);
            if (local_60 == (Node *)0x0) goto LAB_01d1e138;
            PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul>::push_back
                      (this_00,&local_60);
            pcVar17 = *(char **)this;
          } while (pcVar17 == *(char **)(this + 8));
        }
        lVar6 = (lVar11 - lVar6 >> 3) * 8;
        *(char **)this = pcVar17 + 1;
        auVar24 = makeNodeArray<(anonymous_namespace)::itanium_demangle::Node**>
                            (this,(Node **)(*(long *)(this + 0x10) + lVar6),*(Node ***)(this + 0x18)
                            );
        *(long *)(this + 0x18) = *(long *)(this + 0x10) + lVar6;
        lVar6 = parseType(this);
        if (lVar6 != 0) {
          pcVar17 = *(char **)this;
          pcVar13 = *(char **)(this + 8);
          if ((((ulong)((long)pcVar13 - (long)pcVar17) < 2) || (*pcVar17 != 'p')) ||
             (pcVar17[1] != 'i')) {
            if ((pcVar17 == pcVar13) || (*pcVar17 != 'E')) break;
            pvVar22 = *(void **)(this + 0x1330);
            *(char **)this = pcVar17 + 1;
            lVar11 = *(long *)((long)pvVar22 + 8);
            puVar20 = pvVar22;
            if (0xfef < lVar11 + 0x40U) {
              puVar20 = malloc(0x1000);
              if (puVar20 == (void *)0x0) goto LAB_01d200bc;
              lVar11 = 0;
              *puVar20 = pvVar22;
              puVar20[1] = 0;
              *(undefined8 **)(this + 0x1330) = puVar20;
            }
            *(long *)((long)puVar20 + 8) = lVar11 + 0x40;
            puVar10 = (undefined8 *)((long)puVar20 + lVar11 + 0x10);
            *puVar10 = &
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_SetResult__
            ;
            *(undefined4 *)((long)puVar20 + lVar11 + 0x18) = 0x1010138;
            *(undefined1 (*) [16])((long)puVar20 + lVar11 + 0x20) = auVar24;
            *(undefined8 *)((long)puVar20 + lVar11 + 0x38) = 0;
            *(undefined8 *)((long)puVar20 + lVar11 + 0x40) = 0;
            *(long *)((long)puVar20 + lVar11 + 0x30) = lVar6;
            *(undefined1 *)((long)puVar20 + lVar11 + 0x48) = 0;
            *(bool *)((long)puVar20 + lVar11 + 0x49) = cVar2 == 'a';
          }
          else {
            lVar11 = *(long *)(this + 0x10);
            lVar5 = *(long *)(this + 0x18);
            pcVar17 = pcVar17 + 2;
            *(char **)this = pcVar17;
            if (pcVar17 == pcVar13) goto LAB_01d1fbb4;
            while (*pcVar17 != 'E') {
LAB_01d1fbb4:
              do {
                local_60 = (Node *)parseExpr(this);
                if (local_60 == (Node *)0x0) goto LAB_01d1e138;
                PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul>::push_back
                          (this_00,&local_60);
                pcVar17 = *(char **)this;
              } while (pcVar17 == *(char **)(this + 8));
            }
            lVar11 = (lVar5 - lVar11 >> 3) * 8;
            *(char **)this = pcVar17 + 1;
            auVar25 = makeNodeArray<(anonymous_namespace)::itanium_demangle::Node**>
                                (this,(Node **)(*(long *)(this + 0x10) + lVar11),
                                 *(Node ***)(this + 0x18));
            pvVar22 = *(void **)(this + 0x1330);
            *(long *)(this + 0x18) = *(long *)(this + 0x10) + lVar11;
            lVar11 = *(long *)((long)pvVar22 + 8);
            puVar20 = pvVar22;
            if (0xfef < lVar11 + 0x40U) {
              puVar20 = malloc(0x1000);
              if (puVar20 == (void *)0x0) goto LAB_01d200bc;
              lVar11 = 0;
              *puVar20 = pvVar22;
              puVar20[1] = 0;
              *(undefined8 **)(this + 0x1330) = puVar20;
            }
            *(long *)((long)puVar20 + 8) = lVar11 + 0x40;
            puVar10 = (undefined8 *)((long)puVar20 + lVar11 + 0x10);
            *puVar10 = &
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_SetResult__
            ;
            *(undefined4 *)((long)puVar20 + lVar11 + 0x18) = 0x1010138;
            *(undefined1 (*) [16])((long)puVar20 + lVar11 + 0x20) = auVar24;
            *(long *)((long)puVar20 + lVar11 + 0x30) = lVar6;
            *(undefined1 (*) [16])((long)puVar20 + lVar11 + 0x38) = auVar25;
            *(undefined1 *)((long)puVar20 + lVar11 + 0x48) = 0;
            *(bool *)((long)puVar20 + lVar11 + 0x49) = cVar2 == 'a';
          }
          goto code_r0x01d1e140;
        }
      }
      break;
    default:
      goto code_r0x01d1e140;
    case 'e':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a4f1e2;
      goto LAB_01d1f340;
    case 'g':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar5 = lVar11 + 0x30;
        lVar11 = (long)puVar10 + lVar11;
        puVar7 = &DAT_009ce1d7;
LAB_01d1f894:
        puVar10[1] = lVar5;
        puVar10 = (undefined8 *)(lVar11 + 0x10);
        *puVar10 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
        ;
        puVar8 = puVar7 + 1;
        goto LAB_01d1f8a0;
      }
      break;
    case 't':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar5 = lVar11 + 0x30;
        lVar11 = (long)puVar10 + lVar11;
        puVar7 = &DAT_00a027a3;
        goto LAB_01d1f894;
      }
      break;
    case 'x':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 == 0) break;
      pvVar22 = *(void **)(this + 0x1330);
      lVar11 = *(long *)((long)pvVar22 + 8);
      puVar20 = pvVar22;
      if (0xfef < lVar11 + 0x40U) {
        puVar20 = malloc(0x1000);
        if (puVar20 == (void *)0x0) goto LAB_01d200bc;
        lVar11 = 0;
        *puVar20 = pvVar22;
        puVar20[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar20;
      }
      *(long *)((long)puVar20 + 8) = lVar11 + 0x40;
      pcVar17 = "noexcept (";
      puVar10 = (undefined8 *)((long)puVar20 + lVar11 + 0x10);
      *puVar10 = &
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
      ;
      *(undefined4 *)((long)puVar20 + lVar11 + 0x18) = 0x1010134;
      pcVar13 = "";
      goto LAB_01d1f694;
    }
    goto LAB_01d1e138;
  case 'o':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'R':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a293fd;
      break;
    default:
      goto code_r0x01d1e140;
    case 'n':
      goto RootMotion_FinalIK_IKSolverVR__set_rootBone;
    case 'o':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a2356d;
      break;
    case 'r':
      puVar7 = &DAT_00a6cc1f;
      goto LAB_01d1fa64;
    }
    goto LAB_01d1f340;
  case 'p':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'L':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a1d511;
      goto LAB_01d1f340;
    default:
      goto code_r0x01d1e140;
    case 'l':
      puVar7 = &DAT_00a29400;
      goto LAB_01d1fa64;
    case 'm':
      puVar7 = &UNK_009f28d3;
      goto LAB_01d1f0f4;
    case 'p':
      pcVar1 = pcVar17 + 2;
      *(char **)this = pcVar1;
      if ((pcVar1 == pcVar13) || (*pcVar1 != '_')) {
        lVar6 = parseExpr(this);
        if (lVar6 != 0) {
          puVar20 = *(undefined8 **)(this + 0x1330);
          lVar11 = puVar20[1];
          puVar10 = puVar20;
          if (0xfef < lVar11 + 0x30U) {
            puVar10 = malloc(0x1000);
            if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
            lVar11 = 0;
            *puVar10 = puVar20;
            puVar10[1] = 0;
            *(undefined8 **)(this + 0x1330) = puVar10;
          }
          lVar5 = (long)puVar10 + lVar11;
          puVar7 = &DAT_0099007e;
          goto LAB_01d1fb04;
        }
      }
      else {
        *(char **)this = pcVar17 + 3;
        lVar6 = parseExpr(this);
        if (lVar6 != 0) {
          puVar20 = *(undefined8 **)(this + 0x1330);
          lVar11 = puVar20[1];
          puVar10 = puVar20;
          if (0xfef < lVar11 + 0x30U) {
            puVar10 = malloc(0x1000);
            if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
            lVar11 = 0;
            *puVar10 = puVar20;
            puVar10[1] = 0;
            *(undefined8 **)(this + 0x1330) = puVar10;
          }
          lVar5 = (long)puVar10 + lVar11;
          puVar7 = &DAT_0099007e;
          goto LAB_01d1f188;
        }
      }
      break;
    case 's':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar5 = lVar11 + 0x30;
        lVar11 = (long)puVar10 + lVar11;
        puVar7 = &DAT_00a29400;
        goto LAB_01d1f894;
      }
      break;
    case 't':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if ((lVar6 != 0) && (lVar11 = parseExpr(this), lVar11 != 0)) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar5 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar5 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar5 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        lVar12 = (long)puVar10 + lVar5;
        puVar18 = &DAT_00a3eaa8;
        goto LAB_01d1f9ac;
      }
    }
    goto LAB_01d1e138;
  case 'q':
    if (pcVar17[1] == 'u') {
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if ((lVar6 != 0) && (lVar11 = parseExpr(this), lVar11 != 0)) {
        lVar5 = parseExpr(this);
        auVar24._8_8_ = lVar5;
        auVar24._0_8_ = lVar11;
        if (lVar5 != 0) {
          puVar20 = *(undefined8 **)(this + 0x1330);
          lVar11 = puVar20[1];
          puVar10 = puVar20;
          if (0xfef < lVar11 + 0x30U) {
            puVar10 = malloc(0x1000);
            if (puVar10 == (void *)0x0) goto LAB_01d200bc;
            lVar11 = 0;
            *puVar10 = puVar20;
            puVar10[1] = 0;
            *(undefined8 **)(this + 0x1330) = puVar10;
          }
          uVar16 = 0x132;
          lVar5 = lVar11 + 0x30;
          lVar11 = (long)puVar10 + lVar11;
          ppuVar15 = &
                     Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_CaptureInitialValue__
          ;
          goto LAB_01d20000;
        }
      }
    }
    goto LAB_01d1e138;
  case 'r':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'M':
      *(char **)this = pcVar17 + 2;
      puVar7 = &UNK_00a5a15e;
      break;
    default:
      goto code_r0x01d1e140;
    case 'S':
      puVar7 = &DAT_00a1d514;
      goto LAB_01d1f0f4;
    case 'c':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseType(this);
      if ((lVar6 != 0) && (lVar11 = parseExpr(this), lVar11 != 0)) {
        pvVar22 = *(void **)(this + 0x1330);
        lVar5 = *(long *)((long)pvVar22 + 8);
        puVar10 = pvVar22;
        if (0xfef < lVar5 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar5 = 0;
          *puVar10 = pvVar22;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        pcVar17 = "reinterpret_cast";
        *(long *)((long)puVar10 + 8) = lVar5 + 0x30;
        puVar10 = (undefined8 *)((long)puVar10 + lVar5 + 0x10);
        *puVar10 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePostValueAsync>d__4>__
        ;
        pcVar13 = "";
        goto LAB_01d1f818;
      }
      goto LAB_01d1e138;
    case 'm':
      puVar7 = &DAT_00aa367d;
      goto LAB_01d1fa64;
    case 's':
      *(char **)this = pcVar17 + 2;
      puVar7 = &DAT_009ab8aa;
    }
LAB_01d1f340:
    puVar8 = puVar7 + 2;
LAB_01d1fa6c:
    puVar10 = (undefined8 *)parseBinaryExpr(this,puVar7,puVar8);
LAB_01d1fa74:
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return puVar10;
    }
    goto LAB_01d200c0;
  case 's':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'P':
      pcVar17 = pcVar17 + 2;
      *(char **)this = pcVar17;
      lVar6 = *(long *)(this + 0x10);
      lVar11 = *(long *)(this + 0x18);
      if (pcVar17 == pcVar13) goto LAB_01d1e730;
      while (*pcVar17 != 'E') {
LAB_01d1e730:
        do {
          local_60 = (Node *)parseTemplateArg(this);
          if (local_60 == (Node *)0x0) goto LAB_01d1e138;
          PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul>::push_back
                    ((PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul> *)
                     (this + 0x10),&local_60);
          pcVar17 = *(char **)this;
        } while (pcVar17 == *(char **)(this + 8));
      }
      lVar6 = (lVar11 - lVar6 >> 3) * 8;
      *(char **)this = pcVar17 + 1;
      auVar24 = makeNodeArray<(anonymous_namespace)::itanium_demangle::Node**>
                          (this,(Node **)(*(long *)(this + 0x10) + lVar6),*(Node ***)(this + 0x18));
      pvVar22 = *(void **)(this + 0x1330);
      *(long *)(this + 0x18) = *(long *)(this + 0x10) + lVar6;
      lVar6 = *(long *)((long)pvVar22 + 8);
      puVar10 = pvVar22;
      if (0xfef < lVar6 + 0x20U) {
        puVar10 = malloc(0x1000);
        if (puVar10 == (void *)0x0) goto LAB_01d200bc;
        lVar6 = 0;
        *puVar10 = pvVar22;
        puVar10[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar10;
      }
      *(long *)((long)puVar10 + 8) = lVar6 + 0x20;
      puVar23 = (undefined8 *)((long)puVar10 + lVar6 + 0x10);
      *puVar23 = &
                 Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
      ;
      *(undefined4 *)((long)puVar10 + lVar6 + 0x18) = 0x1010100;
      *(undefined1 (*) [16])((long)puVar10 + lVar6 + 0x20) = auVar24;
      pvVar22 = *(void **)(this + 0x1330);
      lVar6 = *(long *)((long)pvVar22 + 8);
      puVar20 = pvVar22;
      if (0xfef < lVar6 + 0x40U) {
        puVar20 = malloc(0x1000);
        if (puVar20 == (void *)0x0) goto LAB_01d200bc;
        lVar6 = 0;
        *puVar20 = pvVar22;
        puVar20[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar20;
      }
      *(long *)((long)puVar20 + 8) = lVar6 + 0x40;
      puVar10 = (undefined8 *)((long)puVar20 + lVar6 + 0x10);
      *puVar10 = &
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
      ;
      *(undefined4 *)((long)puVar20 + lVar6 + 0x18) = 0x1010134;
      *(char **)((long)puVar20 + lVar6 + 0x20) = "sizeof... (";
      *(char **)((long)puVar20 + lVar6 + 0x28) = "";
      *(undefined8 **)((long)puVar20 + lVar6 + 0x30) = puVar23;
      goto LAB_01d1f6a0;
    default:
      goto code_r0x01d1e140;
    case 'Z':
      pcVar17 = pcVar17 + 2;
      *(char **)this = pcVar17;
      if (pcVar13 != pcVar17) {
        if (*pcVar17 == 'f') {
          lVar6 = parseFunctionParam(this);
          if (lVar6 != 0) {
            pvVar22 = *(void **)(this + 0x1330);
            lVar11 = *(long *)((long)pvVar22 + 8);
            puVar20 = pvVar22;
            if (0xfef < lVar11 + 0x40U) {
              puVar20 = malloc(0x1000);
              if (puVar20 == (void *)0x0) goto LAB_01d200bc;
              lVar11 = 0;
              *puVar20 = pvVar22;
              puVar20[1] = 0;
              *(undefined8 **)(this + 0x1330) = puVar20;
            }
            *(long *)((long)puVar20 + 8) = lVar11 + 0x40;
            pcVar17 = "sizeof... (";
            puVar10 = (undefined8 *)((long)puVar20 + lVar11 + 0x10);
            *puVar10 = &
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
            ;
            *(undefined4 *)((long)puVar20 + lVar11 + 0x18) = 0x1010134;
            pcVar13 = "";
            goto LAB_01d1f694;
          }
        }
        else if ((*pcVar17 == 'T') && (lVar6 = parseTemplateParam(this), lVar6 != 0)) {
          puVar20 = *(undefined8 **)(this + 0x1330);
          lVar11 = puVar20[1];
          puVar10 = puVar20;
          if (0xfef < lVar11 + 0x20U) {
            puVar10 = malloc(0x1000);
            if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
            lVar11 = 0;
            *puVar10 = puVar20;
            puVar10[1] = 0;
            *(undefined8 **)(this + 0x1330) = puVar10;
          }
          uVar16 = 0x136;
          lVar5 = lVar11 + 0x20;
          lVar11 = (long)puVar10 + lVar11;
          ppuVar15 = &
                     Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_BaseAffordanceTheme<float2>__ctor__
          ;
          goto LAB_01d1f5dc;
        }
      }
      break;
    case 'c':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseType(this);
      if ((lVar6 != 0) && (lVar11 = parseExpr(this), lVar11 != 0)) {
        pvVar22 = *(void **)(this + 0x1330);
        lVar5 = *(long *)((long)pvVar22 + 8);
        puVar10 = pvVar22;
        if (0xfef < lVar5 + 0x30U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (void *)0x0) goto LAB_01d200bc;
          lVar5 = 0;
          *puVar10 = pvVar22;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        pcVar17 = "static_cast";
        *(long *)((long)puVar10 + 8) = lVar5 + 0x30;
        puVar10 = (undefined8 *)((long)puVar10 + lVar5 + 0x10);
        *puVar10 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePostValueAsync>d__4>__
        ;
        pcVar13 = "";
        goto LAB_01d1f818;
      }
      break;
    case 'p':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x20U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        uVar16 = 0x122;
        lVar5 = lVar11 + 0x20;
        lVar11 = (long)puVar10 + lVar11;
        ppuVar15 = &
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
        ;
        goto LAB_01d1f5dc;
      }
      break;
    case 'r':
      goto RootMotion_FinalIK_IKSolverVR__set_rootBone;
    case 't':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseType(this);
      goto joined_r0x01d1f624;
    case 'z':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
joined_r0x01d1f624:
      if (lVar6 == 0) break;
      pvVar22 = *(void **)(this + 0x1330);
      lVar11 = *(long *)((long)pvVar22 + 8);
      puVar10 = pvVar22;
      if (0xfef < lVar11 + 0x40U) {
        puVar10 = malloc(0x1000);
        if (puVar10 == (void *)0x0) goto LAB_01d200bc;
        lVar11 = 0;
        *puVar10 = pvVar22;
        puVar10[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar10;
      }
      *(long *)((long)puVar10 + 8) = lVar11 + 0x40;
      lVar11 = (long)puVar10 + lVar11;
      pcVar17 = "sizeof (";
LAB_01d1f680:
      puVar10 = (undefined8 *)(lVar11 + 0x10);
      *puVar10 = &
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
      ;
      *(undefined4 *)(lVar11 + 0x18) = 0x1010134;
      pcVar13 = pcVar17 + 8;
      goto LAB_01d1f694;
    }
LAB_01d1e138:
    puVar10 = (undefined8 *)0x0;
    break;
  case 't':
    puVar10 = (undefined8 *)0x0;
    switch(pcVar17[1]) {
    case 'e':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      goto joined_r0x01d1ea90;
    case 'i':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseType(this);
joined_r0x01d1ea90:
      if (lVar6 == 0) goto LAB_01d1e138;
      pvVar22 = *(void **)(this + 0x1330);
      lVar11 = *(long *)((long)pvVar22 + 8);
      puVar10 = pvVar22;
      if (0xfef < lVar11 + 0x40U) {
        puVar10 = malloc(0x1000);
        if (puVar10 == (void *)0x0) goto LAB_01d200bc;
        lVar11 = 0;
        *puVar10 = pvVar22;
        puVar10[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar10;
      }
      *(long *)((long)puVar10 + 8) = lVar11 + 0x40;
      lVar11 = (long)puVar10 + lVar11;
      pcVar17 = "typeid (";
      goto LAB_01d1f680;
    case 'l':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseType(this);
      if (lVar6 != 0) {
        lVar11 = *(long *)(this + 0x10);
        lVar5 = *(long *)(this + 0x18);
        while( true ) {
          pcVar17 = *(char **)this;
          if ((pcVar17 != *(char **)(this + 8)) && (*pcVar17 == 'E')) {
            lVar11 = (lVar5 - lVar11 >> 3) * 8;
            *(char **)this = pcVar17 + 1;
            auVar24 = makeNodeArray<(anonymous_namespace)::itanium_demangle::Node**>
                                (this,(Node **)(*(long *)(this + 0x10) + lVar11),
                                 *(Node ***)(this + 0x18));
            puVar20 = *(undefined8 **)(this + 0x1330);
            *(long *)(this + 0x18) = *(long *)(this + 0x10) + lVar11;
            lVar11 = puVar20[1];
            puVar10 = puVar20;
            if (0xfef < lVar11 + 0x30U) {
              puVar10 = malloc(0x1000);
              if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
              lVar11 = 0;
              *puVar10 = puVar20;
              puVar10[1] = 0;
              *(undefined8 **)(this + 0x1330) = puVar10;
            }
            uVar16 = 0x13d;
            lVar5 = lVar11 + 0x30;
            lVar11 = (long)puVar10 + lVar11;
            ppuVar15 = &
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
            ;
            goto LAB_01d20000;
          }
          local_60 = (Node *)parseBracedExpr(this);
          if (local_60 == (Node *)0x0) break;
          PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul>::push_back
                    ((PODSmallVector<(anonymous_namespace)::itanium_demangle::Node*,32ul> *)
                     (this + 0x10),&local_60);
        }
      }
      goto LAB_01d1e138;
    case 'r':
      pvVar22 = *(void **)(this + 0x1330);
      *(char **)this = pcVar17 + 2;
      lVar6 = *(long *)((long)pvVar22 + 8);
      puVar20 = pvVar22;
      if (0xfef < lVar6 + 0x20U) {
        puVar20 = malloc(0x1000);
        if (puVar20 == (void *)0x0) goto LAB_01d200bc;
        lVar6 = 0;
        *puVar20 = pvVar22;
        puVar20[1] = 0;
        *(undefined8 **)(this + 0x1330) = puVar20;
      }
      *(long *)((long)puVar20 + 8) = lVar6 + 0x20;
      puVar10 = (undefined8 *)((long)puVar20 + lVar6 + 0x10);
      *puVar10 = &System_Xml_XmlValidatingReaderImpl_ValidationEventHandling_TypeInfo;
      *(undefined4 *)((long)puVar20 + lVar6 + 0x18) = 0x1010107;
      *(char **)((long)puVar20 + lVar6 + 0x20) = "throw";
      *(char **)((long)puVar20 + lVar6 + 0x28) = "";
      break;
    case 'w':
      *(char **)this = pcVar17 + 2;
      lVar6 = parseExpr(this);
      if (lVar6 != 0) {
        puVar20 = *(undefined8 **)(this + 0x1330);
        lVar11 = puVar20[1];
        puVar10 = puVar20;
        if (0xfef < lVar11 + 0x20U) {
          puVar10 = malloc(0x1000);
          if (puVar10 == (undefined8 *)0x0) goto LAB_01d200bc;
          lVar11 = 0;
          *puVar10 = puVar20;
          puVar10[1] = 0;
          *(undefined8 **)(this + 0x1330) = puVar10;
        }
        uVar16 = 0x13f;
        lVar5 = lVar11 + 0x20;
        lVar11 = (long)puVar10 + lVar11;
        ppuVar15 = &
                   Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
        ;
        goto LAB_01d1f5dc;
      }
      goto LAB_01d1e138;
    }
  }
code_r0x01d1e140:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return puVar10;
  }
LAB_01d200c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


