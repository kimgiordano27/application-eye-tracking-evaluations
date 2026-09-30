/*
FUNCTION_NAME: Meta.XR.Locomotion.Teleporter.Input.Activateable$$get_Up
ENTRY_POINT: 0246ab84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Locomotion_Teleporter_Input_Activateable__get_Up(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  
  *(undefined1 *)(unaff_x20 + 0x38e) = 1;
  puVar4 = PTR_DAT_03ce6f38;
  puVar3 = PTR_DAT_03ce1548;
  lVar10 = *(long *)(unaff_x19 + 0x138);
  if (lVar10 == 0) {
LAB_0246ad28:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = *(int *)(unaff_x19 + 0x14c) - 1;
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    plVar11 = *(long **)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
    lVar9 = *(long *)PTR_DAT_03ce6bf8;
    if (plVar11 != (long *)0x0) {
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar11);
      }
    }
    uVar2 = *(int *)(unaff_x19 + 0x14c) - 3;
    if (uVar2 < *(uint *)(lVar10 + 0x18)) {
      plVar6 = *(long **)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)
           ) {
LAB_0246ad3c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar6);
        }
        uVar5 = FUN_024a0e54(plVar6,0);
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
        FUN_024c0644(uVar7,*(undefined8 *)puVar4,uVar5,0);
        puVar3 = PTR_DAT_03ce15e0;
        if ((plVar11 != (long *)0x0) && (lVar10 = *(long *)(unaff_x19 + 0x138), lVar10 != 0)) {
          if (*(uint *)(unaff_x19 + 0x14c) < *(uint *)(lVar10 + 0x18)) {
            lVar9 = plVar11[3];
            plVar6 = *(long **)(lVar10 + (long)(int)*(uint *)(unaff_x19 + 0x14c) * 8 + 0x20);
            uVar5 = FUN_024a0e54(plVar11,0);
            uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
            if (plVar6 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_03ce1af8 + 0x130);
              if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_03ce1af8)) goto LAB_0246ad3c;
            }
            FUN_024f65bc(uVar8,uVar7,lVar9,plVar6,uVar5,0);
            *(undefined8 *)(unaff_x19 + 0x140) = uVar8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (unaff_x19 + 0x140,uVar8);
            return;
          }
          goto LAB_0246ad2c;
        }
      }
      goto LAB_0246ad28;
    }
  }
LAB_0246ad2c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


