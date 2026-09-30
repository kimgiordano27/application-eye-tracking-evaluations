/*
FUNCTION_NAME: Unity.Mathematics.uint3$$op_Addition
ENTRY_POINT: 056e6e78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_uint3__op_Addition(void)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar9;
  undefined8 *unaff_x21;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 in_stack_00000008;
  
  uVar3 = FUN_02b3c908(*(undefined8 *)
                        Method_Oculus_Interaction_Body_Input_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>__ctor__
                       ,unaff_w20);
  *unaff_x21 = uVar3;
  thunk_FUN_02bb0e9c();
  lVar7 = *(long *)(unaff_x19 + 0x30);
  if (lVar7 != 0) {
    uVar11 = 0;
    lVar16 = 0;
    uVar13 = 0;
    uVar15 = 0;
    do {
      uVar15 = (ulong)(int)uVar15;
      while( true ) {
        uVar8 = (uint)*(undefined8 *)(lVar7 + 0x18);
        if ((long)(int)uVar8 <= (long)uVar15) {
          if (lVar16 == 0) {
            *(long *)(unaff_x19 + 0x38) = lVar7;
          }
          else {
            *(long *)(unaff_x19 + 0x38) = lVar16;
            lVar7 = lVar16;
          }
          thunk_FUN_02bb0e9c(unaff_x19 + 0x38,lVar7);
          *(uint *)(unaff_x19 + 200) = *(uint *)(unaff_x19 + 200) | 0xc;
          return;
        }
        if (uVar8 <= (uint)uVar15) goto LAB_056e71b8;
        lVar7 = FUN_056e31f4();
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0xb0) == -1)) break;
        lVar7 = *(long *)(unaff_x19 + 0x30);
        uVar15 = uVar15 + 1;
        if (lVar7 == 0) goto LAB_056e6d80;
      }
      iVar2 = *(int *)(lVar7 + 0xb4);
      *(uint *)(lVar7 + 0xb8) = uVar13;
      uVar8 = (uint)uVar15;
      if (lVar16 != 0) {
        uVar8 = uVar11;
      }
      *(uint *)(lVar7 + 0xb0) = uVar8;
      if (0 < iVar2) {
        iVar12 = 0;
        uVar10 = uVar15 & 0xffffffff;
        do {
          uVar8 = (uint)uVar10;
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar8) {
LAB_056e71b8:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar4 = FUN_056e31f4();
          if (lVar4 == lVar7) {
            uVar14 = (uint)uVar15;
            if (uVar14 == uVar8) {
              uVar14 = uVar14 + 1;
            }
            uVar15 = (ulong)uVar14;
          }
          else {
            if (lVar16 == 0) {
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
              lVar16 = FUN_02b3c908(*(undefined8 *)
                                     Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_Awake__
                                    ,*(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x18));
              FUN_04d9e334(*(undefined8 *)(unaff_x19 + 0x30),0,lVar16,0,uVar10,0);
              uVar11 = uVar8;
            }
            do {
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_056e6d80;
              uVar8 = (int)uVar10 + 1;
              uVar10 = (ulong)uVar8;
              if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar8) goto LAB_056e71b8;
              lVar4 = FUN_056e31f4();
            } while (lVar4 != lVar7);
          }
          if (lVar16 != 0) {
            lVar4 = *(long *)(unaff_x19 + 0x30);
            if (lVar4 == 0) goto LAB_056e6d80;
            if ((*(uint *)(lVar4 + 0x18) <= uVar8) || (*(uint *)(lVar16 + 0x18) <= uVar11))
            goto LAB_056e71b8;
            lVar6 = lVar16 + (long)(int)uVar11 * 0x58;
            uVar11 = uVar11 + 1;
            memmove((void *)(lVar6 + 0x20),(void *)(lVar4 + (long)(int)uVar8 * 0x58 + 0x20),0x58);
            thunk_FUN_02bb0e9c(lVar6 + 0x20,0);
          }
          if (*(long *)(unaff_x19 + 0x60) != 0) {
            lVar4 = *(long *)(unaff_x19 + 0x30);
            if (lVar4 == 0) goto LAB_056e6d80;
            if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_056e71b8;
            uVar10 = FUN_056f85e4(lVar4 + (long)(int)uVar8 * 0x58 + 0x20,0);
            if ((uVar10 & 1) == 0) {
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_056e6d80;
              lVar4 = FUN_056fb390(*(long *)(unaff_x19 + 0x60),0);
              pbVar1 = (byte *)(lVar4 + (long)(int)(uVar8 + in_stack_00000008._4_4_) * 0x20);
              uVar10 = (ulong)*pbVar1;
              if (uVar10 != 0) {
                uVar17 = (ulong)*(ushort *)(pbVar1 + 0xe);
                do {
                  if ((*(long *)(unaff_x19 + 0x60) == 0) ||
                     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x18), lVar4 == 0))
                  goto LAB_056e6d80;
                  if (*(uint *)(lVar4 + 0x18) <= uVar17) goto LAB_056e71b8;
                  lVar4 = *(long *)(lVar4 + uVar17 * 8 + 0x20);
                  uVar5 = FUN_030f2bc0(*(undefined8 *)(unaff_x19 + 0x40),
                                       *(undefined4 *)(lVar7 + 0xb8),*(undefined4 *)(lVar7 + 0xbc),
                                       lVar4,*(undefined8 *)
                                              Method_UnityEngine_Rendering_DynamicArray_Iterator<RenderGraphObjectPool_SharedObjectPoolBase>_get_Current__
                                      );
                  if ((uVar5 & 1) == 0) {
                    plVar9 = *(long **)(unaff_x19 + 0x40);
                    if (plVar9 == (long *)0x0) goto LAB_056e6d80;
                    if ((lVar4 != 0) &&
                       (lVar6 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar6 == 0)) {
                      uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                      FUN_02b3c988(uVar3,0);
                    }
                    if (*(uint *)(plVar9 + 3) <= uVar13) goto LAB_056e71b8;
                    plVar9[(long)(int)uVar13 + 4] = lVar4;
                    thunk_FUN_02bb0e9c(plVar9 + (long)(int)uVar13 + 4,lVar4);
                    uVar13 = uVar13 + 1;
                    *(int *)(lVar7 + 0xbc) = *(int *)(lVar7 + 0xbc) + 1;
                  }
                  uVar10 = uVar10 - 1;
                  uVar17 = uVar17 + 1;
                } while (uVar10 != 0);
              }
            }
          }
          iVar12 = iVar12 + 1;
          uVar10 = (ulong)(uVar8 + 1);
        } while (iVar12 != iVar2);
      }
      lVar7 = *(long *)(unaff_x19 + 0x30);
    } while (lVar7 != 0);
  }
LAB_056e6d80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


