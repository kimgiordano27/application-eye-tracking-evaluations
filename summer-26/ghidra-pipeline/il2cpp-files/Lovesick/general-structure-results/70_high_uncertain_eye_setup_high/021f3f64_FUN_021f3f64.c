/*
FUNCTION_NAME: FUN_021f3f64
ENTRY_POINT: 021f3f64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_021f3f64(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  
  if ((DAT_03781810 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<MockTouch>_GetEnumerator__);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VA_VolumetricShape>_get_Count__);
    DAT_03781810 = 1;
  }
  puVar3 = StringLiteral_12935;
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
  uVar4 = FUN_015ff8a0(param_1[3],0);
  uVar5 = FUN_015ff8a0(param_1[2],0);
  uVar6 = FUN_015ff8a0(*param_1,0);
  puVar1 = StringLiteral_3287;
  if (((uVar4 & 1) == 0) && ((uVar5 & 1) == 0)) {
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_01600424(param_1[2],*(undefined8 *)StringLiteral_3287,param_1[3],0);
      return lVar7;
    }
    plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
    if (plVar8 == (long *)0x0) {
LAB_021f4264:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = param_1[2];
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_021f4258:
      uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar10,0);
    }
    uVar11 = *(uint *)(plVar8 + 3);
    if (uVar11 != 0) {
      plVar8[4] = lVar7;
      lVar7 = *(long *)puVar1;
      if (lVar7 != 0) {
        lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar7 == 0) goto LAB_021f4258;
        uVar11 = *(uint *)(plVar8 + 3);
      }
      if (1 < uVar11) {
        plVar8[5] = *(long *)puVar1;
        lVar7 = param_1[3];
        if (lVar7 != 0) {
          lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_021f4258;
          uVar11 = *(uint *)(plVar8 + 3);
        }
        if (2 < uVar11) {
          plVar8[6] = lVar7;
          if (*(long *)puVar2 != 0) {
            lVar7 = thunk_FUN_00d6225c(*(long *)puVar2,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar7 == 0) goto LAB_021f4258;
            uVar11 = *(uint *)(plVar8 + 3);
          }
          if (3 < uVar11) {
            plVar8[7] = *(long *)puVar2;
            lVar7 = *param_1;
            if (lVar7 != 0) {
              lVar9 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar9 == 0) goto LAB_021f4258;
              uVar11 = *(uint *)(plVar8 + 3);
            }
            if (4 < uVar11) {
              plVar8[8] = lVar7;
              if (*(long *)puVar3 != 0) {
                lVar7 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar8 + 0x40));
                if (lVar7 == 0) goto LAB_021f4258;
                uVar11 = *(uint *)(plVar8 + 3);
              }
              if (5 < uVar11) {
                plVar8[9] = *(long *)puVar3;
                lVar7 = FUN_01600844(plVar8,0);
                return lVar7;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  if ((uVar4 & 1) == 0) {
    lVar7 = param_1[3];
  }
  else {
    uVar4 = FUN_015ff8a0(param_1[1],0);
    if ((uVar4 & 1) == 0) {
      lVar7 = param_1[1];
    }
    else {
      uVar4 = FUN_015ff8a0(param_1[6],0);
      puVar1 = Method_System_Collections_Generic_List<VA_VolumetricShape>_get_Count__;
      if ((uVar4 & 1) != 0) {
        if ((uVar6 & 1) != 0) {
          return *(long *)Method_System_Collections_Generic_List<MockTouch>_GetEnumerator__;
        }
        return *param_1;
      }
      lVar7 = param_1[6];
      if (lVar7 == 0) goto LAB_021f4264;
      if (0x28 < *(int *)(lVar7 + 0x10)) {
        uVar10 = FUN_01601d40(lVar7,0,0x28,0);
        lVar7 = FUN_015f5b28(uVar10,*(undefined8 *)puVar1,0);
        if ((uVar6 & 1) != 0) {
          return lVar7;
        }
        goto LAB_021f4228;
      }
    }
  }
  if ((uVar6 & 1) != 0) {
    return lVar7;
  }
LAB_021f4228:
  lVar7 = FUN_0160073c(lVar7,*(undefined8 *)puVar2,*param_1,*(undefined8 *)puVar3,0);
  return lVar7;
}


