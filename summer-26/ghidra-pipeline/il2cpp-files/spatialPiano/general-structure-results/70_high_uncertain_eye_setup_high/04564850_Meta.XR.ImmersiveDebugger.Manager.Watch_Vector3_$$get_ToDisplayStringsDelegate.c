/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 04564850
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_ToDisplayStringsDelegate(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_02f08768(param_1 + 0xd00);
  FUN_02f08768(&DAT_068dfd18);
  FUN_02f08768(&DAT_068f1178);
  FUN_02f08768(&DAT_068e9850);
  *(undefined1 *)(unaff_x20 + 0x9be) = 1;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20);
  if (*(int *)(DAT_06bce7f8 + 0xe4) == 0) {
    thunk_FUN_02f6670c(DAT_06bce7f8);
  }
  puVar2 = PTR_DAT_067c9a28;
  plVar4 = (long *)FUN_050e4454(uVar9,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_04564c04;
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  plVar5 = (long *)FUN_050e4454(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),0);
  if (plVar5 == (long *)0x0) {
LAB_04564c00:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar4,*(undefined8 *)(*plVar5 + 0x2a0));
  puVar8 = (undefined8 *)PTR_DAT_067cda70;
  if ((uVar6 & 1) == 0) {
    if (plVar4 == (long *)0x0) goto LAB_04564c00;
    uVar6 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
    if ((uVar6 & 1) != 0) {
      uVar9 = (**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar10 = *(undefined8 *)PTR_DAT_067cda88;
      if (*(int *)(DAT_06bce7f8 + 0xe4) == 0) {
        thunk_FUN_02f6670c(DAT_06bce7f8);
      }
      uVar10 = FUN_050e4454(uVar10,0);
      uVar6 = FUN_050ed374(uVar9,uVar10,0);
      if ((uVar6 & 1) != 0) {
        lVar3 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
        if (lVar3 == 0) goto LAB_04564c00;
        if (*(int *)(lVar3 + 0x18) == 0) {
LAB_04564c0c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar4 = *(long **)(lVar3 + 0x20);
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
LAB_04564c04:
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar4);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_067cda78;
        if (*(int *)(DAT_06bce7f8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar5 = (long *)FUN_050e4454(uVar9,0);
        plVar7 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,1);
        if (plVar7 == (long *)0x0) goto LAB_04564c00;
        if ((plVar4 != (long *)0x0) &&
           (lVar3 = thunk_FUN_02f45174(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0)) {
          uVar9 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_04564c0c;
        plVar7[4] = (long)plVar4;
        if ((plVar5 == (long *)0x0) ||
           (plVar5 = (long *)(**(code **)(*plVar5 + 0x938))
                                       (plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x940)),
           plVar5 == (long *)0x0)) goto LAB_04564c00;
        uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar4,*(undefined8 *)(*plVar5 + 0x2a0));
        puVar8 = (undefined8 *)PTR_DAT_067cda80;
        if ((uVar6 & 1) != 0) goto LAB_04564950;
      }
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    plVar4 = (long *)thunk_FUN_02f45270();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    FUN_03e8cc08(plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  }
  else {
LAB_04564950:
    uVar9 = *puVar8;
    if (*(int *)(DAT_06bce7f8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050e4454(uVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar2);
    }
    plVar4 = (long *)FUN_05115b34(uVar9,plVar4,0);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar4);
      }
    }
  }
  return plVar4;
}


