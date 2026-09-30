/*
FUNCTION_NAME: Oculus.Voice.Bindings.Android.VoiceSDKImplRequest$$HandleResponse
ENTRY_POINT: 041ae940
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Oculus_Voice_Bindings_Android_VoiceSDKImplRequest__HandleResponse(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  long *plVar6;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Write__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
  thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_WriteInternal__);
  thunk_FUN_01efb3a4(PTR_DAT_0458e810);
  thunk_FUN_01efb3a4(PTR_DAT_0458e818);
  thunk_FUN_01efb3a4(PTR_DAT_0458e820);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Text>__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                    );
  thunk_FUN_01efb3a4(PTR_DAT_0458e828);
  *(undefined1 *)(unaff_x20 + 0xd4d) = 1;
  puVar1 = PTR_DAT_0458e828;
  plVar5 = (long *)(unaff_x19 + 0x20);
  if (*plVar5 != 0) {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f2cc(*(undefined8 *)puVar1,0);
    return;
  }
  *plVar5 = unaff_x21;
  thunk_FUN_01f51358(plVar5);
  lVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                            );
  FUN_04228304(lVar3,0);
  puVar1 = Method_UnityEngine_Component_GetComponentInChildren<Text>__;
  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentInChildren<Text>__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar3 != 0) {
    FUN_04227fd8(lVar3,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
    plVar6 = (long *)(unaff_x19 + 0x28);
    *plVar6 = lVar3;
    thunk_FUN_01f51358(plVar6,lVar3);
    if (*plVar6 != 0) {
      FUN_0422aa74(*plVar6,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18),0);
      if (((*plVar6 != 0) &&
          (FUN_042246d4(*plVar6,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0),
          unaff_x21 != 0)) && (*(long *)(unaff_x21 + 0x440) != 0)) {
        in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x21 + 0x440) + 0x378);
        FUN_04231af0(&stack0x00000008,0,*(undefined8 *)(unaff_x19 + 0x28),0);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_0422f074(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),0);
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x440), lVar3 != 0)) {
            lVar3 = *(long *)(lVar3 + 0x418);
            uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                                      );
            FUN_02ab2244();
            if (lVar3 != 0) {
              FUN_041bb358(lVar3,uVar4,0);
              puVar1 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
              if ((*plVar5 != 0) && (lVar3 = *(long *)(*plVar5 + 0x440), lVar3 != 0)) {
                lVar3 = *(long *)(lVar3 + 0x410);
                uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                            Method_System_IO_Compression_DeflateStream_WriteInternal__
                                          );
                FUN_02df9810();
                puVar2 = Method_System_IO_Compression_DeflateStream_Write__;
                if (lVar3 != 0) {
                  FUN_022c2090(lVar3,uVar4,0,
                               *(undefined8 *)Method_System_IO_Compression_DeflateStream_Write__);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x410);
                    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
                    FUN_02df9810();
                    if (lVar3 != 0) {
                      FUN_022c2090(lVar3,uVar4,0,*(undefined8 *)puVar2);
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


