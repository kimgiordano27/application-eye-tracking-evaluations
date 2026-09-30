/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$set_Item
ENTRY_POINT: 036d9d10
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>__set_Item(ulong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x21;
  int iVar9;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  
  if ((param_1 & 1) != 0) {
LAB_036d9ca4:
    FUN_01fbafc0();
    lVar7 = *unaff_x24;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar7 = *unaff_x24;
    }
    return (long *)**(undefined8 **)(lVar7 + 0xb8);
  }
  lVar7 = *unaff_x27;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar7 = *unaff_x27;
  }
  uVar8 = FUN_037103cc(uVar5,uVar1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),
                       *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
  if ((uVar8 & 1) != 0) goto LAB_036d9ca4;
  lVar7 = *unaff_x21;
  bVar2 = *(byte *)(*(long *)PTR_DAT_06dc8bb8 + 300);
  if ((*(byte *)(lVar7 + 300) < bVar2) ||
     (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dc8bb8)) {
    bVar2 = *(byte *)(*unaff_x26 + 300);
    if ((*(byte *)(lVar7 + 300) < bVar2) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x26)) {
      plVar4 = (long *)thunk_FUN_015d056c(*unaff_x25);
      if (plVar4 == (long *)0x0) goto LAB_036d9c58;
      FUN_036efd90(plVar4,0);
    }
    else {
      plVar4 = (long *)thunk_FUN_015d056c();
      if (plVar4 == (long *)0x0) goto LAB_036d9c58;
      FUN_036f1538(plVar4,0);
    }
  }
  else {
    plVar4 = (long *)thunk_FUN_015d056c();
    if (plVar4 == (long *)0x0) goto LAB_036d9c58;
    FUN_03fbc544(plVar4,0);
  }
  if (plVar4 != (long *)0x0) {
    FUN_03fbbd88(plVar4,*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)(unaff_x19 + 0x58),0);
    uVar5 = FUN_03fbbec4(plVar4,*(undefined8 *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x19 + 0x68),
                         0);
    FUN_036dac4c(uVar5,plVar4);
    if ((unaff_x21 != (long *)0x0) && (lVar7 = (**(code **)(*unaff_x21 + 0x238))(), lVar7 != 0)) {
      iVar9 = 0;
      do {
        iVar3 = FUN_03f054bc(lVar7,0);
        if (iVar3 <= iVar9) {
          *(long *)(unaff_x19 + 0x80) = (long)plVar4;
          thunk_FUN_01656ef8((long *)(unaff_x19 + 0x80),plVar4);
          return plVar4;
        }
        lVar7 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        plVar6 = (long *)(**(code **)(*unaff_x21 + 0x238))();
        if ((plVar6 == (long *)0x0) ||
           (uVar5 = (**(code **)(*plVar6 + 0x308))(plVar6,iVar9,*(undefined8 *)(*plVar6 + 0x310)),
           lVar7 == 0)) break;
        FUN_036ef950(lVar7,uVar5,0);
        iVar9 = iVar9 + 1;
        lVar7 = (**(code **)(*unaff_x21 + 0x238))();
      } while (lVar7 != 0);
    }
  }
LAB_036d9c58:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


