/*
FUNCTION_NAME: Sirenix.OdinInspector.SerializedScriptableObject$$UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
ENTRY_POINT: 037d736c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Sirenix_OdinInspector_SerializedScriptableObject__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_023360e0();
  lVar5 = FUN_023361c8();
  if (lVar5 != 0) {
    FUN_0407c6f0(0x43af0000,0x42480000,lVar5,0);
    plVar6 = (long *)FUN_023361c8();
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x2a8))
                (DAT_00c9268c,DAT_00c92a7c,DAT_00c92a80,DAT_00c92324,plVar6,
                 *(undefined8 *)(*plVar6 + 0x2b0));
      lVar5 = thunk_FUN_01f117cc(*unaff_x21);
      FUN_04073578(lVar5,0);
      plVar6 = (long *)(unaff_x19 + 0x70);
      *plVar6 = lVar5;
      thunk_FUN_01f51358(plVar6,lVar5);
      if (*plVar6 != 0) {
        FUN_023360e0(*plVar6,*unaff_x24);
        if (*plVar6 != 0) {
          FUN_023360e0(*plVar6,*unaff_x23);
          if (*plVar6 != 0) {
            FUN_023360e0(*plVar6,*(undefined8 *)StringLiteral_1256);
            if ((*plVar6 != 0) && (lVar5 = FUN_023361c8(*plVar6,*unaff_x22), lVar5 != 0)) {
              FUN_0407c6f0(0x43af0000,0x42480000,lVar5,0);
              puVar4 = StringLiteral_1259;
              puVar3 = StringLiteral_1258;
              puVar2 = StringLiteral_1252;
              puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
              if (*plVar6 != 0) {
                lVar5 = FUN_023361c8(*plVar6,*(undefined8 *)StringLiteral_1258);
                uVar8 = *(undefined8 *)puVar2;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(*(long *)puVar1);
                }
                uVar8 = FUN_03579868(uVar8,0);
                plVar7 = (long *)FUN_0406e834(uVar8,*(undefined8 *)puVar4,0);
                if (lVar5 != 0) {
                  if (plVar7 == (long *)0x0) {
                    plVar7 = (long *)0x0;
                  }
                  else if (*plVar7 != *(long *)StringLiteral_1253) {
                    plVar7 = (long *)0x0;
                  }
                  FUN_0427fc20(lVar5,plVar7,0);
                  if ((*plVar6 != 0) &&
                     (lVar5 = FUN_023361c8(*plVar6,*(undefined8 *)puVar3), lVar5 != 0)) {
                    FUN_04280018(lVar5,4,0);
                    if (*plVar6 != 0) {
                      lVar5 = FUN_04073258(*plVar6,0);
                      uVar8 = FUN_04073258();
                      if (lVar5 != 0) {
                        FUN_0407dcac(lVar5,uVar8,0);
                        if (*plVar6 != 0) {
                          FUN_040767ac(*plVar6,*(undefined8 *)StringLiteral_1260,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


