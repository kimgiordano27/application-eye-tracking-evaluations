/*
FUNCTION_NAME: System.IO.FileStream$$get_Position
ENTRY_POINT: 030526bc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long System_IO_FileStream__get_Position(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int local_14;
  
  if ((DAT_03ef3d08 & 1) == 0) {
    FUN_01c5c92c(PTR_System_IO_MonoIO_TypeInfo_03cb9bb8);
    DAT_03ef3d08 = 1;
  }
  local_14 = 0;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar2 = System_Runtime_InteropServices_SafeHandle__get_IsClosed(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      if ((char)param_1[8] == '\0') {
        lVar5 = param_1[0xd] + (long)*(int *)((long)param_1 + 100);
      }
      else {
        lVar5 = param_1[7];
        if (*(int *)(*(long *)PTR_System_IO_MonoIO_TypeInfo_03cb9bb8 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        lVar5 = System_IO_MonoIO__Seek(lVar5,0,1,&local_14);
        if (local_14 != 0) {
          uVar3 = System_IO_FileStream__GetSecureFileName(param_1,param_1[6]);
          iVar1 = local_14;
          thunk_FUN_01cb9718(PTR_System_IO_MonoIO_TypeInfo_03cb9bb8);
          FUN_01985574();
          uVar3 = System_IO_MonoIO__GetException(uVar3,iVar1);
          goto LAB_0305280c;
        }
      }
      return lVar5;
    }
    thunk_FUN_01cb9718(PTR_System_NotSupportedException_TypeInfo_03cb5c28);
    uVar3 = thunk_FUN_01c8fc48();
    uVar4 = thunk_FUN_01cb9718(PTR_StringLiteral_5557_03cc0468);
    System_NotSupportedException___ctor(uVar3,uVar4,0);
  }
  else {
    thunk_FUN_01cb9718(PTR_System_ObjectDisposedException_TypeInfo_03cb6fd8);
    uVar3 = thunk_FUN_01c8fc48();
    uVar4 = thunk_FUN_01cb9718(PTR_StringLiteral_5146_03cc0460);
    System_ObjectDisposedException___ctor(uVar3,uVar4,0);
  }
LAB_0305280c:
  uVar4 = thunk_FUN_01cb9718(PTR_Method_System_IO_FileStream_get_Position___03cc0478);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar3,uVar4);
}


