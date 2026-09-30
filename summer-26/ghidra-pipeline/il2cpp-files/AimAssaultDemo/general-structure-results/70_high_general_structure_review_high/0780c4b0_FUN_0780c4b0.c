/*
FUNCTION_NAME: FUN_0780c4b0
ENTRY_POINT: 0780c4b0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_6
*/


void FUN_0780c4b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_818 [152];
  undefined1 auStack_780 [152];
  undefined1 auStack_6e8 [152];
  undefined1 auStack_650 [152];
  undefined1 auStack_5b8 [152];
  undefined1 auStack_520 [152];
  undefined1 auStack_488 [152];
  undefined1 auStack_3f0 [152];
  undefined1 auStack_358 [152];
  undefined1 auStack_2c0 [152];
  undefined1 auStack_228 [152];
  undefined1 auStack_190 [152];
  undefined1 auStack_f8 [152];
  
  puVar1 = PTR_DAT_07d95b20;
  if ((DAT_082722e9 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95b20);
    FUN_0373b518(PTR_DAT_07d9a208);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<InputAnimationManager_TouchpadBinding>_get_Current__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_Dispose__
                );
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_MoveNext__
                );
    FUN_0373b518(PTR_DAT_07d99ba0);
    FUN_0373b518(PTR_DAT_07d99bb8);
    FUN_0373b518(
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_Dispose__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_DifficultyUI>_Dispose__
                );
    FUN_0373b518(PTR_DAT_07d9a238);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_DifficultyUI>_MoveNext__
                );
    FUN_0373b518(PTR_DAT_07d88790);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_DifficultyUI>_get_Current__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_GunUI>_Dispose__
                );
    FUN_0373b518(PTR_DAT_07d9a350);
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<HapticLibraryAsset>_MoveNext__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_GunUI>_MoveNext__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_GunUI>_get_Current__
                );
    DAT_082722e9 = 1;
  }
  puVar12 = 
  Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_GunUI>_get_Current__
  ;
  puVar11 = 
  Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_GunUI>_Dispose__;
  puVar10 = 
  Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_DifficultyUI>_MoveNext__
  ;
  puVar9 = 
  Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
  ;
  puVar8 = 
  Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_MoveNext__
  ;
  puVar7 = 
  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_MoveNext__
  ;
  puVar6 = 
  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_Dispose__
  ;
  puVar5 = 
  Method_System_Collections_Generic_List_Enumerator<InputAnimationManager_TouchpadBinding>_get_Current__
  ;
  puVar4 = PTR_DAT_07d9a350;
  puVar3 = PTR_DAT_07d9a208;
  puVar2 = PTR_DAT_07d99bb8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_07769d80(auStack_190,*(undefined8 *)puVar11,0);
  memcpy(auStack_f8,auStack_190,0x98);
  memcpy(*(void **)(*(long *)puVar3 + 0xb8),auStack_f8,0x98);
  thunk_FUN_037aeb94(*(long *)(*(long *)puVar3 + 0xb8) + 8,0);
  FUN_07769d80(auStack_228,*(undefined8 *)puVar4,0);
  memcpy(auStack_190,auStack_228,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x98),auStack_190,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0xa0,0);
  FUN_07769d80(auStack_2c0,*(undefined8 *)puVar5,0);
  memcpy(auStack_228,auStack_2c0,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x130),auStack_228,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x138,0);
  FUN_07769d80(auStack_358,*(undefined8 *)puVar10,0);
  memcpy(auStack_2c0,auStack_358,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x1c8),auStack_2c0,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x1d0,0);
  FUN_07769d80(auStack_3f0,*(undefined8 *)puVar9,0);
  memcpy(auStack_358,auStack_3f0,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x260),auStack_358,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x268,0);
  FUN_07769d80(auStack_488,*(undefined8 *)puVar7,0);
  memcpy(auStack_3f0,auStack_488,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x2f8),auStack_3f0,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x300,0);
  FUN_07769d80(auStack_520,*(undefined8 *)puVar12,0);
  memcpy(auStack_488,auStack_520,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x390),auStack_488,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x398,0);
  FUN_07769d80(auStack_5b8,*(undefined8 *)puVar6,0);
  memcpy(auStack_520,auStack_5b8,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x428),auStack_520,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x430,0);
  FUN_07769d80(auStack_650,*(undefined8 *)puVar8,0);
  memcpy(auStack_5b8,auStack_650,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x4c0),auStack_5b8,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x4c8,0);
  FUN_07769d80(auStack_6e8,
               *(undefined8 *)
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputControlScheme_DeviceRequirement>_get_Current__
               ,0);
  memcpy(auStack_650,auStack_6e8,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x558),auStack_650,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x560,0);
  FUN_07769d80(auStack_780,*(undefined8 *)PTR_DAT_07d88790,0);
  memcpy(auStack_6e8,auStack_780,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x5f0),auStack_6e8,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x5f8,0);
  FUN_07769d80(auStack_818,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_GunUI>_MoveNext__
               ,0);
  memcpy(auStack_780,auStack_818,0x98);
  lVar14 = *(long *)puVar3;
  memcpy((void *)(*(long *)(lVar14 + 0xb8) + 0x688),auStack_780,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar14 + 0xb8) + 0x690,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x720) = DAT_0158c238;
  *(undefined8 *)(lVar14 + 0x728) =
       *(undefined8 *)
        Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_MoveNext__
  ;
  thunk_FUN_037aeb94(lVar14 + 0x728);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)
                       Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_get_Current__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x730) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x730);
  puVar1 = PTR_DAT_07d99ba0;
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x730),
                      *(undefined8 *)PTR_DAT_07d99ba0,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x738) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x738);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x730),
                      *(undefined8 *)puVar2,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x740) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x740);
  puVar4 = PTR_DAT_07d9a238;
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x730),
                      *(undefined8 *)PTR_DAT_07d9a238,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x748) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x748);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_Dispose__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x750) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x750);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<HapticLibraryAsset>_MoveNext__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x758) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x758);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x758),
                      *(undefined8 *)puVar1,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x760) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x760);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x758),
                      *(undefined8 *)puVar2,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x768) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x768);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x758),
                      *(undefined8 *)puVar4,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x770) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x770);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_DifficultyUI>_get_Current__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x778) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x778);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)
                       Method_System_Collections_Generic_Stack_Enumerator<JsonValidatingReader_SchemaScope>_Dispose__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x780) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x780);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)puVar1,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x788) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x788);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)puVar2,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x790) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x790);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)puVar4,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x798) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x798);
  uVar13 = System_Convert__ToInt32
                     (*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x728),
                      *(undefined8 *)
                       Method_System_Collections_Generic_List_Enumerator<LeaderboardsSelectionSettings_DifficultyUI>_Dispose__
                      ,0);
  lVar14 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar14 + 0x7a0) = uVar13;
  thunk_FUN_037aeb94(lVar14 + 0x7a0);
  return;
}


