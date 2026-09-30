/*
FUNCTION_NAME: FUN_027b2480
ENTRY_POINT: 027b2480
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_027b2480(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 local_34;
  
  if ((DAT_037887ff & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                      );
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(PTR_DAT_033f6548);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    DAT_037887ff = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
           ) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_027b254c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(param_2,*(long *)
                                   Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                          ,0);
LAB_027b254c:
    iVar2 = (*(code *)*puVar5)(param_2,puVar5[1]);
    puVar1 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar8 != 0) {
      iVar4 = *(int *)(lVar8 + 0x18) + -1;
      if (iVar4 < 0) {
        iVar12 = 0;
LAB_027b261c:
        if (*(long *)(param_1 + 0x28) != 0) {
          iVar4 = FUN_027ed8fc(*(long *)(param_1 + 0x28),0);
          if (iVar4 == 0) {
            if (*(long *)(param_1 + 0x28) != 0) {
              FUN_027ed9b0(*(long *)(param_1 + 0x28),0);
              return;
            }
          }
          else {
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                        UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
            if (lVar8 != 0) {
              FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033f6e48);
              puVar1 = StringLiteral_4747;
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 != 0) {
                iVar4 = 0;
                do {
                  if (*(int *)(lVar9 + 0x18) <= iVar4) {
                    if (*(long *)(param_1 + 0x28) != 0) {
                      FUN_027f2950(*(long *)(param_1 + 0x28),lVar8,0);
                      return;
                    }
                    break;
                  }
                  FUN_00ac20f0(lVar8,(iVar2 - iVar12) + iVar4,*(undefined8 *)puVar1);
                  lVar9 = *(long *)(param_1 + 0x18);
                  iVar4 = iVar4 + 1;
                } while (lVar9 != 0);
              }
            }
          }
        }
      }
      else {
        iVar13 = 0;
        iVar12 = 0;
        do {
          FUN_0132138c(lVar8,iVar4,&local_34,*(undefined8 *)puVar1);
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x440), plVar6 == (long *)0x0)) break;
          iVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,local_34,*(undefined8 *)(*plVar6 + 400));
          if (-1 < iVar3) {
            iVar7 = iVar2 - iVar12;
            if (iVar3 < iVar2) {
              if (iVar3 < iVar7) {
                iVar12 = iVar12 + 1;
                iVar7 = iVar7 + -1;
              }
            }
            else {
              iVar3 = iVar3 + iVar13;
              iVar13 = iVar13 + 1;
            }
            if ((*(long *)(param_1 + 0x28) == 0) ||
               (plVar6 = *(long **)(*(long *)(param_1 + 0x28) + 0x508), plVar6 == (long *)0x0))
            break;
            (**(code **)(*plVar6 + 600))(plVar6,iVar3,iVar7,*(undefined8 *)(*plVar6 + 0x260));
          }
          iVar4 = iVar4 + -1;
          if (iVar4 < 0) goto LAB_027b261c;
          lVar8 = *(long *)(param_1 + 0x18);
        } while (lVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


