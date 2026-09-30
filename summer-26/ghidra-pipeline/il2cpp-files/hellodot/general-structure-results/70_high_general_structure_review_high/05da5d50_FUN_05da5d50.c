/*
FUNCTION_NAME: FUN_05da5d50
ENTRY_POINT: 05da5d50
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_05da5d50(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_06a7ada1 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<KeyValuePair<string,_JToken>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_HashSet<Rigidbody>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<KeyValuePair<string,_object>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Collections_Generic_HashSet<S2CellId>_TypeInfo)
    ;
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_HashSet<ScheduledItem>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<KeyValuePair<string,_string>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<ValueTuple<string,_float>>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              System_Collections_Generic_ICollection<ValueTuple<int,_Preference_Types_PreferenceType,_string,_bool>>_TypeInfo
              );
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_HashSet<SerializationOperation>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_ICollection<Vector2[]>_TypeInfo);
    DAT_06a7ada1 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_04f53aa4(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
    }
    uVar6 = FUN_05da123c(param_1);
    if ((uVar6 & 1) == 0) {
      if (*(char *)(param_1 + 0x155) == '\0') {
        return;
      }
      uVar6 = FUN_05da0c94(param_1);
      if ((uVar6 & 1) == 0) {
        return;
      }
      lVar7 = FUN_05da0ce4(param_1);
      if (lVar7 == 0) goto LAB_05da6048;
      FUN_03968dbc(&local_68,lVar7,
                   *(undefined8 *)
                    System_Collections_Generic_HashSet<SerializationOperation>_TypeInfo);
      puVar5 = System_Collections_Generic_ICollection<ValueTuple<string,_float>>_TypeInfo;
      puVar4 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
      puVar3 = System_Collections_Generic_HashSet<S2CellId>_TypeInfo;
      while (uVar6 = FUN_0481f4e4(&local_68,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
        lVar7 = thunk_FUN_02cea798(local_58,*(undefined8 *)puVar4);
        if (lVar7 != 0) {
          lVar9 = *(long *)(param_2 + 0x10);
          lVar11 = *(long *)puVar5;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar2 = *(uint *)(param_2 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar2 + 1;
            *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
          }
          else {
            FUN_039683cc(param_2,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      puVar8 = &local_68;
      puVar10 = (undefined8 *)System_Collections_Generic_HashSet<Rigidbody>_TypeInfo;
    }
    else {
      lVar7 = FUN_05da6100(param_1);
      if (lVar7 == 0) goto LAB_05da6048;
      FUN_03968dbc(&local_80,lVar7,
                   *(undefined8 *)System_Collections_Generic_ICollection<Vector2[]>_TypeInfo);
      puVar5 = System_Collections_Generic_ICollection<ValueTuple<string,_float>>_TypeInfo;
      puVar4 = System_Collections_Generic_ICollection<KeyValuePair<string,_object>>_TypeInfo;
      puVar3 = System_Collections_Generic_ICollection<IAssetRequest<Toy>>_TypeInfo;
      uStack_48 = uStack_78;
      local_50 = local_80;
      local_40 = local_70;
      while (uVar6 = FUN_0481f4e4(&local_50,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
        lVar7 = thunk_FUN_02cea798(local_40,*(undefined8 *)puVar3);
        if (lVar7 != 0) {
          lVar9 = *(long *)(param_2 + 0x10);
          lVar11 = *(long *)puVar5;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar2 = *(uint *)(param_2 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar2 + 1;
            *(long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
          }
          else {
            FUN_039683cc(param_2,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      puVar8 = &local_50;
      puVar10 = (undefined8 *)
                System_Collections_Generic_ICollection<KeyValuePair<string,_JToken>>_TypeInfo;
    }
    FUN_0481f4e0(puVar8,*puVar10);
    return;
  }
LAB_05da6048:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


