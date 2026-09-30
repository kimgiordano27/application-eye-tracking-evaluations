/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 036d9aa8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  uint in_w9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x27;
  long *plVar10;
  
  puVar3 = PTR_DAT_06e184b0;
  plVar10 = *(long **)(unaff_x27 + 0xc30);
  if ((*(byte *)(in_x11 + 300) <= in_w9) &&
     (*(long *)(in_x10 + (ulong)*(byte *)(in_x11 + 300) * 8 + -8) == in_x11)) {
    if ((unaff_x22 & 1) == 0) {
      FUN_01fbaf30();
      goto LAB_036d9ca4;
    }
    lVar6 = *plVar10;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar6 = *plVar10;
    }
    uVar9 = FUN_03710578(uVar7,uVar1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                         *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
    if ((uVar9 & 1) == 0) {
      lVar6 = *plVar10;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar6 = *plVar10;
      }
      uVar9 = FUN_037103cc(uVar7,uVar1,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),0);
      if ((uVar9 & 1) == 0) goto LAB_036d9b10;
    }
    FUN_01fbafc0();
LAB_036d9ca4:
    lVar6 = *unaff_x24;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar6 = *unaff_x24;
    }
    return (long *)**(undefined8 **)(lVar6 + 0xb8);
  }
  bVar2 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
  if ((bVar2 <= in_w9) && (*(long *)(in_x10 + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06e184b0))
  {
    lVar6 = (**(code **)(param_1 + 0x238))();
    if (lVar6 == 0) goto LAB_036d9c58;
    iVar4 = FUN_03f054bc(lVar6,0);
    if (iVar4 == 0) {
      lVar6 = *plVar10;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar6 = *plVar10;
      }
      uVar9 = FUN_037103cc(uVar7,uVar1,**(undefined8 **)(lVar6 + 0xb8),
                           (*(undefined8 **)(lVar6 + 0xb8))[1],0);
      if ((uVar9 & 1) != 0) {
        FUN_01fbb444();
      }
      goto LAB_036d9ca4;
    }
  }
LAB_036d9b10:
  lVar6 = *unaff_x21;
  bVar2 = *(byte *)(*(long *)PTR_DAT_06dc8bb8 + 300);
  if ((*(byte *)(lVar6 + 300) < bVar2) ||
     (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06dc8bb8)) {
    bVar2 = *(byte *)(*(long *)puVar3 + 300);
    if ((*(byte *)(lVar6 + 300) < bVar2) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
      plVar10 = (long *)thunk_FUN_015d056c(*unaff_x25);
      if (plVar10 == (long *)0x0) goto LAB_036d9c58;
      FUN_036efd90(plVar10,0);
    }
    else {
      plVar10 = (long *)thunk_FUN_015d056c();
      if (plVar10 == (long *)0x0) goto LAB_036d9c58;
      FUN_036f1538(plVar10,0);
    }
  }
  else {
    plVar10 = (long *)thunk_FUN_015d056c();
    if (plVar10 == (long *)0x0) goto LAB_036d9c58;
    FUN_03fbc544(plVar10,0);
  }
  if (plVar10 != (long *)0x0) {
    FUN_03fbbd88(plVar10,*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)(unaff_x19 + 0x58),0);
    uVar7 = FUN_03fbbec4(plVar10,*(undefined8 *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x19 + 0x68)
                         ,0);
    FUN_036dac4c(uVar7,plVar10);
    if ((unaff_x21 != (long *)0x0) && (lVar6 = (**(code **)(*unaff_x21 + 0x238))(), lVar6 != 0)) {
      iVar4 = 0;
      do {
        iVar5 = FUN_03f054bc(lVar6,0);
        if (iVar5 <= iVar4) {
          *(long *)(unaff_x19 + 0x80) = (long)plVar10;
          thunk_FUN_01656ef8((long *)(unaff_x19 + 0x80),plVar10);
          return plVar10;
        }
        lVar6 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        plVar8 = (long *)(**(code **)(*unaff_x21 + 0x238))();
        if ((plVar8 == (long *)0x0) ||
           (uVar7 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar4,*(undefined8 *)(*plVar8 + 0x310)),
           lVar6 == 0)) break;
        FUN_036ef950(lVar6,uVar7,0);
        iVar4 = iVar4 + 1;
        lVar6 = (**(code **)(*unaff_x21 + 0x238))();
      } while (lVar6 != 0);
    }
  }
LAB_036d9c58:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


