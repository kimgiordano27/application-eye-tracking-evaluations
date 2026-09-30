/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$.cctor
ENTRY_POINT: 01460a6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c___cctor
               (long param_1,int param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  long in_stack_00000028;
  
  if ((DAT_03776aa3 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<EventSystem>_IndexOf__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_11854);
    thunk_FUN_00d48444(StringLiteral_11624);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetResult__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_StreamWriter_WriteSpan__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    DAT_03776aa3 = 1;
  }
  if ((param_1 != 0) &&
     (uVar9 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__,
                           *(undefined4 *)(param_1 + 0x18)),
     puVar2 = Method_System_Collections_Generic_List<EventSystem>_IndexOf__, param_5 != 0)) {
    *(undefined8 *)(param_5 + 0x30) = uVar9;
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
    puVar4 = Method_System_IO_StreamWriter_WriteSpan__;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetResult__
    ;
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)(param_1 + 0x18));
    *(undefined8 *)(param_5 + 0x10) = uVar9;
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)(param_1 + 0x18));
    *(undefined8 *)(param_5 + 0x18) = uVar9;
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x18));
    *(undefined8 *)(param_5 + 0x20) = uVar9;
    uVar9 = FUN_00da4fb8(*(undefined8 *)puVar3,*(undefined4 *)(param_1 + 0x18));
    *(undefined8 *)(param_5 + 0x28) = uVar9;
    puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (0 < *(int *)(param_1 + 0x18)) {
      if (param_4 == 0) goto LAB_01460f00;
      fVar21 = (float)param_2;
      uVar14 = 0;
      uVar9 = NEON_fmov(0x41800000,4);
      do {
        lVar11 = *(long *)(param_5 + 0x30);
        if (lVar11 == 0) goto LAB_01460f00;
        if (*(uint *)(lVar11 + 0x18) <= uVar14) {
LAB_01460f04:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar1 = *(uint *)(param_4 + 0x18);
        bVar17 = 0;
        *(undefined8 *)(lVar11 + uVar14 * 8 + 0x20) = uVar9;
        if ((int)uVar1 < 1) {
          iVar18 = 1;
        }
        else {
          uVar16 = 0;
          iVar18 = 1;
          do {
            if (*(uint *)(param_4 + 0x18) <= uVar16) goto LAB_01460f04;
            lVar11 = *(long *)(param_4 + (long)(int)uVar16 * 8 + 0x20);
            if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0))
            goto LAB_01460f00;
            if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01460f04;
            plVar15 = *(long **)(lVar11 + uVar14 * 8 + 0x20);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_02681b9c(plVar15,0,0);
            if ((uVar10 & 1) != 0) {
              if (plVar15 == (long *)0x0) goto LAB_01460f00;
              iVar6 = FUN_0266fcfc(plVar15,0);
              iVar7 = FUN_0266fcfc(plVar15,0);
              if (iVar18 <= iVar7) {
                iVar18 = iVar7;
              }
              lVar11 = *(long *)(param_5 + 0x30);
              if (lVar11 == 0) goto LAB_01460f00;
              if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01460f04;
              pfVar13 = (float *)(lVar11 + uVar14 * 8 + 0x20);
              fVar20 = *pfVar13;
              iVar7 = (**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
              if (fVar20 <= (float)iVar7) {
                fVar20 = (float)iVar7;
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01460f04;
              if (fVar21 <= fVar20) {
                fVar20 = fVar21;
              }
              *pfVar13 = fVar20;
              lVar11 = *(long *)(param_5 + 0x30);
              if (lVar11 == 0) goto LAB_01460f00;
              if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01460f04;
              pfVar13 = (float *)(lVar11 + uVar14 * 8 + 0x24);
              fVar20 = *pfVar13;
              iVar7 = (**(code **)(*plVar15 + 0x1a8))(plVar15,*(undefined8 *)(*plVar15 + 0x1b0));
              if (fVar20 <= (float)iVar7) {
                fVar20 = (float)iVar7;
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01460f04;
              if (fVar21 <= fVar20) {
                fVar20 = fVar21;
              }
              *pfVar13 = fVar20;
              lVar11 = *(long *)(param_5 + 0x20);
              FUN_0132138c(param_1,uVar14 & 0xffffffff,&stack0x00000028,
                           *(undefined8 *)StringLiteral_11624);
              if (((in_stack_00000028 == 0) || (lVar12 = *(long *)(param_5 + 0x28), lVar12 == 0)) ||
                 (param_3 == 0)) goto LAB_01460f00;
              if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_01460f04;
              uVar8 = FUN_013e7c48(param_3,*(undefined8 *)(in_stack_00000028 + 0x10),
                                   lVar12 + uVar14 * 4 + 0x20,0);
              if (lVar11 == 0) goto LAB_01460f00;
              if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01460f04;
              bVar17 = bVar17 | 1 < iVar6;
              *(undefined4 *)(lVar11 + uVar14 * 4 + 0x20) = uVar8;
            }
            uVar16 = uVar16 + 1;
          } while (uVar1 != uVar16);
        }
        puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
        if (DAT_03776ae9 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03776ae9 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar19 = (double)FUN_01772228((double)param_2,0x4000000000000000,0);
        if (DAT_03775e60 == '\0') {
          thunk_FUN_00d48444(puVar3);
          DAT_03775e60 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar11 = *(long *)(param_5 + 0x18);
        iVar6 = -0x7fffffff;
        if ((float)(int)dVar19 != INFINITY) {
          iVar6 = (int)dVar19 + 1;
        }
        if (iVar18 <= iVar6) {
          iVar6 = iVar18;
        }
        if (lVar11 == 0) goto LAB_01460f00;
        if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01460f04;
        *(int *)(lVar11 + uVar14 * 4 + 0x20) = iVar6;
        lVar11 = *(long *)(param_5 + 0x10);
        if (lVar11 == 0) goto LAB_01460f00;
        if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_01460f04;
        *(byte *)(lVar11 + uVar14 + 0x20) = bVar17;
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)*(int *)(param_1 + 0x18));
    }
    return;
  }
LAB_01460f00:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


