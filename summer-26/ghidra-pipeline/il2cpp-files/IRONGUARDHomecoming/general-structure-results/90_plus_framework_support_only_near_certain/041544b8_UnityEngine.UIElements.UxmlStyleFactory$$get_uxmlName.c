/*
FUNCTION_NAME: UnityEngine.UIElements.UxmlStyleFactory$$get_uxmlName
ENTRY_POINT: 041544b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041546a4) */
/* WARNING: Removing unreachable block (ram,0x0415475c) */

void UnityEngine_UIElements_UxmlStyleFactory__get_uxmlName(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  undefined8 unaff_x23;
  int unaff_w24;
  
  FUN_04219978();
  FUN_04155068();
  FUN_0422ba70();
  FUN_0415513c();
  FUN_04203098(&stack0x000000b0,0);
  FUN_04228294();
  uVar4 = FUN_04219978();
  uVar2 = FUN_027648b0(uVar4,*(undefined8 *)PTR_DAT_0458bc38);
  *(undefined4 *)(unaff_x21 + 800) = uVar2;
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_04154364;
  puVar5 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
  *puVar5 = 0;
  thunk_FUN_01f51358(puVar5,0);
  lVar8 = *(long *)(unaff_x19 + 0x28);
  if (lVar8 == 0) goto LAB_04154364;
  iVar3 = *(int *)(lVar8 + 0x18);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (0 < iVar3) {
    FUN_0358d1e4(*(undefined8 *)(lVar8 + 0x10),0,iVar3,0);
  }
  if (unaff_w24 < 1) {
    uVar4 = FUN_04219978();
    iVar3 = FUN_041fe738(uVar4,0);
    if (0 < iVar3) goto LAB_041545b4;
  }
  else {
LAB_041545b4:
    puVar1 = PTR_DAT_0458bc28;
    if (*(int *)(*(long *)PTR_DAT_0458bc28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_0422a494();
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar7 = (long *)FUN_02df8f6c(*(undefined8 *)PTR_DAT_0458bc20);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar7);
      FUN_041d97d0();
      lVar8 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0415468c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0415468c:
      (*(code *)*puVar5)(plVar7,puVar5[1]);
    }
  }
  if ((*(long *)(unaff_x19 + 0x38) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x38) + 0x30) != 0)) {
    FUN_041c4888();
    FUN_0417ce9c();
    if ((*(long *)(unaff_x19 + 0x38) != 0) &&
       (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30), lVar8 != 0)) {
      FUN_041c4ab8(lVar8,0);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18) = unaff_x23;
        thunk_FUN_01f51358();
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          iVar3 = FUN_04153ca8();
          if (unaff_w22 < iVar3) {
            lVar8 = *(long *)(unaff_x19 + 0x38);
            if (lVar8 == 0) goto LAB_04154364;
            iVar3 = FUN_04153ca8(lVar8);
            FUN_04153f18(lVar8,unaff_w22,iVar3 - unaff_w22);
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


