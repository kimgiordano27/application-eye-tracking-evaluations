/*
FUNCTION_NAME: FUN_0211ce9c
ENTRY_POINT: 0211ce9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 222
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_eye_api_context_without_clear_sink_hits_4
*/


int FUN_0211ce9c(undefined8 param_1,undefined4 param_2,int param_3,long *param_4,uint param_5,
                long *param_6,long param_7)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  uint local_80;
  int local_78;
  int local_74;
  
  if ((DAT_0482fc8a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<InputDevice,_InputDevice>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                      );
    DAT_0482fc8a = 1;
  }
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__;
  if (param_7 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = *(uint *)(param_7 + 0x18);
  }
  local_74 = 0;
  bVar3 = false;
  bVar2 = false;
  plVar18 = (long *)0x0;
  if ((param_3 - 1U < 2) && (param_4 != (long *)0x0)) {
    if (*param_4 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__) {
      local_74 = 0;
      bVar3 = false;
      bVar2 = true;
      plVar18 = param_4;
    }
    else if (*param_4 ==
             *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__) {
      piVar8 = (int *)thunk_FUN_01f11920(param_4);
      local_74 = *piVar8;
      bVar2 = false;
      bVar3 = true;
      plVar18 = (long *)0x0;
    }
    else {
      local_74 = 0;
      bVar3 = false;
      bVar2 = false;
      plVar18 = (long *)0x0;
    }
  }
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar5;
  }
  uVar16 = *(uint *)(*(long *)(lVar9 + 0xb8) + 0x74);
  if ((int)uVar16 < 0) {
    return 0;
  }
  local_78 = 0;
  bVar4 = false;
LAB_0211d030:
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar5;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x48);
  if (lVar9 == 0) goto LAB_0211d790;
  if (*(uint *)(lVar9 + 0x18) <= uVar16) {
LAB_0211d794:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar9 = *(long *)(lVar9 + (ulong)uVar16 * 8 + 0x20);
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0xe8) == '\0')) goto switchD_0211d08c_default;
  switch(param_3) {
  case 0:
    goto switchD_0211d08c_caseD_0;
  case 1:
    if (bVar2) {
      if (*(long *)(lVar9 + 0x38) == 0) {
LAB_0211d284:
        bVar2 = true;
      }
      else {
        uVar17 = thunk_FUN_0340e318(*(long *)(lVar9 + 0x38),plVar18,0);
LAB_0211d0ec:
        bVar2 = true;
joined_r0x0211d27c:
        if ((uVar17 & 1) != 0) goto switchD_0211d08c_caseD_0;
      }
    }
    else {
      if (!bVar3) {
        plVar12 = param_4;
        if (*(long *)(lVar9 + 0x30) == 0) {
          lVar13 = *(long *)(lVar9 + 0x48);
          if (lVar13 == 0) goto LAB_0211d3fc;
          if (param_4 == (long *)0x0) goto LAB_0211d790;
        }
        else {
          if (param_4 == (long *)0x0) goto LAB_0211d790;
          uVar17 = (**(code **)(*param_4 + 0x138))
                             (param_4,*(long *)(lVar9 + 0x30),*(undefined8 *)(*param_4 + 0x140));
          if ((uVar17 & 1) != 0) {
            bVar2 = false;
            bVar3 = false;
            goto switchD_0211d08c_caseD_0;
          }
          lVar13 = *(long *)(lVar9 + 0x48);
          if (lVar13 == 0) goto LAB_0211d3fc;
        }
LAB_0211d324:
        uVar17 = (**(code **)(*plVar12 + 0x138))(plVar12,lVar13,*(undefined8 *)(*plVar12 + 0x140));
        bVar2 = false;
        bVar3 = false;
        if ((uVar17 & 1) != 0) goto switchD_0211d08c_caseD_0;
        bVar3 = false;
        break;
      }
      bVar2 = false;
      bVar3 = true;
      if (*(int *)(lVar9 + 0x40) == local_74) goto switchD_0211d08c_caseD_0;
    }
    break;
  case 2:
    if (bVar2) {
      if (*(long *)(lVar9 + 0x48) == 0) goto LAB_0211d284;
      uVar17 = thunk_FUN_0340e318(*(undefined8 *)(lVar9 + 0x38),plVar18,0);
      bVar2 = true;
      if ((param_6 != (long *)0x0) && ((uVar17 & 1) != 0)) {
        uVar17 = (**(code **)(*param_6 + 0x138))
                           (param_6,*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(*param_6 + 0x140))
        ;
        goto LAB_0211d0ec;
      }
    }
    else {
      if (bVar3) {
        if (*(long *)(lVar9 + 0x48) == 0) {
          bVar2 = false;
          bVar3 = true;
        }
        else {
          bVar2 = false;
          bVar3 = true;
          if ((param_6 != (long *)0x0) && (*(int *)(lVar9 + 0x40) == local_74)) {
            uVar17 = (**(code **)(*param_6 + 0x138))
                               (param_6,*(long *)(lVar9 + 0x48),*(undefined8 *)(*param_6 + 0x140));
            bVar2 = false;
            bVar3 = true;
            goto joined_r0x0211d27c;
          }
        }
        break;
      }
      if (*(long *)(lVar9 + 0x30) != 0) {
        bVar3 = false;
        if ((param_6 == (long *)0x0) || (*(long *)(lVar9 + 0x48) == 0)) {
          bVar2 = false;
          break;
        }
        if (param_4 == (long *)0x0) goto LAB_0211d790;
        uVar17 = (**(code **)(*param_4 + 0x138))
                           (param_4,*(long *)(lVar9 + 0x30),*(undefined8 *)(*param_4 + 0x140));
        if ((uVar17 & 1) != 0) {
          lVar13 = *(long *)(lVar9 + 0x48);
          plVar12 = param_6;
          goto LAB_0211d324;
        }
      }
LAB_0211d3fc:
      bVar3 = false;
      bVar2 = false;
    }
    break;
  case 3:
    if (0 < (int)local_80) {
      if (param_7 == 0) goto LAB_0211d790;
      uVar17 = 0;
      plVar12 = plVar18;
      do {
        if (*(uint *)(param_7 + 0x18) <= uVar17) goto LAB_0211d794;
        plVar19 = *(long **)(param_7 + 0x20 + uVar17 * 8);
        if (plVar19 == (long *)0x0) {
LAB_0211d14c:
          plVar18 = plVar12;
          if (bVar2) {
LAB_0211d178:
            uVar10 = thunk_FUN_0340e318(*(undefined8 *)(lVar9 + 0x38),plVar18,0);
            bVar2 = true;
            if ((uVar10 & 1) != 0) goto switchD_0211d08c_default;
          }
          else {
            bVar2 = false;
          }
          if (bVar3) goto LAB_0211d194;
          bVar3 = false;
        }
        else {
          plVar18 = plVar19;
          if (*plVar19 ==
              *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)
          goto LAB_0211d178;
          if (*plVar19 !=
              *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
          goto LAB_0211d14c;
          piVar8 = (int *)thunk_FUN_01f11920(plVar19);
          local_74 = *piVar8;
          if (bVar2) {
            bVar3 = true;
            plVar18 = plVar12;
            goto LAB_0211d178;
          }
          bVar2 = false;
          plVar18 = plVar12;
LAB_0211d194:
          bVar3 = true;
          if (*(int *)(lVar9 + 0x40) == local_74) goto switchD_0211d08c_default;
        }
        if (*(long *)(lVar9 + 0x30) == 0) {
          lVar13 = *(long *)(lVar9 + 0x48);
          if (lVar13 != 0) {
            if (plVar19 != (long *)0x0) goto LAB_0211d1e8;
            goto LAB_0211d790;
          }
        }
        else {
          if (plVar19 == (long *)0x0) goto LAB_0211d790;
          uVar10 = (**(code **)(*plVar19 + 0x138))
                             (plVar19,*(long *)(lVar9 + 0x30),*(undefined8 *)(*plVar19 + 0x140));
          if ((uVar10 & 1) != 0) goto switchD_0211d08c_default;
          lVar13 = *(long *)(lVar9 + 0x48);
          if (lVar13 != 0) {
LAB_0211d1e8:
            uVar10 = (**(code **)(*plVar19 + 0x138))
                               (plVar19,lVar13,*(undefined8 *)(*plVar19 + 0x140));
            if ((uVar10 & 1) != 0) goto switchD_0211d08c_default;
          }
        }
        uVar17 = uVar17 + 1;
        plVar12 = plVar18;
      } while (local_80 != uVar17);
    }
switchD_0211d08c_caseD_0:
    switch(param_2) {
    case 0:
      cVar1 = *(char *)(lVar9 + 0x9c);
      if (*(char *)(lVar9 + 0x101) == '\0') {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0211d798(lVar9,0);
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar17 = FUN_0211d848(lVar9,0,(float)param_1 <= 0.0);
      if (((uVar17 & 1) != 0) &&
         (local_78 = local_78 + (cVar1 == '\0' & param_5 ^ 1), cVar1 != '\0')) {
        lVar13 = *(long *)puVar5;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar13 = *(long *)puVar5;
        }
        lVar11 = *(long *)(lVar13 + 0xb8);
        if (*(char *)(lVar11 + 0x44) == '\0') {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            goto LAB_0211d450;
          }
          goto LAB_0211d458;
        }
        *(undefined1 *)(lVar9 + 0xe8) = 0;
      }
      goto switchD_0211d08c_default;
    case 1:
      *(undefined1 *)(lVar9 + 0xe8) = 0;
      lVar13 = *(long *)puVar5;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar13 = *(long *)puVar5;
      }
      local_78 = local_78 + 1;
      if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x44) != '\0') goto switchD_0211d08c_default;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0211b9e0(lVar9,0);
LAB_0211d450:
      lVar11 = *(long *)(*(long *)puVar5 + 0xb8);
LAB_0211d458:
      lVar13 = *(long *)(lVar11 + 0x60);
      if (lVar13 == 0) goto LAB_0211d790;
      lVar11 = *(long *)(lVar13 + 0x10);
      lVar14 = *(long *)
                Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_0211d790;
      uVar7 = *(uint *)(lVar13 + 0x18);
      if (uVar7 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar7 + 1;
        plVar12 = (long *)(lVar11 + (long)(int)uVar7 * 8 + 0x20);
        *plVar12 = lVar9;
        thunk_FUN_01f51358(plVar12,lVar9);
      }
      else {
        FUN_030f2bb4(lVar13,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      bVar4 = true;
      goto switchD_0211d08c_default;
    case 2:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      *(byte *)(lVar9 + 0x2c) = *(byte *)(lVar9 + 0x2c) ^ 1;
      goto LAB_0211d644;
    case 3:
      if (*(char *)(lVar9 + 0x101) == '\0') {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0211d798(lVar9,0);
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0211d950(param_1,lVar9,param_5 & 1,1);
      goto LAB_0211d644;
    case 4:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0211c36c(lVar9);
      break;
    case 5:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0211c2ec(lVar9);
      break;
    case 6:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0211db64(lVar9);
      break;
    case 7:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0211da8c(lVar9);
      break;
    case 8:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0211dcdc(lVar9,param_5 & 1);
      break;
    case 9:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0211ddfc(lVar9);
      break;
    case 10:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0211dc14(param_1,lVar9,param_5 & 1);
LAB_0211d644:
      local_78 = local_78 + 1;
      goto switchD_0211d08c_default;
    case 0xb:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0211def8(lVar9);
      break;
    case 0xc:
      if (((*(char *)(lVar9 + 0x111) == '\0') || (*(char *)(lVar9 + 0x9c) == '\0')) &&
         (((param_5 & 1) == 0 || (*(char *)(lVar9 + 0x110) != '\0')))) goto LAB_0211d644;
    default:
      goto switchD_0211d08c_default;
    }
    local_78 = local_78 + (uVar7 & 1);
    break;
  default:
    break;
  }
switchD_0211d08c_default:
  if ((int)uVar16 < 1) goto LAB_0211d6a0;
  lVar9 = *(long *)puVar5;
  uVar16 = uVar16 - 1;
  goto LAB_0211d030;
LAB_0211d6a0:
  if (!bVar4) {
    return local_78;
  }
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar5;
  }
  puVar6 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__;
  lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x60);
  if (lVar13 != 0) {
    iVar15 = *(int *)(lVar13 + 0x18);
    while( true ) {
      iVar15 = iVar15 + -1;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)puVar5;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x60);
      if (lVar9 == 0) break;
      if (iVar15 < 0) {
        iVar15 = *(int *)(lVar9 + 0x18);
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (iVar15 < 1) {
          return local_78;
        }
        FUN_0358d1e4(*(undefined8 *)(lVar9 + 0x10),0,iVar15,0);
        return local_78;
      }
      lVar9 = FUN_030f28e4(lVar9,iVar15,*(undefined8 *)puVar6);
      if (lVar9 == 0) break;
      if (*(int *)(lVar9 + 0xf8) != -1) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0211b3f0(lVar9);
      }
      lVar9 = *(long *)puVar5;
    }
  }
LAB_0211d790:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


