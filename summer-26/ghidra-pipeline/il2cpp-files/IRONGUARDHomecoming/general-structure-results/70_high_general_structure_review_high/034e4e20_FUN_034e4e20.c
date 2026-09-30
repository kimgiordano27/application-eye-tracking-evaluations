/*
FUNCTION_NAME: FUN_034e4e20
ENTRY_POINT: 034e4e20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034e4e20(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  
  if ((DAT_04832de2 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    DAT_04832de2 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeStack_GetComponent<Vignette>__);
    FUN_034efd20(uVar8,uVar9,0);
LAB_034e50c4:
    uVar9 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeStack_GetComponent<WhiteBalance>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar9);
  }
  plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                       Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
  auVar14 = FUN_03416d98(plVar4,0);
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  uVar10 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar10) {
    lVar12 = 0;
    bVar2 = false;
    uVar13 = uVar10;
    do {
      if (uVar10 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44(auVar14._0_8_,auVar14._8_8_);
      }
      lVar11 = *(long *)(param_1 + 0x20 + lVar12 * 8);
      if (lVar11 == 0) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
        uVar8 = thunk_FUN_01f117cc();
        uVar9 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_Rendering_VolumeStack_GetComponent<Tonemapping>__
                                  );
        uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeStack_GetComponent<Vignette>__
                                  );
        FUN_034f7d10(uVar8,uVar9,uVar7,0);
        goto LAB_034e50c4;
      }
      if (*(int *)(lVar11 + 0x10) != 0) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar1;
        }
        iVar3 = FUN_03413064(lVar11,**(undefined8 **)(lVar5 + 0xb8),0);
        if (iVar3 != -1) {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar8 = thunk_FUN_01f117cc();
          uVar9 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_SizeOf<ushort>__
                                    );
          FUN_034f6754(uVar8,uVar9,0);
          goto LAB_034e50c4;
        }
        if (bVar2) {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (plVar4 == (long *)0x0) goto LAB_034e5090;
          FUN_03418748(plVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_034e38c0(lVar11);
        if ((uVar6 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_034e5090;
        }
        else {
          if (plVar4 == (long *)0x0) goto LAB_034e5090;
          FUN_03417dfc(plVar4,0,0);
        }
        uVar13 = uVar13 - 1;
        auVar14 = FUN_03418748(plVar4,lVar11,0);
        uVar8 = auVar14._0_8_;
        bVar2 = false;
        if (0 < (int)uVar13) {
          iVar3 = *(int *)(lVar11 + 0x10) + -1;
          auVar14._8_4_ = iVar3;
          auVar14._0_8_ = uVar8;
          auVar14._12_4_ = 0;
          if (0 < *(int *)(lVar11 + 0x10)) {
            auVar14 = FUN_03409f80(lVar11,iVar3,0);
            lVar11 = *(long *)puVar1;
            uVar10 = auVar14._0_4_;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              auVar14 = thunk_FUN_01ee6d7c(lVar11);
              lVar11 = *(long *)puVar1;
            }
            lVar5 = *(long *)(lVar11 + 0xb8);
            if ((uint)*(ushort *)(lVar5 + 10) != (uVar10 & 0xffff)) {
              if (*(int *)(lVar11 + 0xe0) == 0) {
                auVar14 = thunk_FUN_01ee6d7c(lVar11);
                lVar11 = *(long *)puVar1;
                lVar5 = *(long *)(lVar11 + 0xb8);
              }
              if ((uint)*(ushort *)(lVar5 + 8) != (uVar10 & 0xffff)) {
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  auVar14 = thunk_FUN_01ee6d7c(lVar11);
                  lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
                }
                bVar2 = (uint)*(ushort *)(lVar5 + 0x18) != (uVar10 & 0xffff);
                goto LAB_034e500c;
              }
            }
            bVar2 = false;
          }
        }
      }
LAB_034e500c:
      uVar10 = *(uint *)(param_1 + 0x18);
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < (int)uVar10);
  }
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034e5040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    return;
  }
LAB_034e5090:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


