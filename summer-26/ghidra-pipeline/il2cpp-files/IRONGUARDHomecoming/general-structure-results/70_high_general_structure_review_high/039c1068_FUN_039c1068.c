/*
FUNCTION_NAME: FUN_039c1068
ENTRY_POINT: 039c1068
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_039c1068(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte local_34 [4];
  
  if ((DAT_04838851 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(StringLiteral_5439);
    thunk_FUN_01efb3a4(StringLiteral_4474);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_04838851 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*param_2 != *(long *)StringLiteral_5439) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    FUN_039b554c(param_1,param_2[2]);
    puVar2 = Method_UnityEngine_Component_GetComponent<Point>__;
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    plVar3 = (long *)param_2[2];
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      lVar6 = *(long *)puVar1;
      uVar8 = *(undefined8 *)puVar2;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar6);
      }
      uVar8 = FUN_03579868(uVar8,0);
      uVar5 = FUN_03582560(uVar4,uVar8,0);
      lVar7 = *(long *)(param_1 + 0x10);
      lVar6 = param_2[3];
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)StringLiteral_4474 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_039c8ee8(lVar6,0);
        if (lVar7 != 0) {
          FUN_039ab1c0(lVar7,uVar4,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_039af154();
            return;
          }
        }
      }
      else {
        uVar4 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_03579868(uVar4,0);
        local_34[0] = FUN_03582560(lVar6,uVar4,0);
        local_34[0] = local_34[0] & 1;
        uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                   ,local_34);
        uVar8 = FUN_03579868(*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
        if (lVar7 != 0) {
          FUN_039ab1c0(lVar7,uVar4,uVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


