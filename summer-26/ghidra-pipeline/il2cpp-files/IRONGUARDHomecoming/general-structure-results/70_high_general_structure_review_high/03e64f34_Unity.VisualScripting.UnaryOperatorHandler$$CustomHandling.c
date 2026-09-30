/*
FUNCTION_NAME: Unity.VisualScripting.UnaryOperatorHandler$$CustomHandling
ENTRY_POINT: 03e64f34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_UnaryOperatorHandler__CustomHandling(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  ulong unaff_x21;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  lVar7 = 5;
  do {
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)(lVar7 - 4U)) {
      FUN_0223d084();
      lVar7 = *unaff_x20;
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) == 0) {
Unity_VisualScripting_InvokerBase__GetParameterExpressions:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar5 = *(long **)(lVar7 + 0x20);
        *(undefined8 *)(unaff_x19 + 0xd0) = plVar5;
        thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xd0),plVar5);
        if (plVar5 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          if ((uVar4 & 1) != 0) {
            if ((unaff_x21 & 1) == 0) {
              iVar2 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
              iVar3 = *(int *)(unaff_x19 + 0x108);
              if (iVar2 == iVar3) {
                iVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
                iVar2 = *(int *)(unaff_x19 + 0x10c);
                if (iVar3 == iVar2) goto LAB_03e651b8;
                iVar3 = *(int *)(unaff_x19 + 0x108);
              }
              else {
                iVar2 = *(int *)(unaff_x19 + 0x10c);
              }
            }
            else {
              iVar3 = 0;
              iVar2 = 0;
            }
            FUN_0405947c(plVar5,iVar3,iVar2,1,0,0);
LAB_03e651b8:
            if (*(int *)(*(long *)PTR_DAT_0457a5d0 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_040d1068(plVar5,0);
            FUN_04059374(plVar5,0);
            return;
          }
          lVar7 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) != 0) {
              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_0457a8a0;
              thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x20));
              uVar6 = FUN_040766fc();
              if (1 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x28) = uVar6;
                thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar6);
                if (2 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_0457a828;
                  thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x30));
                  uVar6 = FUN_040766fc(plVar5,0);
                  if (3 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined8 *)(lVar7 + 0x38) = uVar6;
                    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x38),uVar6);
                    if (4 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_0457a820;
                      thunk_FUN_01f51358();
                      uVar6 = FUN_0340efe8(lVar7,0);
                      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ +
                                  0xe0) == 0) {
                        thunk_FUN_01ee6d7c(*(long *)
                                            Method_Unity_Collections_NativeArray<byte>_ToArray__);
                      }
                      FUN_0403f3d4(uVar6,plVar5,0);
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
    if ((ulong)*(uint *)(param_1 + 0x18) <= lVar7 - 4U)
    goto Unity_VisualScripting_InvokerBase__GetParameterExpressions;
    uVar6 = *(undefined8 *)(param_1 + lVar7 * 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_04077148(uVar6,1,0);
    }
    param_1 = *unaff_x20;
    lVar7 = lVar7 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


