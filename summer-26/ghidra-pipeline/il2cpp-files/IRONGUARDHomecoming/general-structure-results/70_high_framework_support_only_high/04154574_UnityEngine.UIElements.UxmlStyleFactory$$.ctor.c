/*
FUNCTION_NAME: UnityEngine.UIElements.UxmlStyleFactory$$.ctor
ENTRY_POINT: 04154574
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041546a4) */
/* WARNING: Removing unreachable block (ram,0x0415475c) */

void UnityEngine_UIElements_UxmlStyleFactory___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 in_w9;
  int *piVar8;
  long unaff_x19;
  int unaff_w22;
  undefined8 unaff_x23;
  int unaff_w24;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = in_w9;
  if (0 < (int)param_4) {
    FUN_0358d1e4(*(undefined8 *)(param_1 + 0x10),0,param_4,0);
  }
  if (unaff_w24 < 1) {
    uVar3 = FUN_04219978();
    iVar2 = FUN_041fe738(uVar3,0);
    if (0 < iVar2) goto LAB_041545b4;
  }
  else {
LAB_041545b4:
    puVar1 = PTR_DAT_0458bc28;
    if (*(int *)(*(long *)PTR_DAT_0458bc28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_0422a494();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar5 = (long *)FUN_02df8f6c(*(undefined8 *)PTR_DAT_0458bc20);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar5);
      FUN_041d97d0();
      lVar7 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0415468c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0415468c:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) != 0)) {
    FUN_041c4888();
    FUN_0417ce9c();
    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30), lVar7 != 0)) {
      FUN_041c4ab8(lVar7,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18) = unaff_x23;
        thunk_FUN_01f51358();
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          iVar2 = FUN_04153ca8();
          if (unaff_w22 < iVar2) {
            lVar7 = *(long *)(unaff_x19 + 0x38);
            if (lVar7 == 0) goto LAB_04154364;
            iVar2 = FUN_04153ca8(lVar7);
            FUN_04153f18(lVar7,unaff_w22,iVar2 - unaff_w22);
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


