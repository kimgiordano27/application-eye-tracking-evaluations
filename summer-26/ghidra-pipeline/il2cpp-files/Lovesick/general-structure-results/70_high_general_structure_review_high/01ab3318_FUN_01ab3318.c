/*
FUNCTION_NAME: FUN_01ab3318
ENTRY_POINT: 01ab3318
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long FUN_01ab3318(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  
  if ((DAT_0377ce90 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ecb60);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_69);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtnd_s64_f64__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_SerializeMember<GUIStyleState>__);
    DAT_0377ce90 = 1;
  }
  puVar3 = StringLiteral_302;
  puVar2 = Method_FullSerializer_fsBaseConverter_SerializeMember<GUIStyleState>__;
  puVar1 = PTR_DAT_033ecb60;
  local_48 = *(int *)(param_1 + 0x40);
  if (local_48 - 3U < 2) {
    lVar5 = FUN_00da4fb8(*(undefined8 *)
                          Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__,
                         *(undefined4 *)(param_1 + 0x54));
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcvtnd_s64_f64__;
    if (((*(char *)(param_1 + 0x80) == '\0') && (*(int *)(param_1 + 0x44) == 0x1406)) &&
       (*(int *)(param_1 + 0x40) == 4)) {
      plVar8 = *(long **)(param_1 + 0x28);
      lVar9 = *(long *)StringLiteral_69;
      lVar7 = *(long *)(lVar9 + 0x38);
      if (lVar7 == 0) {
        FUN_00d59478(lVar9);
        lVar7 = *(long *)(lVar9 + 0x38);
      }
      local_58 = 0;
      uStack_50 = 0;
      FUN_00adc7ec(&local_58,lVar5,*(undefined8 *)(lVar7 + 0x10));
      auVar14 = FUN_00c0eb88(local_58,uStack_50,*(undefined8 *)puVar1);
      if (plVar8 == (long *)0x0) {
LAB_01ab36d0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar8 + 0x348))
                (plVar8,auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(*plVar8 + 0x350));
    }
    else {
      if (lVar5 == 0) goto LAB_01ab36d0;
      if (0 < *(int *)(lVar5 + 0x18)) {
        uVar10 = 0;
        pfVar11 = (float *)(lVar5 + 0x20);
        do {
          FUN_01ab2794(param_1,uVar10 & 0xffffffff);
          fVar13 = 1.0;
          if (*(int *)(param_1 + 0x44) == 0x1406) {
            plVar8 = *(long **)(param_1 + 0x38);
            if (plVar8 == (long *)0x0) goto LAB_01ab36d0;
            fVar12 = (float)(**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
            if (*(uint *)(lVar5 + 0x18) <= uVar10) {
LAB_01ab36cc:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            *pfVar11 = fVar12;
            plVar8 = *(long **)(param_1 + 0x38);
            if (plVar8 == (long *)0x0) goto LAB_01ab36d0;
            fVar12 = (float)(**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
            if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_01ab36cc;
            pfVar11[1] = fVar12;
            plVar8 = *(long **)(param_1 + 0x38);
            if (plVar8 == (long *)0x0) goto LAB_01ab36d0;
            fVar12 = (float)(**(code **)(*plVar8 + 0x268))(plVar8,*(undefined8 *)(*plVar8 + 0x270));
            if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_01ab36cc;
            pfVar11[2] = fVar12;
            if (*(int *)(param_1 + 0x40) == 4) {
              plVar8 = *(long **)(param_1 + 0x38);
              if (plVar8 == (long *)0x0) goto LAB_01ab36d0;
              fVar13 = (float)(**(code **)(*plVar8 + 0x268))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x270));
            }
          }
          else {
            fVar12 = (float)FUN_01ab36d4();
            iVar4 = FUN_01ab2bb0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44));
            if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_01ab36cc;
            *pfVar11 = (float)iVar4 / fVar12;
            iVar4 = FUN_01ab2bb0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44));
            if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_01ab36cc;
            pfVar11[1] = (float)iVar4 / fVar12;
            iVar4 = FUN_01ab2bb0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44));
            if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_01ab36cc;
            pfVar11[2] = (float)iVar4 / fVar12;
            if (*(int *)(param_1 + 0x40) == 4) {
              iVar4 = FUN_01ab2bb0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44));
              fVar13 = (float)iVar4 / fVar12;
            }
          }
          pfVar11[3] = fVar13;
          uVar10 = uVar10 + 1;
          pfVar11 = pfVar11 + 4;
        } while ((long)uVar10 < (long)*(int *)(lVar5 + 0x18));
      }
    }
  }
  else {
    local_58 = *(undefined8 *)OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo;
    uStack_50 = 0xffffffffffffffff;
    uVar6 = FUN_017a7f78(&local_58,0);
    uVar6 = FUN_015f5b28(*(undefined8 *)puVar2,uVar6,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_026610e4(uVar6,0);
    lVar7 = *(long *)puVar1;
    lVar5 = *(long *)(lVar7 + 0x38);
    if (lVar5 == 0) {
      FUN_00d59478(lVar7);
      lVar5 = *(long *)(lVar7 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
  }
  return lVar5;
}


