/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03046b9c
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong uVar16;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x540));
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca6c0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d9fa8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d7ef0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d9fb0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca6e0);
  *(undefined1 *)(unaff_x20 + 0xa0d) = 1;
  fVar13 = (float)FUN_05efe7dc(0);
  fVar14 = *(float *)(unaff_x19 + 0x38);
  uVar6 = (ulong)(uint)fVar14;
  fVar13 = fVar13 - *(float *)(unaff_x19 + 0x7c);
  fVar15 = fVar14 + *(float *)(unaff_x19 + 0x3c);
  uVar16 = (ulong)(uint)fVar15;
  *(bool *)(unaff_x19 + 0x88) = fVar15 <= fVar13;
  puVar2 = PTR_DAT_065ca6b8;
  puVar1 = PTR_DAT_065ca540;
  if ((fVar13 < 0.0) && (*(char *)(unaff_x19 + 0x78) == '\0')) {
    plVar9 = *(long **)(unaff_x19 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      uVar10 = *(undefined8 *)PTR_DAT_065d9fb0;
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ca6b8) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 7) * 0x10 + 0x138);
            goto LAB_03046d5c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca6b8,7);
LAB_03046d5c:
      (*(code *)*puVar3)(0,plVar9,uVar10,0,puVar3[1]);
      plVar9 = *(long **)(unaff_x19 + 0x20);
      if (plVar9 != (long *)0x0) {
        uVar10 = FUN_05ef2cf0();
        lVar4 = *(long *)puVar2;
        lVar5 = *plVar9;
        uVar11 = *(undefined8 *)PTR_DAT_065ca6e0;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        uVar12 = *(undefined8 *)PTR_DAT_065d9fa8;
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
              goto LAB_03046ef0;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar4,0xb);
LAB_03046ef0:
        (*(code *)*puVar3)(plVar9,uVar11,uVar12,uVar10,puVar3[1]);
        plVar9 = *(long **)(unaff_x19 + 0x20);
        if (plVar9 != (long *)0x0) {
          uVar10 = FUN_05ef2cf0();
          lVar5 = *plVar9;
          lVar4 = *(long *)puVar2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          uVar11 = *(undefined8 *)PTR_DAT_065ca6c0;
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 7) * 0x10 + 0x138);
                goto LAB_03047024;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar4,7);
LAB_03047024:
          (*(code *)*puVar3)(0,plVar9,uVar11,uVar10,puVar3[1]);
        }
      }
    }
    *(undefined1 *)(unaff_x19 + 0x78) = 1;
    return;
  }
  if (fVar13 <= fVar14) {
    if (fVar13 < 0.0) {
      return;
    }
    uVar10 = FUN_03046a6c();
    puVar1 = PTR_DAT_065ca540;
    plVar9 = *(long **)(unaff_x19 + 0x28);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ca540) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x1e) * 0x10 + 0x138);
            goto LAB_03046f7c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca540,0x1e);
LAB_03046f7c:
      (*(code *)*puVar3)(uVar10,uVar6,uVar16,plVar9,puVar3[1]);
      plVar9 = *(long **)(unaff_x19 + 0x28);
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x20) * 0x10 + 0x138);
              goto LAB_03046ff4;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,0x20);
LAB_03046ff4:
        (*(code *)*puVar3)(0,0,0,0,plVar9,puVar3[1]);
        return;
      }
    }
  }
  else {
    plVar9 = *(long **)(unaff_x19 + 0x28);
    if (plVar9 != (long *)0x0) {
      uVar18 = *(undefined4 *)(unaff_x19 + 0x50);
      uVar17 = *(undefined4 *)(unaff_x19 + 0x54);
      lVar4 = *plVar9;
      uVar19 = *(undefined4 *)(unaff_x19 + 0x4c);
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ca540) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x1e) * 0x10 + 0x138);
            goto LAB_03046df4;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca540,0x1e);
LAB_03046df4:
      (*(code *)*puVar3)(uVar19,uVar18,uVar17,plVar9,puVar3[1]);
      plVar9 = *(long **)(unaff_x19 + 0x28);
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar18 = *(undefined4 *)(unaff_x19 + 0x70);
        uVar17 = *(undefined4 *)(unaff_x19 + 0x74);
        uVar20 = *(undefined4 *)(unaff_x19 + 0x68);
        uVar19 = *(undefined4 *)(unaff_x19 + 0x6c);
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x20) * 0x10 + 0x138);
              goto 
              System_Array__InternalArray__ICollection_Remove<OVRSpatialAnchor_MultiAnchorDelegatePair>
              ;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,0x20);
System_Array__InternalArray__ICollection_Remove<OVRSpatialAnchor_MultiAnchorDelegatePair>:
        (*(code *)*puVar3)(uVar20,uVar19,uVar18,uVar17,plVar9,puVar3[1]);
        if (*(char *)(unaff_x19 + 0x79) != '\0') {
          return;
        }
        plVar9 = *(long **)(unaff_x19 + 0x28);
        if (plVar9 != (long *)0x0) {
          lVar4 = *plVar9;
          uVar18 = *(undefined4 *)(unaff_x19 + 0x50);
          uVar17 = *(undefined4 *)(unaff_x19 + 0x54);
          uVar19 = *(undefined4 *)(unaff_x19 + 0x4c);
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x1e) * 0x10 + 0x138);
                goto LAB_03047074;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,0x1e);
LAB_03047074:
          (*(code *)*puVar3)(uVar19,uVar18,uVar17,plVar9,puVar3[1]);
          plVar9 = *(long **)(unaff_x19 + 0x28);
          if (plVar9 != (long *)0x0) {
            lVar4 = *plVar9;
            uVar18 = *(undefined4 *)(unaff_x19 + 0x70);
            uVar17 = *(undefined4 *)(unaff_x19 + 0x74);
            uVar20 = *(undefined4 *)(unaff_x19 + 0x68);
            uVar19 = *(undefined4 *)(unaff_x19 + 0x6c);
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x20) * 0x10 + 0x138);
                  goto LAB_030470ec;
                }
                uVar6 = uVar6 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,0x20);
LAB_030470ec:
            (*(code *)*puVar3)(uVar20,uVar19,uVar18,uVar17,plVar9,puVar3[1]);
            plVar9 = *(long **)(unaff_x19 + 0x20);
            if (plVar9 != (long *)0x0) {
              lVar4 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              uVar10 = *(undefined8 *)PTR_DAT_065d7ef0;
              if (uVar6 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065ca6b8) {
                    puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 7) * 0x10 + 0x138);
                    goto LAB_03047174;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar6 != 0);
              }
              puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065ca6b8,7);
LAB_03047174:
              (*(code *)*puVar3)(0,plVar9,uVar10,0,puVar3[1]);
            }
            *(undefined1 *)(unaff_x19 + 0x79) = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


