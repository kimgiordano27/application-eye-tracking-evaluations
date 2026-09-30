/*
FUNCTION_NAME: FUN_06245140
ENTRY_POINT: 06245140
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_3
*/


void FUN_06245140(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  undefined8 uVar24;
  long lVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long *local_d8;
  int local_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  
  if ((DAT_06b8b78e & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_InstallAsync__);
    FUN_02d6084c(Method_UnityEngine_XR_XRSettings_set_renderViewportScale__);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_get_Item__);
    FUN_02d6084c(PTR_DAT_0676bcc8);
    DAT_06b8b78e = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar21 = *param_2;
    uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar22 != 0) {
      piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) ==
            *(long *)Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_InstallAsync__) {
          puVar20 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
          goto LAB_06245220;
        }
        uVar22 = uVar22 - 1;
        piVar23 = piVar23 + 4;
      } while (uVar22 != 0);
    }
    puVar20 = (undefined8 *)
              FUN_02d9a5d4(param_2,*(long *)
                                    Method_UnityEngine_XR_ARSubsystems_XRSessionSubsystem_InstallAsync__
                           ,0);
LAB_06245220:
    iVar16 = (*(code *)*puVar20)(param_2,puVar20[1]);
    puVar4 = Method_UnityEngine_XR_XRSettings_set_renderViewportScale__;
    puVar3 = Method_UnityEngine_XR_ARSubsystems_XRReferenceImageLibrary_get_Item__;
    puVar2 = PTR_DAT_0675e1b8;
    uVar1 = iVar16 - param_3;
    if (7 < (int)uVar1) {
      uVar1 = 8;
    }
    if (param_3 < (int)(uVar1 + param_3)) {
      uVar26 = 0;
      iVar16 = param_3;
      do {
        lVar21 = *param_2;
        uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
              puVar20 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_062452b8;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar20 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar4,0);
LAB_062452b8:
        (*(code *)*puVar20)(&local_d8,param_2,iVar16,puVar20[1]);
        plVar5 = local_d8;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar22 = FUN_0606a004(plVar5,0,0);
        if ((uVar22 & 1) != 0) {
          lVar21 = *(long *)puVar3;
          lVar25 = *(long *)(param_1 + 0x20);
          if (*(int *)(lVar21 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar21 = *(long *)puVar3;
          }
          lVar21 = **(long **)(lVar21 + 0xb8);
          if (lVar21 == 0) goto LAB_062456d8;
          if (*(uint *)(lVar21 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          if (lVar25 == 0) goto LAB_062456d8;
          thunk_FUN_06032524(lVar25,*(undefined4 *)(lVar21 + (long)(int)uVar26 * 4 + 0x20),plVar5,0)
          ;
        }
        uVar26 = uVar26 + 1;
        iVar16 = iVar16 + 1;
      } while (uVar26 != uVar1);
    }
    uVar24 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0676bcc8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_06223b9c(uVar24,0);
    FUN_0602e7f8(7,0);
    if (param_3 < (int)(uVar1 + param_3)) {
      uVar26 = 0;
      do {
        puVar2 = PTR_DAT_0675e6d8;
        lVar21 = *param_2;
        uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar22 != 0) {
          piVar23 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) ==
                *(long *)Method_UnityEngine_XR_XRSettings_set_renderViewportScale__) {
              puVar20 = (undefined8 *)(lVar21 + (long)*piVar23 * 0x10 + 0x138);
              goto LAB_062453f8;
            }
            uVar22 = uVar22 - 1;
            piVar23 = piVar23 + 4;
          } while (uVar22 != 0);
        }
        puVar20 = (undefined8 *)
                  FUN_02d9a5d4(param_2,*(long *)
                                        Method_UnityEngine_XR_XRSettings_set_renderViewportScale__,0
                              );
LAB_062453f8:
        (*(code *)*puVar20)(&local_d8,param_2,param_3,puVar20[1]);
        uVar15 = uStack_a8;
        uVar14 = local_ac;
        uVar13 = uStack_b0;
        uVar12 = local_b4;
        iVar11 = local_b8;
        iVar10 = iStack_bc;
        iVar9 = local_c0;
        iVar8 = iStack_c4;
        iVar7 = local_c8;
        iVar6 = iStack_cc;
        iVar16 = local_d0;
        plVar5 = local_d8;
        if (local_d8 == (long *)0x0) goto LAB_062456d8;
        iVar17 = (**(code **)(*local_d8 + 0x188))(local_d8,*(undefined8 *)(*local_d8 + 400));
        lVar21 = *plVar5;
        iVar18 = (**(code **)(lVar21 + 0x1a8))(plVar5,*(undefined8 *)(lVar21 + 0x1b0));
        if (DAT_06b86881 == '\0') {
          FUN_02d6084c(puVar2);
          DAT_06b86881 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        iVar19 = FUN_0500808c(iVar16,iVar7 + iVar16,0);
        if (DAT_06b86882 == '\0') {
          FUN_02d6084c(puVar2);
          DAT_06b86882 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        fVar28 = (float)(iVar10 - iVar11);
        fVar30 = (float)(iVar9 - iVar11);
        fVar31 = (float)(iVar9 + iVar7 + iVar11);
        fVar29 = (float)(iVar10 + iVar8 + iVar11);
        fVar33 = (1.0 / (float)iVar17) * (float)(iVar16 - iVar11);
        fVar32 = (1.0 / (float)iVar18) * (float)(iVar6 - iVar11);
        fVar27 = (1.0 / (float)iVar17) * (float)(iVar19 + iVar11);
        iVar16 = FUN_0500808c(iVar6,iVar8 + iVar6,0);
        fVar34 = (1.0 / (float)iVar18) * (float)(iVar16 + iVar11);
        FUN_0602e444(uVar12,uVar13,uVar14,uVar15,0);
        fVar35 = (float)(int)uVar26;
        FUN_0602e358(fVar33,fVar32,fVar35,0);
        FUN_0602e308(fVar30,fVar28,0,0);
        FUN_0602e444(uVar12,uVar13,uVar14,uVar15,0);
        FUN_0602e358(fVar33,fVar34,fVar35,0);
        FUN_0602e308(fVar30,fVar29,0,0);
        FUN_0602e444(uVar12,uVar13,uVar14,uVar15,0);
        FUN_0602e358(fVar27,fVar34,fVar35,0);
        FUN_0602e308(fVar31,fVar29,0,0);
        FUN_0602e444(uVar12,uVar13,uVar14,uVar15,0);
        FUN_0602e358(fVar27,fVar32,fVar35,0);
        FUN_0602e308(fVar31,fVar28,0,0);
        uVar26 = uVar26 + 1;
        param_3 = param_3 + 1;
      } while (uVar26 != uVar1);
    }
    FUN_0602e834(0);
    return;
  }
LAB_062456d8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


