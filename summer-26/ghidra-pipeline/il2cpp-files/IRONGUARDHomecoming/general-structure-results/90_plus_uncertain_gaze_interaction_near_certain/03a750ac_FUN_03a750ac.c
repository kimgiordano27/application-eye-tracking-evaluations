/*
FUNCTION_NAME: FUN_03a750ac
ENTRY_POINT: 03a750ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 222
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_9;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a7573c) */
/* WARNING: Removing unreachable block (ram,0x03a7572c) */
/* WARNING: Removing unreachable block (ram,0x03a75508) */

void FUN_03a750ac(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  long *local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  if ((DAT_04838dd4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(StringLiteral_7847);
    thunk_FUN_01efb3a4(StringLiteral_7869);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    DAT_04838dd4 = 1;
  }
  puVar4 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if (param_1 < 10) {
    return;
  }
  lVar9 = *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar4;
  }
  lVar19 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  uVar10 = FUN_0354e804(0);
  puVar7 = StringLiteral_7847;
  lVar9 = *(long *)StringLiteral_7847;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar9);
    lVar9 = *(long *)puVar7;
  }
  plVar11 = (long *)**(long **)(lVar9 + 0xb8);
  if ((plVar11 == (long *)0x0) ||
     (plVar11 = (long *)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390)),
     plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar11;
  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_03a7521c;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                         ,0);
LAB_03a7521c:
  plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  puVar8 = StringLiteral_7869;
  puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  local_78 = (long *)0x0;
  do {
    lVar16 = *plVar11;
    lVar9 = *(long *)puVar6;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03a75298;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar9,0);
LAB_03a75298:
    uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar17 & 1) == 0) {
      plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar11 == (long *)0x0) goto LAB_03a754fc;
      lVar9 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar17 == 0) goto LAB_03a754d4;
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar16 = *plVar11;
    lVar9 = *(long *)puVar6;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_03a752f8;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar9,1);
LAB_03a752f8:
    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar14 = (undefined4 *)thunk_FUN_01f11920();
    lVar9 = *(long *)puVar7;
    uVar1 = *puVar14;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *(long *)puVar7;
    }
    plVar13 = (long *)**(undefined8 **)(lVar9 + 0xb8);
    local_64 = uVar1;
    uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_64);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar15,uVar15);
    }
    plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                (plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
    if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar13);
    }
    lVar9 = plVar13[2];
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar17 = FUN_0354ff9c(lVar9,lVar19,0);
    if ((uVar17 & 1) != 0) {
      lVar9 = plVar13[2];
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = FUN_0354fe64(lVar9,uVar10,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (6000000000 < lVar9) {
        lVar19 = plVar13[2];
        if (local_78 == (long *)0x0) {
          local_78 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                                 Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__)
          ;
          FUN_0353e574(local_78,0);
        }
        local_68 = uVar1;
        uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_68);
        if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar15,uVar15);
        }
        (**(code **)(*local_78 + 0x308))(local_78,uVar15,*(undefined8 *)(*local_78 + 0x310));
      }
    }
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03a754f0;
    }
  }
LAB_03a754d4:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_03a754f0:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_03a754fc:
  if (local_78 == (long *)0x0) {
    return;
  }
  plVar11 = (long *)(**(code **)(*local_78 + 0x388))(local_78,*(undefined8 *)(*local_78 + 0x390));
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar19 = *plVar11;
    lVar9 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar12 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_03a7558c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar9,0);
LAB_03a7558c:
    uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if ((uVar17 & 1) == 0) {
      plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)puVar5);
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar17 == 0) goto LAB_03a756b4;
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar19 = *plVar11;
    lVar9 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar9) {
          puVar12 = (undefined8 *)(lVar19 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_03a755ec;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar9,1);
LAB_03a755ec:
    plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar14 = (undefined4 *)thunk_FUN_01f11920();
    lVar9 = *(long *)puVar7;
    uVar1 = *puVar14;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar9 = *(long *)puVar7;
    }
    plVar13 = (long *)**(undefined8 **)(lVar9 + 0xb8);
    local_6c = uVar1;
    uVar10 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&local_6c);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar10,uVar10);
    }
    (**(code **)(*plVar13 + 0x3a8))(plVar13,uVar10,*(undefined8 *)(*plVar13 + 0x3b0));
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03a756d0;
    }
  }
LAB_03a756b4:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
LAB_03a756d0:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return;
}


