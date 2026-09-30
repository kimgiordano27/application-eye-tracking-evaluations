/*
FUNCTION_NAME: Meta.XR.Locomotion.Teleporter.Input$$remove_OnResetOrientationButtonDown
ENTRY_POINT: 0246a790
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Locomotion_Teleporter_Input__remove_OnResetOrientationButtonDown(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  if ((DAT_0412338c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ce2d48);
    FUN_01ab69ac(PTR_DAT_03ce6bf8);
    FUN_01ab69ac(PTR_DAT_03ce15e0);
    FUN_01ab69ac(PTR_DAT_03ce1af8);
    DAT_0412338c = 1;
  }
  puVar4 = PTR_DAT_03ce15e0;
  lVar8 = *(long *)(param_1 + 0x138);
  if (lVar8 == 0) {
LAB_0246a94c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = *(uint *)(param_1 + 0x14c);
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (uVar3 - 1 < uVar1) {
    plVar6 = *(long **)(lVar8 + (long)(int)(uVar3 - 1) * 8 + 0x20);
    if (plVar6 == (long *)0x0) {
      if (uVar3 - 3 < uVar1) goto LAB_0246a94c;
    }
    else {
      bVar2 = *(byte *)(*(long *)PTR_DAT_03ce6bf8 + 0x130);
      plVar9 = plVar6;
      if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_03ce6bf8))
      {
LAB_0246a93c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar9);
      }
      if ((uVar3 - 3 < uVar1) && (uVar3 < uVar1)) {
        lVar10 = plVar6[3];
        plVar11 = *(long **)(lVar8 + (long)(int)(uVar3 - 3) * 8 + 0x20);
        plVar9 = *(long **)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
        uVar5 = FUN_024a0e54(plVar6,0);
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
        if (plVar11 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_03ce2d48 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_03ce2d48)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar11);
          }
        }
        if (plVar9 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_03ce1af8 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_03ce1af8)) goto LAB_0246a93c;
        }
        FUN_024f65bc(uVar7,plVar11,lVar10,plVar9,uVar5,0);
        *(undefined8 *)(param_1 + 0x140) = uVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x140,uVar7);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


