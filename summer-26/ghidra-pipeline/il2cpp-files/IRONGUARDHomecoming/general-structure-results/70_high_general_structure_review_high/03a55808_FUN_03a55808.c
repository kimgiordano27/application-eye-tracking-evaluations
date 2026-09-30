/*
FUNCTION_NAME: FUN_03a55808
ENTRY_POINT: 03a55808
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x03a55fe4) */
/* WARNING: Removing unreachable block (ram,0x03a55fdc) */
/* WARNING: Removing unreachable block (ram,0x03a56054) */

void FUN_03a55808(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long *plVar16;
  undefined1 local_68 [4];
  char local_64 [4];
  
  puVar3 = StringLiteral_7262;
  if ((DAT_04838ce8 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
    thunk_FUN_01efb3a4(StringLiteral_7403);
    thunk_FUN_01efb3a4(StringLiteral_7406);
    thunk_FUN_01efb3a4(StringLiteral_7483);
    thunk_FUN_01efb3a4(StringLiteral_7262);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(StringLiteral_7553);
    thunk_FUN_01efb3a4(StringLiteral_7554);
    thunk_FUN_01efb3a4(StringLiteral_7555);
    DAT_04838ce8 = 1;
  }
  local_64[0] = '\0';
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03a44858();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03a45d10(param_1,param_2,*(undefined8 *)StringLiteral_7555);
  }
  if (param_2 == (long *)0x0) {
    plVar10 = (long *)0x0;
    plVar9 = (long *)0x0;
    plVar16 = (long *)0x0;
  }
  else {
    lVar13 = *param_2;
    bVar1 = *(byte *)(lVar13 + 0x130);
    bVar2 = *(byte *)(*(long *)StringLiteral_7403 + 0x130);
    if (bVar1 < bVar2) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = param_2;
      if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_7403)
      {
        plVar9 = (long *)0x0;
      }
    }
    bVar2 = *(byte *)(*(long *)StringLiteral_7406 + 0x130);
    if (bVar1 < bVar2) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = param_2;
      if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_7406)
      {
        plVar10 = (long *)0x0;
      }
    }
    bVar2 = *(byte *)(*(long *)Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__ +
                     0x130);
    if (bVar1 < bVar2) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = param_2;
      if (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__) {
        plVar16 = (long *)0x0;
      }
    }
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03a44858();
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,4);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((plVar10 != (long *)0x0) &&
       (lVar13 = thunk_FUN_01f116d0(plVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
      uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,0);
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar6[4] = (long)plVar10;
    thunk_FUN_01f51358(plVar6 + 4,plVar10);
    if ((plVar9 != (long *)0x0) &&
       (lVar13 = thunk_FUN_01f116d0(plVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
      uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,0);
    }
    if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar6[5] = (long)plVar9;
    thunk_FUN_01f51358(plVar6 + 5,plVar9);
    if ((plVar16 != (long *)0x0) &&
       (lVar13 = thunk_FUN_01f116d0(plVar16,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
      uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,0);
    }
    if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar6[6] = (long)plVar16;
    thunk_FUN_01f51358(plVar6 + 6,plVar16);
    local_68[0] = param_2 == (long *)0x0;
    lVar13 = thunk_FUN_01f113fc(*(undefined8 *)
                                 Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                ,local_68);
    if ((lVar13 != 0) &&
       (lVar7 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
      uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,0);
    }
    if (*(uint *)(plVar6 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar6[7] = lVar13;
    thunk_FUN_01f51358(plVar6 + 7,lVar13);
    uVar8 = FUN_034a6ed0(*(undefined8 *)StringLiteral_7553,plVar6,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03a448bc(param_1,uVar8,*(undefined8 *)StringLiteral_7555);
  }
  plVar6 = param_1 + 0x17;
  if (plVar16 == (long *)0x0) {
    if (plVar9 == (long *)0x0) {
      if (plVar10 == (long *)0x0) {
        if (param_2 != (long *)0x0) {
          thunk_FUN_01efb3a4(StringLiteral_7387);
          uVar8 = thunk_FUN_01f117cc();
          FUN_03581194(uVar8,0);
          uVar12 = thunk_FUN_01efb3a4(StringLiteral_7556);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar8,uVar12);
        }
        lVar13 = *plVar6;
        if (lVar13 != 0) {
          FUN_03a552bc(param_1);
          lVar7 = param_1[0x1b];
          uVar4 = *(undefined4 *)(lVar13 + 0x104);
          plVar9 = *(long **)(lVar13 + 0xb0);
          uVar8 = *(undefined8 *)(lVar13 + 0x108);
          if (plVar9 == (long *)0x0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          }
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          *(undefined8 *)(lVar7 + 0x40) = uVar8;
          *(undefined4 *)(lVar7 + 0x38) = uVar4;
          thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x40),uVar8);
          *(undefined8 *)(lVar7 + 0x68) = uVar12;
          thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x68),uVar12);
        }
        uVar4 = 4;
        goto LAB_03a55de0;
      }
      lVar13 = param_1[7];
      local_64[0] = '\0';
      FUN_035ce230(lVar13,local_64,0);
      if (*(char *)((long)param_1 + 0x93) == '\0') {
        param_1[0x18] = (long)plVar10;
        thunk_FUN_01f51358(param_1 + 0x18,plVar10);
        iVar15 = 0x12;
      }
      else {
        lVar7 = *plVar10;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_7483) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03a55f1c;
            }
            uVar5 = uVar5 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)StringLiteral_7483,0);
LAB_03a55f1c:
        (*(code *)*puVar11)(plVar10,3,puVar11[1]);
        iVar15 = 8;
      }
      if (local_64[0] != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(lVar13,0);
      }
      if ((iVar15 == 0x12) || (iVar15 == 0)) {
        uVar4 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
        FUN_03a51400(plVar10,uVar4);
        FUN_03a552bc(param_1);
        uVar5 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
        uVar4 = 2;
        if ((uVar5 & 1) != 0) {
          uVar4 = 3;
        }
        goto LAB_03a55de0;
      }
    }
    else {
LAB_03a55b6c:
      lVar13 = param_1[7];
      local_64[0] = '\0';
      FUN_035ce230(lVar13,local_64,0);
      if (*(char *)((long)param_1 + 0x93) == '\0') {
        *plVar6 = (long)plVar9;
        thunk_FUN_01f51358(plVar6,plVar9);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03a44858();
        if ((uVar5 & 1) != 0) {
          lVar7 = *plVar6;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03a466a8(param_1,lVar7,*(undefined8 *)StringLiteral_7555);
        }
        iVar15 = 0xd;
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03a44858();
        if ((uVar5 & 1) != 0) {
          plVar10 = (long *)FUN_01f08890(*(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                         ,1);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = thunk_FUN_01f116d0(plVar9,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar7 == 0) {
            uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar8,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar10[4] = (long)plVar9;
          thunk_FUN_01f51358(plVar10 + 4,plVar9);
          uVar8 = FUN_034a6ed0(*(undefined8 *)StringLiteral_7554,plVar10,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03a448bc(param_1,uVar8,*(undefined8 *)StringLiteral_7555);
        }
        FUN_03a4aa14(plVar9);
        iVar15 = 8;
      }
      if (local_64[0] != '\0') {
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(lVar13,0);
      }
      if (((iVar15 == 0xd) || (iVar15 == 0)) &&
         (plVar9 = (long *)FUN_03a545c0(param_1,1), plVar9 != (long *)0x0)) {
        bVar1 = *(byte *)(*(long *)StringLiteral_7406 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_7406)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
      }
    }
  }
  else {
    uVar5 = FUN_03a549ec(param_1,plVar16);
    if ((uVar5 & 1) == 0) {
      FUN_03a54c7c(param_1,plVar16);
    }
    else {
      plVar9 = (long *)FUN_03a54394(param_1);
      if (plVar9 != (long *)0x0) goto LAB_03a55b6c;
    }
  }
  uVar4 = 0;
LAB_03a55de0:
  FUN_03a52bb4(param_1,uVar4);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03a44858();
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03a462f8(param_1,0,*(undefined8 *)StringLiteral_7555);
  }
  return;
}


