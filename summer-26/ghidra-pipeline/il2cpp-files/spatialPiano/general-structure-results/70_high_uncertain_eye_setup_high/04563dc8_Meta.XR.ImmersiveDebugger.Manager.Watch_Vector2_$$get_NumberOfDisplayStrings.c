/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfDisplayStrings
ENTRY_POINT: 04563dc8
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfDisplayStrings(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int in_w8;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long unaff_x24;
  
  if (in_w8 != 0) {
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar6);
      }
    }
    uVar7 = *(undefined8 *)PTR_DAT_067cda78;
    if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    plVar2 = (long *)FUN_050e4454(uVar7,0);
    plVar3 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ca1a8,1);
    if (plVar3 != (long *)0x0) {
      if ((plVar6 != (long *)0x0) &&
         (lVar4 = thunk_FUN_02f45174(plVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar7,0);
      }
      if ((int)plVar3[3] == 0) goto LAB_04563f3c;
      plVar3[4] = (long)plVar6;
      if (plVar2 != (long *)0x0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x938))
                                   (plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x940));
        if (plVar2 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar2 + 0x298))(plVar2,plVar6,*(undefined8 *)(*plVar2 + 0x2a0));
          if ((uVar5 & 1) == 0) {
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02f41e9c();
            }
            if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
              FUN_02f41e9c();
            }
            plVar6 = (long *)thunk_FUN_02f45270();
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02f41e9c(lVar4);
            }
            FUN_03e8c90c(plVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
          }
          else {
            uVar7 = *(undefined8 *)PTR_DAT_067cda80;
            if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar7 = FUN_050e4454(uVar7,0);
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*unaff_x23);
            }
            plVar6 = (long *)FUN_05115b34(uVar7,plVar6,0);
            lVar4 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02f41e9c(lVar4);
            }
            lVar4 = **(long **)(lVar4 + 0xc0);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02f41e9c(lVar4);
            }
            if (plVar6 != (long *)0x0) {
              if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) !=
                  lVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f08d48(plVar6);
              }
            }
          }
          return plVar6;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_04563f3c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


