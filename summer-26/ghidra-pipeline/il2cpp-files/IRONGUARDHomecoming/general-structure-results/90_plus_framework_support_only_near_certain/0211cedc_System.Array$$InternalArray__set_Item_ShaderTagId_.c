/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<ShaderTagId>
ENTRY_POINT: 0211cedc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Type propagation algorithm not settling */

int System_Array__InternalArray__set_Item<ShaderTagId>(ulong param_1,undefined4 param_2)

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
  long unaff_x19;
  uint uVar16;
  long unaff_x20;
  long *unaff_x22;
  ulong uVar17;
  int unaff_w23;
  long *plVar18;
  long *plVar19;
  float unaff_s8;
  uint uStack0000000000000004;
  ulong in_stack_00000010;
  long *in_stack_00000018;
  uint uStack0000000000000020;
  undefined4 uStack0000000000000024;
  int iStack0000000000000028;
  int iStack000000000000002c;
  
  uStack0000000000000024 = param_2;
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x20 + 0xc8a) = 1;
  }
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__;
  if (unaff_x19 == 0) {
    uStack0000000000000020 = 0;
  }
  else {
    uStack0000000000000020 = *(uint *)(unaff_x19 + 0x18);
  }
  iStack000000000000002c = 0;
  bVar3 = false;
  bVar2 = false;
  plVar18 = (long *)0x0;
  if ((unaff_w23 - 1U < 2) && (unaff_x22 != (long *)0x0)) {
    if (*unaff_x22 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__) {
      iStack000000000000002c = 0;
      bVar3 = false;
      bVar2 = true;
      plVar18 = unaff_x22;
    }
    else if (*unaff_x22 ==
             *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__) {
      piVar8 = (int *)thunk_FUN_01f11920();
      iStack000000000000002c = *piVar8;
      bVar2 = false;
      bVar3 = true;
      plVar18 = (long *)0x0;
    }
    else {
      iStack000000000000002c = 0;
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
  iStack0000000000000028 = 0;
  bVar4 = false;
  uStack0000000000000004 = (uint)(unaff_s8 <= 0.0);
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
  switch(unaff_w23) {
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
        plVar12 = unaff_x22;
        if (*(long *)(lVar9 + 0x30) == 0) {
          lVar13 = *(long *)(lVar9 + 0x48);
          if (lVar13 == 0) goto LAB_0211d3fc;
          if (unaff_x22 == (long *)0x0) goto LAB_0211d790;
        }
        else {
          if (unaff_x22 == (long *)0x0) goto LAB_0211d790;
          uVar17 = (**(code **)(*unaff_x22 + 0x138))
                             (unaff_x22,*(long *)(lVar9 + 0x30),*(undefined8 *)(*unaff_x22 + 0x140))
          ;
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
      if (*(int *)(lVar9 + 0x40) == iStack000000000000002c) goto switchD_0211d08c_caseD_0;
    }
    break;
  case 2:
    if (bVar2) {
      if (*(long *)(lVar9 + 0x48) == 0) goto LAB_0211d284;
      uVar17 = thunk_FUN_0340e318(*(undefined8 *)(lVar9 + 0x38),plVar18,0);
      bVar2 = true;
      if ((in_stack_00000018 != (long *)0x0) && ((uVar17 & 1) != 0)) {
        uVar17 = (**(code **)(*in_stack_00000018 + 0x138))
                           (in_stack_00000018,*(undefined8 *)(lVar9 + 0x48),
                            *(undefined8 *)(*in_stack_00000018 + 0x140));
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
          if ((in_stack_00000018 != (long *)0x0) &&
             (*(int *)(lVar9 + 0x40) == iStack000000000000002c)) {
            uVar17 = (**(code **)(*in_stack_00000018 + 0x138))
                               (in_stack_00000018,*(long *)(lVar9 + 0x48),
                                *(undefined8 *)(*in_stack_00000018 + 0x140));
            bVar2 = false;
            bVar3 = true;
            goto joined_r0x0211d27c;
          }
        }
        break;
      }
      if (*(long *)(lVar9 + 0x30) != 0) {
        bVar3 = false;
        if ((in_stack_00000018 == (long *)0x0) || (*(long *)(lVar9 + 0x48) == 0)) {
          bVar2 = false;
          break;
        }
        if (unaff_x22 == (long *)0x0) goto LAB_0211d790;
        uVar17 = (**(code **)(*unaff_x22 + 0x138))
                           (unaff_x22,*(long *)(lVar9 + 0x30),*(undefined8 *)(*unaff_x22 + 0x140));
        if ((uVar17 & 1) != 0) {
          lVar13 = *(long *)(lVar9 + 0x48);
          plVar12 = in_stack_00000018;
          goto LAB_0211d324;
        }
      }
LAB_0211d3fc:
      bVar3 = false;
      bVar2 = false;
    }
    break;
  case 3:
    if (0 < (int)uStack0000000000000020) {
      if (unaff_x19 == 0) goto LAB_0211d790;
      uVar17 = 0;
      plVar12 = plVar18;
      do {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar17) goto LAB_0211d794;
        plVar19 = *(long **)(unaff_x19 + 0x20 + uVar17 * 8);
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
          iStack000000000000002c = *piVar8;
          if (bVar2) {
            bVar3 = true;
            plVar18 = plVar12;
            goto LAB_0211d178;
          }
          bVar2 = false;
          plVar18 = plVar12;
LAB_0211d194:
          bVar3 = true;
          if (*(int *)(lVar9 + 0x40) == iStack000000000000002c) goto switchD_0211d08c_default;
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
      } while (uStack0000000000000020 != uVar17);
    }
switchD_0211d08c_caseD_0:
    switch(uStack0000000000000024) {
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
      uVar17 = FUN_0211d848(lVar9,0,uStack0000000000000004);
      if (((uVar17 & 1) != 0) &&
         (iStack0000000000000028 =
               iStack0000000000000028 + (cVar1 == '\0' & in_stack_00000010._4_4_ ^ 1), cVar1 != '\0'
         )) {
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
      iStack0000000000000028 = iStack0000000000000028 + 1;
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
      FUN_0211d950(lVar9,in_stack_00000010._4_4_ & 1,1);
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
      uVar7 = FUN_0211dcdc(lVar9,in_stack_00000010._4_4_ & 1);
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
      FUN_0211dc14(lVar9,in_stack_00000010._4_4_ & 1);
LAB_0211d644:
      iStack0000000000000028 = iStack0000000000000028 + 1;
      goto switchD_0211d08c_default;
    case 0xb:
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_0211def8(lVar9);
      break;
    case 0xc:
      if (((*(char *)(lVar9 + 0x111) == '\0') || (*(char *)(lVar9 + 0x9c) == '\0')) &&
         (((in_stack_00000010 & 0x100000000) == 0 || (*(char *)(lVar9 + 0x110) != '\0'))))
      goto LAB_0211d644;
    default:
      goto switchD_0211d08c_default;
    }
    iStack0000000000000028 = iStack0000000000000028 + (uVar7 & 1);
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
    return iStack0000000000000028;
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
          return iStack0000000000000028;
        }
        FUN_0358d1e4(*(undefined8 *)(lVar9 + 0x10),0,iVar15,0);
        return iStack0000000000000028;
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


