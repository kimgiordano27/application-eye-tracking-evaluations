/*
FUNCTION_NAME: UnityEngine.TrailRenderer$$get_endColor
ENTRY_POINT: 0358eab0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_TrailRenderer__get_endColor
               (long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  
  if ((DAT_0412e076 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    DAT_0412e076 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x368);
  if ((lVar13 == 0) || (lVar11 = *(long *)(lVar13 + 0x38), lVar11 == 0)) goto LAB_0358f5c4;
  if (*(uint *)(lVar11 + 0x18) <= param_2) goto LAB_0358f5c8;
  lVar10 = *(long *)(lVar13 + 0x60);
  if (lVar10 == 0) goto LAB_0358f5c4;
  lVar23 = (long)(int)param_2;
  uVar7 = *(uint *)(lVar11 + lVar23 * 0x178 + 0x58);
  lVar11 = (long)(int)uVar7;
  if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0358f5c8;
  lVar10 = lVar10 + lVar11 * 0x50;
  if (*(long *)(lVar10 + 0x30) != 0) {
    uVar6 = *(uint *)(lVar10 + 0x28);
    plVar4 = (long *)(param_1 + 0x368);
    if (*(int *)(*(long *)(lVar10 + 0x30) + 0x18) <= (int)uVar6) {
      iVar9 = 8;
      if ((param_4 & 1) == 0) {
        iVar9 = 4;
      }
      iVar9 = uVar6 + iVar9;
      iVar5 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar5 = iVar9;
      }
      uVar8 = FUN_036c1d60(iVar5 >> 2,0);
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Media_TypeInfo);
      }
      FUN_03595b9c(lVar10 + 0x20,uVar8,0);
      lVar13 = *plVar4;
      if (lVar13 == 0) goto LAB_0358f5c4;
    }
    lVar10 = *(long *)(lVar13 + 0x38);
    if (lVar10 == 0) goto LAB_0358f5c4;
    puVar12 = (uint *)(lVar10 + 0x18);
    if (*puVar12 <= param_2) goto LAB_0358f5c8;
    *(uint *)(lVar10 + lVar23 * 0x178 + 0x6c) = uVar6;
    lVar13 = *(long *)(lVar13 + 0x60);
    if (lVar13 == 0) goto LAB_0358f5c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_0358f5c8;
    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x30);
    if (lVar13 == 0) goto LAB_0358f5c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_0358f5c8;
    lVar15 = lVar10 + lVar23 * 0x178;
    uVar8 = *(undefined4 *)(lVar15 + 0x78);
    lVar14 = (long)(int)uVar6;
    lVar13 = lVar13 + lVar14 * 0xc;
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar15 + 0x70);
    *(undefined4 *)(lVar13 + 0x28) = uVar8;
    if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
    if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x30);
    if (lVar13 == 0) goto LAB_0358f5c4;
    uVar1 = uVar6 + 1;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_0358f5c8;
    lVar16 = lVar10 + lVar23 * 0x178;
    uVar8 = *(undefined4 *)(lVar16 + 0xa0);
    lVar15 = (long)(int)uVar1;
    lVar13 = lVar13 + lVar15 * 0xc;
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar16 + 0x98);
    *(undefined4 *)(lVar13 + 0x28) = uVar8;
    if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
    if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x30);
    if (lVar13 == 0) goto LAB_0358f5c4;
    uVar2 = uVar6 + 2;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_0358f5c8;
    lVar17 = lVar10 + lVar23 * 0x178;
    uVar8 = *(undefined4 *)(lVar17 + 200);
    lVar16 = (long)(int)uVar2;
    lVar13 = lVar13 + lVar16 * 0xc;
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar17 + 0xc0);
    *(undefined4 *)(lVar13 + 0x28) = uVar8;
    if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
    if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x30);
    if (lVar13 == 0) goto LAB_0358f5c4;
    uVar3 = uVar6 + 3;
    if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_0358f5c8;
    lVar19 = lVar10 + lVar23 * 0x178;
    uVar8 = *(undefined4 *)(lVar19 + 0xf0);
    lVar17 = (long)(int)uVar3;
    lVar13 = lVar13 + lVar17 * 0xc;
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar19 + 0xe8);
    *(undefined4 *)(lVar13 + 0x28) = uVar8;
    if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
    if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x48);
    puVar18 = (undefined8 *)(lVar10 + lVar23 * 0x178 + 0x7c);
    if (lVar13 == 0) goto LAB_0358f5c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_0358f5c8;
    *(undefined8 *)(lVar13 + lVar14 * 8 + 0x20) = *puVar18;
    if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
    if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x48);
    puVar20 = (undefined8 *)(lVar10 + lVar23 * 0x178 + 0xa4);
    if (lVar13 == 0) goto LAB_0358f5c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_0358f5c8;
    *(undefined8 *)(lVar13 + lVar15 * 8 + 0x20) = *puVar20;
    if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
    if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x48);
    puVar21 = (undefined8 *)(lVar10 + lVar23 * 0x178 + 0xcc);
    if (lVar13 == 0) goto LAB_0358f5c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_0358f5c8;
    *(undefined8 *)(lVar13 + lVar16 * 8 + 0x20) = *puVar21;
    if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
    if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x48);
    puVar22 = (undefined8 *)(lVar10 + lVar23 * 0x178 + 0xf4);
    if (lVar13 == 0) goto LAB_0358f5c4;
    if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_0358f5c8;
    *(undefined8 *)(lVar13 + lVar17 * 8 + 0x20) = *puVar22;
    if ((param_4 & 1) != 0) {
      if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
      if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
      lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x48);
      if (lVar13 == 0) goto LAB_0358f5c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar6 + 4) goto LAB_0358f5c8;
      *(undefined8 *)(lVar13 + (long)(int)(uVar6 + 4) * 8 + 0x20) = *puVar18;
      if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_0358f5c8;
      if (*puVar12 <= param_2) goto LAB_0358f5c8;
      lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x48);
      if (lVar13 == 0) goto LAB_0358f5c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar6 + 5) goto LAB_0358f5c8;
      *(undefined8 *)(lVar13 + (long)(int)(uVar6 + 5) * 8 + 0x20) = *puVar20;
      if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
      if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
      lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x48);
      if (lVar13 == 0) goto LAB_0358f5c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar6 + 6) goto LAB_0358f5c8;
      *(undefined8 *)(lVar13 + (long)(int)(uVar6 + 6) * 8 + 0x20) = *puVar21;
      if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0)) goto LAB_0358f5c4;
      if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2)) goto LAB_0358f5c8;
      lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x48);
      if (lVar13 == 0) goto LAB_0358f5c4;
      if (*(uint *)(lVar13 + 0x18) <= uVar6 + 7) goto LAB_0358f5c8;
      *(undefined8 *)(lVar13 + (long)(int)(uVar6 + 7) * 8 + 0x20) = *puVar22;
    }
    if ((*plVar4 != 0) && (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 != 0)) {
      if ((uVar7 < *(uint *)(lVar13 + 0x18)) && (param_2 < *puVar12)) {
        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x50);
        puVar18 = (undefined8 *)(lVar10 + lVar23 * 0x178 + 0x84);
        if (lVar13 == 0) goto LAB_0358f5c4;
        if (uVar6 < *(uint *)(lVar13 + 0x18)) {
          *(undefined8 *)(lVar13 + lVar14 * 8 + 0x20) = *puVar18;
          if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
          goto LAB_0358f5c4;
          if ((uVar7 < *(uint *)(lVar13 + 0x18)) && (param_2 < *puVar12)) {
            lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x50);
            puVar20 = (undefined8 *)(lVar10 + lVar23 * 0x178 + 0xac);
            if (lVar13 == 0) goto LAB_0358f5c4;
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(undefined8 *)(lVar13 + lVar15 * 8 + 0x20) = *puVar20;
              if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
              goto LAB_0358f5c4;
              if ((uVar7 < *(uint *)(lVar13 + 0x18)) && (param_2 < *puVar12)) {
                lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x50);
                puVar21 = (undefined8 *)(lVar10 + lVar23 * 0x178 + 0xd4);
                if (lVar13 == 0) goto LAB_0358f5c4;
                if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                  *(undefined8 *)(lVar13 + lVar16 * 8 + 0x20) = *puVar21;
                  if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                  goto LAB_0358f5c4;
                  if ((uVar7 < *(uint *)(lVar13 + 0x18)) && (param_2 < *puVar12)) {
                    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x50);
                    puVar22 = (undefined8 *)(lVar10 + lVar23 * 0x178 + 0xfc);
                    if (lVar13 == 0) goto LAB_0358f5c4;
                    if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                      *(undefined8 *)(lVar13 + lVar17 * 8 + 0x20) = *puVar22;
                      if ((param_4 & 1) != 0) {
                        if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                        goto LAB_0358f5c4;
                        if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2))
                        goto LAB_0358f5c8;
                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x50);
                        if (lVar13 == 0) goto LAB_0358f5c4;
                        if (*(uint *)(lVar13 + 0x18) <= uVar6 + 4) goto LAB_0358f5c8;
                        *(undefined8 *)(lVar13 + (long)(int)(uVar6 + 4) * 8 + 0x20) = *puVar18;
                        if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                        goto LAB_0358f5c4;
                        if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2))
                        goto LAB_0358f5c8;
                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x50);
                        if (lVar13 == 0) goto LAB_0358f5c4;
                        if (*(uint *)(lVar13 + 0x18) <= uVar6 + 5) goto LAB_0358f5c8;
                        *(undefined8 *)(lVar13 + (long)(int)(uVar6 + 5) * 8 + 0x20) = *puVar20;
                        if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                        goto LAB_0358f5c4;
                        if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2))
                        goto LAB_0358f5c8;
                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x50);
                        if (lVar13 == 0) goto LAB_0358f5c4;
                        if (*(uint *)(lVar13 + 0x18) <= uVar6 + 6) goto LAB_0358f5c8;
                        *(undefined8 *)(lVar13 + (long)(int)(uVar6 + 6) * 8 + 0x20) = *puVar21;
                        if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                        goto LAB_0358f5c4;
                        if ((*(uint *)(lVar13 + 0x18) <= uVar7) || (*puVar12 <= param_2))
                        goto LAB_0358f5c8;
                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x50);
                        if (lVar13 == 0) goto LAB_0358f5c4;
                        if (*(uint *)(lVar13 + 0x18) <= uVar6 + 7) goto LAB_0358f5c8;
                        *(undefined8 *)(lVar13 + (long)(int)(uVar6 + 7) * 8 + 0x20) = *puVar22;
                      }
                      if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                      goto LAB_0358f5c4;
                      if ((uVar7 < *(uint *)(lVar13 + 0x18)) && (param_2 < *puVar12)) {
                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x58);
                        if (lVar13 == 0) goto LAB_0358f5c4;
                        if (uVar6 < *(uint *)(lVar13 + 0x18)) {
                          *(undefined4 *)(lVar13 + lVar14 * 4 + 0x20) =
                               *(undefined4 *)(lVar10 + lVar23 * 0x178 + 0x94);
                          if ((*plVar4 == 0) || (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                          goto LAB_0358f5c4;
                          if ((uVar7 < *(uint *)(lVar13 + 0x18)) && (param_2 < *puVar12)) {
                            lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x58);
                            if (lVar13 == 0) goto LAB_0358f5c4;
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(undefined4 *)(lVar13 + lVar15 * 4 + 0x20) =
                                   *(undefined4 *)(lVar10 + lVar23 * 0x178 + 0xbc);
                              if ((*plVar4 == 0) ||
                                 (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                              goto LAB_0358f5c4;
                              if ((uVar7 < *(uint *)(lVar13 + 0x18)) && (param_2 < *puVar12)) {
                                lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x58);
                                if (lVar13 == 0) goto LAB_0358f5c4;
                                if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                                  *(undefined4 *)(lVar13 + lVar16 * 4 + 0x20) =
                                       *(undefined4 *)(lVar10 + lVar23 * 0x178 + 0xe4);
                                  if ((*plVar4 == 0) ||
                                     (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                                  goto LAB_0358f5c4;
                                  if ((uVar7 < *(uint *)(lVar13 + 0x18)) && (param_2 < *puVar12)) {
                                    lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x58);
                                    if (lVar13 == 0) goto LAB_0358f5c4;
                                    if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                                      *(undefined4 *)(lVar13 + lVar17 * 4 + 0x20) =
                                           *(undefined4 *)(lVar10 + lVar23 * 0x178 + 0x10c);
                                      if ((param_4 & 1) != 0) {
                                        if ((*plVar4 == 0) ||
                                           (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                                        goto LAB_0358f5c4;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_0358f5c8;
                                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x58);
                                        if (lVar13 == 0) goto LAB_0358f5c4;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar6 + 4)
                                        goto LAB_0358f5c8;
                                        *(undefined4 *)(lVar13 + (long)(int)(uVar6 + 4) * 4 + 0x20)
                                             = 0xff80ffff;
                                        if ((*plVar4 == 0) ||
                                           (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                                        goto LAB_0358f5c4;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_0358f5c8;
                                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x58);
                                        if (lVar13 == 0) goto LAB_0358f5c4;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar6 + 5)
                                        goto LAB_0358f5c8;
                                        *(undefined4 *)(lVar13 + (long)(int)(uVar6 + 5) * 4 + 0x20)
                                             = 0xff80ffff;
                                        if ((*plVar4 == 0) ||
                                           (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                                        goto LAB_0358f5c4;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_0358f5c8;
                                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x58);
                                        if (lVar13 == 0) goto LAB_0358f5c4;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar6 + 6)
                                        goto LAB_0358f5c8;
                                        *(undefined4 *)(lVar13 + (long)(int)(uVar6 + 6) * 4 + 0x20)
                                             = 0xff80ffff;
                                        if ((*plVar4 == 0) ||
                                           (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                                        goto LAB_0358f5c4;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_0358f5c8;
                                        lVar13 = *(long *)(lVar13 + lVar11 * 0x50 + 0x58);
                                        if (lVar13 == 0) goto LAB_0358f5c4;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar6 + 7)
                                        goto LAB_0358f5c8;
                                        *(undefined4 *)(lVar13 + (long)(int)(uVar6 + 7) * 4 + 0x20)
                                             = 0xff80ffff;
                                      }
                                      if ((*plVar4 == 0) ||
                                         (lVar13 = *(long *)(*plVar4 + 0x60), lVar13 == 0))
                                      goto LAB_0358f5c4;
                                      if (uVar7 < *(uint *)(lVar13 + 0x18)) {
                                        iVar9 = 8;
                                        if ((param_4 & 1) == 0) {
                                          iVar9 = 4;
                                        }
                                        *(uint *)(lVar13 + lVar11 * 0x50 + 0x28) = uVar6 + iVar9;
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0358f5c8:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
LAB_0358f5c4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


