/*
FUNCTION_NAME: FUN_04094664
ENTRY_POINT: 04094664
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_04094664(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int extraout_w1;
  int extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined4 extraout_w1_02;
  char *pcVar5;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0483efb4 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04587a80);
    thunk_FUN_01efb3a4(PTR_DAT_04587a98);
    thunk_FUN_01efb3a4(PTR_DAT_04587aa0);
    thunk_FUN_01efb3a4(PTR_DAT_04587a88);
    DAT_0483efb4 = 1;
  }
  puVar1 = PTR_DAT_04587aa0;
  pcVar5 = (char *)(param_1 + 0xf8);
  if (*pcVar5 == '\0') {
    if (*(char *)(param_1 + 0x110) == '\0') {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x110) != '\0') {
    FUN_0332a6f4(pcVar5,*(undefined8 *)PTR_DAT_04587a88);
    FUN_0332a2b0(param_1 + 0x110,*(undefined8 *)puVar1);
    if (extraout_w1 == extraout_w1_00) {
      return;
    }
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    uVar3 = FUN_01f08890(uVar3,6);
    FUN_01bc50c0();
    puVar1 = PTR_DAT_04587ab0;
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587ab0);
    FUN_01bc56ec(uVar3,uVar4);
    uVar4 = thunk_FUN_01efb3a4(puVar1);
    FUN_01bc5408(uVar3,0,uVar4);
    FUN_01bc50c0(uVar3);
    puVar2 = PTR_DAT_04587ab8;
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587ab8);
    FUN_01bc56ec(uVar3,uVar4);
    uVar4 = thunk_FUN_01efb3a4(puVar2);
    FUN_01bc5408(uVar3,1,uVar4);
    FUN_01bc50c0(uVar3);
    uVar4 = thunk_FUN_01efb3a4(puVar1);
    FUN_01bc56ec(uVar3,uVar4);
    uVar4 = thunk_FUN_01efb3a4(puVar1);
    FUN_01bc5408(uVar3,2,uVar4);
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587a88);
    thunk_FUN_0332a6f4(pcVar5,uVar4);
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    local_34 = extraout_w1_01;
    uVar4 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_34);
    FUN_01bc50c0(uVar3);
    FUN_01bc56ec(uVar3,uVar4);
    FUN_01bc5408(uVar3,3,uVar4);
    FUN_01bc50c0(uVar3);
    uVar4 = thunk_FUN_01efb3a4(puVar2);
    FUN_01bc56ec(uVar3,uVar4);
    uVar4 = thunk_FUN_01efb3a4(puVar2);
    FUN_01bc5408(uVar3,4,uVar4);
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587aa0);
    thunk_FUN_0332a2b0(param_1 + 0x110,uVar4);
    local_38 = extraout_w1_02;
    uVar4 = thunk_FUN_01efb3a4(puVar1);
    uVar4 = thunk_FUN_01f113fc(uVar4,&local_38);
    FUN_01bc50c0(uVar3);
    FUN_01bc56ec(uVar3,uVar4);
    FUN_01bc5408(uVar3,5,uVar4);
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587ac0);
    goto LAB_04094a7c;
  }
  uVar3 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                            );
  uVar3 = FUN_01f08890(uVar3,6);
  FUN_01bc50c0();
  puVar1 = PTR_DAT_04587ab0;
  uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587ab0);
  FUN_01bc56ec(uVar3,uVar4);
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  FUN_01bc5408(uVar3,0,uVar4);
  FUN_01bc50c0(uVar3);
  puVar2 = PTR_DAT_04587ab8;
  uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587ab8);
  FUN_01bc56ec(uVar3,uVar4);
  uVar4 = thunk_FUN_01efb3a4(puVar2);
  FUN_01bc5408(uVar3,1,uVar4);
  FUN_01bc50c0(uVar3);
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  FUN_01bc56ec(uVar3,uVar4);
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  FUN_01bc5408(uVar3,2,uVar4);
  thunk_FUN_01efb3a4(PTR_DAT_04587a80);
  puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  local_3c[0] = *(undefined1 *)(param_1 + 0xf8);
  uVar4 = thunk_FUN_01efb3a4(
                            Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                            );
  uVar4 = thunk_FUN_01f113fc(uVar4,local_3c);
  FUN_01bc50c0(uVar3);
  FUN_01bc56ec(uVar3,uVar4);
  FUN_01bc5408(uVar3,3,uVar4);
  FUN_01bc50c0(uVar3);
  uVar4 = thunk_FUN_01efb3a4(puVar2);
  FUN_01bc56ec(uVar3,uVar4);
  uVar4 = thunk_FUN_01efb3a4(puVar2);
  FUN_01bc5408(uVar3,4,uVar4);
  thunk_FUN_01efb3a4(PTR_DAT_04587a98);
  local_40[0] = *(undefined1 *)(param_1 + 0x110);
  uVar4 = thunk_FUN_01efb3a4(puVar1);
  uVar4 = thunk_FUN_01f113fc(uVar4,local_40);
  FUN_01bc50c0(uVar3);
  FUN_01bc56ec(uVar3,uVar4);
  FUN_01bc5408(uVar3,5,uVar4);
  uVar4 = thunk_FUN_01efb3a4(PTR_DAT_04587ac8);
LAB_04094a7c:
  uVar3 = FUN_0340f378(uVar4,uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar4 = thunk_FUN_01f117cc();
  FUN_034f6754(uVar4,uVar3,0);
  uVar3 = thunk_FUN_01efb3a4(PTR_DAT_04587ad0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar3);
}


