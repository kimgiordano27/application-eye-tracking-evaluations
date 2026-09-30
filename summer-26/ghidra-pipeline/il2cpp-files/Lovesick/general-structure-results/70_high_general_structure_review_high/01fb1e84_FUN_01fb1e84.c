/*
FUNCTION_NAME: FUN_01fb1e84
ENTRY_POINT: 01fb1e84
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01fb23f0) */
/* WARNING: Removing unreachable block (ram,0x01fb23d0) */

undefined8 FUN_01fb1e84(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  
  if ((DAT_03780646 & 1) == 0) {
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUK_<LoadSceneFromDeviceInternal>d__69>__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<int>__ctor__);
    DAT_03780646 = 1;
  }
  puVar6 = StringLiteral_10310;
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330));
  puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar1 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar13 = *plVar7;
    lVar12 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01fb1fac;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar12,0);
LAB_01fb1fac:
    uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar14 & 1) == 0) {
      uVar11 = 0;
      iVar15 = 5;
      goto LAB_01fb20f0;
    }
    lVar13 = *plVar7;
    lVar12 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_01fb200c;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar12,1);
LAB_01fb200c:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar8 = (undefined8 *)thunk_FUN_00d624a0();
    if ((long *)puVar8[1] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*(long *)puVar8[1] + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    plVar9 = (long *)*puVar8;
    piVar10 = (int *)thunk_FUN_00d624a0();
  } while (*piVar10 != param_2);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar12 = *(long *)puVar3;
  if ((*(byte *)(*plVar9 + 300) < *(byte *)(lVar12 + 300)) ||
     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar12 + 300) * 8 + -8) != lVar12)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar9);
  }
  lVar13 = *plVar9;
  if ((*(byte *)(lVar13 + 300) < *(byte *)(lVar12 + 300)) ||
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar12 + 300) * 8 + -8) != lVar12)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(plVar9);
  }
  uVar11 = (**(code **)(lVar13 + 0x168))(plVar9,*(undefined8 *)(lVar13 + 0x170));
  iVar15 = 4;
LAB_01fb20f0:
  plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)puVar6);
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01fb2150;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar6,0);
LAB_01fb2150:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  if ((iVar15 == 5) || (iVar15 == 0)) {
    plVar7 = *(long **)(param_1 + 0x20);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330));
      puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      puVar4 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUK_<LoadSceneFromDeviceInternal>d__69>__
      ;
      puVar2 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualUInt64LiftedToNull_TypeInfo
      ;
      puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar13 = *plVar7;
        lVar12 = *(long *)puVar5;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar12) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01fb2200;
            }
            uVar14 = uVar14 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar12,0);
LAB_01fb2200:
        uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          iVar15 = 6;
          goto LAB_01fb2300;
        }
        lVar13 = *plVar7;
        lVar12 = *(long *)puVar5;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar10 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar12) {
              puVar8 = (undefined8 *)(lVar13 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_01fb2260;
            }
            uVar14 = uVar14 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar7,lVar12,1);
LAB_01fb2260:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        puVar8 = (undefined8 *)thunk_FUN_00d624a0();
        if ((long *)puVar8[1] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(*(long *)puVar8[1] + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        plVar9 = (long *)*puVar8;
        piVar10 = (int *)thunk_FUN_00d624a0();
      } while (*piVar10 != param_2);
      if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar9);
      }
      uVar11 = FUN_015f5b28(plVar9,*(undefined8 *)puVar3,0);
      iVar15 = 4;
LAB_01fb2300:
      plVar7 = (long *)thunk_FUN_00d6225c(plVar7,*(undefined8 *)puVar6);
      if (plVar7 != (long *)0x0) {
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar14 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar6) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01fb2360;
            }
            uVar14 = uVar14 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar6,0);
LAB_01fb2360:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
      if ((iVar15 != 6) && (iVar15 != 0)) {
        return uVar11;
      }
    }
    uVar11 = *(undefined8 *)Method_Unity_Collections_NativeArray<int>__ctor__;
  }
  return uVar11;
}


