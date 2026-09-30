/*
FUNCTION_NAME: FUN_02f7b34c
ENTRY_POINT: 02f7b34c
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_02f7b34c(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((DAT_03a2ad28 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0381f6a0);
    FUN_017fc350(PTR_DAT_03800d10);
    FUN_017fc350(PTR_DAT_037f5ae8);
    FUN_017fc350(PTR_DAT_0381f6a8);
    FUN_017fc350(PTR_DAT_037f2c78);
    DAT_03a2ad28 = 1;
  }
  plVar8 = (long *)(param_1 + 0x10);
  lVar6 = *plVar8;
  if (lVar6 != 0) {
    cVar1 = *(char *)(lVar6 + 0x10);
    plVar10 = *(long **)(lVar6 + 0x40);
    uVar9 = *(undefined8 *)(lVar6 + 0x30);
    uVar11 = *(undefined8 *)PTR_DAT_0381f6a0;
    uVar7 = **(undefined8 **)(*(long *)PTR_DAT_037f5ae8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar11 = FUN_02bddb5c(uVar11,0);
    puVar3 = PTR_DAT_03800d10;
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      if (cVar1 == '\0') {
        plVar10 = (long *)(**(code **)(lVar6 + 0x178))
                                    (plVar10,uVar9,uVar7,uVar11,*(undefined8 *)(lVar6 + 0x180));
      }
      else {
        lVar6 = (**(code **)(lVar6 + 0x1a8))
                          (plVar10,uVar9,uVar7,uVar11,*(undefined8 *)(lVar6 + 0x1b0));
        puVar4 = PTR_DAT_0381f6a8;
        if (lVar6 == 0) goto LAB_02f7b540;
        OVRPlugin_Media__SetMrcHeadsetControllerPose(lVar6,0);
        plVar10 = (long *)FUN_01df4f08(lVar6,*(undefined8 *)puVar4);
      }
      if (plVar10 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar10);
        }
      }
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        if (plVar10 == (long *)0x0) {
          uVar11 = *(undefined8 *)(lVar6 + 0x38);
          thunk_FUN_01851c08(PTR_DAT_0381cb90);
          uVar7 = thunk_FUN_01861bbc();
          uVar9 = thunk_FUN_01851c08(PTR_DAT_0381f6b0);
          FUN_02fbef2c(uVar7,uVar9,uVar11,0);
          uVar9 = thunk_FUN_01851c08(PTR_DAT_0381f6b8);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar7,uVar9);
        }
        if (*(long *)(lVar6 + 0x48) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x58);
        }
        FUN_02f7b64c(param_1,*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)(param_1 + 0x158),plVar10,
                     0,0,uVar7);
        *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x30);
        thunk_FUN_0188fd20(param_1 + 0x160);
        if (*plVar8 != 0) {
          lVar6 = *(long *)(*plVar8 + 0x48);
          if ((lVar6 != 0) && (uVar5 = FUN_02f904a4(lVar6,0), (uVar5 & 1) != 0)) {
            if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            FUN_02f7b924(param_1);
          }
          *plVar8 = 0;
          thunk_FUN_0188fd20(plVar8,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
    }
  }
LAB_02f7b540:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


