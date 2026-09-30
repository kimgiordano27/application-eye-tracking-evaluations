/*
FUNCTION_NAME: FUN_01ec9dcc
ENTRY_POINT: 01ec9dcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01ec9dcc(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined8 local_68;
  
  if ((DAT_0377ff9e & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_ObjectManager_FixupSpecialObject__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcopy_laneq_s64__);
    thunk_FUN_00d48444(StringLiteral_12195);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_21_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11327);
    thunk_FUN_00d48444(StringLiteral_13941);
    thunk_FUN_00d48444(
                      Sirenix_Serialization_WeakMultiDimensionalArrayFormatter_<>c__DisplayClass8_0_TypeInfo
                      );
    DAT_0377ff9e = 1;
  }
  puVar5 = StringLiteral_13941;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    plVar8 = (long *)FUN_01ec1550(*(long *)(param_1 + 0x80),*(undefined8 *)(param_2 + 0x40));
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 300);
      if ((*(byte *)(*plVar8 + 300) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar8);
      }
    }
    plVar9 = *(long **)(param_2 + 0x38);
    if (plVar9 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar9 + 0x348))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x350));
      puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcopy_laneq_s64__;
      puVar3 = Method_System_Runtime_Serialization_ObjectManager_FixupSpecialObject__;
      if ((uVar10 & 1) != 0) {
        return;
      }
      plVar9 = *(long **)(param_2 + 0x38);
      if (plVar9 != (long *)0x0) {
        lVar13 = 0;
        iVar14 = 0;
        do {
          iVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
          puVar2 = OVRPlugin_OVRP_1_21_0_TypeInfo;
          if (iVar6 <= iVar14) {
            if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) < 1)) goto LAB_01eca0e8;
            iVar14 = 0;
            goto LAB_01eca0a4;
          }
          plVar9 = *(long **)(param_2 + 0x38);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x2e8))
                                         (plVar9,iVar14,*(undefined8 *)(*plVar9 + 0x2f0)),
             plVar9 == (long *)0x0)) break;
          bVar1 = *(byte *)(*(long *)puVar5 + 300);
          if ((*(byte *)(*plVar9 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar9);
          }
          if (param_3 == 0) break;
          plVar11 = (long *)FUN_01ec1550(param_3,plVar9[0x18]);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               Sirenix_Serialization_WeakMultiDimensionalArrayFormatter_<>c__DisplayClass8_0_TypeInfo
                             + 300);
            if ((*(byte *)(*plVar11 + 300) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Sirenix_Serialization_WeakMultiDimensionalArrayFormatter_<>c__DisplayClass8_0_TypeInfo
               )) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar11);
            }
            FUN_01ec9dcc(param_1,plVar11,param_3);
            plVar12 = (long *)plVar11[7];
            if (plVar12 == (long *)0x0) break;
            iVar6 = 0;
            while (iVar7 = (**(code **)(*plVar12 + 0x298))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x2a0)), iVar6 < iVar7) {
              plVar12 = (long *)plVar11[7];
              if (plVar12 == (long *)0x0) goto LAB_01eca124;
              plVar12 = (long *)(**(code **)(*plVar12 + 0x2e8))
                                          (plVar12,iVar6,*(undefined8 *)(*plVar12 + 0x2f0));
              if (plVar12 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)puVar5 + 300);
                if ((*(byte *)(*plVar12 + 300) < bVar1) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)
                   ) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(plVar12);
                }
              }
              if (plVar12 != plVar9) {
                if (lVar13 == 0) {
                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11327);
                  if (lVar13 == 0) goto LAB_01eca124;
                  FUN_01320e50(lVar13,*(undefined8 *)puVar4);
                }
                FUN_00c4caf4(lVar13,plVar12,*(undefined8 *)puVar3);
              }
              plVar12 = (long *)plVar11[7];
              iVar6 = iVar6 + 1;
              if (plVar12 == (long *)0x0) goto LAB_01eca124;
            }
          }
          plVar9 = *(long **)(param_2 + 0x38);
          iVar14 = iVar14 + 1;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  goto LAB_01eca124;
  while( true ) {
    (**(code **)(*plVar9 + 0x308))(plVar9,local_68,*(undefined8 *)(*plVar9 + 0x310));
    iVar14 = iVar14 + 1;
    if (*(int *)(lVar13 + 0x18) <= iVar14) break;
LAB_01eca0a4:
    plVar9 = *(long **)(param_2 + 0x38);
    FUN_0132138c(lVar13,iVar14,&local_68,*(undefined8 *)puVar2);
    if (plVar9 == (long *)0x0) goto LAB_01eca124;
  }
LAB_01eca0e8:
  plVar9 = *(long **)(param_2 + 0x38);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x308))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x310));
    return;
  }
LAB_01eca124:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


