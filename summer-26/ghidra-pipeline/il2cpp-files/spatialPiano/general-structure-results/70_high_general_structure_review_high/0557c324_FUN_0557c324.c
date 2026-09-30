/*
FUNCTION_NAME: FUN_0557c324
ENTRY_POINT: 0557c324
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_0557c324(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  
  if ((DAT_06bbf98c & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbf98c = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar5 = thunk_FUN_02f6ef30(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
                              );
    uVar5 = System_Xml_XmlCanonicalWriter__ResolvePrefix(uVar5,0);
  }
  else {
    lVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    puVar2 = 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
    ;
    if (lVar4 == *(long *)(param_1 + 0x10)) {
      uVar5 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      FUN_0557aef8(param_1,uVar5);
      (**(code **)(*param_2 + 0x1a8))(param_2,0,*(undefined8 *)(*param_2 + 0x1b0));
      lVar9 = *(long *)puVar2;
      lVar4 = *param_2;
      bVar1 = *(byte *)(lVar9 + 0x130);
      if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar9)) {
        bVar1 = *(byte *)(*(long *)
                           UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
                         + 0x130);
        if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_IsWithinRadius_00000965_PostfixBurstDelegate_TypeInfo
           )) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != 0) {
          iVar10 = 0;
          while (plVar6 = (long *)FUN_0554be88(lVar4,0), plVar6 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
            if (iVar3 <= iVar10) {
              return;
            }
            if (((*(long *)(param_1 + 0x10) == 0) ||
                (plVar6 = (long *)FUN_0554be88(*(long *)(param_1 + 0x10),0), plVar6 == (long *)0x0))
               || (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))
                                              (plVar6,iVar10,*(undefined8 *)(*plVar6 + 0x210)),
                  plVar6 == (long *)0x0)) break;
            plVar7 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210))
            ;
            if (plVar7 == param_2) {
              plVar6[8] = 0;
            }
            lVar4 = *(long *)(param_1 + 0x10);
            iVar10 = iVar10 + 1;
            if (lVar4 == 0) break;
          }
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != 0) {
          iVar10 = 0;
          while (plVar6 = (long *)FUN_0554c018(lVar4,0), plVar6 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
            if (iVar3 <= iVar10) {
              lVar4 = *(long *)puVar2;
              bVar1 = *(byte *)(lVar4 + 0x130);
              if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
                 (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == lVar4)) {
                FUN_055aef3c(param_2,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(param_2);
            }
            if (((*(long *)(param_1 + 0x10) == 0) ||
                (plVar6 = (long *)FUN_0554c018(*(long *)(param_1 + 0x10),0), plVar6 == (long *)0x0))
               || (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))
                                              (plVar6,iVar10,*(undefined8 *)(*plVar6 + 0x210)),
                  plVar6 == (long *)0x0)) break;
            plVar7 = (long *)(**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200))
            ;
            if (plVar7 == param_2) {
              plVar6[7] = 0;
            }
            lVar4 = *(long *)(param_1 + 0x10);
            iVar10 = iVar10 + 1;
            if (lVar4 == 0) break;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = FUN_05565230(0);
  }
  uVar8 = thunk_FUN_02f6ef30(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<DoReadAsBytesAsync>d__42>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar5,uVar8);
}


