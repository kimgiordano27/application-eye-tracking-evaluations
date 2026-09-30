/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ToDisplayStrings
ENTRY_POINT: 01ac2e8c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long lVar7;
  long *unaff_x24;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  float fVar11;
  undefined1 auVar12 [16];
  
  fVar8 = (float)(*(code *)*param_1)();
  lVar7 = *(long *)(unaff_x19 + 0x430);
  if (lVar7 == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x438);
  }
  if (*(long *)(unaff_x19 + 0x410) != 0) {
    fVar9 = (unaff_s9 - unaff_s10) - unaff_s11;
    plVar2 = (long *)FUN_021a9950(*(long *)(unaff_x19 + 0x410),0);
                    /* try { // try from 01ac2ecc to 01bc2f0f has its CatchHandler @ 01ac2f68 */
    auVar12 = FUN_021bc63c((unaff_s13 - fVar9) - fVar8,0);
    puVar1 = PTR_DAT_0234c290;
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0234c290) {
                    /* try { // try from 01ac2f38 to 01bc2f3b has its CatchHandler @ 01ac2f60 */
                    /* try { // try from 01ac2f3c to 01bc2f4f has its CatchHandler @ 01ac2f6c */
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar4 + 0x20) * 0x10 + 0x138);
            goto LAB_01ac2f40;
          }
          uVar6 = uVar6 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348(plVar2,*(long *)PTR_DAT_0234c290,0x20);
LAB_01ac2f40:
                    /* try { // try from 01ac2f50 to 01bc2f83 has its CatchHandler @ 01ac2b44 */
      (*(code *)*puVar3)(plVar2,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar3[1]);
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ac2f38 with catch @ 01ac2f60
                        */
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ac2e58 with catch @ 01ac2f64
                        */
      if ((lVar7 != 0) && (plVar2 = (long *)FUN_021a6128(lVar7,0), plVar2 != (long *)0x0)) {
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ac2ecc with catch @ 01ac2f68
                        */
        lVar7 = *plVar2;
                    /* catch(type#1 @ 0220e3b8) { ... } // from try @ 01ac2f3c with catch @ 01ac2f6c
                        */
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 01ac2f84 to 01bc2f9b has its CatchHandler @ 01ac2fd0 */
            if (*(long *)(piVar4 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar4 + 0x2c) * 0x10 + 0x138);
              goto LAB_01ac2fbc;
            }
            uVar6 = uVar6 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar6 != 0);
        }
                    /* try { // try from 01ac2f9c to 01bc2fbf has its CatchHandler @ 01ac2b44 */
        puVar3 = (undefined8 *)FUN_0103c348(plVar2,*unaff_x24,0x2c);
LAB_01ac2fbc:
                    /* try { // try from 01ac2fc0 to 01bc2fcf has its CatchHandler @ 01ac2fd0 */
        fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (*(long *)(unaff_x19 + 0x410) != 0) {
                    /* catch() { ... } // from try @ 01ac2f84 with catch @ 01ac2fd0
                       catch() { ... } // from try @ 01ac2fc0 with catch @ 01ac2fd0 */
          fVar10 = *(float *)(unaff_x19 + 0x3e4);
                    /* try { // try from 01ac2fd4 to 01bc2fd7 has its CatchHandler @ 01ac2fe0 */
          fVar11 = *(float *)(unaff_x19 + 0x3d8);
                    /* try { // try from 01ac2fd8 to 01bc2fe3 has its CatchHandler @ 01ac2b44 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01ac2fd4 with catch @ 01ac2fe0
                        */
          plVar2 = (long *)FUN_021a6128(*(long *)(unaff_x19 + 0x410),0);
          if (plVar2 != (long *)0x0) {
            lVar7 = *plVar2;
            uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
            fVar8 = (fVar8 + fVar10) * fVar11 - (unaff_s12 + fVar9 + unaff_s8);
            if (uVar6 != 0) {
              piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar4 + -2) == *unaff_x24) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar4 + 0x2c) * 0x10 + 0x138);
                  goto LAB_01ac3050;
                }
                uVar6 = uVar6 - 1;
                piVar4 = piVar4 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)FUN_0103c348(plVar2,*unaff_x24,0x2c);
LAB_01ac3050:
            fVar9 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
            if (ABS(fVar9 - fVar8) <= DAT_00657468) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x410) != 0) {
              plVar2 = (long *)FUN_021a9950(*(long *)(unaff_x19 + 0x410),0);
              auVar12 = FUN_021bc63c(fVar8,0);
              if (plVar2 != (long *)0x0) {
                lVar7 = *plVar2;
                uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar6 != 0) {
                  piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar4 + -2) == *(long *)puVar1) {
                      puVar3 = (undefined8 *)(lVar7 + (long)(*piVar4 + 0x36) * 0x10 + 0x138);
                      goto LAB_01ac3114;
                    }
                    uVar6 = uVar6 - 1;
                    piVar4 = piVar4 + 4;
                  } while (uVar6 != 0);
                }
                puVar3 = (undefined8 *)FUN_0103c348(plVar2,*(long *)puVar1,0x36);
LAB_01ac3114:
                    /* WARNING: Could not recover jumptable at 0x01ac3140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar3)(plVar2,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar3[1]);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


