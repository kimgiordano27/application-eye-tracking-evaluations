/*
FUNCTION_NAME: FUN_0321ad14
ENTRY_POINT: 0321ad14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_6
*/


void FUN_0321ad14(long param_1,long *param_2,long *param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  float fVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_03ff4636 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83800);
    thunk_FUN_01ad9084(PTR_DAT_03d837c0);
    DAT_03ff4636 = 1;
  }
  puVar5 = PTR_DAT_03d83800;
  if (*(int *)(param_1 + 0x28) == 4) {
    if ((ulong)*(uint *)(param_2 + 1) == (long)*(int *)(param_1 + 0x20)) {
      uVar6 = FUN_01b47fd0(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,*(undefined4 *)(param_1 + 0x14));
      plVar7 = (long *)*param_2;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x308))
                  (plVar7,(long)*(int *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x24) +
                          param_2[2],0,*(undefined8 *)(*plVar7 + 0x310));
        param_2 = (long *)*param_2;
        if (param_2 != (long *)0x0) {
          (**(code **)(*param_2 + 0x318))
                    (param_2,uVar6,0,*(undefined4 *)(param_1 + 0x14),*(undefined8 *)(*param_2 + 800)
                    );
          fVar4 = DAT_00b55490;
          iVar10 = 0;
          uVar1 = *(int *)(param_1 + 0x2c) - 0x1400;
          if (uVar1 < 7) {
            iVar10 = *(int *)(&DAT_00bfc5b0 + (long)(int)uVar1 * 4);
          }
          iVar3 = *(int *)(param_1 + 0x18);
          if (*(int *)(param_1 + 0x18) < 1) {
            iVar3 = iVar10 << 2;
          }
          if (0 < *(int *)(param_1 + 0x30)) {
            iVar8 = 0;
            lVar11 = 0;
            lVar9 = param_4 << 0x20;
            do {
              lVar13 = *param_3;
              if (lVar13 == 0) goto LAB_0321b0cc;
              uVar14 = FUN_02fda1d4(uVar6,iVar8,0);
              uVar2 = (param_4 & 0xffffffff) + lVar11;
              if (*(uint *)(lVar13 + 0x18) <= uVar2) {
LAB_0321b0d0:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              lVar12 = lVar9 >> 0x20;
              *(undefined4 *)(lVar13 + lVar12 * 0x10 + 0x20) = uVar14;
              lVar13 = *param_3;
              if (lVar13 == 0) goto LAB_0321b0cc;
              uVar14 = FUN_02fda1d4(uVar6,iVar10 + iVar8,0);
              if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_0321b0d0;
              *(undefined4 *)(lVar13 + lVar12 * 0x10 + 0x24) = uVar14;
              lVar13 = *param_3;
              if (lVar13 == 0) goto LAB_0321b0cc;
              uVar14 = FUN_02fda1d4(uVar6,iVar10 * 2 + iVar8,0);
              if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_0321b0d0;
              *(undefined4 *)(lVar13 + lVar12 * 0x10 + 0x28) = uVar14;
              lVar13 = *param_3;
              if (lVar13 == 0) goto LAB_0321b0cc;
              uVar14 = FUN_02fda1d4(uVar6,iVar10 * 3 + iVar8,0);
              if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_0321b0d0;
              *(undefined4 *)(lVar13 + lVar12 * 0x10 + 0x2c) = uVar14;
              lVar13 = *param_3;
              if (lVar13 == 0) goto LAB_0321b0cc;
              if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_0321b0d0;
              lVar13 = lVar13 + lVar12 * 0x10;
              fVar15 = *(float *)(lVar13 + 0x20);
              fVar16 = *(float *)(lVar13 + 0x24);
              fVar17 = *(float *)(lVar13 + 0x28);
              fVar18 = *(float *)(lVar13 + 0x2c);
              if (DAT_03fed263 == '\0') {
                thunk_FUN_01ad9084(
                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__
                                  );
                DAT_03fed263 = '\x01';
              }
              fVar18 = fVar15 + fVar16 + fVar17 + fVar18;
              fVar15 = ABS(fVar18);
              if (fVar15 <= 0.0) {
                fVar15 = 0.0;
              }
              fVar17 = **(float **)
                         (*(long *)
                           Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8
                         ) * 8.0;
              fVar16 = fVar15 * fVar4;
              if (fVar15 * fVar4 <= fVar17) {
                fVar16 = fVar17;
              }
              if (fVar16 <= ABS(0.0 - fVar18)) {
                lVar13 = *param_3;
                if (lVar13 == 0) goto LAB_0321b0cc;
                if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_0321b0d0;
                lVar13 = lVar13 + lVar12 * 0x10;
                *(ulong *)(lVar13 + 0x28) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x28) >> 0x20) / fVar18,
                              (float)*(undefined8 *)(lVar13 + 0x28) / fVar18);
                *(ulong *)(lVar13 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20) / fVar18,
                              (float)*(undefined8 *)(lVar13 + 0x20) / fVar18);
              }
              lVar11 = lVar11 + 1;
              iVar8 = iVar8 + iVar3;
              lVar9 = lVar9 + 0x100000000;
            } while (lVar11 < *(int *)(param_1 + 0x30));
          }
          return;
        }
      }
LAB_0321b0cc:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = *(undefined8 *)PTR_DAT_03d837c0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = *(undefined8 *)puVar5;
  }
  FUN_038f2e04(uVar6,0);
  return;
}


