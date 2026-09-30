/*
FUNCTION_NAME: FUN_035ccad4
ENTRY_POINT: 035ccad4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_035ccad4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = Method_System_ValueTuple<Type,_string>_GetHashCode__;
  if ((DAT_04537d0f & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(Method_System_ValueTuple<Type,_string>_GetHashCode__);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(Method_System_ValueTuple<uint,_uint>__ctor__);
    FUN_01c5d288(Method_System_ValueTuple<Vector4,_Vector2Int>__ctor__);
    FUN_01c5d288(Method_System_ValueTuple<Vector4,_Vector4>__ctor__);
    DAT_04537d0f = 1;
  }
  lVar4 = FUN_0230cc18(param_1,1,*(undefined8 *)puVar1);
  puVar3 = GameAnalyticsSDK_State_GAState_TypeInfo;
  puVar1 = PTR_DAT_0422f958;
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x18) == 0) {
      uVar14 = 0;
    }
    else {
      iVar9 = (int)*(long *)(lVar4 + 0x18);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      uVar14 = *(undefined8 *)(lVar4 + 0x20);
      if (1 < iVar9) {
        plVar5 = (long *)FUN_035b7da0(param_1,0);
        lVar15 = *(long *)puVar1;
        lVar4 = *(long *)(lVar15 + 0x38);
        if (lVar4 == 0) {
          FUN_01c723f0(lVar15);
          lVar4 = *(long *)(lVar15 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01c72394();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar4 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01c72394();
        }
        if (plVar5 == (long *)0x0) goto LAB_035cce78;
        lVar10 = *plVar5;
        lVar15 = *(long *)puVar3;
        uVar16 = **(undefined8 **)(lVar4 + 0xb8);
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        uVar17 = *(undefined8 *)Method_System_ValueTuple<uint,_uint>__ctor__;
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar15) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_035ccc5c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar5,lVar15,1);
LAB_035ccc5c:
        (*(code *)*puVar6)(plVar5,2,uVar17,uVar16,puVar6[1]);
      }
    }
    puVar2 = PTR_DAT_0422f9e8;
    if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_03d4dc54(0,uVar14,0);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_035cce78;
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x70);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar12 = FUN_03d4f3bc(0,uVar16,0);
      if ((uVar12 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x30);
        uVar14 = FUN_03d468e8(param_1,0);
        if (lVar4 == 0) goto LAB_035cce78;
        uVar14 = FUN_035c19e8(lVar4,uVar14,0,0);
      }
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar12 = FUN_03d4dc54(0,uVar14,0);
    plVar5 = (long *)FUN_035b7da0(param_1,0);
    lVar15 = *(long *)puVar1;
    lVar4 = *(long *)(lVar15 + 0x38);
    if (lVar4 == 0) {
      FUN_01c723f0(lVar15);
      lVar4 = *(long *)(lVar15 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (plVar5 != (long *)0x0) {
      lVar15 = *(long *)puVar3;
      uVar16 = **(undefined8 **)(lVar4 + 0xb8);
      if ((uVar12 & 1) == 0) {
        lVar4 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
        uVar17 = *(undefined8 *)Method_System_ValueTuple<Vector4,_Vector4>__ctor__;
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar15) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_035cce48;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar5,lVar15,1);
LAB_035cce48:
        pcVar11 = (code *)*puVar6;
        uVar8 = puVar6[1];
        uVar7 = 3;
      }
      else {
        lVar4 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
        uVar17 = *(undefined8 *)Method_System_ValueTuple<Vector4,_Vector2Int>__ctor__;
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar15) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_035cce2c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar5,lVar15,1);
LAB_035cce2c:
        pcVar11 = (code *)*puVar6;
        uVar8 = puVar6[1];
        uVar7 = 1;
      }
      (*pcVar11)(plVar5,uVar7,uVar17,uVar16,uVar8);
      *(undefined8 *)(param_1 + 0x40) = uVar14;
      return;
    }
  }
LAB_035cce78:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


