/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__78$$System.IDisposable.Dispose
ENTRY_POINT: 072d890c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__78__System_IDisposable_Dispose
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x23;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x23 + 0xbb0);
  FUN_089e3b44();
  uVar2 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>();
  *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
  thunk_FUN_040ec700();
  uVar2 = Unity_Jobs_IJobExtensions__Schedule<UnsafeQueueDisposeJob>();
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x60),uVar2);
  if ((*(long *)(unaff_x19 + 0x78) == 0) && (lVar3 = FUN_072d7ee0(), lVar3 != 0)) {
    lVar3 = FUN_072d7ee0();
    if (lVar3 == 0) goto LAB_072d8b44;
    lVar6 = *plVar8;
    uVar2 = *(undefined8 *)(lVar3 + 0x40);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar6);
    }
    uVar5 = UnityEngine_UIElements_AtlasBase__SetDynamicTexture(uVar2,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = FUN_072d7ee0();
      if (lVar3 == 0) goto LAB_072d8b44;
      FUN_072cd650();
    }
  }
  lVar3 = FUN_072d7ee0();
  if (lVar3 != 0) {
    lVar3 = FUN_072d7ee0();
    puVar1 = PTR_DAT_09285e40;
    if (lVar3 == 0) goto LAB_072d8b44;
    plVar7 = (long *)(lVar3 + 0x68);
    lVar3 = *plVar7;
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285e40);
    FUN_075d444c();
    plVar4 = (long *)FUN_076c0530(lVar3,uVar2,0);
    if (plVar4 == (long *)0x0) {
      *plVar7 = 0;
    }
    else {
      lVar3 = *(long *)puVar1;
      if ((*plVar4 != lVar3) || (*plVar7 = (long)plVar4, *plVar4 != lVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar4);
      }
    }
    thunk_FUN_040ec700(plVar7,plVar4);
  }
  FUN_072d8b48();
  FUN_072d7d84();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*plVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar5 = FUN_089ca704(uVar2,0,0);
  if ((uVar5 & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x30);
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3d60);
    FUN_072ebb44();
    if (lVar3 != 0) {
      FUN_072ed624(lVar3,uVar2,0);
      lVar3 = *(long *)(unaff_x19 + 0x30);
      uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3d38);
      FUN_06e5b700();
      if (lVar3 != 0) {
        FUN_072ed75c(lVar3,uVar2,0);
        goto LAB_072d8b10;
      }
    }
LAB_072d8b44:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_072d8b10:
  uVar2 = FUN_04f38a28();
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0xb0),uVar2);
  return;
}


