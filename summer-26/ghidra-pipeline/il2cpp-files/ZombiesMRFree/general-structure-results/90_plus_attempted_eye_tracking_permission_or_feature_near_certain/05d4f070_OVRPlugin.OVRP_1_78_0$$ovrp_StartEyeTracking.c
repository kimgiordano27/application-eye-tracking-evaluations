/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 05d4f070
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 05d4f080 to 05e4f087 has its CatchHandler @ 05d4f130 */
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_05d4f0b8;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d4f0b8:
  uVar2 = (*(code *)*puVar1)();
                    /* try { // try from 05d4f0c4 to 05e4f0ef has its CatchHandler @ 05d4f134 */
  if (((uVar2 & 1) != 0) && (*(char *)(unaff_x19 + 0x38) == '\0')) {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 == (long *)0x0) goto LAB_05d4f318;
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_05d4f128;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(plVar7,*unaff_x21,4);
LAB_05d4f128:
    uVar2 = (*(code *)*puVar1)(plVar7);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_068f8b44(*(long *)(unaff_x19 + 0x30),1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar4 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
          FUN_06904354(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar4,0)
          ;
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar4 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
            FUN_06904520(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar4,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar4 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
              uVar3 = FUN_069041ac(lVar4,0);
              if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
                thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
              }
              uVar2 = FUN_068f8810(uVar3,0,0);
              fVar8 = 1.0;
              if ((uVar2 & 1) != 0) {
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar4 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar4 == 0)) ||
                   (lVar4 = FUN_069041ac(lVar4,0), lVar4 == 0)) goto LAB_05d4f318;
                fVar8 = (float)FUN_06905eb0(lVar4,0);
              }
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                lVar4 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0);
                plVar7 = *(long **)(unaff_x19 + 0x28);
                if (plVar7 != (long *)0x0) {
                  lVar5 = *plVar7;
                  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar2 != 0) {
                    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *unaff_x21) {
                        puVar1 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                        goto LAB_05d4f2ac;
                      }
                      uVar2 = uVar2 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar1 = (undefined8 *)FUN_02feb5b8(plVar7,*unaff_x21,1);
LAB_05d4f2ac:
                  fVar9 = (float)(*(code *)*puVar1)(plVar7,puVar1[1]);
                  if (DAT_0738e666 == '\0') {
                    FUN_02fe925c(PTR_DAT_06f6d5d8);
                    DAT_0738e666 = '\x01';
                  }
                  if (lVar4 != 0) {
                    fVar9 = fVar9 / fVar8;
                    lVar5 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
                    FUN_06904aa4(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                                 fVar9 * *(float *)(lVar5 + 0x14),lVar4,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_05d4f318;
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_068f8b44(*(long *)(unaff_x19 + 0x30),0,0);
    return;
  }
LAB_05d4f318:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


