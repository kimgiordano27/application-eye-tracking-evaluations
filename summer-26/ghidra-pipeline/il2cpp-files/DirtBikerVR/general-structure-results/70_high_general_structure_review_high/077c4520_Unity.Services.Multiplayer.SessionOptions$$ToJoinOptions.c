/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionOptions$$ToJoinOptions
ENTRY_POINT: 077c4520
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


void Unity_Services_Multiplayer_SessionOptions__ToJoinOptions
               (code *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    iVar2 = (*param_1)(param_2,param_3);
    lVar3 = FUN_077ba3c8((double)iVar2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 = FUN_067c4bec(lVar3,0);
    uVar4 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar4 & 1) == 0) {
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
      plVar8 = *(long **)(unaff_x20 + 200);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = *plVar8;
      uVar9 = *(undefined8 *)(unaff_x19 + 10);
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
            goto LAB_077c45c4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar8,*unaff_x27,0xd);
LAB_077c45c4:
      lVar3 = (*(code *)*puVar5)(plVar8,uVar9,puVar5[1]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000020 = FUN_058b71ec(lVar3,*unaff_x28);
      uVar4 = FUN_0587c6c4(&stack0x00000020,*unaff_x29);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_03ae8be4();
        }
        FUN_03fd3640(unaff_x19 + 2,&stack0x00000020);
        return;
      }
    }
    lVar3 = FUN_0587c704(&stack0x00000020,*unaff_x26);
    puVar1 = System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar3 + 0x18) != 0) {
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,lVar3,
                   *(undefined8 *)
                    UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
      return;
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = FUN_067b2f8c(unaff_x19 + 0xc,0);
    if ((uVar4 & 1) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = *(long *)(unaff_x20 + 0xd8);
      if (lVar3 != 0) {
        uVar9 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
        uVar6 = thunk_FUN_03af1434(
                                  UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo
                                  );
        uVar9 = FUN_03522c98(4,uVar9,lVar3,uVar6);
        FUN_077bbd60();
        uVar6 = thunk_FUN_03af1434(
                                  UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar9,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_2 = *(long **)(unaff_x20 + 0xc0);
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_077c4518;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(param_2,*unaff_x25,4);
LAB_077c4518:
    param_1 = (code *)*puVar5;
    param_3 = puVar5[1];
  } while( true );
}


