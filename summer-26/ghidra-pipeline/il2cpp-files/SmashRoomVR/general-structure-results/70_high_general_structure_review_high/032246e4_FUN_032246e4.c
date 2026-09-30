/*
FUNCTION_NAME: FUN_032246e4
ENTRY_POINT: 032246e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_6
*/


void FUN_032246e4(double param_1,long param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  puVar5 = PTR_DAT_03d83c30;
  if ((DAT_03ff4676 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83c30);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d83cb8);
    DAT_03ff4676 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03ff46e8 == '\0') {
    thunk_FUN_01ad9084(PTR_DAT_03d83c30);
    DAT_03ff46e8 = '\x01';
  }
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar5;
  }
  if (**(int **)(lVar6 + 0xb8) == 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2acc(*(undefined8 *)PTR_DAT_03d83cb8,0);
    return;
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03ff46e8 == '\0') {
    thunk_FUN_01ad9084(PTR_DAT_03d83c30);
    DAT_03ff46e8 = '\x01';
  }
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar5;
  }
  dVar10 = (param_1 + DAT_00b92840) / (double)**(int **)(lVar6 + 0xb8);
  if ((1.0 <= dVar10) && (dVar10 <= DAT_00b92630)) {
    iVar1 = -0x80000000;
    if (dVar10 != INFINITY) {
      iVar1 = (int)dVar10;
    }
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    iVar2 = *(int *)(param_3 + 0x18);
    iVar3 = 0;
    if (param_4 != 0) {
      iVar3 = iVar2 / param_4;
    }
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = iVar3 / iVar1;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(int *)(param_2 + 0x14) = iVar4 + 1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03ff46e7 == '\0') {
      thunk_FUN_01ad9084(PTR_DAT_03d83c30);
      DAT_03ff46e7 = '\x01';
    }
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar5;
    }
    uVar7 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,*(int *)(*(long *)(lVar6 + 0xb8) + 4) * (iVar4 + 1));
    *(undefined8 *)(param_2 + 0x18) = uVar7;
    thunk_FUN_01b4f09c();
    iVar3 = 0;
    if (param_4 != 0) {
      iVar3 = param_5 / param_4;
    }
    uVar8 = param_5 - iVar3 * param_4;
    if ((int)uVar8 < iVar2) {
      dVar11 = 0.0;
      do {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff46e7 == '\0') {
          thunk_FUN_01ad9084(puVar5);
          DAT_03ff46e7 = '\x01';
        }
        lVar6 = *(long *)puVar5;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar5;
        }
        if (*(int *)(*(long *)(lVar6 + 0xb8) + 4) == 1) {
          if (*(uint *)(param_3 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          fVar9 = ABS(*(float *)(param_3 + (long)(int)uVar8 * 4 + 0x20));
          if (1.0 < fVar9) {
            fVar9 = 1.0;
          }
          FUN_0322419c(param_2,(int)(fVar9 * 255.0));
        }
        dVar11 = (dVar10 - (double)iVar1) + dVar11;
        iVar3 = -0x80000000;
        if (dVar11 != INFINITY) {
          iVar3 = (int)dVar11;
        }
        iVar4 = 0;
        if (0 < iVar3) {
          iVar4 = iVar3 * param_4;
        }
        uVar8 = uVar8 + iVar1 * param_4 + iVar4;
        if (0 < iVar3) {
          dVar11 = dVar11 - (double)iVar3;
        }
      } while ((int)uVar8 < iVar2);
    }
  }
  return;
}


