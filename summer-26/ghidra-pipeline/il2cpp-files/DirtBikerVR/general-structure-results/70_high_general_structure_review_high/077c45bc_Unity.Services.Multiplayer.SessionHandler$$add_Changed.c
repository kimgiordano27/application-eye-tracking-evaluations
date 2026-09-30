/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler$$add_Changed
ENTRY_POINT: 077c45bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Multiplayer_SessionHandler__add_Changed(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w9;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  undefined8 unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x077c45bc:
  puVar3 = (undefined8 *)(param_1 + (long)in_w9 * 0x10 + 0x138);
LAB_077c45c4:
  lVar4 = (*(code *)*puVar3)(unaff_x21,unaff_x22,puVar3[1]);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000020 = FUN_058b71ec(lVar4,*unaff_x28);
  uVar5 = FUN_0587c6c4(&stack0x00000020,*unaff_x29);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
    thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fd3640(unaff_x19 + 2,&stack0x00000020);
    return;
  }
  do {
    lVar4 = FUN_0587c704(&stack0x00000020,*unaff_x26);
    puVar1 = System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,lVar4,
                   *(undefined8 *)
                    UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
      return;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_067b2f8c(unaff_x19 + 0xc,0);
    if ((uVar5 & 1) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = *(long *)(unaff_x20 + 0xd8);
      if (lVar4 != 0) {
        uVar6 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
        uVar7 = thunk_FUN_03af1434(
                                  UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo
                                  );
        uVar6 = FUN_03522c98(4,uVar6,lVar4,uVar7);
        FUN_077bbd60();
        uVar7 = thunk_FUN_03af1434(
                                  UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar6,uVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar9 = *(long **)(unaff_x20 + 0xc0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_077c4518;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar9,*unaff_x25,4);
LAB_077c4518:
    iVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    lVar4 = FUN_077ba3c8((double)iVar2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 = FUN_067c4bec(lVar4,0);
    uVar5 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffd1f0(unaff_x19 + 2,&stack0x00000028);
      return;
    }
    FUN_0666e9a8(&stack0x00000028,0);
    if (unaff_w23 != 1) break;
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_w23 = -1;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *unaff_x19 = 0xffffffff;
  } while( true );
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  unaff_x21 = *(long **)(unaff_x20 + 200);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  param_1 = *unaff_x21;
  unaff_x22 = *(undefined8 *)(unaff_x19 + 10);
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        in_w9 = *piVar8 + 0xd;
        goto code_r0x077c45bc;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(unaff_x21,*unaff_x27,0xd);
  goto LAB_077c45c4;
}


