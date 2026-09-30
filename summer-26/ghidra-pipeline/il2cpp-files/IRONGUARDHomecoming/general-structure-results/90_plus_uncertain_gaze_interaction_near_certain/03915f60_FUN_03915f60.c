/*
FUNCTION_NAME: FUN_03915f60
ENTRY_POINT: 03915f60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 189
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03916680) */

void FUN_03915f60(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  
  if ((DAT_04838240 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_3487);
    thunk_FUN_01efb3a4(StringLiteral_3488);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3466);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__);
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_OrderBy<Type,_string>__);
    thunk_FUN_01efb3a4(StringLiteral_3489);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3490);
    thunk_FUN_01efb3a4(StringLiteral_3491);
    thunk_FUN_01efb3a4(StringLiteral_3492);
    thunk_FUN_01efb3a4(StringLiteral_3486);
    DAT_04838240 = 1;
  }
  puVar2 = Method_System_Convert_ToUInt64__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_1 != (long *)0x0) {
    uVar8 = (**(code **)(*param_1 + 0x888))(param_1,*(undefined8 *)(*param_1 + 0x890));
    lVar13 = *(long *)puVar1;
    uVar16 = *(undefined8 *)puVar2;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar13);
    }
    puVar2 = StringLiteral_3486;
    uVar16 = FUN_03579868(uVar16,0);
    uVar9 = FUN_03583338(uVar8,uVar16,0);
    if ((uVar9 & 1) != 0) {
      uVar8 = (**(code **)(*param_1 + 0x888))(param_1,*(undefined8 *)(*param_1 + 0x890));
      lVar13 = *(long *)puVar1;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar13);
      }
      uVar9 = FUN_03583338(uVar8,0,0);
      if ((uVar9 & 1) != 0) {
        uVar8 = (**(code **)(*param_1 + 0x888))(param_1,*(undefined8 *)(*param_1 + 0x890));
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                            );
        }
        FUN_03915f60(uVar8,param_2,param_3);
      }
    }
    uVar8 = (**(code **)(*param_1 + 0x728))(param_1,0x36,*(undefined8 *)(*param_1 + 0x730));
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar13);
      lVar13 = *(long *)puVar2;
    }
    puVar1 = StringLiteral_3488;
    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
    if (lVar15 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar13);
        lVar13 = *(long *)puVar2;
      }
      uVar16 = **(undefined8 **)(lVar13 + 0xb8);
      lVar15 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
      FUN_02e6c0a0(lVar15,uVar16,*(undefined8 *)StringLiteral_3490,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar10 = lVar15;
      thunk_FUN_01f51358(plVar10,lVar15);
    }
    plVar10 = (long *)FUN_0230b6f4(uVar8,lVar15,*(undefined8 *)puVar1);
    if (plVar10 != (long *)0x0) {
      lVar13 = *plVar10;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03916258;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01ecb238(plVar10,*(long *)
                                      Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,0);
LAB_03916258:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      puVar5 = StringLiteral_3492;
      puVar4 = Method_System_Linq_Enumerable_OrderBy<Type,_string>__;
      puVar3 = Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
      puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
      ;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar13 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_039162e0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_039162e0:
        uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar10 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 == 0) goto System_Text_RegularExpressions_RegexCharClass__AddLowercase;
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_039165f8;
        }
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
        FUN_035ac8e8(lVar13,0);
        lVar15 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03916350;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_03916350:
        uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        puVar11 = (undefined8 *)(lVar13 + 0x10);
        *puVar11 = uVar8;
        thunk_FUN_01f51358(puVar11);
        if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar15 = *param_3;
        uVar8 = *puVar11;
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_039163cc;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar4,2);
LAB_039163cc:
        uVar9 = (*(code *)*puVar12)(param_3,uVar8,puVar12[1]);
        if ((uVar9 & 1) != 0) {
          uVar8 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3466);
          FUN_02e6c0a0(uVar8,lVar13,*(undefined8 *)StringLiteral_3491,0);
          uVar6 = FUN_022e458c(param_2,uVar8,*(undefined8 *)StringLiteral_3487);
          uVar8 = *puVar11;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_03916ce8(uVar8);
          uVar8 = *puVar11;
          if ((uVar6 & uVar7 & 1) == 0) {
            if ((uVar6 & 1) == 0) {
              if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar13 = *(long *)(param_2 + 0x10);
              lVar15 = *(long *)StringLiteral_3489;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar6 = *(uint *)(param_2 + 0x18);
              if (uVar6 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar6 + 1;
                puVar11 = (undefined8 *)(lVar13 + (long)(int)uVar6 * 8 + 0x20);
                *puVar11 = uVar8;
                thunk_FUN_01f51358(puVar11,uVar8);
              }
              else {
                FUN_030f2bb4(param_2,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar8 = FUN_03916e8c(uVar8,0,0);
              if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar13 = *(long *)(param_2 + 0x10);
              lVar15 = *(long *)StringLiteral_3489;
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar6 = *(uint *)(param_2 + 0x18);
              if (uVar6 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar6 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar6 * 8 + 0x20) = uVar8;
                thunk_FUN_01f51358();
              }
              else {
                FUN_030f2bb4(param_2,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_03916e8c(uVar8,0,0);
            if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar13 = *(long *)(param_2 + 0x10);
            lVar15 = *(long *)StringLiteral_3489;
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar6 = *(uint *)(param_2 + 0x18);
            if (uVar6 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(param_2 + 0x18) = uVar6 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar6 * 8 + 0x20) = uVar8;
              thunk_FUN_01f51358();
            }
            else {
              FUN_030f2bb4(param_2,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar14 = piVar14 + 4;
    if (uVar9 == 0) break;
LAB_039165f8:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0391662c;
    }
  }
System_Text_RegularExpressions_RegexCharClass__AddLowercase:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0391662c:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


