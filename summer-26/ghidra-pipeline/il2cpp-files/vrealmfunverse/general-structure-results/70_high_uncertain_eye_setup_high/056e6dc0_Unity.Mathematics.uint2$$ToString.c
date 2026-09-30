/*
FUNCTION_NAME: Unity.Mathematics.uint2$$ToString
ENTRY_POINT: 056e6dc0
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


void Unity_Mathematics_uint2__ToString(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  uint in_w9;
  uint uVar9;
  long lVar10;
  long unaff_x19;
  int unaff_w20;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 in_stack_00000008;
  
  uVar9 = 0;
  do {
    if (in_w9 == uVar9) goto LAB_056e71b8;
    lVar10 = *(long *)(param_1 + (long)(int)uVar9 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_056e6d80;
    uVar9 = uVar9 + 1;
    *(undefined8 *)(lVar10 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar10 + 0xb0) = 0xffffffff;
  } while ((in_w9 & ((int)in_w9 >> 0x1f ^ 0xffffffffU)) != uVar9);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar8 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x18);
    if (0 < (int)uVar8) {
      uVar11 = 0;
      do {
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
        if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar11) {
LAB_056e71b8:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar10 = FUN_056e31f4();
        if (lVar10 != 0) {
          *(int *)(lVar10 + 0xb4) = *(int *)(lVar10 + 0xb4) + 1;
        }
        uVar11 = uVar11 + 1;
      } while ((uVar8 & 0xffffffff) != uVar11);
    }
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      plVar12 = (long *)(unaff_x19 + 0x40);
      if ((*plVar12 == 0) || (unaff_w20 != *(int *)(*plVar12 + 0x18))) {
        if (unaff_w20 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = FUN_02b3c908(*(undefined8 *)
                                 Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                                ,unaff_w20);
        }
        *plVar12 = lVar10;
        thunk_FUN_02bb0e9c(plVar12);
      }
    }
    lVar10 = *(long *)(unaff_x19 + 0x30);
    if (lVar10 != 0) {
      uVar9 = 0;
      lVar16 = 0;
      uVar14 = 0;
      uVar8 = 0;
      do {
        uVar8 = (ulong)(int)uVar8;
        while( true ) {
          uVar7 = (uint)*(undefined8 *)(lVar10 + 0x18);
          if ((long)(int)uVar7 <= (long)uVar8) {
            if (lVar16 == 0) {
              *(long *)(unaff_x19 + 0x38) = lVar10;
            }
            else {
              *(long *)(unaff_x19 + 0x38) = lVar16;
              lVar10 = lVar16;
            }
            thunk_FUN_02bb0e9c(unaff_x19 + 0x38,lVar10);
            *(uint *)(unaff_x19 + 200) = *(uint *)(unaff_x19 + 200) | 0xc;
            return;
          }
          if (uVar7 <= (uint)uVar8) goto LAB_056e71b8;
          lVar10 = FUN_056e31f4();
          if ((lVar10 != 0) && (*(int *)(lVar10 + 0xb0) == -1)) break;
          lVar10 = *(long *)(unaff_x19 + 0x30);
          uVar8 = uVar8 + 1;
          if (lVar10 == 0) goto LAB_056e6d80;
        }
        iVar2 = *(int *)(lVar10 + 0xb4);
        *(uint *)(lVar10 + 0xb8) = uVar14;
        uVar7 = (uint)uVar8;
        if (lVar16 != 0) {
          uVar7 = uVar9;
        }
        *(uint *)(lVar10 + 0xb0) = uVar7;
        if (0 < iVar2) {
          iVar13 = 0;
          uVar11 = uVar8 & 0xffffffff;
          do {
            uVar7 = (uint)uVar11;
            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
            if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar7) goto LAB_056e71b8;
            lVar3 = FUN_056e31f4();
            if (lVar3 == lVar10) {
              uVar15 = (uint)uVar8;
              if (uVar15 == uVar7) {
                uVar15 = uVar15 + 1;
              }
              uVar8 = (ulong)uVar15;
            }
            else {
              if (lVar16 == 0) {
                if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
                lVar16 = FUN_02b3c908(*(undefined8 *)
                                       Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_Awake__
                                      ,*(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x18));
                FUN_04d9e334(*(undefined8 *)(unaff_x19 + 0x30),0,lVar16,0,uVar11,0);
                uVar9 = uVar7;
              }
              do {
                if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
                uVar7 = (int)uVar11 + 1;
                uVar11 = (ulong)uVar7;
                if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar7) goto LAB_056e71b8;
                lVar3 = FUN_056e31f4();
              } while (lVar3 != lVar10);
            }
            if (lVar16 != 0) {
              lVar3 = *(long *)(unaff_x19 + 0x30);
              if (lVar3 == 0) goto LAB_056e6d80;
              if ((*(uint *)(lVar3 + 0x18) <= uVar7) || (*(uint *)(lVar16 + 0x18) <= uVar9))
              goto LAB_056e71b8;
              lVar5 = lVar16 + (long)(int)uVar9 * 0x58;
              uVar9 = uVar9 + 1;
              memmove((void *)(lVar5 + 0x20),(void *)(lVar3 + (long)(int)uVar7 * 0x58 + 0x20),0x58);
              thunk_FUN_02bb0e9c(lVar5 + 0x20,0);
            }
            if (*(long *)(unaff_x19 + 0x60) != 0) {
              lVar3 = *(long *)(unaff_x19 + 0x30);
              if (lVar3 == 0) goto LAB_056e6d80;
              if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_056e71b8;
              uVar11 = FUN_056f85e4(lVar3 + (long)(int)uVar7 * 0x58 + 0x20,0);
              if ((uVar11 & 1) == 0) {
                if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_056e6d80;
                lVar3 = FUN_056fb390(*(long *)(unaff_x19 + 0x60),0);
                pbVar1 = (byte *)(lVar3 + (long)(int)(uVar7 + in_stack_00000008._4_4_) * 0x20);
                uVar11 = (ulong)*pbVar1;
                if (uVar11 != 0) {
                  uVar17 = (ulong)*(ushort *)(pbVar1 + 0xe);
                  do {
                    if ((*(long *)(unaff_x19 + 0x60) == 0) ||
                       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x18), lVar3 == 0))
                    goto LAB_056e6d80;
                    if (*(uint *)(lVar3 + 0x18) <= uVar17) goto LAB_056e71b8;
                    lVar3 = *(long *)(lVar3 + uVar17 * 8 + 0x20);
                    uVar4 = FUN_030f2bc0(*(undefined8 *)(unaff_x19 + 0x40),
                                         *(undefined4 *)(lVar10 + 0xb8),
                                         *(undefined4 *)(lVar10 + 0xbc),lVar3,
                                         *(undefined8 *)
                                          Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                                        );
                    if ((uVar4 & 1) == 0) {
                      plVar12 = *(long **)(unaff_x19 + 0x40);
                      if (plVar12 == (long *)0x0) goto LAB_056e6d80;
                      if ((lVar3 != 0) &&
                         (lVar5 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar5 == 0)) {
                        uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                        FUN_02b3c988(uVar6,0);
                      }
                      if (*(uint *)(plVar12 + 3) <= uVar14) goto LAB_056e71b8;
                      plVar12[(long)(int)uVar14 + 4] = lVar3;
                      thunk_FUN_02bb0e9c(plVar12 + (long)(int)uVar14 + 4,lVar3);
                      uVar14 = uVar14 + 1;
                      *(int *)(lVar10 + 0xbc) = *(int *)(lVar10 + 0xbc) + 1;
                    }
                    uVar11 = uVar11 - 1;
                    uVar17 = uVar17 + 1;
                  } while (uVar11 != 0);
                }
              }
            }
            iVar13 = iVar13 + 1;
            uVar11 = (ulong)(uVar7 + 1);
          } while (iVar13 != iVar2);
        }
        lVar10 = *(long *)(unaff_x19 + 0x30);
      } while (lVar10 != 0);
    }
  }
LAB_056e6d80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


