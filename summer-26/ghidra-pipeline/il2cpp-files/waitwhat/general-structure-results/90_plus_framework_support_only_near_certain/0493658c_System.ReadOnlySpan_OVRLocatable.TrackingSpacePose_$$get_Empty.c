/*
FUNCTION_NAME: System.ReadOnlySpan<OVRLocatable.TrackingSpacePose>$$get_Empty
ENTRY_POINT: 0493658c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 121
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void System_ReadOnlySpan<OVRLocatable_TrackingSpacePose>__get_Empty
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long *unaff_x24;
  float fVar8;
  float fVar9;
  float unaff_s9;
  float unaff_s10;
  float fVar10;
  float unaff_s11;
  float unaff_s12;
  float fVar11;
  undefined1 auVar12 [16];
  
  do {
    in_x9 = in_x9 + -1;
    piVar7 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_031c0d08();
      goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor;
    }
    plVar3 = (long *)(in_x10 + 2);
    in_x10 = piVar7;
  } while (*plVar3 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)(*piVar7 + 0x2c) * 0x10 + 0x138);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor:
  fVar8 = (float)(*(code *)*puVar2)();
  fVar11 = *(float *)(unaff_x19 + 0x4c0);
  plVar3 = (long *)FUN_06b18750();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0x2c) * 0x10 + 0x138);
          goto LAB_04936630;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x24,0x2c);
LAB_04936630:
    fVar9 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
    lVar4 = *(long *)(unaff_x19 + 0x520);
    if (lVar4 == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x528);
    }
    if (*(long *)(unaff_x19 + 0x500) != 0) {
      fVar10 = (unaff_s9 - unaff_s10) - unaff_s11;
      plVar3 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
      auVar12 = FUN_06b3dc78((fVar11 - fVar10) - fVar9,0);
      puVar1 = PTR_DAT_070f24b0;
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_070f24b0) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x55) * 0x10 + 0x138);
              goto FUN_049366e0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)PTR_DAT_070f24b0,0x55);
FUN_049366e0:
        (*(code *)*puVar2)(plVar3,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar2[1]);
        if ((lVar4 != 0) && (plVar3 = (long *)FUN_06b18750(lVar4,0), plVar3 != (long *)0x0)) {
          lVar4 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x24,0x4e);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo:
          fVar11 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
          if (*(long *)(unaff_x19 + 0x500) != 0) {
            fVar9 = *(float *)(unaff_x19 + 0x4b8);
            plVar3 = (long *)FUN_06b18750(*(long *)(unaff_x19 + 0x500),0);
            if (plVar3 != (long *)0x0) {
              lVar4 = *plVar3;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              fVar8 = (float)(int)(fVar11 * fVar9) - (unaff_s12 + fVar10 + fVar8);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *unaff_x24) {
                    puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0x4e) * 0x10 + 0x138);
                    goto LAB_049367ec;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x24,0x4e);
LAB_049367ec:
              fVar11 = (float)(*(code *)*puVar2)(plVar3,puVar2[1]);
              if (ABS(fVar11 - fVar8) <= DAT_012e37c4) {
                return;
              }
              if (*(long *)(unaff_x19 + 0x500) != 0) {
                plVar3 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
                fVar11 = 0.0;
                if (0.0 <= fVar8) {
                  fVar11 = fVar8;
                }
                auVar12 = FUN_06b3dc78(fVar11,0);
                if (plVar3 != (long *)0x0) {
                  lVar4 = *plVar3;
                  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xa5) * 0x10 + 0x138);
                        goto LAB_049368b0;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0xa5);
LAB_049368b0:
                    /* WARNING: Could not recover jumptable at 0x049368dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar2)(plVar3,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar2[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


