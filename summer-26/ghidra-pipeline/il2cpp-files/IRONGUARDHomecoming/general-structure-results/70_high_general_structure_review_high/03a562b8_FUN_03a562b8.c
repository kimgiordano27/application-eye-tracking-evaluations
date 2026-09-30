/*
FUNCTION_NAME: FUN_03a562b8
ENTRY_POINT: 03a562b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03a562b8(long param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined4 *puStack_58;
  long *local_50;
  undefined4 local_44;
  long local_38;
  
  puVar3 = StringLiteral_7262;
  local_38 = param_1;
  if ((DAT_04838ce7 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    thunk_FUN_01efb3a4(StringLiteral_7262);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(StringLiteral_7557);
    thunk_FUN_01efb3a4(StringLiteral_7558);
    DAT_04838ce7 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar4 = StringLiteral_7557;
  uVar5 = FUN_03a44858();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03a45d10(param_1,param_2,*(undefined8 *)puVar4);
  }
  puStack_58 = &local_44;
  local_50 = &local_38;
  local_44 = 0;
  local_60 = 0;
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__ +
                     0x130);
    if (bVar2 <= *(byte *)(*param_2 + 0x130)) {
      plVar10 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__) {
        plVar10 = (long *)0x0;
      }
      goto LAB_03a563d4;
    }
  }
  plVar10 = (long *)0x0;
LAB_03a563d4:
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03a44858();
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,2);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((plVar10 != (long *)0x0) &&
       (lVar7 = thunk_FUN_01f116d0(plVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar6[4] = (long)plVar10;
    thunk_FUN_01f51358(plVar6 + 4,plVar10);
    local_64[0] = param_2 == (long *)0x0;
    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                               ,local_64);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
      uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,0);
    }
    if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar6[5] = lVar7;
    thunk_FUN_01f51358(plVar6 + 5,lVar7);
    uVar9 = FUN_034a6ed0(*(undefined8 *)StringLiteral_7558,plVar6,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03a448bc(local_38,uVar9,*(undefined8 *)puVar4);
  }
  if (plVar10 == (long *)0x0) {
    if (param_2 != (long *)0x0) {
      thunk_FUN_01efb3a4(StringLiteral_7387);
      uVar9 = thunk_FUN_01f117cc();
      FUN_03581194(uVar9,0);
      uVar11 = thunk_FUN_01efb3a4(StringLiteral_7559);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,uVar11);
    }
    lVar7 = *(long *)(local_38 + 0xb8);
    if (lVar7 != 0) {
      FUN_03a552bc();
      uVar1 = *(undefined4 *)(lVar7 + 0x104);
      plVar10 = *(long **)(lVar7 + 0xb0);
      uVar9 = *(undefined8 *)(lVar7 + 0x108);
      lVar7 = *(long *)(local_38 + 0xd8);
      if (plVar10 == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(undefined8 *)(lVar7 + 0x40) = uVar9;
      *(undefined4 *)(lVar7 + 0x38) = uVar1;
      thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x40),uVar9);
      *(undefined8 *)(lVar7 + 0x68) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x68),uVar11);
    }
    local_44 = 4;
  }
  else {
    FUN_03a54c7c(local_38,plVar10);
  }
  FUN_01e59234(&local_60);
  return;
}


