/*
FUNCTION_NAME: Unity.Mathematics.uint2$$.ctor
ENTRY_POINT: 056e6c10
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_uint2___ctor(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long unaff_x19;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  int iStack000000000000000c;
  undefined8 in_stack_00000028;
  int in_stack_00000030;
  
  if (param_1 == 0) {
    iStack000000000000000c = 0;
    in_stack_00000028._4_4_ = 0;
  }
  else {
    FUN_056fe514(&stack0x00000020);
    iStack000000000000000c = in_stack_00000030;
  }
  lVar8 = *(long *)(unaff_x19 + 0x28);
  if (lVar8 != 0) {
    uVar14 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar14) {
      uVar10 = 0;
      do {
        if (uVar14 == uVar10) goto LAB_056e71b8;
        lVar11 = *(long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_056e6d80;
        uVar10 = uVar10 + 1;
        *(undefined8 *)(lVar11 + 0xb8) = 0xffffffff;
        *(undefined8 *)(lVar11 + 0xb0) = 0xffffffff;
      } while ((uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)) != uVar10);
    }
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      uVar9 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x18);
      if (0 < (int)uVar9) {
        uVar12 = 0;
        do {
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar12) {
LAB_056e71b8:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar8 = FUN_056e31f4();
          if (lVar8 != 0) {
            *(int *)(lVar8 + 0xb4) = *(int *)(lVar8 + 0xb4) + 1;
          }
          uVar12 = uVar12 + 1;
        } while ((uVar9 & 0xffffffff) != uVar12);
      }
      if (*(long *)(unaff_x19 + 0x60) != 0) {
        plVar13 = (long *)(unaff_x19 + 0x40);
        if ((*plVar13 == 0) || (in_stack_00000028._4_4_ != *(int *)(*plVar13 + 0x18))) {
          if (in_stack_00000028._4_4_ == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = FUN_02b3c908(*(undefined8 *)
                                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                 ,in_stack_00000028._4_4_);
          }
          *plVar13 = lVar8;
          thunk_FUN_02bb0e9c(plVar13);
        }
      }
      lVar8 = *(long *)(unaff_x19 + 0x30);
      if (lVar8 != 0) {
        uVar14 = 0;
        lVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        do {
          uVar9 = (ulong)(int)uVar9;
          while( true ) {
            uVar7 = (uint)*(undefined8 *)(lVar8 + 0x18);
            if ((long)(int)uVar7 <= (long)uVar9) {
              if (lVar11 == 0) {
                *(long *)(unaff_x19 + 0x38) = lVar8;
              }
              else {
                *(long *)(unaff_x19 + 0x38) = lVar11;
                lVar8 = lVar11;
              }
              thunk_FUN_02bb0e9c(unaff_x19 + 0x38,lVar8);
              *(uint *)(unaff_x19 + 200) = *(uint *)(unaff_x19 + 200) | 0xc;
              return;
            }
            if (uVar7 <= (uint)uVar9) goto LAB_056e71b8;
            lVar8 = FUN_056e31f4();
            if ((lVar8 != 0) && (*(int *)(lVar8 + 0xb0) == -1)) break;
            lVar8 = *(long *)(unaff_x19 + 0x30);
            uVar9 = uVar9 + 1;
            if (lVar8 == 0) goto LAB_056e6d80;
          }
          iVar2 = *(int *)(lVar8 + 0xb4);
          *(uint *)(lVar8 + 0xb8) = uVar10;
          uVar7 = (uint)uVar9;
          if (lVar11 != 0) {
            uVar7 = uVar14;
          }
          *(uint *)(lVar8 + 0xb0) = uVar7;
          if (0 < iVar2) {
            iVar15 = 0;
            uVar12 = uVar9 & 0xffffffff;
            do {
              uVar7 = (uint)uVar12;
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
              if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar7) goto LAB_056e71b8;
              lVar3 = FUN_056e31f4();
              if (lVar3 == lVar8) {
                uVar16 = (uint)uVar9;
                if (uVar16 == uVar7) {
                  uVar16 = uVar16 + 1;
                }
                uVar9 = (ulong)uVar16;
              }
              else {
                if (lVar11 == 0) {
                  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
                  lVar11 = FUN_02b3c908(*(undefined8 *)
                                         Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_Awake__
                                        ,*(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x18));
                  FUN_04d9e334(*(undefined8 *)(unaff_x19 + 0x30),0,lVar11,0,uVar12,0);
                  uVar14 = uVar7;
                }
                do {
                  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
                  uVar7 = (int)uVar12 + 1;
                  uVar12 = (ulong)uVar7;
                  if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar7) goto LAB_056e71b8;
                  lVar3 = FUN_056e31f4();
                } while (lVar3 != lVar8);
              }
              if (lVar11 != 0) {
                lVar3 = *(long *)(unaff_x19 + 0x30);
                if (lVar3 == 0) goto LAB_056e6d80;
                if ((*(uint *)(lVar3 + 0x18) <= uVar7) || (*(uint *)(lVar11 + 0x18) <= uVar14))
                goto LAB_056e71b8;
                lVar5 = lVar11 + (long)(int)uVar14 * 0x58;
                uVar14 = uVar14 + 1;
                memmove((void *)(lVar5 + 0x20),(void *)(lVar3 + (long)(int)uVar7 * 0x58 + 0x20),0x58
                       );
                thunk_FUN_02bb0e9c(lVar5 + 0x20,0);
              }
              if (*(long *)(unaff_x19 + 0x60) != 0) {
                lVar3 = *(long *)(unaff_x19 + 0x30);
                if (lVar3 == 0) goto LAB_056e6d80;
                if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_056e71b8;
                uVar12 = FUN_056f85e4(lVar3 + (long)(int)uVar7 * 0x58 + 0x20,0);
                if ((uVar12 & 1) == 0) {
                  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_056e6d80;
                  lVar3 = FUN_056fb390(*(long *)(unaff_x19 + 0x60),0);
                  pbVar1 = (byte *)(lVar3 + (long)(int)(uVar7 + iStack000000000000000c) * 0x20);
                  uVar12 = (ulong)*pbVar1;
                  if (uVar12 != 0) {
                    uVar17 = (ulong)*(ushort *)(pbVar1 + 0xe);
                    do {
                      if ((*(long *)(unaff_x19 + 0x60) == 0) ||
                         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x18), lVar3 == 0))
                      goto LAB_056e6d80;
                      if (*(uint *)(lVar3 + 0x18) <= uVar17) goto LAB_056e71b8;
                      lVar3 = *(long *)(lVar3 + uVar17 * 8 + 0x20);
                      uVar4 = FUN_030f2bc0(*(undefined8 *)(unaff_x19 + 0x40),
                                           *(undefined4 *)(lVar8 + 0xb8),
                                           *(undefined4 *)(lVar8 + 0xbc),lVar3,
                                           *(undefined8 *)
                                            Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                                          );
                      if ((uVar4 & 1) == 0) {
                        plVar13 = *(long **)(unaff_x19 + 0x40);
                        if (plVar13 == (long *)0x0) goto LAB_056e6d80;
                        if ((lVar3 != 0) &&
                           (lVar5 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar5 == 0)) {
                          uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                          FUN_02b3c988(uVar6,0);
                        }
                        if (*(uint *)(plVar13 + 3) <= uVar10) goto LAB_056e71b8;
                        plVar13[(long)(int)uVar10 + 4] = lVar3;
                        thunk_FUN_02bb0e9c(plVar13 + (long)(int)uVar10 + 4,lVar3);
                        uVar10 = uVar10 + 1;
                        *(int *)(lVar8 + 0xbc) = *(int *)(lVar8 + 0xbc) + 1;
                      }
                      uVar12 = uVar12 - 1;
                      uVar17 = uVar17 + 1;
                    } while (uVar12 != 0);
                  }
                }
              }
              iVar15 = iVar15 + 1;
              uVar12 = (ulong)(uVar7 + 1);
            } while (iVar15 != iVar2);
          }
          lVar8 = *(long *)(unaff_x19 + 0x30);
        } while (lVar8 != 0);
      }
    }
  }
LAB_056e6d80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


