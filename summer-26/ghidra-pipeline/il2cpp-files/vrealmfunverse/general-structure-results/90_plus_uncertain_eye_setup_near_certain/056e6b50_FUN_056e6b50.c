/*
FUNCTION_NAME: FUN_056e6b50
ENTRY_POINT: 056e6b50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_056e6b50(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int local_a4;
  undefined1 auStack_90 [12];
  int local_84;
  int iStack_80;
  
                    /* catch() { ... } // from try @ 056e6b40 with catch @ 056e6b50 */
                    /* try { // try from 056e6b54 to 057e6b5b has its CatchHandler @ 056e6b64 */
                    /* try { // try from 056e6b5c to 057e6b67 has its CatchHandler @ 056e6a10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 056e6b54 with catch @ 056e6b64
                        */
  if ((DAT_066d21a2 & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JEnumerable<JToken>__ctor__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__);
    FUN_02b3c81c(Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_Awake__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                );
    DAT_066d21a2 = 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    thunk_FUN_02bb0e9c();
    lVar11 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_056e7188:
    thunk_FUN_02bb0e9c(param_1 + 0x38,lVar11);
LAB_056e718c:
    *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 0xc;
    return;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      local_a4 = 0;
      local_84 = 0;
    }
    else {
      FUN_056fe514(auStack_90,*(long *)(param_1 + 0x60),param_1,0);
      local_a4 = iStack_80;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 != 0) {
      uVar16 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar16) {
        uVar14 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_056e71b8;
          lVar13 = *(long *)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_056e6d80;
          uVar14 = uVar14 + 1;
          *(undefined8 *)(lVar13 + 0xb8) = 0xffffffff;
          *(undefined8 *)(lVar13 + 0xb0) = 0xffffffff;
        } while ((uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU)) != uVar14);
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar5 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x18);
        if (0 < (int)uVar5) {
          uVar7 = 0;
          lVar11 = 0x50;
          do {
            lVar13 = *(long *)(param_1 + 0x30);
            if (lVar13 == 0) goto LAB_056e6d80;
            if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_056e71b8;
            lVar13 = FUN_056e31f4(param_1,*(undefined8 *)(lVar13 + lVar11),0);
            if (lVar13 != 0) {
              *(int *)(lVar13 + 0xb4) = *(int *)(lVar13 + 0xb4) + 1;
            }
            uVar7 = uVar7 + 1;
            lVar11 = lVar11 + 0x58;
          } while ((uVar5 & 0xffffffff) != uVar7);
        }
        if (*(long *)(param_1 + 0x60) != 0) {
          plVar15 = (long *)(param_1 + 0x40);
          if ((*plVar15 == 0) || (local_84 != *(int *)(*plVar15 + 0x18))) {
            if (local_84 == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = FUN_02b3c908(*(undefined8 *)
                                     Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                    ,local_84);
            }
            *plVar15 = lVar11;
            thunk_FUN_02bb0e9c(plVar15);
          }
        }
        lVar11 = *(long *)(param_1 + 0x30);
        if (lVar11 != 0) {
          uVar16 = 0;
          lVar13 = 0;
          uVar14 = 0;
          uVar5 = 0;
          do {
            iVar18 = (int)uVar5;
            uVar5 = (ulong)iVar18;
            lVar4 = (long)iVar18 * 0x58 + 0x50;
            while( true ) {
              uVar12 = (uint)*(undefined8 *)(lVar11 + 0x18);
              if ((long)(int)uVar12 <= (long)uVar5) {
                if (lVar13 == 0) {
                  *(long *)(param_1 + 0x38) = lVar11;
                }
                else {
                  *(long *)(param_1 + 0x38) = lVar13;
                  lVar11 = lVar13;
                }
                goto LAB_056e7188;
              }
              if (uVar12 <= (uint)uVar5) goto LAB_056e71b8;
              lVar11 = FUN_056e31f4(param_1,*(undefined8 *)(lVar11 + lVar4),0);
              if ((lVar11 != 0) && (*(int *)(lVar11 + 0xb0) == -1)) break;
              lVar11 = *(long *)(param_1 + 0x30);
              uVar5 = uVar5 + 1;
              lVar4 = lVar4 + 0x58;
              if (lVar11 == 0) goto LAB_056e6d80;
            }
            iVar18 = *(int *)(lVar11 + 0xb4);
            *(uint *)(lVar11 + 0xb8) = uVar14;
            uVar12 = (uint)uVar5;
            if (lVar13 != 0) {
              uVar12 = uVar16;
            }
            *(uint *)(lVar11 + 0xb0) = uVar12;
            if (0 < iVar18) {
              iVar17 = 0;
              uVar7 = uVar5 & 0xffffffff;
              do {
                uVar12 = (uint)uVar7;
                lVar4 = *(long *)(param_1 + 0x30);
                if (lVar4 == 0) goto LAB_056e6d80;
                if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_056e71b8;
                lVar4 = FUN_056e31f4(param_1,*(undefined8 *)
                                              (lVar4 + (long)(int)uVar12 * 0x58 + 0x50),0);
                if (lVar4 == lVar11) {
                  uVar19 = (uint)uVar5;
                  if (uVar19 == uVar12) {
                    uVar19 = uVar19 + 1;
                  }
                  uVar5 = (ulong)uVar19;
                }
                else {
                  if (lVar13 == 0) {
                    if (*(long *)(param_1 + 0x30) == 0) goto LAB_056e6d80;
                    lVar13 = FUN_02b3c908(*(undefined8 *)
                                           Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_Awake__
                                          ,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
                    FUN_04d9e334(*(undefined8 *)(param_1 + 0x30),0,lVar13,0,uVar7,0);
                    uVar16 = uVar12;
                  }
                  do {
                    lVar4 = *(long *)(param_1 + 0x30);
                    if (lVar4 == 0) goto LAB_056e6d80;
                    uVar12 = (int)uVar7 + 1;
                    uVar7 = (ulong)uVar12;
                    if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_056e71b8;
                    lVar4 = FUN_056e31f4(param_1,*(undefined8 *)
                                                  (lVar4 + (long)(int)uVar12 * 0x58 + 0x50),0);
                  } while (lVar4 != lVar11);
                }
                if (lVar13 != 0) {
                  lVar4 = *(long *)(param_1 + 0x30);
                  if (lVar4 == 0) goto LAB_056e6d80;
                  if ((*(uint *)(lVar4 + 0x18) <= uVar12) || (*(uint *)(lVar13 + 0x18) <= uVar16))
                  goto LAB_056e71b8;
                  lVar9 = lVar13 + (long)(int)uVar16 * 0x58;
                  uVar16 = uVar16 + 1;
                  memmove((void *)(lVar9 + 0x20),(void *)(lVar4 + (long)(int)uVar12 * 0x58 + 0x20),
                          0x58);
                  thunk_FUN_02bb0e9c(lVar9 + 0x20,0);
                }
                if (*(long *)(param_1 + 0x60) != 0) {
                  lVar4 = *(long *)(param_1 + 0x30);
                  if (lVar4 == 0) goto LAB_056e6d80;
                  if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_056e71b8;
                  uVar7 = FUN_056f85e4(lVar4 + (long)(int)uVar12 * 0x58 + 0x20,0);
                  if ((uVar7 & 1) == 0) {
                    if (*(long *)(param_1 + 0x60) == 0) goto LAB_056e6d80;
                    lVar4 = FUN_056fb390(*(long *)(param_1 + 0x60),0);
                    pbVar1 = (byte *)(lVar4 + (long)(int)(uVar12 + local_a4) * 0x20);
                    uVar7 = (ulong)*pbVar1;
                    if (uVar7 != 0) {
                      uVar20 = (ulong)*(ushort *)(pbVar1 + 0xe);
                      do {
                        if ((*(long *)(param_1 + 0x60) == 0) ||
                           (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x18), lVar4 == 0))
                        goto LAB_056e6d80;
                        if (*(uint *)(lVar4 + 0x18) <= uVar20) goto LAB_056e71b8;
                        lVar4 = *(long *)(lVar4 + uVar20 * 8 + 0x20);
                        uVar8 = FUN_030f2bc0(*(undefined8 *)(param_1 + 0x40),
                                             *(undefined4 *)(lVar11 + 0xb8),
                                             *(undefined4 *)(lVar11 + 0xbc),lVar4,
                                             *(undefined8 *)
                                              Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                                            );
                        if ((uVar8 & 1) == 0) {
                          plVar15 = *(long **)(param_1 + 0x40);
                          if (plVar15 == (long *)0x0) goto LAB_056e6d80;
                          if ((lVar4 != 0) &&
                             (lVar9 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar9 == 0)) goto LAB_056e71bc;
                          if (*(uint *)(plVar15 + 3) <= uVar14) goto LAB_056e71b8;
                          plVar15[(long)(int)uVar14 + 4] = lVar4;
                          thunk_FUN_02bb0e9c(plVar15 + (long)(int)uVar14 + 4,lVar4);
                          uVar14 = uVar14 + 1;
                          *(int *)(lVar11 + 0xbc) = *(int *)(lVar11 + 0xbc) + 1;
                        }
                        uVar7 = uVar7 - 1;
                        uVar20 = uVar20 + 1;
                      } while (uVar7 != 0);
                    }
                  }
                }
                iVar17 = iVar17 + 1;
                uVar7 = (ulong)(uVar12 + 1);
              } while (iVar17 != iVar18);
            }
            lVar11 = *(long *)(param_1 + 0x30);
          } while (lVar11 != 0);
        }
      }
    }
  }
  else {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    thunk_FUN_02bb0e9c((long *)(param_1 + 0x38));
    if (*(long *)(param_1 + 0x60) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 0x18);
    }
    plVar15 = (long *)(param_1 + 0x40);
    *plVar15 = lVar11;
    thunk_FUN_02bb0e9c(plVar15);
    lVar11 = *(long *)(param_1 + 0x50);
    if (lVar11 != 0) {
      lVar13 = *(long *)(param_1 + 0x30);
      *(undefined4 *)(lVar11 + 0xb0) = 0;
      if (lVar13 != 0) {
        lVar4 = *(long *)(param_1 + 0x60);
        *(int *)(lVar11 + 0xb4) = (int)*(undefined8 *)(lVar13 + 0x18);
        *(undefined4 *)(lVar11 + 0xb8) = 0;
        if (lVar4 == 0) {
          *(undefined4 *)(lVar11 + 0xbc) = 0;
        }
        else {
          uVar3 = FUN_056fb378(lVar4,0);
          lVar13 = *(long *)(param_1 + 0x50);
          *(undefined4 *)(lVar11 + 0xbc) = uVar3;
          lVar11 = lVar13;
          if (lVar13 == 0) goto LAB_056e6d80;
        }
        uVar5 = FUN_03114e6c(*plVar15,0,*(undefined4 *)(lVar11 + 0xbc),
                             *(undefined8 *)
                              Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__);
        if ((uVar5 & 1) == 0) goto LAB_056e718c;
        if (*(long *)(param_1 + 0x50) != 0) {
          plVar6 = (long *)FUN_02b3c908(*(undefined8 *)
                                         Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                        ,*(undefined4 *)(*(long *)(param_1 + 0x50) + 0xbc));
          puVar2 = Method_Newtonsoft_Json_Linq_JEnumerable<JToken>__ctor__;
          lVar11 = *(long *)(param_1 + 0x50);
          if (lVar11 != 0) {
            uVar16 = 0;
            lVar13 = 4;
            do {
              uVar5 = lVar13 - 4;
              if ((long)*(int *)(lVar11 + 0xbc) <= (long)uVar5) {
                *(long **)(param_1 + 0x40) = plVar6;
                thunk_FUN_02bb0e9c(plVar15,plVar6);
                if (*(long *)(param_1 + 0x50) != 0) {
                  *(uint *)(*(long *)(param_1 + 0x50) + 0xbc) = uVar16;
                  goto LAB_056e718c;
                }
                break;
              }
              lVar11 = *plVar15;
              if (lVar11 == 0) break;
              if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_056e71b8;
              uVar7 = FUN_030f2aa8(plVar6,*(undefined8 *)(lVar11 + lVar13 * 8),*(undefined8 *)puVar2
                                  );
              if ((uVar7 & 1) == 0) {
                lVar11 = *plVar15;
                if (lVar11 == 0) break;
                if (*(uint *)(lVar11 + 0x18) <= uVar5) {
LAB_056e71b8:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                if (plVar6 == (long *)0x0) break;
                lVar11 = *(long *)(lVar11 + lVar13 * 8);
                if ((lVar11 != 0) &&
                   (lVar4 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
                {
LAB_056e71bc:
                  uVar10 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar10,0);
                }
                if (*(uint *)(plVar6 + 3) <= uVar16) goto LAB_056e71b8;
                plVar6[(long)(int)uVar16 + 4] = lVar11;
                thunk_FUN_02bb0e9c(plVar6 + (long)(int)uVar16 + 4,lVar11);
                uVar16 = uVar16 + 1;
              }
              lVar11 = *(long *)(param_1 + 0x50);
              lVar13 = lVar13 + 1;
            } while (lVar11 != 0);
          }
        }
      }
    }
  }
LAB_056e6d80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


