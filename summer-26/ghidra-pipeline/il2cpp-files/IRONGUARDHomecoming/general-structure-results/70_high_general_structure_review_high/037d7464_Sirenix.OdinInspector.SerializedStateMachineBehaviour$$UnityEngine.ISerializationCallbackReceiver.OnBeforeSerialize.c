/*
FUNCTION_NAME: Sirenix.OdinInspector.SerializedStateMachineBehaviour$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 037d7464
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Sirenix_OdinInspector_SerializedStateMachineBehaviour__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  undefined8 uVar7;
  
  FUN_0407c6f0(param_1,0);
  puVar4 = StringLiteral_1259;
  puVar3 = StringLiteral_1258;
  puVar2 = StringLiteral_1252;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (*unaff_x19 != 0) {
    lVar5 = FUN_023361c8(*unaff_x19,*(undefined8 *)StringLiteral_1258);
                    /* try { // try from 037d74a4 to 038d74e3 has its CatchHandler @ 037d74a4
                       catch() { ... } // from try @ 037d74a4 with catch @ 037d74a4
                       catch() { ... } // from try @ 037d7580 with catch @ 037d74a4
                       catch() { ... } // from try @ 037d7608 with catch @ 037d74a4 */
    uVar7 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    uVar7 = FUN_03579868(uVar7,0);
    plVar6 = (long *)FUN_0406e834(uVar7,*(undefined8 *)puVar4,0);
    if (lVar5 != 0) {
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else if (*plVar6 != *(long *)StringLiteral_1253) {
        plVar6 = (long *)0x0;
      }
      FUN_0427fc20(lVar5,plVar6,0);
      if ((*unaff_x19 != 0) && (lVar5 = FUN_023361c8(*unaff_x19,*(undefined8 *)puVar3), lVar5 != 0))
      {
        FUN_04280018(lVar5,4,0);
        if (*unaff_x19 != 0) {
          lVar5 = FUN_04073258(*unaff_x19,0);
          uVar7 = FUN_04073258();
          if (lVar5 != 0) {
            FUN_0407dcac(lVar5,uVar7,0);
            if (*unaff_x19 != 0) {
              FUN_040767ac(*unaff_x19,*(undefined8 *)StringLiteral_1260,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


