/*
FUNCTION_NAME: FUN_06aefdf8
ENTRY_POINT: 06aefdf8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_06aefdf8(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  int *piVar15;
  int iVar16;
  undefined1 auStack_1b0 [168];
  undefined1 auStack_108 [152];
  long local_70;
  byte local_68;
  
  puVar6 = Method_System_Collections_Generic_Dictionary<uint,_Func<GameObject>>__ctor__;
  if ((DAT_0755f8f6 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1328);
    FUN_03188a78(Method_System_Collections_Generic_Dictionary<uint,_Func<GameObject>>__ctor__);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(PTR_DAT_070f3c80);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_TryGetValue__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>__ctor__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                );
    FUN_03188a78(PTR_DAT_070f5830);
    FUN_03188a78(PTR_DAT_070c28d8);
    FUN_03188a78(PTR_DAT_070f1250);
    FUN_03188a78(PTR_DAT_070d1370);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_set_Item__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrGpuCombinerDrawCall_BlockData>__ctor__
                );
    FUN_03188a78(PTR_DAT_070f4518);
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrGpuCombinerDrawCall_BlockData>_TryGetValue__
                );
    DAT_0755f8f6 = 1;
  }
  memset(auStack_108,0,0xa8);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (param_2 != 0) {
    plVar8 = (long *)FUN_06b25804(param_2,**(undefined4 **)(*(long *)puVar6 + 0xb8),0);
    puVar7 = 
    Method_System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_Add__
    ;
    puVar5 = PTR_DAT_070f1328;
    puVar4 = PTR_DAT_070c2418;
    if (plVar8 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
                       + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>__ctor__
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar8);
      }
      if ((int)plVar8[3] < 1) {
        *(undefined4 *)(plVar8 + 3) = 0;
        *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
      }
      else {
        iVar16 = 0;
        do {
          FUN_043d16c4(auStack_1b0,plVar8,iVar16,*(undefined8 *)puVar7);
          memcpy(auStack_108,auStack_1b0,0xa8);
          if ((local_68 & 1) != 0) {
            if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar9 = FUN_06b73da0(auStack_108,*(long *)(*(long *)puVar6 + 0xb8) + 8,0);
            if ((uVar9 & 1) == 0) {
              lVar10 = *(long *)puVar5;
              if (*(int *)(lVar10 + 0xe4) == 0) {
                thunk_FUN_031e5338();
                lVar10 = *(long *)puVar5;
              }
              uVar9 = FUN_06b73da0(auStack_108,*(undefined8 *)(lVar10 + 0xb8),0);
              if ((uVar9 & 1) == 0) {
                if (local_70 == 0) {
                  FUN_06aeec74(param_1,param_2,auStack_108);
                }
                else {
                  FUN_06aee17c(param_1,param_2,auStack_108);
                }
              }
              else {
                plVar11 = (long *)FUN_06b1e490(param_2,0);
                if (plVar11 == (long *)0x0) goto LAB_06af02e8;
                lVar10 = *plVar11;
                bVar3 = *(byte *)(*(long *)PTR_DAT_070f5830 + 0x130);
                if ((*(byte *)(lVar10 + 0x130) < bVar3) ||
                   (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
                    *(long *)PTR_DAT_070f5830)) {
LAB_06af0080:
                  uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar9 != 0) {
                    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_070f3c80) {
                        puVar12 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_06af0100;
                      }
                      uVar9 = uVar9 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_031c0d08(plVar11,*(long *)PTR_DAT_070f3c80,0);
LAB_06af0100:
                  lVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                  if (lVar10 == 0) goto LAB_06af02e8;
                  lVar10 = FUN_06b22010(lVar10,0);
                }
                else {
                  lVar10 = FUN_06c597d4(plVar11,0);
                  if (lVar10 == 0) {
                    lVar10 = *plVar11;
                    goto LAB_06af0080;
                  }
                }
                lVar13 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,7);
                if (lVar13 == 0) goto LAB_06af02e8;
                if (*(int *)(lVar13 + 0x18) == 0) {
LAB_06af02e4:
                    /* WARNING: Subroutine does not return */
                  FUN_03188ce0();
                }
                *(undefined8 *)(lVar13 + 0x20) =
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrGpuCombinerDrawCall_BlockData>_TryGetValue__
                ;
                uVar14 = FUN_06b22010(param_2,0);
                uVar9 = FUN_057bec14(uVar14,0);
                if ((uVar9 & 1) == 0) {
                  uVar14 = FUN_06b22010(param_2,0);
                }
                else {
                  uVar14 = *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrGpuCombinerDrawCall_BlockData>__ctor__
                  ;
                }
                if (((*(ulong *)(lVar13 + 0x18) & 0xfffffffe) == 0) ||
                   (*(undefined8 *)(lVar13 + 0x28) = uVar14, (uint)*(ulong *)(lVar13 + 0x18) < 3))
                goto LAB_06af02e4;
                *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)PTR_DAT_070f4518;
                uVar14 = thunk_FUN_03196ed8(param_2,0);
                if (*(int *)(*(long *)PTR_DAT_070f1250 + 0xe4) == 0) {
                  thunk_FUN_031e5338(*(long *)PTR_DAT_070f1250);
                }
                uVar14 = FUN_06a77154(uVar14,0);
                uVar1 = *(uint *)(lVar13 + 0x18);
                if ((((uVar1 < 4) || (*(undefined8 *)(lVar13 + 0x38) = uVar14, uVar1 == 4)) ||
                    (*(undefined8 *)(lVar13 + 0x40) =
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_set_Item__
                    , uVar1 < 6)) || (*(long *)(lVar13 + 0x48) = lVar10, uVar1 == 6))
                goto LAB_06af02e4;
                *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)PTR_DAT_070d1370;
                uVar14 = FUN_057bfff0(lVar13,0);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_031e5338(*(long *)puVar4);
                }
                FUN_0698f0e8(uVar14,0);
              }
            }
            else {
              UnityEngine_UIElements_TextField__StringToValue(param_1,param_2);
            }
          }
          iVar2 = (int)plVar8[3];
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar2);
        *(undefined4 *)(plVar8 + 3) = 0;
        *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
        if (0 < iVar2) {
          FUN_0595236c(plVar8[2],0,iVar2,0);
        }
      }
    }
    return;
  }
LAB_06af02e8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


