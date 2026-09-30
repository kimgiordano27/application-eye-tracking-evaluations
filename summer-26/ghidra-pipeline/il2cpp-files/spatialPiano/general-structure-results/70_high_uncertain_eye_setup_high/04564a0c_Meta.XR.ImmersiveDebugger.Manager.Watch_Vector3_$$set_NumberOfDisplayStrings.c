/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_NumberOfDisplayStrings
ENTRY_POINT: 04564a0c
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_NumberOfDisplayStrings(void)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long unaff_x24;
  
  uVar2 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar2 & 1) != 0) {
    uVar3 = (**(code **)(*unaff_x20 + 0x438))();
    uVar8 = *(undefined8 *)PTR_DAT_067cda88;
    if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(unaff_x24 + 0xe0));
    }
    uVar8 = FUN_050e4454(uVar8,0);
    uVar2 = FUN_050ed374(uVar3,uVar8,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = (**(code **)(*unaff_x20 + 0x458))();
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_04564c0c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar7 = *(long **)(lVar4 + 0x20);
        if (plVar7 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x23 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(plVar7);
          }
        }
        uVar3 = *(undefined8 *)PTR_DAT_067cda78;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        plVar5 = (long *)FUN_050e4454(uVar3,0);
        plVar6 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,1);
        if (plVar6 != (long *)0x0) {
          if ((plVar7 != (long *)0x0) &&
             (lVar4 = thunk_FUN_02f45174(plVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
            uVar3 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar3,0);
          }
          if ((int)plVar6[3] == 0) goto LAB_04564c0c;
          plVar6[4] = (long)plVar7;
          if ((plVar5 != (long *)0x0) &&
             (plVar5 = (long *)(**(code **)(*plVar5 + 0x938))
                                         (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x940)),
             plVar5 != (long *)0x0)) {
            uVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x2a0));
            if ((uVar2 & 1) != 0) {
              uVar3 = *(undefined8 *)PTR_DAT_067cda80;
              if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar3 = FUN_050e4454(uVar3,0);
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*unaff_x23);
              }
              plVar7 = (long *)FUN_05115b34(uVar3,plVar7,0);
              lVar4 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02f41e9c(lVar4);
              }
              lVar4 = **(long **)(lVar4 + 0xc0);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_02f41e9c(lVar4);
              }
              if (plVar7 == (long *)0x0) {
                return (long *)0x0;
              }
              if ((*(byte *)(lVar4 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) ==
                  lVar4)) {
                return plVar7;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar7);
            }
            goto LAB_04564b88;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
LAB_04564b88:
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  plVar7 = (long *)thunk_FUN_02f45270();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  FUN_03e8cc08(plVar7,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  return plVar7;
}


