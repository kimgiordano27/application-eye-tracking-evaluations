/*
FUNCTION_NAME: Firebase.Unity.UnitySynchronizationContext.<SignaledCoroutine>d__13$$System.IDisposable.Dispose
ENTRY_POINT: 04555834
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Firebase_Unity_UnitySynchronizationContext_<SignaledCoroutine>d__13__System_IDisposable_Dispose
               (undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long unaff_x21;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
                    /* try { // try from 04555838 to 046558d7 has its CatchHandler @ 04555838
                       catch() { ... } // from try @ 04555838 with catch @ 04555838
                       catch() { ... } // from try @ 045558f0 with catch @ 04555838
                       catch() { ... } // from try @ 0455594c with catch @ 04555838
                       catch() { ... } // from try @ 04555970 with catch @ 04555838 */
  FUN_0403162c(PTR_DAT_08f841f0);
  FUN_0403162c(PTR_DAT_08f7aba8);
  FUN_0403162c(PTR_DAT_08f67840);
  FUN_0403162c(PTR_DAT_08f67f48);
  FUN_0403162c(PTR_DAT_08f7abb8);
  FUN_0403162c(PTR_DAT_08f67860);
  FUN_0403162c(PTR_DAT_08f67870);
  FUN_0403162c(PTR_DAT_08f67fc0);
  FUN_0403162c(PTR_DAT_08f67888);
  FUN_0403162c(PTR_DAT_08f65598);
  *(undefined1 *)(unaff_x21 + 0x264) = 1;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar5 = FUN_08589e5c(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  FUN_04554e18();
  if (*(char *)(unaff_x19 + 0x35) == '\0') {
    if (*(char *)(unaff_x19 + 0x34) == '\0') {
      uVar5 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x30), lVar6 == 0)) goto LAB_04555c9c;
      uVar5 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>__AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>
                        (lVar6,0);
      uVar5 = uVar5 & 0xffffffff;
    }
  }
  else {
    uVar5 = 1;
  }
  lVar6 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f67888);
  FUN_058729bc(lVar6,*(undefined8 *)PTR_DAT_08f67860);
  iVar11 = *(int *)(unaff_x19 + 0x28);
  if (iVar11 == 2) {
    FUN_0455602c();
  }
  else if (iVar11 == 1) {
    Firebase_Platform_FirebaseAppUtilsStub__get_Instance();
  }
  else if (iVar11 == 0) {
    FUN_04555ca0();
  }
  puVar3 = PTR_DAT_08f67fc0;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
      return;
    }
    fVar17 = param_2;
    if ((uVar5 & 1) != 0) {
      fVar12 = (float)FUN_05872ef8(lVar6,*(int *)(lVar6 + 0x18) + -1,*(undefined8 *)PTR_DAT_08f67fc0
                                  );
      fVar16 = param_2;
      fVar17 = param_3;
      fVar13 = (float)FUN_05872ef8(lVar6,0,*(undefined8 *)puVar3);
      param_3 = param_3 - fVar17;
      fVar17 = DAT_01a2e7f0;
      if (DAT_01a2e7f0 <=
          param_3 * param_3 +
          (fVar12 - fVar13) * (fVar12 - fVar13) + (param_2 - fVar16) * (param_2 - fVar16)) {
        uVar14 = FUN_05872ef8(lVar6,0,*(undefined8 *)puVar3);
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)PTR_DAT_08f67840;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_04555c9c;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + 0x20) = uVar14;
          *(float *)(lVar7 + 0x24) = fVar17;
          *(float *)(lVar7 + 0x28) = param_3;
        }
        else {
          FUN_05873228(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    lVar7 = *(long *)(unaff_x19 + 0x80);
    *(undefined4 *)(unaff_x19 + 0x70) = 0;
    if (lVar7 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x88);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 != 0) {
        iVar11 = *(int *)(lVar6 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (iVar11 == 0) {
          return;
        }
        FUN_0587345c(lVar7,lVar6,*(undefined8 *)PTR_DAT_08f841f0);
        puVar3 = PTR_DAT_08f7aba8;
        lVar7 = *(long *)(unaff_x19 + 0x88);
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar9 = *(long *)PTR_DAT_08f7aba8;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0;
            }
            else {
              FUN_05829640(0,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                          );
            }
            puVar4 = PTR_DAT_08f67fc0;
            puVar2 = PTR_DAT_08f65580;
            if (1 < *(int *)(lVar6 + 0x18)) {
              iVar11 = 1;
              do {
                fVar18 = *(float *)(unaff_x19 + 0x70);
                fVar13 = (float)FUN_05872ef8(lVar6,iVar11 + -1,*(undefined8 *)puVar4);
                fVar16 = fVar17;
                fVar12 = param_3;
                fVar15 = (float)FUN_05872ef8(lVar6,iVar11,*(undefined8 *)puVar4);
                if (DAT_09539e19 == '\0') {
                  FUN_0403162c(puVar2);
                  DAT_09539e19 = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0408f364();
                }
                fVar16 = fVar17 - fVar16;
                lVar7 = *(long *)(unaff_x19 + 0x88);
                param_3 = param_3 - fVar12;
                fVar17 = param_3 * param_3;
                fVar18 = fVar18 + SQRT(fVar17 + (fVar13 - fVar15) * (fVar13 - fVar15) +
                                                fVar16 * fVar16);
                *(float *)(unaff_x19 + 0x70) = fVar18;
                if (lVar7 == 0) goto LAB_04555c9c;
                lVar8 = *(long *)(lVar7 + 0x10);
                lVar9 = *(long *)puVar3;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar8 == 0) goto LAB_04555c9c;
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  *(float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = fVar18;
                }
                else {
                  FUN_05829640(lVar7,*(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < *(int *)(lVar6 + 0x18));
            }
            FUN_04554fa4();
            if (*(char *)(unaff_x19 + 0x44) == '\0') {
              return;
            }
            FUN_04556164();
            return;
          }
        }
      }
    }
  }
LAB_04555c9c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


