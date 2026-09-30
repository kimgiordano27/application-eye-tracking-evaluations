/*
FUNCTION_NAME: FUN_0348b3ec
ENTRY_POINT: 0348b3ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


byte FUN_0348b3ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  long local_38;
  
  puVar2 = Method_Oculus_Platform_CAPI_StringToNative__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04832aec & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_CAPI_StringToNative__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_Stream_set_ReadTimeout__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832aec = 1;
  }
  local_38 = 0;
  plVar4 = (long *)FUN_0348b240(param_1,param_2,&local_38);
  lVar8 = local_38;
  uVar12 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  lVar5 = FUN_03579868(uVar12,0);
  if (lVar8 == lVar5) {
    if (plVar4 == (long *)0x0) goto LAB_0348b564;
    if (*(long *)(*plVar4 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar4);
    }
    pcVar7 = (char *)thunk_FUN_01f11920();
    bVar3 = *pcVar7 != '\0';
  }
  else {
    plVar11 = *(long **)(param_1 + 0x38);
    if (plVar11 == (long *)0x0) {
LAB_0348b564:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_System_IO_Stream_set_ReadTimeout__) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0348b53c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)Method_System_IO_Stream_set_ReadTimeout__,1);
LAB_0348b53c:
    bVar3 = (*(code *)*puVar6)(plVar11,plVar4,puVar6[1]);
  }
  return bVar3 & 1;
}


