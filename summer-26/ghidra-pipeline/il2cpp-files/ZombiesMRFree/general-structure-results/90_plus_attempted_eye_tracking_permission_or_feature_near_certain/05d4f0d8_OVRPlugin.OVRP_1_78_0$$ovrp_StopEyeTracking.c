/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 05d4f0d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_10;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
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
  
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
                    /* try { // try from 05d4f0f0 to 05e4f11f has its CatchHandler @ 05d4efd8 */
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
                    /* try { // try from 05d4f120 to 05e4f127 has its CatchHandler @ 05d4f12c */
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_05d4f128;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d4f128:
                    /* try { // try from 05d4f128 to 05e4f14f has its CatchHandler @ 05d4efd8 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4f120 with catch @ 05d4f12c
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4f080 with catch @ 05d4f130
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4f0c4 with catch @ 05d4f134
                        */
  uVar5 = (*(code *)*puVar1)();
  if ((uVar5 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_068f8b44(*(long *)(unaff_x19 + 0x30),0,0);
      return;
    }
  }
  else if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_068f8b44(*(long *)(unaff_x19 + 0x30),1,0);
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar3 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
      FUN_06904354(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar3,0);
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar3 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
        FUN_06904520(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar3,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar3 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
          uVar2 = FUN_069041ac(lVar3,0);
          if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
          }
          uVar5 = FUN_068f8810(uVar2,0,0);
          fVar8 = 1.0;
          if ((uVar5 & 1) != 0) {
            if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                (lVar3 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar3 == 0)) ||
               (lVar3 = FUN_069041ac(lVar3,0), lVar3 == 0)) goto LAB_05d4f318;
            fVar8 = (float)FUN_06905eb0(lVar3,0);
          }
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            lVar3 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0);
            plVar7 = *(long **)(unaff_x19 + 0x28);
            if (plVar7 != (long *)0x0) {
              lVar4 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *unaff_x21) {
                    puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_05d4f2ac;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar1 = (undefined8 *)FUN_02feb5b8(plVar7,*unaff_x21,1);
LAB_05d4f2ac:
              fVar9 = (float)(*(code *)*puVar1)(plVar7,puVar1[1]);
              if (DAT_0738e666 == '\0') {
                FUN_02fe925c(PTR_DAT_06f6d5d8);
                DAT_0738e666 = '\x01';
              }
              if (lVar3 != 0) {
                fVar9 = fVar9 / fVar8;
                lVar4 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
                FUN_06904aa4(fVar9 * *(float *)(lVar4 + 0xc),fVar9 * *(float *)(lVar4 + 0x10),
                             fVar9 * *(float *)(lVar4 + 0x14),lVar3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_05d4f318:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


