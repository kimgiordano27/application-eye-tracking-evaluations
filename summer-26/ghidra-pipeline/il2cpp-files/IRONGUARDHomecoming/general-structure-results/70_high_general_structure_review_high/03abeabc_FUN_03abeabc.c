/*
FUNCTION_NAME: FUN_03abeabc
ENTRY_POINT: 03abeabc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


undefined1 FUN_03abeabc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  
  puVar2 = StringLiteral_9077;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_0483909d & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(StringLiteral_9077);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_8995);
    DAT_0483909d = 1;
  }
  uVar7 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = FUN_03579868(uVar7,0);
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  if (lVar3 != 0) {
    lVar3 = FUN_03584c58(lVar3,*(undefined8 *)StringLiteral_8995,0);
    plVar4 = (long *)FUN_01f08890(*(undefined8 *)puVar1,1);
    if (plVar4 != (long *)0x0) {
      if ((param_1 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
        uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,0);
      }
      if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar4[4] = param_1;
      thunk_FUN_01f51358(plVar4 + 4,param_1);
      if ((lVar3 != 0) && (plVar4 = (long *)FUN_034b2bf4(lVar3,0,plVar4,0), plVar4 != (long *)0x0))
      {
        if (*(long *)(*plVar4 + 0x40) ==
            *(long *)(*(long *)
                       Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                     + 0x40)) {
          puVar6 = (undefined1 *)thunk_FUN_01f11920();
          return *puVar6;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


