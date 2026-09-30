/*
FUNCTION_NAME: Sirenix.OdinInspector.SerializedScriptableObject$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
ENTRY_POINT: 037d72fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


long Sirenix_OdinInspector_SerializedScriptableObject__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar9;
  
  thunk_FUN_01efb3a4(StringLiteral_1259);
  thunk_FUN_01efb3a4(StringLiteral_1260);
  *(undefined1 *)(unaff_x20 + 0x6ed) = 1;
  lVar5 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_04073578(lVar5,0);
  puVar4 = StringLiteral_1255;
  puVar3 = StringLiteral_1254;
  puVar2 = StringLiteral_1244;
  puVar1 = StringLiteral_1233;
  if (lVar5 != 0) {
    FUN_023360e0(lVar5,*(undefined8 *)StringLiteral_1233);
    FUN_023360e0(lVar5,*(undefined8 *)puVar3);
    FUN_023360e0(lVar5,*(undefined8 *)puVar4);
    lVar6 = FUN_023361c8(lVar5,*(undefined8 *)puVar2);
    puVar4 = StringLiteral_1257;
    if (lVar6 != 0) {
      FUN_0407c6f0(0x43af0000,0x42480000,lVar6,0);
      plVar7 = (long *)FUN_023361c8(lVar5,*(undefined8 *)puVar4);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x2a8))
                  (DAT_00c9268c,DAT_00c92a7c,DAT_00c92a80,DAT_00c92324,plVar7,
                   *(undefined8 *)(*plVar7 + 0x2b0));
        lVar6 = thunk_FUN_01f117cc(*unaff_x21);
        FUN_04073578(lVar6,0);
        plVar7 = (long *)(unaff_x19 + 0x70);
        *plVar7 = lVar6;
        thunk_FUN_01f51358(plVar7,lVar6);
        if (*plVar7 != 0) {
          FUN_023360e0(*plVar7,*(undefined8 *)puVar1);
          if (*plVar7 != 0) {
            FUN_023360e0(*plVar7,*(undefined8 *)puVar3);
            if (*plVar7 != 0) {
              FUN_023360e0(*plVar7,*(undefined8 *)StringLiteral_1256);
              if ((*plVar7 != 0) &&
                 (lVar6 = FUN_023361c8(*plVar7,*(undefined8 *)puVar2), lVar6 != 0)) {
                FUN_0407c6f0(0x43af0000,0x42480000,lVar6,0);
                puVar4 = StringLiteral_1259;
                puVar3 = StringLiteral_1258;
                puVar2 = StringLiteral_1252;
                puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                if (*plVar7 != 0) {
                  lVar6 = FUN_023361c8(*plVar7,*(undefined8 *)StringLiteral_1258);
                  uVar9 = *(undefined8 *)puVar2;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)puVar1);
                  }
                  uVar9 = FUN_03579868(uVar9,0);
                  plVar8 = (long *)FUN_0406e834(uVar9,*(undefined8 *)puVar4,0);
                  if (lVar6 != 0) {
                    if (plVar8 == (long *)0x0) {
                      plVar8 = (long *)0x0;
                    }
                    else if (*plVar8 != *(long *)StringLiteral_1253) {
                      plVar8 = (long *)0x0;
                    }
                    FUN_0427fc20(lVar6,plVar8,0);
                    if ((*plVar7 != 0) &&
                       (lVar6 = FUN_023361c8(*plVar7,*(undefined8 *)puVar3), lVar6 != 0)) {
                      FUN_04280018(lVar6,4,0);
                      if (*plVar7 != 0) {
                        lVar6 = FUN_04073258(*plVar7,0);
                        uVar9 = FUN_04073258(lVar5,0);
                        if (lVar6 != 0) {
                          FUN_0407dcac(lVar6,uVar9,0);
                          if (*plVar7 != 0) {
                            FUN_040767ac(*plVar7,*(undefined8 *)StringLiteral_1260,0);
                            return lVar5;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


