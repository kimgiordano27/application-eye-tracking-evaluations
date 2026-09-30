/*
FUNCTION_NAME: OVRLocatable.TrackingSpacePose$$.ctor
ENTRY_POINT: 079c1ec0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;functionality_gaze_retrieval_or_extraction
*/


void OVRLocatable_TrackingSpacePose___ctor(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 local_7c [2];
  undefined8 uStack_68;
  undefined8 local_60 [2];
  undefined8 uStack_4c;
  
  if ((DAT_09894dae & 1) == 0) {
    FUN_04077588(PTR_DAT_092ee558);
    FUN_04077588(PTR_DAT_092ee650);
    DAT_09894dae = 1;
  }
  puVar2 = PTR_DAT_092ee558;
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    iVar9 = 0;
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    while (*(long *)(param_1 + 0x10) != 0) {
      plVar10 = *(long **)(param_1 + 0x18);
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      OVRPlugin_LayerDesc__ToString(local_7c,*(long *)(param_1 + 0x10),iVar9,0);
      uVar4 = uStack_68;
      uVar3 = local_7c[0];
      if ((*(long *)(param_1 + 0x10) == 0) || (plVar10 == (long *)0x0)) break;
      lVar6 = *plVar10;
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x3c);
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_079c1fb8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)puVar2,0);
LAB_079c1fb8:
      local_60[0] = uVar3;
      uStack_4c = uVar4;
      (*(code *)*puVar5)(uVar12,plVar10,uVar1,iVar9,local_60,uVar11,puVar5[1]);
      iVar9 = iVar9 + 1;
      if (iVar9 == 0x18) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


