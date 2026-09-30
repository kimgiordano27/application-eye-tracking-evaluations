/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler$$remove_StateChanged
ENTRY_POINT: 077c47a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void Unity_Services_Multiplayer_SessionHandler__remove_StateChanged(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar11;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (param_2 == 1) {
    plVar5 = (long *)__cxa_begin_catch(param_1);
    uVar6 = thunk_FUN_03af1434(PTR_DAT_08494cc0);
    uVar7 = thunk_FUN_03aed0c4(uVar6,*(undefined8 *)*plVar5);
    iVar2 = in_stack_00000018;
    if ((uVar7 & 1) == 0) {
      plVar8 = (long *)__cxa_allocate_exception(8);
      *plVar8 = *plVar5;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar8,&PTR_PTR_07fde6e8,0);
    }
    lVar11 = *plVar5;
    *(long *)(&stack0x00000008 + (long)in_stack_00000018 * 8) = lVar11;
    in_stack_00000018 = in_stack_00000018 + 1;
    __cxa_end_catch();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar11 + 0x90) == 0x194) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *(long *)(unaff_x20 + 0x48);
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
      }
      lVar11 = *(long *)(unaff_x20 + 0xd8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar6 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
      uVar4 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>_TypeInfo
                                );
      uVar6 = FUN_03522c98(4,uVar6,lVar11,uVar4);
      in_stack_00000018 = iVar2;
      uVar4 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar6,uVar4);
    }
    do {
      in_stack_00000018 = iVar2;
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = FUN_067b2f8c(unaff_x19 + 0xc,0);
      if ((uVar7 & 1) != 0) {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *(long *)(unaff_x20 + 0xd8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar6 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
        uVar4 = thunk_FUN_03af1434(
                                  UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo
                                  );
        uVar6 = FUN_03522c98(4,uVar6,lVar11,uVar4);
        FUN_077bbd60();
        uVar4 = thunk_FUN_03af1434(
                                  UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar6,uVar4);
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar5 = *(long **)(unaff_x20 + 0xc0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_077c4518;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03ac43c4(plVar5,*unaff_x25,4);
LAB_077c4518:
      iVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      lVar11 = FUN_077ba3c8((double)iVar2);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000028 = FUN_067c4bec(lVar11,0);
      uVar7 = FUN_0666e8e0(&stack0x00000028,0);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
        if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_03ae8be4();
        }
        FUN_03ffd1f0(unaff_x19 + 2,&stack0x00000028);
        return;
      }
      FUN_0666e9a8(&stack0x00000028,0);
      if (unaff_w23 == 1) {
        in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x10);
        unaff_w23 = -1;
        *(undefined8 *)(unaff_x19 + 0x10) = 0;
        *unaff_x19 = 0xffffffff;
      }
      else {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        plVar5 = *(long **)(unaff_x20 + 200);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar11 = *plVar5;
        uVar6 = *(undefined8 *)(unaff_x19 + 10);
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
              goto LAB_077c45c4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03ac43c4(plVar5,*unaff_x27,0xd);
LAB_077c45c4:
        lVar11 = (*(code *)*puVar3)(plVar5,uVar6,puVar3[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        in_stack_00000020 = FUN_058b71ec(lVar11,*unaff_x28);
        uVar7 = FUN_0587c6c4(&stack0x00000020,*unaff_x29);
        if ((uVar7 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
          thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
          if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_03ae8be4();
          }
          FUN_03fd3640(unaff_x19 + 2,&stack0x00000020);
          return;
        }
      }
      lVar11 = FUN_0587c704(&stack0x00000020,*unaff_x26);
      puVar1 = System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      iVar2 = in_stack_00000018;
    } while (*(long *)(lVar11 + 0x18) == 0);
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,lVar11,
                 *(undefined8 *)
                  UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
  }
  else {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03b79cbc(param_1);
    }
    puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar6 = thunk_FUN_03af1434(PTR_DAT_08488858);
    uVar7 = thunk_FUN_03aed0c4(uVar6,*(undefined8 *)*puVar3);
    if ((uVar7 & 1) == 0) {
      puVar9 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar9 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&PTR_PTR_07fde6e8,0);
    }
    uVar6 = *puVar3;
    *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000018 * 8) = uVar6;
    in_stack_00000018 = in_stack_00000018 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar11 = thunk_FUN_03af1434(System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo);
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = thunk_FUN_03af1434(
                              UnityEngine_UIElements_BaseCompositeField<Vector3Int,_IntegerField,_int>_TypeInfo
                              );
    FUN_05338d34(unaff_x19 + 2,uVar6,uVar4);
  }
  return;
}


