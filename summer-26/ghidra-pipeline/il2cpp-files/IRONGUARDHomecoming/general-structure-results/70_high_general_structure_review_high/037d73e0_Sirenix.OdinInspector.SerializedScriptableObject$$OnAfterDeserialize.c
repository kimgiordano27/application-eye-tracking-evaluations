/*
FUNCTION_NAME: Sirenix.OdinInspector.SerializedScriptableObject$$OnAfterDeserialize
ENTRY_POINT: 037d73e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Sirenix_OdinInspector_SerializedScriptableObject__OnAfterDeserialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  code *in_x9;
  long unaff_x19;
  long *plVar7;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  (*in_x9)();
  lVar5 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_04073578(lVar5,0);
  plVar7 = (long *)(unaff_x19 + 0x70);
  *plVar7 = lVar5;
  thunk_FUN_01f51358(plVar7,lVar5);
  if (*plVar7 != 0) {
    FUN_023360e0(*plVar7,*unaff_x24);
    if (*plVar7 != 0) {
      FUN_023360e0(*plVar7,*unaff_x23);
      if (*plVar7 != 0) {
        FUN_023360e0(*plVar7,*(undefined8 *)StringLiteral_1256);
        if ((*plVar7 != 0) && (lVar5 = FUN_023361c8(*plVar7,*unaff_x22), lVar5 != 0)) {
          FUN_0407c6f0(0x43af0000,0x42480000,lVar5,0);
          puVar4 = StringLiteral_1259;
          puVar3 = StringLiteral_1258;
          puVar2 = StringLiteral_1252;
          puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
          if (*plVar7 != 0) {
            lVar5 = FUN_023361c8(*plVar7,*(undefined8 *)StringLiteral_1258);
            uVar8 = *(undefined8 *)puVar2;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar1);
            }
            uVar8 = FUN_03579868(uVar8,0);
            plVar6 = (long *)FUN_0406e834(uVar8,*(undefined8 *)puVar4,0);
            if (lVar5 != 0) {
              if (plVar6 == (long *)0x0) {
                plVar6 = (long *)0x0;
              }
              else if (*plVar6 != *(long *)StringLiteral_1253) {
                plVar6 = (long *)0x0;
              }
              FUN_0427fc20(lVar5,plVar6,0);
              if ((*plVar7 != 0) &&
                 (lVar5 = FUN_023361c8(*plVar7,*(undefined8 *)puVar3), lVar5 != 0)) {
                FUN_04280018(lVar5,4,0);
                if (*plVar7 != 0) {
                  lVar5 = FUN_04073258(*plVar7,0);
                  uVar8 = FUN_04073258();
                  if (lVar5 != 0) {
                    FUN_0407dcac(lVar5,uVar8,0);
                    if (*plVar7 != 0) {
                      FUN_040767ac(*plVar7,*(undefined8 *)StringLiteral_1260,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


