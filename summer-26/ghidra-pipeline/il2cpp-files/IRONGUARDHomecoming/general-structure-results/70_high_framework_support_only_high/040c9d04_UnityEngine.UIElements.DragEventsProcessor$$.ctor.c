/*
FUNCTION_NAME: UnityEngine.UIElements.DragEventsProcessor$$.ctor
ENTRY_POINT: 040c9d04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_UIElements_DragEventsProcessor___ctor(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  int *piVar9;
  long *plVar10;
  long *unaff_x19;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long in_stack_00000018;
  
code_r0x040c9d04:
  puVar5 = (undefined8 *)(param_1 + 0x138);
  do {
    uVar4 = (*(code *)*puVar5)(unaff_x19,puVar5[1]);
    if ((uVar4 & 1) == 0) {
      FUN_040ca204();
      *(undefined8 *)(in_stack_00000018 + 0x40) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x40),0);
      plVar11 = *(long **)(in_stack_00000018 + 0x28);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = (**(code **)(*plVar11 + 0x888))(plVar11,*(undefined8 *)(*plVar11 + 0x890));
      *(undefined8 *)(in_stack_00000018 + 0x28) = uVar6;
      thunk_FUN_01f51358();
      *(undefined8 *)(in_stack_00000018 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38),0);
      uVar6 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03583338(uVar6,0,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar12 = *unaff_x21;
      uVar6 = *(undefined8 *)(in_stack_00000018 + 0x28);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar12 = FUN_03579868(uVar12,0);
      uVar4 = FUN_03583338(uVar6,uVar12,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      plVar11 = *(long **)(in_stack_00000018 + 0x28);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = (**(code **)(*plVar11 + 0x728))(plVar11,0x34,*(undefined8 *)(*plVar11 + 0x730));
      puVar2 = PTR_DAT_045887d0;
      lVar7 = *(long *)PTR_DAT_045887d0;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar2;
      }
      lVar13 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar13 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar7 = *(long *)puVar2;
        }
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
        lVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04588868);
        FUN_02e6c3f4(lVar13,uVar12,*(undefined8 *)PTR_DAT_04588870,0);
        plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        *plVar11 = lVar13;
        thunk_FUN_01f51358(plVar11,lVar13);
      }
      uVar6 = FUN_022fbdd0(uVar6,lVar13,*(undefined8 *)PTR_DAT_04588860);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(undefined8 *)(in_stack_00000018 + 0x38) = uVar6;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x38));
      plVar11 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_040c9c64;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)
                                     Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,0);
LAB_040c9c64:
      uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      *(undefined8 *)(in_stack_00000018 + 0x40) = uVar6;
      thunk_FUN_01f51358();
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
LAB_040ca088:
      unaff_x19 = *(long **)(in_stack_00000018 + 0x40);
      unaff_x22 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      unaff_x23 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
      ;
      unaff_x24 = (long *)
                  Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
      unaff_x21 = (undefined8 *)Method_System_Convert_ToUInt64__;
      unaff_x26 = (undefined8 *)PTR_DAT_04588840;
      unaff_x25 = (undefined8 *)PTR_DAT_04588848;
      unaff_x27 = (undefined8 *)PTR_DAT_04588850;
      unaff_x28 = (undefined8 *)PTR_DAT_04588858;
    }
    else {
      plVar11 = *(long **)(in_stack_00000018 + 0x40);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar11;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_040c9d74;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar11,*unaff_x24,0);
LAB_040c9d74:
      uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      *(undefined8 *)(in_stack_00000018 + 0x48) = uVar6;
      thunk_FUN_01f51358();
      plVar11 = *(long **)(in_stack_00000018 + 0x48);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar3 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
      if (iVar3 == 4) {
LAB_040c9dd0:
        plVar11 = *(long **)(in_stack_00000018 + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        uVar12 = *(undefined8 *)(in_stack_00000018 + 0x28);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_03583338(uVar6,uVar12,0);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = FUN_040c9694(*(undefined8 *)(in_stack_00000018 + 0x48)), (uVar4 & 1) != 0)) {
          lVar7 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x25);
          *(bool *)(in_stack_00000018 + 0x50) = lVar7 != 0;
          lVar7 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x26);
          *(bool *)(in_stack_00000018 + 0x51) = lVar7 != 0;
          lVar7 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x27);
          *(bool *)(in_stack_00000018 + 0x52) = lVar7 != 0;
          lVar7 = FUN_022cd6f8(*(undefined8 *)(in_stack_00000018 + 0x48),*unaff_x28);
          *(bool *)(in_stack_00000018 + 0x53) = lVar7 != 0;
          if (*(char *)(in_stack_00000018 + 0x50) == '\0') {
            if (*(char *)(in_stack_00000018 + 0x51) != '\0') {
              *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(in_stack_00000018 + 0x48);
              thunk_FUN_01f51358();
              *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
              return 1;
            }
            if (*(char *)(in_stack_00000018 + 0x52) == '\0') {
              if (lVar7 != 0) {
                *(undefined8 *)(in_stack_00000018 + 0x18) =
                     *(undefined8 *)(in_stack_00000018 + 0x48);
                thunk_FUN_01f51358();
                uVar8 = 2;
LAB_040ca104:
                *(undefined4 *)(in_stack_00000018 + 0x10) = uVar8;
                return 1;
              }
              plVar11 = *(long **)(in_stack_00000018 + 0x48);
              if (plVar11 == (long *)0x0) {
                plVar11 = (long *)0x0;
                *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
              }
              else {
                lVar7 = *(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__;
                bVar1 = *(byte *)(lVar7 + 0x130);
                if (*(byte *)(*plVar11 + 0x130) < bVar1) {
                  plVar10 = (long *)0x0;
                }
                else {
                  plVar10 = plVar11;
                  if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                    plVar10 = (long *)0x0;
                  }
                }
                *(long **)(in_stack_00000018 + 0x58) = plVar10;
                if (*(byte *)(*plVar11 + 0x130) < bVar1) {
                  plVar11 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar7) {
                  plVar11 = (long *)0x0;
                }
              }
              thunk_FUN_01f51358(in_stack_00000018 + 0x58,plVar11);
              if ((*(long *)(in_stack_00000018 + 0x58) != 0) &&
                 (uVar4 = FUN_034b1454(*(long *)(in_stack_00000018 + 0x58),0), (uVar4 & 1) != 0)) {
                *(undefined8 *)(in_stack_00000018 + 0x18) =
                     *(undefined8 *)(in_stack_00000018 + 0x48);
                thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x18));
                uVar8 = 3;
                goto LAB_040ca104;
              }
              *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
              thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x58),0);
              *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
              thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x48),0);
              goto LAB_040ca088;
            }
          }
        }
      }
      else {
        plVar11 = *(long **)(in_stack_00000018 + 0x48);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar3 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
        if (iVar3 == 0x10) goto LAB_040c9dd0;
      }
      unaff_x19 = *(long **)(in_stack_00000018 + 0x40);
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          param_1 = param_1 + (long)*piVar9 * 0x10;
          goto code_r0x040c9d04;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(unaff_x19,*unaff_x23,0);
  } while( true );
}


