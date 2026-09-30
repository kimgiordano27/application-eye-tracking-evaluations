/*
FUNCTION_NAME: Firebase.Firestore.Converters.EnumerableConverter$$DeserializeArray
ENTRY_POINT: 02d3eaac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Firebase_Firestore_Converters_EnumerableConverter__DeserializeArray
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x21;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long *in_stack_00000058;
  
  fVar3 = (float)FUN_05c9c5bc(param_4,0);
  fVar7 = *(float *)(unaff_x19 + 0x4c);
  fVar5 = param_2;
  fVar6 = param_3;
  uVar4 = FUN_05d1b848();
  if (unaff_x21 != 0) {
    FUN_05d1e194(fVar3 * fVar7,param_2 * fVar7,param_3 * fVar7,uVar4,fVar5,fVar6);
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      FUN_040a464c();
    }
    lVar1 = FUN_05d1ba74();
    if (lVar1 != 0) {
      uVar2 = FUN_0317392c(lVar1,&stack0x00000058,*(undefined8 *)PTR_DAT_06318b58);
      if ((uVar2 & 1) != 0) {
        if (in_stack_00000058 == (long *)0x0) goto LAB_02d3eb9c;
        (**(code **)(*in_stack_00000058 + 0x178))();
      }
      return;
    }
  }
LAB_02d3eb9c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


