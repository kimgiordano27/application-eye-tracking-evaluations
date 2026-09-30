/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 045648cc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_ToDisplayStringsDelegate(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x23;
  long unaff_x24;
  
  plVar2 = (long *)FUN_050e4454();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23))
    goto LAB_04564c04;
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  plVar4 = (long *)FUN_050e4454(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),0);
  if (plVar4 == (long *)0x0) goto LAB_04564c00;
  uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x2a0));
  if ((uVar5 & 1) == 0) {
    if (plVar2 == (long *)0x0) goto LAB_04564c00;
    uVar5 = (**(code **)(*plVar2 + 0x3b8))(plVar2,*(undefined8 *)(*plVar2 + 0x3c0));
    if ((uVar5 & 1) != 0) {
      uVar8 = (**(code **)(*plVar2 + 0x438))(plVar2,*(undefined8 *)(*plVar2 + 0x440));
      uVar9 = *(undefined8 *)PTR_DAT_067cda88;
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(unaff_x24 + 0xe0));
      }
      uVar9 = FUN_050e4454(uVar9,0);
      uVar5 = FUN_050ed374(uVar8,uVar9,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460));
        if (lVar3 == 0) goto LAB_04564c00;
        if (*(int *)(lVar3 + 0x18) == 0) {
LAB_04564c0c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar2 = *(long **)(lVar3 + 0x20);
        if (plVar2 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x23 + 0x130);
          if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
LAB_04564c04:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar2);
          }
        }
        uVar8 = *(undefined8 *)PTR_DAT_067cda78;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar4 = (long *)FUN_050e4454(uVar8,0);
        plVar6 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,1);
        if (plVar6 == (long *)0x0) goto LAB_04564c00;
        if ((plVar2 != (long *)0x0) &&
           (lVar3 = thunk_FUN_02f45174(plVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
          uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar8,0);
        }
        if ((int)plVar6[3] == 0) goto LAB_04564c0c;
        plVar6[4] = (long)plVar2;
        if (plVar4 == (long *)0x0) {
LAB_04564c00:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x938))
                                   (plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x940));
        if (plVar4 == (long *)0x0) goto LAB_04564c00;
        uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x2a0));
        if ((uVar5 & 1) != 0) {
          lVar3 = *(long *)(unaff_x24 + 0xe0);
          puVar7 = (undefined8 *)PTR_DAT_067cda80;
          goto LAB_04564950;
        }
      }
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    plVar2 = (long *)thunk_FUN_02f45270();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    FUN_03e8cc08(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  }
  else {
    lVar3 = *(long *)(unaff_x24 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_067cda70;
LAB_04564950:
    uVar8 = *puVar7;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_050e4454(uVar8,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*unaff_x23);
    }
    plVar2 = (long *)FUN_05115b34(uVar8,plVar2,0);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar2);
      }
    }
  }
  return plVar2;
}


