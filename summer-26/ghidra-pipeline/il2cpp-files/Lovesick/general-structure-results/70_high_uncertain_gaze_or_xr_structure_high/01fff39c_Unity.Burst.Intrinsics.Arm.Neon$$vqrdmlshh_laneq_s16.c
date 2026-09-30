/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqrdmlshh_laneq_s16
ENTRY_POINT: 01fff39c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;functionality_possible_biometrics_hits_4
*/


long * Unity_Burst_Intrinsics_Arm_Neon__vqrdmlshh_laneq_s16
                 (long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x859) & 1) == 0) {
    thunk_FUN_00d48444(System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Module>__ctor__);
    thunk_FUN_00d48444(StringLiteral_3724);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__)
    ;
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    *(undefined1 *)(unaff_x22 + 0x859) = 1;
  }
  puVar5 = StringLiteral_3724;
  puVar4 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<Module>__ctor__;
  if (param_1 == 0) {
    plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3724);
    if (plVar7 == (long *)0x0) goto LAB_01fff9d0;
    uVar13 = 0;
    goto LAB_01fff9ac;
  }
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar7 = (long *)Unity_Burst_Intrinsics_Arm_Neon__vrbit_u8(param_1,param_3 & 1);
  lVar8 = thunk_FUN_00d6225c(param_1,*(undefined8 *)puVar3);
  if (lVar8 == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01ff1698(param_1);
    if (plVar7 == (long *)0x0) goto LAB_01fff9d0;
    lVar14 = *plVar7;
    lVar8 = *(long *)puVar3;
    uVar2 = *(ushort *)(lVar14 + 0x12a);
    uVar15 = (ulong)uVar2;
    if ((param_4 & 1) == 0) {
      if (uVar2 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 10) * 0x10 + 0x138);
            goto LAB_01fff6b0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar7,lVar8,10);
LAB_01fff6b0:
      uVar11 = (*(code *)*puVar9)(plVar7,param_2,puVar9[1]);
    }
    else {
      if (uVar2 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 9) * 0x10 + 0x138);
            goto LAB_01fff690;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar7,lVar8,9);
LAB_01fff690:
      uVar11 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_01ffdb78(1,uVar11,uVar13);
    plVar7 = (long *)FUN_01ffb09c(param_1);
    if (plVar7 != (long *)0x0) {
      lVar14 = *plVar7;
      lVar8 = *(long *)puVar3;
      uVar2 = *(ushort *)(lVar14 + 0x12a);
      uVar15 = (ulong)uVar2;
      if ((param_4 & 1) == 0) {
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar8) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 10) * 0x10 + 0x138);
              goto LAB_01fff7a0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar7,lVar8,10);
LAB_01fff7a0:
        uVar12 = (*(code *)*puVar9)(plVar7,param_2,puVar9[1]);
      }
      else {
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar8) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 9) * 0x10 + 0x138);
              goto LAB_01fff780;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar7,lVar8,9);
LAB_01fff780:
        uVar12 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_01ffb158(1,uVar11,uVar12);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01ffc29c(1,uVar11,param_1,uVar13);
LAB_01fff810:
    plVar7 = (long *)FUN_01ffe8dc(1,uVar13,param_2);
  }
  else {
    if (plVar7 == (long *)0x0) goto LAB_01fff9d0;
    lVar14 = *plVar7;
    lVar8 = *(long *)puVar3;
    uVar2 = *(ushort *)(lVar14 + 0x12a);
    uVar15 = (ulong)uVar2;
    if ((param_4 & 1) == 0) {
      if (uVar2 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 10) * 0x10 + 0x138);
            goto FUN_01fff5a4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar7,lVar8,10);
FUN_01fff5a4:
      plVar7 = (long *)(*(code *)*puVar9)(plVar7,param_2,puVar9[1]);
    }
    else {
      if (uVar2 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 9) * 0x10 + 0x138);
            goto Unity_Burst_Intrinsics_Arm_Neon__vcreate_f64;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724(plVar7,lVar8,9);
Unity_Burst_Intrinsics_Arm_Neon__vcreate_f64:
      plVar7 = (long *)(*(code *)*puVar9)(plVar7,puVar9[1]);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((param_3 & 1) == 0) {
      uVar13 = FUN_01ffc29c(1,plVar7,param_1,0);
      goto LAB_01fff810;
    }
    plVar10 = (long *)FUN_01ffb09c(param_1);
    if (plVar10 != (long *)0x0) {
      lVar14 = *plVar10;
      lVar8 = *(long *)puVar3;
      uVar2 = *(ushort *)(lVar14 + 0x12a);
      uVar15 = (ulong)uVar2;
      if ((param_4 & 1) == 0) {
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar8) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 10) * 0x10 + 0x138);
              goto Unity_Burst_Intrinsics_Arm_Neon__vdup_n_u32;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar10,lVar8,10);
Unity_Burst_Intrinsics_Arm_Neon__vdup_n_u32:
        uVar13 = (*(code *)*puVar9)(plVar10,param_2,puVar9[1]);
      }
      else {
        if (uVar2 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar8) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 9) * 0x10 + 0x138);
              goto FUN_01fff828;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724(plVar10,lVar8,9);
FUN_01fff828:
        uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar7 = (long *)FUN_01ffb158(1,plVar7,uVar13);
    }
  }
  puVar4 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar3 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  if (plVar7 != (long *)0x0) {
    lVar8 = *(long *)puVar5;
    bVar1 = *(byte *)(lVar8 + 300);
    if ((bVar1 <= *(byte *)(*plVar7 + 300)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == lVar8)) {
      return plVar7;
    }
    lVar8 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar9 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01fff914;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_00d59724(plVar7,*(long *)
                                  System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,1
                         );
LAB_01fff914:
    uVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
    uVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar6);
    lVar8 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01fff980;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_01fff980:
    (*(code *)*puVar9)(plVar7,uVar13,0,puVar9[1]);
    plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar5);
    if (plVar7 != (long *)0x0) {
LAB_01fff9ac:
      FUN_01fdf08c(plVar7,uVar13,1,0);
      return plVar7;
    }
  }
LAB_01fff9d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


