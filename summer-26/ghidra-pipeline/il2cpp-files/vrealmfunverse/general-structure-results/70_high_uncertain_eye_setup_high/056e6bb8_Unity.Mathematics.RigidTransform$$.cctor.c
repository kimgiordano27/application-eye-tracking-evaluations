/*
FUNCTION_NAME: Unity.Mathematics.RigidTransform$$.cctor
ENTRY_POINT: 056e6bb8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_RigidTransform___cctor(void)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long unaff_x19;
  long unaff_x20;
  long *plVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  int iStack000000000000000c;
  undefined8 in_stack_00000028;
  int in_stack_00000030;
  
  *(undefined1 *)(unaff_x20 + 0x1a2) = 1;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    *(undefined8 *)(unaff_x19 + 0x40) = 0;
    thunk_FUN_02bb0e9c();
    lVar12 = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
LAB_056e7188:
    thunk_FUN_02bb0e9c(unaff_x19 + 0x38,lVar12);
LAB_056e718c:
    *(uint *)(unaff_x19 + 200) = *(uint *)(unaff_x19 + 200) | 0xc;
    return;
  }
  if (*(long *)(unaff_x19 + 0x50) == 0) {
    if (*(long *)(unaff_x19 + 0x60) == 0) {
      iStack000000000000000c = 0;
      in_stack_00000028._4_4_ = 0;
    }
    else {
      FUN_056fe514(&stack0x00000020);
      iStack000000000000000c = in_stack_00000030;
    }
    lVar12 = *(long *)(unaff_x19 + 0x28);
    if (lVar12 != 0) {
      uVar17 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar17) {
        uVar15 = 0;
        do {
          if (uVar17 == uVar15) goto LAB_056e71b8;
          lVar14 = *(long *)(lVar12 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_056e6d80;
          uVar15 = uVar15 + 1;
          *(undefined8 *)(lVar14 + 0xb8) = 0xffffffff;
          *(undefined8 *)(lVar14 + 0xb0) = 0xffffffff;
        } while ((uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)) != uVar15);
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        uVar6 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x18);
        if (0 < (int)uVar6) {
          uVar8 = 0;
          do {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
            if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar8) goto LAB_056e71b8;
            lVar12 = FUN_056e31f4();
            if (lVar12 != 0) {
              *(int *)(lVar12 + 0xb4) = *(int *)(lVar12 + 0xb4) + 1;
            }
            uVar8 = uVar8 + 1;
          } while ((uVar6 & 0xffffffff) != uVar8);
        }
        if (*(long *)(unaff_x19 + 0x60) != 0) {
          plVar16 = (long *)(unaff_x19 + 0x40);
          if ((*plVar16 == 0) || (in_stack_00000028._4_4_ != *(int *)(*plVar16 + 0x18))) {
            if (in_stack_00000028._4_4_ == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = FUN_02b3c908(*(undefined8 *)
                                     Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                    ,in_stack_00000028._4_4_);
            }
            *plVar16 = lVar12;
            thunk_FUN_02bb0e9c(plVar16);
          }
        }
        lVar12 = *(long *)(unaff_x19 + 0x30);
        if (lVar12 != 0) {
          uVar17 = 0;
          lVar14 = 0;
          uVar15 = 0;
          uVar6 = 0;
          do {
            uVar6 = (ulong)(int)uVar6;
            while( true ) {
              uVar13 = (uint)*(undefined8 *)(lVar12 + 0x18);
              if ((long)(int)uVar13 <= (long)uVar6) {
                if (lVar14 == 0) {
                  *(long *)(unaff_x19 + 0x38) = lVar12;
                }
                else {
                  *(long *)(unaff_x19 + 0x38) = lVar14;
                  lVar12 = lVar14;
                }
                goto LAB_056e7188;
              }
              if (uVar13 <= (uint)uVar6) goto LAB_056e71b8;
              lVar12 = FUN_056e31f4();
              if ((lVar12 != 0) && (*(int *)(lVar12 + 0xb0) == -1)) break;
              lVar12 = *(long *)(unaff_x19 + 0x30);
              uVar6 = uVar6 + 1;
              if (lVar12 == 0) goto LAB_056e6d80;
            }
            iVar2 = *(int *)(lVar12 + 0xb4);
            *(uint *)(lVar12 + 0xb8) = uVar15;
            uVar13 = (uint)uVar6;
            if (lVar14 != 0) {
              uVar13 = uVar17;
            }
            *(uint *)(lVar12 + 0xb0) = uVar13;
            if (0 < iVar2) {
              iVar18 = 0;
              uVar8 = uVar6 & 0xffffffff;
              do {
                uVar13 = (uint)uVar8;
                if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
                if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar13) goto LAB_056e71b8;
                lVar5 = FUN_056e31f4();
                if (lVar5 == lVar12) {
                  uVar19 = (uint)uVar6;
                  if (uVar19 == uVar13) {
                    uVar19 = uVar19 + 1;
                  }
                  uVar6 = (ulong)uVar19;
                }
                else {
                  if (lVar14 == 0) {
                    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
                    lVar14 = FUN_02b3c908(*(undefined8 *)
                                           Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_Awake__
                                          ,*(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x18));
                    FUN_04d9e334(*(undefined8 *)(unaff_x19 + 0x30),0,lVar14,0,uVar8,0);
                    uVar17 = uVar13;
                  }
                  do {
                    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
                    uVar13 = (int)uVar8 + 1;
                    uVar8 = (ulong)uVar13;
                    if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar13) goto LAB_056e71b8;
                    lVar5 = FUN_056e31f4();
                  } while (lVar5 != lVar12);
                }
                if (lVar14 != 0) {
                  lVar5 = *(long *)(unaff_x19 + 0x30);
                  if (lVar5 == 0) goto LAB_056e6d80;
                  if ((*(uint *)(lVar5 + 0x18) <= uVar13) || (*(uint *)(lVar14 + 0x18) <= uVar17))
                  goto LAB_056e71b8;
                  lVar10 = lVar14 + (long)(int)uVar17 * 0x58;
                  uVar17 = uVar17 + 1;
                  memmove((void *)(lVar10 + 0x20),(void *)(lVar5 + (long)(int)uVar13 * 0x58 + 0x20),
                          0x58);
                  thunk_FUN_02bb0e9c(lVar10 + 0x20,0);
                }
                if (*(long *)(unaff_x19 + 0x60) != 0) {
                  lVar5 = *(long *)(unaff_x19 + 0x30);
                  if (lVar5 == 0) goto LAB_056e6d80;
                  if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_056e71b8;
                  uVar8 = FUN_056f85e4(lVar5 + (long)(int)uVar13 * 0x58 + 0x20,0);
                  if ((uVar8 & 1) == 0) {
                    if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_056e6d80;
                    lVar5 = FUN_056fb390(*(long *)(unaff_x19 + 0x60),0);
                    pbVar1 = (byte *)(lVar5 + (long)(int)(uVar13 + iStack000000000000000c) * 0x20);
                    uVar8 = (ulong)*pbVar1;
                    if (uVar8 != 0) {
                      uVar20 = (ulong)*(ushort *)(pbVar1 + 0xe);
                      do {
                        if ((*(long *)(unaff_x19 + 0x60) == 0) ||
                           (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x18), lVar5 == 0))
                        goto LAB_056e6d80;
                        if (*(uint *)(lVar5 + 0x18) <= uVar20) goto LAB_056e71b8;
                        lVar5 = *(long *)(lVar5 + uVar20 * 8 + 0x20);
                        uVar9 = FUN_030f2bc0(*(undefined8 *)(unaff_x19 + 0x40),
                                             *(undefined4 *)(lVar12 + 0xb8),
                                             *(undefined4 *)(lVar12 + 0xbc),lVar5,
                                             *(undefined8 *)
                                              Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                                            );
                        if ((uVar9 & 1) == 0) {
                          plVar16 = *(long **)(unaff_x19 + 0x40);
                          if (plVar16 == (long *)0x0) goto LAB_056e6d80;
                          if ((lVar5 != 0) &&
                             (lVar10 = thunk_FUN_02b79548(lVar5,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar10 == 0)) goto LAB_056e71bc;
                          if (*(uint *)(plVar16 + 3) <= uVar15) goto LAB_056e71b8;
                          plVar16[(long)(int)uVar15 + 4] = lVar5;
                          thunk_FUN_02bb0e9c(plVar16 + (long)(int)uVar15 + 4,lVar5);
                          uVar15 = uVar15 + 1;
                          *(int *)(lVar12 + 0xbc) = *(int *)(lVar12 + 0xbc) + 1;
                        }
                        uVar8 = uVar8 - 1;
                        uVar20 = uVar20 + 1;
                      } while (uVar8 != 0);
                    }
                  }
                }
                iVar18 = iVar18 + 1;
                uVar8 = (ulong)(uVar13 + 1);
              } while (iVar18 != iVar2);
            }
            lVar12 = *(long *)(unaff_x19 + 0x30);
          } while (lVar12 != 0);
        }
      }
    }
  }
  else {
    *(long *)(unaff_x19 + 0x38) = *(long *)(unaff_x19 + 0x30);
    thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x38));
    if (*(long *)(unaff_x19 + 0x60) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x18);
    }
    plVar16 = (long *)(unaff_x19 + 0x40);
    *plVar16 = lVar12;
    thunk_FUN_02bb0e9c(plVar16);
    lVar12 = *(long *)(unaff_x19 + 0x50);
    if (lVar12 != 0) {
      lVar14 = *(long *)(unaff_x19 + 0x30);
      *(undefined4 *)(lVar12 + 0xb0) = 0;
      if (lVar14 != 0) {
        lVar5 = *(long *)(unaff_x19 + 0x60);
        *(int *)(lVar12 + 0xb4) = (int)*(undefined8 *)(lVar14 + 0x18);
        *(undefined4 *)(lVar12 + 0xb8) = 0;
        if (lVar5 == 0) {
          *(undefined4 *)(lVar12 + 0xbc) = 0;
        }
        else {
          uVar4 = FUN_056fb378(lVar5,0);
          lVar14 = *(long *)(unaff_x19 + 0x50);
          *(undefined4 *)(lVar12 + 0xbc) = uVar4;
          lVar12 = lVar14;
          if (lVar14 == 0) goto LAB_056e6d80;
        }
        uVar6 = FUN_03114e6c(*plVar16,0,*(undefined4 *)(lVar12 + 0xbc),
                             *(undefined8 *)
                              Method_Newtonsoft_Json_Linq_JEnumerable<JToken>_GetEnumerator__);
        if ((uVar6 & 1) == 0) goto LAB_056e718c;
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          plVar7 = (long *)FUN_02b3c908(*(undefined8 *)
                                         Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                        ,*(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0xbc));
          puVar3 = Method_Newtonsoft_Json_Linq_JEnumerable<JToken>__ctor__;
          lVar12 = *(long *)(unaff_x19 + 0x50);
          if (lVar12 != 0) {
            uVar17 = 0;
            lVar14 = 4;
            do {
              uVar6 = lVar14 - 4;
              if ((long)*(int *)(lVar12 + 0xbc) <= (long)uVar6) {
                *(long **)(unaff_x19 + 0x40) = plVar7;
                thunk_FUN_02bb0e9c(plVar16,plVar7);
                if (*(long *)(unaff_x19 + 0x50) != 0) {
                  *(uint *)(*(long *)(unaff_x19 + 0x50) + 0xbc) = uVar17;
                  goto LAB_056e718c;
                }
                break;
              }
              lVar12 = *plVar16;
              if (lVar12 == 0) break;
              if (*(uint *)(lVar12 + 0x18) <= uVar6) goto LAB_056e71b8;
              uVar8 = FUN_030f2aa8(plVar7,*(undefined8 *)(lVar12 + lVar14 * 8),*(undefined8 *)puVar3
                                  );
              if ((uVar8 & 1) == 0) {
                lVar12 = *plVar16;
                if (lVar12 == 0) break;
                if (*(uint *)(lVar12 + 0x18) <= uVar6) {
LAB_056e71b8:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                if (plVar7 == (long *)0x0) break;
                lVar12 = *(long *)(lVar12 + lVar14 * 8);
                if ((lVar12 != 0) &&
                   (lVar5 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
                {
LAB_056e71bc:
                  uVar11 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                  FUN_02b3c988(uVar11,0);
                }
                if (*(uint *)(plVar7 + 3) <= uVar17) goto LAB_056e71b8;
                plVar7[(long)(int)uVar17 + 4] = lVar12;
                thunk_FUN_02bb0e9c(plVar7 + (long)(int)uVar17 + 4,lVar12);
                uVar17 = uVar17 + 1;
              }
              lVar12 = *(long *)(unaff_x19 + 0x50);
              lVar14 = lVar14 + 1;
            } while (lVar12 != 0);
          }
        }
      }
    }
  }
LAB_056e6d80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


