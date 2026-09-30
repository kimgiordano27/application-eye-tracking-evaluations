/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 03117e3c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 141
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03118258) */

void OVREyeGaze__OnEnable
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  int in_stack_00000018;
  
  if ((DAT_03ff1d5a & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d7f110);
    thunk_FUN_01ad9084(PTR_DAT_03d7f118);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
    thunk_FUN_01ad9084(PTR_DAT_03d7f120);
    DAT_03ff1d5a = 1;
  }
  puVar7 = PTR_DAT_03d7f120;
  puVar6 = PTR_DAT_03d7f110;
  puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
  puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar20 = -1.0;
    iVar17 = 0;
    fVar22 = -1.0;
    if (*(int *)(*(long *)(param_4 + 0x20) + 0x50) != 0) {
      fVar22 = 1.0;
    }
    while (*(long *)(param_4 + 0x28) != 0) {
      lVar8 = FUN_02b59714(*(long *)(param_4 + 0x28),iVar17,*(undefined8 *)PTR_DAT_03d7f118);
      if ((*(long *)(param_4 + 0x20) == 0) ||
         (lVar9 = FUN_03172be8(*(long *)(param_4 + 0x20),iVar17,0), lVar9 == 0)) break;
      plVar10 = (long *)FUN_0392a954(lVar9,0);
LAB_03117f48:
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar14 = *plVar10;
      lVar9 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03117f98;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,lVar9,0);
LAB_03117f98:
      uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar15 & 1) != 0) {
        lVar14 = *plVar10;
        lVar9 = *(long *)puVar4;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar9) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_03117ff8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ae9f78(plVar10,lVar9,1);
LAB_03117ff8:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar12);
        }
        uVar13 = FUN_039230bc(plVar12,0);
        uVar15 = FUN_02ee6670(uVar13,*(undefined8 *)puVar7,0);
        if ((uVar15 & 1) == 0) {
          fVar18 = (float)FUN_03928280(plVar12,0);
          fVar19 = (float)FUN_0392a7f0(plVar12,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          fVar21 = fVar22 * fVar20;
          fVar20 = fVar22 * param_3;
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x14;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(float *)(lVar9 + 0x20) = fVar22 * fVar18;
            *(float *)(lVar9 + 0x24) = fVar21;
            *(float *)(lVar9 + 0x28) = fVar20;
            *(float *)(lVar9 + 0x2c) = fVar19 * 0.5;
            *(int *)(lVar9 + 0x30) = iVar17;
            param_3 = fVar21;
          }
          else {
            fStack0000000000000008 = fVar22 * fVar18;
            fStack000000000000000c = fVar21;
            fStack0000000000000010 = fVar20;
            fStack0000000000000014 = fVar19 * 0.5;
            in_stack_00000018 = iVar17;
            FUN_02b1c4e4(lVar8,&stack0x00000008,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            param_3 = fVar21;
          }
          uVar13 = FUN_0391c2b8(plVar12,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03923a90(uVar13,0);
        }
        goto LAB_03117f48;
      }
      plVar10 = (long *)thunk_FUN_01afa9e0(plVar10,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                          );
      if (plVar10 != (long *)0x0) {
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03118198;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01ae9f78(plVar10,*(long *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                               0);
LAB_03118198:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x18) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


