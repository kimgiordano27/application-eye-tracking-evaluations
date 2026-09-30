/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<float>
ENTRY_POINT: 0211d414
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


int System_Array__InternalArray__set_Item<float>(long param_1)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  int in_w8;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  ulong unaff_x21;
  ulong uVar13;
  undefined4 unaff_w23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long *plVar14;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  uint uStack0000000000000010;
  uint uStack0000000000000014;
  long *in_stack_00000018;
  int iStack0000000000000020;
  undefined4 uStack0000000000000024;
  int iStack0000000000000028;
  int iStack000000000000002c;
  ulong in_stack_00000038;
  
  uVar3 = _uStack0000000000000010;
code_r0x0211d414:
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
    param_1 = *unaff_x27;
  }
  iStack0000000000000028 = iStack0000000000000028 + 1;
  uVar12 = unaff_w20;
  if (*(char *)(*(long *)(param_1 + 0xb8) + 0x44) != '\0') goto switchD_0211d08c_default;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0211b9e0(unaff_x28,0);
LAB_0211d450:
  lVar7 = *(long *)(*unaff_x27 + 0xb8);
LAB_0211d458:
  lVar7 = *(long *)(lVar7 + 0x60);
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)
              Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar12 = *(uint *)(lVar7 + 0x18);
      if (uVar12 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar12 + 1;
        plVar9 = (long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
        *plVar9 = unaff_x28;
        thunk_FUN_01f51358(plVar9,unaff_x28);
      }
      else {
        FUN_030f2bb4(lVar7,unaff_x28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      uStack0000000000000010 = 1;
      uVar12 = unaff_w20;
switchD_0211d08c_default:
      do {
        unaff_w20 = uVar12 - 1;
        if ((int)uVar12 < 1) {
          if ((uStack0000000000000010 & 1) == 0) {
            return iStack0000000000000028;
          }
          lVar7 = *unaff_x27;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar7 = *unaff_x27;
          }
          puVar2 = 
          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x60);
          if (lVar8 == 0) goto LAB_0211d790;
          iVar11 = *(int *)(lVar8 + 0x18);
          goto LAB_0211d6d8;
        }
        lVar7 = *unaff_x27;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *unaff_x27;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x48);
        if (lVar7 == 0) goto LAB_0211d790;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w20) {
LAB_0211d794:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        unaff_x28 = *(long *)(lVar7 + (ulong)unaff_w20 * 8 + 0x20);
        uVar12 = unaff_w20;
      } while ((unaff_x28 == 0) || (*(char *)(unaff_x28 + 0xe8) == '\0'));
      switch(unaff_w23) {
      case 0:
        break;
      case 1:
        if ((unaff_x25 & 1) != 0) {
          if (*(long *)(unaff_x28 + 0x38) != 0) {
            uVar13 = thunk_FUN_0340e318(*(long *)(unaff_x28 + 0x38),unaff_x26,0);
LAB_0211d0ec:
            unaff_x25 = 1;
            goto joined_r0x0211d27c;
          }
LAB_0211d284:
          unaff_x25 = 1;
          goto switchD_0211d08c_default;
        }
        if ((unaff_x21 & 1) == 0) {
          plVar9 = in_stack_00000008;
          if (*(long *)(unaff_x28 + 0x30) == 0) {
            lVar7 = *(long *)(unaff_x28 + 0x48);
            if (lVar7 == 0) goto LAB_0211d3fc;
            if (in_stack_00000008 == (long *)0x0) goto LAB_0211d790;
          }
          else {
            if (in_stack_00000008 == (long *)0x0) goto LAB_0211d790;
            uVar13 = (**(code **)(*in_stack_00000008 + 0x138))
                               (in_stack_00000008,*(long *)(unaff_x28 + 0x30),
                                *(undefined8 *)(*in_stack_00000008 + 0x140));
            if ((uVar13 & 1) != 0) {
              unaff_x25 = 0;
              unaff_x21 = 0;
              break;
            }
            lVar7 = *(long *)(unaff_x28 + 0x48);
            if (lVar7 == 0) goto LAB_0211d3fc;
          }
LAB_0211d324:
          uVar13 = (**(code **)(*plVar9 + 0x138))(plVar9,lVar7,*(undefined8 *)(*plVar9 + 0x140));
          unaff_x25 = 0;
          unaff_x21 = 0;
          if ((uVar13 & 1) == 0) {
            unaff_x21 = 0;
            goto switchD_0211d08c_default;
          }
        }
        else {
          unaff_x25 = 0;
          unaff_x21 = 1;
          if (*(int *)(unaff_x28 + 0x40) != iStack000000000000002c) goto switchD_0211d08c_default;
        }
        break;
      case 2:
        if ((unaff_x25 & 1) != 0) {
          if (*(long *)(unaff_x28 + 0x48) == 0) goto LAB_0211d284;
          uVar13 = thunk_FUN_0340e318(*(undefined8 *)(unaff_x28 + 0x38),unaff_x26,0);
          unaff_x25 = 1;
          if ((in_stack_00000018 != (long *)0x0) && ((uVar13 & 1) != 0)) {
            uVar13 = (**(code **)(*in_stack_00000018 + 0x138))
                               (in_stack_00000018,*(undefined8 *)(unaff_x28 + 0x48),
                                *(undefined8 *)(*in_stack_00000018 + 0x140));
            goto LAB_0211d0ec;
          }
          goto switchD_0211d08c_default;
        }
        if ((unaff_x21 & 1) == 0) {
          if (*(long *)(unaff_x28 + 0x30) != 0) {
            unaff_x21 = 0;
            if ((in_stack_00000018 != (long *)0x0) && (*(long *)(unaff_x28 + 0x48) != 0)) {
              if (in_stack_00000008 != (long *)0x0) {
                uVar13 = (**(code **)(*in_stack_00000008 + 0x138))
                                   (in_stack_00000008,*(long *)(unaff_x28 + 0x30),
                                    *(undefined8 *)(*in_stack_00000008 + 0x140));
                if ((uVar13 & 1) != 0) {
                  lVar7 = *(long *)(unaff_x28 + 0x48);
                  plVar9 = in_stack_00000018;
                  goto LAB_0211d324;
                }
                goto LAB_0211d3fc;
              }
              goto LAB_0211d790;
            }
            unaff_x25 = 0;
            goto switchD_0211d08c_default;
          }
LAB_0211d3fc:
          unaff_x21 = 0;
          unaff_x25 = 0;
          goto switchD_0211d08c_default;
        }
        if (*(long *)(unaff_x28 + 0x48) == 0) {
          unaff_x25 = 0;
          unaff_x21 = 1;
          goto switchD_0211d08c_default;
        }
        unaff_x25 = 0;
        unaff_x21 = 1;
        if ((in_stack_00000018 == (long *)0x0) ||
           (*(int *)(unaff_x28 + 0x40) != iStack000000000000002c)) goto switchD_0211d08c_default;
        uVar13 = (**(code **)(*in_stack_00000018 + 0x138))
                           (in_stack_00000018,*(long *)(unaff_x28 + 0x48),
                            *(undefined8 *)(*in_stack_00000018 + 0x140));
        unaff_x25 = 0;
        unaff_x21 = 1;
joined_r0x0211d27c:
        if ((uVar13 & 1) == 0) goto switchD_0211d08c_default;
        break;
      case 3:
        if (0 < iStack0000000000000020) {
          if (unaff_x19 == 0) goto LAB_0211d790;
          uVar13 = 0;
          plVar9 = unaff_x26;
          do {
            if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_0211d794;
            plVar14 = *(long **)(unaff_x24 + uVar13 * 8);
            if (plVar14 == (long *)0x0) {
LAB_0211d14c:
              unaff_x26 = plVar9;
              if ((unaff_x25 & 1) == 0) {
                unaff_x25 = 0;
              }
              else {
LAB_0211d178:
                uVar6 = thunk_FUN_0340e318(*(undefined8 *)(unaff_x28 + 0x38),unaff_x26,0);
                unaff_x25 = 1;
                if ((uVar6 & 1) != 0) goto switchD_0211d08c_default;
              }
              if ((unaff_x21 & 1) != 0) goto LAB_0211d194;
              unaff_x21 = 0;
            }
            else {
              unaff_x26 = plVar14;
              if (*plVar14 ==
                  *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)
              goto LAB_0211d178;
              if (*plVar14 !=
                  *(long *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
              goto LAB_0211d14c;
              piVar5 = (int *)thunk_FUN_01f11920(plVar14);
              iStack000000000000002c = *piVar5;
              if ((unaff_x25 & 1) != 0) {
                unaff_x21 = 1;
                unaff_x26 = plVar9;
                goto LAB_0211d178;
              }
              unaff_x25 = 0;
              unaff_x26 = plVar9;
LAB_0211d194:
              unaff_x21 = 1;
              if (*(int *)(unaff_x28 + 0x40) == iStack000000000000002c)
              goto switchD_0211d08c_default;
            }
            if (*(long *)(unaff_x28 + 0x30) == 0) {
              lVar7 = *(long *)(unaff_x28 + 0x48);
              if (lVar7 != 0) {
                if (plVar14 != (long *)0x0) goto LAB_0211d1e8;
                goto LAB_0211d790;
              }
            }
            else {
              if (plVar14 == (long *)0x0) goto LAB_0211d790;
              uVar6 = (**(code **)(*plVar14 + 0x138))
                                (plVar14,*(long *)(unaff_x28 + 0x30),
                                 *(undefined8 *)(*plVar14 + 0x140));
              if ((uVar6 & 1) != 0) goto switchD_0211d08c_default;
              lVar7 = *(long *)(unaff_x28 + 0x48);
              if (lVar7 != 0) {
LAB_0211d1e8:
                uVar6 = (**(code **)(*plVar14 + 0x138))
                                  (plVar14,lVar7,*(undefined8 *)(*plVar14 + 0x140));
                if ((uVar6 & 1) != 0) goto switchD_0211d08c_default;
              }
            }
            uVar13 = uVar13 + 1;
            plVar9 = unaff_x26;
          } while (in_stack_00000038 != uVar13);
        }
        break;
      default:
        goto switchD_0211d08c_default;
      }
      switch(uStack0000000000000024) {
      case 0:
        goto switchD_0211d360_caseD_0;
      case 1:
        *(undefined1 *)(unaff_x28 + 0xe8) = 0;
        param_1 = *unaff_x27;
        in_w8 = *(int *)(param_1 + 0xe0);
        goto code_r0x0211d414;
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
        uVar4 = FUN_0211c36c(unaff_x28);
        break;
      case 5:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_0211c2ec(unaff_x28);
        break;
      case 6:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_0211db64(unaff_x28);
        break;
      case 7:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_0211da8c(unaff_x28);
        break;
      case 8:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_0211dcdc(unaff_x28,uStack0000000000000014 & 1);
        break;
      case 9:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_0211ddfc(unaff_x28);
        break;
      case 10:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0211dc14(unaff_x28,uStack0000000000000014 & 1);
        goto LAB_0211d644;
      case 0xb:
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_0211def8(unaff_x28);
        break;
      case 0xc:
        if (((*(char *)(unaff_x28 + 0x111) == '\0') || (*(char *)(unaff_x28 + 0x9c) == '\0')) &&
           (((uVar3 & 0x100000000) == 0 || (*(char *)(unaff_x28 + 0x110) != '\0')))) {
LAB_0211d644:
          iStack0000000000000028 = iStack0000000000000028 + 1;
        }
      default:
        goto switchD_0211d08c_default;
      }
      iStack0000000000000028 = iStack0000000000000028 + (uVar4 & 1);
      goto switchD_0211d08c_default;
    }
  }
  goto LAB_0211d790;
LAB_0211d6d8:
  iVar11 = iVar11 + -1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar7 = *unaff_x27;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x60);
  if (lVar7 == 0) {
LAB_0211d790:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (iVar11 < 0) {
    iVar11 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar11) {
      FUN_0358d1e4(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
    }
    return iStack0000000000000028;
  }
  lVar7 = FUN_030f28e4(lVar7,iVar11,*(undefined8 *)puVar2);
  if (lVar7 == 0) goto LAB_0211d790;
  if (*(int *)(lVar7 + 0xf8) != -1) {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0211b3f0(lVar7);
  }
  lVar7 = *unaff_x27;
  goto LAB_0211d6d8;
switchD_0211d360_caseD_0:
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
  uVar13 = FUN_0211d848(unaff_x28,0,in_stack_00000000._4_4_);
  if (((uVar13 & 1) == 0) ||
     (iStack0000000000000028 = iStack0000000000000028 + (cVar1 == '\0' & uStack0000000000000014 ^ 1)
     , cVar1 == '\0')) goto switchD_0211d08c_default;
  lVar8 = *unaff_x27;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *unaff_x27;
  }
  lVar7 = *(long *)(lVar8 + 0xb8);
  if (*(char *)(lVar7 + 0x44) != '\0') {
    *(undefined1 *)(unaff_x28 + 0xe8) = 0;
    goto switchD_0211d08c_default;
  }
  if (*(int *)(lVar8 + 0xe0) == 0) goto code_r0x0211d698;
  goto LAB_0211d458;
code_r0x0211d698:
  thunk_FUN_01ee6d7c();
  goto LAB_0211d450;
}


