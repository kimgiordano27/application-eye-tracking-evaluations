/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode.<get_DeepChildren>d__45$$System.IDisposable.Dispose
ENTRY_POINT: 052c13f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void OVRSimpleJSON_JSONNode_<get_DeepChildren>d__45__System_IDisposable_Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x21 + 0x610);
  if ((*(byte *)(unaff_x19 + 0xeb3) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cbb68);
    FUN_02f08768(UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbd90);
    FUN_02f08768(Unity_AppUI_UI_AssetTargetField_TypeInfo);
    FUN_02f08768(UnityEditor_Analytics_AssetImportAnalytic_TypeInfo);
    *(undefined1 *)(unaff_x19 + 0xeb3) = 1;
  }
  lVar5 = thunk_FUN_02f45270(*puVar9);
  FUN_05116b38(lVar5,0);
  puVar2 = PTR_DAT_067cbb68;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = unaff_x20;
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar2;
    }
    plVar7 = *(long **)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
      puVar4 = Unity_AppUI_UI_AssetTargetField_TypeInfo;
      puVar3 = PTR_DAT_067cbd90;
      puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
      plVar7 = (long *)*puVar9;
      if (plVar7 == (long *)0x0) {
        if (iVar1 == 0) {
          thunk_FUN_02f6670c();
          puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        if (puVar9[1] == 0) goto LAB_052c1568;
        FUN_03ffbdf8(puVar9[1],*(undefined8 *)(lVar5 + 0x10),
                     *(undefined8 *)UnityEditor_Analytics_AssetImportStatusAnalytic_TypeInfo);
      }
      else {
        if (iVar1 == 0) {
          thunk_FUN_02f6670c();
          plVar7 = (long *)**(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
        FUN_0513585c(uVar8,lVar5,*(undefined8 *)puVar4,0);
        if (plVar7 == (long *)0x0) goto LAB_052c1568;
        (**(code **)(*plVar7 + 0x188))(plVar7,uVar8,0,*(undefined8 *)(*plVar7 + 400));
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 != 0) {
        FUN_05144440(lVar5,0);
        return;
      }
    }
  }
LAB_052c1568:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


