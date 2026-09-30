/*
FUNCTION_NAME: FUN_013e77e4
ENTRY_POINT: 013e77e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_013e77e4(long param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  uint local_68;
  undefined4 local_64;
  
  local_64 = param_3;
  if ((DAT_03776853 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_2590);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__);
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_yearMonth_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7036);
    thunk_FUN_00d48444(Method_OVRTask<__Il2CppFullySharedGenericType>_ValidateDelegateAndThrow__);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    DAT_03776853 = 1;
  }
  puVar8 = StringLiteral_2590;
  local_68 = 0;
  if (param_2 == (long *)0x0) {
LAB_013e79dc:
    uVar13 = 1;
  }
  else {
    lVar15 = *param_2;
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_2590) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0x15) * 0x10 + 0x138);
          goto LAB_013e78f0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_2590,0x15);
LAB_013e78f0:
    puVar9 = StringLiteral_7036;
    puVar7 = StringLiteral_302;
    puVar4 = Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
    uVar17 = (*(code *)*puVar10)(param_2,uVar1,puVar10[1]);
    puVar6 = Method_OVRTask<__Il2CppFullySharedGenericType>_ValidateDelegateAndThrow__;
    puVar5 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
    puVar3 = System_Xml_Schema_Datatype_yearMonth_TypeInfo;
    puVar2 = PTR_DAT_033ea8a0;
    if ((uVar17 & 1) != 0) {
      local_68 = 0;
      lVar15 = *(long *)(param_1 + 0x20);
      uVar14 = local_68;
      do {
        local_68 = uVar14;
        if (lVar15 == 0) {
LAB_013e79d8:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar14) goto LAB_013e79dc;
        if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_013e7c38;
        lVar15 = *(long *)(lVar15 + (long)(int)uVar14 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_013e79d8;
        lVar16 = *param_2;
        uVar1 = *(undefined4 *)(lVar15 + 0x18);
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar8) {
              puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x15) * 0x10 + 0x138);
              goto LAB_013e79b4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar8,0x15);
LAB_013e79b4:
        uVar17 = (*(code *)*puVar10)(param_2,uVar1,puVar10[1]);
        if ((uVar17 & 1) == 0) {
          plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,7);
          if (plVar12 == (long *)0x0) goto LAB_013e79d8;
          if ((*(long *)puVar9 != 0) &&
             (lVar15 = thunk_FUN_00d6225c(*(long *)puVar9,*(undefined8 *)(*plVar12 + 0x40)),
             lVar15 == 0)) {
LAB_013e7c3c:
            uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar13,0);
          }
          if ((int)plVar12[3] != 0) {
            plVar12[4] = *(long *)puVar9;
            lVar15 = FUN_0176eb1c(&local_64,0);
            if ((lVar15 != 0) &&
               (lVar16 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar12 + 0x40)), lVar16 == 0))
            goto LAB_013e7c3c;
            uVar14 = *(uint *)(plVar12 + 3);
            if (1 < uVar14) {
              plVar12[5] = lVar15;
              lVar15 = *(long *)puVar6;
              if (lVar15 != 0) {
                lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar12 + 0x40));
                if (lVar15 == 0) goto LAB_013e7c3c;
                uVar14 = *(uint *)(plVar12 + 3);
              }
              if (2 < uVar14) {
                plVar12[6] = *(long *)puVar6;
                lVar15 = FUN_0176eb1c(&local_68,0);
                if ((lVar15 != 0) &&
                   (lVar16 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar16 == 0)) goto LAB_013e7c3c;
                uVar14 = *(uint *)(plVar12 + 3);
                if (3 < uVar14) {
                  plVar12[7] = lVar15;
                  lVar15 = *(long *)puVar5;
                  if (lVar15 != 0) {
                    lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar12 + 0x40));
                    if (lVar15 == 0) goto LAB_013e7c3c;
                    uVar14 = *(uint *)(plVar12 + 3);
                  }
                  if (4 < uVar14) {
                    plVar12[8] = *(long *)puVar5;
                    lVar15 = *(long *)(param_1 + 0x20);
                    if (lVar15 == 0) goto LAB_013e79d8;
                    if (local_68 < *(uint *)(lVar15 + 0x18)) {
                      lVar15 = *(long *)(lVar15 + (long)(int)local_68 * 8 + 0x20);
                      if (lVar15 == 0) goto LAB_013e79d8;
                      local_80 = *(undefined8 *)puVar4;
                      uStack_78 = 0xffffffffffffffff;
                      local_70 = *(undefined4 *)(lVar15 + 0x18);
                      lVar15 = FUN_017a7f78(&local_80,0);
                      if ((lVar15 != 0) &&
                         (lVar16 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar16 == 0)) goto LAB_013e7c3c;
                      uVar14 = *(uint *)(plVar12 + 3);
                      if (5 < uVar14) {
                        plVar12[9] = lVar15;
                        puVar8 = StringLiteral_12935;
                        if (*(long *)StringLiteral_12935 != 0) {
                          lVar15 = thunk_FUN_00d6225c(*(long *)StringLiteral_12935,
                                                      *(undefined8 *)(*plVar12 + 0x40));
                          if (lVar15 == 0) goto LAB_013e7c3c;
                          uVar14 = *(uint *)(plVar12 + 3);
                        }
                        if (6 < uVar14) {
                          plVar12[10] = *(long *)puVar8;
                          uVar13 = FUN_01600844(plVar12,0);
                          goto LAB_013e7bf0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_013e7c38:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        uVar14 = uVar14 + 1;
        lVar15 = *(long *)(param_1 + 0x20);
      } while( true );
    }
    uVar13 = FUN_0176eb1c(&local_64,0);
    local_80 = *(undefined8 *)puVar4;
    uStack_78 = 0xffffffffffffffff;
    local_70 = *(undefined4 *)(param_1 + 0x18);
    uVar11 = FUN_017a7f78(&local_80,0);
    uVar13 = FUN_0160073c(*(undefined8 *)puVar9,uVar13,*(undefined8 *)puVar3,uVar11,0);
LAB_013e7bf0:
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar7);
    }
    FUN_026610e4(uVar13,0);
    uVar13 = 0;
  }
  return uVar13;
}


