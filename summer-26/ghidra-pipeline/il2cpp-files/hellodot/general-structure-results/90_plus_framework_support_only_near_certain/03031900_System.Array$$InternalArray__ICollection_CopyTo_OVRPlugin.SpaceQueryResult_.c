/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03031900
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>
          (long param_1,undefined1 param_2 [16],float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  int in_w9;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x21;
  long unaff_x22;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  
  (**(code **)(param_1 + (long)(in_w9 + 0x1d) * 0x10 + 0x138))();
  uVar4 = 0x3e800000;
  if (ABS(unaff_s8 - param_3) <= 0.25) {
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      plVar9 = *(long **)(unaff_x22 + 0x20);
      uVar13 = System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                         (*(long *)(unaff_x19 + 0x28),0);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x21) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x4d) * 0x10 + 0x138);
              goto LAB_03031a58;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x21,0x4d);
LAB_03031a58:
        (*(code *)*puVar3)(uVar13,uVar4,param_4,plVar9,puVar3[1]);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          plVar9 = *(long **)(unaff_x22 + 0x20);
          uVar13 = System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                             (*(long *)(unaff_x19 + 0x28),0);
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *unaff_x21) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x4e) * 0x10 + 0x138);
                  goto LAB_03031cac;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x21,0x4e);
LAB_03031cac:
            (*(code *)*puVar3)(uVar13,uVar4,param_4,plVar9,puVar3[1]);
            puVar1 = PTR_DAT_065ca5d0;
            lVar5 = *(long *)PTR_DAT_065ca5d0;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
              lVar5 = *(long *)puVar1;
            }
            uVar4 = **(undefined8 **)(lVar5 + 0xb8);
            *(undefined4 *)(unaff_x19 + 0x10) = 4;
            *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
            return 1;
          }
        }
      }
    }
  }
  else {
    plVar9 = *(long **)(unaff_x22 + 0x28);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ca5b8) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_030319ec;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca5b8,5);
LAB_030319ec:
      fVar16 = (float)param_4;
      fVar15 = (float)uVar4;
      plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ca5b0) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_03031ae4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca5b0,2);
LAB_03031ae4:
        fVar10 = (float)(*(code *)*puVar3)(plVar9,puVar3[1]);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          fVar14 = fVar15;
          fVar12 = fVar16;
          fVar11 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                                    (*(long *)(unaff_x19 + 0x28),0);
          fVar15 = fVar15 - fVar14;
          fVar16 = fVar16 - fVar12;
          fVar10 = (float)FUN_02f32930(fVar10 - fVar11,0);
          if (DAT_06a6722e == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
            DAT_06a6722e = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_065c8d28 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          fVar11 = fVar16 * fVar16;
          fVar12 = SQRT(fVar11 + fVar10 * fVar10 + fVar15 * fVar15);
          fVar14 = DAT_013ddfb8;
          if (fVar12 <= DAT_013ddfb8) {
            if (DAT_06a67148 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
              DAT_06a67148 = '\x01';
            }
            pfVar6 = *(float **)(*(long *)PTR_DAT_065c9850 + 0xb8);
            fVar10 = *pfVar6;
            fVar15 = pfVar6[1];
            fVar16 = pfVar6[2];
          }
          else {
            fVar10 = fVar10 / fVar12;
            fVar15 = fVar15 / fVar12;
            fVar16 = fVar16 / fVar12;
          }
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            fVar12 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                                      (*(long *)(unaff_x19 + 0x28),0);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              plVar9 = *(long **)(unaff_x22 + 0x20);
              fVar12 = fVar12 - fVar10 * DAT_013ddbec;
              fVar10 = fVar14 - fVar15 * DAT_013ddbec;
              fVar16 = fVar11 - fVar16 * DAT_013ddbec;
              fVar15 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                                        (*(long *)(unaff_x19 + 0x28),0);
              FUN_05eea074(fVar15 - fVar12,fVar14 - fVar10,fVar11 - fVar16,0);
              in_stack_00000058 = 0;
              in_stack_00000060 = 0;
              in_stack_00000068 = 0;
              FUN_03c8994c(&stack0x00000058,*(undefined8 *)PTR_DAT_065ca5c8);
              uVar2 = in_stack_00000068;
              uVar13 = in_stack_00000060;
              uVar4 = in_stack_00000058;
              if (plVar9 != (long *)0x0) {
                lVar5 = *plVar9;
                uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *unaff_x21) {
                      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x51) * 0x10 + 0x138);
                      goto FUN_03031d2c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x21,0x51);
FUN_03031d2c:
                in_stack_00000078 = uVar13;
                in_stack_00000070 = uVar4;
                in_stack_00000080 = uVar2;
                uVar4 = (*(code *)*puVar3)(fVar12,fVar10,fVar16,DAT_013dde24,plVar9,&stack0x00000070
                                           ,0,1,0,1,puVar3[1]);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
                *(undefined4 *)(unaff_x19 + 0x10) = 3;
                return 1;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


