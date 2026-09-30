/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<XmlTextWriter.Namespace>
ENTRY_POINT: 03033f74
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined4
System_Array__InternalArray__ICollection_CopyTo<XmlTextWriter_Namespace>
          (float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s12;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  
  param_2 = (param_1 + param_1) * param_2;
  if (*(float *)((long)unaff_x20 + 0x4c) < param_2) {
    plVar10 = (long *)unaff_x20[5];
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_03034450;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x24,5);
LAB_03034450:
      plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
      if (plVar10 != (long *)0x0) {
        lVar5 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x28) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_030344b4;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x28,2);
LAB_030344b4:
        fVar12 = (float)(*(code *)*puVar3)(plVar10,puVar3[1]);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          fVar14 = param_2;
          fVar15 = param_3;
          fVar13 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                                    (*(long *)(unaff_x19 + 0x30),0);
          param_2 = param_2 - fVar14;
          param_3 = param_3 - fVar15;
          fVar14 = (float)FUN_02f32930(fVar12 - fVar13,0);
          fVar12 = param_3;
          if (*(char *)(unaff_x26 + 0x22e) == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
            *(undefined1 *)(unaff_x26 + 0x22e) = 1;
          }
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar6 = (ulong)(uint)(param_3 * param_3);
          fVar15 = SQRT(param_3 * param_3 + fVar14 * fVar14 + param_2 * param_2);
          if (fVar15 <= unaff_s12) {
            if (DAT_06a67148 == '\0') {
              AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
              DAT_06a67148 = '\x01';
            }
            fVar14 = **(float **)(*unaff_x25 + 0xb8);
            param_3 = (*(float **)(*unaff_x25 + 0xb8))[2];
          }
          else {
            fVar14 = fVar14 / fVar15;
            param_3 = param_3 / fVar15;
          }
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            fVar15 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                                      (*(long *)(unaff_x19 + 0x30),0);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              fVar13 = fVar12;
              System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                        (*(long *)(unaff_x19 + 0x30),0);
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                plVar10 = (long *)unaff_x20[4];
                fVar14 = fVar14 * DAT_013ddbec;
                fVar15 = fVar15 - fVar14;
                fVar12 = fVar12 - param_3 * DAT_013ddbec;
                fVar16 = (float)System_Array__InternalArray__IEnumerable_GetEnumerator<KeyValuePair<Guid,_OVRTask_CallbackWithState<object,_OVRTask<object>>>>
                                          (*(long *)(unaff_x19 + 0x30),0);
                FUN_05eea074(fVar16 - fVar15,fVar14 - (float)uVar6,fVar13 - fVar12,0);
                in_stack_00000018 = 0;
                in_stack_00000020 = 0;
                in_stack_00000028 = 0;
                FUN_03c8994c(&stack0x00000018,*(undefined8 *)PTR_DAT_065ca5c8);
                uVar9 = in_stack_00000028;
                uVar2 = in_stack_00000020;
                uVar4 = in_stack_00000018;
                if (plVar10 != (long *)0x0) {
                  lVar5 = *plVar10;
                  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *unaff_x22) {
                        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x51) * 0x10 + 0x138);
                        goto LAB_03034670;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*unaff_x22,0x51);
LAB_03034670:
                  in_stack_00000038 = uVar2;
                  in_stack_00000030 = uVar4;
                  in_stack_00000040 = uVar9;
                  uVar4 = (*(code *)*puVar3)(fVar15,uVar6,fVar12,DAT_013dde24,plVar10,
                                             &stack0x00000030,0,1,0,1,puVar3[1]);
                  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
                  *(undefined4 *)(unaff_x19 + 0x10) = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_030346f4;
  }
  if (((*(long *)(unaff_x19 + 0x30) == 0) ||
      (FUN_03056fc8(*(long *)(unaff_x19 + 0x30),1,0), puVar1 = PTR_DAT_065ca540,
      unaff_x20 == (long *)0x0)) || (plVar10 = (long *)unaff_x20[4], plVar10 == (long *)0x0))
  goto LAB_030346f4;
  lVar5 = *plVar10;
  lVar11 = *(long *)(unaff_x19 + 0x30);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ca540) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x1a) * 0x10 + 0x138);
        goto LAB_0303404c;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065ca540,0x1a);
LAB_0303404c:
  plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
  if (plVar10 == (long *)0x0) goto LAB_030346f4;
  lVar5 = *plVar10;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065caaf0) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x1c) * 0x10 + 0x138);
        goto LAB_030340b8;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065caaf0,0x1c);
LAB_030340b8:
  uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if (lVar11 == 0) goto LAB_030346f4;
  FUN_030569c0(lVar11,uVar4,0);
  plVar10 = (long *)unaff_x20[4];
  if (plVar10 == (long *)0x0) goto LAB_030346f4;
  lVar5 = *plVar10;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x4b) * 0x10 + 0x138);
        goto LAB_03034130;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar1,0x4b);
LAB_03034130:
  (*(code *)*puVar3)(plVar10,0,puVar3[1]);
  plVar10 = (long *)unaff_x20[4];
  if (plVar10 == (long *)0x0) goto LAB_030346f4;
  lVar5 = *plVar10;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_03034198;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar1,0xc);
LAB_03034198:
  (*(code *)*puVar3)(plVar10,0,puVar3[1]);
  plVar10 = (long *)unaff_x20[4];
  if (plVar10 == (long *)0x0) goto LAB_030346f4;
  lVar5 = *plVar10;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
        goto LAB_03034200;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar1,0xd);
LAB_03034200:
  uVar6 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  lVar11 = *plVar10;
  lVar5 = 0x58;
  if ((uVar6 & 1) == 0) {
    lVar5 = 0x50;
  }
  uVar4 = *(undefined8 *)((long)unaff_x20 + lVar5);
  uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar11 + (long)(*piVar8 + 0x47) * 0x10 + 0x138);
        goto LAB_03034270;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar1,0x47);
LAB_03034270:
  uVar4 = (*(code *)*puVar3)(plVar10,uVar4,0,0,puVar3[1]);
  if (unaff_x19 == 0) goto LAB_030346f4;
  *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_030346f4;
  lVar5 = unaff_x20[0xd];
  uVar4 = FUN_05ef2cb4(*(long *)(unaff_x19 + 0x30),0);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*unaff_x23);
  }
  lVar5 = FUN_034b0c18(lVar5,uVar4,*(undefined8 *)PTR_DAT_065d65f8);
  unaff_x20[0x14] = lVar5;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar6 = FUN_05ef59b8(uVar4,0,0);
  if ((uVar6 & 1) == 0) {
LAB_03034374:
    if (unaff_x20 == (long *)0x0) {
LAB_030346f4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = unaff_x20[0x14];
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar6 = FUN_05ef59b8(lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      if (unaff_x20[0x14] == 0) goto LAB_030346f4;
      FUN_05f44f8c(unaff_x20[0x14],0);
      unaff_x20[0x14] = 0;
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar6 = FUN_05ef59b8(uVar4,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_030346f4;
      FUN_0305712c(*(long *)(unaff_x19 + 0x30),0);
    }
    (**(code **)(*unaff_x20 + 0x198))();
    uVar9 = 0;
  }
  else {
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ca750) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_03034364;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065ca750,5);
LAB_03034364:
      uVar6 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if ((uVar6 & 1) != 0) goto LAB_03034374;
    }
    puVar1 = PTR_DAT_065ca5d0;
    lVar5 = *(long *)PTR_DAT_065ca5d0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar5 = *(long *)puVar1;
    }
    uVar9 = 1;
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  }
  return uVar9;
}


