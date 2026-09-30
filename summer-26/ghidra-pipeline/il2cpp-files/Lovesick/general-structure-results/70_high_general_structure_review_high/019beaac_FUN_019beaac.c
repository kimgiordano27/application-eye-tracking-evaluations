/*
FUNCTION_NAME: FUN_019beaac
ENTRY_POINT: 019beaac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


float FUN_019beaac(float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  float local_50;
  float local_4c;
  float fStack_48;
  
  local_50 = param_1;
  local_4c = param_2;
  fStack_48 = param_3;
  if ((DAT_0377a675 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                      );
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__);
    DAT_0377a675 = 1;
  }
  puVar2 = Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__;
  puVar1 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
  ;
  local_68 = 0.0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_70 = 0.0;
  fStack_6c = 0.0;
  local_58 = 0;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_78 = 0;
  if (param_5 != (long *)0x0) {
    lVar5 = *param_5;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_019beb78;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_00d59724(param_5,*(long *)
                                   Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__
                          ,2);
LAB_019beb78:
    (*(code *)*puVar3)(0,param_5,&local_50,&local_70,puVar3[1]);
    lVar5 = *param_5;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_019bebdc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(param_5,*(long *)puVar1,0);
LAB_019bebdc:
    plVar4 = (long *)(*(code *)*puVar3)(param_5,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto FUN_019bec40;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar2,2);
FUN_019bec40:
      (*(code *)*puVar3)(0,plVar4,&local_50,&local_90,puVar3[1]);
      fVar13 = local_50 - local_70;
      fVar9 = local_4c - fStack_6c;
      fVar10 = fStack_48 - local_68;
      fVar11 = (float)local_80;
      fVar12 = (float)((ulong)local_80 >> 0x20);
      fVar8 = fVar10 * fVar12 + fVar13 * local_88._4_4_ + fVar9 * fVar11;
      fVar14 = local_88._4_4_ * fVar8;
      if (DAT_03774e1b == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03774e1b = '\x01';
      }
      fVar13 = fVar13 - fVar14;
      fVar9 = fVar9 - fVar11 * fVar8;
      fVar10 = fVar10 - fVar12 * fVar8;
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      return SQRT(fVar10 * fVar10 + fVar13 * fVar13 + fVar9 * fVar9) - param_4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


