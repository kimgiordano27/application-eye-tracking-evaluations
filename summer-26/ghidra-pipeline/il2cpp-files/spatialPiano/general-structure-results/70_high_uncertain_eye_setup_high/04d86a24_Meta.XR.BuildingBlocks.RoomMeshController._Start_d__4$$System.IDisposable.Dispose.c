/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 04d86a24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose(void)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  int in_w8;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_w8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  *(undefined8 *)(unaff_x23 + 0x20) = unaff_x21;
  if ((unaff_x22 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*unaff_x22 + 0x938))(), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = (**(code **)(*plVar3 + 0x298))();
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)PTR_DAT_067ce418;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_050e4454(uVar7,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x24);
    }
    goto LAB_04d86bb4;
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar4 & 1) == 0) goto LAB_04d86c14;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_05108c84();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_050efb68(uVar7,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_04d86b64;
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar5 = (undefined8 *)PTR_DAT_067ce428;
      }
      else {
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar5 = (undefined8 *)PTR_DAT_067ce410;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_067ce3f0;
    }
  }
  else {
LAB_04d86b64:
    if (uVar2 != 5) {
LAB_04d86c14:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      uVar7 = thunk_FUN_02f45270();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c(lVar6);
      }
      FUN_03f2611c(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return uVar7;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_067ce420;
  }
  uVar7 = *puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar7 = FUN_050e4454(uVar7,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*unaff_x24);
  }
LAB_04d86bb4:
  uVar7 = FUN_05115b34(uVar7);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  uVar7 = FUN_02a7e998(uVar7,lVar6);
  return uVar7;
}


