/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$.ctor
ENTRY_POINT: 06d93914
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24___ctor
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar2 = PTR_DAT_08e8d608;
  if ((DAT_09419a64 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8ec88);
    FUN_03c8f898(PTR_DAT_08e8eca0);
    FUN_03c8f898(PTR_DAT_08e8eca8);
    FUN_03c8f898(PTR_DAT_08e8ecb0);
    FUN_03c8f898(PTR_DAT_08e8d608);
    FUN_03c8f898(PTR_DAT_08e8f820);
    FUN_03c8f898(PTR_DAT_08e8f828);
    FUN_03c8f898(PTR_DAT_08e8f830);
    DAT_09419a64 = 1;
  }
  puVar3 = PTR_DAT_08e8f830;
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar7);
    lVar7 = *(long *)puVar2;
  }
  lVar5 = *(long *)puVar3;
  uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar5 = *(long *)puVar3;
    }
    uVar10 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8ecb0);
    FUN_04d4ebcc(lVar7,uVar10,*(undefined8 *)PTR_DAT_08e8f820,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar7;
    thunk_FUN_03d233cc(plVar6,lVar7);
    lVar5 = *(long *)puVar3;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_08e8eca0;
  lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar5 = *(long *)puVar3;
    }
    uVar10 = **(undefined8 **)(lVar5 + 0xb8);
    lVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e8eca8);
    FUN_04d4ebcc(lVar11,uVar10,*(undefined8 *)PTR_DAT_08e8f828,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar6 = lVar11;
    thunk_FUN_03d233cc(plVar6,lVar11);
  }
  lVar7 = FUN_04633ec0(uVar8,lVar7,lVar11,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_08e8ec88;
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar11 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar11 == 0) || (lVar7 == 0)) goto LAB_06d93b48;
        uVar4 = FUN_069a0c14(lVar7,*(undefined4 *)(lVar11 + 0x14),*(undefined8 *)puVar2);
        *(undefined4 *)(lVar11 + 0x10) = uVar4;
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    return;
  }
LAB_06d93b48:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


