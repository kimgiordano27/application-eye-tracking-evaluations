/*
FUNCTION_NAME: Firebase.Firestore.Converters.ConverterBase$$DeserializeArray
ENTRY_POINT: 02d3b15c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Firebase_Firestore_Converters_ConverterBase__DeserializeArray
               (float param_1,undefined1 param_2 [16],undefined8 param_3,float param_4,float param_5
               )

{
  float fVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_00000008;
  
  fVar5 = param_2._4_4_ + (float)((ulong)param_3 >> 0x20) * param_1;
                    /* try { // try from 02d3b168 to 02e3b207 has its CatchHandler @ 02d3b168
                       catch() { ... } // from try @ 02d3b168 with catch @ 02d3b168
                       catch() { ... } // from try @ 02d3b264 with catch @ 02d3b168
                       catch() { ... } // from try @ 02d3b374 with catch @ 02d3b168
                       catch() { ... } // from try @ 02d3b3c0 with catch @ 02d3b168
                       catch() { ... } // from try @ 02d3b440 with catch @ 02d3b168 */
  FUN_05c9c840(CONCAT44(fVar5,param_2._0_4_ + (float)param_3 * param_1),fVar5,
               param_4 + param_5 * param_1);
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar6 = *(float *)(unaff_x20 + 0x54);
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar5;
    }
    FUN_05c53e70(*(float *)(unaff_x20 + 0x48) * fVar7 + 0.0,*(long *)(unaff_x20 + 0x20),0);
    if (*(char *)(unaff_x20 + 0x34) == '\0') {
LAB_02d3b294:
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),0);
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x78);
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar4) goto LAB_02d3b294;
        if ((*(long *)(unaff_x20 + 0x20) == 0) ||
           (lVar2 = thunk_FUN_05c5484c(*(long *)(unaff_x20 + 0x20),0), lVar2 == 0)) break;
        lVar2 = FUN_05c774b4(lVar2,0);
        lVar3 = *(long *)(unaff_x20 + 0x78);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02d3b2fc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        if (*(long *)(unaff_x20 + 0x38) == 0) break;
        fVar7 = *(float *)(lVar3 + uVar4 * 8 + 0x20);
        fVar6 = (float)FUN_05c3b794(*(undefined4 *)(unaff_x20 + 0x54),*(long *)(unaff_x20 + 0x38),0)
        ;
        lVar3 = *(long *)(unaff_x20 + 0x78);
        fVar5 = 1.0;
        if (fVar6 <= 1.0) {
          fVar5 = fVar6;
        }
        fVar1 = 0.0;
        if (0.0 <= fVar6) {
          fVar1 = fVar5;
        }
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_02d3b2fc;
        in_stack_00000008 = 0;
        FUN_05c76ec8(fVar7 * fVar1 + 0.0,*(undefined4 *)(lVar3 + uVar4 * 8 + 0x24),&stack0x00000008,
                     0);
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_02d3b2fc;
        lVar3 = uVar4 * 8;
        uVar4 = uVar4 + 1;
        *(undefined8 *)(lVar2 + lVar3 + 0x20) = in_stack_00000008;
        lVar2 = *(long *)(unaff_x20 + 0x78);
      } while (lVar2 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


