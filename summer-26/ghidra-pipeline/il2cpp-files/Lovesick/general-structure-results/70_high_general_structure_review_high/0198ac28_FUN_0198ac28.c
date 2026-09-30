/*
FUNCTION_NAME: FUN_0198ac28
ENTRY_POINT: 0198ac28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


uint FUN_0198ac28(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_0377a41c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_14380);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Collider>_get_Count__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                      );
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__);
    thunk_FUN_00d48444(Method_BreakableSecurityCamera_Activate__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377a41c = 1;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_d8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_e0 = 0;
  if (*(long *)(param_1 + 0x200) != 0) {
    uVar4 = FUN_0129aa60(*(long *)(param_1 + 0x200),param_2,*(undefined8 *)StringLiteral_14380);
    if ((uVar4 & 1) == 0) {
      uVar3 = 1;
LAB_0198af90:
      return uVar3 & 1;
    }
    if (*(long *)(param_1 + 0x200) != 0) {
      FUN_01299bc0(*(long *)(param_1 + 0x200),param_2,&local_120,
                   *(undefined8 *)Method_System_Collections_Generic_HashSet<Collider>_get_Count__);
      uStack_98 = uStack_108;
      local_a0 = local_110;
      uStack_88 = uStack_f8;
      local_90 = uStack_100;
      uStack_a8 = uStack_118;
      local_b0 = local_120;
      uStack_78 = uStack_e8;
      local_80 = local_f0;
      uVar4 = (ulong)*(uint *)(param_1 + 0x158);
      uVar16 = (ulong)*(uint *)(param_1 + 0x15c);
      uVar12 = FUN_02692d70(*(undefined4 *)(param_1 + 0x154),uVar4,uVar16,&local_b0,0);
      if ((param_2 != 0) && (plVar9 = *(long **)(param_2 + 200), plVar9 != (long *)0x0)) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)
                 Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
               ) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0198adb0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(plVar9,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                              ,0);
LAB_0198adb0:
        plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
        puVar2 = Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__;
        if (plVar9 != (long *)0x0) {
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)
                   Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0198ae18;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_00d59724(plVar9,*(long *)
                                        Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__
                                ,0);
LAB_0198ae18:
          lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
          puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          if (lVar6 != 0) {
            fVar10 = (float)FUN_026a0e4c(uVar12,uVar4,uVar16,lVar6,0);
            uVar12 = *(undefined8 *)(param_1 + 0xc0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar7 = FUN_0268b4e0(param_2,uVar12,0);
            if ((uVar7 & 1) == 0) {
              fVar11 = *(float *)(param_2 + 0xd0);
              fVar13 = *(float *)(param_2 + 0xd4);
            }
            else {
              fVar11 = *(float *)(param_2 + 0xd8);
              fVar13 = *(float *)(param_2 + 0xdc);
            }
            fVar17 = *(float *)(param_1 + 0x148);
            fVar18 = *(float *)(param_1 + 0x14c);
            fVar19 = *(float *)(param_1 + 0x150);
            if (fVar13 <= fVar11) {
              fVar13 = fVar11;
            }
            if (DAT_03774e1a == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774e1a = '\x01';
            }
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            fVar14 = *(float *)(param_1 + 0x118);
            fVar11 = *(float *)(param_1 + 0x120);
            plVar9 = *(long **)(param_2 + 200);
            local_e0 = *(undefined8 *)(param_1 + 0x148);
            local_d8 = *(undefined4 *)(param_1 + 0x150);
            fVar15 = *(float *)(param_2 + 0x108);
            if (plVar9 != (long *)0x0) {
              fVar17 = fVar17 - fVar10;
              fVar18 = fVar18 - (float)uVar4;
              fVar19 = fVar19 - (float)uVar16;
              lVar6 = *plVar9;
              uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
              if (uVar4 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                    goto LAB_0198af78;
                  }
                  uVar4 = uVar4 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar4 != 0);
              }
              puVar5 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,2);
LAB_0198af78:
              uVar3 = (*(code *)*puVar5)(fVar15 + fVar11 + fVar13 + SQRT(fVar19 * fVar19 +
                                                                         fVar17 * fVar17 +
                                                                         fVar18 * fVar18) + fVar14,
                                         plVar9,&local_e0,&local_d0,puVar5[1]);
              goto LAB_0198af90;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


