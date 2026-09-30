/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<ShadowSliceData>
ENTRY_POINT: 0211d160
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<ShadowSliceData>(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long unaff_x19;
  uint unaff_w20;
  uint uVar13;
  ulong unaff_x22;
  undefined4 unaff_w23;
  long unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long *plVar14;
  long *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  uint uStack0000000000000010;
  uint uStack0000000000000014;
  long *in_stack_00000018;
  int iStack0000000000000020;
  undefined4 uStack0000000000000024;
  int in_stack_00000028;
  ulong in_stack_00000038;
  
  uVar4 = _uStack0000000000000010;
code_r0x0211d160:
  piVar6 = (int *)thunk_FUN_01f11920(unaff_x29);
  iVar12 = *piVar6;
  plVar14 = unaff_x26;
  if ((unaff_w25 & 1) == 0) {
    unaff_w25 = 0;
    goto LAB_0211d194;
  }
  bVar2 = true;
LAB_0211d178:
  uVar7 = thunk_FUN_0340e318(*(undefined8 *)(unaff_x28 + 0x38),plVar14,0);
  unaff_w25 = 1;
  unaff_x26 = plVar14;
  uVar13 = unaff_w20;
  if ((uVar7 & 1) != 0) goto switchD_0211d08c_default;
  do {
    plVar14 = unaff_x26;
    if (bVar2) {
LAB_0211d194:
      bVar2 = true;
      uVar13 = unaff_w20;
      if (*(int *)(unaff_x28 + 0x40) == iVar12) goto switchD_0211d08c_default;
    }
    else {
      bVar2 = false;
    }
    uVar13 = unaff_w20;
    if (*(long *)(unaff_x28 + 0x30) == 0) {
      lVar8 = *(long *)(unaff_x28 + 0x48);
      if (lVar8 != 0) {
        if (unaff_x29 != (long *)0x0) goto LAB_0211d1e8;
        goto LAB_0211d790;
      }
    }
    else {
      if (unaff_x29 == (long *)0x0) goto LAB_0211d790;
      uVar7 = (**(code **)(*unaff_x29 + 0x138))
                        (unaff_x29,*(long *)(unaff_x28 + 0x30),*(undefined8 *)(*unaff_x29 + 0x140));
      if ((uVar7 & 1) != 0) goto switchD_0211d08c_default;
      lVar8 = *(long *)(unaff_x28 + 0x48);
      if (lVar8 != 0) {
LAB_0211d1e8:
        uVar7 = (**(code **)(*unaff_x29 + 0x138))
                          (unaff_x29,lVar8,*(undefined8 *)(*unaff_x29 + 0x140));
        if ((uVar7 & 1) != 0) goto switchD_0211d08c_default;
      }
    }
    unaff_x22 = unaff_x22 + 1;
    unaff_x26 = plVar14;
    if (in_stack_00000038 == unaff_x22) {
switchD_0211d08c_caseD_0:
      uVar13 = unaff_w20;
      switch(uStack0000000000000024) {
      case 0:
        cVar1 = *(char *)(unaff_x28 + 0x9c);
        if (*(char *)(unaff_x28 + 0x101) == '\0') {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0211d798(unaff_x28,0);
        }
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_0211d848(unaff_x28,0,in_stack_00000000._4_4_);
        if (((uVar7 & 1) != 0) &&
           (in_stack_00000028 = in_stack_00000028 + (cVar1 == '\0' & uStack0000000000000014 ^ 1),
           cVar1 != '\0')) {
          lVar8 = *unaff_x27;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *unaff_x27;
          }
          lVar10 = *(long *)(lVar8 + 0xb8);
          if (*(char *)(lVar10 + 0x44) == '\0') {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              goto LAB_0211d450;
            }
            goto LAB_0211d458;
          }
          *(undefined1 *)(unaff_x28 + 0xe8) = 0;
        }
        goto switchD_0211d08c_default;
      case 1:
        *(undefined1 *)(unaff_x28 + 0xe8) = 0;
        lVar8 = *unaff_x27;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *unaff_x27;
        }
        in_stack_00000028 = in_stack_00000028 + 1;
        if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x44) != '\0') goto switchD_0211d08c_default;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0211b9e0(unaff_x28,0);
LAB_0211d450:
        lVar10 = *(long *)(*unaff_x27 + 0xb8);
LAB_0211d458:
        lVar8 = *(long *)(lVar10 + 0x60);
        if (lVar8 == 0) goto LAB_0211d790;
        lVar10 = *(long *)(lVar8 + 0x10);
        lVar11 = *(long *)
                  Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
        ;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0211d790;
        uVar5 = *(uint *)(lVar8 + 0x18);
        if (uVar5 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar5 + 1;
          plVar9 = (long *)(lVar10 + (long)(int)uVar5 * 8 + 0x20);
          *plVar9 = unaff_x28;
          thunk_FUN_01f51358(plVar9,unaff_x28);
        }
        else {
          FUN_030f2bb4(lVar8,unaff_x28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uStack0000000000000010 = 1;
        goto switchD_0211d08c_default;
      case 2:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        *(byte *)(unaff_x28 + 0x2c) = *(byte *)(unaff_x28 + 0x2c) ^ 1;
        goto LAB_0211d644;
      case 3:
        if (*(char *)(unaff_x28 + 0x101) == '\0') {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0211d798(unaff_x28,0);
        }
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0211d950(unaff_x28,uStack0000000000000014 & 1,1);
        goto LAB_0211d644;
      case 4:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_0211c36c(unaff_x28);
        break;
      case 5:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_0211c2ec(unaff_x28);
        break;
      case 6:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_0211db64(unaff_x28);
        break;
      case 7:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_0211da8c(unaff_x28);
        break;
      case 8:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_0211dcdc(unaff_x28,uStack0000000000000014 & 1);
        break;
      case 9:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_0211ddfc(unaff_x28);
        break;
      case 10:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0211dc14(unaff_x28,uStack0000000000000014 & 1);
LAB_0211d644:
        in_stack_00000028 = in_stack_00000028 + 1;
        goto switchD_0211d08c_default;
      case 0xb:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_0211def8(unaff_x28);
        break;
      case 0xc:
        if (((*(char *)(unaff_x28 + 0x111) == '\0') || (*(char *)(unaff_x28 + 0x9c) == '\0')) &&
           (((uVar4 & 0x100000000) == 0 || (*(char *)(unaff_x28 + 0x110) != '\0'))))
        goto LAB_0211d644;
      default:
        goto switchD_0211d08c_default;
      }
      in_stack_00000028 = in_stack_00000028 + (uVar5 & 1);
switchD_0211d08c_default:
      do {
        unaff_w20 = uVar13 - 1;
        if ((int)uVar13 < 1) {
          if ((uStack0000000000000010 & 1) == 0) {
            return in_stack_00000028;
          }
          lVar8 = *unaff_x27;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *unaff_x27;
          }
          puVar3 = 
          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar10 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x60);
          if (lVar10 == 0) goto LAB_0211d790;
          iVar12 = *(int *)(lVar10 + 0x18);
          goto LAB_0211d6d8;
        }
        lVar8 = *unaff_x27;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *unaff_x27;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x48);
        if (lVar8 == 0) goto LAB_0211d790;
        if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_0211d794;
        unaff_x28 = *(long *)(lVar8 + (ulong)unaff_w20 * 8 + 0x20);
        uVar13 = unaff_w20;
      } while ((unaff_x28 == 0) || (*(char *)(unaff_x28 + 0xe8) == '\0'));
      switch(unaff_w23) {
      case 0:
        goto switchD_0211d08c_caseD_0;
      case 1:
        if (unaff_w25 == 0) {
          if (bVar2) {
            unaff_w25 = 0;
            bVar2 = true;
            if (*(int *)(unaff_x28 + 0x40) == iVar12) goto switchD_0211d08c_caseD_0;
            goto switchD_0211d08c_default;
          }
          plVar9 = in_stack_00000008;
          if (*(long *)(unaff_x28 + 0x30) == 0) {
            lVar8 = *(long *)(unaff_x28 + 0x48);
            if (lVar8 == 0) goto LAB_0211d3fc;
            if (in_stack_00000008 == (long *)0x0) goto LAB_0211d790;
          }
          else {
            if (in_stack_00000008 == (long *)0x0) goto LAB_0211d790;
            uVar7 = (**(code **)(*in_stack_00000008 + 0x138))
                              (in_stack_00000008,*(long *)(unaff_x28 + 0x30),
                               *(undefined8 *)(*in_stack_00000008 + 0x140));
            if ((uVar7 & 1) != 0) {
              unaff_w25 = 0;
              bVar2 = false;
              goto switchD_0211d08c_caseD_0;
            }
            lVar8 = *(long *)(unaff_x28 + 0x48);
            if (lVar8 == 0) goto LAB_0211d3fc;
          }
LAB_0211d324:
          uVar7 = (**(code **)(*plVar9 + 0x138))(plVar9,lVar8,*(undefined8 *)(*plVar9 + 0x140));
          unaff_w25 = 0;
          bVar2 = false;
          if ((uVar7 & 1) != 0) goto switchD_0211d08c_caseD_0;
          bVar2 = false;
          goto switchD_0211d08c_default;
        }
        if (*(long *)(unaff_x28 + 0x38) == 0) {
LAB_0211d284:
          unaff_w25 = 1;
          goto switchD_0211d08c_default;
        }
        uVar7 = thunk_FUN_0340e318(*(long *)(unaff_x28 + 0x38),plVar14,0);
LAB_0211d0ec:
        unaff_w25 = 1;
        break;
      case 2:
        if (unaff_w25 != 0) {
          if (*(long *)(unaff_x28 + 0x48) == 0) goto LAB_0211d284;
          uVar7 = thunk_FUN_0340e318(*(undefined8 *)(unaff_x28 + 0x38),plVar14,0);
          unaff_w25 = 1;
          if ((in_stack_00000018 != (long *)0x0) && ((uVar7 & 1) != 0)) {
            uVar7 = (**(code **)(*in_stack_00000018 + 0x138))
                              (in_stack_00000018,*(undefined8 *)(unaff_x28 + 0x48),
                               *(undefined8 *)(*in_stack_00000018 + 0x140));
            goto LAB_0211d0ec;
          }
          goto switchD_0211d08c_default;
        }
        if (!bVar2) {
          if (*(long *)(unaff_x28 + 0x30) != 0) {
            bVar2 = false;
            if ((in_stack_00000018 != (long *)0x0) && (*(long *)(unaff_x28 + 0x48) != 0)) {
              if (in_stack_00000008 != (long *)0x0) {
                uVar7 = (**(code **)(*in_stack_00000008 + 0x138))
                                  (in_stack_00000008,*(long *)(unaff_x28 + 0x30),
                                   *(undefined8 *)(*in_stack_00000008 + 0x140));
                if ((uVar7 & 1) != 0) {
                  lVar8 = *(long *)(unaff_x28 + 0x48);
                  plVar9 = in_stack_00000018;
                  goto LAB_0211d324;
                }
                goto LAB_0211d3fc;
              }
              goto LAB_0211d790;
            }
            unaff_w25 = 0;
            goto switchD_0211d08c_default;
          }
LAB_0211d3fc:
          bVar2 = false;
          unaff_w25 = 0;
          goto switchD_0211d08c_default;
        }
        if (*(long *)(unaff_x28 + 0x48) == 0) {
          unaff_w25 = 0;
          bVar2 = true;
          goto switchD_0211d08c_default;
        }
        unaff_w25 = 0;
        bVar2 = true;
        if ((in_stack_00000018 == (long *)0x0) || (*(int *)(unaff_x28 + 0x40) != iVar12))
        goto switchD_0211d08c_default;
        uVar7 = (**(code **)(*in_stack_00000018 + 0x138))
                          (in_stack_00000018,*(long *)(unaff_x28 + 0x48),
                           *(undefined8 *)(*in_stack_00000018 + 0x140));
        unaff_w25 = 0;
        bVar2 = true;
        break;
      case 3:
        if (0 < iStack0000000000000020) {
          if (unaff_x19 == 0) goto LAB_0211d790;
          unaff_x22 = 0;
          unaff_x26 = plVar14;
          goto LAB_0211d10c;
        }
        goto switchD_0211d08c_caseD_0;
      default:
        goto switchD_0211d08c_default;
      }
      if ((uVar7 & 1) != 0) goto switchD_0211d08c_caseD_0;
      goto switchD_0211d08c_default;
    }
LAB_0211d10c:
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) {
LAB_0211d794:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    unaff_x29 = *(long **)(unaff_x24 + unaff_x22 * 8);
    if (unaff_x29 != (long *)0x0) {
      plVar14 = unaff_x29;
      if (*unaff_x29 == *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)
      goto LAB_0211d178;
      if (*unaff_x29 ==
          *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
      goto code_r0x0211d160;
    }
    plVar14 = unaff_x26;
    if (unaff_w25 != 0) goto LAB_0211d178;
    unaff_w25 = 0;
  } while( true );
LAB_0211d6d8:
  iVar12 = iVar12 + -1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *unaff_x27;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x60);
  if (lVar8 == 0) {
LAB_0211d790:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (iVar12 < 0) {
    iVar12 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar12) {
      FUN_0358d1e4(*(undefined8 *)(lVar8 + 0x10),0,iVar12,0);
    }
    return in_stack_00000028;
  }
  lVar8 = FUN_030f28e4(lVar8,iVar12,*(undefined8 *)puVar3);
  if (lVar8 == 0) goto LAB_0211d790;
  if (*(int *)(lVar8 + 0xf8) != -1) {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0211b3f0(lVar8);
  }
  lVar8 = *unaff_x27;
  goto LAB_0211d6d8;
}


