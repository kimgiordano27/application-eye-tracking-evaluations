/*
FUNCTION_NAME: Unity.VisualScripting.OptimizedReflection$$Prewarm
ENTRY_POINT: 03e64ee0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_OptimizedReflection__Prewarm(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  ulong unaff_x21;
  undefined8 uVar8;
  long lVar9;
  
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                    );
  thunk_FUN_01efb3a4(PTR_DAT_0457a820);
  thunk_FUN_01efb3a4(PTR_DAT_0457a828);
  thunk_FUN_01efb3a4(PTR_DAT_0457a8a0);
  *(undefined1 *)(unaff_x20 + 0x997) = 1;
  plVar7 = (long *)(unaff_x19 + 0xd8);
  lVar6 = *plVar7;
  *(undefined4 *)(unaff_x19 + 0xe0) = 0;
  puVar2 = PTR_DAT_0457a880;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (lVar6 == 0) {
    return;
  }
  lVar9 = 5;
  do {
    if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)(lVar9 - 4U)) {
      FUN_0223d084(plVar7,1,*(undefined8 *)puVar2);
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) {
Unity_VisualScripting_InvokerBase__GetParameterExpressions:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar7 = *(long **)(lVar6 + 0x20);
        *(undefined8 *)(unaff_x19 + 0xd0) = plVar7;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xd0),plVar7);
        if (plVar7 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
          if ((uVar5 & 1) != 0) {
            if ((unaff_x21 & 1) == 0) {
              iVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
              iVar4 = *(int *)(unaff_x19 + 0x108);
              if (iVar3 == iVar4) {
                iVar4 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
                iVar3 = *(int *)(unaff_x19 + 0x10c);
                if (iVar4 == iVar3) goto LAB_03e651b8;
                iVar4 = *(int *)(unaff_x19 + 0x108);
              }
              else {
                iVar3 = *(int *)(unaff_x19 + 0x10c);
              }
            }
            else {
              iVar4 = 0;
              iVar3 = 0;
            }
            FUN_0405947c(plVar7,iVar4,iVar3,1,0,0);
LAB_03e651b8:
            if (*(int *)(*(long *)PTR_DAT_0457a5d0 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_040d1068(plVar7,0);
            FUN_04059374(plVar7,0);
            return;
          }
          lVar6 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x18) != 0) {
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_0457a8a0;
              thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x20));
              uVar8 = FUN_040766fc();
              if (1 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x28) = uVar8;
                thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x28),uVar8);
                if (2 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_0457a828;
                  thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x30));
                  uVar8 = FUN_040766fc(plVar7,0);
                  if (3 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x38) = uVar8;
                    thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x38),uVar8);
                    if (4 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_0457a820;
                      thunk_FUN_01f51358();
                      uVar8 = FUN_0340efe8(lVar6,0);
                      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ +
                                  0xe0) == 0) {
                        thunk_FUN_01ee6d7c(*(long *)
                                            Method_Unity_Collections_NativeArray<byte>_ToArray__);
                      }
                      FUN_0403f3d4(uVar8,plVar7,0);
                      return;
                    }
                  }
                }
              }
            }
            goto Unity_VisualScripting_InvokerBase__GetParameterExpressions;
          }
        }
      }
      break;
    }
    if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar9 - 4U)
    goto Unity_VisualScripting_InvokerBase__GetParameterExpressions;
    uVar8 = *(undefined8 *)(lVar6 + lVar9 * 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar8,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_04077148(uVar8,1,0);
    }
    lVar6 = *plVar7;
    lVar9 = lVar9 + 1;
  } while (lVar6 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


