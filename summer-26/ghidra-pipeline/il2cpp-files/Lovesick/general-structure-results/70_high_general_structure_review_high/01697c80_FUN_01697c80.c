/*
FUNCTION_NAME: FUN_01697c80
ENTRY_POINT: 01697c80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_01697c80(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 local_24;
  
  if ((DAT_0377853b & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__
                      );
    thunk_FUN_00d48444(StringLiteral_5033);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__
                      );
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_ObjectHolder_UpdateData__);
    DAT_0377853b = 1;
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  if (lVar5 == 0) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5033);
    if (lVar5 == 0) goto LAB_01697ed4;
    FUN_017b46ec(lVar5,0);
    *(long *)(param_1 + 0xa0) = lVar5;
  }
  FUN_0168850c(lVar5,param_1);
  if ((*(long *)(param_1 + 0xa0) != 0) && (lVar5 = FUN_01696818(param_1), lVar5 != 0)) {
    *(undefined4 *)(lVar5 + 0x14) = 1;
    if (*(long *)(param_1 + 0x40) != 0) {
      plVar1 = (long *)FUN_016999c0(*(long *)(param_1 + 0x40),0);
      if (plVar1 != (long *)0x0) {
        if (*plVar1 !=
            *(long *)
             Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_Release__) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar1);
        }
      }
      lVar5 = FUN_01696818(param_1);
      if (lVar5 != 0) {
        FUN_01699724(lVar5,0);
        lVar5 = FUN_01696818(param_1);
        if ((*(long *)(param_1 + 0xa0) != 0) && (lVar5 != 0)) {
          *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
          lVar5 = FUN_01696818(param_1);
          if (*(long *)(param_1 + 0xa0) != 0) {
            uVar4 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_Add__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar2 = FUN_01686cb8(uVar4);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x40) = uVar2;
              lVar5 = FUN_01696818(param_1);
              if ((*(long *)(param_1 + 0xa0) != 0) &&
                 (uVar2 = FUN_01686d70(*(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10)),
                 lVar5 != 0)) {
                *(undefined8 *)(lVar5 + 0x48) = uVar2;
                lVar5 = FUN_01696818(param_1);
                if ((*(long *)(param_1 + 0xa0) != 0) && (lVar5 != 0)) {
                  *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10);
                  lVar5 = FUN_01696818(param_1);
                  if (lVar5 != 0) {
                    if (plVar1 == (long *)0x0) {
                      *(undefined4 *)(lVar5 + 0x10) = 2;
                      lVar5 = FUN_01696818(param_1);
                      if (lVar5 == 0) goto LAB_01697ed4;
                      *(undefined8 *)(lVar5 + 0x28) =
                           *(undefined8 *)
                            Method_System_Runtime_Serialization_ObjectHolder_UpdateData__;
                    }
                    else {
                      *(undefined4 *)(lVar5 + 0x10) = 3;
                      lVar5 = FUN_01696818(param_1);
                      if (lVar5 == 0) goto LAB_01697ed4;
                      *(undefined4 *)(lVar5 + 0x20) = 1;
                      if ((int)plVar1[6] == 2) {
                        lVar5 = FUN_01696818(param_1);
                        if (lVar5 == 0) goto LAB_01697ed4;
                        uVar4 = 3;
                      }
                      else {
                        if ((int)plVar1[6] != 1) {
                          uVar2 = thunk_FUN_00d48444(StringLiteral_3033);
                          uVar2 = FUN_00da4fb8(uVar2,1);
                          FUN_00ac2be8(plVar1);
                          local_24 = (undefined4)plVar1[6];
                          uVar3 = thunk_FUN_00d48444(
                                                  Method_TMPro_TMP_TextProcessingStack<Color32>_SetDefault__
                                                  );
                          uVar3 = thunk_FUN_00d61fa0(uVar3,&local_24);
                          uVar3 = FUN_017a7f78(uVar3,0);
                          FUN_00ac2be8(uVar2);
                          FUN_00acb0b4(uVar2,uVar3);
                          FUN_00adb25c(uVar2,0,uVar3);
                          uVar3 = thunk_FUN_00d48444(PTR_DAT_033ee728);
                          uVar2 = FUN_017b63dc(uVar3,uVar2,0);
                          thunk_FUN_00d48444(
                                            UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                                            );
                          uVar3 = thunk_FUN_00d62348();
                          FUN_00ac2be8();
                          FUN_01679968(uVar3,uVar2,0);
                          uVar2 = thunk_FUN_00d48444(PTR_DAT_033f6008);
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar3,uVar2);
                        }
                        lVar5 = FUN_01696818(param_1);
                        if (lVar5 == 0) goto LAB_01697ed4;
                        *(long *)(lVar5 + 0x28) = plVar1[5];
                        lVar5 = FUN_01696818(param_1);
                        if (lVar5 == 0) goto LAB_01697ed4;
                        uVar4 = 2;
                      }
                      *(undefined4 *)(lVar5 + 0x1c) = uVar4;
                    }
                    lVar5 = *(long *)(param_1 + 0x10);
                    uVar2 = FUN_01696818(param_1);
                    if (lVar5 != 0) {
                      FUN_01691df0(lVar5,uVar2);
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
LAB_01697ed4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


