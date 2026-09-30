/*
FUNCTION_NAME: FUN_01ffa590
ENTRY_POINT: 01ffa590
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_possible_biometrics_hits_3
*/


long * FUN_01ffa590(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  
  if ((DAT_03780845 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ee168);
    thunk_FUN_00d48444(System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo);
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_NOTATION_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_ICollection<CorrelationID>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_03780845 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar8 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_01ffa65c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_00d59724(param_1,*(long *)
                                   System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,
                          1);
LAB_01ffa65c:
    iVar5 = (*(code *)*puVar6)(param_1,puVar6[1]);
    puVar4 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
    puVar3 = System_Xml_Schema_Datatype_NOTATION_TypeInfo;
    puVar2 = System_Collections_Generic_ICollection<CorrelationID>_TypeInfo;
    if (iVar5 < 1) {
      return (long *)0x0;
    }
    if (param_2 != 0) {
      plVar13 = (long *)0x0;
      iVar12 = 0;
LAB_01ffa698:
      uVar9 = 0;
      do {
        if ((long)*(int *)(param_2 + 0x18) <= (long)uVar9) {
          if (plVar13 == (long *)0x0) goto LAB_01ffa8a4;
          lVar8 = *param_1;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 == 0) goto LAB_01ffa860;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_01ffa848;
        }
        lVar8 = *param_1;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_lane_u16;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar3,0);
Unity_Burst_Intrinsics_Arm_Neon__vcopy_lane_u16:
        plVar7 = (long *)(*(code *)*puVar6)(param_1,iVar12,puVar6[1]);
        if (*(uint *)(param_2 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar15 = *(undefined8 *)(param_2 + uVar9 * 8 + 0x20);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (plVar7 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 300);
          if ((*(byte *)(*plVar7 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar7);
          }
        }
        uVar10 = FUN_01ffa8e8(plVar7,uVar15);
        uVar9 = uVar9 + 1;
      } while ((uVar10 & 1) == 0);
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168);
        if (plVar13 != (long *)0x0) {
          FUN_01743cd4(plVar13,iVar5,0);
          if (iVar12 != 0) {
            iVar14 = 0;
            do {
              lVar8 = *param_1;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                    goto Unity_Burst_Intrinsics_Arm_Neon__vcopy_lane_u64;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar3,0);
Unity_Burst_Intrinsics_Arm_Neon__vcopy_lane_u64:
              uVar15 = (*(code *)*puVar6)(param_1,iVar14,puVar6[1]);
              (**(code **)(*plVar13 + 0x308))(plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
              iVar14 = iVar14 + 1;
            } while (iVar14 != iVar12);
          }
          goto LAB_01ffa8a4;
        }
        goto LAB_01ffa8e4;
      }
      goto LAB_01ffa8a4;
    }
  }
LAB_01ffa8e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_01ffa848:
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto Unity_Burst_Intrinsics_Arm_Neon__vcopyq_lane_f32;
    }
  }
LAB_01ffa860:
  puVar6 = (undefined8 *)FUN_00d59724(param_1,*(long *)puVar3,0);
Unity_Burst_Intrinsics_Arm_Neon__vcopyq_lane_f32:
  uVar15 = (*(code *)*puVar6)(param_1,iVar12,puVar6[1]);
  (**(code **)(*plVar13 + 0x308))(plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
LAB_01ffa8a4:
  iVar12 = iVar12 + 1;
  if (iVar12 == iVar5) {
    return plVar13;
  }
  goto LAB_01ffa698;
}


