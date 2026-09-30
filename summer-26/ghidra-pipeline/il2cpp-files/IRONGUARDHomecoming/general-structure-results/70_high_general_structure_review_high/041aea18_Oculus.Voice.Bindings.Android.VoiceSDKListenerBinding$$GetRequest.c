/*
FUNCTION_NAME: Oculus.Voice.Bindings.Android.VoiceSDKListenerBinding$$GetRequest
ENTRY_POINT: 041aea18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Oculus_Voice_Bindings_Android_VoiceSDKListenerBinding__GetRequest(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar5;
  undefined8 in_stack_00000008;
  
  FUN_04228304();
  puVar1 = Method_UnityEngine_Component_GetComponentInChildren<Text>__;
  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentInChildren<Text>__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (param_1 != 0) {
    FUN_04227fd8(param_1,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
    plVar5 = (long *)(unaff_x19 + 0x28);
    *plVar5 = param_1;
    thunk_FUN_01f51358(plVar5,param_1);
    if (*plVar5 != 0) {
      FUN_0422aa74(*plVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
      if (((*plVar5 != 0) &&
          (FUN_042246d4(*plVar5,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0),
          unaff_x21 != 0)) && (*(long *)(unaff_x21 + 0x440) != 0)) {
        in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x21 + 0x440) + 0x378);
        FUN_04231af0(&stack0x00000008,0,*(undefined8 *)(unaff_x19 + 0x28),0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_0422f074(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),0);
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x440), lVar4 != 0)) {
            lVar4 = *(long *)(lVar4 + 0x418);
            uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                      );
            FUN_02ab2244();
            if (lVar4 != 0) {
              FUN_041bb358(lVar4,uVar3,0);
              puVar1 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
              if ((*unaff_x20 != 0) && (lVar4 = *(long *)(*unaff_x20 + 0x440), lVar4 != 0)) {
                lVar4 = *(long *)(lVar4 + 0x410);
                uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_System_IO_Compression_DeflateStream_WriteInternal__
                                          );
                FUN_02df9810();
                puVar2 = Method_System_IO_Compression_DeflateStream_Write__;
                if (lVar4 != 0) {
                  FUN_022c2090(lVar4,uVar3,0,
                               *(undefined8 *)Method_System_IO_Compression_DeflateStream_Write__);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x410);
                    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
                    FUN_02df9810();
                    if (lVar4 != 0) {
                      FUN_022c2090(lVar4,uVar3,0,*(undefined8 *)puVar2);
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


