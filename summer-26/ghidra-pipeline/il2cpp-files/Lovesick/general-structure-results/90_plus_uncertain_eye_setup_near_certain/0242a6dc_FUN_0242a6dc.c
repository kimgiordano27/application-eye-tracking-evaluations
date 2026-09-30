/*
FUNCTION_NAME: FUN_0242a6dc
ENTRY_POINT: 0242a6dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_0242a6dc(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((DAT_03782384 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(StringLiteral_8913);
    thunk_FUN_00d48444(PTR_DAT_033f33a0);
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__);
    DAT_03782384 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (param_3 == 0) {
LAB_0242aa84:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar1 = *param_2;
  uVar3 = param_2[6];
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_017726a0(uVar3,*(undefined4 *)(param_3 + 0x18),0);
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((int)uVar3 < 1) {
    uVar11 = 0;
  }
  else {
    lVar12 = 0;
    uVar13 = 0;
    iVar14 = 0;
    uVar11 = 0;
    do {
      if (uVar1 == uVar13) {
        iVar14 = iVar14 + -1;
      }
      else {
        memmove(&local_e0,(void *)(*(long *)(param_2 + 4) + lVar12),0x74);
        lVar5 = FUN_026b11e0(&local_e0,0);
        if (lVar5 == 0) goto LAB_0242aa84;
        uVar6 = FUN_026676cc(lVar5,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar7 = FUN_0268b4e0(uVar6,0,0);
        if ((uVar7 & 1) == 0) {
          memmove(&local_e0,(void *)(*(long *)(param_2 + 4) + lVar12),0x74);
          uVar4 = FUN_026b126c(&local_e0,0);
          if ((uVar4 | 2) == 2) {
            if (*(uint *)(param_3 + 0x18) <= uVar11) goto LAB_0242aa88;
            lVar10 = (long)(int)uVar11;
            uVar11 = uVar11 + 1;
            lVar10 = param_3 + lVar10 * 0x10;
            *(ulong *)(lVar10 + 0x20) =
                 (ulong)((uint)uVar13 & 0xffff | ((uint)uVar13 + iVar14) * 0x10000);
            *(long *)(lVar10 + 0x28) = lVar5;
          }
          else {
            plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
            if (plVar8 == (long *)0x0) goto LAB_0242aa84;
            if ((*(long *)Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__
                 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(*(long *)
                                             Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__
                                            ,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_0242aa8c:
              uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar6,0);
            }
            if ((int)plVar8[3] == 0) goto LAB_0242aa88;
            plVar8[4] = *(long *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass1_0_<DOColor>b__1__;
            local_f8 = *(undefined8 *)
                        Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>__ctor__;
            uStack_f0 = 0xffffffffffffffff;
            local_e8 = uVar4;
            lVar10 = FUN_017a7f78(&local_f8,0);
            if ((lVar10 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_0242aa8c;
            uVar4 = *(uint *)(plVar8 + 3);
            if (uVar4 < 2) {
LAB_0242aa88:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar8[5] = lVar10;
            if (*(long *)PTR_DAT_033f33a0 != 0) {
              lVar10 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f33a0,*(undefined8 *)(*plVar8 + 0x40))
              ;
              if (lVar10 == 0) goto LAB_0242aa8c;
              uVar4 = *(uint *)(plVar8 + 3);
            }
            if (uVar4 < 3) goto LAB_0242aa88;
            plVar8[6] = *(long *)PTR_DAT_033f33a0;
            lVar10 = FUN_0268b6ac(lVar5,0);
            if ((lVar10 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_0242aa8c;
            uVar4 = *(uint *)(plVar8 + 3);
            if (uVar4 < 4) goto LAB_0242aa88;
            plVar8[7] = lVar10;
            if (*(long *)StringLiteral_8913 != 0) {
              lVar10 = thunk_FUN_00d6225c(*(long *)StringLiteral_8913,
                                          *(undefined8 *)(*plVar8 + 0x40));
              if (lVar10 == 0) goto LAB_0242aa8c;
              uVar4 = *(uint *)(plVar8 + 3);
            }
            if (uVar4 < 5) goto LAB_0242aa88;
            plVar8[8] = *(long *)StringLiteral_8913;
            uVar6 = FUN_01600844(plVar8,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_0266185c(uVar6,lVar5,0);
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x74;
    } while (uVar3 != uVar13);
  }
  return uVar11;
}


