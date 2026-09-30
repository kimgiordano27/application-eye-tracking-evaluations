/*
FUNCTION_NAME: UnityEngine.UIElements.UxmlStyleTraits$$.ctor
ENTRY_POINT: 041545bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041546a4) */
/* WARNING: Removing unreachable block (ram,0x0415475c) */

void UnityEngine_UIElements_UxmlStyleTraits___ctor(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w22;
  undefined8 unaff_x23;
  long *unaff_x24;
  
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar2 = FUN_0422a494();
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_02df8f6c(*(undefined8 *)PTR_DAT_0458bc20);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar3);
    FUN_041d97d0();
    lVar5 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0415468c;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0415468c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) != 0)) {
    FUN_041c4888();
    FUN_0417ce9c();
    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30), lVar5 != 0)) {
      FUN_041c4ab8(lVar5,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18) = unaff_x23;
        thunk_FUN_01f51358();
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          iVar1 = FUN_04153ca8();
          if (unaff_w22 < iVar1) {
            lVar5 = *(long *)(unaff_x19 + 0x38);
            if (lVar5 == 0) goto LAB_04154364;
            iVar1 = FUN_04153ca8(lVar5);
            FUN_04153f18(lVar5,unaff_w22,iVar1 - unaff_w22);
          }
          return;
        }
      }
    }
  }
LAB_04154364:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


