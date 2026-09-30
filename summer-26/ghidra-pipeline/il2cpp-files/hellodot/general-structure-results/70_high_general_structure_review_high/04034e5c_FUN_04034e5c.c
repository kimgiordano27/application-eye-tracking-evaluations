/*
FUNCTION_NAME: FUN_04034e5c
ENTRY_POINT: 04034e5c
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


undefined8
FUN_04034e5c(long *param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
            long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_06a6adc7 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc838);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc840);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc830);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc848);
    DAT_06a6adc7 = 1;
  }
  lVar2 = *(long *)(param_6 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02ce0978();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x68) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  lVar2 = thunk_FUN_02cea894();
  lVar8 = *(long *)(param_6 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02ce0978(lVar8);
  }
  FUN_03651d00(lVar2,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x70));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(long *)(lVar2 + 0x10) = param_2;
  *(long *)(lVar2 + 0x18) = param_3;
  if (param_1 == (long *)0x0) {
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar3 = thunk_FUN_02cea894();
    puVar7 = PTR_DAT_065dc850;
  }
  else {
    if ((param_2 != 0) || (param_3 != 0)) {
      FUN_04fb06f4(param_5,1,0);
      lVar8 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02ce0978();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x28) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      puVar7 = PTR_DAT_065dc840;
      uVar3 = thunk_FUN_02cea894();
      lVar8 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02ce0978(lVar8);
      }
      FUN_0405594c(uVar3,param_4,param_5,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x78));
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar4 = FUN_04fa635c(0);
      if ((uVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)(lVar2 + 0x20);
        uVar11 = *(undefined8 *)PTR_DAT_065dc848;
        uVar3 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
        uVar3 = FUN_04db00f0(uVar11,uVar3,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)puVar7);
        }
        FUN_04fa6364(0,uVar10,uVar3,0,0);
      }
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6971a == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc840);
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89a0);
        DAT_06a6971a = '\x01';
      }
      puVar1 = PTR_DAT_065c89a0;
      lVar8 = *(long *)PTR_DAT_065c89a0;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar8 = *(long *)puVar1;
      }
      puVar1 = PTR_DAT_065dc838;
      if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        Niantic_Platform_Analytics_Telemetry_TelemetryResponseProto__set_FailureDetail(uVar3,0);
      }
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
      lVar8 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02ce0978();
      }
      FUN_04ea04f4(uVar3,lVar2,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x80),0);
      plVar5 = (long *)(*(code *)param_1[3])(param_1[8],uVar3,param_4,param_1[5]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar8 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065dc830) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_04035160;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065dc830,3);
LAB_04035160:
      uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar4 & 1) != 0) {
        lVar8 = *(long *)(param_6 + 0x20);
        uVar3 = *(undefined8 *)(lVar2 + 0x10);
        uVar10 = *(undefined8 *)(lVar2 + 0x18);
        uVar11 = *(undefined8 *)(lVar2 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02ce0978();
        }
        System_Collections_Generic_Dictionary_ValueCollection<int,_ValueTuple<Vector4,_Vector2Int>>__System_Collections_ICollection_get_SyncRoot
                  (plVar5,uVar3,uVar10,uVar11,0,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x88));
      }
      return *(undefined8 *)(lVar2 + 0x20);
    }
    thunk_FUN_02c7737c(PTR_DAT_065c96c8);
    uVar3 = thunk_FUN_02cea894();
    puVar7 = PTR_DAT_065dc860;
  }
  uVar10 = thunk_FUN_02c7737c(puVar7);
  FUN_04e97f6c(uVar3,uVar10,0);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar3,param_6);
}


